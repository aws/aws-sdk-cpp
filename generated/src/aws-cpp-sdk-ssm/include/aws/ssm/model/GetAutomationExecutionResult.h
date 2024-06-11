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
    AWS_SSM_API GetAutomationExecutionResult();
    AWS_SSM_API GetAutomationExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetAutomationExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Detailed information about the current state of an automation execution.</p>
     */
    inline const AutomationExecution& GetAutomationExecution() const{ return m_automationExecution; }
    inline void SetAutomationExecution(const AutomationExecution& value) { m_automationExecution = value; }
    inline void SetAutomationExecution(AutomationExecution&& value) { m_automationExecution = std::move(value); }
    inline GetAutomationExecutionResult& WithAutomationExecution(const AutomationExecution& value) { SetAutomationExecution(value); return *this;}
    inline GetAutomationExecutionResult& WithAutomationExecution(AutomationExecution&& value) { SetAutomationExecution(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAutomationExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAutomationExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAutomationExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AutomationExecution m_automationExecution;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
