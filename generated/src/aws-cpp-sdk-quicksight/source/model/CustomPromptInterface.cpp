/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/CustomPromptInterface.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

CustomPromptInterface::CustomPromptInterface(JsonView jsonValue) { *this = jsonValue; }

CustomPromptInterface& CustomPromptInterface::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("ResponseLength")) {
    m_responseLength = jsonValue.GetString("ResponseLength");
    m_responseLengthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OutputStyle")) {
    m_outputStyle = jsonValue.GetString("OutputStyle");
    m_outputStyleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Identity")) {
    m_identity = jsonValue.GetString("Identity");
    m_identityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tone")) {
    m_tone = jsonValue.GetString("Tone");
    m_toneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CustomInstructions")) {
    m_customInstructions = jsonValue.GetString("CustomInstructions");
    m_customInstructionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("promptSummary")) {
    m_promptSummary = jsonValue.GetString("promptSummary");
    m_promptSummaryHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomPromptInterface::Jsonize() const {
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

  if (m_responseLengthHasBeenSet) {
    payload.WithString("ResponseLength", m_responseLength);
  }

  if (m_outputStyleHasBeenSet) {
    payload.WithString("OutputStyle", m_outputStyle);
  }

  if (m_identityHasBeenSet) {
    payload.WithString("Identity", m_identity);
  }

  if (m_toneHasBeenSet) {
    payload.WithString("Tone", m_tone);
  }

  if (m_customInstructionsHasBeenSet) {
    payload.WithString("CustomInstructions", m_customInstructions);
  }

  if (m_promptSummaryHasBeenSet) {
    payload.WithString("promptSummary", m_promptSummary);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
