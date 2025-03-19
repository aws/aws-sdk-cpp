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
    AWS_QUICKSIGHT_API UpdateDataSetPermissionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataSetPermissions"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    UpdateDataSetPermissionsRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the dataset whose permissions you want to update. This ID is
     * unique per Amazon Web Services Region for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetDataSetId() const { return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    template<typename DataSetIdT = Aws::String>
    void SetDataSetId(DataSetIdT&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::forward<DataSetIdT>(value); }
    template<typename DataSetIdT = Aws::String>
    UpdateDataSetPermissionsRequest& WithDataSetId(DataSetIdT&& value) { SetDataSetId(std::forward<DataSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource permissions that you want to grant to the dataset.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetGrantPermissions() const { return m_grantPermissions; }
    inline bool GrantPermissionsHasBeenSet() const { return m_grantPermissionsHasBeenSet; }
    template<typename GrantPermissionsT = Aws::Vector<ResourcePermission>>
    void SetGrantPermissions(GrantPermissionsT&& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions = std::forward<GrantPermissionsT>(value); }
    template<typename GrantPermissionsT = Aws::Vector<ResourcePermission>>
    UpdateDataSetPermissionsRequest& WithGrantPermissions(GrantPermissionsT&& value) { SetGrantPermissions(std::forward<GrantPermissionsT>(value)); return *this;}
    template<typename GrantPermissionsT = ResourcePermission>
    UpdateDataSetPermissionsRequest& AddGrantPermissions(GrantPermissionsT&& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions.emplace_back(std::forward<GrantPermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource permissions that you want to revoke from the dataset.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetRevokePermissions() const { return m_revokePermissions; }
    inline bool RevokePermissionsHasBeenSet() const { return m_revokePermissionsHasBeenSet; }
    template<typename RevokePermissionsT = Aws::Vector<ResourcePermission>>
    void SetRevokePermissions(RevokePermissionsT&& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions = std::forward<RevokePermissionsT>(value); }
    template<typename RevokePermissionsT = Aws::Vector<ResourcePermission>>
    UpdateDataSetPermissionsRequest& WithRevokePermissions(RevokePermissionsT&& value) { SetRevokePermissions(std::forward<RevokePermissionsT>(value)); return *this;}
    template<typename RevokePermissionsT = ResourcePermission>
    UpdateDataSetPermissionsRequest& AddRevokePermissions(RevokePermissionsT&& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions.emplace_back(std::forward<RevokePermissionsT>(value)); return *this; }
    ///@}
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
