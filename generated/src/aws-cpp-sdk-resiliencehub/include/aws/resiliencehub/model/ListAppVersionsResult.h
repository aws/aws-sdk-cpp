/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/AppVersionSummary.h>
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
  class ListAppVersionsResult
  {
  public:
    AWS_RESILIENCEHUB_API ListAppVersionsResult() = default;
    AWS_RESILIENCEHUB_API ListAppVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListAppVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The version of the application.</p>
     */
    inline const Aws::Vector<AppVersionSummary>& GetAppVersions() const { return m_appVersions; }
    template<typename AppVersionsT = Aws::Vector<AppVersionSummary>>
    void SetAppVersions(AppVersionsT&& value) { m_appVersionsHasBeenSet = true; m_appVersions = std::forward<AppVersionsT>(value); }
    template<typename AppVersionsT = Aws::Vector<AppVersionSummary>>
    ListAppVersionsResult& WithAppVersions(AppVersionsT&& value) { SetAppVersions(std::forward<AppVersionsT>(value)); return *this;}
    template<typename AppVersionsT = AppVersionSummary>
    ListAppVersionsResult& AddAppVersions(AppVersionsT&& value) { m_appVersionsHasBeenSet = true; m_appVersions.emplace_back(std::forward<AppVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAppVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAppVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AppVersionSummary> m_appVersions;
    bool m_appVersionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
