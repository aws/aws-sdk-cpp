/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/ResourceMapping.h>
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
  class ListAppVersionResourceMappingsResult
  {
  public:
    AWS_RESILIENCEHUB_API ListAppVersionResourceMappingsResult() = default;
    AWS_RESILIENCEHUB_API ListAppVersionResourceMappingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListAppVersionResourceMappingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAppVersionResourceMappingsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Mappings used to map logical resources from the template to physical
     * resources. You can use the mapping type <code>CFN_STACK</code> if the
     * application template uses a logical stack name. Or you can map individual
     * resources by using the mapping type <code>RESOURCE</code>. We recommend using
     * the mapping type <code>CFN_STACK</code> if the application is backed by a
     * CloudFormation stack.</p>
     */
    inline const Aws::Vector<ResourceMapping>& GetResourceMappings() const { return m_resourceMappings; }
    template<typename ResourceMappingsT = Aws::Vector<ResourceMapping>>
    void SetResourceMappings(ResourceMappingsT&& value) { m_resourceMappingsHasBeenSet = true; m_resourceMappings = std::forward<ResourceMappingsT>(value); }
    template<typename ResourceMappingsT = Aws::Vector<ResourceMapping>>
    ListAppVersionResourceMappingsResult& WithResourceMappings(ResourceMappingsT&& value) { SetResourceMappings(std::forward<ResourceMappingsT>(value)); return *this;}
    template<typename ResourceMappingsT = ResourceMapping>
    ListAppVersionResourceMappingsResult& AddResourceMappings(ResourceMappingsT&& value) { m_resourceMappingsHasBeenSet = true; m_resourceMappings.emplace_back(std::forward<ResourceMappingsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAppVersionResourceMappingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ResourceMapping> m_resourceMappings;
    bool m_resourceMappingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
