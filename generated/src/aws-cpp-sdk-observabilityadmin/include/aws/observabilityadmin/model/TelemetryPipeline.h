/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/TelemetryPipelineConfiguration.h>
#include <aws/observabilityadmin/model/TelemetryPipelineStatus.h>
#include <aws/observabilityadmin/model/TelemetryPipelineStatusReason.h>

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
 * <p>Represents a complete telemetry pipeline resource with configuration, status,
 * and metadata for data processing and transformation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/TelemetryPipeline">AWS
 * API Reference</a></p>
 */
class TelemetryPipeline {
 public:
  AWS_OBSERVABILITYADMIN_API TelemetryPipeline() = default;
  AWS_OBSERVABILITYADMIN_API TelemetryPipeline(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API TelemetryPipeline& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  inline TelemetryPipeline& WithCreatedTimeStamp(long long value) {
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
  inline TelemetryPipeline& WithLastUpdateTimeStamp(long long value) {
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
  TelemetryPipeline& WithArn(ArnT&& value) {
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
  TelemetryPipeline& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that defines how the telemetry pipeline processes data.</p>
   */
  inline const TelemetryPipelineConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = TelemetryPipelineConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = TelemetryPipelineConfiguration>
  TelemetryPipeline& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
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
  inline TelemetryPipeline& WithStatus(TelemetryPipelineStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the pipeline status, including reasons for
   * failure states.</p>
   */
  inline const TelemetryPipelineStatusReason& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = TelemetryPipelineStatusReason>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = TelemetryPipelineStatusReason>
  TelemetryPipeline& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
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
  TelemetryPipeline& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  TelemetryPipeline& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  long long m_createdTimeStamp{0};

  long long m_lastUpdateTimeStamp{0};

  Aws::String m_arn;

  Aws::String m_name;

  TelemetryPipelineConfiguration m_configuration;

  TelemetryPipelineStatus m_status{TelemetryPipelineStatus::NOT_SET};

  TelemetryPipelineStatusReason m_statusReason;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_createdTimeStampHasBeenSet = false;
  bool m_lastUpdateTimeStampHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
