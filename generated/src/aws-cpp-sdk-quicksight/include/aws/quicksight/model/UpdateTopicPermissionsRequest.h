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
    AWS_QUICKSIGHT_API UpdateTopicPermissionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTopicPermissions"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon Web Services account that contains the topic that you
     * want to update the permissions for.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the topic that you
     * want to update the permissions for.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the topic that you
     * want to update the permissions for.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the topic that you
     * want to update the permissions for.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the topic that you
     * want to update the permissions for.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the topic that you
     * want to update the permissions for.</p>
     */
    inline UpdateTopicPermissionsRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the topic that you
     * want to update the permissions for.</p>
     */
    inline UpdateTopicPermissionsRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the topic that you
     * want to update the permissions for.</p>
     */
    inline UpdateTopicPermissionsRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetTopicId() const{ return m_topicId; }

    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline bool TopicIdHasBeenSet() const { return m_topicIdHasBeenSet; }

    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline void SetTopicId(const Aws::String& value) { m_topicIdHasBeenSet = true; m_topicId = value; }

    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline void SetTopicId(Aws::String&& value) { m_topicIdHasBeenSet = true; m_topicId = std::move(value); }

    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline void SetTopicId(const char* value) { m_topicIdHasBeenSet = true; m_topicId.assign(value); }

    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline UpdateTopicPermissionsRequest& WithTopicId(const Aws::String& value) { SetTopicId(value); return *this;}

    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline UpdateTopicPermissionsRequest& WithTopicId(Aws::String&& value) { SetTopicId(std::move(value)); return *this;}

    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline UpdateTopicPermissionsRequest& WithTopicId(const char* value) { SetTopicId(value); return *this;}


    /**
     * <p>The resource permissions that you want to grant to the topic.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetGrantPermissions() const{ return m_grantPermissions; }

    /**
     * <p>The resource permissions that you want to grant to the topic.</p>
     */
    inline bool GrantPermissionsHasBeenSet() const { return m_grantPermissionsHasBeenSet; }

    /**
     * <p>The resource permissions that you want to grant to the topic.</p>
     */
    inline void SetGrantPermissions(const Aws::Vector<ResourcePermission>& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions = value; }

    /**
     * <p>The resource permissions that you want to grant to the topic.</p>
     */
    inline void SetGrantPermissions(Aws::Vector<ResourcePermission>&& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions = std::move(value); }

    /**
     * <p>The resource permissions that you want to grant to the topic.</p>
     */
    inline UpdateTopicPermissionsRequest& WithGrantPermissions(const Aws::Vector<ResourcePermission>& value) { SetGrantPermissions(value); return *this;}

    /**
     * <p>The resource permissions that you want to grant to the topic.</p>
     */
    inline UpdateTopicPermissionsRequest& WithGrantPermissions(Aws::Vector<ResourcePermission>&& value) { SetGrantPermissions(std::move(value)); return *this;}

    /**
     * <p>The resource permissions that you want to grant to the topic.</p>
     */
    inline UpdateTopicPermissionsRequest& AddGrantPermissions(const ResourcePermission& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions.push_back(value); return *this; }

    /**
     * <p>The resource permissions that you want to grant to the topic.</p>
     */
    inline UpdateTopicPermissionsRequest& AddGrantPermissions(ResourcePermission&& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions.push_back(std::move(value)); return *this; }


    /**
     * <p>The resource permissions that you want to revoke from the topic.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetRevokePermissions() const{ return m_revokePermissions; }

    /**
     * <p>The resource permissions that you want to revoke from the topic.</p>
     */
    inline bool RevokePermissionsHasBeenSet() const { return m_revokePermissionsHasBeenSet; }

    /**
     * <p>The resource permissions that you want to revoke from the topic.</p>
     */
    inline void SetRevokePermissions(const Aws::Vector<ResourcePermission>& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions = value; }

    /**
     * <p>The resource permissions that you want to revoke from the topic.</p>
     */
    inline void SetRevokePermissions(Aws::Vector<ResourcePermission>&& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions = std::move(value); }

    /**
     * <p>The resource permissions that you want to revoke from the topic.</p>
     */
    inline UpdateTopicPermissionsRequest& WithRevokePermissions(const Aws::Vector<ResourcePermission>& value) { SetRevokePermissions(value); return *this;}

    /**
     * <p>The resource permissions that you want to revoke from the topic.</p>
     */
    inline UpdateTopicPermissionsRequest& WithRevokePermissions(Aws::Vector<ResourcePermission>&& value) { SetRevokePermissions(std::move(value)); return *this;}

    /**
     * <p>The resource permissions that you want to revoke from the topic.</p>
     */
    inline UpdateTopicPermissionsRequest& AddRevokePermissions(const ResourcePermission& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions.push_back(value); return *this; }

    /**
     * <p>The resource permissions that you want to revoke from the topic.</p>
     */
    inline UpdateTopicPermissionsRequest& AddRevokePermissions(ResourcePermission&& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions.push_back(std::move(value)); return *this; }

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
