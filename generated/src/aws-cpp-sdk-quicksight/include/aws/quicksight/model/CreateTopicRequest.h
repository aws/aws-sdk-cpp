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
    AWS_QUICKSIGHT_API CreateTopicRequest();

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
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline CreateTopicRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline CreateTopicRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline CreateTopicRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the topic that you want to create. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetTopicId() const{ return m_topicId; }
    inline bool TopicIdHasBeenSet() const { return m_topicIdHasBeenSet; }
    inline void SetTopicId(const Aws::String& value) { m_topicIdHasBeenSet = true; m_topicId = value; }
    inline void SetTopicId(Aws::String&& value) { m_topicIdHasBeenSet = true; m_topicId = std::move(value); }
    inline void SetTopicId(const char* value) { m_topicIdHasBeenSet = true; m_topicId.assign(value); }
    inline CreateTopicRequest& WithTopicId(const Aws::String& value) { SetTopicId(value); return *this;}
    inline CreateTopicRequest& WithTopicId(Aws::String&& value) { SetTopicId(std::move(value)); return *this;}
    inline CreateTopicRequest& WithTopicId(const char* value) { SetTopicId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of a topic to create.</p>
     */
    inline const TopicDetails& GetTopic() const{ return m_topic; }
    inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }
    inline void SetTopic(const TopicDetails& value) { m_topicHasBeenSet = true; m_topic = value; }
    inline void SetTopic(TopicDetails&& value) { m_topicHasBeenSet = true; m_topic = std::move(value); }
    inline CreateTopicRequest& WithTopic(const TopicDetails& value) { SetTopic(value); return *this;}
    inline CreateTopicRequest& WithTopic(TopicDetails&& value) { SetTopic(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags that are
     * assigned to the dataset.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateTopicRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateTopicRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateTopicRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateTopicRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Folder ARN of the folder that you want the topic to reside in.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFolderArns() const{ return m_folderArns; }
    inline bool FolderArnsHasBeenSet() const { return m_folderArnsHasBeenSet; }
    inline void SetFolderArns(const Aws::Vector<Aws::String>& value) { m_folderArnsHasBeenSet = true; m_folderArns = value; }
    inline void SetFolderArns(Aws::Vector<Aws::String>&& value) { m_folderArnsHasBeenSet = true; m_folderArns = std::move(value); }
    inline CreateTopicRequest& WithFolderArns(const Aws::Vector<Aws::String>& value) { SetFolderArns(value); return *this;}
    inline CreateTopicRequest& WithFolderArns(Aws::Vector<Aws::String>&& value) { SetFolderArns(std::move(value)); return *this;}
    inline CreateTopicRequest& AddFolderArns(const Aws::String& value) { m_folderArnsHasBeenSet = true; m_folderArns.push_back(value); return *this; }
    inline CreateTopicRequest& AddFolderArns(Aws::String&& value) { m_folderArnsHasBeenSet = true; m_folderArns.push_back(std::move(value)); return *this; }
    inline CreateTopicRequest& AddFolderArns(const char* value) { m_folderArnsHasBeenSet = true; m_folderArns.push_back(value); return *this; }
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
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
