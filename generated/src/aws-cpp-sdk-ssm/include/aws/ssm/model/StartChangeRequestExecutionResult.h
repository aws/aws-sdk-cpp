/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
  class StartChangeRequestExecutionResult
  {
  public:
    AWS_SSM_API StartChangeRequestExecutionResult();
    AWS_SSM_API StartChangeRequestExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API StartChangeRequestExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique ID of a runbook workflow operation. (A runbook workflow is a type
     * of Automation operation.) </p>
     */
    inline const Aws::String& GetAutomationExecutionId() const{ return m_automationExecutionId; }

    /**
     * <p>The unique ID of a runbook workflow operation. (A runbook workflow is a type
     * of Automation operation.) </p>
     */
    inline void SetAutomationExecutionId(const Aws::String& value) { m_automationExecutionId = value; }

    /**
     * <p>The unique ID of a runbook workflow operation. (A runbook workflow is a type
     * of Automation operation.) </p>
     */
    inline void SetAutomationExecutionId(Aws::String&& value) { m_automationExecutionId = std::move(value); }

    /**
     * <p>The unique ID of a runbook workflow operation. (A runbook workflow is a type
     * of Automation operation.) </p>
     */
    inline void SetAutomationExecutionId(const char* value) { m_automationExecutionId.assign(value); }

    /**
     * <p>The unique ID of a runbook workflow operation. (A runbook workflow is a type
     * of Automation operation.) </p>
     */
    inline StartChangeRequestExecutionResult& WithAutomationExecutionId(const Aws::String& value) { SetAutomationExecutionId(value); return *this;}

    /**
     * <p>The unique ID of a runbook workflow operation. (A runbook workflow is a type
     * of Automation operation.) </p>
     */
    inline StartChangeRequestExecutionResult& WithAutomationExecutionId(Aws::String&& value) { SetAutomationExecutionId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of a runbook workflow operation. (A runbook workflow is a type
     * of Automation operation.) </p>
     */
    inline StartChangeRequestExecutionResult& WithAutomationExecutionId(const char* value) { SetAutomationExecutionId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartChangeRequestExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartChangeRequestExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartChangeRequestExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_automationExecutionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
