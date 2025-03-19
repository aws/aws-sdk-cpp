/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class RejectQualificationRequestRequest : public MTurkRequest
  {
  public:
    AWS_MTURK_API RejectQualificationRequestRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RejectQualificationRequest"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The ID of the Qualification request, as returned by the
     * <code>ListQualificationRequests</code> operation. </p>
     */
    inline const Aws::String& GetQualificationRequestId() const { return m_qualificationRequestId; }
    inline bool QualificationRequestIdHasBeenSet() const { return m_qualificationRequestIdHasBeenSet; }
    template<typename QualificationRequestIdT = Aws::String>
    void SetQualificationRequestId(QualificationRequestIdT&& value) { m_qualificationRequestIdHasBeenSet = true; m_qualificationRequestId = std::forward<QualificationRequestIdT>(value); }
    template<typename QualificationRequestIdT = Aws::String>
    RejectQualificationRequestRequest& WithQualificationRequestId(QualificationRequestIdT&& value) { SetQualificationRequestId(std::forward<QualificationRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A text message explaining why the request was rejected, to be shown to the
     * Worker who made the request.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    RejectQualificationRequestRequest& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_qualificationRequestId;
    bool m_qualificationRequestIdHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
