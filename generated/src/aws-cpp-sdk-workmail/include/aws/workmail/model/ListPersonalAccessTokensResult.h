/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workmail/model/PersonalAccessTokenSummary.h>
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
  class ListPersonalAccessTokensResult
  {
  public:
    AWS_WORKMAIL_API ListPersonalAccessTokensResult() = default;
    AWS_WORKMAIL_API ListPersonalAccessTokensResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API ListPersonalAccessTokensResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The token from the previous response to query the next page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPersonalAccessTokensResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Lists all the personal tokens in an organization or user, if user ID is
     * provided. </p>
     */
    inline const Aws::Vector<PersonalAccessTokenSummary>& GetPersonalAccessTokenSummaries() const { return m_personalAccessTokenSummaries; }
    template<typename PersonalAccessTokenSummariesT = Aws::Vector<PersonalAccessTokenSummary>>
    void SetPersonalAccessTokenSummaries(PersonalAccessTokenSummariesT&& value) { m_personalAccessTokenSummariesHasBeenSet = true; m_personalAccessTokenSummaries = std::forward<PersonalAccessTokenSummariesT>(value); }
    template<typename PersonalAccessTokenSummariesT = Aws::Vector<PersonalAccessTokenSummary>>
    ListPersonalAccessTokensResult& WithPersonalAccessTokenSummaries(PersonalAccessTokenSummariesT&& value) { SetPersonalAccessTokenSummaries(std::forward<PersonalAccessTokenSummariesT>(value)); return *this;}
    template<typename PersonalAccessTokenSummariesT = PersonalAccessTokenSummary>
    ListPersonalAccessTokensResult& AddPersonalAccessTokenSummaries(PersonalAccessTokenSummariesT&& value) { m_personalAccessTokenSummariesHasBeenSet = true; m_personalAccessTokenSummaries.emplace_back(std::forward<PersonalAccessTokenSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPersonalAccessTokensResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<PersonalAccessTokenSummary> m_personalAccessTokenSummaries;
    bool m_personalAccessTokenSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
