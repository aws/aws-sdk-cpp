/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/FindingsOutputSummary.h>

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
 * <p>A summary of the output configuration for an export job. The populated member
 * corresponds to the data type that was exported.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ExportOutputSummary">AWS
 * API Reference</a></p>
 */
class ExportOutputSummary {
 public:
  AWS_SECURITYHUB_API ExportOutputSummary() = default;
  AWS_SECURITYHUB_API ExportOutputSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API ExportOutputSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The output configuration summary for a findings export.</p>
   */
  inline const FindingsOutputSummary& GetFindings() const { return m_findings; }
  inline bool FindingsHasBeenSet() const { return m_findingsHasBeenSet; }
  template <typename FindingsT = FindingsOutputSummary>
  void SetFindings(FindingsT&& value) {
    m_findingsHasBeenSet = true;
    m_findings = std::forward<FindingsT>(value);
  }
  template <typename FindingsT = FindingsOutputSummary>
  ExportOutputSummary& WithFindings(FindingsT&& value) {
    SetFindings(std::forward<FindingsT>(value));
    return *this;
  }
  ///@}
 private:
  FindingsOutputSummary m_findings;
  bool m_findingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
