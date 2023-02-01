/**
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


    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListEngagementsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListEngagementsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListEngagementsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of each engagement that occurred during the specified time range of an
     * incident.</p>
     */
    inline const Aws::Vector<Engagement>& GetEngagements() const{ return m_engagements; }

    /**
     * <p>A list of each engagement that occurred during the specified time range of an
     * incident.</p>
     */
    inline void SetEngagements(const Aws::Vector<Engagement>& value) { m_engagements = value; }

    /**
     * <p>A list of each engagement that occurred during the specified time range of an
     * incident.</p>
     */
    inline void SetEngagements(Aws::Vector<Engagement>&& value) { m_engagements = std::move(value); }

    /**
     * <p>A list of each engagement that occurred during the specified time range of an
     * incident.</p>
     */
    inline ListEngagementsResult& WithEngagements(const Aws::Vector<Engagement>& value) { SetEngagements(value); return *this;}

    /**
     * <p>A list of each engagement that occurred during the specified time range of an
     * incident.</p>
     */
    inline ListEngagementsResult& WithEngagements(Aws::Vector<Engagement>&& value) { SetEngagements(std::move(value)); return *this;}

    /**
     * <p>A list of each engagement that occurred during the specified time range of an
     * incident.</p>
     */
    inline ListEngagementsResult& AddEngagements(const Engagement& value) { m_engagements.push_back(value); return *this; }

    /**
     * <p>A list of each engagement that occurred during the specified time range of an
     * incident.</p>
     */
    inline ListEngagementsResult& AddEngagements(Engagement&& value) { m_engagements.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Engagement> m_engagements;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
