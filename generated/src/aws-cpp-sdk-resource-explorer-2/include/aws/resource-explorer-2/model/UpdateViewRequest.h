/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/ResourceExplorer2Request.h>
#include <aws/resource-explorer-2/model/SearchFilter.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-explorer-2/model/IncludedProperty.h>
#include <utility>

namespace Aws
{
namespace ResourceExplorer2
{
namespace Model
{

  /**
   */
  class UpdateViewRequest : public ResourceExplorer2Request
  {
  public:
    AWS_RESOURCEEXPLORER2_API UpdateViewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateView"; }

    AWS_RESOURCEEXPLORER2_API Aws::String SerializePayload() const override;


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
    inline UpdateViewRequest& WithFilters(const SearchFilter& value) { SetFilters(value); return *this;}

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
    inline UpdateViewRequest& WithFilters(SearchFilter&& value) { SetFilters(std::move(value)); return *this;}


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
    inline UpdateViewRequest& WithIncludedProperties(const Aws::Vector<IncludedProperty>& value) { SetIncludedProperties(value); return *this;}

    /**
     * <p>Specifies optional fields that you want included in search results from this
     * view. It is a list of objects that each describe a field to include.</p> <p>The
     * default is an empty list, with no optional fields included in the results.</p>
     */
    inline UpdateViewRequest& WithIncludedProperties(Aws::Vector<IncludedProperty>&& value) { SetIncludedProperties(std::move(value)); return *this;}

    /**
     * <p>Specifies optional fields that you want included in search results from this
     * view. It is a list of objects that each describe a field to include.</p> <p>The
     * default is an empty list, with no optional fields included in the results.</p>
     */
    inline UpdateViewRequest& AddIncludedProperties(const IncludedProperty& value) { m_includedPropertiesHasBeenSet = true; m_includedProperties.push_back(value); return *this; }

    /**
     * <p>Specifies optional fields that you want included in search results from this
     * view. It is a list of objects that each describe a field to include.</p> <p>The
     * default is an empty list, with no optional fields included in the results.</p>
     */
    inline UpdateViewRequest& AddIncludedProperties(IncludedProperty&& value) { m_includedPropertiesHasBeenSet = true; m_includedProperties.push_back(std::move(value)); return *this; }


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view that you want to modify.</p>
     */
    inline const Aws::String& GetViewArn() const{ return m_viewArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view that you want to modify.</p>
     */
    inline bool ViewArnHasBeenSet() const { return m_viewArnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view that you want to modify.</p>
     */
    inline void SetViewArn(const Aws::String& value) { m_viewArnHasBeenSet = true; m_viewArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view that you want to modify.</p>
     */
    inline void SetViewArn(Aws::String&& value) { m_viewArnHasBeenSet = true; m_viewArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view that you want to modify.</p>
     */
    inline void SetViewArn(const char* value) { m_viewArnHasBeenSet = true; m_viewArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view that you want to modify.</p>
     */
    inline UpdateViewRequest& WithViewArn(const Aws::String& value) { SetViewArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view that you want to modify.</p>
     */
    inline UpdateViewRequest& WithViewArn(Aws::String&& value) { SetViewArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view that you want to modify.</p>
     */
    inline UpdateViewRequest& WithViewArn(const char* value) { SetViewArn(value); return *this;}

  private:

    SearchFilter m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<IncludedProperty> m_includedProperties;
    bool m_includedPropertiesHasBeenSet = false;

    Aws::String m_viewArn;
    bool m_viewArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
