/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/GroupSummary.h>
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
namespace QBusiness
{
namespace Model
{
  class ListGroupsResult
  {
  public:
    AWS_QBUSINESS_API ListGroupsResult();
    AWS_QBUSINESS_API ListGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API ListGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summary information for list of groups that are mapped to users.</p>
     */
    inline const Aws::Vector<GroupSummary>& GetItems() const{ return m_items; }

    /**
     * <p>Summary information for list of groups that are mapped to users.</p>
     */
    inline void SetItems(const Aws::Vector<GroupSummary>& value) { m_items = value; }

    /**
     * <p>Summary information for list of groups that are mapped to users.</p>
     */
    inline void SetItems(Aws::Vector<GroupSummary>&& value) { m_items = std::move(value); }

    /**
     * <p>Summary information for list of groups that are mapped to users.</p>
     */
    inline ListGroupsResult& WithItems(const Aws::Vector<GroupSummary>& value) { SetItems(value); return *this;}

    /**
     * <p>Summary information for list of groups that are mapped to users.</p>
     */
    inline ListGroupsResult& WithItems(Aws::Vector<GroupSummary>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Summary information for list of groups that are mapped to users.</p>
     */
    inline ListGroupsResult& AddItems(const GroupSummary& value) { m_items.push_back(value); return *this; }

    /**
     * <p>Summary information for list of groups that are mapped to users.</p>
     */
    inline ListGroupsResult& AddItems(GroupSummary&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon Q returns this token that you can use in
     * the subsequent request to retrieve the next set of groups that are mapped to
     * users.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Q returns this token that you can use in
     * the subsequent request to retrieve the next set of groups that are mapped to
     * users.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Q returns this token that you can use in
     * the subsequent request to retrieve the next set of groups that are mapped to
     * users.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Q returns this token that you can use in
     * the subsequent request to retrieve the next set of groups that are mapped to
     * users.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Q returns this token that you can use in
     * the subsequent request to retrieve the next set of groups that are mapped to
     * users.</p>
     */
    inline ListGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Q returns this token that you can use in
     * the subsequent request to retrieve the next set of groups that are mapped to
     * users.</p>
     */
    inline ListGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Q returns this token that you can use in
     * the subsequent request to retrieve the next set of groups that are mapped to
     * users.</p>
     */
    inline ListGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<GroupSummary> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
