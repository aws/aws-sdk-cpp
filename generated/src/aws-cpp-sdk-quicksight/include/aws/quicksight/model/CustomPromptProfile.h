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
 * <p>A reference to an existing custom prompt profile.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CustomPromptProfile">AWS
 * API Reference</a></p>
 */
class CustomPromptProfile {
 public:
  AWS_QUICKSIGHT_API CustomPromptProfile() = default;
  AWS_QUICKSIGHT_API CustomPromptProfile(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API CustomPromptProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  CustomPromptProfile& WithModelProfileId(ModelProfileIdT&& value) {
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
  CustomPromptProfile& WithSubscriptionId(SubscriptionIdT&& value) {
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
  CustomPromptProfile& WithQbsAwsAccountId(QbsAwsAccountIdT&& value) {
    SetQbsAwsAccountId(std::forward<QbsAwsAccountIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_modelProfileId;

  Aws::String m_subscriptionId;

  Aws::String m_qbsAwsAccountId;
  bool m_modelProfileIdHasBeenSet = false;
  bool m_subscriptionIdHasBeenSet = false;
  bool m_qbsAwsAccountIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
