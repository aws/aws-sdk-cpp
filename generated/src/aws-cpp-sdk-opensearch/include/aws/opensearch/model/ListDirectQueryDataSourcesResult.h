/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/DirectQueryDataSource.h>
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
namespace OpenSearchService
{
namespace Model
{
  class ListDirectQueryDataSourcesResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API ListDirectQueryDataSourcesResult() = default;
    AWS_OPENSEARCHSERVICE_API ListDirectQueryDataSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API ListDirectQueryDataSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDirectQueryDataSourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of the direct query data sources that are returned by the
     * <code>ListDirectQueryDataSources</code> API operation. </p>
     */
    inline const Aws::Vector<DirectQueryDataSource>& GetDirectQueryDataSources() const { return m_directQueryDataSources; }
    template<typename DirectQueryDataSourcesT = Aws::Vector<DirectQueryDataSource>>
    void SetDirectQueryDataSources(DirectQueryDataSourcesT&& value) { m_directQueryDataSourcesHasBeenSet = true; m_directQueryDataSources = std::forward<DirectQueryDataSourcesT>(value); }
    template<typename DirectQueryDataSourcesT = Aws::Vector<DirectQueryDataSource>>
    ListDirectQueryDataSourcesResult& WithDirectQueryDataSources(DirectQueryDataSourcesT&& value) { SetDirectQueryDataSources(std::forward<DirectQueryDataSourcesT>(value)); return *this;}
    template<typename DirectQueryDataSourcesT = DirectQueryDataSource>
    ListDirectQueryDataSourcesResult& AddDirectQueryDataSources(DirectQueryDataSourcesT&& value) { m_directQueryDataSourcesHasBeenSet = true; m_directQueryDataSources.emplace_back(std::forward<DirectQueryDataSourcesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDirectQueryDataSourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<DirectQueryDataSource> m_directQueryDataSources;
    bool m_directQueryDataSourcesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
