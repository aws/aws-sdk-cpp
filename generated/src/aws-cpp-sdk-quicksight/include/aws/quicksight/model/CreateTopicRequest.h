/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TopicDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/CustomInstructions.h>
#include <aws/quicksight/model/Tag.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class CreateTopicRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API CreateTopicRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTopic"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that you want to create a topic
     * in.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    CreateTopicRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the topic that you want to create. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetTopicId() const { return m_topicId; }
    inline bool TopicIdHasBeenSet() const { return m_topicIdHasBeenSet; }
    template<typename TopicIdT = Aws::String>
    void SetTopicId(TopicIdT&& value) { m_topicIdHasBeenSet = true; m_topicId = std::forward<TopicIdT>(value); }
    template<typename TopicIdT = Aws::String>
    CreateTopicRequest& WithTopicId(TopicIdT&& value) { SetTopicId(std::forward<TopicIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of a topic to create.</p>
     */
    inline const TopicDetails& GetTopic() const { return m_topic; }
    inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }
    template<typename TopicT = TopicDetails>
    void SetTopic(TopicT&& value) { m_topicHasBeenSet = true; m_topic = std::forward<TopicT>(value); }
    template<typename TopicT = TopicDetails>
    CreateTopicRequest& WithTopic(TopicT&& value) { SetTopic(std::forward<TopicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags that are
     * assigned to the dataset.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateTopicRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateTopicRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Folder ARN of the folder that you want the topic to reside in.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFolderArns() const { return m_folderArns; }
    inline bool FolderArnsHasBeenSet() const { return m_folderArnsHasBeenSet; }
    template<typename FolderArnsT = Aws::Vector<Aws::String>>
    void SetFolderArns(FolderArnsT&& value) { m_folderArnsHasBeenSet = true; m_folderArns = std::forward<FolderArnsT>(value); }
    template<typename FolderArnsT = Aws::Vector<Aws::String>>
    CreateTopicRequest& WithFolderArns(FolderArnsT&& value) { SetFolderArns(std::forward<FolderArnsT>(value)); return *this;}
    template<typename FolderArnsT = Aws::String>
    CreateTopicRequest& AddFolderArns(FolderArnsT&& value) { m_folderArnsHasBeenSet = true; m_folderArns.emplace_back(std::forward<FolderArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Custom instructions for the topic.</p>
     */
    inline const CustomInstructions& GetCustomInstructions() const { return m_customInstructions; }
    inline bool CustomInstructionsHasBeenSet() const { return m_customInstructionsHasBeenSet; }
    template<typename CustomInstructionsT = CustomInstructions>
    void SetCustomInstructions(CustomInstructionsT&& value) { m_customInstructionsHasBeenSet = true; m_customInstructions = std::forward<CustomInstructionsT>(value); }
    template<typename CustomInstructionsT = CustomInstructions>
    CreateTopicRequest& WithCustomInstructions(CustomInstructionsT&& value) { SetCustomInstructions(std::forward<CustomInstructionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_topicId;
    bool m_topicIdHasBeenSet = false;

    TopicDetails m_topic;
    bool m_topicHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_folderArns;
    bool m_folderArnsHasBeenSet = false;

    CustomInstructions m_customInstructions;
    bool m_customInstructionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
