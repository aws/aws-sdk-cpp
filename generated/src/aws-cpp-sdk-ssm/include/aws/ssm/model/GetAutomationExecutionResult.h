/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/AutomationExecution.h>
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
namespace SSM
{
namespace Model
{
  class GetAutomationExecutionResult
  {
  public:
    AWS_SSM_API GetAutomationExecutionResult() = default;
    AWS_SSM_API GetAutomationExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetAutomationExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Detailed information about the current state of an automation execution.</p>
     */
    inline const AutomationExecution& GetAutomationExecution() const { return m_automationExecution; }
    template<typename AutomationExecutionT = AutomationExecution>
    void SetAutomationExecution(AutomationExecutionT&& value) { m_automationExecutionHasBeenSet = true; m_automationExecution = std::forward<AutomationExecutionT>(value); }
    template<typename AutomationExecutionT = AutomationExecution>
    GetAutomationExecutionResult& WithAutomationExecution(AutomationExecutionT&& value) { SetAutomationExecution(std::forward<AutomationExecutionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAutomationExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AutomationExecution m_automationExecution;
    bool m_automationExecutionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
