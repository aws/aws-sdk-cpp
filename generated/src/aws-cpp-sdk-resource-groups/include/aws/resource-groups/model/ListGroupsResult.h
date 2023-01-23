/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-groups/model/GroupIdentifier.h>
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
namespace ResourceGroups
{
namespace Model
{
  class ListGroupsResult
  {
  public:
    AWS_RESOURCEGROUPS_API ListGroupsResult();
    AWS_RESOURCEGROUPS_API ListGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPS_API ListGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <a>GroupIdentifier</a> objects. Each identifier is an object that
     * contains both the <code>Name</code> and the <code>GroupArn</code>.</p>
     */
    inline const Aws::Vector<GroupIdentifier>& GetGroupIdentifiers() const{ return m_groupIdentifiers; }

    /**
     * <p>A list of <a>GroupIdentifier</a> objects. Each identifier is an object that
     * contains both the <code>Name</code> and the <code>GroupArn</code>.</p>
     */
    inline void SetGroupIdentifiers(const Aws::Vector<GroupIdentifier>& value) { m_groupIdentifiers = value; }

    /**
     * <p>A list of <a>GroupIdentifier</a> objects. Each identifier is an object that
     * contains both the <code>Name</code> and the <code>GroupArn</code>.</p>
     */
    inline void SetGroupIdentifiers(Aws::Vector<GroupIdentifier>&& value) { m_groupIdentifiers = std::move(value); }

    /**
     * <p>A list of <a>GroupIdentifier</a> objects. Each identifier is an object that
     * contains both the <code>Name</code> and the <code>GroupArn</code>.</p>
     */
    inline ListGroupsResult& WithGroupIdentifiers(const Aws::Vector<GroupIdentifier>& value) { SetGroupIdentifiers(value); return *this;}

    /**
     * <p>A list of <a>GroupIdentifier</a> objects. Each identifier is an object that
     * contains both the <code>Name</code> and the <code>GroupArn</code>.</p>
     */
    inline ListGroupsResult& WithGroupIdentifiers(Aws::Vector<GroupIdentifier>&& value) { SetGroupIdentifiers(std::move(value)); return *this;}

    /**
     * <p>A list of <a>GroupIdentifier</a> objects. Each identifier is an object that
     * contains both the <code>Name</code> and the <code>GroupArn</code>.</p>
     */
    inline ListGroupsResult& AddGroupIdentifiers(const GroupIdentifier& value) { m_groupIdentifiers.push_back(value); return *this; }

    /**
     * <p>A list of <a>GroupIdentifier</a> objects. Each identifier is an object that
     * contains both the <code>Name</code> and the <code>GroupArn</code>.</p>
     */
    inline ListGroupsResult& AddGroupIdentifiers(GroupIdentifier&& value) { m_groupIdentifiers.push_back(std::move(value)); return *this; }


    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<GroupIdentifier> m_groupIdentifiers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
