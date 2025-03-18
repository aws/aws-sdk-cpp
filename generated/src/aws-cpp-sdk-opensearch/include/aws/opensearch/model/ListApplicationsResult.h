﻿/**
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
    AWS_OPENSEARCHSERVICE_API ListApplicationsResult() = default;
    AWS_OPENSEARCHSERVICE_API ListApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API ListApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary of the OpenSearch Applications, including ID, ARN, name, endpoint,
     * status, create time and last update time.</p>
     */
    inline const Aws::Vector<ApplicationSummary>& GetApplicationSummaries() const { return m_applicationSummaries; }
    template<typename ApplicationSummariesT = Aws::Vector<ApplicationSummary>>
    void SetApplicationSummaries(ApplicationSummariesT&& value) { m_applicationSummariesHasBeenSet = true; m_applicationSummaries = std::forward<ApplicationSummariesT>(value); }
    template<typename ApplicationSummariesT = Aws::Vector<ApplicationSummary>>
    ListApplicationsResult& WithApplicationSummaries(ApplicationSummariesT&& value) { SetApplicationSummaries(std::forward<ApplicationSummariesT>(value)); return *this;}
    template<typename ApplicationSummariesT = ApplicationSummary>
    ListApplicationsResult& AddApplicationSummaries(ApplicationSummariesT&& value) { m_applicationSummariesHasBeenSet = true; m_applicationSummaries.emplace_back(std::forward<ApplicationSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListApplicationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListApplicationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ApplicationSummary> m_applicationSummaries;
    bool m_applicationSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
