/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ResourceExplorer2
{
namespace Model
{
  class ListServiceViewsResult
  {
  public:
    AWS_RESOURCEEXPLORER2_API ListServiceViewsResult() = default;
    AWS_RESOURCEEXPLORER2_API ListServiceViewsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEEXPLORER2_API ListServiceViewsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token to use in a subsequent <code>ListServiceViews</code>
     * request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListServiceViewsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Amazon Resource Names (ARNs) for the service views available in the
     * current Amazon Web Services account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceViews() const { return m_serviceViews; }
    template<typename ServiceViewsT = Aws::Vector<Aws::String>>
    void SetServiceViews(ServiceViewsT&& value) { m_serviceViewsHasBeenSet = true; m_serviceViews = std::forward<ServiceViewsT>(value); }
    template<typename ServiceViewsT = Aws::Vector<Aws::String>>
    ListServiceViewsResult& WithServiceViews(ServiceViewsT&& value) { SetServiceViews(std::forward<ServiceViewsT>(value)); return *this;}
    template<typename ServiceViewsT = Aws::String>
    ListServiceViewsResult& AddServiceViews(ServiceViewsT&& value) { m_serviceViewsHasBeenSet = true; m_serviceViews.emplace_back(std::forward<ServiceViewsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListServiceViewsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_serviceViews;
    bool m_serviceViewsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
