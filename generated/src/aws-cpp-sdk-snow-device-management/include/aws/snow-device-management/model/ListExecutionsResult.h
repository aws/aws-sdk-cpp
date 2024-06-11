﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snow-device-management/model/ExecutionSummary.h>
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
namespace SnowDeviceManagement
{
namespace Model
{
  class ListExecutionsResult
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API ListExecutionsResult();
    AWS_SNOWDEVICEMANAGEMENT_API ListExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWDEVICEMANAGEMENT_API ListExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of executions. Each execution contains the task ID, the device that
     * the task is executing on, the execution ID, and the status of the execution.</p>
     */
    inline const Aws::Vector<ExecutionSummary>& GetExecutions() const{ return m_executions; }
    inline void SetExecutions(const Aws::Vector<ExecutionSummary>& value) { m_executions = value; }
    inline void SetExecutions(Aws::Vector<ExecutionSummary>&& value) { m_executions = std::move(value); }
    inline ListExecutionsResult& WithExecutions(const Aws::Vector<ExecutionSummary>& value) { SetExecutions(value); return *this;}
    inline ListExecutionsResult& WithExecutions(Aws::Vector<ExecutionSummary>&& value) { SetExecutions(std::move(value)); return *this;}
    inline ListExecutionsResult& AddExecutions(const ExecutionSummary& value) { m_executions.push_back(value); return *this; }
    inline ListExecutionsResult& AddExecutions(ExecutionSummary&& value) { m_executions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token to continue to the next page of executions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListExecutionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListExecutionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListExecutionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ExecutionSummary> m_executions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
