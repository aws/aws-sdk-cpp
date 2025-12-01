/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>

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
 * <p>Input data for case summarization.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/CaseSummarizationInputData">AWS
 * API Reference</a></p>
 */
class CaseSummarizationInputData {
 public:
  AWS_QCONNECT_API CaseSummarizationInputData() = default;
  AWS_QCONNECT_API CaseSummarizationInputData(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API CaseSummarizationInputData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the case for summarization.</p>
   */
  inline const Aws::String& GetCaseArn() const { return m_caseArn; }
  inline bool CaseArnHasBeenSet() const { return m_caseArnHasBeenSet; }
  template <typename CaseArnT = Aws::String>
  void SetCaseArn(CaseArnT&& value) {
    m_caseArnHasBeenSet = true;
    m_caseArn = std::forward<CaseArnT>(value);
  }
  template <typename CaseArnT = Aws::String>
  CaseSummarizationInputData& WithCaseArn(CaseArnT&& value) {
    SetCaseArn(std::forward<CaseArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_caseArn;
  bool m_caseArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
