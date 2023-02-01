/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListAliasesResult
  {
  public:
    AWS_WORKMAIL_API ListAliasesResult();
    AWS_WORKMAIL_API ListAliasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API ListAliasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The entity's paginated aliases.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAliases() const{ return m_aliases; }

    /**
     * <p>The entity's paginated aliases.</p>
     */
    inline void SetAliases(const Aws::Vector<Aws::String>& value) { m_aliases = value; }

    /**
     * <p>The entity's paginated aliases.</p>
     */
    inline void SetAliases(Aws::Vector<Aws::String>&& value) { m_aliases = std::move(value); }

    /**
     * <p>The entity's paginated aliases.</p>
     */
    inline ListAliasesResult& WithAliases(const Aws::Vector<Aws::String>& value) { SetAliases(value); return *this;}

    /**
     * <p>The entity's paginated aliases.</p>
     */
    inline ListAliasesResult& WithAliases(Aws::Vector<Aws::String>&& value) { SetAliases(std::move(value)); return *this;}

    /**
     * <p>The entity's paginated aliases.</p>
     */
    inline ListAliasesResult& AddAliases(const Aws::String& value) { m_aliases.push_back(value); return *this; }

    /**
     * <p>The entity's paginated aliases.</p>
     */
    inline ListAliasesResult& AddAliases(Aws::String&& value) { m_aliases.push_back(std::move(value)); return *this; }

    /**
     * <p>The entity's paginated aliases.</p>
     */
    inline ListAliasesResult& AddAliases(const char* value) { m_aliases.push_back(value); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. The value is "null"
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. The value is "null"
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. The value is "null"
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. The value is "null"
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. The value is "null"
     * when there are no more results to return.</p>
     */
    inline ListAliasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. The value is "null"
     * when there are no more results to return.</p>
     */
    inline ListAliasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. The value is "null"
     * when there are no more results to return.</p>
     */
    inline ListAliasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_aliases;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
