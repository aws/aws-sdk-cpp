/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workdocs/model/LongRangeType.h>
#include <aws/workdocs/model/DateRangeType.h>
#include <aws/workdocs/model/LanguageCodeType.h>
#include <aws/workdocs/model/ContentCategoryType.h>
#include <aws/workdocs/model/SearchResourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/SearchPrincipalType.h>
#include <aws/workdocs/model/SearchCollectionType.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Filters results based on entity metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/Filters">AWS
   * API Reference</a></p>
   */
  class Filters
  {
  public:
    AWS_WORKDOCS_API Filters() = default;
    AWS_WORKDOCS_API Filters(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Filters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filters by the locale of the content or comment.</p>
     */
    inline const Aws::Vector<LanguageCodeType>& GetTextLocales() const { return m_textLocales; }
    inline bool TextLocalesHasBeenSet() const { return m_textLocalesHasBeenSet; }
    template<typename TextLocalesT = Aws::Vector<LanguageCodeType>>
    void SetTextLocales(TextLocalesT&& value) { m_textLocalesHasBeenSet = true; m_textLocales = std::forward<TextLocalesT>(value); }
    template<typename TextLocalesT = Aws::Vector<LanguageCodeType>>
    Filters& WithTextLocales(TextLocalesT&& value) { SetTextLocales(std::forward<TextLocalesT>(value)); return *this;}
    inline Filters& AddTextLocales(LanguageCodeType value) { m_textLocalesHasBeenSet = true; m_textLocales.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters by content category.</p>
     */
    inline const Aws::Vector<ContentCategoryType>& GetContentCategories() const { return m_contentCategories; }
    inline bool ContentCategoriesHasBeenSet() const { return m_contentCategoriesHasBeenSet; }
    template<typename ContentCategoriesT = Aws::Vector<ContentCategoryType>>
    void SetContentCategories(ContentCategoriesT&& value) { m_contentCategoriesHasBeenSet = true; m_contentCategories = std::forward<ContentCategoriesT>(value); }
    template<typename ContentCategoriesT = Aws::Vector<ContentCategoryType>>
    Filters& WithContentCategories(ContentCategoriesT&& value) { SetContentCategories(std::forward<ContentCategoriesT>(value)); return *this;}
    inline Filters& AddContentCategories(ContentCategoryType value) { m_contentCategoriesHasBeenSet = true; m_contentCategories.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters based on entity type.</p>
     */
    inline const Aws::Vector<SearchResourceType>& GetResourceTypes() const { return m_resourceTypes; }
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
    template<typename ResourceTypesT = Aws::Vector<SearchResourceType>>
    void SetResourceTypes(ResourceTypesT&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::forward<ResourceTypesT>(value); }
    template<typename ResourceTypesT = Aws::Vector<SearchResourceType>>
    Filters& WithResourceTypes(ResourceTypesT&& value) { SetResourceTypes(std::forward<ResourceTypesT>(value)); return *this;}
    inline Filters& AddResourceTypes(SearchResourceType value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filter by labels using exact match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabels() const { return m_labels; }
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }
    template<typename LabelsT = Aws::Vector<Aws::String>>
    void SetLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels = std::forward<LabelsT>(value); }
    template<typename LabelsT = Aws::Vector<Aws::String>>
    Filters& WithLabels(LabelsT&& value) { SetLabels(std::forward<LabelsT>(value)); return *this;}
    template<typename LabelsT = Aws::String>
    Filters& AddLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels.emplace_back(std::forward<LabelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filter based on UserIds or GroupIds.</p>
     */
    inline const Aws::Vector<SearchPrincipalType>& GetPrincipals() const { return m_principals; }
    inline bool PrincipalsHasBeenSet() const { return m_principalsHasBeenSet; }
    template<typename PrincipalsT = Aws::Vector<SearchPrincipalType>>
    void SetPrincipals(PrincipalsT&& value) { m_principalsHasBeenSet = true; m_principals = std::forward<PrincipalsT>(value); }
    template<typename PrincipalsT = Aws::Vector<SearchPrincipalType>>
    Filters& WithPrincipals(PrincipalsT&& value) { SetPrincipals(std::forward<PrincipalsT>(value)); return *this;}
    template<typename PrincipalsT = SearchPrincipalType>
    Filters& AddPrincipals(PrincipalsT&& value) { m_principalsHasBeenSet = true; m_principals.emplace_back(std::forward<PrincipalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filter based on resource’s path.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAncestorIds() const { return m_ancestorIds; }
    inline bool AncestorIdsHasBeenSet() const { return m_ancestorIdsHasBeenSet; }
    template<typename AncestorIdsT = Aws::Vector<Aws::String>>
    void SetAncestorIds(AncestorIdsT&& value) { m_ancestorIdsHasBeenSet = true; m_ancestorIds = std::forward<AncestorIdsT>(value); }
    template<typename AncestorIdsT = Aws::Vector<Aws::String>>
    Filters& WithAncestorIds(AncestorIdsT&& value) { SetAncestorIds(std::forward<AncestorIdsT>(value)); return *this;}
    template<typename AncestorIdsT = Aws::String>
    Filters& AddAncestorIds(AncestorIdsT&& value) { m_ancestorIdsHasBeenSet = true; m_ancestorIds.emplace_back(std::forward<AncestorIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filter based on file groupings.</p>
     */
    inline const Aws::Vector<SearchCollectionType>& GetSearchCollectionTypes() const { return m_searchCollectionTypes; }
    inline bool SearchCollectionTypesHasBeenSet() const { return m_searchCollectionTypesHasBeenSet; }
    template<typename SearchCollectionTypesT = Aws::Vector<SearchCollectionType>>
    void SetSearchCollectionTypes(SearchCollectionTypesT&& value) { m_searchCollectionTypesHasBeenSet = true; m_searchCollectionTypes = std::forward<SearchCollectionTypesT>(value); }
    template<typename SearchCollectionTypesT = Aws::Vector<SearchCollectionType>>
    Filters& WithSearchCollectionTypes(SearchCollectionTypesT&& value) { SetSearchCollectionTypes(std::forward<SearchCollectionTypesT>(value)); return *this;}
    inline Filters& AddSearchCollectionTypes(SearchCollectionType value) { m_searchCollectionTypesHasBeenSet = true; m_searchCollectionTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filter based on size (in bytes).</p>
     */
    inline const LongRangeType& GetSizeRange() const { return m_sizeRange; }
    inline bool SizeRangeHasBeenSet() const { return m_sizeRangeHasBeenSet; }
    template<typename SizeRangeT = LongRangeType>
    void SetSizeRange(SizeRangeT&& value) { m_sizeRangeHasBeenSet = true; m_sizeRange = std::forward<SizeRangeT>(value); }
    template<typename SizeRangeT = LongRangeType>
    Filters& WithSizeRange(SizeRangeT&& value) { SetSizeRange(std::forward<SizeRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter based on resource’s creation timestamp.</p>
     */
    inline const DateRangeType& GetCreatedRange() const { return m_createdRange; }
    inline bool CreatedRangeHasBeenSet() const { return m_createdRangeHasBeenSet; }
    template<typename CreatedRangeT = DateRangeType>
    void SetCreatedRange(CreatedRangeT&& value) { m_createdRangeHasBeenSet = true; m_createdRange = std::forward<CreatedRangeT>(value); }
    template<typename CreatedRangeT = DateRangeType>
    Filters& WithCreatedRange(CreatedRangeT&& value) { SetCreatedRange(std::forward<CreatedRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter based on resource’s modified timestamp.</p>
     */
    inline const DateRangeType& GetModifiedRange() const { return m_modifiedRange; }
    inline bool ModifiedRangeHasBeenSet() const { return m_modifiedRangeHasBeenSet; }
    template<typename ModifiedRangeT = DateRangeType>
    void SetModifiedRange(ModifiedRangeT&& value) { m_modifiedRangeHasBeenSet = true; m_modifiedRange = std::forward<ModifiedRangeT>(value); }
    template<typename ModifiedRangeT = DateRangeType>
    Filters& WithModifiedRange(ModifiedRangeT&& value) { SetModifiedRange(std::forward<ModifiedRangeT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LanguageCodeType> m_textLocales;
    bool m_textLocalesHasBeenSet = false;

    Aws::Vector<ContentCategoryType> m_contentCategories;
    bool m_contentCategoriesHasBeenSet = false;

    Aws::Vector<SearchResourceType> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_labels;
    bool m_labelsHasBeenSet = false;

    Aws::Vector<SearchPrincipalType> m_principals;
    bool m_principalsHasBeenSet = false;

    Aws::Vector<Aws::String> m_ancestorIds;
    bool m_ancestorIdsHasBeenSet = false;

    Aws::Vector<SearchCollectionType> m_searchCollectionTypes;
    bool m_searchCollectionTypesHasBeenSet = false;

    LongRangeType m_sizeRange;
    bool m_sizeRangeHasBeenSet = false;

    DateRangeType m_createdRange;
    bool m_createdRangeHasBeenSet = false;

    DateRangeType m_modifiedRange;
    bool m_modifiedRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
