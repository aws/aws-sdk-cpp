﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/model/GroupQuery.h>
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


    ///@{
    /**
     * <p>The updated resource query associated with the resource group after the
     * update.</p>
     */
    inline const GroupQuery& GetGroupQuery() const{ return m_groupQuery; }
    inline void SetGroupQuery(const GroupQuery& value) { m_groupQuery = value; }
    inline void SetGroupQuery(GroupQuery&& value) { m_groupQuery = std::move(value); }
    inline UpdateGroupQueryResult& WithGroupQuery(const GroupQuery& value) { SetGroupQuery(value); return *this;}
    inline UpdateGroupQueryResult& WithGroupQuery(GroupQuery&& value) { SetGroupQuery(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateGroupQueryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateGroupQueryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateGroupQueryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    GroupQuery m_groupQuery;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
