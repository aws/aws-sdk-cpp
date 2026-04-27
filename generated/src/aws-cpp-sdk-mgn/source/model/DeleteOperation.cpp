/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/DeleteOperation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

DeleteOperation::DeleteOperation(JsonView jsonValue) { *this = jsonValue; }

DeleteOperation& DeleteOperation::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue DeleteOperation::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
