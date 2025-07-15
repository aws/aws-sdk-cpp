/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TopicDetails.h>
#include <aws/quicksight/model/CustomInstructions.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class UpdateTopicRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateTopicRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTopic"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that contains the topic that you
     * want to update.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    UpdateTopicRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetTopicId() const { return m_topicId; }
    inline bool TopicIdHasBeenSet() const { return m_topicIdHasBeenSet; }
    template<typename TopicIdT = Aws::String>
    void SetTopicId(TopicIdT&& value) { m_topicIdHasBeenSet = true; m_topicId = std::forward<TopicIdT>(value); }
    template<typename TopicIdT = Aws::String>
    UpdateTopicRequest& WithTopicId(TopicIdT&& value) { SetTopicId(std::forward<TopicIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of the topic that you want to update.</p>
     */
    inline const TopicDetails& GetTopic() const { return m_topic; }
    inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }
    template<typename TopicT = TopicDetails>
    void SetTopic(TopicT&& value) { m_topicHasBeenSet = true; m_topic = std::forward<TopicT>(value); }
    template<typename TopicT = TopicDetails>
    UpdateTopicRequest& WithTopic(TopicT&& value) { SetTopic(std::forward<TopicT>(value)); return *this;}
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
    UpdateTopicRequest& WithCustomInstructions(CustomInstructionsT&& value) { SetCustomInstructions(std::forward<CustomInstructionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_topicId;
    bool m_topicIdHasBeenSet = false;

    TopicDetails m_topic;
    bool m_topicHasBeenSet = false;

    CustomInstructions m_customInstructions;
    bool m_customInstructionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
