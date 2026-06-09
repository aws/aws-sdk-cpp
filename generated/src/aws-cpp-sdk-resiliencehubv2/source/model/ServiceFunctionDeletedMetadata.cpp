/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/ServiceFunctionDeletedMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

ServiceFunctionDeletedMetadata::ServiceFunctionDeletedMetadata(JsonView jsonValue) { *this = jsonValue; }

ServiceFunctionDeletedMetadata& ServiceFunctionDeletedMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("serviceFunctionId")) {
    m_serviceFunctionId = jsonValue.GetString("serviceFunctionId");
    m_serviceFunctionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceFunctionName")) {
    m_serviceFunctionName = jsonValue.GetString("serviceFunctionName");
    m_serviceFunctionNameHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceFunctionDeletedMetadata::Jsonize() const {
  JsonValue payload;

  if (m_serviceFunctionIdHasBeenSet) {
    payload.WithString("serviceFunctionId", m_serviceFunctionId);
  }

  if (m_serviceFunctionNameHasBeenSet) {
    payload.WithString("serviceFunctionName", m_serviceFunctionName);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
