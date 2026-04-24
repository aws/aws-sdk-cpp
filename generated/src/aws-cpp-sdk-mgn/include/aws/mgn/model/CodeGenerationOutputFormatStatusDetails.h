/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/CodeGenerationOutputFormatStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>Status details for a specific code generation output format.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/CodeGenerationOutputFormatStatusDetails">AWS
 * API Reference</a></p>
 */
class CodeGenerationOutputFormatStatusDetails {
 public:
  AWS_MGN_API CodeGenerationOutputFormatStatusDetails() = default;
  AWS_MGN_API CodeGenerationOutputFormatStatusDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API CodeGenerationOutputFormatStatusDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The status of the code generation for this output format.</p>
   */
  inline CodeGenerationOutputFormatStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(CodeGenerationOutputFormatStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CodeGenerationOutputFormatStatusDetails& WithStatus(CodeGenerationOutputFormatStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of detailed status information for the code generation.</p>
   */
  inline const Aws::String& GetStatusDetailList() const { return m_statusDetailList; }
  inline bool StatusDetailListHasBeenSet() const { return m_statusDetailListHasBeenSet; }
  template <typename StatusDetailListT = Aws::String>
  void SetStatusDetailList(StatusDetailListT&& value) {
    m_statusDetailListHasBeenSet = true;
    m_statusDetailList = std::forward<StatusDetailListT>(value);
  }
  template <typename StatusDetailListT = Aws::String>
  CodeGenerationOutputFormatStatusDetails& WithStatusDetailList(StatusDetailListT&& value) {
    SetStatusDetailList(std::forward<StatusDetailListT>(value));
    return *this;
  }
  ///@}
 private:
  CodeGenerationOutputFormatStatus m_status{CodeGenerationOutputFormatStatus::NOT_SET};

  Aws::String m_statusDetailList;
  bool m_statusHasBeenSet = false;
  bool m_statusDetailListHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
