/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/FindingsExportFormat.h>
#include <aws/securityhub/model/FindingsSelectableField.h>
#include <aws/securityhub/model/OcsfFindingFilters.h>

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
 * <p>The configuration for a findings export: the output format, an optional set
 * of filters, and the fields to include.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/FindingsOutput">AWS
 * API Reference</a></p>
 */
class FindingsOutput {
 public:
  AWS_SECURITYHUB_API FindingsOutput() = default;
  AWS_SECURITYHUB_API FindingsOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API FindingsOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  inline FindingsOutput& WithFormat(FindingsExportFormat value) {
    SetFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional set of OCSF finding filters that restrict which findings are
   * exported. The filter structure is the same as the one used by
   * <code>GetFindingsV2</code>. If you omit this member, Security Hub exports all
   * findings available to the caller. When echoed by <code>GetExportJobV2</code>,
   * relative date ranges are returned unresolved.</p>
   */
  inline const OcsfFindingFilters& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = OcsfFindingFilters>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = OcsfFindingFilters>
  FindingsOutput& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OCSF finding fields to include in the export, specified as OCSF field
   * paths (for example, <code>finding_info.title</code> or <code>severity</code>).
   * You can specify from 1 to 50 fields.</p> <p>Whether this parameter is required
   * depends on the value of <code>Format</code>:</p> <ul> <li> <p> <code>CSV</code>
   * – Required. The field paths that you specify become the columns of the output,
   * in the order that you provide them. If you omit this parameter, the request
   * returns a <code>ValidationException</code>.</p> </li> <li> <p>
   * <code>OCSF_JSON</code> – Not supported. This format includes each finding in
   * full, so field selection doesn't apply. If you specify this parameter, the
   * request returns a <code>ValidationException</code>.</p> </li> </ul>
   */
  inline const Aws::Vector<FindingsSelectableField>& GetSelectedFields() const { return m_selectedFields; }
  inline bool SelectedFieldsHasBeenSet() const { return m_selectedFieldsHasBeenSet; }
  template <typename SelectedFieldsT = Aws::Vector<FindingsSelectableField>>
  void SetSelectedFields(SelectedFieldsT&& value) {
    m_selectedFieldsHasBeenSet = true;
    m_selectedFields = std::forward<SelectedFieldsT>(value);
  }
  template <typename SelectedFieldsT = Aws::Vector<FindingsSelectableField>>
  FindingsOutput& WithSelectedFields(SelectedFieldsT&& value) {
    SetSelectedFields(std::forward<SelectedFieldsT>(value));
    return *this;
  }
  inline FindingsOutput& AddSelectedFields(FindingsSelectableField value) {
    m_selectedFieldsHasBeenSet = true;
    m_selectedFields.push_back(value);
    return *this;
  }
  ///@}
 private:
  FindingsExportFormat m_format{FindingsExportFormat::NOT_SET};

  OcsfFindingFilters m_filters;

  Aws::Vector<FindingsSelectableField> m_selectedFields;
  bool m_formatHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_selectedFieldsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
