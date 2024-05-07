/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/ResourceDrift.h>
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
  class ListAppAssessmentResourceDriftsResult
  {
  public:
    AWS_RESILIENCEHUB_API ListAppAssessmentResourceDriftsResult();
    AWS_RESILIENCEHUB_API ListAppAssessmentResourceDriftsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListAppAssessmentResourceDriftsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline ListAppAssessmentResourceDriftsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline ListAppAssessmentResourceDriftsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline ListAppAssessmentResourceDriftsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Indicates all the resource drifts detected for an assessed entity.</p>
     */
    inline const Aws::Vector<ResourceDrift>& GetResourceDrifts() const{ return m_resourceDrifts; }

    /**
     * <p>Indicates all the resource drifts detected for an assessed entity.</p>
     */
    inline void SetResourceDrifts(const Aws::Vector<ResourceDrift>& value) { m_resourceDrifts = value; }

    /**
     * <p>Indicates all the resource drifts detected for an assessed entity.</p>
     */
    inline void SetResourceDrifts(Aws::Vector<ResourceDrift>&& value) { m_resourceDrifts = std::move(value); }

    /**
     * <p>Indicates all the resource drifts detected for an assessed entity.</p>
     */
    inline ListAppAssessmentResourceDriftsResult& WithResourceDrifts(const Aws::Vector<ResourceDrift>& value) { SetResourceDrifts(value); return *this;}

    /**
     * <p>Indicates all the resource drifts detected for an assessed entity.</p>
     */
    inline ListAppAssessmentResourceDriftsResult& WithResourceDrifts(Aws::Vector<ResourceDrift>&& value) { SetResourceDrifts(std::move(value)); return *this;}

    /**
     * <p>Indicates all the resource drifts detected for an assessed entity.</p>
     */
    inline ListAppAssessmentResourceDriftsResult& AddResourceDrifts(const ResourceDrift& value) { m_resourceDrifts.push_back(value); return *this; }

    /**
     * <p>Indicates all the resource drifts detected for an assessed entity.</p>
     */
    inline ListAppAssessmentResourceDriftsResult& AddResourceDrifts(ResourceDrift&& value) { m_resourceDrifts.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAppAssessmentResourceDriftsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAppAssessmentResourceDriftsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAppAssessmentResourceDriftsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ResourceDrift> m_resourceDrifts;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
