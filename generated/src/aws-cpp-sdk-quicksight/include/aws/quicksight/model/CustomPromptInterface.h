/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>The custom prompt interface configuration that defines how an agent's prompt
 * is configured.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CustomPromptInterface">AWS
 * API Reference</a></p>
 */
class CustomPromptInterface {
 public:
  AWS_QUICKSIGHT_API CustomPromptInterface() = default;
  AWS_QUICKSIGHT_API CustomPromptInterface(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API CustomPromptInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the model profile.</p>
   */
  inline const Aws::String& GetModelProfileId() const { return m_modelProfileId; }
  inline bool ModelProfileIdHasBeenSet() const { return m_modelProfileIdHasBeenSet; }
  template <typename ModelProfileIdT = Aws::String>
  void SetModelProfileId(ModelProfileIdT&& value) {
    m_modelProfileIdHasBeenSet = true;
    m_modelProfileId = std::forward<ModelProfileIdT>(value);
  }
  template <typename ModelProfileIdT = Aws::String>
  CustomPromptInterface& WithModelProfileId(ModelProfileIdT&& value) {
    SetModelProfileId(std::forward<ModelProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subscription identifier.</p>
   */
  inline const Aws::String& GetSubscriptionId() const { return m_subscriptionId; }
  inline bool SubscriptionIdHasBeenSet() const { return m_subscriptionIdHasBeenSet; }
  template <typename SubscriptionIdT = Aws::String>
  void SetSubscriptionId(SubscriptionIdT&& value) {
    m_subscriptionIdHasBeenSet = true;
    m_subscriptionId = std::forward<SubscriptionIdT>(value);
  }
  template <typename SubscriptionIdT = Aws::String>
  CustomPromptInterface& WithSubscriptionId(SubscriptionIdT&& value) {
    SetSubscriptionId(std::forward<SubscriptionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID for the Q Business service.</p>
   */
  inline const Aws::String& GetQbsAwsAccountId() const { return m_qbsAwsAccountId; }
  inline bool QbsAwsAccountIdHasBeenSet() const { return m_qbsAwsAccountIdHasBeenSet; }
  template <typename QbsAwsAccountIdT = Aws::String>
  void SetQbsAwsAccountId(QbsAwsAccountIdT&& value) {
    m_qbsAwsAccountIdHasBeenSet = true;
    m_qbsAwsAccountId = std::forward<QbsAwsAccountIdT>(value);
  }
  template <typename QbsAwsAccountIdT = Aws::String>
  CustomPromptInterface& WithQbsAwsAccountId(QbsAwsAccountIdT&& value) {
    SetQbsAwsAccountId(std::forward<QbsAwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Instructions for the desired response length.</p>
   */
  inline const Aws::String& GetResponseLength() const { return m_responseLength; }
  inline bool ResponseLengthHasBeenSet() const { return m_responseLengthHasBeenSet; }
  template <typename ResponseLengthT = Aws::String>
  void SetResponseLength(ResponseLengthT&& value) {
    m_responseLengthHasBeenSet = true;
    m_responseLength = std::forward<ResponseLengthT>(value);
  }
  template <typename ResponseLengthT = Aws::String>
  CustomPromptInterface& WithResponseLength(ResponseLengthT&& value) {
    SetResponseLength(std::forward<ResponseLengthT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Instructions for the desired output style.</p>
   */
  inline const Aws::String& GetOutputStyle() const { return m_outputStyle; }
  inline bool OutputStyleHasBeenSet() const { return m_outputStyleHasBeenSet; }
  template <typename OutputStyleT = Aws::String>
  void SetOutputStyle(OutputStyleT&& value) {
    m_outputStyleHasBeenSet = true;
    m_outputStyle = std::forward<OutputStyleT>(value);
  }
  template <typename OutputStyleT = Aws::String>
  CustomPromptInterface& WithOutputStyle(OutputStyleT&& value) {
    SetOutputStyle(std::forward<OutputStyleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Instructions that define the agent's identity and persona.</p>
   */
  inline const Aws::String& GetIdentity() const { return m_identity; }
  inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }
  template <typename IdentityT = Aws::String>
  void SetIdentity(IdentityT&& value) {
    m_identityHasBeenSet = true;
    m_identity = std::forward<IdentityT>(value);
  }
  template <typename IdentityT = Aws::String>
  CustomPromptInterface& WithIdentity(IdentityT&& value) {
    SetIdentity(std::forward<IdentityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Instructions for the desired tone of responses.</p>
   */
  inline const Aws::String& GetTone() const { return m_tone; }
  inline bool ToneHasBeenSet() const { return m_toneHasBeenSet; }
  template <typename ToneT = Aws::String>
  void SetTone(ToneT&& value) {
    m_toneHasBeenSet = true;
    m_tone = std::forward<ToneT>(value);
  }
  template <typename ToneT = Aws::String>
  CustomPromptInterface& WithTone(ToneT&& value) {
    SetTone(std::forward<ToneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Custom instructions for the agent's behavior.</p>
   */
  inline const Aws::String& GetCustomInstructions() const { return m_customInstructions; }
  inline bool CustomInstructionsHasBeenSet() const { return m_customInstructionsHasBeenSet; }
  template <typename CustomInstructionsT = Aws::String>
  void SetCustomInstructions(CustomInstructionsT&& value) {
    m_customInstructionsHasBeenSet = true;
    m_customInstructions = std::forward<CustomInstructionsT>(value);
  }
  template <typename CustomInstructionsT = Aws::String>
  CustomPromptInterface& WithCustomInstructions(CustomInstructionsT&& value) {
    SetCustomInstructions(std::forward<CustomInstructionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of the custom prompt configuration.</p>
   */
  inline const Aws::String& GetPromptSummary() const { return m_promptSummary; }
  inline bool PromptSummaryHasBeenSet() const { return m_promptSummaryHasBeenSet; }
  template <typename PromptSummaryT = Aws::String>
  void SetPromptSummary(PromptSummaryT&& value) {
    m_promptSummaryHasBeenSet = true;
    m_promptSummary = std::forward<PromptSummaryT>(value);
  }
  template <typename PromptSummaryT = Aws::String>
  CustomPromptInterface& WithPromptSummary(PromptSummaryT&& value) {
    SetPromptSummary(std::forward<PromptSummaryT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_modelProfileId;

  Aws::String m_subscriptionId;

  Aws::String m_qbsAwsAccountId;

  Aws::String m_responseLength;

  Aws::String m_outputStyle;

  Aws::String m_identity;

  Aws::String m_tone;

  Aws::String m_customInstructions;

  Aws::String m_promptSummary;
  bool m_modelProfileIdHasBeenSet = false;
  bool m_subscriptionIdHasBeenSet = false;
  bool m_qbsAwsAccountIdHasBeenSet = false;
  bool m_responseLengthHasBeenSet = false;
  bool m_outputStyleHasBeenSet = false;
  bool m_identityHasBeenSet = false;
  bool m_toneHasBeenSet = false;
  bool m_customInstructionsHasBeenSet = false;
  bool m_promptSummaryHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
