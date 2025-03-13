/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/PhysicalResource.h>
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
  class ListAppVersionResourcesResult
  {
  public:
    AWS_RESILIENCEHUB_API ListAppVersionResourcesResult() = default;
    AWS_RESILIENCEHUB_API ListAppVersionResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListAppVersionResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAppVersionResourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The physical resources in the application version.</p>
     */
    inline const Aws::Vector<PhysicalResource>& GetPhysicalResources() const { return m_physicalResources; }
    template<typename PhysicalResourcesT = Aws::Vector<PhysicalResource>>
    void SetPhysicalResources(PhysicalResourcesT&& value) { m_physicalResourcesHasBeenSet = true; m_physicalResources = std::forward<PhysicalResourcesT>(value); }
    template<typename PhysicalResourcesT = Aws::Vector<PhysicalResource>>
    ListAppVersionResourcesResult& WithPhysicalResources(PhysicalResourcesT&& value) { SetPhysicalResources(std::forward<PhysicalResourcesT>(value)); return *this;}
    template<typename PhysicalResourcesT = PhysicalResource>
    ListAppVersionResourcesResult& AddPhysicalResources(PhysicalResourcesT&& value) { m_physicalResourcesHasBeenSet = true; m_physicalResources.emplace_back(std::forward<PhysicalResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID for a specific resolution.</p>
     */
    inline const Aws::String& GetResolutionId() const { return m_resolutionId; }
    template<typename ResolutionIdT = Aws::String>
    void SetResolutionId(ResolutionIdT&& value) { m_resolutionIdHasBeenSet = true; m_resolutionId = std::forward<ResolutionIdT>(value); }
    template<typename ResolutionIdT = Aws::String>
    ListAppVersionResourcesResult& WithResolutionId(ResolutionIdT&& value) { SetResolutionId(std::forward<ResolutionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAppVersionResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<PhysicalResource> m_physicalResources;
    bool m_physicalResourcesHasBeenSet = false;

    Aws::String m_resolutionId;
    bool m_resolutionIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
