/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/UnsupportedResource.h>
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
  class ListUnsupportedAppVersionResourcesResult
  {
  public:
    AWS_RESILIENCEHUB_API ListUnsupportedAppVersionResourcesResult() = default;
    AWS_RESILIENCEHUB_API ListUnsupportedAppVersionResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListUnsupportedAppVersionResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListUnsupportedAppVersionResourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for a specific resolution.</p>
     */
    inline const Aws::String& GetResolutionId() const { return m_resolutionId; }
    template<typename ResolutionIdT = Aws::String>
    void SetResolutionId(ResolutionIdT&& value) { m_resolutionIdHasBeenSet = true; m_resolutionId = std::forward<ResolutionIdT>(value); }
    template<typename ResolutionIdT = Aws::String>
    ListUnsupportedAppVersionResourcesResult& WithResolutionId(ResolutionIdT&& value) { SetResolutionId(std::forward<ResolutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unsupported resources for the application.</p>
     */
    inline const Aws::Vector<UnsupportedResource>& GetUnsupportedResources() const { return m_unsupportedResources; }
    template<typename UnsupportedResourcesT = Aws::Vector<UnsupportedResource>>
    void SetUnsupportedResources(UnsupportedResourcesT&& value) { m_unsupportedResourcesHasBeenSet = true; m_unsupportedResources = std::forward<UnsupportedResourcesT>(value); }
    template<typename UnsupportedResourcesT = Aws::Vector<UnsupportedResource>>
    ListUnsupportedAppVersionResourcesResult& WithUnsupportedResources(UnsupportedResourcesT&& value) { SetUnsupportedResources(std::forward<UnsupportedResourcesT>(value)); return *this;}
    template<typename UnsupportedResourcesT = UnsupportedResource>
    ListUnsupportedAppVersionResourcesResult& AddUnsupportedResources(UnsupportedResourcesT&& value) { m_unsupportedResourcesHasBeenSet = true; m_unsupportedResources.emplace_back(std::forward<UnsupportedResourcesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListUnsupportedAppVersionResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_resolutionId;
    bool m_resolutionIdHasBeenSet = false;

    Aws::Vector<UnsupportedResource> m_unsupportedResources;
    bool m_unsupportedResourcesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
