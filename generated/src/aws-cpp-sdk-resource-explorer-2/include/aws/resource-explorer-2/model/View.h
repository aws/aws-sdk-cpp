/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/model/SearchFilter.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-explorer-2/model/IncludedProperty.h>
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
namespace ResourceExplorer2
{
namespace Model
{

  /**
   * <p>A view is a structure that defines a set of filters that provide a view into
   * the information in the Amazon Web Services Resource Explorer index. The filters
   * specify which information from the index is visible to the users of the view.
   * For example, you can specify filters that include only resources that are tagged
   * with the key "ENV" and the value "DEVELOPMENT" in the results returned by this
   * view. You could also create a second view that includes only resources that are
   * tagged with "ENV" and "PRODUCTION".</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/View">AWS
   * API Reference</a></p>
   */
  class View
  {
  public:
    AWS_RESOURCEEXPLORER2_API View();
    AWS_RESOURCEEXPLORER2_API View(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API View& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of <a>SearchFilter</a> objects that specify which resources can be
     * included in the results of queries made using this view.</p>
     */
    inline const SearchFilter& GetFilters() const{ return m_filters; }

    /**
     * <p>An array of <a>SearchFilter</a> objects that specify which resources can be
     * included in the results of queries made using this view.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>An array of <a>SearchFilter</a> objects that specify which resources can be
     * included in the results of queries made using this view.</p>
     */
    inline void SetFilters(const SearchFilter& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>An array of <a>SearchFilter</a> objects that specify which resources can be
     * included in the results of queries made using this view.</p>
     */
    inline void SetFilters(SearchFilter&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>An array of <a>SearchFilter</a> objects that specify which resources can be
     * included in the results of queries made using this view.</p>
     */
    inline View& WithFilters(const SearchFilter& value) { SetFilters(value); return *this;}

    /**
     * <p>An array of <a>SearchFilter</a> objects that specify which resources can be
     * included in the results of queries made using this view.</p>
     */
    inline View& WithFilters(SearchFilter&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>A structure that contains additional information about the view.</p>
     */
    inline const Aws::Vector<IncludedProperty>& GetIncludedProperties() const{ return m_includedProperties; }

    /**
     * <p>A structure that contains additional information about the view.</p>
     */
    inline bool IncludedPropertiesHasBeenSet() const { return m_includedPropertiesHasBeenSet; }

    /**
     * <p>A structure that contains additional information about the view.</p>
     */
    inline void SetIncludedProperties(const Aws::Vector<IncludedProperty>& value) { m_includedPropertiesHasBeenSet = true; m_includedProperties = value; }

    /**
     * <p>A structure that contains additional information about the view.</p>
     */
    inline void SetIncludedProperties(Aws::Vector<IncludedProperty>&& value) { m_includedPropertiesHasBeenSet = true; m_includedProperties = std::move(value); }

    /**
     * <p>A structure that contains additional information about the view.</p>
     */
    inline View& WithIncludedProperties(const Aws::Vector<IncludedProperty>& value) { SetIncludedProperties(value); return *this;}

    /**
     * <p>A structure that contains additional information about the view.</p>
     */
    inline View& WithIncludedProperties(Aws::Vector<IncludedProperty>&& value) { SetIncludedProperties(std::move(value)); return *this;}

    /**
     * <p>A structure that contains additional information about the view.</p>
     */
    inline View& AddIncludedProperties(const IncludedProperty& value) { m_includedPropertiesHasBeenSet = true; m_includedProperties.push_back(value); return *this; }

    /**
     * <p>A structure that contains additional information about the view.</p>
     */
    inline View& AddIncludedProperties(IncludedProperty&& value) { m_includedPropertiesHasBeenSet = true; m_includedProperties.push_back(std::move(value)); return *this; }


    /**
     * <p>The date and time when this view was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The date and time when this view was last modified.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>The date and time when this view was last modified.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The date and time when this view was last modified.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The date and time when this view was last modified.</p>
     */
    inline View& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The date and time when this view was last modified.</p>
     */
    inline View& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services account that owns this view.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The Amazon Web Services account that owns this view.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The Amazon Web Services account that owns this view.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The Amazon Web Services account that owns this view.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The Amazon Web Services account that owns this view.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The Amazon Web Services account that owns this view.</p>
     */
    inline View& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The Amazon Web Services account that owns this view.</p>
     */
    inline View& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account that owns this view.</p>
     */
    inline View& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of an Amazon Web Services account, an organization, or
     * an organizational unit (OU) that specifies whether this view includes resources
     * from only the specified Amazon Web Services account, all accounts in the
     * specified organization, or all accounts in the specified OU.</p> <p>If not
     * specified, the value defaults to the Amazon Web Services account used to call
     * this operation.</p>
     */
    inline const Aws::String& GetScope() const{ return m_scope; }

    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of an Amazon Web Services account, an organization, or
     * an organizational unit (OU) that specifies whether this view includes resources
     * from only the specified Amazon Web Services account, all accounts in the
     * specified organization, or all accounts in the specified OU.</p> <p>If not
     * specified, the value defaults to the Amazon Web Services account used to call
     * this operation.</p>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of an Amazon Web Services account, an organization, or
     * an organizational unit (OU) that specifies whether this view includes resources
     * from only the specified Amazon Web Services account, all accounts in the
     * specified organization, or all accounts in the specified OU.</p> <p>If not
     * specified, the value defaults to the Amazon Web Services account used to call
     * this operation.</p>
     */
    inline void SetScope(const Aws::String& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of an Amazon Web Services account, an organization, or
     * an organizational unit (OU) that specifies whether this view includes resources
     * from only the specified Amazon Web Services account, all accounts in the
     * specified organization, or all accounts in the specified OU.</p> <p>If not
     * specified, the value defaults to the Amazon Web Services account used to call
     * this operation.</p>
     */
    inline void SetScope(Aws::String&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of an Amazon Web Services account, an organization, or
     * an organizational unit (OU) that specifies whether this view includes resources
     * from only the specified Amazon Web Services account, all accounts in the
     * specified organization, or all accounts in the specified OU.</p> <p>If not
     * specified, the value defaults to the Amazon Web Services account used to call
     * this operation.</p>
     */
    inline void SetScope(const char* value) { m_scopeHasBeenSet = true; m_scope.assign(value); }

    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of an Amazon Web Services account, an organization, or
     * an organizational unit (OU) that specifies whether this view includes resources
     * from only the specified Amazon Web Services account, all accounts in the
     * specified organization, or all accounts in the specified OU.</p> <p>If not
     * specified, the value defaults to the Amazon Web Services account used to call
     * this operation.</p>
     */
    inline View& WithScope(const Aws::String& value) { SetScope(value); return *this;}

    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of an Amazon Web Services account, an organization, or
     * an organizational unit (OU) that specifies whether this view includes resources
     * from only the specified Amazon Web Services account, all accounts in the
     * specified organization, or all accounts in the specified OU.</p> <p>If not
     * specified, the value defaults to the Amazon Web Services account used to call
     * this operation.</p>
     */
    inline View& WithScope(Aws::String&& value) { SetScope(std::move(value)); return *this;}

    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of an Amazon Web Services account, an organization, or
     * an organizational unit (OU) that specifies whether this view includes resources
     * from only the specified Amazon Web Services account, all accounts in the
     * specified organization, or all accounts in the specified OU.</p> <p>If not
     * specified, the value defaults to the Amazon Web Services account used to call
     * this operation.</p>
     */
    inline View& WithScope(const char* value) { SetScope(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view.</p>
     */
    inline const Aws::String& GetViewArn() const{ return m_viewArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view.</p>
     */
    inline bool ViewArnHasBeenSet() const { return m_viewArnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view.</p>
     */
    inline void SetViewArn(const Aws::String& value) { m_viewArnHasBeenSet = true; m_viewArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view.</p>
     */
    inline void SetViewArn(Aws::String&& value) { m_viewArnHasBeenSet = true; m_viewArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view.</p>
     */
    inline void SetViewArn(const char* value) { m_viewArnHasBeenSet = true; m_viewArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view.</p>
     */
    inline View& WithViewArn(const Aws::String& value) { SetViewArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view.</p>
     */
    inline View& WithViewArn(Aws::String&& value) { SetViewArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view.</p>
     */
    inline View& WithViewArn(const char* value) { SetViewArn(value); return *this;}

  private:

    SearchFilter m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<IncludedProperty> m_includedProperties;
    bool m_includedPropertiesHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::String m_viewArn;
    bool m_viewArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
