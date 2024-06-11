﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/model/Group.h>
#include <aws/resource-groups/model/ResourceQuery.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/resource-groups/model/GroupConfiguration.h>
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
  class CreateGroupResult
  {
  public:
    AWS_RESOURCEGROUPS_API CreateGroupResult();
    AWS_RESOURCEGROUPS_API CreateGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPS_API CreateGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The description of the resource group.</p>
     */
    inline const Group& GetGroup() const{ return m_group; }
    inline void SetGroup(const Group& value) { m_group = value; }
    inline void SetGroup(Group&& value) { m_group = std::move(value); }
    inline CreateGroupResult& WithGroup(const Group& value) { SetGroup(value); return *this;}
    inline CreateGroupResult& WithGroup(Group&& value) { SetGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource query associated with the group. For more information about
     * resource queries, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/userguide/gettingstarted-query.html#gettingstarted-query-cli-tag">Create
     * a tag-based group in Resource Groups</a>. </p>
     */
    inline const ResourceQuery& GetResourceQuery() const{ return m_resourceQuery; }
    inline void SetResourceQuery(const ResourceQuery& value) { m_resourceQuery = value; }
    inline void SetResourceQuery(ResourceQuery&& value) { m_resourceQuery = std::move(value); }
    inline CreateGroupResult& WithResourceQuery(const ResourceQuery& value) { SetResourceQuery(value); return *this;}
    inline CreateGroupResult& WithResourceQuery(ResourceQuery&& value) { SetResourceQuery(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the group.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline CreateGroupResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateGroupResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateGroupResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline CreateGroupResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateGroupResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateGroupResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateGroupResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateGroupResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateGroupResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The service configuration associated with the resource group. For details
     * about the syntax of a service configuration, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html">Service
     * configurations for Resource Groups</a>.</p>
     */
    inline const GroupConfiguration& GetGroupConfiguration() const{ return m_groupConfiguration; }
    inline void SetGroupConfiguration(const GroupConfiguration& value) { m_groupConfiguration = value; }
    inline void SetGroupConfiguration(GroupConfiguration&& value) { m_groupConfiguration = std::move(value); }
    inline CreateGroupResult& WithGroupConfiguration(const GroupConfiguration& value) { SetGroupConfiguration(value); return *this;}
    inline CreateGroupResult& WithGroupConfiguration(GroupConfiguration&& value) { SetGroupConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Group m_group;

    ResourceQuery m_resourceQuery;

    Aws::Map<Aws::String, Aws::String> m_tags;

    GroupConfiguration m_groupConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
