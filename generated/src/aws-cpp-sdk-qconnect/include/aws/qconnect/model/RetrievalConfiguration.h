/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/KnowledgeBaseSearchType.h>
#include <aws/qconnect/model/KnowledgeSource.h>
#include <aws/qconnect/model/RetrievalFilterConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {

/**
 * <p>Configuration for content retrieval operations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/RetrievalConfiguration">AWS
 * API Reference</a></p>
 */
class RetrievalConfiguration {
 public:
  AWS_QCONNECT_API RetrievalConfiguration() = default;
  AWS_QCONNECT_API RetrievalConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API RetrievalConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The knowledge source configuration for content retrieval.</p>
   */
  inline const KnowledgeSource& GetKnowledgeSource() const { return m_knowledgeSource; }
  inline bool KnowledgeSourceHasBeenSet() const { return m_knowledgeSourceHasBeenSet; }
  template <typename KnowledgeSourceT = KnowledgeSource>
  void SetKnowledgeSource(KnowledgeSourceT&& value) {
    m_knowledgeSourceHasBeenSet = true;
    m_knowledgeSource = std::forward<KnowledgeSourceT>(value);
  }
  template <typename KnowledgeSourceT = KnowledgeSource>
  RetrievalConfiguration& WithKnowledgeSource(KnowledgeSourceT&& value) {
    SetKnowledgeSource(std::forward<KnowledgeSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filter configuration for content retrieval.</p>
   */
  inline const RetrievalFilterConfiguration& GetFilter() const { return m_filter; }
  inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
  template <typename FilterT = RetrievalFilterConfiguration>
  void SetFilter(FilterT&& value) {
    m_filterHasBeenSet = true;
    m_filter = std::forward<FilterT>(value);
  }
  template <typename FilterT = RetrievalFilterConfiguration>
  RetrievalConfiguration& WithFilter(FilterT&& value) {
    SetFilter(std::forward<FilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of results to retrieve.</p>
   */
  inline int GetNumberOfResults() const { return m_numberOfResults; }
  inline bool NumberOfResultsHasBeenSet() const { return m_numberOfResultsHasBeenSet; }
  inline void SetNumberOfResults(int value) {
    m_numberOfResultsHasBeenSet = true;
    m_numberOfResults = value;
  }
  inline RetrievalConfiguration& WithNumberOfResults(int value) {
    SetNumberOfResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Override setting for the knowledge base search type during retrieval.</p>
   */
  inline KnowledgeBaseSearchType GetOverrideKnowledgeBaseSearchType() const { return m_overrideKnowledgeBaseSearchType; }
  inline bool OverrideKnowledgeBaseSearchTypeHasBeenSet() const { return m_overrideKnowledgeBaseSearchTypeHasBeenSet; }
  inline void SetOverrideKnowledgeBaseSearchType(KnowledgeBaseSearchType value) {
    m_overrideKnowledgeBaseSearchTypeHasBeenSet = true;
    m_overrideKnowledgeBaseSearchType = value;
  }
  inline RetrievalConfiguration& WithOverrideKnowledgeBaseSearchType(KnowledgeBaseSearchType value) {
    SetOverrideKnowledgeBaseSearchType(value);
    return *this;
  }
  ///@}
 private:
  KnowledgeSource m_knowledgeSource;

  RetrievalFilterConfiguration m_filter;

  int m_numberOfResults{0};

  KnowledgeBaseSearchType m_overrideKnowledgeBaseSearchType{KnowledgeBaseSearchType::NOT_SET};
  bool m_knowledgeSourceHasBeenSet = false;
  bool m_filterHasBeenSet = false;
  bool m_numberOfResultsHasBeenSet = false;
  bool m_overrideKnowledgeBaseSearchTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
