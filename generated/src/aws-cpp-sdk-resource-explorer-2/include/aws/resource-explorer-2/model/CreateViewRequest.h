/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/ResourceExplorer2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-explorer-2/model/SearchFilter.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/resource-explorer-2/model/IncludedProperty.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ResourceExplorer2
{
namespace Model
{

  /**
   */
  class CreateViewRequest : public ResourceExplorer2Request
  {
  public:
    AWS_RESOURCEEXPLORER2_API CreateViewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateView"; }

    AWS_RESOURCEEXPLORER2_API Aws::String SerializePayload() const override;


    /**
     * <p>This value helps ensure idempotency. Resource Explorer uses this value to
     * prevent the accidental creation of duplicate versions. We recommend that you
     * generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type
     * value</a> to ensure the uniqueness of your views.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>This value helps ensure idempotency. Resource Explorer uses this value to
     * prevent the accidental creation of duplicate versions. We recommend that you
     * generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type
     * value</a> to ensure the uniqueness of your views.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>This value helps ensure idempotency. Resource Explorer uses this value to
     * prevent the accidental creation of duplicate versions. We recommend that you
     * generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type
     * value</a> to ensure the uniqueness of your views.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>This value helps ensure idempotency. Resource Explorer uses this value to
     * prevent the accidental creation of duplicate versions. We recommend that you
     * generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type
     * value</a> to ensure the uniqueness of your views.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>This value helps ensure idempotency. Resource Explorer uses this value to
     * prevent the accidental creation of duplicate versions. We recommend that you
     * generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type
     * value</a> to ensure the uniqueness of your views.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>This value helps ensure idempotency. Resource Explorer uses this value to
     * prevent the accidental creation of duplicate versions. We recommend that you
     * generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type
     * value</a> to ensure the uniqueness of your views.</p>
     */
    inline CreateViewRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>This value helps ensure idempotency. Resource Explorer uses this value to
     * prevent the accidental creation of duplicate versions. We recommend that you
     * generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type
     * value</a> to ensure the uniqueness of your views.</p>
     */
    inline CreateViewRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>This value helps ensure idempotency. Resource Explorer uses this value to
     * prevent the accidental creation of duplicate versions. We recommend that you
     * generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type
     * value</a> to ensure the uniqueness of your views.</p>
     */
    inline CreateViewRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>An array of strings that specify which resources are included in the results
     * of queries made using this view. When you use this view in a <a>Search</a>
     * operation, the filter string is combined with the search's
     * <code>QueryString</code> parameter using a logical <code>AND</code>
     * operator.</p> <p>For information about the supported syntax, see <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/using-search-query-syntax.html">Search
     * query reference for Resource Explorer</a> in the <i>Amazon Web Services Resource
     * Explorer User Guide</i>.</p>  <p>This query string in the context of
     * this operation supports only <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/using-search-query-syntax.html#query-syntax-filters">filter
     * prefixes</a> with optional <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/using-search-query-syntax.html#query-syntax-operators">operators</a>.
     * It doesn't support free-form text. For example, the string <code>region:us*
     * service:ec2 -tag:stage=prod</code> includes all Amazon EC2 resources in any
     * Amazon Web Services Region that begins with the letters <code>us</code> and is
     * <i>not</i> tagged with a key <code>Stage</code> that has the value
     * <code>prod</code>.</p> 
     */
    inline const SearchFilter& GetFilters() const{ return m_filters; }

    /**
     * <p>An array of strings that specify which resources are included in the results
     * of queries made using this view. When you use this view in a <a>Search</a>
     * operation, the filter string is combined with the search's
     * <code>QueryString</code> parameter using a logical <code>AND</code>
     * operator.</p> <p>For information about the supported syntax, see <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/using-search-query-syntax.html">Search
     * query reference for Resource Explorer</a> in the <i>Amazon Web Services Resource
     * Explorer User Guide</i>.</p>  <p>This query string in the context of
     * this operation supports only <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/using-search-query-syntax.html#query-syntax-filters">filter
     * prefixes</a> with optional <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/using-search-query-syntax.html#query-syntax-operators">operators</a>.
     * It doesn't support free-form text. For example, the string <code>region:us*
     * service:ec2 -tag:stage=prod</code> includes all Amazon EC2 resources in any
     * Amazon Web Services Region that begins with the letters <code>us</code> and is
     * <i>not</i> tagged with a key <code>Stage</code> that has the value
     * <code>prod</code>.</p> 
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>An array of strings that specify which resources are included in the results
     * of queries made using this view. When you use this view in a <a>Search</a>
     * operation, the filter string is combined with the search's
     * <code>QueryString</code> parameter using a logical <code>AND</code>
     * operator.</p> <p>For information about the supported syntax, see <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/using-search-query-syntax.html">Search
     * query reference for Resource Explorer</a> in the <i>Amazon Web Services Resource
     * Explorer User Guide</i>.</p>  <p>This query string in the context of
     * this operation supports only <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/using-search-query-syntax.html#query-syntax-filters">filter
     * prefixes</a> with optional <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/using-search-query-syntax.html#query-syntax-operators">operators</a>.
     * It doesn't support free-form text. For example, the string <code>region:us*
     * service:ec2 -tag:stage=prod</code> includes all Amazon EC2 resources in any
     * Amazon Web Services Region that begins with the letters <code>us</code> and is
     * <i>not</i> tagged with a key <code>Stage</code> that has the value
     * <code>prod</code>.</p> 
     */
    inline void SetFilters(const SearchFilter& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>An array of strings that specify which resources are included in the results
     * of queries made using this view. When you use this view in a <a>Search</a>
     * operation, the filter string is combined with the search's
     * <code>QueryString</code> parameter using a logical <code>AND</code>
     * operator.</p> <p>For information about the supported syntax, see <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/using-search-query-syntax.html">Search
     * query reference for Resource Explorer</a> in the <i>Amazon Web Services Resource
     * Explorer User Guide</i>.</p>  <p>This query string in the context of
     * this operation supports only <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/using-search-query-syntax.html#query-syntax-filters">filter
     * prefixes</a> with optional <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/using-search-query-syntax.html#query-syntax-operators">operators</a>.
     * It doesn't support free-form text. For example, the string <code>region:us*
     * service:ec2 -tag:stage=prod</code> includes all Amazon EC2 resources in any
     * Amazon Web Services Region that begins with the letters <code>us</code> and is
     * <i>not</i> tagged with a key <code>Stage</code> that has the value
     * <code>prod</code>.</p> 
     */
    inline void SetFilters(SearchFilter&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>An array of strings that specify which resources are included in the results
     * of queries made using this view. When you use this view in a <a>Search</a>
     * operation, the filter string is combined with the search's
     * <code>QueryString</code> parameter using a logical <code>AND</code>
     * operator.</p> <p>For information about the supported syntax, see <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/using-search-query-syntax.html">Search
     * query reference for Resource Explorer</a> in the <i>Amazon Web Services Resource
     * Explorer User Guide</i>.</p>  <p>This query string in the context of
     * this operation supports only <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/using-search-query-syntax.html#query-syntax-filters">filter
     * prefixes</a> with optional <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/using-search-query-syntax.html#query-syntax-operators">operators</a>.
     * It doesn't support free-form text. For example, the string <code>region:us*
     * service:ec2 -tag:stage=prod</code> includes all Amazon EC2 resources in any
     * Amazon Web Services Region that begins with the letters <code>us</code> and is
     * <i>not</i> tagged with a key <code>Stage</code> that has the value
     * <code>prod</code>.</p> 
     */
    inline CreateViewRequest& WithFilters(const SearchFilter& value) { SetFilters(value); return *this;}

    /**
     * <p>An array of strings that specify which resources are included in the results
     * of queries made using this view. When you use this view in a <a>Search</a>
     * operation, the filter string is combined with the search's
     * <code>QueryString</code> parameter using a logical <code>AND</code>
     * operator.</p> <p>For information about the supported syntax, see <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/using-search-query-syntax.html">Search
     * query reference for Resource Explorer</a> in the <i>Amazon Web Services Resource
     * Explorer User Guide</i>.</p>  <p>This query string in the context of
     * this operation supports only <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/using-search-query-syntax.html#query-syntax-filters">filter
     * prefixes</a> with optional <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/using-search-query-syntax.html#query-syntax-operators">operators</a>.
     * It doesn't support free-form text. For example, the string <code>region:us*
     * service:ec2 -tag:stage=prod</code> includes all Amazon EC2 resources in any
     * Amazon Web Services Region that begins with the letters <code>us</code> and is
     * <i>not</i> tagged with a key <code>Stage</code> that has the value
     * <code>prod</code>.</p> 
     */
    inline CreateViewRequest& WithFilters(SearchFilter&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>Specifies optional fields that you want included in search results from this
     * view. It is a list of objects that each describe a field to include.</p> <p>The
     * default is an empty list, with no optional fields included in the results.</p>
     */
    inline const Aws::Vector<IncludedProperty>& GetIncludedProperties() const{ return m_includedProperties; }

    /**
     * <p>Specifies optional fields that you want included in search results from this
     * view. It is a list of objects that each describe a field to include.</p> <p>The
     * default is an empty list, with no optional fields included in the results.</p>
     */
    inline bool IncludedPropertiesHasBeenSet() const { return m_includedPropertiesHasBeenSet; }

    /**
     * <p>Specifies optional fields that you want included in search results from this
     * view. It is a list of objects that each describe a field to include.</p> <p>The
     * default is an empty list, with no optional fields included in the results.</p>
     */
    inline void SetIncludedProperties(const Aws::Vector<IncludedProperty>& value) { m_includedPropertiesHasBeenSet = true; m_includedProperties = value; }

    /**
     * <p>Specifies optional fields that you want included in search results from this
     * view. It is a list of objects that each describe a field to include.</p> <p>The
     * default is an empty list, with no optional fields included in the results.</p>
     */
    inline void SetIncludedProperties(Aws::Vector<IncludedProperty>&& value) { m_includedPropertiesHasBeenSet = true; m_includedProperties = std::move(value); }

    /**
     * <p>Specifies optional fields that you want included in search results from this
     * view. It is a list of objects that each describe a field to include.</p> <p>The
     * default is an empty list, with no optional fields included in the results.</p>
     */
    inline CreateViewRequest& WithIncludedProperties(const Aws::Vector<IncludedProperty>& value) { SetIncludedProperties(value); return *this;}

    /**
     * <p>Specifies optional fields that you want included in search results from this
     * view. It is a list of objects that each describe a field to include.</p> <p>The
     * default is an empty list, with no optional fields included in the results.</p>
     */
    inline CreateViewRequest& WithIncludedProperties(Aws::Vector<IncludedProperty>&& value) { SetIncludedProperties(std::move(value)); return *this;}

    /**
     * <p>Specifies optional fields that you want included in search results from this
     * view. It is a list of objects that each describe a field to include.</p> <p>The
     * default is an empty list, with no optional fields included in the results.</p>
     */
    inline CreateViewRequest& AddIncludedProperties(const IncludedProperty& value) { m_includedPropertiesHasBeenSet = true; m_includedProperties.push_back(value); return *this; }

    /**
     * <p>Specifies optional fields that you want included in search results from this
     * view. It is a list of objects that each describe a field to include.</p> <p>The
     * default is an empty list, with no optional fields included in the results.</p>
     */
    inline CreateViewRequest& AddIncludedProperties(IncludedProperty&& value) { m_includedPropertiesHasBeenSet = true; m_includedProperties.push_back(std::move(value)); return *this; }


    /**
     * <p>Tag key and value pairs that are attached to the view.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tag key and value pairs that are attached to the view.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tag key and value pairs that are attached to the view.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tag key and value pairs that are attached to the view.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tag key and value pairs that are attached to the view.</p>
     */
    inline CreateViewRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tag key and value pairs that are attached to the view.</p>
     */
    inline CreateViewRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tag key and value pairs that are attached to the view.</p>
     */
    inline CreateViewRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tag key and value pairs that are attached to the view.</p>
     */
    inline CreateViewRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tag key and value pairs that are attached to the view.</p>
     */
    inline CreateViewRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tag key and value pairs that are attached to the view.</p>
     */
    inline CreateViewRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tag key and value pairs that are attached to the view.</p>
     */
    inline CreateViewRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tag key and value pairs that are attached to the view.</p>
     */
    inline CreateViewRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tag key and value pairs that are attached to the view.</p>
     */
    inline CreateViewRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The name of the new view. This name appears in the list of views in Resource
     * Explorer.</p> <p>The name must be no more than 64 characters long, and can
     * include letters, digits, and the dash (-) character. The name must be unique
     * within its Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetViewName() const{ return m_viewName; }

    /**
     * <p>The name of the new view. This name appears in the list of views in Resource
     * Explorer.</p> <p>The name must be no more than 64 characters long, and can
     * include letters, digits, and the dash (-) character. The name must be unique
     * within its Amazon Web Services Region.</p>
     */
    inline bool ViewNameHasBeenSet() const { return m_viewNameHasBeenSet; }

    /**
     * <p>The name of the new view. This name appears in the list of views in Resource
     * Explorer.</p> <p>The name must be no more than 64 characters long, and can
     * include letters, digits, and the dash (-) character. The name must be unique
     * within its Amazon Web Services Region.</p>
     */
    inline void SetViewName(const Aws::String& value) { m_viewNameHasBeenSet = true; m_viewName = value; }

    /**
     * <p>The name of the new view. This name appears in the list of views in Resource
     * Explorer.</p> <p>The name must be no more than 64 characters long, and can
     * include letters, digits, and the dash (-) character. The name must be unique
     * within its Amazon Web Services Region.</p>
     */
    inline void SetViewName(Aws::String&& value) { m_viewNameHasBeenSet = true; m_viewName = std::move(value); }

    /**
     * <p>The name of the new view. This name appears in the list of views in Resource
     * Explorer.</p> <p>The name must be no more than 64 characters long, and can
     * include letters, digits, and the dash (-) character. The name must be unique
     * within its Amazon Web Services Region.</p>
     */
    inline void SetViewName(const char* value) { m_viewNameHasBeenSet = true; m_viewName.assign(value); }

    /**
     * <p>The name of the new view. This name appears in the list of views in Resource
     * Explorer.</p> <p>The name must be no more than 64 characters long, and can
     * include letters, digits, and the dash (-) character. The name must be unique
     * within its Amazon Web Services Region.</p>
     */
    inline CreateViewRequest& WithViewName(const Aws::String& value) { SetViewName(value); return *this;}

    /**
     * <p>The name of the new view. This name appears in the list of views in Resource
     * Explorer.</p> <p>The name must be no more than 64 characters long, and can
     * include letters, digits, and the dash (-) character. The name must be unique
     * within its Amazon Web Services Region.</p>
     */
    inline CreateViewRequest& WithViewName(Aws::String&& value) { SetViewName(std::move(value)); return *this;}

    /**
     * <p>The name of the new view. This name appears in the list of views in Resource
     * Explorer.</p> <p>The name must be no more than 64 characters long, and can
     * include letters, digits, and the dash (-) character. The name must be unique
     * within its Amazon Web Services Region.</p>
     */
    inline CreateViewRequest& WithViewName(const char* value) { SetViewName(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    SearchFilter m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<IncludedProperty> m_includedProperties;
    bool m_includedPropertiesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_viewName;
    bool m_viewNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
