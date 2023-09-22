/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/GroupIdentifier.h>
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
  class ListGroupsForEntityResult
  {
  public:
    AWS_WORKMAIL_API ListGroupsForEntityResult();
    AWS_WORKMAIL_API ListGroupsForEntityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API ListGroupsForEntityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The overview of groups in an organization.</p>
     */
    inline const Aws::Vector<GroupIdentifier>& GetGroups() const{ return m_groups; }

    /**
     * <p>The overview of groups in an organization.</p>
     */
    inline void SetGroups(const Aws::Vector<GroupIdentifier>& value) { m_groups = value; }

    /**
     * <p>The overview of groups in an organization.</p>
     */
    inline void SetGroups(Aws::Vector<GroupIdentifier>&& value) { m_groups = std::move(value); }

    /**
     * <p>The overview of groups in an organization.</p>
     */
    inline ListGroupsForEntityResult& WithGroups(const Aws::Vector<GroupIdentifier>& value) { SetGroups(value); return *this;}

    /**
     * <p>The overview of groups in an organization.</p>
     */
    inline ListGroupsForEntityResult& WithGroups(Aws::Vector<GroupIdentifier>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>The overview of groups in an organization.</p>
     */
    inline ListGroupsForEntityResult& AddGroups(const GroupIdentifier& value) { m_groups.push_back(value); return *this; }

    /**
     * <p>The overview of groups in an organization.</p>
     */
    inline ListGroupsForEntityResult& AddGroups(GroupIdentifier&& value) { m_groups.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is `null`
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is `null`
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is `null`
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is `null`
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is `null`
     * when there are no more results to return.</p>
     */
    inline ListGroupsForEntityResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is `null`
     * when there are no more results to return.</p>
     */
    inline ListGroupsForEntityResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is `null`
     * when there are no more results to return.</p>
     */
    inline ListGroupsForEntityResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListGroupsForEntityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListGroupsForEntityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListGroupsForEntityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<GroupIdentifier> m_groups;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
