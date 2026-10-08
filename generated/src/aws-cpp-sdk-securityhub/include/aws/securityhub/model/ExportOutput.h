/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/FindingsOutput.h>

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
 * <p>Specifies what data to export and how to format it. This is a union: you must
 * specify exactly one member. Currently, the only supported member is
 * <code>Findings</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ExportOutput">AWS
 * API Reference</a></p>
 */
class ExportOutput {
 public:
  AWS_SECURITYHUB_API ExportOutput() = default;
  AWS_SECURITYHUB_API ExportOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API ExportOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configures an export of Security Hub findings, including the output format
   * and any filters or selected fields.</p>
   */
  inline const FindingsOutput& GetFindings() const { return m_findings; }
  inline bool FindingsHasBeenSet() const { return m_findingsHasBeenSet; }
  template <typename FindingsT = FindingsOutput>
  void SetFindings(FindingsT&& value) {
    m_findingsHasBeenSet = true;
    m_findings = std::forward<FindingsT>(value);
  }
  template <typename FindingsT = FindingsOutput>
  ExportOutput& WithFindings(FindingsT&& value) {
    SetFindings(std::forward<FindingsT>(value));
    return *this;
  }
  ///@}
 private:
  FindingsOutput m_findings;
  bool m_findingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
