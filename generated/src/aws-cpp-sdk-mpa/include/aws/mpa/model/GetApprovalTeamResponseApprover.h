/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mpa/model/IdentityStatus.h>
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
namespace MPA
{
namespace Model
{

  /**
   * <p>Contains details for an approver.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/GetApprovalTeamResponseApprover">AWS
   * API Reference</a></p>
   */
  class GetApprovalTeamResponseApprover
  {
  public:
    AWS_MPA_API GetApprovalTeamResponseApprover() = default;
    AWS_MPA_API GetApprovalTeamResponseApprover(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API GetApprovalTeamResponseApprover& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ID for the approver.</p>
     */
    inline const Aws::String& GetApproverId() const { return m_approverId; }
    inline bool ApproverIdHasBeenSet() const { return m_approverIdHasBeenSet; }
    template<typename ApproverIdT = Aws::String>
    void SetApproverId(ApproverIdT&& value) { m_approverIdHasBeenSet = true; m_approverId = std::forward<ApproverIdT>(value); }
    template<typename ApproverIdT = Aws::String>
    GetApprovalTeamResponseApprover& WithApproverId(ApproverIdT&& value) { SetApproverId(std::forward<ApproverIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp when the approver responded to an approval team invitation.</p>
     */
    inline const Aws::Utils::DateTime& GetResponseTime() const { return m_responseTime; }
    inline bool ResponseTimeHasBeenSet() const { return m_responseTimeHasBeenSet; }
    template<typename ResponseTimeT = Aws::Utils::DateTime>
    void SetResponseTime(ResponseTimeT&& value) { m_responseTimeHasBeenSet = true; m_responseTime = std::forward<ResponseTimeT>(value); }
    template<typename ResponseTimeT = Aws::Utils::DateTime>
    GetApprovalTeamResponseApprover& WithResponseTime(ResponseTimeT&& value) { SetResponseTime(std::forward<ResponseTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID for the user.</p>
     */
    inline const Aws::String& GetPrimaryIdentityId() const { return m_primaryIdentityId; }
    inline bool PrimaryIdentityIdHasBeenSet() const { return m_primaryIdentityIdHasBeenSet; }
    template<typename PrimaryIdentityIdT = Aws::String>
    void SetPrimaryIdentityId(PrimaryIdentityIdT&& value) { m_primaryIdentityIdHasBeenSet = true; m_primaryIdentityId = std::forward<PrimaryIdentityIdT>(value); }
    template<typename PrimaryIdentityIdT = Aws::String>
    GetApprovalTeamResponseApprover& WithPrimaryIdentityId(PrimaryIdentityIdT&& value) { SetPrimaryIdentityId(std::forward<PrimaryIdentityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the identity source. The identity source
     * manages the user authentication for approvers.</p>
     */
    inline const Aws::String& GetPrimaryIdentitySourceArn() const { return m_primaryIdentitySourceArn; }
    inline bool PrimaryIdentitySourceArnHasBeenSet() const { return m_primaryIdentitySourceArnHasBeenSet; }
    template<typename PrimaryIdentitySourceArnT = Aws::String>
    void SetPrimaryIdentitySourceArn(PrimaryIdentitySourceArnT&& value) { m_primaryIdentitySourceArnHasBeenSet = true; m_primaryIdentitySourceArn = std::forward<PrimaryIdentitySourceArnT>(value); }
    template<typename PrimaryIdentitySourceArnT = Aws::String>
    GetApprovalTeamResponseApprover& WithPrimaryIdentitySourceArn(PrimaryIdentitySourceArnT&& value) { SetPrimaryIdentitySourceArn(std::forward<PrimaryIdentitySourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status for the identity source. For example, if an approver has accepted a
     * team invitation with a user authentication method managed by the identity
     * source.</p>
     */
    inline IdentityStatus GetPrimaryIdentityStatus() const { return m_primaryIdentityStatus; }
    inline bool PrimaryIdentityStatusHasBeenSet() const { return m_primaryIdentityStatusHasBeenSet; }
    inline void SetPrimaryIdentityStatus(IdentityStatus value) { m_primaryIdentityStatusHasBeenSet = true; m_primaryIdentityStatus = value; }
    inline GetApprovalTeamResponseApprover& WithPrimaryIdentityStatus(IdentityStatus value) { SetPrimaryIdentityStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_approverId;
    bool m_approverIdHasBeenSet = false;

    Aws::Utils::DateTime m_responseTime{};
    bool m_responseTimeHasBeenSet = false;

    Aws::String m_primaryIdentityId;
    bool m_primaryIdentityIdHasBeenSet = false;

    Aws::String m_primaryIdentitySourceArn;
    bool m_primaryIdentitySourceArnHasBeenSet = false;

    IdentityStatus m_primaryIdentityStatus{IdentityStatus::NOT_SET};
    bool m_primaryIdentityStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
