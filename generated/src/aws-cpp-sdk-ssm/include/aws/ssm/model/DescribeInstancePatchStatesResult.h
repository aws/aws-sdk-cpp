/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/InstancePatchState.h>
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
  class DescribeInstancePatchStatesResult
  {
  public:
    AWS_SSM_API DescribeInstancePatchStatesResult();
    AWS_SSM_API DescribeInstancePatchStatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeInstancePatchStatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The high-level patch state for the requested managed nodes.</p>
     */
    inline const Aws::Vector<InstancePatchState>& GetInstancePatchStates() const{ return m_instancePatchStates; }
    inline void SetInstancePatchStates(const Aws::Vector<InstancePatchState>& value) { m_instancePatchStates = value; }
    inline void SetInstancePatchStates(Aws::Vector<InstancePatchState>&& value) { m_instancePatchStates = std::move(value); }
    inline DescribeInstancePatchStatesResult& WithInstancePatchStates(const Aws::Vector<InstancePatchState>& value) { SetInstancePatchStates(value); return *this;}
    inline DescribeInstancePatchStatesResult& WithInstancePatchStates(Aws::Vector<InstancePatchState>&& value) { SetInstancePatchStates(std::move(value)); return *this;}
    inline DescribeInstancePatchStatesResult& AddInstancePatchStates(const InstancePatchState& value) { m_instancePatchStates.push_back(value); return *this; }
    inline DescribeInstancePatchStatesResult& AddInstancePatchStates(InstancePatchState&& value) { m_instancePatchStates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeInstancePatchStatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeInstancePatchStatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeInstancePatchStatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeInstancePatchStatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeInstancePatchStatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeInstancePatchStatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<InstancePatchState> m_instancePatchStates;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
