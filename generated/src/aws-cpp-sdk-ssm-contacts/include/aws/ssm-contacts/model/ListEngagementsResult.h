﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-contacts/model/Engagement.h>
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
namespace SSMContacts
{
namespace Model
{
  class ListEngagementsResult
  {
  public:
    AWS_SSMCONTACTS_API ListEngagementsResult();
    AWS_SSMCONTACTS_API ListEngagementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API ListEngagementsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEngagementsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEngagementsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEngagementsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of each engagement that occurred during the specified time range of an
     * incident.</p>
     */
    inline const Aws::Vector<Engagement>& GetEngagements() const{ return m_engagements; }
    inline void SetEngagements(const Aws::Vector<Engagement>& value) { m_engagements = value; }
    inline void SetEngagements(Aws::Vector<Engagement>&& value) { m_engagements = std::move(value); }
    inline ListEngagementsResult& WithEngagements(const Aws::Vector<Engagement>& value) { SetEngagements(value); return *this;}
    inline ListEngagementsResult& WithEngagements(Aws::Vector<Engagement>&& value) { SetEngagements(std::move(value)); return *this;}
    inline ListEngagementsResult& AddEngagements(const Engagement& value) { m_engagements.push_back(value); return *this; }
    inline ListEngagementsResult& AddEngagements(Engagement&& value) { m_engagements.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEngagementsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEngagementsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEngagementsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<Engagement> m_engagements;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
