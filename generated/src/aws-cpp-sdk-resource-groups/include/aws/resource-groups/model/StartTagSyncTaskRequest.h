/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/ResourceGroupsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-groups/model/ResourceQuery.h>
#include <utility>

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{

  /**
   */
  class StartTagSyncTaskRequest : public ResourceGroupsRequest
  {
  public:
    AWS_RESOURCEGROUPS_API StartTagSyncTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartTagSyncTask"; }

    AWS_RESOURCEGROUPS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon resource name (ARN) or name of the application group for which you
     * want to create a tag-sync task. </p>
     */
    inline const Aws::String& GetGroup() const { return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    template<typename GroupT = Aws::String>
    void SetGroup(GroupT&& value) { m_groupHasBeenSet = true; m_group = std::forward<GroupT>(value); }
    template<typename GroupT = Aws::String>
    StartTagSyncTaskRequest& WithGroup(GroupT&& value) { SetGroup(std::forward<GroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag key. Resources tagged with this tag key-value pair will be added to
     * the application. If a resource with this tag is later untagged, the tag-sync
     * task removes the resource from the application. </p> <p>When using the
     * <code>TagKey</code> parameter, you must also specify the <code>TagValue</code>
     * parameter. If you specify a tag key-value pair, you can't use the
     * <code>ResourceQuery</code> parameter. </p>
     */
    inline const Aws::String& GetTagKey() const { return m_tagKey; }
    inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }
    template<typename TagKeyT = Aws::String>
    void SetTagKey(TagKeyT&& value) { m_tagKeyHasBeenSet = true; m_tagKey = std::forward<TagKeyT>(value); }
    template<typename TagKeyT = Aws::String>
    StartTagSyncTaskRequest& WithTagKey(TagKeyT&& value) { SetTagKey(std::forward<TagKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag value. Resources tagged with this tag key-value pair will be added to
     * the application. If a resource with this tag is later untagged, the tag-sync
     * task removes the resource from the application. </p> <p>When using the
     * <code>TagValue</code> parameter, you must also specify the <code>TagKey</code>
     * parameter. If you specify a tag key-value pair, you can't use the
     * <code>ResourceQuery</code> parameter. </p>
     */
    inline const Aws::String& GetTagValue() const { return m_tagValue; }
    inline bool TagValueHasBeenSet() const { return m_tagValueHasBeenSet; }
    template<typename TagValueT = Aws::String>
    void SetTagValue(TagValueT&& value) { m_tagValueHasBeenSet = true; m_tagValue = std::forward<TagValueT>(value); }
    template<typename TagValueT = Aws::String>
    StartTagSyncTaskRequest& WithTagValue(TagValueT&& value) { SetTagValue(std::forward<TagValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query you can use to create the tag-sync task. With this method, all
     * resources matching the query are added to the specified application group. A
     * <code>ResourceQuery</code> specifies both a query <code>Type</code> and a
     * <code>Query</code> string as JSON string objects. For more information on
     * defining a resource query for a tag-sync task, see the tag-based query type in
     * <a
     * href="https://docs.aws.amazon.com/ARG/latest/userguide/gettingstarted-query.html#getting_started-query_types">
     * Types of resource group queries</a> in <i>Resource Groups User Guide</i>. </p>
     * <p>When using the <code>ResourceQuery</code> parameter, you cannot use the
     * <code>TagKey</code> and <code>TagValue</code> parameters. </p> <p>When you
     * combine all of the elements together into a single string, any double quotes
     * that are embedded inside another double quote pair must be escaped by preceding
     * the embedded double quote with a backslash character (\). For example, a
     * complete <code>ResourceQuery</code> parameter must be formatted like the
     * following CLI parameter example:</p> <p> <code>--resource-query
     * '{"Type":"TAG_FILTERS_1_0","Query":"{\"ResourceTypeFilters\":[\"AWS::AllSupported\"],\"TagFilters\":[{\"Key\":\"Stage\",\"Values\":[\"Test\"]}]}"}'</code>
     * </p> <p>In the preceding example, all of the double quote characters in the
     * value part of the <code>Query</code> element must be escaped because the value
     * itself is surrounded by double quotes. For more information, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-quoting-strings.html">Quoting
     * strings</a> in the <i>Command Line Interface User Guide</i>.</p> <p>For the
     * complete list of resource types that you can use in the array value for
     * <code>ResourceTypeFilters</code>, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/userguide/supported-resources.html">Resources
     * you can use with Resource Groups and Tag Editor</a> in the <i>Resource Groups
     * User Guide</i>. For example:</p> <p>
     * <code>"ResourceTypeFilters":["AWS::S3::Bucket", "AWS::EC2::Instance"]</code>
     * </p>
     */
    inline const ResourceQuery& GetResourceQuery() const { return m_resourceQuery; }
    inline bool ResourceQueryHasBeenSet() const { return m_resourceQueryHasBeenSet; }
    template<typename ResourceQueryT = ResourceQuery>
    void SetResourceQuery(ResourceQueryT&& value) { m_resourceQueryHasBeenSet = true; m_resourceQuery = std::forward<ResourceQueryT>(value); }
    template<typename ResourceQueryT = ResourceQuery>
    StartTagSyncTaskRequest& WithResourceQuery(ResourceQueryT&& value) { SetResourceQuery(std::forward<ResourceQueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the role assumed by the service to tag and
     * untag resources on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    StartTagSyncTaskRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    Aws::String m_tagKey;
    bool m_tagKeyHasBeenSet = false;

    Aws::String m_tagValue;
    bool m_tagValueHasBeenSet = false;

    ResourceQuery m_resourceQuery;
    bool m_resourceQueryHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
