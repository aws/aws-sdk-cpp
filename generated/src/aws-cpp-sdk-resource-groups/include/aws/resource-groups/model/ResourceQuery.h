/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/model/QueryType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ResourceGroups
{
namespace Model
{

  /**
   * <p>The query you can use to define a resource group or a search for resources. A
   * <code>ResourceQuery</code> specifies both a query <code>Type</code> and a
   * <code>Query</code> string as JSON string objects. See the examples section for
   * example JSON strings. For more information about creating a resource group with
   * a resource query, see <a
   * href="https://docs.aws.amazon.com/ARG/latest/userguide/gettingstarted-query.html">Build
   * queries and groups in Resource Groups</a> in the <i>Resource Groups User
   * Guide</i> </p> <p>When you combine all of the elements together into a single
   * string, any double quotes that are embedded inside another double quote pair
   * must be escaped by preceding the embedded double quote with a backslash
   * character (\). For example, a complete <code>ResourceQuery</code> parameter must
   * be formatted like the following CLI parameter example:</p> <p>
   * <code>--resource-query
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
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/ResourceQuery">AWS
   * API Reference</a></p>
   */
  class ResourceQuery
  {
  public:
    AWS_RESOURCEGROUPS_API ResourceQuery();
    AWS_RESOURCEGROUPS_API ResourceQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API ResourceQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the query to perform. This can have one of two values:</p> <ul>
     * <li> <p> <i> <code>CLOUDFORMATION_STACK_1_0:</code> </i> Specifies that you want
     * the group to contain the members of an CloudFormation stack. The
     * <code>Query</code> contains a <code>StackIdentifier</code> element with an ARN
     * for a CloudFormation stack.</p> </li> <li> <p> <i> <code>TAG_FILTERS_1_0:</code>
     * </i> Specifies that you want the group to include resource that have tags that
     * match the query. </p> </li> </ul>
     */
    inline const QueryType& GetType() const{ return m_type; }

    /**
     * <p>The type of the query to perform. This can have one of two values:</p> <ul>
     * <li> <p> <i> <code>CLOUDFORMATION_STACK_1_0:</code> </i> Specifies that you want
     * the group to contain the members of an CloudFormation stack. The
     * <code>Query</code> contains a <code>StackIdentifier</code> element with an ARN
     * for a CloudFormation stack.</p> </li> <li> <p> <i> <code>TAG_FILTERS_1_0:</code>
     * </i> Specifies that you want the group to include resource that have tags that
     * match the query. </p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the query to perform. This can have one of two values:</p> <ul>
     * <li> <p> <i> <code>CLOUDFORMATION_STACK_1_0:</code> </i> Specifies that you want
     * the group to contain the members of an CloudFormation stack. The
     * <code>Query</code> contains a <code>StackIdentifier</code> element with an ARN
     * for a CloudFormation stack.</p> </li> <li> <p> <i> <code>TAG_FILTERS_1_0:</code>
     * </i> Specifies that you want the group to include resource that have tags that
     * match the query. </p> </li> </ul>
     */
    inline void SetType(const QueryType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the query to perform. This can have one of two values:</p> <ul>
     * <li> <p> <i> <code>CLOUDFORMATION_STACK_1_0:</code> </i> Specifies that you want
     * the group to contain the members of an CloudFormation stack. The
     * <code>Query</code> contains a <code>StackIdentifier</code> element with an ARN
     * for a CloudFormation stack.</p> </li> <li> <p> <i> <code>TAG_FILTERS_1_0:</code>
     * </i> Specifies that you want the group to include resource that have tags that
     * match the query. </p> </li> </ul>
     */
    inline void SetType(QueryType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the query to perform. This can have one of two values:</p> <ul>
     * <li> <p> <i> <code>CLOUDFORMATION_STACK_1_0:</code> </i> Specifies that you want
     * the group to contain the members of an CloudFormation stack. The
     * <code>Query</code> contains a <code>StackIdentifier</code> element with an ARN
     * for a CloudFormation stack.</p> </li> <li> <p> <i> <code>TAG_FILTERS_1_0:</code>
     * </i> Specifies that you want the group to include resource that have tags that
     * match the query. </p> </li> </ul>
     */
    inline ResourceQuery& WithType(const QueryType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the query to perform. This can have one of two values:</p> <ul>
     * <li> <p> <i> <code>CLOUDFORMATION_STACK_1_0:</code> </i> Specifies that you want
     * the group to contain the members of an CloudFormation stack. The
     * <code>Query</code> contains a <code>StackIdentifier</code> element with an ARN
     * for a CloudFormation stack.</p> </li> <li> <p> <i> <code>TAG_FILTERS_1_0:</code>
     * </i> Specifies that you want the group to include resource that have tags that
     * match the query. </p> </li> </ul>
     */
    inline ResourceQuery& WithType(QueryType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The query that defines a group or a search. The contents depends on the value
     * of the <code>Type</code> element.</p> <ul> <li> <p>
     * <code>ResourceTypeFilters</code> – Applies to all <code>ResourceQuery</code>
     * objects of either <code>Type</code>. This element contains one of the following
     * two items:</p> <ul> <li> <p>The value <code>AWS::AllSupported</code>. This
     * causes the ResourceQuery to match resources of any resource type that also match
     * the query.</p> </li> <li> <p>A list (a JSON array) of resource type identifiers
     * that limit the query to only resources of the specified types. For the complete
     * list of resource types that you can use in the array value for
     * <code>ResourceTypeFilters</code>, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/userguide/supported-resources.html">Resources
     * you can use with Resource Groups and Tag Editor</a> in the <i>Resource Groups
     * User Guide</i>.</p> </li> </ul> <p>Example: <code>"ResourceTypeFilters":
     * ["AWS::AllSupported"]</code> or <code>"ResourceTypeFilters":
     * ["AWS::EC2::Instance", "AWS::S3::Bucket"]</code> </p> </li> <li> <p>
     * <code>TagFilters</code> – applicable only if <code>Type</code> =
     * <code>TAG_FILTERS_1_0</code>. The <code>Query</code> contains a JSON string that
     * represents a collection of simple tag filters. The JSON string uses a syntax
     * similar to the <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html">GetResources</a>
     * </code> operation, but uses only the <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-ResourceTypeFilters">
     * ResourceTypeFilters</a> </code> and <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-TagFiltersTagFilters">TagFilters</a>
     * </code> fields. If you specify more than one tag key, only resources that match
     * all tag keys, and at least one value of each specified tag key, are returned in
     * your query. If you specify more than one value for a tag key, a resource matches
     * the filter if it has a tag key value that matches <i>any</i> of the specified
     * values.</p> <p>For example, consider the following sample query for resources
     * that have two tags, <code>Stage</code> and <code>Version</code>, with two values
     * each:</p> <p> <code>[{"Stage":["Test","Deploy"]},{"Version":["1","2"]}]</code>
     * </p> <p>The results of this resource query could include the following.</p> <ul>
     * <li> <p>An Amazon EC2 instance that has the following two tags:
     * <code>{"Stage":"Deploy"}</code>, and <code>{"Version":"2"}</code> </p> </li>
     * <li> <p>An S3 bucket that has the following two tags:
     * <code>{"Stage":"Test"}</code>, and <code>{"Version":"1"}</code> </p> </li> </ul>
     * <p>The resource query results would <i>not</i> include the following items in
     * the results, however. </p> <ul> <li> <p>An Amazon EC2 instance that has only the
     * following tag: <code>{"Stage":"Deploy"}</code>.</p> <p>The instance does not
     * have <b>all</b> of the tag keys specified in the filter, so it is excluded from
     * the results.</p> </li> <li> <p>An RDS database that has the following two tags:
     * <code>{"Stage":"Archived"}</code> and <code>{"Version":"4"}</code> </p> <p>The
     * database has all of the tag keys, but none of those keys has an associated value
     * that matches at least one of the specified values in the filter.</p> </li> </ul>
     * <p>Example: <code>"TagFilters": [ { "Key": "Stage", "Values": [ "Gamma", "Beta"
     * ] }</code> </p> </li> <li> <p> <code>StackIdentifier</code> – applicable only if
     * <code>Type</code> = <code>CLOUDFORMATION_STACK_1_0</code>. The value of this
     * parameter is the Amazon Resource Name (ARN) of the CloudFormation stack whose
     * resources you want included in the group.</p> </li> </ul>
     */
    inline const Aws::String& GetQuery() const{ return m_query; }

    /**
     * <p>The query that defines a group or a search. The contents depends on the value
     * of the <code>Type</code> element.</p> <ul> <li> <p>
     * <code>ResourceTypeFilters</code> – Applies to all <code>ResourceQuery</code>
     * objects of either <code>Type</code>. This element contains one of the following
     * two items:</p> <ul> <li> <p>The value <code>AWS::AllSupported</code>. This
     * causes the ResourceQuery to match resources of any resource type that also match
     * the query.</p> </li> <li> <p>A list (a JSON array) of resource type identifiers
     * that limit the query to only resources of the specified types. For the complete
     * list of resource types that you can use in the array value for
     * <code>ResourceTypeFilters</code>, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/userguide/supported-resources.html">Resources
     * you can use with Resource Groups and Tag Editor</a> in the <i>Resource Groups
     * User Guide</i>.</p> </li> </ul> <p>Example: <code>"ResourceTypeFilters":
     * ["AWS::AllSupported"]</code> or <code>"ResourceTypeFilters":
     * ["AWS::EC2::Instance", "AWS::S3::Bucket"]</code> </p> </li> <li> <p>
     * <code>TagFilters</code> – applicable only if <code>Type</code> =
     * <code>TAG_FILTERS_1_0</code>. The <code>Query</code> contains a JSON string that
     * represents a collection of simple tag filters. The JSON string uses a syntax
     * similar to the <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html">GetResources</a>
     * </code> operation, but uses only the <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-ResourceTypeFilters">
     * ResourceTypeFilters</a> </code> and <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-TagFiltersTagFilters">TagFilters</a>
     * </code> fields. If you specify more than one tag key, only resources that match
     * all tag keys, and at least one value of each specified tag key, are returned in
     * your query. If you specify more than one value for a tag key, a resource matches
     * the filter if it has a tag key value that matches <i>any</i> of the specified
     * values.</p> <p>For example, consider the following sample query for resources
     * that have two tags, <code>Stage</code> and <code>Version</code>, with two values
     * each:</p> <p> <code>[{"Stage":["Test","Deploy"]},{"Version":["1","2"]}]</code>
     * </p> <p>The results of this resource query could include the following.</p> <ul>
     * <li> <p>An Amazon EC2 instance that has the following two tags:
     * <code>{"Stage":"Deploy"}</code>, and <code>{"Version":"2"}</code> </p> </li>
     * <li> <p>An S3 bucket that has the following two tags:
     * <code>{"Stage":"Test"}</code>, and <code>{"Version":"1"}</code> </p> </li> </ul>
     * <p>The resource query results would <i>not</i> include the following items in
     * the results, however. </p> <ul> <li> <p>An Amazon EC2 instance that has only the
     * following tag: <code>{"Stage":"Deploy"}</code>.</p> <p>The instance does not
     * have <b>all</b> of the tag keys specified in the filter, so it is excluded from
     * the results.</p> </li> <li> <p>An RDS database that has the following two tags:
     * <code>{"Stage":"Archived"}</code> and <code>{"Version":"4"}</code> </p> <p>The
     * database has all of the tag keys, but none of those keys has an associated value
     * that matches at least one of the specified values in the filter.</p> </li> </ul>
     * <p>Example: <code>"TagFilters": [ { "Key": "Stage", "Values": [ "Gamma", "Beta"
     * ] }</code> </p> </li> <li> <p> <code>StackIdentifier</code> – applicable only if
     * <code>Type</code> = <code>CLOUDFORMATION_STACK_1_0</code>. The value of this
     * parameter is the Amazon Resource Name (ARN) of the CloudFormation stack whose
     * resources you want included in the group.</p> </li> </ul>
     */
    inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }

    /**
     * <p>The query that defines a group or a search. The contents depends on the value
     * of the <code>Type</code> element.</p> <ul> <li> <p>
     * <code>ResourceTypeFilters</code> – Applies to all <code>ResourceQuery</code>
     * objects of either <code>Type</code>. This element contains one of the following
     * two items:</p> <ul> <li> <p>The value <code>AWS::AllSupported</code>. This
     * causes the ResourceQuery to match resources of any resource type that also match
     * the query.</p> </li> <li> <p>A list (a JSON array) of resource type identifiers
     * that limit the query to only resources of the specified types. For the complete
     * list of resource types that you can use in the array value for
     * <code>ResourceTypeFilters</code>, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/userguide/supported-resources.html">Resources
     * you can use with Resource Groups and Tag Editor</a> in the <i>Resource Groups
     * User Guide</i>.</p> </li> </ul> <p>Example: <code>"ResourceTypeFilters":
     * ["AWS::AllSupported"]</code> or <code>"ResourceTypeFilters":
     * ["AWS::EC2::Instance", "AWS::S3::Bucket"]</code> </p> </li> <li> <p>
     * <code>TagFilters</code> – applicable only if <code>Type</code> =
     * <code>TAG_FILTERS_1_0</code>. The <code>Query</code> contains a JSON string that
     * represents a collection of simple tag filters. The JSON string uses a syntax
     * similar to the <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html">GetResources</a>
     * </code> operation, but uses only the <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-ResourceTypeFilters">
     * ResourceTypeFilters</a> </code> and <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-TagFiltersTagFilters">TagFilters</a>
     * </code> fields. If you specify more than one tag key, only resources that match
     * all tag keys, and at least one value of each specified tag key, are returned in
     * your query. If you specify more than one value for a tag key, a resource matches
     * the filter if it has a tag key value that matches <i>any</i> of the specified
     * values.</p> <p>For example, consider the following sample query for resources
     * that have two tags, <code>Stage</code> and <code>Version</code>, with two values
     * each:</p> <p> <code>[{"Stage":["Test","Deploy"]},{"Version":["1","2"]}]</code>
     * </p> <p>The results of this resource query could include the following.</p> <ul>
     * <li> <p>An Amazon EC2 instance that has the following two tags:
     * <code>{"Stage":"Deploy"}</code>, and <code>{"Version":"2"}</code> </p> </li>
     * <li> <p>An S3 bucket that has the following two tags:
     * <code>{"Stage":"Test"}</code>, and <code>{"Version":"1"}</code> </p> </li> </ul>
     * <p>The resource query results would <i>not</i> include the following items in
     * the results, however. </p> <ul> <li> <p>An Amazon EC2 instance that has only the
     * following tag: <code>{"Stage":"Deploy"}</code>.</p> <p>The instance does not
     * have <b>all</b> of the tag keys specified in the filter, so it is excluded from
     * the results.</p> </li> <li> <p>An RDS database that has the following two tags:
     * <code>{"Stage":"Archived"}</code> and <code>{"Version":"4"}</code> </p> <p>The
     * database has all of the tag keys, but none of those keys has an associated value
     * that matches at least one of the specified values in the filter.</p> </li> </ul>
     * <p>Example: <code>"TagFilters": [ { "Key": "Stage", "Values": [ "Gamma", "Beta"
     * ] }</code> </p> </li> <li> <p> <code>StackIdentifier</code> – applicable only if
     * <code>Type</code> = <code>CLOUDFORMATION_STACK_1_0</code>. The value of this
     * parameter is the Amazon Resource Name (ARN) of the CloudFormation stack whose
     * resources you want included in the group.</p> </li> </ul>
     */
    inline void SetQuery(const Aws::String& value) { m_queryHasBeenSet = true; m_query = value; }

    /**
     * <p>The query that defines a group or a search. The contents depends on the value
     * of the <code>Type</code> element.</p> <ul> <li> <p>
     * <code>ResourceTypeFilters</code> – Applies to all <code>ResourceQuery</code>
     * objects of either <code>Type</code>. This element contains one of the following
     * two items:</p> <ul> <li> <p>The value <code>AWS::AllSupported</code>. This
     * causes the ResourceQuery to match resources of any resource type that also match
     * the query.</p> </li> <li> <p>A list (a JSON array) of resource type identifiers
     * that limit the query to only resources of the specified types. For the complete
     * list of resource types that you can use in the array value for
     * <code>ResourceTypeFilters</code>, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/userguide/supported-resources.html">Resources
     * you can use with Resource Groups and Tag Editor</a> in the <i>Resource Groups
     * User Guide</i>.</p> </li> </ul> <p>Example: <code>"ResourceTypeFilters":
     * ["AWS::AllSupported"]</code> or <code>"ResourceTypeFilters":
     * ["AWS::EC2::Instance", "AWS::S3::Bucket"]</code> </p> </li> <li> <p>
     * <code>TagFilters</code> – applicable only if <code>Type</code> =
     * <code>TAG_FILTERS_1_0</code>. The <code>Query</code> contains a JSON string that
     * represents a collection of simple tag filters. The JSON string uses a syntax
     * similar to the <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html">GetResources</a>
     * </code> operation, but uses only the <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-ResourceTypeFilters">
     * ResourceTypeFilters</a> </code> and <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-TagFiltersTagFilters">TagFilters</a>
     * </code> fields. If you specify more than one tag key, only resources that match
     * all tag keys, and at least one value of each specified tag key, are returned in
     * your query. If you specify more than one value for a tag key, a resource matches
     * the filter if it has a tag key value that matches <i>any</i> of the specified
     * values.</p> <p>For example, consider the following sample query for resources
     * that have two tags, <code>Stage</code> and <code>Version</code>, with two values
     * each:</p> <p> <code>[{"Stage":["Test","Deploy"]},{"Version":["1","2"]}]</code>
     * </p> <p>The results of this resource query could include the following.</p> <ul>
     * <li> <p>An Amazon EC2 instance that has the following two tags:
     * <code>{"Stage":"Deploy"}</code>, and <code>{"Version":"2"}</code> </p> </li>
     * <li> <p>An S3 bucket that has the following two tags:
     * <code>{"Stage":"Test"}</code>, and <code>{"Version":"1"}</code> </p> </li> </ul>
     * <p>The resource query results would <i>not</i> include the following items in
     * the results, however. </p> <ul> <li> <p>An Amazon EC2 instance that has only the
     * following tag: <code>{"Stage":"Deploy"}</code>.</p> <p>The instance does not
     * have <b>all</b> of the tag keys specified in the filter, so it is excluded from
     * the results.</p> </li> <li> <p>An RDS database that has the following two tags:
     * <code>{"Stage":"Archived"}</code> and <code>{"Version":"4"}</code> </p> <p>The
     * database has all of the tag keys, but none of those keys has an associated value
     * that matches at least one of the specified values in the filter.</p> </li> </ul>
     * <p>Example: <code>"TagFilters": [ { "Key": "Stage", "Values": [ "Gamma", "Beta"
     * ] }</code> </p> </li> <li> <p> <code>StackIdentifier</code> – applicable only if
     * <code>Type</code> = <code>CLOUDFORMATION_STACK_1_0</code>. The value of this
     * parameter is the Amazon Resource Name (ARN) of the CloudFormation stack whose
     * resources you want included in the group.</p> </li> </ul>
     */
    inline void SetQuery(Aws::String&& value) { m_queryHasBeenSet = true; m_query = std::move(value); }

    /**
     * <p>The query that defines a group or a search. The contents depends on the value
     * of the <code>Type</code> element.</p> <ul> <li> <p>
     * <code>ResourceTypeFilters</code> – Applies to all <code>ResourceQuery</code>
     * objects of either <code>Type</code>. This element contains one of the following
     * two items:</p> <ul> <li> <p>The value <code>AWS::AllSupported</code>. This
     * causes the ResourceQuery to match resources of any resource type that also match
     * the query.</p> </li> <li> <p>A list (a JSON array) of resource type identifiers
     * that limit the query to only resources of the specified types. For the complete
     * list of resource types that you can use in the array value for
     * <code>ResourceTypeFilters</code>, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/userguide/supported-resources.html">Resources
     * you can use with Resource Groups and Tag Editor</a> in the <i>Resource Groups
     * User Guide</i>.</p> </li> </ul> <p>Example: <code>"ResourceTypeFilters":
     * ["AWS::AllSupported"]</code> or <code>"ResourceTypeFilters":
     * ["AWS::EC2::Instance", "AWS::S3::Bucket"]</code> </p> </li> <li> <p>
     * <code>TagFilters</code> – applicable only if <code>Type</code> =
     * <code>TAG_FILTERS_1_0</code>. The <code>Query</code> contains a JSON string that
     * represents a collection of simple tag filters. The JSON string uses a syntax
     * similar to the <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html">GetResources</a>
     * </code> operation, but uses only the <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-ResourceTypeFilters">
     * ResourceTypeFilters</a> </code> and <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-TagFiltersTagFilters">TagFilters</a>
     * </code> fields. If you specify more than one tag key, only resources that match
     * all tag keys, and at least one value of each specified tag key, are returned in
     * your query. If you specify more than one value for a tag key, a resource matches
     * the filter if it has a tag key value that matches <i>any</i> of the specified
     * values.</p> <p>For example, consider the following sample query for resources
     * that have two tags, <code>Stage</code> and <code>Version</code>, with two values
     * each:</p> <p> <code>[{"Stage":["Test","Deploy"]},{"Version":["1","2"]}]</code>
     * </p> <p>The results of this resource query could include the following.</p> <ul>
     * <li> <p>An Amazon EC2 instance that has the following two tags:
     * <code>{"Stage":"Deploy"}</code>, and <code>{"Version":"2"}</code> </p> </li>
     * <li> <p>An S3 bucket that has the following two tags:
     * <code>{"Stage":"Test"}</code>, and <code>{"Version":"1"}</code> </p> </li> </ul>
     * <p>The resource query results would <i>not</i> include the following items in
     * the results, however. </p> <ul> <li> <p>An Amazon EC2 instance that has only the
     * following tag: <code>{"Stage":"Deploy"}</code>.</p> <p>The instance does not
     * have <b>all</b> of the tag keys specified in the filter, so it is excluded from
     * the results.</p> </li> <li> <p>An RDS database that has the following two tags:
     * <code>{"Stage":"Archived"}</code> and <code>{"Version":"4"}</code> </p> <p>The
     * database has all of the tag keys, but none of those keys has an associated value
     * that matches at least one of the specified values in the filter.</p> </li> </ul>
     * <p>Example: <code>"TagFilters": [ { "Key": "Stage", "Values": [ "Gamma", "Beta"
     * ] }</code> </p> </li> <li> <p> <code>StackIdentifier</code> – applicable only if
     * <code>Type</code> = <code>CLOUDFORMATION_STACK_1_0</code>. The value of this
     * parameter is the Amazon Resource Name (ARN) of the CloudFormation stack whose
     * resources you want included in the group.</p> </li> </ul>
     */
    inline void SetQuery(const char* value) { m_queryHasBeenSet = true; m_query.assign(value); }

    /**
     * <p>The query that defines a group or a search. The contents depends on the value
     * of the <code>Type</code> element.</p> <ul> <li> <p>
     * <code>ResourceTypeFilters</code> – Applies to all <code>ResourceQuery</code>
     * objects of either <code>Type</code>. This element contains one of the following
     * two items:</p> <ul> <li> <p>The value <code>AWS::AllSupported</code>. This
     * causes the ResourceQuery to match resources of any resource type that also match
     * the query.</p> </li> <li> <p>A list (a JSON array) of resource type identifiers
     * that limit the query to only resources of the specified types. For the complete
     * list of resource types that you can use in the array value for
     * <code>ResourceTypeFilters</code>, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/userguide/supported-resources.html">Resources
     * you can use with Resource Groups and Tag Editor</a> in the <i>Resource Groups
     * User Guide</i>.</p> </li> </ul> <p>Example: <code>"ResourceTypeFilters":
     * ["AWS::AllSupported"]</code> or <code>"ResourceTypeFilters":
     * ["AWS::EC2::Instance", "AWS::S3::Bucket"]</code> </p> </li> <li> <p>
     * <code>TagFilters</code> – applicable only if <code>Type</code> =
     * <code>TAG_FILTERS_1_0</code>. The <code>Query</code> contains a JSON string that
     * represents a collection of simple tag filters. The JSON string uses a syntax
     * similar to the <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html">GetResources</a>
     * </code> operation, but uses only the <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-ResourceTypeFilters">
     * ResourceTypeFilters</a> </code> and <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-TagFiltersTagFilters">TagFilters</a>
     * </code> fields. If you specify more than one tag key, only resources that match
     * all tag keys, and at least one value of each specified tag key, are returned in
     * your query. If you specify more than one value for a tag key, a resource matches
     * the filter if it has a tag key value that matches <i>any</i> of the specified
     * values.</p> <p>For example, consider the following sample query for resources
     * that have two tags, <code>Stage</code> and <code>Version</code>, with two values
     * each:</p> <p> <code>[{"Stage":["Test","Deploy"]},{"Version":["1","2"]}]</code>
     * </p> <p>The results of this resource query could include the following.</p> <ul>
     * <li> <p>An Amazon EC2 instance that has the following two tags:
     * <code>{"Stage":"Deploy"}</code>, and <code>{"Version":"2"}</code> </p> </li>
     * <li> <p>An S3 bucket that has the following two tags:
     * <code>{"Stage":"Test"}</code>, and <code>{"Version":"1"}</code> </p> </li> </ul>
     * <p>The resource query results would <i>not</i> include the following items in
     * the results, however. </p> <ul> <li> <p>An Amazon EC2 instance that has only the
     * following tag: <code>{"Stage":"Deploy"}</code>.</p> <p>The instance does not
     * have <b>all</b> of the tag keys specified in the filter, so it is excluded from
     * the results.</p> </li> <li> <p>An RDS database that has the following two tags:
     * <code>{"Stage":"Archived"}</code> and <code>{"Version":"4"}</code> </p> <p>The
     * database has all of the tag keys, but none of those keys has an associated value
     * that matches at least one of the specified values in the filter.</p> </li> </ul>
     * <p>Example: <code>"TagFilters": [ { "Key": "Stage", "Values": [ "Gamma", "Beta"
     * ] }</code> </p> </li> <li> <p> <code>StackIdentifier</code> – applicable only if
     * <code>Type</code> = <code>CLOUDFORMATION_STACK_1_0</code>. The value of this
     * parameter is the Amazon Resource Name (ARN) of the CloudFormation stack whose
     * resources you want included in the group.</p> </li> </ul>
     */
    inline ResourceQuery& WithQuery(const Aws::String& value) { SetQuery(value); return *this;}

    /**
     * <p>The query that defines a group or a search. The contents depends on the value
     * of the <code>Type</code> element.</p> <ul> <li> <p>
     * <code>ResourceTypeFilters</code> – Applies to all <code>ResourceQuery</code>
     * objects of either <code>Type</code>. This element contains one of the following
     * two items:</p> <ul> <li> <p>The value <code>AWS::AllSupported</code>. This
     * causes the ResourceQuery to match resources of any resource type that also match
     * the query.</p> </li> <li> <p>A list (a JSON array) of resource type identifiers
     * that limit the query to only resources of the specified types. For the complete
     * list of resource types that you can use in the array value for
     * <code>ResourceTypeFilters</code>, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/userguide/supported-resources.html">Resources
     * you can use with Resource Groups and Tag Editor</a> in the <i>Resource Groups
     * User Guide</i>.</p> </li> </ul> <p>Example: <code>"ResourceTypeFilters":
     * ["AWS::AllSupported"]</code> or <code>"ResourceTypeFilters":
     * ["AWS::EC2::Instance", "AWS::S3::Bucket"]</code> </p> </li> <li> <p>
     * <code>TagFilters</code> – applicable only if <code>Type</code> =
     * <code>TAG_FILTERS_1_0</code>. The <code>Query</code> contains a JSON string that
     * represents a collection of simple tag filters. The JSON string uses a syntax
     * similar to the <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html">GetResources</a>
     * </code> operation, but uses only the <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-ResourceTypeFilters">
     * ResourceTypeFilters</a> </code> and <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-TagFiltersTagFilters">TagFilters</a>
     * </code> fields. If you specify more than one tag key, only resources that match
     * all tag keys, and at least one value of each specified tag key, are returned in
     * your query. If you specify more than one value for a tag key, a resource matches
     * the filter if it has a tag key value that matches <i>any</i> of the specified
     * values.</p> <p>For example, consider the following sample query for resources
     * that have two tags, <code>Stage</code> and <code>Version</code>, with two values
     * each:</p> <p> <code>[{"Stage":["Test","Deploy"]},{"Version":["1","2"]}]</code>
     * </p> <p>The results of this resource query could include the following.</p> <ul>
     * <li> <p>An Amazon EC2 instance that has the following two tags:
     * <code>{"Stage":"Deploy"}</code>, and <code>{"Version":"2"}</code> </p> </li>
     * <li> <p>An S3 bucket that has the following two tags:
     * <code>{"Stage":"Test"}</code>, and <code>{"Version":"1"}</code> </p> </li> </ul>
     * <p>The resource query results would <i>not</i> include the following items in
     * the results, however. </p> <ul> <li> <p>An Amazon EC2 instance that has only the
     * following tag: <code>{"Stage":"Deploy"}</code>.</p> <p>The instance does not
     * have <b>all</b> of the tag keys specified in the filter, so it is excluded from
     * the results.</p> </li> <li> <p>An RDS database that has the following two tags:
     * <code>{"Stage":"Archived"}</code> and <code>{"Version":"4"}</code> </p> <p>The
     * database has all of the tag keys, but none of those keys has an associated value
     * that matches at least one of the specified values in the filter.</p> </li> </ul>
     * <p>Example: <code>"TagFilters": [ { "Key": "Stage", "Values": [ "Gamma", "Beta"
     * ] }</code> </p> </li> <li> <p> <code>StackIdentifier</code> – applicable only if
     * <code>Type</code> = <code>CLOUDFORMATION_STACK_1_0</code>. The value of this
     * parameter is the Amazon Resource Name (ARN) of the CloudFormation stack whose
     * resources you want included in the group.</p> </li> </ul>
     */
    inline ResourceQuery& WithQuery(Aws::String&& value) { SetQuery(std::move(value)); return *this;}

    /**
     * <p>The query that defines a group or a search. The contents depends on the value
     * of the <code>Type</code> element.</p> <ul> <li> <p>
     * <code>ResourceTypeFilters</code> – Applies to all <code>ResourceQuery</code>
     * objects of either <code>Type</code>. This element contains one of the following
     * two items:</p> <ul> <li> <p>The value <code>AWS::AllSupported</code>. This
     * causes the ResourceQuery to match resources of any resource type that also match
     * the query.</p> </li> <li> <p>A list (a JSON array) of resource type identifiers
     * that limit the query to only resources of the specified types. For the complete
     * list of resource types that you can use in the array value for
     * <code>ResourceTypeFilters</code>, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/userguide/supported-resources.html">Resources
     * you can use with Resource Groups and Tag Editor</a> in the <i>Resource Groups
     * User Guide</i>.</p> </li> </ul> <p>Example: <code>"ResourceTypeFilters":
     * ["AWS::AllSupported"]</code> or <code>"ResourceTypeFilters":
     * ["AWS::EC2::Instance", "AWS::S3::Bucket"]</code> </p> </li> <li> <p>
     * <code>TagFilters</code> – applicable only if <code>Type</code> =
     * <code>TAG_FILTERS_1_0</code>. The <code>Query</code> contains a JSON string that
     * represents a collection of simple tag filters. The JSON string uses a syntax
     * similar to the <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html">GetResources</a>
     * </code> operation, but uses only the <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-ResourceTypeFilters">
     * ResourceTypeFilters</a> </code> and <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-TagFiltersTagFilters">TagFilters</a>
     * </code> fields. If you specify more than one tag key, only resources that match
     * all tag keys, and at least one value of each specified tag key, are returned in
     * your query. If you specify more than one value for a tag key, a resource matches
     * the filter if it has a tag key value that matches <i>any</i> of the specified
     * values.</p> <p>For example, consider the following sample query for resources
     * that have two tags, <code>Stage</code> and <code>Version</code>, with two values
     * each:</p> <p> <code>[{"Stage":["Test","Deploy"]},{"Version":["1","2"]}]</code>
     * </p> <p>The results of this resource query could include the following.</p> <ul>
     * <li> <p>An Amazon EC2 instance that has the following two tags:
     * <code>{"Stage":"Deploy"}</code>, and <code>{"Version":"2"}</code> </p> </li>
     * <li> <p>An S3 bucket that has the following two tags:
     * <code>{"Stage":"Test"}</code>, and <code>{"Version":"1"}</code> </p> </li> </ul>
     * <p>The resource query results would <i>not</i> include the following items in
     * the results, however. </p> <ul> <li> <p>An Amazon EC2 instance that has only the
     * following tag: <code>{"Stage":"Deploy"}</code>.</p> <p>The instance does not
     * have <b>all</b> of the tag keys specified in the filter, so it is excluded from
     * the results.</p> </li> <li> <p>An RDS database that has the following two tags:
     * <code>{"Stage":"Archived"}</code> and <code>{"Version":"4"}</code> </p> <p>The
     * database has all of the tag keys, but none of those keys has an associated value
     * that matches at least one of the specified values in the filter.</p> </li> </ul>
     * <p>Example: <code>"TagFilters": [ { "Key": "Stage", "Values": [ "Gamma", "Beta"
     * ] }</code> </p> </li> <li> <p> <code>StackIdentifier</code> – applicable only if
     * <code>Type</code> = <code>CLOUDFORMATION_STACK_1_0</code>. The value of this
     * parameter is the Amazon Resource Name (ARN) of the CloudFormation stack whose
     * resources you want included in the group.</p> </li> </ul>
     */
    inline ResourceQuery& WithQuery(const char* value) { SetQuery(value); return *this;}

  private:

    QueryType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_query;
    bool m_queryHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
