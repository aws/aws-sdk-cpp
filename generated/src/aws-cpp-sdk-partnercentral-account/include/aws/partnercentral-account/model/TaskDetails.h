/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/IndustrySegment.h>
#include <aws/partnercentral-account/model/LocalizedContent.h>
#include <aws/partnercentral-account/model/PrimarySolutionType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralAccount {
namespace Model {

/**
 * <p>Contains detailed information about a profile update task including the
 * changes to be made.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/TaskDetails">AWS
 * API Reference</a></p>
 */
class TaskDetails {
 public:
  AWS_PARTNERCENTRALACCOUNT_API TaskDetails() = default;
  AWS_PARTNERCENTRALACCOUNT_API TaskDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API TaskDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The updated display name for the partner profile.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  TaskDetails& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated description for the partner profile.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  TaskDetails& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated website URL for the partner profile.</p>
   */
  inline const Aws::String& GetWebsiteUrl() const { return m_websiteUrl; }
  inline bool WebsiteUrlHasBeenSet() const { return m_websiteUrlHasBeenSet; }
  template <typename WebsiteUrlT = Aws::String>
  void SetWebsiteUrl(WebsiteUrlT&& value) {
    m_websiteUrlHasBeenSet = true;
    m_websiteUrl = std::forward<WebsiteUrlT>(value);
  }
  template <typename WebsiteUrlT = Aws::String>
  TaskDetails& WithWebsiteUrl(WebsiteUrlT&& value) {
    SetWebsiteUrl(std::forward<WebsiteUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated logo URL for the partner profile.</p>
   */
  inline const Aws::String& GetLogoUrl() const { return m_logoUrl; }
  inline bool LogoUrlHasBeenSet() const { return m_logoUrlHasBeenSet; }
  template <typename LogoUrlT = Aws::String>
  void SetLogoUrl(LogoUrlT&& value) {
    m_logoUrlHasBeenSet = true;
    m_logoUrl = std::forward<LogoUrlT>(value);
  }
  template <typename LogoUrlT = Aws::String>
  TaskDetails& WithLogoUrl(LogoUrlT&& value) {
    SetLogoUrl(std::forward<LogoUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated primary solution type for the partner profile.</p>
   */
  inline PrimarySolutionType GetPrimarySolutionType() const { return m_primarySolutionType; }
  inline bool PrimarySolutionTypeHasBeenSet() const { return m_primarySolutionTypeHasBeenSet; }
  inline void SetPrimarySolutionType(PrimarySolutionType value) {
    m_primarySolutionTypeHasBeenSet = true;
    m_primarySolutionType = value;
  }
  inline TaskDetails& WithPrimarySolutionType(PrimarySolutionType value) {
    SetPrimarySolutionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated industry segments for the partner profile.</p>
   */
  inline const Aws::Vector<IndustrySegment>& GetIndustrySegments() const { return m_industrySegments; }
  inline bool IndustrySegmentsHasBeenSet() const { return m_industrySegmentsHasBeenSet; }
  template <typename IndustrySegmentsT = Aws::Vector<IndustrySegment>>
  void SetIndustrySegments(IndustrySegmentsT&& value) {
    m_industrySegmentsHasBeenSet = true;
    m_industrySegments = std::forward<IndustrySegmentsT>(value);
  }
  template <typename IndustrySegmentsT = Aws::Vector<IndustrySegment>>
  TaskDetails& WithIndustrySegments(IndustrySegmentsT&& value) {
    SetIndustrySegments(std::forward<IndustrySegmentsT>(value));
    return *this;
  }
  inline TaskDetails& AddIndustrySegments(IndustrySegment value) {
    m_industrySegmentsHasBeenSet = true;
    m_industrySegments.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated translation source locale for the partner profile.</p>
   */
  inline const Aws::String& GetTranslationSourceLocale() const { return m_translationSourceLocale; }
  inline bool TranslationSourceLocaleHasBeenSet() const { return m_translationSourceLocaleHasBeenSet; }
  template <typename TranslationSourceLocaleT = Aws::String>
  void SetTranslationSourceLocale(TranslationSourceLocaleT&& value) {
    m_translationSourceLocaleHasBeenSet = true;
    m_translationSourceLocale = std::forward<TranslationSourceLocaleT>(value);
  }
  template <typename TranslationSourceLocaleT = Aws::String>
  TaskDetails& WithTranslationSourceLocale(TranslationSourceLocaleT&& value) {
    SetTranslationSourceLocale(std::forward<TranslationSourceLocaleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated localized content for the partner profile.</p>
   */
  inline const Aws::Vector<LocalizedContent>& GetLocalizedContents() const { return m_localizedContents; }
  inline bool LocalizedContentsHasBeenSet() const { return m_localizedContentsHasBeenSet; }
  template <typename LocalizedContentsT = Aws::Vector<LocalizedContent>>
  void SetLocalizedContents(LocalizedContentsT&& value) {
    m_localizedContentsHasBeenSet = true;
    m_localizedContents = std::forward<LocalizedContentsT>(value);
  }
  template <typename LocalizedContentsT = Aws::Vector<LocalizedContent>>
  TaskDetails& WithLocalizedContents(LocalizedContentsT&& value) {
    SetLocalizedContents(std::forward<LocalizedContentsT>(value));
    return *this;
  }
  template <typename LocalizedContentsT = LocalizedContent>
  TaskDetails& AddLocalizedContents(LocalizedContentsT&& value) {
    m_localizedContentsHasBeenSet = true;
    m_localizedContents.emplace_back(std::forward<LocalizedContentsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_displayName;

  Aws::String m_description;

  Aws::String m_websiteUrl;

  Aws::String m_logoUrl;

  PrimarySolutionType m_primarySolutionType{PrimarySolutionType::NOT_SET};

  Aws::Vector<IndustrySegment> m_industrySegments;

  Aws::String m_translationSourceLocale;

  Aws::Vector<LocalizedContent> m_localizedContents;
  bool m_displayNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_websiteUrlHasBeenSet = false;
  bool m_logoUrlHasBeenSet = false;
  bool m_primarySolutionTypeHasBeenSet = false;
  bool m_industrySegmentsHasBeenSet = false;
  bool m_translationSourceLocaleHasBeenSet = false;
  bool m_localizedContentsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
