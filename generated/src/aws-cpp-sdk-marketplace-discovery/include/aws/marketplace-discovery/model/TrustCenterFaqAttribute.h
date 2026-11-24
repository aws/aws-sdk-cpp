/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {

/**
 * <p>A frequently asked question that a trust center publishes.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/TrustCenterFaqAttribute">AWS
 * API Reference</a></p>
 */
class TrustCenterFaqAttribute {
 public:
  AWS_MARKETPLACEDISCOVERY_API TrustCenterFaqAttribute() = default;
  AWS_MARKETPLACEDISCOVERY_API TrustCenterFaqAttribute(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API TrustCenterFaqAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The question.</p>
   */
  inline const Aws::String& GetQuestion() const { return m_question; }
  inline bool QuestionHasBeenSet() const { return m_questionHasBeenSet; }
  template <typename QuestionT = Aws::String>
  void SetQuestion(QuestionT&& value) {
    m_questionHasBeenSet = true;
    m_question = std::forward<QuestionT>(value);
  }
  template <typename QuestionT = Aws::String>
  TrustCenterFaqAttribute& WithQuestion(QuestionT&& value) {
    SetQuestion(std::forward<QuestionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The answer.</p>
   */
  inline const Aws::String& GetAnswer() const { return m_answer; }
  inline bool AnswerHasBeenSet() const { return m_answerHasBeenSet; }
  template <typename AnswerT = Aws::String>
  void SetAnswer(AnswerT&& value) {
    m_answerHasBeenSet = true;
    m_answer = std::forward<AnswerT>(value);
  }
  template <typename AnswerT = Aws::String>
  TrustCenterFaqAttribute& WithAnswer(AnswerT&& value) {
    SetAnswer(std::forward<AnswerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subject area of the question.</p>
   */
  inline const Aws::String& GetSubjectArea() const { return m_subjectArea; }
  inline bool SubjectAreaHasBeenSet() const { return m_subjectAreaHasBeenSet; }
  template <typename SubjectAreaT = Aws::String>
  void SetSubjectArea(SubjectAreaT&& value) {
    m_subjectAreaHasBeenSet = true;
    m_subjectArea = std::forward<SubjectAreaT>(value);
  }
  template <typename SubjectAreaT = Aws::String>
  TrustCenterFaqAttribute& WithSubjectArea(SubjectAreaT&& value) {
    SetSubjectArea(std::forward<SubjectAreaT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_question;

  Aws::String m_answer;

  Aws::String m_subjectArea;
  bool m_questionHasBeenSet = false;
  bool m_answerHasBeenSet = false;
  bool m_subjectAreaHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
