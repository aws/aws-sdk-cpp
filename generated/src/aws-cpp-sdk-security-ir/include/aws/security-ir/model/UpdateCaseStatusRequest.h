/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/security-ir/SecurityIRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/security-ir/model/SelfManagedCaseStatus.h>
#include <utility>

namespace Aws
{
namespace SecurityIR
{
namespace Model
{

  /**
   */
  class UpdateCaseStatusRequest : public SecurityIRRequest
  {
  public:
    AWS_SECURITYIR_API UpdateCaseStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCaseStatus"; }

    AWS_SECURITYIR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Required element for UpdateCaseStatus to identify the case to update.</p>
     */
    inline const Aws::String& GetCaseId() const { return m_caseId; }
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
    template<typename CaseIdT = Aws::String>
    void SetCaseId(CaseIdT&& value) { m_caseIdHasBeenSet = true; m_caseId = std::forward<CaseIdT>(value); }
    template<typename CaseIdT = Aws::String>
    UpdateCaseStatusRequest& WithCaseId(CaseIdT&& value) { SetCaseId(std::forward<CaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required element for UpdateCaseStatus to identify the status for a case.
     * Options include <code>Submitted | Detection and Analysis | Containment,
     * Eradication and Recovery | Post-incident Activities</code>. </p>
     */
    inline SelfManagedCaseStatus GetCaseStatus() const { return m_caseStatus; }
    inline bool CaseStatusHasBeenSet() const { return m_caseStatusHasBeenSet; }
    inline void SetCaseStatus(SelfManagedCaseStatus value) { m_caseStatusHasBeenSet = true; m_caseStatus = value; }
    inline UpdateCaseStatusRequest& WithCaseStatus(SelfManagedCaseStatus value) { SetCaseStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet = false;

    SelfManagedCaseStatus m_caseStatus{SelfManagedCaseStatus::NOT_SET};
    bool m_caseStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
