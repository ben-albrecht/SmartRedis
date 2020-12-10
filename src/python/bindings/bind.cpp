#include "pyclient.h"

namespace py = pybind11;


PYBIND11_MODULE(silcPy, m) {
    m.doc() = "silc client"; // optional module docstring

    py::class_<SmartSimPyClient>(m, "Client")
        .def(py::init<bool, bool>())
        .def("put_tensor", &SmartSimPyClient::put_tensor)
        .def("get_tensor", &SmartSimPyClient::get_tensor);
}
