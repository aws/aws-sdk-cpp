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
    AWS_SFN_API ValidateStateMachineDefinitionResult() = default;
    AWS_SFN_API ValidateStateMachineDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API ValidateStateMachineDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The result value will be <code>OK</code> when no syntax errors are found, or
     * <code>FAIL</code> if the workflow definition does not pass verification.</p>
     */
    inline ValidateStateMachineDefinitionResultCode GetResult() const { return m_result; }
    inline void SetResult(ValidateStateMachineDefinitionResultCode value) { m_resultHasBeenSet = true; m_result = value; }
    inline ValidateStateMachineDefinitionResult& WithResult(ValidateStateMachineDefinitionResultCode value) { SetResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of diagnostic errors and warnings found during validation of the
     * state machine definition. Since <b>warnings</b> do not prevent deploying your
     * workflow definition, the <b>result</b> value could be <code>OK</code> even when
     * warning diagnostics are present in the response.</p>
     */
    inline const Aws::Vector<ValidateStateMachineDefinitionDiagnostic>& GetDiagnostics() const { return m_diagnostics; }
    template<typename DiagnosticsT = Aws::Vector<ValidateStateMachineDefinitionDiagnostic>>
    void SetDiagnostics(DiagnosticsT&& value) { m_diagnosticsHasBeenSet = true; m_diagnostics = std::forward<DiagnosticsT>(value); }
    template<typename DiagnosticsT = Aws::Vector<ValidateStateMachineDefinitionDiagnostic>>
    ValidateStateMachineDefinitionResult& WithDiagnostics(DiagnosticsT&& value) { SetDiagnostics(std::forward<DiagnosticsT>(value)); return *this;}
    template<typename DiagnosticsT = ValidateStateMachineDefinitionDiagnostic>
    ValidateStateMachineDefinitionResult& AddDiagnostics(DiagnosticsT&& value) { m_diagnosticsHasBeenSet = true; m_diagnostics.emplace_back(std::forward<DiagnosticsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The result value will be <code>true</code> if the number of diagnostics found
     * in the workflow definition exceeds <code>maxResults</code>. When all diagnostics
     * results are returned, the value will be <code>false</code>.</p>
     */
    inline bool GetTruncated() const { return m_truncated; }
    inline void SetTruncated(bool value) { m_truncatedHasBeenSet = true; m_truncated = value; }
    inline ValidateStateMachineDefinitionResult& WithTruncated(bool value) { SetTruncated(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ValidateStateMachineDefinitionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ValidateStateMachineDefinitionResultCode m_result{ValidateStateMachineDefinitionResultCode::NOT_SET};
    bool m_resultHasBeenSet = false;

    Aws::Vector<ValidateStateMachineDefinitionDiagnostic> m_diagnostics;
    bool m_diagnosticsHasBeenSet = false;

    bool m_truncated{false};
    bool m_truncatedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
