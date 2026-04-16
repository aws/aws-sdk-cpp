/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconvert/model/ElementalInferenceFeed.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {

ElementalInferenceFeed::ElementalInferenceFeed(JsonView jsonValue) { *this = jsonValue; }

ElementalInferenceFeed& ElementalInferenceFeed::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("feedManagementState")) {
    m_feedManagementState = ElementalInferenceFeedManagementStateMapper::GetElementalInferenceFeedManagementStateForName(
        jsonValue.GetString("feedManagementState"));
    m_feedManagementStateHasBeenSet = true;
  }
  return *this;
}

JsonValue ElementalInferenceFeed::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_feedManagementStateHasBeenSet) {
    payload.WithString("feedManagementState",
                       ElementalInferenceFeedManagementStateMapper::GetNameForElementalInferenceFeedManagementState(m_feedManagementState));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
