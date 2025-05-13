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
    AWS_RESOURCEEXPLORER2_API CreateViewRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateView"; }

    AWS_RESOURCEEXPLORER2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>This value helps ensure idempotency. Resource Explorer uses this value to
     * prevent the accidental creation of duplicate versions. We recommend that you
     * generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type
     * value</a> to ensure the uniqueness of your views.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateViewRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const SearchFilter& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = SearchFilter>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = SearchFilter>
    CreateViewRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies optional fields that you want included in search results from this
     * view. It is a list of objects that each describe a field to include.</p> <p>The
     * default is an empty list, with no optional fields included in the results.</p>
     */
    inline const Aws::Vector<IncludedProperty>& GetIncludedProperties() const { return m_includedProperties; }
    inline bool IncludedPropertiesHasBeenSet() const { return m_includedPropertiesHasBeenSet; }
    template<typename IncludedPropertiesT = Aws::Vector<IncludedProperty>>
    void SetIncludedProperties(IncludedPropertiesT&& value) { m_includedPropertiesHasBeenSet = true; m_includedProperties = std::forward<IncludedPropertiesT>(value); }
    template<typename IncludedPropertiesT = Aws::Vector<IncludedProperty>>
    CreateViewRequest& WithIncludedProperties(IncludedPropertiesT&& value) { SetIncludedProperties(std::forward<IncludedPropertiesT>(value)); return *this;}
    template<typename IncludedPropertiesT = IncludedProperty>
    CreateViewRequest& AddIncludedProperties(IncludedPropertiesT&& value) { m_includedPropertiesHasBeenSet = true; m_includedProperties.emplace_back(std::forward<IncludedPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The root ARN of the account, an organizational unit (OU), or an organization
     * ARN. If left empty, the default is account.</p>
     */
    inline const Aws::String& GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    template<typename ScopeT = Aws::String>
    void SetScope(ScopeT&& value) { m_scopeHasBeenSet = true; m_scope = std::forward<ScopeT>(value); }
    template<typename ScopeT = Aws::String>
    CreateViewRequest& WithScope(ScopeT&& value) { SetScope(std::forward<ScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tag key and value pairs that are attached to the view.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateViewRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateViewRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The name of the new view. This name appears in the list of views in Resource
     * Explorer.</p> <p>The name must be no more than 64 characters long, and can
     * include letters, digits, and the dash (-) character. The name must be unique
     * within its Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetViewName() const { return m_viewName; }
    inline bool ViewNameHasBeenSet() const { return m_viewNameHasBeenSet; }
    template<typename ViewNameT = Aws::String>
    void SetViewName(ViewNameT&& value) { m_viewNameHasBeenSet = true; m_viewName = std::forward<ViewNameT>(value); }
    template<typename ViewNameT = Aws::String>
    CreateViewRequest& WithViewName(ViewNameT&& value) { SetViewName(std::forward<ViewNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    SearchFilter m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<IncludedProperty> m_includedProperties;
    bool m_includedPropertiesHasBeenSet = false;

    Aws::String m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_viewName;
    bool m_viewNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
