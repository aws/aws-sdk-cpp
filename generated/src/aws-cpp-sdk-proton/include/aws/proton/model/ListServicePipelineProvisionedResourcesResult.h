/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/proton/model/ProvisionedResource.h>
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
namespace Proton
{
namespace Model
{
  class ListServicePipelineProvisionedResourcesResult
  {
  public:
    AWS_PROTON_API ListServicePipelineProvisionedResourcesResult() = default;
    AWS_PROTON_API ListServicePipelineProvisionedResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API ListServicePipelineProvisionedResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A token that indicates the location of the next provisioned resource in the
     * array of provisioned resources, after the current requested list of provisioned
     * resources.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListServicePipelineProvisionedResourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of provisioned resources for a service and pipeline.</p>
     */
    inline const Aws::Vector<ProvisionedResource>& GetProvisionedResources() const { return m_provisionedResources; }
    template<typename ProvisionedResourcesT = Aws::Vector<ProvisionedResource>>
    void SetProvisionedResources(ProvisionedResourcesT&& value) { m_provisionedResourcesHasBeenSet = true; m_provisionedResources = std::forward<ProvisionedResourcesT>(value); }
    template<typename ProvisionedResourcesT = Aws::Vector<ProvisionedResource>>
    ListServicePipelineProvisionedResourcesResult& WithProvisionedResources(ProvisionedResourcesT&& value) { SetProvisionedResources(std::forward<ProvisionedResourcesT>(value)); return *this;}
    template<typename ProvisionedResourcesT = ProvisionedResource>
    ListServicePipelineProvisionedResourcesResult& AddProvisionedResources(ProvisionedResourcesT&& value) { m_provisionedResourcesHasBeenSet = true; m_provisionedResources.emplace_back(std::forward<ProvisionedResourcesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListServicePipelineProvisionedResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ProvisionedResource> m_provisionedResources;
    bool m_provisionedResourcesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
