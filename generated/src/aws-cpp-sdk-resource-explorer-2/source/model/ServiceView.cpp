/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resource-explorer-2/model/ServiceView.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ResourceExplorer2 {
namespace Model {

ServiceView::ServiceView(JsonView jsonValue) { *this = jsonValue; }

ServiceView& ServiceView::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ServiceViewArn")) {
    m_serviceViewArn = jsonValue.GetString("ServiceViewArn");
    m_serviceViewArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ServiceViewName")) {
    m_serviceViewName = jsonValue.GetString("ServiceViewName");
    m_serviceViewNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Filters")) {
    m_filters = jsonValue.GetObject("Filters");
    m_filtersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IncludedProperties")) {
    Aws::Utils::Array<JsonView> includedPropertiesJsonList = jsonValue.GetArray("IncludedProperties");
    for (unsigned includedPropertiesIndex = 0; includedPropertiesIndex < includedPropertiesJsonList.GetLength();
         ++includedPropertiesIndex) {
      m_includedProperties.push_back(includedPropertiesJsonList[includedPropertiesIndex].AsObject());
    }
    m_includedPropertiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StreamingAccessForService")) {
    m_streamingAccessForService = jsonValue.GetString("StreamingAccessForService");
    m_streamingAccessForServiceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScopeType")) {
    m_scopeType = jsonValue.GetString("ScopeType");
    m_scopeTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceView::Jsonize() const {
  JsonValue payload;

  if (m_serviceViewArnHasBeenSet) {
    payload.WithString("ServiceViewArn", m_serviceViewArn);
  }

  if (m_serviceViewNameHasBeenSet) {
    payload.WithString("ServiceViewName", m_serviceViewName);
  }

  if (m_filtersHasBeenSet) {
    payload.WithObject("Filters", m_filters.Jsonize());
  }

  if (m_includedPropertiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> includedPropertiesJsonList(m_includedProperties.size());
    for (unsigned includedPropertiesIndex = 0; includedPropertiesIndex < includedPropertiesJsonList.GetLength();
         ++includedPropertiesIndex) {
      includedPropertiesJsonList[includedPropertiesIndex].AsObject(m_includedProperties[includedPropertiesIndex].Jsonize());
    }
    payload.WithArray("IncludedProperties", std::move(includedPropertiesJsonList));
  }

  if (m_streamingAccessForServiceHasBeenSet) {
    payload.WithString("StreamingAccessForService", m_streamingAccessForService);
  }

  if (m_scopeTypeHasBeenSet) {
    payload.WithString("ScopeType", m_scopeType);
  }

  return payload;
}

}  // namespace Model
}  // namespace ResourceExplorer2
}  // namespace Aws
