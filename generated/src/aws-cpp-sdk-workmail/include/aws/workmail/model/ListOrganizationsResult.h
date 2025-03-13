/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/OrganizationSummary.h>
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
namespace WorkMail
{
namespace Model
{
  class ListOrganizationsResult
  {
  public:
    AWS_WORKMAIL_API ListOrganizationsResult() = default;
    AWS_WORKMAIL_API ListOrganizationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API ListOrganizationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The overview of owned organizations presented as a list of organization
     * summaries.</p>
     */
    inline const Aws::Vector<OrganizationSummary>& GetOrganizationSummaries() const { return m_organizationSummaries; }
    template<typename OrganizationSummariesT = Aws::Vector<OrganizationSummary>>
    void SetOrganizationSummaries(OrganizationSummariesT&& value) { m_organizationSummariesHasBeenSet = true; m_organizationSummaries = std::forward<OrganizationSummariesT>(value); }
    template<typename OrganizationSummariesT = Aws::Vector<OrganizationSummary>>
    ListOrganizationsResult& WithOrganizationSummaries(OrganizationSummariesT&& value) { SetOrganizationSummaries(std::forward<OrganizationSummariesT>(value)); return *this;}
    template<typename OrganizationSummariesT = OrganizationSummary>
    ListOrganizationsResult& AddOrganizationSummaries(OrganizationSummariesT&& value) { m_organizationSummariesHasBeenSet = true; m_organizationSummaries.emplace_back(std::forward<OrganizationSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. The value is "null"
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOrganizationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOrganizationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OrganizationSummary> m_organizationSummaries;
    bool m_organizationSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
