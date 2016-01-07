//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "kudu/codegen/jit_wrapper.h"

#include <llvm/ExecutionEngine/ExecutionEngine.h>

#include "kudu/gutil/gscoped_ptr.h"
#include "kudu/util/faststring.h"

using llvm::ExecutionEngine;

namespace kudu {
namespace codegen {

JITWrapper::JITWrapper(gscoped_ptr<JITCodeOwner> owner)
  : owner_(owner.Pass()) {}

JITWrapper::~JITWrapper() {}

} // namespace codegen
} // namespace kudu