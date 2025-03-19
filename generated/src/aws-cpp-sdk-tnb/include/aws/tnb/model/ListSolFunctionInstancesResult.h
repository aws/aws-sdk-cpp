/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/ListSolFunctionInstanceInfo.h>
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
namespace tnb
{
namespace Model
{
  class ListSolFunctionInstancesResult
  {
  public:
    AWS_TNB_API ListSolFunctionInstancesResult() = default;
    AWS_TNB_API ListSolFunctionInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API ListSolFunctionInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Network function instances.</p>
     */
    inline const Aws::Vector<ListSolFunctionInstanceInfo>& GetFunctionInstances() const { return m_functionInstances; }
    template<typename FunctionInstancesT = Aws::Vector<ListSolFunctionInstanceInfo>>
    void SetFunctionInstances(FunctionInstancesT&& value) { m_functionInstancesHasBeenSet = true; m_functionInstances = std::forward<FunctionInstancesT>(value); }
    template<typename FunctionInstancesT = Aws::Vector<ListSolFunctionInstanceInfo>>
    ListSolFunctionInstancesResult& WithFunctionInstances(FunctionInstancesT&& value) { SetFunctionInstances(std::forward<FunctionInstancesT>(value)); return *this;}
    template<typename FunctionInstancesT = ListSolFunctionInstanceInfo>
    ListSolFunctionInstancesResult& AddFunctionInstances(FunctionInstancesT&& value) { m_functionInstancesHasBeenSet = true; m_functionInstances.emplace_back(std::forward<FunctionInstancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSolFunctionInstancesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSolFunctionInstancesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ListSolFunctionInstanceInfo> m_functionInstances;
    bool m_functionInstancesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
