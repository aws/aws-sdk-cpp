/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>

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
 * <p>A question that you can answer to get a better recommendation, and the reason
 * that it's asked.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/FollowUpQuestion">AWS
 * API Reference</a></p>
 */
class FollowUpQuestion {
 public:
  AWS_MARKETPLACECATALOG_API FollowUpQuestion() = default;
  AWS_MARKETPLACECATALOG_API FollowUpQuestion(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API FollowUpQuestion& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The question to answer.</p>
   */
  inline const Aws::String& GetQuestion() const { return m_question; }
  inline bool QuestionHasBeenSet() const { return m_questionHasBeenSet; }
  template <typename QuestionT = Aws::String>
  void SetQuestion(QuestionT&& value) {
    m_questionHasBeenSet = true;
    m_question = std::forward<QuestionT>(value);
  }
  template <typename QuestionT = Aws::String>
  FollowUpQuestion& WithQuestion(QuestionT&& value) {
    SetQuestion(std::forward<QuestionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Why the question is asked.</p>
   */
  inline const Aws::String& GetJustification() const { return m_justification; }
  inline bool JustificationHasBeenSet() const { return m_justificationHasBeenSet; }
  template <typename JustificationT = Aws::String>
  void SetJustification(JustificationT&& value) {
    m_justificationHasBeenSet = true;
    m_justification = std::forward<JustificationT>(value);
  }
  template <typename JustificationT = Aws::String>
  FollowUpQuestion& WithJustification(JustificationT&& value) {
    SetJustification(std::forward<JustificationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_question;

  Aws::String m_justification;
  bool m_questionHasBeenSet = false;
  bool m_justificationHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
