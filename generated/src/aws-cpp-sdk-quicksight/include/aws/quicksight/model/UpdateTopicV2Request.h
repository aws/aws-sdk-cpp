/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/CustomInstructions.h>
#include <aws/quicksight/model/TopicV2Details.h>
#include <aws/quicksight/model/TopicV2PublishOption.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class UpdateTopicV2Request : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API UpdateTopicV2Request() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateTopicV2"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that contains the topic that you
   * want to update.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  UpdateTopicV2Request& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
   * Services Region for each Amazon Web Services account.</p>
   */
  inline const Aws::String& GetTopicId() const { return m_topicId; }
  inline bool TopicIdHasBeenSet() const { return m_topicIdHasBeenSet; }
  template <typename TopicIdT = Aws::String>
  void SetTopicId(TopicIdT&& value) {
    m_topicIdHasBeenSet = true;
    m_topicId = std::forward<TopicIdT>(value);
  }
  template <typename TopicIdT = Aws::String>
  UpdateTopicV2Request& WithTopicId(TopicIdT&& value) {
    SetTopicId(std::forward<TopicIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The definition of the topic that you want to update.</p>
   */
  inline const TopicV2Details& GetTopic() const { return m_topic; }
  inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }
  template <typename TopicT = TopicV2Details>
  void SetTopic(TopicT&& value) {
    m_topicHasBeenSet = true;
    m_topic = std::forward<TopicT>(value);
  }
  template <typename TopicT = TopicV2Details>
  UpdateTopicV2Request& WithTopic(TopicT&& value) {
    SetTopic(std::forward<TopicT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const CustomInstructions& GetCustomInstructions() const { return m_customInstructions; }
  inline bool CustomInstructionsHasBeenSet() const { return m_customInstructionsHasBeenSet; }
  template <typename CustomInstructionsT = CustomInstructions>
  void SetCustomInstructions(CustomInstructionsT&& value) {
    m_customInstructionsHasBeenSet = true;
    m_customInstructions = std::forward<CustomInstructionsT>(value);
  }
  template <typename CustomInstructionsT = CustomInstructions>
  UpdateTopicV2Request& WithCustomInstructions(CustomInstructionsT&& value) {
    SetCustomInstructions(std::forward<CustomInstructionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The publish option for the topic that you want to update.</p>
   */
  inline TopicV2PublishOption GetPublishOption() const { return m_publishOption; }
  inline bool PublishOptionHasBeenSet() const { return m_publishOptionHasBeenSet; }
  inline void SetPublishOption(TopicV2PublishOption value) {
    m_publishOptionHasBeenSet = true;
    m_publishOption = value;
  }
  inline UpdateTopicV2Request& WithPublishOption(TopicV2PublishOption value) {
    SetPublishOption(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  Aws::String m_topicId;

  TopicV2Details m_topic;

  CustomInstructions m_customInstructions;

  TopicV2PublishOption m_publishOption{TopicV2PublishOption::NOT_SET};
  bool m_awsAccountIdHasBeenSet = false;
  bool m_topicIdHasBeenSet = false;
  bool m_topicHasBeenSet = false;
  bool m_customInstructionsHasBeenSet = false;
  bool m_publishOptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
