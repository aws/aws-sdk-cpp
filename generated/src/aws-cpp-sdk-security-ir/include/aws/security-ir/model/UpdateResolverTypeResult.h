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
    AWS_SECURITYIR_API UpdateResolverTypeResult() = default;
    AWS_SECURITYIR_API UpdateResolverTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYIR_API UpdateResolverTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Response element for UpdateResolver identifying the case ID being
     * updated.</p>
     */
    inline const Aws::String& GetCaseId() const { return m_caseId; }
    template<typename CaseIdT = Aws::String>
    void SetCaseId(CaseIdT&& value) { m_caseIdHasBeenSet = true; m_caseId = std::forward<CaseIdT>(value); }
    template<typename CaseIdT = Aws::String>
    UpdateResolverTypeResult& WithCaseId(CaseIdT&& value) { SetCaseId(std::forward<CaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for UpdateResolver identifying the current status of the
     * case.</p>
     */
    inline CaseStatus GetCaseStatus() const { return m_caseStatus; }
    inline void SetCaseStatus(CaseStatus value) { m_caseStatusHasBeenSet = true; m_caseStatus = value; }
    inline UpdateResolverTypeResult& WithCaseStatus(CaseStatus value) { SetCaseStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for UpdateResolver identifying the current resolver of the
     * case.</p>
     */
    inline ResolverType GetResolverType() const { return m_resolverType; }
    inline void SetResolverType(ResolverType value) { m_resolverTypeHasBeenSet = true; m_resolverType = value; }
    inline UpdateResolverTypeResult& WithResolverType(ResolverType value) { SetResolverType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateResolverTypeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet = false;

    CaseStatus m_caseStatus{CaseStatus::NOT_SET};
    bool m_caseStatusHasBeenSet = false;

    ResolverType m_resolverType{ResolverType::NOT_SET};
    bool m_resolverTypeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
