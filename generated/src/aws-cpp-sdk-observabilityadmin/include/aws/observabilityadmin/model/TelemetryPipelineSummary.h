/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/ConfigurationSummary.h>
#include <aws/observabilityadmin/model/TelemetryPipelineStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p>Contains summary information about a telemetry pipeline for listing
 * operations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/TelemetryPipelineSummary">AWS
 * API Reference</a></p>
 */
class TelemetryPipelineSummary {
 public:
  AWS_OBSERVABILITYADMIN_API TelemetryPipelineSummary() = default;
  AWS_OBSERVABILITYADMIN_API TelemetryPipelineSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API TelemetryPipelineSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The timestamp when the telemetry pipeline was created.</p>
   */
  inline long long GetCreatedTimeStamp() const { return m_createdTimeStamp; }
  inline bool CreatedTimeStampHasBeenSet() const { return m_createdTimeStampHasBeenSet; }
  inline void SetCreatedTimeStamp(long long value) {
    m_createdTimeStampHasBeenSet = true;
    m_createdTimeStamp = value;
  }
  inline TelemetryPipelineSummary& WithCreatedTimeStamp(long long value) {
    SetCreatedTimeStamp(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the telemetry pipeline was last updated.</p>
   */
  inline long long GetLastUpdateTimeStamp() const { return m_lastUpdateTimeStamp; }
  inline bool LastUpdateTimeStampHasBeenSet() const { return m_lastUpdateTimeStampHasBeenSet; }
  inline void SetLastUpdateTimeStamp(long long value) {
    m_lastUpdateTimeStampHasBeenSet = true;
    m_lastUpdateTimeStamp = value;
  }
  inline TelemetryPipelineSummary& WithLastUpdateTimeStamp(long long value) {
    SetLastUpdateTimeStamp(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the telemetry pipeline.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  TelemetryPipelineSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the telemetry pipeline.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  TelemetryPipelineSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the telemetry pipeline.</p>
   */
  inline TelemetryPipelineStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(TelemetryPipelineStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline TelemetryPipelineSummary& WithStatus(TelemetryPipelineStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key-value pairs associated with the telemetry pipeline resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  TelemetryPipelineSummary& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  TelemetryPipelineSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of the pipeline configuration components.</p>
   */
  inline const ConfigurationSummary& GetConfigurationSummary() const { return m_configurationSummary; }
  inline bool ConfigurationSummaryHasBeenSet() const { return m_configurationSummaryHasBeenSet; }
  template <typename ConfigurationSummaryT = ConfigurationSummary>
  void SetConfigurationSummary(ConfigurationSummaryT&& value) {
    m_configurationSummaryHasBeenSet = true;
    m_configurationSummary = std::forward<ConfigurationSummaryT>(value);
  }
  template <typename ConfigurationSummaryT = ConfigurationSummary>
  TelemetryPipelineSummary& WithConfigurationSummary(ConfigurationSummaryT&& value) {
    SetConfigurationSummary(std::forward<ConfigurationSummaryT>(value));
    return *this;
  }
  ///@}
 private:
  long long m_createdTimeStamp{0};

  long long m_lastUpdateTimeStamp{0};

  Aws::String m_arn;

  Aws::String m_name;

  TelemetryPipelineStatus m_status{TelemetryPipelineStatus::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_tags;

  ConfigurationSummary m_configurationSummary;
  bool m_createdTimeStampHasBeenSet = false;
  bool m_lastUpdateTimeStampHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_configurationSummaryHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
