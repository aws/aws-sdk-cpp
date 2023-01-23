/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/Group.h>
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
  class ListGroupsResult
  {
  public:
    AWS_WORKMAIL_API ListGroupsResult();
    AWS_WORKMAIL_API ListGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API ListGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The overview of groups for an organization.</p>
     */
    inline const Aws::Vector<Group>& GetGroups() const{ return m_groups; }

    /**
     * <p>The overview of groups for an organization.</p>
     */
    inline void SetGroups(const Aws::Vector<Group>& value) { m_groups = value; }

    /**
     * <p>The overview of groups for an organization.</p>
     */
    inline void SetGroups(Aws::Vector<Group>&& value) { m_groups = std::move(value); }

    /**
     * <p>The overview of groups for an organization.</p>
     */
    inline ListGroupsResult& WithGroups(const Aws::Vector<Group>& value) { SetGroups(value); return *this;}

    /**
     * <p>The overview of groups for an organization.</p>
     */
    inline ListGroupsResult& WithGroups(Aws::Vector<Group>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>The overview of groups for an organization.</p>
     */
    inline ListGroupsResult& AddGroups(const Group& value) { m_groups.push_back(value); return *this; }

    /**
     * <p>The overview of groups for an organization.</p>
     */
    inline ListGroupsResult& AddGroups(Group&& value) { m_groups.push_back(std::move(value)); return *this; }


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
    inline ListGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. The value is "null"
     * when there are no more results to return.</p>
     */
    inline ListGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. The value is "null"
     * when there are no more results to return.</p>
     */
    inline ListGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Group> m_groups;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
