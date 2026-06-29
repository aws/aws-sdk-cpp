/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resource-explorer-2/model/ServiceLinkedRecorderInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ResourceExplorer2 {
namespace Model {

ServiceLinkedRecorderInfo::ServiceLinkedRecorderInfo(JsonView jsonValue) { *this = jsonValue; }

ServiceLinkedRecorderInfo& ServiceLinkedRecorderInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ServicePrincipal")) {
    m_servicePrincipal = jsonValue.GetString("ServicePrincipal");
    m_servicePrincipalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RecorderName")) {
    m_recorderName = jsonValue.GetString("RecorderName");
    m_recorderNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RecorderType")) {
    m_recorderType = RecorderTypeMapper::GetRecorderTypeForName(jsonValue.GetString("RecorderType"));
    m_recorderTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceLinkedRecorderInfo::Jsonize() const {
  JsonValue payload;

  if (m_servicePrincipalHasBeenSet) {
    payload.WithString("ServicePrincipal", m_servicePrincipal);
  }

  if (m_recorderNameHasBeenSet) {
    payload.WithString("RecorderName", m_recorderName);
  }

  if (m_recorderTypeHasBeenSet) {
    payload.WithString("RecorderType", RecorderTypeMapper::GetNameForRecorderType(m_recorderType));
  }

  return payload;
}

}  // namespace Model
}  // namespace ResourceExplorer2
}  // namespace Aws
