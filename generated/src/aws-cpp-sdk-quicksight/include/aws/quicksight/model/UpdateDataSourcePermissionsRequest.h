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
  class UpdateDataSourcePermissionsRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateDataSourcePermissionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataSourcePermissions"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline UpdateDataSourcePermissionsRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline UpdateDataSourcePermissionsRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline UpdateDataSourcePermissionsRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID of the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account. </p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>The ID of the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account. </p>
     */
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    /**
     * <p>The ID of the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account. </p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    /**
     * <p>The ID of the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account. </p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    /**
     * <p>The ID of the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account. </p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    /**
     * <p>The ID of the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account. </p>
     */
    inline UpdateDataSourcePermissionsRequest& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The ID of the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account. </p>
     */
    inline UpdateDataSourcePermissionsRequest& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account. </p>
     */
    inline UpdateDataSourcePermissionsRequest& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p>A list of resource permissions that you want to grant on the data source.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetGrantPermissions() const{ return m_grantPermissions; }

    /**
     * <p>A list of resource permissions that you want to grant on the data source.</p>
     */
    inline bool GrantPermissionsHasBeenSet() const { return m_grantPermissionsHasBeenSet; }

    /**
     * <p>A list of resource permissions that you want to grant on the data source.</p>
     */
    inline void SetGrantPermissions(const Aws::Vector<ResourcePermission>& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions = value; }

    /**
     * <p>A list of resource permissions that you want to grant on the data source.</p>
     */
    inline void SetGrantPermissions(Aws::Vector<ResourcePermission>&& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions = std::move(value); }

    /**
     * <p>A list of resource permissions that you want to grant on the data source.</p>
     */
    inline UpdateDataSourcePermissionsRequest& WithGrantPermissions(const Aws::Vector<ResourcePermission>& value) { SetGrantPermissions(value); return *this;}

    /**
     * <p>A list of resource permissions that you want to grant on the data source.</p>
     */
    inline UpdateDataSourcePermissionsRequest& WithGrantPermissions(Aws::Vector<ResourcePermission>&& value) { SetGrantPermissions(std::move(value)); return *this;}

    /**
     * <p>A list of resource permissions that you want to grant on the data source.</p>
     */
    inline UpdateDataSourcePermissionsRequest& AddGrantPermissions(const ResourcePermission& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions.push_back(value); return *this; }

    /**
     * <p>A list of resource permissions that you want to grant on the data source.</p>
     */
    inline UpdateDataSourcePermissionsRequest& AddGrantPermissions(ResourcePermission&& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of resource permissions that you want to revoke on the data
     * source.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetRevokePermissions() const{ return m_revokePermissions; }

    /**
     * <p>A list of resource permissions that you want to revoke on the data
     * source.</p>
     */
    inline bool RevokePermissionsHasBeenSet() const { return m_revokePermissionsHasBeenSet; }

    /**
     * <p>A list of resource permissions that you want to revoke on the data
     * source.</p>
     */
    inline void SetRevokePermissions(const Aws::Vector<ResourcePermission>& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions = value; }

    /**
     * <p>A list of resource permissions that you want to revoke on the data
     * source.</p>
     */
    inline void SetRevokePermissions(Aws::Vector<ResourcePermission>&& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions = std::move(value); }

    /**
     * <p>A list of resource permissions that you want to revoke on the data
     * source.</p>
     */
    inline UpdateDataSourcePermissionsRequest& WithRevokePermissions(const Aws::Vector<ResourcePermission>& value) { SetRevokePermissions(value); return *this;}

    /**
     * <p>A list of resource permissions that you want to revoke on the data
     * source.</p>
     */
    inline UpdateDataSourcePermissionsRequest& WithRevokePermissions(Aws::Vector<ResourcePermission>&& value) { SetRevokePermissions(std::move(value)); return *this;}

    /**
     * <p>A list of resource permissions that you want to revoke on the data
     * source.</p>
     */
    inline UpdateDataSourcePermissionsRequest& AddRevokePermissions(const ResourcePermission& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions.push_back(value); return *this; }

    /**
     * <p>A list of resource permissions that you want to revoke on the data
     * source.</p>
     */
    inline UpdateDataSourcePermissionsRequest& AddRevokePermissions(ResourcePermission&& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_grantPermissions;
    bool m_grantPermissionsHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_revokePermissions;
    bool m_revokePermissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
