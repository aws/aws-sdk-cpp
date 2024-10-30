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
    AWS_WORKMAIL_API ListPersonalAccessTokensResult();
    AWS_WORKMAIL_API ListPersonalAccessTokensResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API ListPersonalAccessTokensResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The token from the previous response to query the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListPersonalAccessTokensResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPersonalAccessTokensResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPersonalAccessTokensResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Lists all the personal tokens in an organization or user, if user ID is
     * provided. </p>
     */
    inline const Aws::Vector<PersonalAccessTokenSummary>& GetPersonalAccessTokenSummaries() const{ return m_personalAccessTokenSummaries; }
    inline void SetPersonalAccessTokenSummaries(const Aws::Vector<PersonalAccessTokenSummary>& value) { m_personalAccessTokenSummaries = value; }
    inline void SetPersonalAccessTokenSummaries(Aws::Vector<PersonalAccessTokenSummary>&& value) { m_personalAccessTokenSummaries = std::move(value); }
    inline ListPersonalAccessTokensResult& WithPersonalAccessTokenSummaries(const Aws::Vector<PersonalAccessTokenSummary>& value) { SetPersonalAccessTokenSummaries(value); return *this;}
    inline ListPersonalAccessTokensResult& WithPersonalAccessTokenSummaries(Aws::Vector<PersonalAccessTokenSummary>&& value) { SetPersonalAccessTokenSummaries(std::move(value)); return *this;}
    inline ListPersonalAccessTokensResult& AddPersonalAccessTokenSummaries(const PersonalAccessTokenSummary& value) { m_personalAccessTokenSummaries.push_back(value); return *this; }
    inline ListPersonalAccessTokensResult& AddPersonalAccessTokenSummaries(PersonalAccessTokenSummary&& value) { m_personalAccessTokenSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPersonalAccessTokensResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPersonalAccessTokensResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPersonalAccessTokensResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<PersonalAccessTokenSummary> m_personalAccessTokenSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
