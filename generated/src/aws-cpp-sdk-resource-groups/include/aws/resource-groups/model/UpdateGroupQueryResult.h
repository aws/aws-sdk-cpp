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
  class UpdateGroupQueryResult
  {
  public:
    AWS_RESOURCEGROUPS_API UpdateGroupQueryResult();
    AWS_RESOURCEGROUPS_API UpdateGroupQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPS_API UpdateGroupQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated resource query associated with the resource group after the
     * update.</p>
     */
    inline const GroupQuery& GetGroupQuery() const{ return m_groupQuery; }

    /**
     * <p>The updated resource query associated with the resource group after the
     * update.</p>
     */
    inline void SetGroupQuery(const GroupQuery& value) { m_groupQuery = value; }

    /**
     * <p>The updated resource query associated with the resource group after the
     * update.</p>
     */
    inline void SetGroupQuery(GroupQuery&& value) { m_groupQuery = std::move(value); }

    /**
     * <p>The updated resource query associated with the resource group after the
     * update.</p>
     */
    inline UpdateGroupQueryResult& WithGroupQuery(const GroupQuery& value) { SetGroupQuery(value); return *this;}

    /**
     * <p>The updated resource query associated with the resource group after the
     * update.</p>
     */
    inline UpdateGroupQueryResult& WithGroupQuery(GroupQuery&& value) { SetGroupQuery(std::move(value)); return *this;}

  private:

    GroupQuery m_groupQuery;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
