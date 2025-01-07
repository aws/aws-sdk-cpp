/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/security-ir/model/CaseStatus.h>
#include <aws/security-ir/model/ResolverType.h>
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
  class UpdateResolverTypeResult
  {
  public:
    AWS_SECURITYIR_API UpdateResolverTypeResult();
    AWS_SECURITYIR_API UpdateResolverTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYIR_API UpdateResolverTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Response element for UpdateResolver identifying the case ID being
     * updated.</p>
     */
    inline const Aws::String& GetCaseId() const{ return m_caseId; }
    inline void SetCaseId(const Aws::String& value) { m_caseId = value; }
    inline void SetCaseId(Aws::String&& value) { m_caseId = std::move(value); }
    inline void SetCaseId(const char* value) { m_caseId.assign(value); }
    inline UpdateResolverTypeResult& WithCaseId(const Aws::String& value) { SetCaseId(value); return *this;}
    inline UpdateResolverTypeResult& WithCaseId(Aws::String&& value) { SetCaseId(std::move(value)); return *this;}
    inline UpdateResolverTypeResult& WithCaseId(const char* value) { SetCaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for UpdateResolver identifying the current status of the
     * case.</p>
     */
    inline const CaseStatus& GetCaseStatus() const{ return m_caseStatus; }
    inline void SetCaseStatus(const CaseStatus& value) { m_caseStatus = value; }
    inline void SetCaseStatus(CaseStatus&& value) { m_caseStatus = std::move(value); }
    inline UpdateResolverTypeResult& WithCaseStatus(const CaseStatus& value) { SetCaseStatus(value); return *this;}
    inline UpdateResolverTypeResult& WithCaseStatus(CaseStatus&& value) { SetCaseStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for UpdateResolver identifying the current resolver of the
     * case.</p>
     */
    inline const ResolverType& GetResolverType() const{ return m_resolverType; }
    inline void SetResolverType(const ResolverType& value) { m_resolverType = value; }
    inline void SetResolverType(ResolverType&& value) { m_resolverType = std::move(value); }
    inline UpdateResolverTypeResult& WithResolverType(const ResolverType& value) { SetResolverType(value); return *this;}
    inline UpdateResolverTypeResult& WithResolverType(ResolverType&& value) { SetResolverType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateResolverTypeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateResolverTypeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateResolverTypeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_caseId;

    CaseStatus m_caseStatus;

    ResolverType m_resolverType;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
