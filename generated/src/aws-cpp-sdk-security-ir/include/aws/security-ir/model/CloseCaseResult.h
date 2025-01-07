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
    AWS_SECURITYIR_API CloseCaseResult();
    AWS_SECURITYIR_API CloseCaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYIR_API CloseCaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A response element providing responses for requests to CloseCase. This
     * element responds with the case status following the action. </p>
     */
    inline const CaseStatus& GetCaseStatus() const{ return m_caseStatus; }
    inline void SetCaseStatus(const CaseStatus& value) { m_caseStatus = value; }
    inline void SetCaseStatus(CaseStatus&& value) { m_caseStatus = std::move(value); }
    inline CloseCaseResult& WithCaseStatus(const CaseStatus& value) { SetCaseStatus(value); return *this;}
    inline CloseCaseResult& WithCaseStatus(CaseStatus&& value) { SetCaseStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A response element providing responses for requests to CloseCase. This
     * element responds with the case closure date following the action. </p>
     */
    inline const Aws::Utils::DateTime& GetClosedDate() const{ return m_closedDate; }
    inline void SetClosedDate(const Aws::Utils::DateTime& value) { m_closedDate = value; }
    inline void SetClosedDate(Aws::Utils::DateTime&& value) { m_closedDate = std::move(value); }
    inline CloseCaseResult& WithClosedDate(const Aws::Utils::DateTime& value) { SetClosedDate(value); return *this;}
    inline CloseCaseResult& WithClosedDate(Aws::Utils::DateTime&& value) { SetClosedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CloseCaseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CloseCaseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CloseCaseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    CaseStatus m_caseStatus;

    Aws::Utils::DateTime m_closedDate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
