/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/schemas/model/DiscovererSummary.h>
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
namespace Schemas
{
namespace Model
{
  class ListDiscoverersResult
  {
  public:
    AWS_SCHEMAS_API ListDiscoverersResult() = default;
    AWS_SCHEMAS_API ListDiscoverersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SCHEMAS_API ListDiscoverersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of DiscovererSummary information.</p>
     */
    inline const Aws::Vector<DiscovererSummary>& GetDiscoverers() const { return m_discoverers; }
    template<typename DiscoverersT = Aws::Vector<DiscovererSummary>>
    void SetDiscoverers(DiscoverersT&& value) { m_discoverersHasBeenSet = true; m_discoverers = std::forward<DiscoverersT>(value); }
    template<typename DiscoverersT = Aws::Vector<DiscovererSummary>>
    ListDiscoverersResult& WithDiscoverers(DiscoverersT&& value) { SetDiscoverers(std::forward<DiscoverersT>(value)); return *this;}
    template<typename DiscoverersT = DiscovererSummary>
    ListDiscoverersResult& AddDiscoverers(DiscoverersT&& value) { m_discoverersHasBeenSet = true; m_discoverers.emplace_back(std::forward<DiscoverersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDiscoverersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDiscoverersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DiscovererSummary> m_discoverers;
    bool m_discoverersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
