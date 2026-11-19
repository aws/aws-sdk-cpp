/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/ContentAlternatives.h>
#include <aws/marketplace-catalog/model/ContentRecommendationStatus.h>
#include <aws/marketplace-catalog/model/FollowUpQuestion.h>
#include <aws/marketplace-catalog/model/ListingFinding.h>

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
 * <p>A recommendation for a listing field.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ContentRecommendation">AWS
 * API Reference</a></p>
 */
class ContentRecommendation {
 public:
  AWS_MARKETPLACECATALOG_API ContentRecommendation() = default;
  AWS_MARKETPLACECATALOG_API ContentRecommendation(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API ContentRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The status of the recommendation. Valid values are:</p> <ul> <li> <p>
   * <code>GENERATED</code> - The service proposed values for the field.</p> </li>
   * <li> <p> <code>INSUFFICIENT_CONTEXT</code> - The service couldn't propose a
   * value. The follow-up questions say what is missing.</p> </li> </ul>
   */
  inline ContentRecommendationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ContentRecommendationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ContentRecommendation& WithStatus(ContentRecommendationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The proposed values for the field, in ranked order.</p>
   */
  inline const ContentAlternatives& GetAlternatives() const { return m_alternatives; }
  inline bool AlternativesHasBeenSet() const { return m_alternativesHasBeenSet; }
  template <typename AlternativesT = ContentAlternatives>
  void SetAlternatives(AlternativesT&& value) {
    m_alternativesHasBeenSet = true;
    m_alternatives = std::forward<AlternativesT>(value);
  }
  template <typename AlternativesT = ContentAlternatives>
  ContentRecommendation& WithAlternatives(AlternativesT&& value) {
    SetAlternatives(std::forward<AlternativesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Questions that you can answer to get a better recommendation. The list is
   * empty if there are none.</p>
   */
  inline const Aws::Vector<FollowUpQuestion>& GetFollowUpQuestions() const { return m_followUpQuestions; }
  inline bool FollowUpQuestionsHasBeenSet() const { return m_followUpQuestionsHasBeenSet; }
  template <typename FollowUpQuestionsT = Aws::Vector<FollowUpQuestion>>
  void SetFollowUpQuestions(FollowUpQuestionsT&& value) {
    m_followUpQuestionsHasBeenSet = true;
    m_followUpQuestions = std::forward<FollowUpQuestionsT>(value);
  }
  template <typename FollowUpQuestionsT = Aws::Vector<FollowUpQuestion>>
  ContentRecommendation& WithFollowUpQuestions(FollowUpQuestionsT&& value) {
    SetFollowUpQuestions(std::forward<FollowUpQuestionsT>(value));
    return *this;
  }
  template <typename FollowUpQuestionsT = FollowUpQuestion>
  ContentRecommendation& AddFollowUpQuestions(FollowUpQuestionsT&& value) {
    m_followUpQuestionsHasBeenSet = true;
    m_followUpQuestions.emplace_back(std::forward<FollowUpQuestionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The checklist of criteria for the field, in ranked order. It includes the
   * criteria that the field passes and the criteria that it fails. The list is empty
   * if there are none.</p>
   */
  inline const Aws::Vector<ListingFinding>& GetFindings() const { return m_findings; }
  inline bool FindingsHasBeenSet() const { return m_findingsHasBeenSet; }
  template <typename FindingsT = Aws::Vector<ListingFinding>>
  void SetFindings(FindingsT&& value) {
    m_findingsHasBeenSet = true;
    m_findings = std::forward<FindingsT>(value);
  }
  template <typename FindingsT = Aws::Vector<ListingFinding>>
  ContentRecommendation& WithFindings(FindingsT&& value) {
    SetFindings(std::forward<FindingsT>(value));
    return *this;
  }
  template <typename FindingsT = ListingFinding>
  ContentRecommendation& AddFindings(FindingsT&& value) {
    m_findingsHasBeenSet = true;
    m_findings.emplace_back(std::forward<FindingsT>(value));
    return *this;
  }
  ///@}
 private:
  ContentRecommendationStatus m_status{ContentRecommendationStatus::NOT_SET};

  ContentAlternatives m_alternatives;

  Aws::Vector<FollowUpQuestion> m_followUpQuestions;

  Aws::Vector<ListingFinding> m_findings;
  bool m_statusHasBeenSet = false;
  bool m_alternativesHasBeenSet = false;
  bool m_followUpQuestionsHasBeenSet = false;
  bool m_findingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
