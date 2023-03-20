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
    AWS_WORKDOCS_API Filters();
    AWS_WORKDOCS_API Filters(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Filters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filters by the locale of the content or comment.</p>
     */
    inline const Aws::Vector<LanguageCodeType>& GetTextLocales() const{ return m_textLocales; }

    /**
     * <p>Filters by the locale of the content or comment.</p>
     */
    inline bool TextLocalesHasBeenSet() const { return m_textLocalesHasBeenSet; }

    /**
     * <p>Filters by the locale of the content or comment.</p>
     */
    inline void SetTextLocales(const Aws::Vector<LanguageCodeType>& value) { m_textLocalesHasBeenSet = true; m_textLocales = value; }

    /**
     * <p>Filters by the locale of the content or comment.</p>
     */
    inline void SetTextLocales(Aws::Vector<LanguageCodeType>&& value) { m_textLocalesHasBeenSet = true; m_textLocales = std::move(value); }

    /**
     * <p>Filters by the locale of the content or comment.</p>
     */
    inline Filters& WithTextLocales(const Aws::Vector<LanguageCodeType>& value) { SetTextLocales(value); return *this;}

    /**
     * <p>Filters by the locale of the content or comment.</p>
     */
    inline Filters& WithTextLocales(Aws::Vector<LanguageCodeType>&& value) { SetTextLocales(std::move(value)); return *this;}

    /**
     * <p>Filters by the locale of the content or comment.</p>
     */
    inline Filters& AddTextLocales(const LanguageCodeType& value) { m_textLocalesHasBeenSet = true; m_textLocales.push_back(value); return *this; }

    /**
     * <p>Filters by the locale of the content or comment.</p>
     */
    inline Filters& AddTextLocales(LanguageCodeType&& value) { m_textLocalesHasBeenSet = true; m_textLocales.push_back(std::move(value)); return *this; }


    /**
     * <p>Filters by content category.</p>
     */
    inline const Aws::Vector<ContentCategoryType>& GetContentCategories() const{ return m_contentCategories; }

    /**
     * <p>Filters by content category.</p>
     */
    inline bool ContentCategoriesHasBeenSet() const { return m_contentCategoriesHasBeenSet; }

    /**
     * <p>Filters by content category.</p>
     */
    inline void SetContentCategories(const Aws::Vector<ContentCategoryType>& value) { m_contentCategoriesHasBeenSet = true; m_contentCategories = value; }

    /**
     * <p>Filters by content category.</p>
     */
    inline void SetContentCategories(Aws::Vector<ContentCategoryType>&& value) { m_contentCategoriesHasBeenSet = true; m_contentCategories = std::move(value); }

    /**
     * <p>Filters by content category.</p>
     */
    inline Filters& WithContentCategories(const Aws::Vector<ContentCategoryType>& value) { SetContentCategories(value); return *this;}

    /**
     * <p>Filters by content category.</p>
     */
    inline Filters& WithContentCategories(Aws::Vector<ContentCategoryType>&& value) { SetContentCategories(std::move(value)); return *this;}

    /**
     * <p>Filters by content category.</p>
     */
    inline Filters& AddContentCategories(const ContentCategoryType& value) { m_contentCategoriesHasBeenSet = true; m_contentCategories.push_back(value); return *this; }

    /**
     * <p>Filters by content category.</p>
     */
    inline Filters& AddContentCategories(ContentCategoryType&& value) { m_contentCategoriesHasBeenSet = true; m_contentCategories.push_back(std::move(value)); return *this; }


    /**
     * <p>Filters based on entity type.</p>
     */
    inline const Aws::Vector<SearchResourceType>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p>Filters based on entity type.</p>
     */
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }

    /**
     * <p>Filters based on entity type.</p>
     */
    inline void SetResourceTypes(const Aws::Vector<SearchResourceType>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p>Filters based on entity type.</p>
     */
    inline void SetResourceTypes(Aws::Vector<SearchResourceType>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }

    /**
     * <p>Filters based on entity type.</p>
     */
    inline Filters& WithResourceTypes(const Aws::Vector<SearchResourceType>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>Filters based on entity type.</p>
     */
    inline Filters& WithResourceTypes(Aws::Vector<SearchResourceType>&& value) { SetResourceTypes(std::move(value)); return *this;}

    /**
     * <p>Filters based on entity type.</p>
     */
    inline Filters& AddResourceTypes(const SearchResourceType& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>Filters based on entity type.</p>
     */
    inline Filters& AddResourceTypes(SearchResourceType&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>Filter by labels using exact match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabels() const{ return m_labels; }

    /**
     * <p>Filter by labels using exact match.</p>
     */
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }

    /**
     * <p>Filter by labels using exact match.</p>
     */
    inline void SetLabels(const Aws::Vector<Aws::String>& value) { m_labelsHasBeenSet = true; m_labels = value; }

    /**
     * <p>Filter by labels using exact match.</p>
     */
    inline void SetLabels(Aws::Vector<Aws::String>&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }

    /**
     * <p>Filter by labels using exact match.</p>
     */
    inline Filters& WithLabels(const Aws::Vector<Aws::String>& value) { SetLabels(value); return *this;}

    /**
     * <p>Filter by labels using exact match.</p>
     */
    inline Filters& WithLabels(Aws::Vector<Aws::String>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * <p>Filter by labels using exact match.</p>
     */
    inline Filters& AddLabels(const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }

    /**
     * <p>Filter by labels using exact match.</p>
     */
    inline Filters& AddLabels(Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.push_back(std::move(value)); return *this; }

    /**
     * <p>Filter by labels using exact match.</p>
     */
    inline Filters& AddLabels(const char* value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }


    /**
     * <p>Filter based on UserIds or GroupIds.</p>
     */
    inline const Aws::Vector<SearchPrincipalType>& GetPrincipals() const{ return m_principals; }

    /**
     * <p>Filter based on UserIds or GroupIds.</p>
     */
    inline bool PrincipalsHasBeenSet() const { return m_principalsHasBeenSet; }

    /**
     * <p>Filter based on UserIds or GroupIds.</p>
     */
    inline void SetPrincipals(const Aws::Vector<SearchPrincipalType>& value) { m_principalsHasBeenSet = true; m_principals = value; }

    /**
     * <p>Filter based on UserIds or GroupIds.</p>
     */
    inline void SetPrincipals(Aws::Vector<SearchPrincipalType>&& value) { m_principalsHasBeenSet = true; m_principals = std::move(value); }

    /**
     * <p>Filter based on UserIds or GroupIds.</p>
     */
    inline Filters& WithPrincipals(const Aws::Vector<SearchPrincipalType>& value) { SetPrincipals(value); return *this;}

    /**
     * <p>Filter based on UserIds or GroupIds.</p>
     */
    inline Filters& WithPrincipals(Aws::Vector<SearchPrincipalType>&& value) { SetPrincipals(std::move(value)); return *this;}

    /**
     * <p>Filter based on UserIds or GroupIds.</p>
     */
    inline Filters& AddPrincipals(const SearchPrincipalType& value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }

    /**
     * <p>Filter based on UserIds or GroupIds.</p>
     */
    inline Filters& AddPrincipals(SearchPrincipalType&& value) { m_principalsHasBeenSet = true; m_principals.push_back(std::move(value)); return *this; }


    /**
     * <p>Filter based on resource’s path.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAncestorIds() const{ return m_ancestorIds; }

    /**
     * <p>Filter based on resource’s path.</p>
     */
    inline bool AncestorIdsHasBeenSet() const { return m_ancestorIdsHasBeenSet; }

    /**
     * <p>Filter based on resource’s path.</p>
     */
    inline void SetAncestorIds(const Aws::Vector<Aws::String>& value) { m_ancestorIdsHasBeenSet = true; m_ancestorIds = value; }

    /**
     * <p>Filter based on resource’s path.</p>
     */
    inline void SetAncestorIds(Aws::Vector<Aws::String>&& value) { m_ancestorIdsHasBeenSet = true; m_ancestorIds = std::move(value); }

    /**
     * <p>Filter based on resource’s path.</p>
     */
    inline Filters& WithAncestorIds(const Aws::Vector<Aws::String>& value) { SetAncestorIds(value); return *this;}

    /**
     * <p>Filter based on resource’s path.</p>
     */
    inline Filters& WithAncestorIds(Aws::Vector<Aws::String>&& value) { SetAncestorIds(std::move(value)); return *this;}

    /**
     * <p>Filter based on resource’s path.</p>
     */
    inline Filters& AddAncestorIds(const Aws::String& value) { m_ancestorIdsHasBeenSet = true; m_ancestorIds.push_back(value); return *this; }

    /**
     * <p>Filter based on resource’s path.</p>
     */
    inline Filters& AddAncestorIds(Aws::String&& value) { m_ancestorIdsHasBeenSet = true; m_ancestorIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Filter based on resource’s path.</p>
     */
    inline Filters& AddAncestorIds(const char* value) { m_ancestorIdsHasBeenSet = true; m_ancestorIds.push_back(value); return *this; }


    /**
     * <p>Filter based on file groupings.</p>
     */
    inline const Aws::Vector<SearchCollectionType>& GetSearchCollectionTypes() const{ return m_searchCollectionTypes; }

    /**
     * <p>Filter based on file groupings.</p>
     */
    inline bool SearchCollectionTypesHasBeenSet() const { return m_searchCollectionTypesHasBeenSet; }

    /**
     * <p>Filter based on file groupings.</p>
     */
    inline void SetSearchCollectionTypes(const Aws::Vector<SearchCollectionType>& value) { m_searchCollectionTypesHasBeenSet = true; m_searchCollectionTypes = value; }

    /**
     * <p>Filter based on file groupings.</p>
     */
    inline void SetSearchCollectionTypes(Aws::Vector<SearchCollectionType>&& value) { m_searchCollectionTypesHasBeenSet = true; m_searchCollectionTypes = std::move(value); }

    /**
     * <p>Filter based on file groupings.</p>
     */
    inline Filters& WithSearchCollectionTypes(const Aws::Vector<SearchCollectionType>& value) { SetSearchCollectionTypes(value); return *this;}

    /**
     * <p>Filter based on file groupings.</p>
     */
    inline Filters& WithSearchCollectionTypes(Aws::Vector<SearchCollectionType>&& value) { SetSearchCollectionTypes(std::move(value)); return *this;}

    /**
     * <p>Filter based on file groupings.</p>
     */
    inline Filters& AddSearchCollectionTypes(const SearchCollectionType& value) { m_searchCollectionTypesHasBeenSet = true; m_searchCollectionTypes.push_back(value); return *this; }

    /**
     * <p>Filter based on file groupings.</p>
     */
    inline Filters& AddSearchCollectionTypes(SearchCollectionType&& value) { m_searchCollectionTypesHasBeenSet = true; m_searchCollectionTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>Filter based on size (in bytes).</p>
     */
    inline const LongRangeType& GetSizeRange() const{ return m_sizeRange; }

    /**
     * <p>Filter based on size (in bytes).</p>
     */
    inline bool SizeRangeHasBeenSet() const { return m_sizeRangeHasBeenSet; }

    /**
     * <p>Filter based on size (in bytes).</p>
     */
    inline void SetSizeRange(const LongRangeType& value) { m_sizeRangeHasBeenSet = true; m_sizeRange = value; }

    /**
     * <p>Filter based on size (in bytes).</p>
     */
    inline void SetSizeRange(LongRangeType&& value) { m_sizeRangeHasBeenSet = true; m_sizeRange = std::move(value); }

    /**
     * <p>Filter based on size (in bytes).</p>
     */
    inline Filters& WithSizeRange(const LongRangeType& value) { SetSizeRange(value); return *this;}

    /**
     * <p>Filter based on size (in bytes).</p>
     */
    inline Filters& WithSizeRange(LongRangeType&& value) { SetSizeRange(std::move(value)); return *this;}


    /**
     * <p>Filter based on resource’s creation timestamp.</p>
     */
    inline const DateRangeType& GetCreatedRange() const{ return m_createdRange; }

    /**
     * <p>Filter based on resource’s creation timestamp.</p>
     */
    inline bool CreatedRangeHasBeenSet() const { return m_createdRangeHasBeenSet; }

    /**
     * <p>Filter based on resource’s creation timestamp.</p>
     */
    inline void SetCreatedRange(const DateRangeType& value) { m_createdRangeHasBeenSet = true; m_createdRange = value; }

    /**
     * <p>Filter based on resource’s creation timestamp.</p>
     */
    inline void SetCreatedRange(DateRangeType&& value) { m_createdRangeHasBeenSet = true; m_createdRange = std::move(value); }

    /**
     * <p>Filter based on resource’s creation timestamp.</p>
     */
    inline Filters& WithCreatedRange(const DateRangeType& value) { SetCreatedRange(value); return *this;}

    /**
     * <p>Filter based on resource’s creation timestamp.</p>
     */
    inline Filters& WithCreatedRange(DateRangeType&& value) { SetCreatedRange(std::move(value)); return *this;}


    /**
     * <p>Filter based on resource’s modified timestamp.</p>
     */
    inline const DateRangeType& GetModifiedRange() const{ return m_modifiedRange; }

    /**
     * <p>Filter based on resource’s modified timestamp.</p>
     */
    inline bool ModifiedRangeHasBeenSet() const { return m_modifiedRangeHasBeenSet; }

    /**
     * <p>Filter based on resource’s modified timestamp.</p>
     */
    inline void SetModifiedRange(const DateRangeType& value) { m_modifiedRangeHasBeenSet = true; m_modifiedRange = value; }

    /**
     * <p>Filter based on resource’s modified timestamp.</p>
     */
    inline void SetModifiedRange(DateRangeType&& value) { m_modifiedRangeHasBeenSet = true; m_modifiedRange = std::move(value); }

    /**
     * <p>Filter based on resource’s modified timestamp.</p>
     */
    inline Filters& WithModifiedRange(const DateRangeType& value) { SetModifiedRange(value); return *this;}

    /**
     * <p>Filter based on resource’s modified timestamp.</p>
     */
    inline Filters& WithModifiedRange(DateRangeType&& value) { SetModifiedRange(std::move(value)); return *this;}

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
