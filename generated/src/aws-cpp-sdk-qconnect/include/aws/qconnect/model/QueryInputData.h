/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/CaseSummarizationInputData.h>
#include <aws/qconnect/model/IntentInputData.h>
#include <aws/qconnect/model/QueryTextInputData.h>

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
 * <p>Input information for the query.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/QueryInputData">AWS
 * API Reference</a></p>
 */
class QueryInputData {
 public:
  AWS_QCONNECT_API QueryInputData() = default;
  AWS_QCONNECT_API QueryInputData(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API QueryInputData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Input information for the query.</p>
   */
  inline const QueryTextInputData& GetQueryTextInputData() const { return m_queryTextInputData; }
  inline bool QueryTextInputDataHasBeenSet() const { return m_queryTextInputDataHasBeenSet; }
  template <typename QueryTextInputDataT = QueryTextInputData>
  void SetQueryTextInputData(QueryTextInputDataT&& value) {
    m_queryTextInputDataHasBeenSet = true;
    m_queryTextInputData = std::forward<QueryTextInputDataT>(value);
  }
  template <typename QueryTextInputDataT = QueryTextInputData>
  QueryInputData& WithQueryTextInputData(QueryTextInputDataT&& value) {
    SetQueryTextInputData(std::forward<QueryTextInputDataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Input information for the intent.</p>
   */
  inline const IntentInputData& GetIntentInputData() const { return m_intentInputData; }
  inline bool IntentInputDataHasBeenSet() const { return m_intentInputDataHasBeenSet; }
  template <typename IntentInputDataT = IntentInputData>
  void SetIntentInputData(IntentInputDataT&& value) {
    m_intentInputDataHasBeenSet = true;
    m_intentInputData = std::forward<IntentInputDataT>(value);
  }
  template <typename IntentInputDataT = IntentInputData>
  QueryInputData& WithIntentInputData(IntentInputDataT&& value) {
    SetIntentInputData(std::forward<IntentInputDataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Input data for case summarization queries.</p>
   */
  inline const CaseSummarizationInputData& GetCaseSummarizationInputData() const { return m_caseSummarizationInputData; }
  inline bool CaseSummarizationInputDataHasBeenSet() const { return m_caseSummarizationInputDataHasBeenSet; }
  template <typename CaseSummarizationInputDataT = CaseSummarizationInputData>
  void SetCaseSummarizationInputData(CaseSummarizationInputDataT&& value) {
    m_caseSummarizationInputDataHasBeenSet = true;
    m_caseSummarizationInputData = std::forward<CaseSummarizationInputDataT>(value);
  }
  template <typename CaseSummarizationInputDataT = CaseSummarizationInputData>
  QueryInputData& WithCaseSummarizationInputData(CaseSummarizationInputDataT&& value) {
    SetCaseSummarizationInputData(std::forward<CaseSummarizationInputDataT>(value));
    return *this;
  }
  ///@}
 private:
  QueryTextInputData m_queryTextInputData;

  IntentInputData m_intentInputData;

  CaseSummarizationInputData m_caseSummarizationInputData;
  bool m_queryTextInputDataHasBeenSet = false;
  bool m_intentInputDataHasBeenSet = false;
  bool m_caseSummarizationInputDataHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
