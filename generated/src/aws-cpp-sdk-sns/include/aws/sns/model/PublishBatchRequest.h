/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sns/model/PublishBatchRequestEntry.h>
#include <utility>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   */
  class PublishBatchRequest : public SNSRequest
  {
  public:
    AWS_SNS_API PublishBatchRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PublishBatch"; }

    AWS_SNS_API Aws::String SerializePayload() const override;

  protected:
    AWS_SNS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the topic you want to batch publish to.</p>
     */
    inline const Aws::String& GetTopicArn() const { return m_topicArn; }
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }
    template<typename TopicArnT = Aws::String>
    void SetTopicArn(TopicArnT&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::forward<TopicArnT>(value); }
    template<typename TopicArnT = Aws::String>
    PublishBatchRequest& WithTopicArn(TopicArnT&& value) { SetTopicArn(std::forward<TopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>PublishBatch</code> request entries to be sent to the SNS
     * topic.</p>
     */
    inline const Aws::Vector<PublishBatchRequestEntry>& GetPublishBatchRequestEntries() const { return m_publishBatchRequestEntries; }
    inline bool PublishBatchRequestEntriesHasBeenSet() const { return m_publishBatchRequestEntriesHasBeenSet; }
    template<typename PublishBatchRequestEntriesT = Aws::Vector<PublishBatchRequestEntry>>
    void SetPublishBatchRequestEntries(PublishBatchRequestEntriesT&& value) { m_publishBatchRequestEntriesHasBeenSet = true; m_publishBatchRequestEntries = std::forward<PublishBatchRequestEntriesT>(value); }
    template<typename PublishBatchRequestEntriesT = Aws::Vector<PublishBatchRequestEntry>>
    PublishBatchRequest& WithPublishBatchRequestEntries(PublishBatchRequestEntriesT&& value) { SetPublishBatchRequestEntries(std::forward<PublishBatchRequestEntriesT>(value)); return *this;}
    template<typename PublishBatchRequestEntriesT = PublishBatchRequestEntry>
    PublishBatchRequest& AddPublishBatchRequestEntries(PublishBatchRequestEntriesT&& value) { m_publishBatchRequestEntriesHasBeenSet = true; m_publishBatchRequestEntries.emplace_back(std::forward<PublishBatchRequestEntriesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;

    Aws::Vector<PublishBatchRequestEntry> m_publishBatchRequestEntries;
    bool m_publishBatchRequestEntriesHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
