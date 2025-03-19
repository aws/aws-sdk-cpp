/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/AppInputSource.h>
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
  class ListAppInputSourcesResult
  {
  public:
    AWS_RESILIENCEHUB_API ListAppInputSourcesResult() = default;
    AWS_RESILIENCEHUB_API ListAppInputSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListAppInputSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of Resilience Hub application input sources.</p>
     */
    inline const Aws::Vector<AppInputSource>& GetAppInputSources() const { return m_appInputSources; }
    template<typename AppInputSourcesT = Aws::Vector<AppInputSource>>
    void SetAppInputSources(AppInputSourcesT&& value) { m_appInputSourcesHasBeenSet = true; m_appInputSources = std::forward<AppInputSourcesT>(value); }
    template<typename AppInputSourcesT = Aws::Vector<AppInputSource>>
    ListAppInputSourcesResult& WithAppInputSources(AppInputSourcesT&& value) { SetAppInputSources(std::forward<AppInputSourcesT>(value)); return *this;}
    template<typename AppInputSourcesT = AppInputSource>
    ListAppInputSourcesResult& AddAppInputSources(AppInputSourcesT&& value) { m_appInputSourcesHasBeenSet = true; m_appInputSources.emplace_back(std::forward<AppInputSourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAppInputSourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAppInputSourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AppInputSource> m_appInputSources;
    bool m_appInputSourcesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
