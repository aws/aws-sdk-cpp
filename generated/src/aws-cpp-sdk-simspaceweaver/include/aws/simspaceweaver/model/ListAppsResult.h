/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/simspaceweaver/model/SimulationAppMetadata.h>
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
namespace SimSpaceWeaver
{
namespace Model
{
  class ListAppsResult
  {
  public:
    AWS_SIMSPACEWEAVER_API ListAppsResult() = default;
    AWS_SIMSPACEWEAVER_API ListAppsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIMSPACEWEAVER_API ListAppsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of apps for the given simulation and domain.</p>
     */
    inline const Aws::Vector<SimulationAppMetadata>& GetApps() const { return m_apps; }
    template<typename AppsT = Aws::Vector<SimulationAppMetadata>>
    void SetApps(AppsT&& value) { m_appsHasBeenSet = true; m_apps = std::forward<AppsT>(value); }
    template<typename AppsT = Aws::Vector<SimulationAppMetadata>>
    ListAppsResult& WithApps(AppsT&& value) { SetApps(std::forward<AppsT>(value)); return *this;}
    template<typename AppsT = SimulationAppMetadata>
    ListAppsResult& AddApps(AppsT&& value) { m_appsHasBeenSet = true; m_apps.emplace_back(std::forward<AppsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If SimSpace Weaver returns <code>nextToken</code>, then there are more
     * results available. The value of <code>nextToken</code> is a unique pagination
     * token for each page. To retrieve the next page, call the operation again using
     * the returned token. Keep all other arguments unchanged. If no results remain,
     * then <code>nextToken</code> is set to <code>null</code>. Each pagination token
     * expires after 24 hours. If you provide a token that isn't valid, then you
     * receive an <i>HTTP 400 ValidationException</i> error.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAppsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAppsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SimulationAppMetadata> m_apps;
    bool m_appsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
