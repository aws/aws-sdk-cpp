/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/security-ir/model/SelfManagedCaseStatus.h>
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
  class UpdateCaseStatusResult
  {
  public:
    AWS_SECURITYIR_API UpdateCaseStatusResult() = default;
    AWS_SECURITYIR_API UpdateCaseStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYIR_API UpdateCaseStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Response element for UpdateCaseStatus showing the newly configured
     * status.</p>
     */
    inline SelfManagedCaseStatus GetCaseStatus() const { return m_caseStatus; }
    inline void SetCaseStatus(SelfManagedCaseStatus value) { m_caseStatusHasBeenSet = true; m_caseStatus = value; }
    inline UpdateCaseStatusResult& WithCaseStatus(SelfManagedCaseStatus value) { SetCaseStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateCaseStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SelfManagedCaseStatus m_caseStatus{SelfManagedCaseStatus::NOT_SET};
    bool m_caseStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
