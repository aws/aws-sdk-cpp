/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mpa/model/SessionResponse.h>
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
namespace MPA
{
namespace Model
{

  /**
   * <p>Contains details for an approver response in an approval
   * session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/GetSessionResponseApproverResponse">AWS
   * API Reference</a></p>
   */
  class GetSessionResponseApproverResponse
  {
  public:
    AWS_MPA_API GetSessionResponseApproverResponse() = default;
    AWS_MPA_API GetSessionResponseApproverResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API GetSessionResponseApproverResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    GetSessionResponseApproverResponse& WithApproverId(ApproverIdT&& value) { SetApproverId(std::forward<ApproverIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the identity source. The identity source
     * manages the user authentication for approvers.</p>
     */
    inline const Aws::String& GetIdentitySourceArn() const { return m_identitySourceArn; }
    inline bool IdentitySourceArnHasBeenSet() const { return m_identitySourceArnHasBeenSet; }
    template<typename IdentitySourceArnT = Aws::String>
    void SetIdentitySourceArn(IdentitySourceArnT&& value) { m_identitySourceArnHasBeenSet = true; m_identitySourceArn = std::forward<IdentitySourceArnT>(value); }
    template<typename IdentitySourceArnT = Aws::String>
    GetSessionResponseApproverResponse& WithIdentitySourceArn(IdentitySourceArnT&& value) { SetIdentitySourceArn(std::forward<IdentitySourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID for the identity source. The identity source manages the user
     * authentication for approvers.</p>
     */
    inline const Aws::String& GetIdentityId() const { return m_identityId; }
    inline bool IdentityIdHasBeenSet() const { return m_identityIdHasBeenSet; }
    template<typename IdentityIdT = Aws::String>
    void SetIdentityId(IdentityIdT&& value) { m_identityIdHasBeenSet = true; m_identityId = std::forward<IdentityIdT>(value); }
    template<typename IdentityIdT = Aws::String>
    GetSessionResponseApproverResponse& WithIdentityId(IdentityIdT&& value) { SetIdentityId(std::forward<IdentityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response to the operation request.</p>
     */
    inline SessionResponse GetResponse() const { return m_response; }
    inline bool ResponseHasBeenSet() const { return m_responseHasBeenSet; }
    inline void SetResponse(SessionResponse value) { m_responseHasBeenSet = true; m_response = value; }
    inline GetSessionResponseApproverResponse& WithResponse(SessionResponse value) { SetResponse(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp when a approver responded to the operation request.</p>
     */
    inline const Aws::Utils::DateTime& GetResponseTime() const { return m_responseTime; }
    inline bool ResponseTimeHasBeenSet() const { return m_responseTimeHasBeenSet; }
    template<typename ResponseTimeT = Aws::Utils::DateTime>
    void SetResponseTime(ResponseTimeT&& value) { m_responseTimeHasBeenSet = true; m_responseTime = std::forward<ResponseTimeT>(value); }
    template<typename ResponseTimeT = Aws::Utils::DateTime>
    GetSessionResponseApproverResponse& WithResponseTime(ResponseTimeT&& value) { SetResponseTime(std::forward<ResponseTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_approverId;
    bool m_approverIdHasBeenSet = false;

    Aws::String m_identitySourceArn;
    bool m_identitySourceArnHasBeenSet = false;

    Aws::String m_identityId;
    bool m_identityIdHasBeenSet = false;

    SessionResponse m_response{SessionResponse::NOT_SET};
    bool m_responseHasBeenSet = false;

    Aws::Utils::DateTime m_responseTime{};
    bool m_responseTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
