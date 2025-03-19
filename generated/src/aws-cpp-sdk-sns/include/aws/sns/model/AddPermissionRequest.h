/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   */
  class AddPermissionRequest : public SNSRequest
  {
  public:
    AWS_SNS_API AddPermissionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddPermission"; }

    AWS_SNS_API Aws::String SerializePayload() const override;

  protected:
    AWS_SNS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ARN of the topic whose access control policy you wish to modify.</p>
     */
    inline const Aws::String& GetTopicArn() const { return m_topicArn; }
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }
    template<typename TopicArnT = Aws::String>
    void SetTopicArn(TopicArnT&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::forward<TopicArnT>(value); }
    template<typename TopicArnT = Aws::String>
    AddPermissionRequest& WithTopicArn(TopicArnT&& value) { SetTopicArn(std::forward<TopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the new policy statement.</p>
     */
    inline const Aws::String& GetLabel() const { return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    template<typename LabelT = Aws::String>
    void SetLabel(LabelT&& value) { m_labelHasBeenSet = true; m_label = std::forward<LabelT>(value); }
    template<typename LabelT = Aws::String>
    AddPermissionRequest& WithLabel(LabelT&& value) { SetLabel(std::forward<LabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account IDs of the users (principals) who will be
     * given access to the specified actions. The users must have Amazon Web Services
     * account, but do not need to be signed up for this service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAWSAccountId() const { return m_aWSAccountId; }
    inline bool AWSAccountIdHasBeenSet() const { return m_aWSAccountIdHasBeenSet; }
    template<typename AWSAccountIdT = Aws::Vector<Aws::String>>
    void SetAWSAccountId(AWSAccountIdT&& value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId = std::forward<AWSAccountIdT>(value); }
    template<typename AWSAccountIdT = Aws::Vector<Aws::String>>
    AddPermissionRequest& WithAWSAccountId(AWSAccountIdT&& value) { SetAWSAccountId(std::forward<AWSAccountIdT>(value)); return *this;}
    template<typename AWSAccountIdT = Aws::String>
    AddPermissionRequest& AddAWSAccountId(AWSAccountIdT&& value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId.emplace_back(std::forward<AWSAccountIdT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The action you want to allow for the specified principal(s).</p> <p>Valid
     * values: Any Amazon SNS action name, for example <code>Publish</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActionName() const { return m_actionName; }
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
    template<typename ActionNameT = Aws::Vector<Aws::String>>
    void SetActionName(ActionNameT&& value) { m_actionNameHasBeenSet = true; m_actionName = std::forward<ActionNameT>(value); }
    template<typename ActionNameT = Aws::Vector<Aws::String>>
    AddPermissionRequest& WithActionName(ActionNameT&& value) { SetActionName(std::forward<ActionNameT>(value)); return *this;}
    template<typename ActionNameT = Aws::String>
    AddPermissionRequest& AddActionName(ActionNameT&& value) { m_actionNameHasBeenSet = true; m_actionName.emplace_back(std::forward<ActionNameT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    Aws::Vector<Aws::String> m_aWSAccountId;
    bool m_aWSAccountIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_actionName;
    bool m_actionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
