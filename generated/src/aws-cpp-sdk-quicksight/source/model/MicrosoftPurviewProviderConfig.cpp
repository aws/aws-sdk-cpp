/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/MicrosoftPurviewProviderConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

MicrosoftPurviewProviderConfig::MicrosoftPurviewProviderConfig(JsonView jsonValue) { *this = jsonValue; }

MicrosoftPurviewProviderConfig& MicrosoftPurviewProviderConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Credentials")) {
    m_credentials = jsonValue.GetObject("Credentials");
    m_credentialsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LabelActionMappings")) {
    Aws::Utils::Array<JsonView> labelActionMappingsJsonList = jsonValue.GetArray("LabelActionMappings");
    for (unsigned labelActionMappingsIndex = 0; labelActionMappingsIndex < labelActionMappingsJsonList.GetLength();
         ++labelActionMappingsIndex) {
      m_labelActionMappings.push_back(labelActionMappingsJsonList[labelActionMappingsIndex].AsObject());
    }
    m_labelActionMappingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UnmappedAction")) {
    m_unmappedAction = DlpActionMapper::GetDlpActionForName(jsonValue.GetString("UnmappedAction"));
    m_unmappedActionHasBeenSet = true;
  }
  return *this;
}

JsonValue MicrosoftPurviewProviderConfig::Jsonize() const {
  JsonValue payload;

  if (m_credentialsHasBeenSet) {
    payload.WithObject("Credentials", m_credentials.Jsonize());
  }

  if (m_labelActionMappingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> labelActionMappingsJsonList(m_labelActionMappings.size());
    for (unsigned labelActionMappingsIndex = 0; labelActionMappingsIndex < labelActionMappingsJsonList.GetLength();
         ++labelActionMappingsIndex) {
      labelActionMappingsJsonList[labelActionMappingsIndex].AsObject(m_labelActionMappings[labelActionMappingsIndex].Jsonize());
    }
    payload.WithArray("LabelActionMappings", std::move(labelActionMappingsJsonList));
  }

  if (m_unmappedActionHasBeenSet) {
    payload.WithString("UnmappedAction", DlpActionMapper::GetNameForDlpAction(m_unmappedAction));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
