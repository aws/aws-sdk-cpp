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
  class UpdateDataSetPermissionsRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateDataSetPermissionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataSetPermissions"; }

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
    inline UpdateDataSetPermissionsRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline UpdateDataSetPermissionsRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline UpdateDataSetPermissionsRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID for the dataset whose permissions you want to update. This ID is
     * unique per Amazon Web Services Region for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }

    /**
     * <p>The ID for the dataset whose permissions you want to update. This ID is
     * unique per Amazon Web Services Region for each Amazon Web Services account.</p>
     */
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }

    /**
     * <p>The ID for the dataset whose permissions you want to update. This ID is
     * unique per Amazon Web Services Region for each Amazon Web Services account.</p>
     */
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }

    /**
     * <p>The ID for the dataset whose permissions you want to update. This ID is
     * unique per Amazon Web Services Region for each Amazon Web Services account.</p>
     */
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }

    /**
     * <p>The ID for the dataset whose permissions you want to update. This ID is
     * unique per Amazon Web Services Region for each Amazon Web Services account.</p>
     */
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }

    /**
     * <p>The ID for the dataset whose permissions you want to update. This ID is
     * unique per Amazon Web Services Region for each Amazon Web Services account.</p>
     */
    inline UpdateDataSetPermissionsRequest& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The ID for the dataset whose permissions you want to update. This ID is
     * unique per Amazon Web Services Region for each Amazon Web Services account.</p>
     */
    inline UpdateDataSetPermissionsRequest& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The ID for the dataset whose permissions you want to update. This ID is
     * unique per Amazon Web Services Region for each Amazon Web Services account.</p>
     */
    inline UpdateDataSetPermissionsRequest& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>The resource permissions that you want to grant to the dataset.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetGrantPermissions() const{ return m_grantPermissions; }

    /**
     * <p>The resource permissions that you want to grant to the dataset.</p>
     */
    inline bool GrantPermissionsHasBeenSet() const { return m_grantPermissionsHasBeenSet; }

    /**
     * <p>The resource permissions that you want to grant to the dataset.</p>
     */
    inline void SetGrantPermissions(const Aws::Vector<ResourcePermission>& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions = value; }

    /**
     * <p>The resource permissions that you want to grant to the dataset.</p>
     */
    inline void SetGrantPermissions(Aws::Vector<ResourcePermission>&& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions = std::move(value); }

    /**
     * <p>The resource permissions that you want to grant to the dataset.</p>
     */
    inline UpdateDataSetPermissionsRequest& WithGrantPermissions(const Aws::Vector<ResourcePermission>& value) { SetGrantPermissions(value); return *this;}

    /**
     * <p>The resource permissions that you want to grant to the dataset.</p>
     */
    inline UpdateDataSetPermissionsRequest& WithGrantPermissions(Aws::Vector<ResourcePermission>&& value) { SetGrantPermissions(std::move(value)); return *this;}

    /**
     * <p>The resource permissions that you want to grant to the dataset.</p>
     */
    inline UpdateDataSetPermissionsRequest& AddGrantPermissions(const ResourcePermission& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions.push_back(value); return *this; }

    /**
     * <p>The resource permissions that you want to grant to the dataset.</p>
     */
    inline UpdateDataSetPermissionsRequest& AddGrantPermissions(ResourcePermission&& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions.push_back(std::move(value)); return *this; }


    /**
     * <p>The resource permissions that you want to revoke from the dataset.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetRevokePermissions() const{ return m_revokePermissions; }

    /**
     * <p>The resource permissions that you want to revoke from the dataset.</p>
     */
    inline bool RevokePermissionsHasBeenSet() const { return m_revokePermissionsHasBeenSet; }

    /**
     * <p>The resource permissions that you want to revoke from the dataset.</p>
     */
    inline void SetRevokePermissions(const Aws::Vector<ResourcePermission>& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions = value; }

    /**
     * <p>The resource permissions that you want to revoke from the dataset.</p>
     */
    inline void SetRevokePermissions(Aws::Vector<ResourcePermission>&& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions = std::move(value); }

    /**
     * <p>The resource permissions that you want to revoke from the dataset.</p>
     */
    inline UpdateDataSetPermissionsRequest& WithRevokePermissions(const Aws::Vector<ResourcePermission>& value) { SetRevokePermissions(value); return *this;}

    /**
     * <p>The resource permissions that you want to revoke from the dataset.</p>
     */
    inline UpdateDataSetPermissionsRequest& WithRevokePermissions(Aws::Vector<ResourcePermission>&& value) { SetRevokePermissions(std::move(value)); return *this;}

    /**
     * <p>The resource permissions that you want to revoke from the dataset.</p>
     */
    inline UpdateDataSetPermissionsRequest& AddRevokePermissions(const ResourcePermission& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions.push_back(value); return *this; }

    /**
     * <p>The resource permissions that you want to revoke from the dataset.</p>
     */
    inline UpdateDataSetPermissionsRequest& AddRevokePermissions(ResourcePermission&& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_grantPermissions;
    bool m_grantPermissionsHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_revokePermissions;
    bool m_revokePermissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
