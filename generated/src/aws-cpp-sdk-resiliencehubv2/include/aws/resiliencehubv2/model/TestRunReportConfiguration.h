/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/ReportOutputConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>A snapshot of the report configuration captured onto a test run from the
 * service when the run was started.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/TestRunReportConfiguration">AWS
 * API Reference</a></p>
 */
class TestRunReportConfiguration {
 public:
  AWS_RESILIENCEHUBV2_API TestRunReportConfiguration() = default;
  AWS_RESILIENCEHUBV2_API TestRunReportConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API TestRunReportConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The output destinations for generated reports.</p>
   */
  inline const Aws::Vector<ReportOutputConfiguration>& GetReportOutput() const { return m_reportOutput; }
  inline bool ReportOutputHasBeenSet() const { return m_reportOutputHasBeenSet; }
  template <typename ReportOutputT = Aws::Vector<ReportOutputConfiguration>>
  void SetReportOutput(ReportOutputT&& value) {
    m_reportOutputHasBeenSet = true;
    m_reportOutput = std::forward<ReportOutputT>(value);
  }
  template <typename ReportOutputT = Aws::Vector<ReportOutputConfiguration>>
  TestRunReportConfiguration& WithReportOutput(ReportOutputT&& value) {
    SetReportOutput(std::forward<ReportOutputT>(value));
    return *this;
  }
  template <typename ReportOutputT = ReportOutputConfiguration>
  TestRunReportConfiguration& AddReportOutput(ReportOutputT&& value) {
    m_reportOutputHasBeenSet = true;
    m_reportOutput.emplace_back(std::forward<ReportOutputT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ReportOutputConfiguration> m_reportOutput;
  bool m_reportOutputHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
