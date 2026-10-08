/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/FindingsExportFormat.h>

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
 * <p>A summary of the output configuration for a findings export, returned by
 * <code>ListExportJobsV2</code>. Unlike the configuration returned by
 * <code>GetExportJobV2</code>, it reports only the output format.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/FindingsOutputSummary">AWS
 * API Reference</a></p>
 */
class FindingsOutputSummary {
 public:
  AWS_SECURITYHUB_API FindingsOutputSummary() = default;
  AWS_SECURITYHUB_API FindingsOutputSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API FindingsOutputSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The output format of the export. <code>CSV</code> produces comma-separated
   * rows that are suitable for spreadsheets and analysis tools.
   * <code>OCSF_JSON</code> produces newline-delimited JSON records in the Open
   * Cybersecurity Schema Framework (OCSF) format used elsewhere in Security Hub.</p>
   */
  inline FindingsExportFormat GetFormat() const { return m_format; }
  inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
  inline void SetFormat(FindingsExportFormat value) {
    m_formatHasBeenSet = true;
    m_format = value;
  }
  inline FindingsOutputSummary& WithFormat(FindingsExportFormat value) {
    SetFormat(value);
    return *this;
  }
  ///@}
 private:
  FindingsExportFormat m_format{FindingsExportFormat::NOT_SET};
  bool m_formatHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
