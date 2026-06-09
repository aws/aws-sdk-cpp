/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/CustomPromptProfile.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

CustomPromptProfile::CustomPromptProfile(JsonView jsonValue) { *this = jsonValue; }

CustomPromptProfile& CustomPromptProfile::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ModelProfileId")) {
    m_modelProfileId = jsonValue.GetString("ModelProfileId");
    m_modelProfileIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SubscriptionId")) {
    m_subscriptionId = jsonValue.GetString("SubscriptionId");
    m_subscriptionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("QbsAwsAccountId")) {
    m_qbsAwsAccountId = jsonValue.GetString("QbsAwsAccountId");
    m_qbsAwsAccountIdHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomPromptProfile::Jsonize() const {
  JsonValue payload;

  if (m_modelProfileIdHasBeenSet) {
    payload.WithString("ModelProfileId", m_modelProfileId);
  }

  if (m_subscriptionIdHasBeenSet) {
    payload.WithString("SubscriptionId", m_subscriptionId);
  }

  if (m_qbsAwsAccountIdHasBeenSet) {
    payload.WithString("QbsAwsAccountId", m_qbsAwsAccountId);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
