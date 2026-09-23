/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/InvalidFirewallReasons.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

InvalidFirewallReasons::InvalidFirewallReasons(JsonView jsonValue) { *this = jsonValue; }

InvalidFirewallReasons& InvalidFirewallReasons::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("incorrectSingleValueConfigurations")) {
    Aws::Utils::Array<JsonView> incorrectSingleValueConfigurationsJsonList = jsonValue.GetArray("incorrectSingleValueConfigurations");
    for (unsigned incorrectSingleValueConfigurationsIndex = 0;
         incorrectSingleValueConfigurationsIndex < incorrectSingleValueConfigurationsJsonList.GetLength();
         ++incorrectSingleValueConfigurationsIndex) {
      m_incorrectSingleValueConfigurations.push_back(
          incorrectSingleValueConfigurationsJsonList[incorrectSingleValueConfigurationsIndex].AsObject());
    }
    m_incorrectSingleValueConfigurationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("missingAppendableConfigurationValues")) {
    Aws::Utils::Array<JsonView> missingAppendableConfigurationValuesJsonList = jsonValue.GetArray("missingAppendableConfigurationValues");
    for (unsigned missingAppendableConfigurationValuesIndex = 0;
         missingAppendableConfigurationValuesIndex < missingAppendableConfigurationValuesJsonList.GetLength();
         ++missingAppendableConfigurationValuesIndex) {
      m_missingAppendableConfigurationValues.push_back(
          missingAppendableConfigurationValuesJsonList[missingAppendableConfigurationValuesIndex].AsObject());
    }
    m_missingAppendableConfigurationValuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("unexpectedAppendableConfigurationValues")) {
    Aws::Utils::Array<JsonView> unexpectedAppendableConfigurationValuesJsonList =
        jsonValue.GetArray("unexpectedAppendableConfigurationValues");
    for (unsigned unexpectedAppendableConfigurationValuesIndex = 0;
         unexpectedAppendableConfigurationValuesIndex < unexpectedAppendableConfigurationValuesJsonList.GetLength();
         ++unexpectedAppendableConfigurationValuesIndex) {
      m_unexpectedAppendableConfigurationValues.push_back(
          unexpectedAppendableConfigurationValuesJsonList[unexpectedAppendableConfigurationValuesIndex].AsObject());
    }
    m_unexpectedAppendableConfigurationValuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("incorrectAppendableConfigurationOrder")) {
    Aws::Utils::Array<JsonView> incorrectAppendableConfigurationOrderJsonList = jsonValue.GetArray("incorrectAppendableConfigurationOrder");
    for (unsigned incorrectAppendableConfigurationOrderIndex = 0;
         incorrectAppendableConfigurationOrderIndex < incorrectAppendableConfigurationOrderJsonList.GetLength();
         ++incorrectAppendableConfigurationOrderIndex) {
      m_incorrectAppendableConfigurationOrder.push_back(
          incorrectAppendableConfigurationOrderJsonList[incorrectAppendableConfigurationOrderIndex].AsObject());
    }
    m_incorrectAppendableConfigurationOrderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("missingMergeableConfigurationValues")) {
    Aws::Utils::Array<JsonView> missingMergeableConfigurationValuesJsonList = jsonValue.GetArray("missingMergeableConfigurationValues");
    for (unsigned missingMergeableConfigurationValuesIndex = 0;
         missingMergeableConfigurationValuesIndex < missingMergeableConfigurationValuesJsonList.GetLength();
         ++missingMergeableConfigurationValuesIndex) {
      m_missingMergeableConfigurationValues.push_back(
          missingMergeableConfigurationValuesJsonList[missingMergeableConfigurationValuesIndex].AsObject());
    }
    m_missingMergeableConfigurationValuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("unexpectedMergeableConfigurationValues")) {
    Aws::Utils::Array<JsonView> unexpectedMergeableConfigurationValuesJsonList =
        jsonValue.GetArray("unexpectedMergeableConfigurationValues");
    for (unsigned unexpectedMergeableConfigurationValuesIndex = 0;
         unexpectedMergeableConfigurationValuesIndex < unexpectedMergeableConfigurationValuesJsonList.GetLength();
         ++unexpectedMergeableConfigurationValuesIndex) {
      m_unexpectedMergeableConfigurationValues.push_back(
          unexpectedMergeableConfigurationValuesJsonList[unexpectedMergeableConfigurationValuesIndex].AsObject());
    }
    m_unexpectedMergeableConfigurationValuesHasBeenSet = true;
  }
  return *this;
}

JsonValue InvalidFirewallReasons::Jsonize() const {
  JsonValue payload;

  if (m_incorrectSingleValueConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> incorrectSingleValueConfigurationsJsonList(m_incorrectSingleValueConfigurations.size());
    for (unsigned incorrectSingleValueConfigurationsIndex = 0;
         incorrectSingleValueConfigurationsIndex < incorrectSingleValueConfigurationsJsonList.GetLength();
         ++incorrectSingleValueConfigurationsIndex) {
      incorrectSingleValueConfigurationsJsonList[incorrectSingleValueConfigurationsIndex].AsObject(
          m_incorrectSingleValueConfigurations[incorrectSingleValueConfigurationsIndex].Jsonize());
    }
    payload.WithArray("incorrectSingleValueConfigurations", std::move(incorrectSingleValueConfigurationsJsonList));
  }

  if (m_missingAppendableConfigurationValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> missingAppendableConfigurationValuesJsonList(m_missingAppendableConfigurationValues.size());
    for (unsigned missingAppendableConfigurationValuesIndex = 0;
         missingAppendableConfigurationValuesIndex < missingAppendableConfigurationValuesJsonList.GetLength();
         ++missingAppendableConfigurationValuesIndex) {
      missingAppendableConfigurationValuesJsonList[missingAppendableConfigurationValuesIndex].AsObject(
          m_missingAppendableConfigurationValues[missingAppendableConfigurationValuesIndex].Jsonize());
    }
    payload.WithArray("missingAppendableConfigurationValues", std::move(missingAppendableConfigurationValuesJsonList));
  }

  if (m_unexpectedAppendableConfigurationValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> unexpectedAppendableConfigurationValuesJsonList(m_unexpectedAppendableConfigurationValues.size());
    for (unsigned unexpectedAppendableConfigurationValuesIndex = 0;
         unexpectedAppendableConfigurationValuesIndex < unexpectedAppendableConfigurationValuesJsonList.GetLength();
         ++unexpectedAppendableConfigurationValuesIndex) {
      unexpectedAppendableConfigurationValuesJsonList[unexpectedAppendableConfigurationValuesIndex].AsObject(
          m_unexpectedAppendableConfigurationValues[unexpectedAppendableConfigurationValuesIndex].Jsonize());
    }
    payload.WithArray("unexpectedAppendableConfigurationValues", std::move(unexpectedAppendableConfigurationValuesJsonList));
  }

  if (m_incorrectAppendableConfigurationOrderHasBeenSet) {
    Aws::Utils::Array<JsonValue> incorrectAppendableConfigurationOrderJsonList(m_incorrectAppendableConfigurationOrder.size());
    for (unsigned incorrectAppendableConfigurationOrderIndex = 0;
         incorrectAppendableConfigurationOrderIndex < incorrectAppendableConfigurationOrderJsonList.GetLength();
         ++incorrectAppendableConfigurationOrderIndex) {
      incorrectAppendableConfigurationOrderJsonList[incorrectAppendableConfigurationOrderIndex].AsObject(
          m_incorrectAppendableConfigurationOrder[incorrectAppendableConfigurationOrderIndex].Jsonize());
    }
    payload.WithArray("incorrectAppendableConfigurationOrder", std::move(incorrectAppendableConfigurationOrderJsonList));
  }

  if (m_missingMergeableConfigurationValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> missingMergeableConfigurationValuesJsonList(m_missingMergeableConfigurationValues.size());
    for (unsigned missingMergeableConfigurationValuesIndex = 0;
         missingMergeableConfigurationValuesIndex < missingMergeableConfigurationValuesJsonList.GetLength();
         ++missingMergeableConfigurationValuesIndex) {
      missingMergeableConfigurationValuesJsonList[missingMergeableConfigurationValuesIndex].AsObject(
          m_missingMergeableConfigurationValues[missingMergeableConfigurationValuesIndex].Jsonize());
    }
    payload.WithArray("missingMergeableConfigurationValues", std::move(missingMergeableConfigurationValuesJsonList));
  }

  if (m_unexpectedMergeableConfigurationValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> unexpectedMergeableConfigurationValuesJsonList(m_unexpectedMergeableConfigurationValues.size());
    for (unsigned unexpectedMergeableConfigurationValuesIndex = 0;
         unexpectedMergeableConfigurationValuesIndex < unexpectedMergeableConfigurationValuesJsonList.GetLength();
         ++unexpectedMergeableConfigurationValuesIndex) {
      unexpectedMergeableConfigurationValuesJsonList[unexpectedMergeableConfigurationValuesIndex].AsObject(
          m_unexpectedMergeableConfigurationValues[unexpectedMergeableConfigurationValuesIndex].Jsonize());
    }
    payload.WithArray("unexpectedMergeableConfigurationValues", std::move(unexpectedMergeableConfigurationValuesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
