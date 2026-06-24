/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/outposts/model/DetailedInstanceTypeItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {

DetailedInstanceTypeItem::DetailedInstanceTypeItem(JsonView jsonValue) { *this = jsonValue; }

DetailedInstanceTypeItem& DetailedInstanceTypeItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InstanceType")) {
    m_instanceType = jsonValue.GetString("InstanceType");
    m_instanceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VCPUs")) {
    m_vCPUs = jsonValue.GetInteger("VCPUs");
    m_vCPUsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MemoryInMib")) {
    m_memoryInMib = jsonValue.GetInteger("MemoryInMib");
    m_memoryInMibHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NetworkPerformance")) {
    m_networkPerformance = jsonValue.GetString("NetworkPerformance");
    m_networkPerformanceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FormFactorConfigs")) {
    Aws::Utils::Array<JsonView> formFactorConfigsJsonList = jsonValue.GetArray("FormFactorConfigs");
    for (unsigned formFactorConfigsIndex = 0; formFactorConfigsIndex < formFactorConfigsJsonList.GetLength(); ++formFactorConfigsIndex) {
      m_formFactorConfigs.push_back(formFactorConfigsJsonList[formFactorConfigsIndex].AsObject());
    }
    m_formFactorConfigsHasBeenSet = true;
  }
  return *this;
}

JsonValue DetailedInstanceTypeItem::Jsonize() const {
  JsonValue payload;

  if (m_instanceTypeHasBeenSet) {
    payload.WithString("InstanceType", m_instanceType);
  }

  if (m_vCPUsHasBeenSet) {
    payload.WithInteger("VCPUs", m_vCPUs);
  }

  if (m_memoryInMibHasBeenSet) {
    payload.WithInteger("MemoryInMib", m_memoryInMib);
  }

  if (m_networkPerformanceHasBeenSet) {
    payload.WithString("NetworkPerformance", m_networkPerformance);
  }

  if (m_formFactorConfigsHasBeenSet) {
    Aws::Utils::Array<JsonValue> formFactorConfigsJsonList(m_formFactorConfigs.size());
    for (unsigned formFactorConfigsIndex = 0; formFactorConfigsIndex < formFactorConfigsJsonList.GetLength(); ++formFactorConfigsIndex) {
      formFactorConfigsJsonList[formFactorConfigsIndex].AsObject(m_formFactorConfigs[formFactorConfigsIndex].Jsonize());
    }
    payload.WithArray("FormFactorConfigs", std::move(formFactorConfigsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
