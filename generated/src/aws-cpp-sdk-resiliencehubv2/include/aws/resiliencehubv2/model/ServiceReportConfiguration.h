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
 * <p>Configuration for automatic report generation on a Service.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ServiceReportConfiguration">AWS
 * API Reference</a></p>
 */
class ServiceReportConfiguration {
 public:
  AWS_RESILIENCEHUBV2_API ServiceReportConfiguration() = default;
  AWS_RESILIENCEHUBV2_API ServiceReportConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API ServiceReportConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Output destinations for generated reports.</p>
   */
  inline const Aws::Vector<ReportOutputConfiguration>& GetReportOutputs() const { return m_reportOutputs; }
  inline bool ReportOutputsHasBeenSet() const { return m_reportOutputsHasBeenSet; }
  template <typename ReportOutputsT = Aws::Vector<ReportOutputConfiguration>>
  void SetReportOutputs(ReportOutputsT&& value) {
    m_reportOutputsHasBeenSet = true;
    m_reportOutputs = std::forward<ReportOutputsT>(value);
  }
  template <typename ReportOutputsT = Aws::Vector<ReportOutputConfiguration>>
  ServiceReportConfiguration& WithReportOutputs(ReportOutputsT&& value) {
    SetReportOutputs(std::forward<ReportOutputsT>(value));
    return *this;
  }
  template <typename ReportOutputsT = ReportOutputConfiguration>
  ServiceReportConfiguration& AddReportOutputs(ReportOutputsT&& value) {
    m_reportOutputsHasBeenSet = true;
    m_reportOutputs.emplace_back(std::forward<ReportOutputsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ReportOutputConfiguration> m_reportOutputs;
  bool m_reportOutputsHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
