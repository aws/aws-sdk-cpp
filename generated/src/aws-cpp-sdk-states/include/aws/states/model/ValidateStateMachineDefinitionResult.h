/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/model/ValidateStateMachineDefinitionResultCode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/ValidateStateMachineDefinitionDiagnostic.h>
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
namespace SFN
{
namespace Model
{
  class ValidateStateMachineDefinitionResult
  {
  public:
    AWS_SFN_API ValidateStateMachineDefinitionResult();
    AWS_SFN_API ValidateStateMachineDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API ValidateStateMachineDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The result value will be <code>OK</code> when no syntax errors are found, or
     * <code>FAIL</code> if the workflow definition does not pass verification.</p>
     */
    inline const ValidateStateMachineDefinitionResultCode& GetResult() const{ return m_result; }
    inline void SetResult(const ValidateStateMachineDefinitionResultCode& value) { m_result = value; }
    inline void SetResult(ValidateStateMachineDefinitionResultCode&& value) { m_result = std::move(value); }
    inline ValidateStateMachineDefinitionResult& WithResult(const ValidateStateMachineDefinitionResultCode& value) { SetResult(value); return *this;}
    inline ValidateStateMachineDefinitionResult& WithResult(ValidateStateMachineDefinitionResultCode&& value) { SetResult(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of diagnostic errors and warnings found during validation of the
     * state machine definition. Since <b>warnings</b> do not prevent deploying your
     * workflow definition, the <b>result</b> value could be <code>OK</code> even when
     * warning diagnostics are present in the response.</p>
     */
    inline const Aws::Vector<ValidateStateMachineDefinitionDiagnostic>& GetDiagnostics() const{ return m_diagnostics; }
    inline void SetDiagnostics(const Aws::Vector<ValidateStateMachineDefinitionDiagnostic>& value) { m_diagnostics = value; }
    inline void SetDiagnostics(Aws::Vector<ValidateStateMachineDefinitionDiagnostic>&& value) { m_diagnostics = std::move(value); }
    inline ValidateStateMachineDefinitionResult& WithDiagnostics(const Aws::Vector<ValidateStateMachineDefinitionDiagnostic>& value) { SetDiagnostics(value); return *this;}
    inline ValidateStateMachineDefinitionResult& WithDiagnostics(Aws::Vector<ValidateStateMachineDefinitionDiagnostic>&& value) { SetDiagnostics(std::move(value)); return *this;}
    inline ValidateStateMachineDefinitionResult& AddDiagnostics(const ValidateStateMachineDefinitionDiagnostic& value) { m_diagnostics.push_back(value); return *this; }
    inline ValidateStateMachineDefinitionResult& AddDiagnostics(ValidateStateMachineDefinitionDiagnostic&& value) { m_diagnostics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The result value will be <code>true</code> if the number of diagnostics found
     * in the workflow definition exceeds <code>maxResults</code>. When all diagnostics
     * results are returned, the value will be <code>false</code>.</p>
     */
    inline bool GetTruncated() const{ return m_truncated; }
    inline void SetTruncated(bool value) { m_truncated = value; }
    inline ValidateStateMachineDefinitionResult& WithTruncated(bool value) { SetTruncated(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ValidateStateMachineDefinitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ValidateStateMachineDefinitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ValidateStateMachineDefinitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ValidateStateMachineDefinitionResultCode m_result;

    Aws::Vector<ValidateStateMachineDefinitionDiagnostic> m_diagnostics;

    bool m_truncated;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
