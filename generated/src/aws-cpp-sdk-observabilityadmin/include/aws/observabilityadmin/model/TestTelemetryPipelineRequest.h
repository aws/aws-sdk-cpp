/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/observabilityadmin/ObservabilityAdminRequest.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/Record.h>
#include <aws/observabilityadmin/model/TelemetryPipelineConfiguration.h>

#include <utility>

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

/**
 */
class TestTelemetryPipelineRequest : public ObservabilityAdminRequest {
 public:
  AWS_OBSERVABILITYADMIN_API TestTelemetryPipelineRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "TestTelemetryPipeline"; }

  AWS_OBSERVABILITYADMIN_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The sample records to process through the pipeline configuration for testing
   * purposes.</p>
   */
  inline const Aws::Vector<Record>& GetRecords() const { return m_records; }
  inline bool RecordsHasBeenSet() const { return m_recordsHasBeenSet; }
  template <typename RecordsT = Aws::Vector<Record>>
  void SetRecords(RecordsT&& value) {
    m_recordsHasBeenSet = true;
    m_records = std::forward<RecordsT>(value);
  }
  template <typename RecordsT = Aws::Vector<Record>>
  TestTelemetryPipelineRequest& WithRecords(RecordsT&& value) {
    SetRecords(std::forward<RecordsT>(value));
    return *this;
  }
  template <typename RecordsT = Record>
  TestTelemetryPipelineRequest& AddRecords(RecordsT&& value) {
    m_recordsHasBeenSet = true;
    m_records.emplace_back(std::forward<RecordsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pipeline configuration to test with the provided sample records.</p>
   */
  inline const TelemetryPipelineConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = TelemetryPipelineConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = TelemetryPipelineConfiguration>
  TestTelemetryPipelineRequest& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Record> m_records;

  TelemetryPipelineConfiguration m_configuration;
  bool m_recordsHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
