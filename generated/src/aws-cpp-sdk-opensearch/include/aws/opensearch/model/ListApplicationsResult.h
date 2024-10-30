/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/ApplicationSummary.h>
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
namespace OpenSearchService
{
namespace Model
{
  class ListApplicationsResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API ListApplicationsResult();
    AWS_OPENSEARCHSERVICE_API ListApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API ListApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary of the OpenSearch Applications, including ID, ARN, name, endpoint,
     * status, create time and last update time.</p>
     */
    inline const Aws::Vector<ApplicationSummary>& GetApplicationSummaries() const{ return m_applicationSummaries; }
    inline void SetApplicationSummaries(const Aws::Vector<ApplicationSummary>& value) { m_applicationSummaries = value; }
    inline void SetApplicationSummaries(Aws::Vector<ApplicationSummary>&& value) { m_applicationSummaries = std::move(value); }
    inline ListApplicationsResult& WithApplicationSummaries(const Aws::Vector<ApplicationSummary>& value) { SetApplicationSummaries(value); return *this;}
    inline ListApplicationsResult& WithApplicationSummaries(Aws::Vector<ApplicationSummary>&& value) { SetApplicationSummaries(std::move(value)); return *this;}
    inline ListApplicationsResult& AddApplicationSummaries(const ApplicationSummary& value) { m_applicationSummaries.push_back(value); return *this; }
    inline ListApplicationsResult& AddApplicationSummaries(ApplicationSummary&& value) { m_applicationSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListApplicationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListApplicationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListApplicationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListApplicationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListApplicationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListApplicationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ApplicationSummary> m_applicationSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
