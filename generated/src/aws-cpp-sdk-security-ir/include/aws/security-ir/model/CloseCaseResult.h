/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/security-ir/model/CaseStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SecurityIR
{
namespace Model
{
  class CloseCaseResult
  {
  public:
    AWS_SECURITYIR_API CloseCaseResult() = default;
    AWS_SECURITYIR_API CloseCaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYIR_API CloseCaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A response element providing responses for requests to CloseCase. This
     * element responds <code>Closed </code> if successful. </p>
     */
    inline CaseStatus GetCaseStatus() const { return m_caseStatus; }
    inline void SetCaseStatus(CaseStatus value) { m_caseStatusHasBeenSet = true; m_caseStatus = value; }
    inline CloseCaseResult& WithCaseStatus(CaseStatus value) { SetCaseStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A response element providing responses for requests to CloseCase. This
     * element responds with the ISO-8601 formatted timestamp of the moment when the
     * case was closed. </p>
     */
    inline const Aws::Utils::DateTime& GetClosedDate() const { return m_closedDate; }
    template<typename ClosedDateT = Aws::Utils::DateTime>
    void SetClosedDate(ClosedDateT&& value) { m_closedDateHasBeenSet = true; m_closedDate = std::forward<ClosedDateT>(value); }
    template<typename ClosedDateT = Aws::Utils::DateTime>
    CloseCaseResult& WithClosedDate(ClosedDateT&& value) { SetClosedDate(std::forward<ClosedDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CloseCaseResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CaseStatus m_caseStatus{CaseStatus::NOT_SET};
    bool m_caseStatusHasBeenSet = false;

    Aws::Utils::DateTime m_closedDate{};
    bool m_closedDateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
