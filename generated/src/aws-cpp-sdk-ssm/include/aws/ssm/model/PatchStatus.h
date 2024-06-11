/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/PatchDeploymentStatus.h>
#include <aws/ssm/model/PatchComplianceLevel.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>Information about the approval status of a patch.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PatchStatus">AWS
   * API Reference</a></p>
   */
  class PatchStatus
  {
  public:
    AWS_SSM_API PatchStatus();
    AWS_SSM_API PatchStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API PatchStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The approval status of a patch.</p>
     */
    inline const PatchDeploymentStatus& GetDeploymentStatus() const{ return m_deploymentStatus; }
    inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }
    inline void SetDeploymentStatus(const PatchDeploymentStatus& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = value; }
    inline void SetDeploymentStatus(PatchDeploymentStatus&& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = std::move(value); }
    inline PatchStatus& WithDeploymentStatus(const PatchDeploymentStatus& value) { SetDeploymentStatus(value); return *this;}
    inline PatchStatus& WithDeploymentStatus(PatchDeploymentStatus&& value) { SetDeploymentStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compliance severity level for a patch.</p>
     */
    inline const PatchComplianceLevel& GetComplianceLevel() const{ return m_complianceLevel; }
    inline bool ComplianceLevelHasBeenSet() const { return m_complianceLevelHasBeenSet; }
    inline void SetComplianceLevel(const PatchComplianceLevel& value) { m_complianceLevelHasBeenSet = true; m_complianceLevel = value; }
    inline void SetComplianceLevel(PatchComplianceLevel&& value) { m_complianceLevelHasBeenSet = true; m_complianceLevel = std::move(value); }
    inline PatchStatus& WithComplianceLevel(const PatchComplianceLevel& value) { SetComplianceLevel(value); return *this;}
    inline PatchStatus& WithComplianceLevel(PatchComplianceLevel&& value) { SetComplianceLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the patch was approved (or will be approved if the status is
     * <code>PENDING_APPROVAL</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetApprovalDate() const{ return m_approvalDate; }
    inline bool ApprovalDateHasBeenSet() const { return m_approvalDateHasBeenSet; }
    inline void SetApprovalDate(const Aws::Utils::DateTime& value) { m_approvalDateHasBeenSet = true; m_approvalDate = value; }
    inline void SetApprovalDate(Aws::Utils::DateTime&& value) { m_approvalDateHasBeenSet = true; m_approvalDate = std::move(value); }
    inline PatchStatus& WithApprovalDate(const Aws::Utils::DateTime& value) { SetApprovalDate(value); return *this;}
    inline PatchStatus& WithApprovalDate(Aws::Utils::DateTime&& value) { SetApprovalDate(std::move(value)); return *this;}
    ///@}
  private:

    PatchDeploymentStatus m_deploymentStatus;
    bool m_deploymentStatusHasBeenSet = false;

    PatchComplianceLevel m_complianceLevel;
    bool m_complianceLevelHasBeenSet = false;

    Aws::Utils::DateTime m_approvalDate;
    bool m_approvalDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
