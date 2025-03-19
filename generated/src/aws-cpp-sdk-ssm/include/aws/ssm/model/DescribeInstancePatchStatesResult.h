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
    AWS_SSM_API DescribeInstancePatchStatesResult() = default;
    AWS_SSM_API DescribeInstancePatchStatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeInstancePatchStatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The high-level patch state for the requested managed nodes.</p>
     */
    inline const Aws::Vector<InstancePatchState>& GetInstancePatchStates() const { return m_instancePatchStates; }
    template<typename InstancePatchStatesT = Aws::Vector<InstancePatchState>>
    void SetInstancePatchStates(InstancePatchStatesT&& value) { m_instancePatchStatesHasBeenSet = true; m_instancePatchStates = std::forward<InstancePatchStatesT>(value); }
    template<typename InstancePatchStatesT = Aws::Vector<InstancePatchState>>
    DescribeInstancePatchStatesResult& WithInstancePatchStates(InstancePatchStatesT&& value) { SetInstancePatchStates(std::forward<InstancePatchStatesT>(value)); return *this;}
    template<typename InstancePatchStatesT = InstancePatchState>
    DescribeInstancePatchStatesResult& AddInstancePatchStates(InstancePatchStatesT&& value) { m_instancePatchStatesHasBeenSet = true; m_instancePatchStates.emplace_back(std::forward<InstancePatchStatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeInstancePatchStatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeInstancePatchStatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstancePatchState> m_instancePatchStates;
    bool m_instancePatchStatesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
