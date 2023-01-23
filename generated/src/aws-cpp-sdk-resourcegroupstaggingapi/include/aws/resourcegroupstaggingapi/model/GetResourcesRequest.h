/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resourcegroupstaggingapi/model/TagFilter.h>
#include <utility>

namespace Aws
{
namespace ResourceGroupsTaggingAPI
{
namespace Model
{

  /**
   */
  class GetResourcesRequest : public ResourceGroupsTaggingAPIRequest
  {
  public:
    AWS_RESOURCEGROUPSTAGGINGAPI_API GetResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResources"; }

    AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::String SerializePayload() const override;

    AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies a <code>PaginationToken</code> response value from a previous
     * request to indicate that you want the next page of results. Leave this parameter
     * empty in your initial request.</p>
     */
    inline const Aws::String& GetPaginationToken() const{ return m_paginationToken; }

    /**
     * <p>Specifies a <code>PaginationToken</code> response value from a previous
     * request to indicate that you want the next page of results. Leave this parameter
     * empty in your initial request.</p>
     */
    inline bool PaginationTokenHasBeenSet() const { return m_paginationTokenHasBeenSet; }

    /**
     * <p>Specifies a <code>PaginationToken</code> response value from a previous
     * request to indicate that you want the next page of results. Leave this parameter
     * empty in your initial request.</p>
     */
    inline void SetPaginationToken(const Aws::String& value) { m_paginationTokenHasBeenSet = true; m_paginationToken = value; }

    /**
     * <p>Specifies a <code>PaginationToken</code> response value from a previous
     * request to indicate that you want the next page of results. Leave this parameter
     * empty in your initial request.</p>
     */
    inline void SetPaginationToken(Aws::String&& value) { m_paginationTokenHasBeenSet = true; m_paginationToken = std::move(value); }

    /**
     * <p>Specifies a <code>PaginationToken</code> response value from a previous
     * request to indicate that you want the next page of results. Leave this parameter
     * empty in your initial request.</p>
     */
    inline void SetPaginationToken(const char* value) { m_paginationTokenHasBeenSet = true; m_paginationToken.assign(value); }

    /**
     * <p>Specifies a <code>PaginationToken</code> response value from a previous
     * request to indicate that you want the next page of results. Leave this parameter
     * empty in your initial request.</p>
     */
    inline GetResourcesRequest& WithPaginationToken(const Aws::String& value) { SetPaginationToken(value); return *this;}

    /**
     * <p>Specifies a <code>PaginationToken</code> response value from a previous
     * request to indicate that you want the next page of results. Leave this parameter
     * empty in your initial request.</p>
     */
    inline GetResourcesRequest& WithPaginationToken(Aws::String&& value) { SetPaginationToken(std::move(value)); return *this;}

    /**
     * <p>Specifies a <code>PaginationToken</code> response value from a previous
     * request to indicate that you want the next page of results. Leave this parameter
     * empty in your initial request.</p>
     */
    inline GetResourcesRequest& WithPaginationToken(const char* value) { SetPaginationToken(value); return *this;}


    /**
     * <p>Specifies a list of TagFilters (keys and values) to restrict the output to
     * only those resources that have tags with the specified keys and, if included,
     * the specified values. Each <code>TagFilter</code> must contain a key with values
     * optional. A request can include up to 50 keys, and each key can include up to 20
     * values. </p> <p>Note the following when deciding how to use TagFilters:</p> <ul>
     * <li> <p>If you <i>don't</i> specify a <code>TagFilter</code>, the response
     * includes all resources that are currently tagged or ever had a tag. Resources
     * that currently don't have tags are shown with an empty tag set, like this:
     * <code>"Tags": []</code>.</p> </li> <li> <p>If you specify more than one filter
     * in a single request, the response returns only those resources that satisfy all
     * filters.</p> </li> <li> <p>If you specify a filter that contains more than one
     * value for a key, the response returns resources that match <i>any</i> of the
     * specified values for that key.</p> </li> <li> <p>If you don't specify a value
     * for a key, the response returns all resources that are tagged with that key,
     * with any or no value.</p> <p>For example, for the following filters:
     * <code>filter1= {keyA,{value1}}</code>,
     * <code>filter2={keyB,{value2,value3,value4}}</code>, <code>filter3=
     * {keyC}</code>:</p> <ul> <li> <p> <code>GetResources({filter1})</code> returns
     * resources tagged with <code>key1=value1</code> </p> </li> <li> <p>
     * <code>GetResources({filter2})</code> returns resources tagged with
     * <code>key2=value2</code> or <code>key2=value3</code> or <code>key2=value4</code>
     * </p> </li> <li> <p> <code>GetResources({filter3})</code> returns resources
     * tagged with any tag with the key <code>key3</code>, and with any or no value</p>
     * </li> <li> <p> <code>GetResources({filter1,filter2,filter3})</code> returns
     * resources tagged with <code>(key1=value1) and (key2=value2 or key2=value3 or
     * key2=value4) and (key3, any or no value)</code> </p> </li> </ul> </li> </ul>
     */
    inline const Aws::Vector<TagFilter>& GetTagFilters() const{ return m_tagFilters; }

    /**
     * <p>Specifies a list of TagFilters (keys and values) to restrict the output to
     * only those resources that have tags with the specified keys and, if included,
     * the specified values. Each <code>TagFilter</code> must contain a key with values
     * optional. A request can include up to 50 keys, and each key can include up to 20
     * values. </p> <p>Note the following when deciding how to use TagFilters:</p> <ul>
     * <li> <p>If you <i>don't</i> specify a <code>TagFilter</code>, the response
     * includes all resources that are currently tagged or ever had a tag. Resources
     * that currently don't have tags are shown with an empty tag set, like this:
     * <code>"Tags": []</code>.</p> </li> <li> <p>If you specify more than one filter
     * in a single request, the response returns only those resources that satisfy all
     * filters.</p> </li> <li> <p>If you specify a filter that contains more than one
     * value for a key, the response returns resources that match <i>any</i> of the
     * specified values for that key.</p> </li> <li> <p>If you don't specify a value
     * for a key, the response returns all resources that are tagged with that key,
     * with any or no value.</p> <p>For example, for the following filters:
     * <code>filter1= {keyA,{value1}}</code>,
     * <code>filter2={keyB,{value2,value3,value4}}</code>, <code>filter3=
     * {keyC}</code>:</p> <ul> <li> <p> <code>GetResources({filter1})</code> returns
     * resources tagged with <code>key1=value1</code> </p> </li> <li> <p>
     * <code>GetResources({filter2})</code> returns resources tagged with
     * <code>key2=value2</code> or <code>key2=value3</code> or <code>key2=value4</code>
     * </p> </li> <li> <p> <code>GetResources({filter3})</code> returns resources
     * tagged with any tag with the key <code>key3</code>, and with any or no value</p>
     * </li> <li> <p> <code>GetResources({filter1,filter2,filter3})</code> returns
     * resources tagged with <code>(key1=value1) and (key2=value2 or key2=value3 or
     * key2=value4) and (key3, any or no value)</code> </p> </li> </ul> </li> </ul>
     */
    inline bool TagFiltersHasBeenSet() const { return m_tagFiltersHasBeenSet; }

    /**
     * <p>Specifies a list of TagFilters (keys and values) to restrict the output to
     * only those resources that have tags with the specified keys and, if included,
     * the specified values. Each <code>TagFilter</code> must contain a key with values
     * optional. A request can include up to 50 keys, and each key can include up to 20
     * values. </p> <p>Note the following when deciding how to use TagFilters:</p> <ul>
     * <li> <p>If you <i>don't</i> specify a <code>TagFilter</code>, the response
     * includes all resources that are currently tagged or ever had a tag. Resources
     * that currently don't have tags are shown with an empty tag set, like this:
     * <code>"Tags": []</code>.</p> </li> <li> <p>If you specify more than one filter
     * in a single request, the response returns only those resources that satisfy all
     * filters.</p> </li> <li> <p>If you specify a filter that contains more than one
     * value for a key, the response returns resources that match <i>any</i> of the
     * specified values for that key.</p> </li> <li> <p>If you don't specify a value
     * for a key, the response returns all resources that are tagged with that key,
     * with any or no value.</p> <p>For example, for the following filters:
     * <code>filter1= {keyA,{value1}}</code>,
     * <code>filter2={keyB,{value2,value3,value4}}</code>, <code>filter3=
     * {keyC}</code>:</p> <ul> <li> <p> <code>GetResources({filter1})</code> returns
     * resources tagged with <code>key1=value1</code> </p> </li> <li> <p>
     * <code>GetResources({filter2})</code> returns resources tagged with
     * <code>key2=value2</code> or <code>key2=value3</code> or <code>key2=value4</code>
     * </p> </li> <li> <p> <code>GetResources({filter3})</code> returns resources
     * tagged with any tag with the key <code>key3</code>, and with any or no value</p>
     * </li> <li> <p> <code>GetResources({filter1,filter2,filter3})</code> returns
     * resources tagged with <code>(key1=value1) and (key2=value2 or key2=value3 or
     * key2=value4) and (key3, any or no value)</code> </p> </li> </ul> </li> </ul>
     */
    inline void SetTagFilters(const Aws::Vector<TagFilter>& value) { m_tagFiltersHasBeenSet = true; m_tagFilters = value; }

    /**
     * <p>Specifies a list of TagFilters (keys and values) to restrict the output to
     * only those resources that have tags with the specified keys and, if included,
     * the specified values. Each <code>TagFilter</code> must contain a key with values
     * optional. A request can include up to 50 keys, and each key can include up to 20
     * values. </p> <p>Note the following when deciding how to use TagFilters:</p> <ul>
     * <li> <p>If you <i>don't</i> specify a <code>TagFilter</code>, the response
     * includes all resources that are currently tagged or ever had a tag. Resources
     * that currently don't have tags are shown with an empty tag set, like this:
     * <code>"Tags": []</code>.</p> </li> <li> <p>If you specify more than one filter
     * in a single request, the response returns only those resources that satisfy all
     * filters.</p> </li> <li> <p>If you specify a filter that contains more than one
     * value for a key, the response returns resources that match <i>any</i> of the
     * specified values for that key.</p> </li> <li> <p>If you don't specify a value
     * for a key, the response returns all resources that are tagged with that key,
     * with any or no value.</p> <p>For example, for the following filters:
     * <code>filter1= {keyA,{value1}}</code>,
     * <code>filter2={keyB,{value2,value3,value4}}</code>, <code>filter3=
     * {keyC}</code>:</p> <ul> <li> <p> <code>GetResources({filter1})</code> returns
     * resources tagged with <code>key1=value1</code> </p> </li> <li> <p>
     * <code>GetResources({filter2})</code> returns resources tagged with
     * <code>key2=value2</code> or <code>key2=value3</code> or <code>key2=value4</code>
     * </p> </li> <li> <p> <code>GetResources({filter3})</code> returns resources
     * tagged with any tag with the key <code>key3</code>, and with any or no value</p>
     * </li> <li> <p> <code>GetResources({filter1,filter2,filter3})</code> returns
     * resources tagged with <code>(key1=value1) and (key2=value2 or key2=value3 or
     * key2=value4) and (key3, any or no value)</code> </p> </li> </ul> </li> </ul>
     */
    inline void SetTagFilters(Aws::Vector<TagFilter>&& value) { m_tagFiltersHasBeenSet = true; m_tagFilters = std::move(value); }

    /**
     * <p>Specifies a list of TagFilters (keys and values) to restrict the output to
     * only those resources that have tags with the specified keys and, if included,
     * the specified values. Each <code>TagFilter</code> must contain a key with values
     * optional. A request can include up to 50 keys, and each key can include up to 20
     * values. </p> <p>Note the following when deciding how to use TagFilters:</p> <ul>
     * <li> <p>If you <i>don't</i> specify a <code>TagFilter</code>, the response
     * includes all resources that are currently tagged or ever had a tag. Resources
     * that currently don't have tags are shown with an empty tag set, like this:
     * <code>"Tags": []</code>.</p> </li> <li> <p>If you specify more than one filter
     * in a single request, the response returns only those resources that satisfy all
     * filters.</p> </li> <li> <p>If you specify a filter that contains more than one
     * value for a key, the response returns resources that match <i>any</i> of the
     * specified values for that key.</p> </li> <li> <p>If you don't specify a value
     * for a key, the response returns all resources that are tagged with that key,
     * with any or no value.</p> <p>For example, for the following filters:
     * <code>filter1= {keyA,{value1}}</code>,
     * <code>filter2={keyB,{value2,value3,value4}}</code>, <code>filter3=
     * {keyC}</code>:</p> <ul> <li> <p> <code>GetResources({filter1})</code> returns
     * resources tagged with <code>key1=value1</code> </p> </li> <li> <p>
     * <code>GetResources({filter2})</code> returns resources tagged with
     * <code>key2=value2</code> or <code>key2=value3</code> or <code>key2=value4</code>
     * </p> </li> <li> <p> <code>GetResources({filter3})</code> returns resources
     * tagged with any tag with the key <code>key3</code>, and with any or no value</p>
     * </li> <li> <p> <code>GetResources({filter1,filter2,filter3})</code> returns
     * resources tagged with <code>(key1=value1) and (key2=value2 or key2=value3 or
     * key2=value4) and (key3, any or no value)</code> </p> </li> </ul> </li> </ul>
     */
    inline GetResourcesRequest& WithTagFilters(const Aws::Vector<TagFilter>& value) { SetTagFilters(value); return *this;}

    /**
     * <p>Specifies a list of TagFilters (keys and values) to restrict the output to
     * only those resources that have tags with the specified keys and, if included,
     * the specified values. Each <code>TagFilter</code> must contain a key with values
     * optional. A request can include up to 50 keys, and each key can include up to 20
     * values. </p> <p>Note the following when deciding how to use TagFilters:</p> <ul>
     * <li> <p>If you <i>don't</i> specify a <code>TagFilter</code>, the response
     * includes all resources that are currently tagged or ever had a tag. Resources
     * that currently don't have tags are shown with an empty tag set, like this:
     * <code>"Tags": []</code>.</p> </li> <li> <p>If you specify more than one filter
     * in a single request, the response returns only those resources that satisfy all
     * filters.</p> </li> <li> <p>If you specify a filter that contains more than one
     * value for a key, the response returns resources that match <i>any</i> of the
     * specified values for that key.</p> </li> <li> <p>If you don't specify a value
     * for a key, the response returns all resources that are tagged with that key,
     * with any or no value.</p> <p>For example, for the following filters:
     * <code>filter1= {keyA,{value1}}</code>,
     * <code>filter2={keyB,{value2,value3,value4}}</code>, <code>filter3=
     * {keyC}</code>:</p> <ul> <li> <p> <code>GetResources({filter1})</code> returns
     * resources tagged with <code>key1=value1</code> </p> </li> <li> <p>
     * <code>GetResources({filter2})</code> returns resources tagged with
     * <code>key2=value2</code> or <code>key2=value3</code> or <code>key2=value4</code>
     * </p> </li> <li> <p> <code>GetResources({filter3})</code> returns resources
     * tagged with any tag with the key <code>key3</code>, and with any or no value</p>
     * </li> <li> <p> <code>GetResources({filter1,filter2,filter3})</code> returns
     * resources tagged with <code>(key1=value1) and (key2=value2 or key2=value3 or
     * key2=value4) and (key3, any or no value)</code> </p> </li> </ul> </li> </ul>
     */
    inline GetResourcesRequest& WithTagFilters(Aws::Vector<TagFilter>&& value) { SetTagFilters(std::move(value)); return *this;}

    /**
     * <p>Specifies a list of TagFilters (keys and values) to restrict the output to
     * only those resources that have tags with the specified keys and, if included,
     * the specified values. Each <code>TagFilter</code> must contain a key with values
     * optional. A request can include up to 50 keys, and each key can include up to 20
     * values. </p> <p>Note the following when deciding how to use TagFilters:</p> <ul>
     * <li> <p>If you <i>don't</i> specify a <code>TagFilter</code>, the response
     * includes all resources that are currently tagged or ever had a tag. Resources
     * that currently don't have tags are shown with an empty tag set, like this:
     * <code>"Tags": []</code>.</p> </li> <li> <p>If you specify more than one filter
     * in a single request, the response returns only those resources that satisfy all
     * filters.</p> </li> <li> <p>If you specify a filter that contains more than one
     * value for a key, the response returns resources that match <i>any</i> of the
     * specified values for that key.</p> </li> <li> <p>If you don't specify a value
     * for a key, the response returns all resources that are tagged with that key,
     * with any or no value.</p> <p>For example, for the following filters:
     * <code>filter1= {keyA,{value1}}</code>,
     * <code>filter2={keyB,{value2,value3,value4}}</code>, <code>filter3=
     * {keyC}</code>:</p> <ul> <li> <p> <code>GetResources({filter1})</code> returns
     * resources tagged with <code>key1=value1</code> </p> </li> <li> <p>
     * <code>GetResources({filter2})</code> returns resources tagged with
     * <code>key2=value2</code> or <code>key2=value3</code> or <code>key2=value4</code>
     * </p> </li> <li> <p> <code>GetResources({filter3})</code> returns resources
     * tagged with any tag with the key <code>key3</code>, and with any or no value</p>
     * </li> <li> <p> <code>GetResources({filter1,filter2,filter3})</code> returns
     * resources tagged with <code>(key1=value1) and (key2=value2 or key2=value3 or
     * key2=value4) and (key3, any or no value)</code> </p> </li> </ul> </li> </ul>
     */
    inline GetResourcesRequest& AddTagFilters(const TagFilter& value) { m_tagFiltersHasBeenSet = true; m_tagFilters.push_back(value); return *this; }

    /**
     * <p>Specifies a list of TagFilters (keys and values) to restrict the output to
     * only those resources that have tags with the specified keys and, if included,
     * the specified values. Each <code>TagFilter</code> must contain a key with values
     * optional. A request can include up to 50 keys, and each key can include up to 20
     * values. </p> <p>Note the following when deciding how to use TagFilters:</p> <ul>
     * <li> <p>If you <i>don't</i> specify a <code>TagFilter</code>, the response
     * includes all resources that are currently tagged or ever had a tag. Resources
     * that currently don't have tags are shown with an empty tag set, like this:
     * <code>"Tags": []</code>.</p> </li> <li> <p>If you specify more than one filter
     * in a single request, the response returns only those resources that satisfy all
     * filters.</p> </li> <li> <p>If you specify a filter that contains more than one
     * value for a key, the response returns resources that match <i>any</i> of the
     * specified values for that key.</p> </li> <li> <p>If you don't specify a value
     * for a key, the response returns all resources that are tagged with that key,
     * with any or no value.</p> <p>For example, for the following filters:
     * <code>filter1= {keyA,{value1}}</code>,
     * <code>filter2={keyB,{value2,value3,value4}}</code>, <code>filter3=
     * {keyC}</code>:</p> <ul> <li> <p> <code>GetResources({filter1})</code> returns
     * resources tagged with <code>key1=value1</code> </p> </li> <li> <p>
     * <code>GetResources({filter2})</code> returns resources tagged with
     * <code>key2=value2</code> or <code>key2=value3</code> or <code>key2=value4</code>
     * </p> </li> <li> <p> <code>GetResources({filter3})</code> returns resources
     * tagged with any tag with the key <code>key3</code>, and with any or no value</p>
     * </li> <li> <p> <code>GetResources({filter1,filter2,filter3})</code> returns
     * resources tagged with <code>(key1=value1) and (key2=value2 or key2=value3 or
     * key2=value4) and (key3, any or no value)</code> </p> </li> </ul> </li> </ul>
     */
    inline GetResourcesRequest& AddTagFilters(TagFilter&& value) { m_tagFiltersHasBeenSet = true; m_tagFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the maximum number of results to be returned in each page. A query
     * can return fewer than this maximum, even if there are more results still to
     * return. You should always check the <code>PaginationToken</code> response value
     * to see if there are more results. You can specify a minimum of 1 and a maximum
     * value of 100.</p>
     */
    inline int GetResourcesPerPage() const{ return m_resourcesPerPage; }

    /**
     * <p>Specifies the maximum number of results to be returned in each page. A query
     * can return fewer than this maximum, even if there are more results still to
     * return. You should always check the <code>PaginationToken</code> response value
     * to see if there are more results. You can specify a minimum of 1 and a maximum
     * value of 100.</p>
     */
    inline bool ResourcesPerPageHasBeenSet() const { return m_resourcesPerPageHasBeenSet; }

    /**
     * <p>Specifies the maximum number of results to be returned in each page. A query
     * can return fewer than this maximum, even if there are more results still to
     * return. You should always check the <code>PaginationToken</code> response value
     * to see if there are more results. You can specify a minimum of 1 and a maximum
     * value of 100.</p>
     */
    inline void SetResourcesPerPage(int value) { m_resourcesPerPageHasBeenSet = true; m_resourcesPerPage = value; }

    /**
     * <p>Specifies the maximum number of results to be returned in each page. A query
     * can return fewer than this maximum, even if there are more results still to
     * return. You should always check the <code>PaginationToken</code> response value
     * to see if there are more results. You can specify a minimum of 1 and a maximum
     * value of 100.</p>
     */
    inline GetResourcesRequest& WithResourcesPerPage(int value) { SetResourcesPerPage(value); return *this;}


    /**
     * <p>Amazon Web Services recommends using <code>ResourcesPerPage</code> instead of
     * this parameter.</p> <p>A limit that restricts the number of tags (key and value
     * pairs) returned by <code>GetResources</code> in paginated output. A resource
     * with no tags is counted as having one tag (one key and value pair).</p> <p>
     * <code>GetResources</code> does not split a resource and its associated tags
     * across pages. If the specified <code>TagsPerPage</code> would cause such a
     * break, a <code>PaginationToken</code> is returned in place of the affected
     * resource and its tags. Use that token in another request to get the remaining
     * data. For example, if you specify a <code>TagsPerPage</code> of <code>100</code>
     * and the account has 22 resources with 10 tags each (meaning that each resource
     * has 10 key and value pairs), the output will consist of three pages. The first
     * page displays the first 10 resources, each with its 10 tags. The second page
     * displays the next 10 resources, each with its 10 tags. The third page displays
     * the remaining 2 resources, each with its 10 tags.</p> <p>You can set
     * <code>TagsPerPage</code> to a minimum of 100 items up to a maximum of 500
     * items.</p>
     */
    inline int GetTagsPerPage() const{ return m_tagsPerPage; }

    /**
     * <p>Amazon Web Services recommends using <code>ResourcesPerPage</code> instead of
     * this parameter.</p> <p>A limit that restricts the number of tags (key and value
     * pairs) returned by <code>GetResources</code> in paginated output. A resource
     * with no tags is counted as having one tag (one key and value pair).</p> <p>
     * <code>GetResources</code> does not split a resource and its associated tags
     * across pages. If the specified <code>TagsPerPage</code> would cause such a
     * break, a <code>PaginationToken</code> is returned in place of the affected
     * resource and its tags. Use that token in another request to get the remaining
     * data. For example, if you specify a <code>TagsPerPage</code> of <code>100</code>
     * and the account has 22 resources with 10 tags each (meaning that each resource
     * has 10 key and value pairs), the output will consist of three pages. The first
     * page displays the first 10 resources, each with its 10 tags. The second page
     * displays the next 10 resources, each with its 10 tags. The third page displays
     * the remaining 2 resources, each with its 10 tags.</p> <p>You can set
     * <code>TagsPerPage</code> to a minimum of 100 items up to a maximum of 500
     * items.</p>
     */
    inline bool TagsPerPageHasBeenSet() const { return m_tagsPerPageHasBeenSet; }

    /**
     * <p>Amazon Web Services recommends using <code>ResourcesPerPage</code> instead of
     * this parameter.</p> <p>A limit that restricts the number of tags (key and value
     * pairs) returned by <code>GetResources</code> in paginated output. A resource
     * with no tags is counted as having one tag (one key and value pair).</p> <p>
     * <code>GetResources</code> does not split a resource and its associated tags
     * across pages. If the specified <code>TagsPerPage</code> would cause such a
     * break, a <code>PaginationToken</code> is returned in place of the affected
     * resource and its tags. Use that token in another request to get the remaining
     * data. For example, if you specify a <code>TagsPerPage</code> of <code>100</code>
     * and the account has 22 resources with 10 tags each (meaning that each resource
     * has 10 key and value pairs), the output will consist of three pages. The first
     * page displays the first 10 resources, each with its 10 tags. The second page
     * displays the next 10 resources, each with its 10 tags. The third page displays
     * the remaining 2 resources, each with its 10 tags.</p> <p>You can set
     * <code>TagsPerPage</code> to a minimum of 100 items up to a maximum of 500
     * items.</p>
     */
    inline void SetTagsPerPage(int value) { m_tagsPerPageHasBeenSet = true; m_tagsPerPage = value; }

    /**
     * <p>Amazon Web Services recommends using <code>ResourcesPerPage</code> instead of
     * this parameter.</p> <p>A limit that restricts the number of tags (key and value
     * pairs) returned by <code>GetResources</code> in paginated output. A resource
     * with no tags is counted as having one tag (one key and value pair).</p> <p>
     * <code>GetResources</code> does not split a resource and its associated tags
     * across pages. If the specified <code>TagsPerPage</code> would cause such a
     * break, a <code>PaginationToken</code> is returned in place of the affected
     * resource and its tags. Use that token in another request to get the remaining
     * data. For example, if you specify a <code>TagsPerPage</code> of <code>100</code>
     * and the account has 22 resources with 10 tags each (meaning that each resource
     * has 10 key and value pairs), the output will consist of three pages. The first
     * page displays the first 10 resources, each with its 10 tags. The second page
     * displays the next 10 resources, each with its 10 tags. The third page displays
     * the remaining 2 resources, each with its 10 tags.</p> <p>You can set
     * <code>TagsPerPage</code> to a minimum of 100 items up to a maximum of 500
     * items.</p>
     */
    inline GetResourcesRequest& WithTagsPerPage(int value) { SetTagsPerPage(value); return *this;}


    /**
     * <p>Specifies the resource types that you want included in the response. The
     * format of each resource type is <code>service[:resourceType]</code>. For
     * example, specifying a resource type of <code>ec2</code> returns all Amazon EC2
     * resources (which includes EC2 instances). Specifying a resource type of
     * <code>ec2:instance</code> returns only EC2 instances. </p> <p>The string for
     * each service name and resource type is the same as that embedded in a resource's
     * Amazon Resource Name (ARN). For the list of services whose resources you can use
     * in this parameter, see <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/supported-services.html">Services
     * that support the Resource Groups Tagging API</a>.</p> <p>You can specify
     * multiple resource types by using an array. The array can include up to 100
     * items. Note that the length constraint requirement applies to each resource type
     * filter. For example, the following string would limit the response to only
     * Amazon EC2 instances, Amazon S3 buckets, or any Audit Manager resource:</p> <p>
     * <code>ec2:instance,s3:bucket,auditmanager</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypeFilters() const{ return m_resourceTypeFilters; }

    /**
     * <p>Specifies the resource types that you want included in the response. The
     * format of each resource type is <code>service[:resourceType]</code>. For
     * example, specifying a resource type of <code>ec2</code> returns all Amazon EC2
     * resources (which includes EC2 instances). Specifying a resource type of
     * <code>ec2:instance</code> returns only EC2 instances. </p> <p>The string for
     * each service name and resource type is the same as that embedded in a resource's
     * Amazon Resource Name (ARN). For the list of services whose resources you can use
     * in this parameter, see <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/supported-services.html">Services
     * that support the Resource Groups Tagging API</a>.</p> <p>You can specify
     * multiple resource types by using an array. The array can include up to 100
     * items. Note that the length constraint requirement applies to each resource type
     * filter. For example, the following string would limit the response to only
     * Amazon EC2 instances, Amazon S3 buckets, or any Audit Manager resource:</p> <p>
     * <code>ec2:instance,s3:bucket,auditmanager</code> </p>
     */
    inline bool ResourceTypeFiltersHasBeenSet() const { return m_resourceTypeFiltersHasBeenSet; }

    /**
     * <p>Specifies the resource types that you want included in the response. The
     * format of each resource type is <code>service[:resourceType]</code>. For
     * example, specifying a resource type of <code>ec2</code> returns all Amazon EC2
     * resources (which includes EC2 instances). Specifying a resource type of
     * <code>ec2:instance</code> returns only EC2 instances. </p> <p>The string for
     * each service name and resource type is the same as that embedded in a resource's
     * Amazon Resource Name (ARN). For the list of services whose resources you can use
     * in this parameter, see <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/supported-services.html">Services
     * that support the Resource Groups Tagging API</a>.</p> <p>You can specify
     * multiple resource types by using an array. The array can include up to 100
     * items. Note that the length constraint requirement applies to each resource type
     * filter. For example, the following string would limit the response to only
     * Amazon EC2 instances, Amazon S3 buckets, or any Audit Manager resource:</p> <p>
     * <code>ec2:instance,s3:bucket,auditmanager</code> </p>
     */
    inline void SetResourceTypeFilters(const Aws::Vector<Aws::String>& value) { m_resourceTypeFiltersHasBeenSet = true; m_resourceTypeFilters = value; }

    /**
     * <p>Specifies the resource types that you want included in the response. The
     * format of each resource type is <code>service[:resourceType]</code>. For
     * example, specifying a resource type of <code>ec2</code> returns all Amazon EC2
     * resources (which includes EC2 instances). Specifying a resource type of
     * <code>ec2:instance</code> returns only EC2 instances. </p> <p>The string for
     * each service name and resource type is the same as that embedded in a resource's
     * Amazon Resource Name (ARN). For the list of services whose resources you can use
     * in this parameter, see <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/supported-services.html">Services
     * that support the Resource Groups Tagging API</a>.</p> <p>You can specify
     * multiple resource types by using an array. The array can include up to 100
     * items. Note that the length constraint requirement applies to each resource type
     * filter. For example, the following string would limit the response to only
     * Amazon EC2 instances, Amazon S3 buckets, or any Audit Manager resource:</p> <p>
     * <code>ec2:instance,s3:bucket,auditmanager</code> </p>
     */
    inline void SetResourceTypeFilters(Aws::Vector<Aws::String>&& value) { m_resourceTypeFiltersHasBeenSet = true; m_resourceTypeFilters = std::move(value); }

    /**
     * <p>Specifies the resource types that you want included in the response. The
     * format of each resource type is <code>service[:resourceType]</code>. For
     * example, specifying a resource type of <code>ec2</code> returns all Amazon EC2
     * resources (which includes EC2 instances). Specifying a resource type of
     * <code>ec2:instance</code> returns only EC2 instances. </p> <p>The string for
     * each service name and resource type is the same as that embedded in a resource's
     * Amazon Resource Name (ARN). For the list of services whose resources you can use
     * in this parameter, see <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/supported-services.html">Services
     * that support the Resource Groups Tagging API</a>.</p> <p>You can specify
     * multiple resource types by using an array. The array can include up to 100
     * items. Note that the length constraint requirement applies to each resource type
     * filter. For example, the following string would limit the response to only
     * Amazon EC2 instances, Amazon S3 buckets, or any Audit Manager resource:</p> <p>
     * <code>ec2:instance,s3:bucket,auditmanager</code> </p>
     */
    inline GetResourcesRequest& WithResourceTypeFilters(const Aws::Vector<Aws::String>& value) { SetResourceTypeFilters(value); return *this;}

    /**
     * <p>Specifies the resource types that you want included in the response. The
     * format of each resource type is <code>service[:resourceType]</code>. For
     * example, specifying a resource type of <code>ec2</code> returns all Amazon EC2
     * resources (which includes EC2 instances). Specifying a resource type of
     * <code>ec2:instance</code> returns only EC2 instances. </p> <p>The string for
     * each service name and resource type is the same as that embedded in a resource's
     * Amazon Resource Name (ARN). For the list of services whose resources you can use
     * in this parameter, see <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/supported-services.html">Services
     * that support the Resource Groups Tagging API</a>.</p> <p>You can specify
     * multiple resource types by using an array. The array can include up to 100
     * items. Note that the length constraint requirement applies to each resource type
     * filter. For example, the following string would limit the response to only
     * Amazon EC2 instances, Amazon S3 buckets, or any Audit Manager resource:</p> <p>
     * <code>ec2:instance,s3:bucket,auditmanager</code> </p>
     */
    inline GetResourcesRequest& WithResourceTypeFilters(Aws::Vector<Aws::String>&& value) { SetResourceTypeFilters(std::move(value)); return *this;}

    /**
     * <p>Specifies the resource types that you want included in the response. The
     * format of each resource type is <code>service[:resourceType]</code>. For
     * example, specifying a resource type of <code>ec2</code> returns all Amazon EC2
     * resources (which includes EC2 instances). Specifying a resource type of
     * <code>ec2:instance</code> returns only EC2 instances. </p> <p>The string for
     * each service name and resource type is the same as that embedded in a resource's
     * Amazon Resource Name (ARN). For the list of services whose resources you can use
     * in this parameter, see <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/supported-services.html">Services
     * that support the Resource Groups Tagging API</a>.</p> <p>You can specify
     * multiple resource types by using an array. The array can include up to 100
     * items. Note that the length constraint requirement applies to each resource type
     * filter. For example, the following string would limit the response to only
     * Amazon EC2 instances, Amazon S3 buckets, or any Audit Manager resource:</p> <p>
     * <code>ec2:instance,s3:bucket,auditmanager</code> </p>
     */
    inline GetResourcesRequest& AddResourceTypeFilters(const Aws::String& value) { m_resourceTypeFiltersHasBeenSet = true; m_resourceTypeFilters.push_back(value); return *this; }

    /**
     * <p>Specifies the resource types that you want included in the response. The
     * format of each resource type is <code>service[:resourceType]</code>. For
     * example, specifying a resource type of <code>ec2</code> returns all Amazon EC2
     * resources (which includes EC2 instances). Specifying a resource type of
     * <code>ec2:instance</code> returns only EC2 instances. </p> <p>The string for
     * each service name and resource type is the same as that embedded in a resource's
     * Amazon Resource Name (ARN). For the list of services whose resources you can use
     * in this parameter, see <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/supported-services.html">Services
     * that support the Resource Groups Tagging API</a>.</p> <p>You can specify
     * multiple resource types by using an array. The array can include up to 100
     * items. Note that the length constraint requirement applies to each resource type
     * filter. For example, the following string would limit the response to only
     * Amazon EC2 instances, Amazon S3 buckets, or any Audit Manager resource:</p> <p>
     * <code>ec2:instance,s3:bucket,auditmanager</code> </p>
     */
    inline GetResourcesRequest& AddResourceTypeFilters(Aws::String&& value) { m_resourceTypeFiltersHasBeenSet = true; m_resourceTypeFilters.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the resource types that you want included in the response. The
     * format of each resource type is <code>service[:resourceType]</code>. For
     * example, specifying a resource type of <code>ec2</code> returns all Amazon EC2
     * resources (which includes EC2 instances). Specifying a resource type of
     * <code>ec2:instance</code> returns only EC2 instances. </p> <p>The string for
     * each service name and resource type is the same as that embedded in a resource's
     * Amazon Resource Name (ARN). For the list of services whose resources you can use
     * in this parameter, see <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/supported-services.html">Services
     * that support the Resource Groups Tagging API</a>.</p> <p>You can specify
     * multiple resource types by using an array. The array can include up to 100
     * items. Note that the length constraint requirement applies to each resource type
     * filter. For example, the following string would limit the response to only
     * Amazon EC2 instances, Amazon S3 buckets, or any Audit Manager resource:</p> <p>
     * <code>ec2:instance,s3:bucket,auditmanager</code> </p>
     */
    inline GetResourcesRequest& AddResourceTypeFilters(const char* value) { m_resourceTypeFiltersHasBeenSet = true; m_resourceTypeFilters.push_back(value); return *this; }


    /**
     * <p>Specifies whether to include details regarding the compliance with the
     * effective tag policy. Set this to <code>true</code> to determine whether
     * resources are compliant with the tag policy and to get details.</p>
     */
    inline bool GetIncludeComplianceDetails() const{ return m_includeComplianceDetails; }

    /**
     * <p>Specifies whether to include details regarding the compliance with the
     * effective tag policy. Set this to <code>true</code> to determine whether
     * resources are compliant with the tag policy and to get details.</p>
     */
    inline bool IncludeComplianceDetailsHasBeenSet() const { return m_includeComplianceDetailsHasBeenSet; }

    /**
     * <p>Specifies whether to include details regarding the compliance with the
     * effective tag policy. Set this to <code>true</code> to determine whether
     * resources are compliant with the tag policy and to get details.</p>
     */
    inline void SetIncludeComplianceDetails(bool value) { m_includeComplianceDetailsHasBeenSet = true; m_includeComplianceDetails = value; }

    /**
     * <p>Specifies whether to include details regarding the compliance with the
     * effective tag policy. Set this to <code>true</code> to determine whether
     * resources are compliant with the tag policy and to get details.</p>
     */
    inline GetResourcesRequest& WithIncludeComplianceDetails(bool value) { SetIncludeComplianceDetails(value); return *this;}


    /**
     * <p>Specifies whether to exclude resources that are compliant with the tag
     * policy. Set this to <code>true</code> if you are interested in retrieving
     * information on noncompliant resources only.</p> <p>You can use this parameter
     * only if the <code>IncludeComplianceDetails</code> parameter is also set to
     * <code>true</code>.</p>
     */
    inline bool GetExcludeCompliantResources() const{ return m_excludeCompliantResources; }

    /**
     * <p>Specifies whether to exclude resources that are compliant with the tag
     * policy. Set this to <code>true</code> if you are interested in retrieving
     * information on noncompliant resources only.</p> <p>You can use this parameter
     * only if the <code>IncludeComplianceDetails</code> parameter is also set to
     * <code>true</code>.</p>
     */
    inline bool ExcludeCompliantResourcesHasBeenSet() const { return m_excludeCompliantResourcesHasBeenSet; }

    /**
     * <p>Specifies whether to exclude resources that are compliant with the tag
     * policy. Set this to <code>true</code> if you are interested in retrieving
     * information on noncompliant resources only.</p> <p>You can use this parameter
     * only if the <code>IncludeComplianceDetails</code> parameter is also set to
     * <code>true</code>.</p>
     */
    inline void SetExcludeCompliantResources(bool value) { m_excludeCompliantResourcesHasBeenSet = true; m_excludeCompliantResources = value; }

    /**
     * <p>Specifies whether to exclude resources that are compliant with the tag
     * policy. Set this to <code>true</code> if you are interested in retrieving
     * information on noncompliant resources only.</p> <p>You can use this parameter
     * only if the <code>IncludeComplianceDetails</code> parameter is also set to
     * <code>true</code>.</p>
     */
    inline GetResourcesRequest& WithExcludeCompliantResources(bool value) { SetExcludeCompliantResources(value); return *this;}


    /**
     * <p>Specifies a list of ARNs of resources for which you want to retrieve tag
     * data. You can't specify both this parameter and any of the pagination parameters
     * (<code>ResourcesPerPage</code>, <code>TagsPerPage</code>,
     * <code>PaginationToken</code>) in the same request. If you specify both, you get
     * an <code>Invalid Parameter</code> exception.</p> <p>If a resource specified by
     * this parameter doesn't exist, it doesn't generate an error; it simply isn't
     * included in the response.</p> <p>An ARN (Amazon Resource Name) uniquely
     * identifies a resource. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceARNList() const{ return m_resourceARNList; }

    /**
     * <p>Specifies a list of ARNs of resources for which you want to retrieve tag
     * data. You can't specify both this parameter and any of the pagination parameters
     * (<code>ResourcesPerPage</code>, <code>TagsPerPage</code>,
     * <code>PaginationToken</code>) in the same request. If you specify both, you get
     * an <code>Invalid Parameter</code> exception.</p> <p>If a resource specified by
     * this parameter doesn't exist, it doesn't generate an error; it simply isn't
     * included in the response.</p> <p>An ARN (Amazon Resource Name) uniquely
     * identifies a resource. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline bool ResourceARNListHasBeenSet() const { return m_resourceARNListHasBeenSet; }

    /**
     * <p>Specifies a list of ARNs of resources for which you want to retrieve tag
     * data. You can't specify both this parameter and any of the pagination parameters
     * (<code>ResourcesPerPage</code>, <code>TagsPerPage</code>,
     * <code>PaginationToken</code>) in the same request. If you specify both, you get
     * an <code>Invalid Parameter</code> exception.</p> <p>If a resource specified by
     * this parameter doesn't exist, it doesn't generate an error; it simply isn't
     * included in the response.</p> <p>An ARN (Amazon Resource Name) uniquely
     * identifies a resource. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline void SetResourceARNList(const Aws::Vector<Aws::String>& value) { m_resourceARNListHasBeenSet = true; m_resourceARNList = value; }

    /**
     * <p>Specifies a list of ARNs of resources for which you want to retrieve tag
     * data. You can't specify both this parameter and any of the pagination parameters
     * (<code>ResourcesPerPage</code>, <code>TagsPerPage</code>,
     * <code>PaginationToken</code>) in the same request. If you specify both, you get
     * an <code>Invalid Parameter</code> exception.</p> <p>If a resource specified by
     * this parameter doesn't exist, it doesn't generate an error; it simply isn't
     * included in the response.</p> <p>An ARN (Amazon Resource Name) uniquely
     * identifies a resource. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline void SetResourceARNList(Aws::Vector<Aws::String>&& value) { m_resourceARNListHasBeenSet = true; m_resourceARNList = std::move(value); }

    /**
     * <p>Specifies a list of ARNs of resources for which you want to retrieve tag
     * data. You can't specify both this parameter and any of the pagination parameters
     * (<code>ResourcesPerPage</code>, <code>TagsPerPage</code>,
     * <code>PaginationToken</code>) in the same request. If you specify both, you get
     * an <code>Invalid Parameter</code> exception.</p> <p>If a resource specified by
     * this parameter doesn't exist, it doesn't generate an error; it simply isn't
     * included in the response.</p> <p>An ARN (Amazon Resource Name) uniquely
     * identifies a resource. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline GetResourcesRequest& WithResourceARNList(const Aws::Vector<Aws::String>& value) { SetResourceARNList(value); return *this;}

    /**
     * <p>Specifies a list of ARNs of resources for which you want to retrieve tag
     * data. You can't specify both this parameter and any of the pagination parameters
     * (<code>ResourcesPerPage</code>, <code>TagsPerPage</code>,
     * <code>PaginationToken</code>) in the same request. If you specify both, you get
     * an <code>Invalid Parameter</code> exception.</p> <p>If a resource specified by
     * this parameter doesn't exist, it doesn't generate an error; it simply isn't
     * included in the response.</p> <p>An ARN (Amazon Resource Name) uniquely
     * identifies a resource. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline GetResourcesRequest& WithResourceARNList(Aws::Vector<Aws::String>&& value) { SetResourceARNList(std::move(value)); return *this;}

    /**
     * <p>Specifies a list of ARNs of resources for which you want to retrieve tag
     * data. You can't specify both this parameter and any of the pagination parameters
     * (<code>ResourcesPerPage</code>, <code>TagsPerPage</code>,
     * <code>PaginationToken</code>) in the same request. If you specify both, you get
     * an <code>Invalid Parameter</code> exception.</p> <p>If a resource specified by
     * this parameter doesn't exist, it doesn't generate an error; it simply isn't
     * included in the response.</p> <p>An ARN (Amazon Resource Name) uniquely
     * identifies a resource. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline GetResourcesRequest& AddResourceARNList(const Aws::String& value) { m_resourceARNListHasBeenSet = true; m_resourceARNList.push_back(value); return *this; }

    /**
     * <p>Specifies a list of ARNs of resources for which you want to retrieve tag
     * data. You can't specify both this parameter and any of the pagination parameters
     * (<code>ResourcesPerPage</code>, <code>TagsPerPage</code>,
     * <code>PaginationToken</code>) in the same request. If you specify both, you get
     * an <code>Invalid Parameter</code> exception.</p> <p>If a resource specified by
     * this parameter doesn't exist, it doesn't generate an error; it simply isn't
     * included in the response.</p> <p>An ARN (Amazon Resource Name) uniquely
     * identifies a resource. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline GetResourcesRequest& AddResourceARNList(Aws::String&& value) { m_resourceARNListHasBeenSet = true; m_resourceARNList.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies a list of ARNs of resources for which you want to retrieve tag
     * data. You can't specify both this parameter and any of the pagination parameters
     * (<code>ResourcesPerPage</code>, <code>TagsPerPage</code>,
     * <code>PaginationToken</code>) in the same request. If you specify both, you get
     * an <code>Invalid Parameter</code> exception.</p> <p>If a resource specified by
     * this parameter doesn't exist, it doesn't generate an error; it simply isn't
     * included in the response.</p> <p>An ARN (Amazon Resource Name) uniquely
     * identifies a resource. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline GetResourcesRequest& AddResourceARNList(const char* value) { m_resourceARNListHasBeenSet = true; m_resourceARNList.push_back(value); return *this; }

  private:

    Aws::String m_paginationToken;
    bool m_paginationTokenHasBeenSet = false;

    Aws::Vector<TagFilter> m_tagFilters;
    bool m_tagFiltersHasBeenSet = false;

    int m_resourcesPerPage;
    bool m_resourcesPerPageHasBeenSet = false;

    int m_tagsPerPage;
    bool m_tagsPerPageHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceTypeFilters;
    bool m_resourceTypeFiltersHasBeenSet = false;

    bool m_includeComplianceDetails;
    bool m_includeComplianceDetailsHasBeenSet = false;

    bool m_excludeCompliantResources;
    bool m_excludeCompliantResourcesHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceARNList;
    bool m_resourceARNListHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
