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
  class StartAutomationExecutionResult
  {
  public:
    AWS_SSM_API StartAutomationExecutionResult();
    AWS_SSM_API StartAutomationExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API StartAutomationExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique ID of a newly scheduled automation execution.</p>
     */
    inline const Aws::String& GetAutomationExecutionId() const{ return m_automationExecutionId; }
    inline void SetAutomationExecutionId(const Aws::String& value) { m_automationExecutionId = value; }
    inline void SetAutomationExecutionId(Aws::String&& value) { m_automationExecutionId = std::move(value); }
    inline void SetAutomationExecutionId(const char* value) { m_automationExecutionId.assign(value); }
    inline StartAutomationExecutionResult& WithAutomationExecutionId(const Aws::String& value) { SetAutomationExecutionId(value); return *this;}
    inline StartAutomationExecutionResult& WithAutomationExecutionId(Aws::String&& value) { SetAutomationExecutionId(std::move(value)); return *this;}
    inline StartAutomationExecutionResult& WithAutomationExecutionId(const char* value) { SetAutomationExecutionId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartAutomationExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartAutomationExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartAutomationExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_automationExecutionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
