/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/KbArticle.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>A summary of the remediation target.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RemediationSummaryDetail">AWS
 * API Reference</a></p>
 */
class RemediationSummaryDetail {
 public:
  AWS_SECURITYHUB_API RemediationSummaryDetail() = default;
  AWS_SECURITYHUB_API RemediationSummaryDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API RemediationSummaryDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A summarized action to take for the remediation target.</p>
   */
  inline const Aws::String& GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  template <typename ActionT = Aws::String>
  void SetAction(ActionT&& value) {
    m_actionHasBeenSet = true;
    m_action = std::forward<ActionT>(value);
  }
  template <typename ActionT = Aws::String>
  RemediationSummaryDetail& WithAction(ActionT&& value) {
    SetAction(std::forward<ActionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the remediation target.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  RemediationSummaryDetail& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the effect of this target is immediate.</p>
   */
  inline bool GetIsImmediate() const { return m_isImmediate; }
  inline bool IsImmediateHasBeenSet() const { return m_isImmediateHasBeenSet; }
  inline void SetIsImmediate(bool value) {
    m_isImmediateHasBeenSet = true;
    m_isImmediate = value;
  }
  inline RemediationSummaryDetail& WithIsImmediate(bool value) {
    SetIsImmediate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of steps to be taken after remediation.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPostRemediationSteps() const { return m_postRemediationSteps; }
  inline bool PostRemediationStepsHasBeenSet() const { return m_postRemediationStepsHasBeenSet; }
  template <typename PostRemediationStepsT = Aws::Vector<Aws::String>>
  void SetPostRemediationSteps(PostRemediationStepsT&& value) {
    m_postRemediationStepsHasBeenSet = true;
    m_postRemediationSteps = std::forward<PostRemediationStepsT>(value);
  }
  template <typename PostRemediationStepsT = Aws::Vector<Aws::String>>
  RemediationSummaryDetail& WithPostRemediationSteps(PostRemediationStepsT&& value) {
    SetPostRemediationSteps(std::forward<PostRemediationStepsT>(value));
    return *this;
  }
  template <typename PostRemediationStepsT = Aws::String>
  RemediationSummaryDetail& AddPostRemediationSteps(PostRemediationStepsT&& value) {
    m_postRemediationStepsHasBeenSet = true;
    m_postRemediationSteps.emplace_back(std::forward<PostRemediationStepsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of <code>KbArticle</code> objects.</p>
   */
  inline const Aws::Vector<KbArticle>& GetKbArticles() const { return m_kbArticles; }
  inline bool KbArticlesHasBeenSet() const { return m_kbArticlesHasBeenSet; }
  template <typename KbArticlesT = Aws::Vector<KbArticle>>
  void SetKbArticles(KbArticlesT&& value) {
    m_kbArticlesHasBeenSet = true;
    m_kbArticles = std::forward<KbArticlesT>(value);
  }
  template <typename KbArticlesT = Aws::Vector<KbArticle>>
  RemediationSummaryDetail& WithKbArticles(KbArticlesT&& value) {
    SetKbArticles(std::forward<KbArticlesT>(value));
    return *this;
  }
  template <typename KbArticlesT = KbArticle>
  RemediationSummaryDetail& AddKbArticles(KbArticlesT&& value) {
    m_kbArticlesHasBeenSet = true;
    m_kbArticles.emplace_back(std::forward<KbArticlesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_action;

  Aws::String m_description;

  bool m_isImmediate{false};

  Aws::Vector<Aws::String> m_postRemediationSteps;

  Aws::Vector<KbArticle> m_kbArticles;
  bool m_actionHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_isImmediateHasBeenSet = false;
  bool m_postRemediationStepsHasBeenSet = false;
  bool m_kbArticlesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
