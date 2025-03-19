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
  class UpdateAnalysisPermissionsRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateAnalysisPermissionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAnalysisPermissions"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that contains the analysis whose
     * permissions you're updating. You must be using the Amazon Web Services account
     * that the analysis is in.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    UpdateAnalysisPermissionsRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the analysis whose permissions you're updating. The ID is part of
     * the analysis URL.</p>
     */
    inline const Aws::String& GetAnalysisId() const { return m_analysisId; }
    inline bool AnalysisIdHasBeenSet() const { return m_analysisIdHasBeenSet; }
    template<typename AnalysisIdT = Aws::String>
    void SetAnalysisId(AnalysisIdT&& value) { m_analysisIdHasBeenSet = true; m_analysisId = std::forward<AnalysisIdT>(value); }
    template<typename AnalysisIdT = Aws::String>
    UpdateAnalysisPermissionsRequest& WithAnalysisId(AnalysisIdT&& value) { SetAnalysisId(std::forward<AnalysisIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that describes the permissions to add and the principal to add
     * them to.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetGrantPermissions() const { return m_grantPermissions; }
    inline bool GrantPermissionsHasBeenSet() const { return m_grantPermissionsHasBeenSet; }
    template<typename GrantPermissionsT = Aws::Vector<ResourcePermission>>
    void SetGrantPermissions(GrantPermissionsT&& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions = std::forward<GrantPermissionsT>(value); }
    template<typename GrantPermissionsT = Aws::Vector<ResourcePermission>>
    UpdateAnalysisPermissionsRequest& WithGrantPermissions(GrantPermissionsT&& value) { SetGrantPermissions(std::forward<GrantPermissionsT>(value)); return *this;}
    template<typename GrantPermissionsT = ResourcePermission>
    UpdateAnalysisPermissionsRequest& AddGrantPermissions(GrantPermissionsT&& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions.emplace_back(std::forward<GrantPermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A structure that describes the permissions to remove and the principal to
     * remove them from.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetRevokePermissions() const { return m_revokePermissions; }
    inline bool RevokePermissionsHasBeenSet() const { return m_revokePermissionsHasBeenSet; }
    template<typename RevokePermissionsT = Aws::Vector<ResourcePermission>>
    void SetRevokePermissions(RevokePermissionsT&& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions = std::forward<RevokePermissionsT>(value); }
    template<typename RevokePermissionsT = Aws::Vector<ResourcePermission>>
    UpdateAnalysisPermissionsRequest& WithRevokePermissions(RevokePermissionsT&& value) { SetRevokePermissions(std::forward<RevokePermissionsT>(value)); return *this;}
    template<typename RevokePermissionsT = ResourcePermission>
    UpdateAnalysisPermissionsRequest& AddRevokePermissions(RevokePermissionsT&& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions.emplace_back(std::forward<RevokePermissionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_analysisId;
    bool m_analysisIdHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_grantPermissions;
    bool m_grantPermissionsHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_revokePermissions;
    bool m_revokePermissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
