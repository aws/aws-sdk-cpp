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
    AWS_RESILIENCEHUB_API ListUnsupportedAppVersionResourcesResult();
    AWS_RESILIENCEHUB_API ListUnsupportedAppVersionResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListUnsupportedAppVersionResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline ListUnsupportedAppVersionResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline ListUnsupportedAppVersionResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline ListUnsupportedAppVersionResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The identifier for a specific resolution.</p>
     */
    inline const Aws::String& GetResolutionId() const{ return m_resolutionId; }

    /**
     * <p>The identifier for a specific resolution.</p>
     */
    inline void SetResolutionId(const Aws::String& value) { m_resolutionId = value; }

    /**
     * <p>The identifier for a specific resolution.</p>
     */
    inline void SetResolutionId(Aws::String&& value) { m_resolutionId = std::move(value); }

    /**
     * <p>The identifier for a specific resolution.</p>
     */
    inline void SetResolutionId(const char* value) { m_resolutionId.assign(value); }

    /**
     * <p>The identifier for a specific resolution.</p>
     */
    inline ListUnsupportedAppVersionResourcesResult& WithResolutionId(const Aws::String& value) { SetResolutionId(value); return *this;}

    /**
     * <p>The identifier for a specific resolution.</p>
     */
    inline ListUnsupportedAppVersionResourcesResult& WithResolutionId(Aws::String&& value) { SetResolutionId(std::move(value)); return *this;}

    /**
     * <p>The identifier for a specific resolution.</p>
     */
    inline ListUnsupportedAppVersionResourcesResult& WithResolutionId(const char* value) { SetResolutionId(value); return *this;}


    /**
     * <p>The unsupported resources for the application.</p>
     */
    inline const Aws::Vector<UnsupportedResource>& GetUnsupportedResources() const{ return m_unsupportedResources; }

    /**
     * <p>The unsupported resources for the application.</p>
     */
    inline void SetUnsupportedResources(const Aws::Vector<UnsupportedResource>& value) { m_unsupportedResources = value; }

    /**
     * <p>The unsupported resources for the application.</p>
     */
    inline void SetUnsupportedResources(Aws::Vector<UnsupportedResource>&& value) { m_unsupportedResources = std::move(value); }

    /**
     * <p>The unsupported resources for the application.</p>
     */
    inline ListUnsupportedAppVersionResourcesResult& WithUnsupportedResources(const Aws::Vector<UnsupportedResource>& value) { SetUnsupportedResources(value); return *this;}

    /**
     * <p>The unsupported resources for the application.</p>
     */
    inline ListUnsupportedAppVersionResourcesResult& WithUnsupportedResources(Aws::Vector<UnsupportedResource>&& value) { SetUnsupportedResources(std::move(value)); return *this;}

    /**
     * <p>The unsupported resources for the application.</p>
     */
    inline ListUnsupportedAppVersionResourcesResult& AddUnsupportedResources(const UnsupportedResource& value) { m_unsupportedResources.push_back(value); return *this; }

    /**
     * <p>The unsupported resources for the application.</p>
     */
    inline ListUnsupportedAppVersionResourcesResult& AddUnsupportedResources(UnsupportedResource&& value) { m_unsupportedResources.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListUnsupportedAppVersionResourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListUnsupportedAppVersionResourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListUnsupportedAppVersionResourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::String m_resolutionId;

    Aws::Vector<UnsupportedResource> m_unsupportedResources;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
