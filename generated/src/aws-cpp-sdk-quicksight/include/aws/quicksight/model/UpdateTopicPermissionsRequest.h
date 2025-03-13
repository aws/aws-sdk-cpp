/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ResourcePermission.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class UpdateTopicPermissionsRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateTopicPermissionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTopicPermissions"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that contains the topic that you
     * want to update the permissions for.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    UpdateTopicPermissionsRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
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
    UpdateTopicPermissionsRequest& WithTopicId(TopicIdT&& value) { SetTopicId(std::forward<TopicIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource permissions that you want to grant to the topic.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetGrantPermissions() const { return m_grantPermissions; }
    inline bool GrantPermissionsHasBeenSet() const { return m_grantPermissionsHasBeenSet; }
    template<typename GrantPermissionsT = Aws::Vector<ResourcePermission>>
    void SetGrantPermissions(GrantPermissionsT&& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions = std::forward<GrantPermissionsT>(value); }
    template<typename GrantPermissionsT = Aws::Vector<ResourcePermission>>
    UpdateTopicPermissionsRequest& WithGrantPermissions(GrantPermissionsT&& value) { SetGrantPermissions(std::forward<GrantPermissionsT>(value)); return *this;}
    template<typename GrantPermissionsT = ResourcePermission>
    UpdateTopicPermissionsRequest& AddGrantPermissions(GrantPermissionsT&& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions.emplace_back(std::forward<GrantPermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource permissions that you want to revoke from the topic.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetRevokePermissions() const { return m_revokePermissions; }
    inline bool RevokePermissionsHasBeenSet() const { return m_revokePermissionsHasBeenSet; }
    template<typename RevokePermissionsT = Aws::Vector<ResourcePermission>>
    void SetRevokePermissions(RevokePermissionsT&& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions = std::forward<RevokePermissionsT>(value); }
    template<typename RevokePermissionsT = Aws::Vector<ResourcePermission>>
    UpdateTopicPermissionsRequest& WithRevokePermissions(RevokePermissionsT&& value) { SetRevokePermissions(std::forward<RevokePermissionsT>(value)); return *this;}
    template<typename RevokePermissionsT = ResourcePermission>
    UpdateTopicPermissionsRequest& AddRevokePermissions(RevokePermissionsT&& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions.emplace_back(std::forward<RevokePermissionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_topicId;
    bool m_topicIdHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_grantPermissions;
    bool m_grantPermissionsHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_revokePermissions;
    bool m_revokePermissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
