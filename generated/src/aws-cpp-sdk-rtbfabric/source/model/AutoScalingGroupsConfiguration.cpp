/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/AutoScalingGroupsConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

AutoScalingGroupsConfiguration::AutoScalingGroupsConfiguration(JsonView jsonValue) { *this = jsonValue; }

AutoScalingGroupsConfiguration& AutoScalingGroupsConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("autoScalingGroupNames")) {
    Aws::Utils::Array<JsonView> autoScalingGroupNamesJsonList = jsonValue.GetArray("autoScalingGroupNames");
    for (unsigned autoScalingGroupNamesIndex = 0; autoScalingGroupNamesIndex < autoScalingGroupNamesJsonList.GetLength();
         ++autoScalingGroupNamesIndex) {
      m_autoScalingGroupNames.push_back(autoScalingGroupNamesJsonList[autoScalingGroupNamesIndex].AsString());
    }
    m_autoScalingGroupNamesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("roleArn")) {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AutoScalingGroupsConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_autoScalingGroupNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> autoScalingGroupNamesJsonList(m_autoScalingGroupNames.size());
    for (unsigned autoScalingGroupNamesIndex = 0; autoScalingGroupNamesIndex < autoScalingGroupNamesJsonList.GetLength();
         ++autoScalingGroupNamesIndex) {
      autoScalingGroupNamesJsonList[autoScalingGroupNamesIndex].AsString(m_autoScalingGroupNames[autoScalingGroupNamesIndex]);
    }
    payload.WithArray("autoScalingGroupNames", std::move(autoScalingGroupNamesJsonList));
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("roleArn", m_roleArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
