/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/AppSummary.h>
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
namespace ResilienceHub
{
namespace Model
{
  class ListAppsResult
  {
  public:
    AWS_RESILIENCEHUB_API ListAppsResult() = default;
    AWS_RESILIENCEHUB_API ListAppsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListAppsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summaries for the Resilience Hub application.</p>
     */
    inline const Aws::Vector<AppSummary>& GetAppSummaries() const { return m_appSummaries; }
    template<typename AppSummariesT = Aws::Vector<AppSummary>>
    void SetAppSummaries(AppSummariesT&& value) { m_appSummariesHasBeenSet = true; m_appSummaries = std::forward<AppSummariesT>(value); }
    template<typename AppSummariesT = Aws::Vector<AppSummary>>
    ListAppsResult& WithAppSummaries(AppSummariesT&& value) { SetAppSummaries(std::forward<AppSummariesT>(value)); return *this;}
    template<typename AppSummariesT = AppSummary>
    ListAppsResult& AddAppSummaries(AppSummariesT&& value) { m_appSummariesHasBeenSet = true; m_appSummaries.emplace_back(std::forward<AppSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
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

    Aws::Vector<AppSummary> m_appSummaries;
    bool m_appSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
