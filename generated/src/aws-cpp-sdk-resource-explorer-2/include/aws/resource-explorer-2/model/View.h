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
    AWS_RESOURCEEXPLORER2_API View() = default;
    AWS_RESOURCEEXPLORER2_API View(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API View& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of <a>SearchFilter</a> objects that specify which resources can be
     * included in the results of queries made using this view.</p>
     */
    inline const SearchFilter& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = SearchFilter>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = SearchFilter>
    View& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains additional information about the view.</p>
     */
    inline const Aws::Vector<IncludedProperty>& GetIncludedProperties() const { return m_includedProperties; }
    inline bool IncludedPropertiesHasBeenSet() const { return m_includedPropertiesHasBeenSet; }
    template<typename IncludedPropertiesT = Aws::Vector<IncludedProperty>>
    void SetIncludedProperties(IncludedPropertiesT&& value) { m_includedPropertiesHasBeenSet = true; m_includedProperties = std::forward<IncludedPropertiesT>(value); }
    template<typename IncludedPropertiesT = Aws::Vector<IncludedProperty>>
    View& WithIncludedProperties(IncludedPropertiesT&& value) { SetIncludedProperties(std::forward<IncludedPropertiesT>(value)); return *this;}
    template<typename IncludedPropertiesT = IncludedProperty>
    View& AddIncludedProperties(IncludedPropertiesT&& value) { m_includedPropertiesHasBeenSet = true; m_includedProperties.emplace_back(std::forward<IncludedPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time when this view was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    View& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account that owns this view.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    View& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    template<typename ScopeT = Aws::String>
    void SetScope(ScopeT&& value) { m_scopeHasBeenSet = true; m_scope = std::forward<ScopeT>(value); }
    template<typename ScopeT = Aws::String>
    View& WithScope(ScopeT&& value) { SetScope(std::forward<ScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view.</p>
     */
    inline const Aws::String& GetViewArn() const { return m_viewArn; }
    inline bool ViewArnHasBeenSet() const { return m_viewArnHasBeenSet; }
    template<typename ViewArnT = Aws::String>
    void SetViewArn(ViewArnT&& value) { m_viewArnHasBeenSet = true; m_viewArn = std::forward<ViewArnT>(value); }
    template<typename ViewArnT = Aws::String>
    View& WithViewArn(ViewArnT&& value) { SetViewArn(std::forward<ViewArnT>(value)); return *this;}
    ///@}
  private:

    SearchFilter m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<IncludedProperty> m_includedProperties;
    bool m_includedPropertiesHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
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
