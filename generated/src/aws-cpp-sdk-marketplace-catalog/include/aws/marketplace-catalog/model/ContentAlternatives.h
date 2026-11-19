/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/AdditionalResourcesAlternative.h>
#include <aws/marketplace-catalog/model/CaseStudiesAlternative.h>
#include <aws/marketplace-catalog/model/TextAlternative.h>
#include <aws/marketplace-catalog/model/TextListAlternative.h>
#include <aws/marketplace-catalog/model/UseCasesAlternative.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceCatalog {
namespace Model {

/**
 * <p>The proposed values for a listing field. Exactly one member is set, depending
 * on the field. The list in that member is empty if the status of the
 * recommendation is <code>INSUFFICIENT_CONTEXT</code>.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ContentAlternatives">AWS
 * API Reference</a></p>
 */
class ContentAlternatives {
 public:
  AWS_MARKETPLACECATALOG_API ContentAlternatives() = default;
  AWS_MARKETPLACECATALOG_API ContentAlternatives(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API ContentAlternatives& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The proposed values for a text field, such as <code>ProductTitle</code> or
   * <code>LongDescription</code>. You can have up to 3 alternatives.</p>
   */
  inline const Aws::Vector<TextAlternative>& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::Vector<TextAlternative>>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::Vector<TextAlternative>>
  ContentAlternatives& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  template <typename TextT = TextAlternative>
  ContentAlternatives& AddText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text.emplace_back(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The proposed values for <code>Highlights</code>, <code>SearchKeywords</code>,
   * or <code>Categories</code>. You can have up to 3 alternatives.</p>
   */
  inline const Aws::Vector<TextListAlternative>& GetTextList() const { return m_textList; }
  inline bool TextListHasBeenSet() const { return m_textListHasBeenSet; }
  template <typename TextListT = Aws::Vector<TextListAlternative>>
  void SetTextList(TextListT&& value) {
    m_textListHasBeenSet = true;
    m_textList = std::forward<TextListT>(value);
  }
  template <typename TextListT = Aws::Vector<TextListAlternative>>
  ContentAlternatives& WithTextList(TextListT&& value) {
    SetTextList(std::forward<TextListT>(value));
    return *this;
  }
  template <typename TextListT = TextListAlternative>
  ContentAlternatives& AddTextList(TextListT&& value) {
    m_textListHasBeenSet = true;
    m_textList.emplace_back(std::forward<TextListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The proposed values for <code>AdditionalResources</code>. You can have up to
   * 3 alternatives.</p>
   */
  inline const Aws::Vector<AdditionalResourcesAlternative>& GetAdditionalResources() const { return m_additionalResources; }
  inline bool AdditionalResourcesHasBeenSet() const { return m_additionalResourcesHasBeenSet; }
  template <typename AdditionalResourcesT = Aws::Vector<AdditionalResourcesAlternative>>
  void SetAdditionalResources(AdditionalResourcesT&& value) {
    m_additionalResourcesHasBeenSet = true;
    m_additionalResources = std::forward<AdditionalResourcesT>(value);
  }
  template <typename AdditionalResourcesT = Aws::Vector<AdditionalResourcesAlternative>>
  ContentAlternatives& WithAdditionalResources(AdditionalResourcesT&& value) {
    SetAdditionalResources(std::forward<AdditionalResourcesT>(value));
    return *this;
  }
  template <typename AdditionalResourcesT = AdditionalResourcesAlternative>
  ContentAlternatives& AddAdditionalResources(AdditionalResourcesT&& value) {
    m_additionalResourcesHasBeenSet = true;
    m_additionalResources.emplace_back(std::forward<AdditionalResourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The proposed values for <code>UseCases</code>. You can have up to 3
   * alternatives.</p>
   */
  inline const Aws::Vector<UseCasesAlternative>& GetUseCases() const { return m_useCases; }
  inline bool UseCasesHasBeenSet() const { return m_useCasesHasBeenSet; }
  template <typename UseCasesT = Aws::Vector<UseCasesAlternative>>
  void SetUseCases(UseCasesT&& value) {
    m_useCasesHasBeenSet = true;
    m_useCases = std::forward<UseCasesT>(value);
  }
  template <typename UseCasesT = Aws::Vector<UseCasesAlternative>>
  ContentAlternatives& WithUseCases(UseCasesT&& value) {
    SetUseCases(std::forward<UseCasesT>(value));
    return *this;
  }
  template <typename UseCasesT = UseCasesAlternative>
  ContentAlternatives& AddUseCases(UseCasesT&& value) {
    m_useCasesHasBeenSet = true;
    m_useCases.emplace_back(std::forward<UseCasesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The proposed values for <code>CaseStudies</code>. You can have up to 3
   * alternatives.</p>
   */
  inline const Aws::Vector<CaseStudiesAlternative>& GetCaseStudies() const { return m_caseStudies; }
  inline bool CaseStudiesHasBeenSet() const { return m_caseStudiesHasBeenSet; }
  template <typename CaseStudiesT = Aws::Vector<CaseStudiesAlternative>>
  void SetCaseStudies(CaseStudiesT&& value) {
    m_caseStudiesHasBeenSet = true;
    m_caseStudies = std::forward<CaseStudiesT>(value);
  }
  template <typename CaseStudiesT = Aws::Vector<CaseStudiesAlternative>>
  ContentAlternatives& WithCaseStudies(CaseStudiesT&& value) {
    SetCaseStudies(std::forward<CaseStudiesT>(value));
    return *this;
  }
  template <typename CaseStudiesT = CaseStudiesAlternative>
  ContentAlternatives& AddCaseStudies(CaseStudiesT&& value) {
    m_caseStudiesHasBeenSet = true;
    m_caseStudies.emplace_back(std::forward<CaseStudiesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<TextAlternative> m_text;

  Aws::Vector<TextListAlternative> m_textList;

  Aws::Vector<AdditionalResourcesAlternative> m_additionalResources;

  Aws::Vector<UseCasesAlternative> m_useCases;

  Aws::Vector<CaseStudiesAlternative> m_caseStudies;
  bool m_textHasBeenSet = false;
  bool m_textListHasBeenSet = false;
  bool m_additionalResourcesHasBeenSet = false;
  bool m_useCasesHasBeenSet = false;
  bool m_caseStudiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
