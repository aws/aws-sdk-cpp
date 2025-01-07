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
    AWS_SECURITYIR_API UpdateCaseStatusResult();
    AWS_SECURITYIR_API UpdateCaseStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYIR_API UpdateCaseStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Response element for UpdateCaseStatus showing the newly configured
     * status.</p>
     */
    inline const SelfManagedCaseStatus& GetCaseStatus() const{ return m_caseStatus; }
    inline void SetCaseStatus(const SelfManagedCaseStatus& value) { m_caseStatus = value; }
    inline void SetCaseStatus(SelfManagedCaseStatus&& value) { m_caseStatus = std::move(value); }
    inline UpdateCaseStatusResult& WithCaseStatus(const SelfManagedCaseStatus& value) { SetCaseStatus(value); return *this;}
    inline UpdateCaseStatusResult& WithCaseStatus(SelfManagedCaseStatus&& value) { SetCaseStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateCaseStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateCaseStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateCaseStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    SelfManagedCaseStatus m_caseStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
