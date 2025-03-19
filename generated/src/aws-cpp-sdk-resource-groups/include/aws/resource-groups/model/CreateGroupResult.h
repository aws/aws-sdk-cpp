/**
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
    AWS_RESOURCEGROUPS_API CreateGroupResult() = default;
    AWS_RESOURCEGROUPS_API CreateGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPS_API CreateGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The description of the resource group.</p>
     */
    inline const Group& GetGroup() const { return m_group; }
    template<typename GroupT = Group>
    void SetGroup(GroupT&& value) { m_groupHasBeenSet = true; m_group = std::forward<GroupT>(value); }
    template<typename GroupT = Group>
    CreateGroupResult& WithGroup(GroupT&& value) { SetGroup(std::forward<GroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource query associated with the group. For more information about
     * resource queries, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/userguide/gettingstarted-query.html#gettingstarted-query-cli-tag">Create
     * a tag-based group in Resource Groups</a>. </p>
     */
    inline const ResourceQuery& GetResourceQuery() const { return m_resourceQuery; }
    template<typename ResourceQueryT = ResourceQuery>
    void SetResourceQuery(ResourceQueryT&& value) { m_resourceQueryHasBeenSet = true; m_resourceQuery = std::forward<ResourceQueryT>(value); }
    template<typename ResourceQueryT = ResourceQuery>
    CreateGroupResult& WithResourceQuery(ResourceQueryT&& value) { SetResourceQuery(std::forward<ResourceQueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the group.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateGroupResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateGroupResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The service configuration associated with the resource group. For details
     * about the syntax of a service configuration, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html">Service
     * configurations for Resource Groups</a>.</p>
     */
    inline const GroupConfiguration& GetGroupConfiguration() const { return m_groupConfiguration; }
    template<typename GroupConfigurationT = GroupConfiguration>
    void SetGroupConfiguration(GroupConfigurationT&& value) { m_groupConfigurationHasBeenSet = true; m_groupConfiguration = std::forward<GroupConfigurationT>(value); }
    template<typename GroupConfigurationT = GroupConfiguration>
    CreateGroupResult& WithGroupConfiguration(GroupConfigurationT&& value) { SetGroupConfiguration(std::forward<GroupConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Group m_group;
    bool m_groupHasBeenSet = false;

    ResourceQuery m_resourceQuery;
    bool m_resourceQueryHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    GroupConfiguration m_groupConfiguration;
    bool m_groupConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
