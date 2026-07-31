/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/CustomInstructions.h>
#include <aws/quicksight/model/Tag.h>
#include <aws/quicksight/model/TopicV2Details.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class CreateTopicV2Request : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API CreateTopicV2Request() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateTopicV2"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that you want to create a topic
   * in.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  CreateTopicV2Request& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID for the topic that you want to create. This ID is unique per Amazon
   * Web Services Region for each Amazon Web Services account.</p>
   */
  inline const Aws::String& GetTopicId() const { return m_topicId; }
  inline bool TopicIdHasBeenSet() const { return m_topicIdHasBeenSet; }
  template <typename TopicIdT = Aws::String>
  void SetTopicId(TopicIdT&& value) {
    m_topicIdHasBeenSet = true;
    m_topicId = std::forward<TopicIdT>(value);
  }
  template <typename TopicIdT = Aws::String>
  CreateTopicV2Request& WithTopicId(TopicIdT&& value) {
    SetTopicId(std::forward<TopicIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The definition of a topic to create.</p>
   */
  inline const TopicV2Details& GetTopic() const { return m_topic; }
  inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }
  template <typename TopicT = TopicV2Details>
  void SetTopic(TopicT&& value) {
    m_topicHasBeenSet = true;
    m_topic = std::forward<TopicT>(value);
  }
  template <typename TopicT = TopicV2Details>
  CreateTopicV2Request& WithTopic(TopicT&& value) {
    SetTopic(std::forward<TopicT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains a map of the key-value pairs for the resource tag or tags that are
   * assigned to the topic.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateTopicV2Request& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateTopicV2Request& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Names (ARNs) of the folders that you want the topic to
   * reside in.</p>
   */
  inline const Aws::Vector<Aws::String>& GetFolderArns() const { return m_folderArns; }
  inline bool FolderArnsHasBeenSet() const { return m_folderArnsHasBeenSet; }
  template <typename FolderArnsT = Aws::Vector<Aws::String>>
  void SetFolderArns(FolderArnsT&& value) {
    m_folderArnsHasBeenSet = true;
    m_folderArns = std::forward<FolderArnsT>(value);
  }
  template <typename FolderArnsT = Aws::Vector<Aws::String>>
  CreateTopicV2Request& WithFolderArns(FolderArnsT&& value) {
    SetFolderArns(std::forward<FolderArnsT>(value));
    return *this;
  }
  template <typename FolderArnsT = Aws::String>
  CreateTopicV2Request& AddFolderArns(FolderArnsT&& value) {
    m_folderArnsHasBeenSet = true;
    m_folderArns.emplace_back(std::forward<FolderArnsT>(value));
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
  CreateTopicV2Request& WithCustomInstructions(CustomInstructionsT&& value) {
    SetCustomInstructions(std::forward<CustomInstructionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  Aws::String m_topicId;

  TopicV2Details m_topic;

  Aws::Vector<Tag> m_tags;

  Aws::Vector<Aws::String> m_folderArns;

  CustomInstructions m_customInstructions;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_topicIdHasBeenSet = false;
  bool m_topicHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_folderArnsHasBeenSet = false;
  bool m_customInstructionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
