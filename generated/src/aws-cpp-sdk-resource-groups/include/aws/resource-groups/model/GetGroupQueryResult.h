/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/model/GroupQuery.h>
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
  class GetGroupQueryResult
  {
  public:
    AWS_RESOURCEGROUPS_API GetGroupQueryResult();
    AWS_RESOURCEGROUPS_API GetGroupQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPS_API GetGroupQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The resource query associated with the specified group. For more information
     * about resource queries, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/userguide/gettingstarted-query.html#gettingstarted-query-cli-tag">Create
     * a tag-based group in Resource Groups</a>.</p>
     */
    inline const GroupQuery& GetGroupQuery() const{ return m_groupQuery; }

    /**
     * <p>The resource query associated with the specified group. For more information
     * about resource queries, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/userguide/gettingstarted-query.html#gettingstarted-query-cli-tag">Create
     * a tag-based group in Resource Groups</a>.</p>
     */
    inline void SetGroupQuery(const GroupQuery& value) { m_groupQuery = value; }

    /**
     * <p>The resource query associated with the specified group. For more information
     * about resource queries, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/userguide/gettingstarted-query.html#gettingstarted-query-cli-tag">Create
     * a tag-based group in Resource Groups</a>.</p>
     */
    inline void SetGroupQuery(GroupQuery&& value) { m_groupQuery = std::move(value); }

    /**
     * <p>The resource query associated with the specified group. For more information
     * about resource queries, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/userguide/gettingstarted-query.html#gettingstarted-query-cli-tag">Create
     * a tag-based group in Resource Groups</a>.</p>
     */
    inline GetGroupQueryResult& WithGroupQuery(const GroupQuery& value) { SetGroupQuery(value); return *this;}

    /**
     * <p>The resource query associated with the specified group. For more information
     * about resource queries, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/userguide/gettingstarted-query.html#gettingstarted-query-cli-tag">Create
     * a tag-based group in Resource Groups</a>.</p>
     */
    inline GetGroupQueryResult& WithGroupQuery(GroupQuery&& value) { SetGroupQuery(std::move(value)); return *this;}

  private:

    GroupQuery m_groupQuery;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
