/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdminRequest.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/TelemetrySourceConfigurationInput.h>

#include <utility>

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

/**
 */
class StartThirdPartyTelemetryEnrichmentRequest : public ObservabilityAdminRequest {
 public:
  AWS_OBSERVABILITYADMIN_API StartThirdPartyTelemetryEnrichmentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartThirdPartyTelemetryEnrichment"; }

  AWS_OBSERVABILITYADMIN_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A name for the enrichment. The name must be unique in your account and
   * Region. You can use the name instead of the ARN to identify the enrichment in
   * other operations.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  StartThirdPartyTelemetryEnrichmentRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The third-party telemetry source to collect resource metadata from. Specify
   * exactly one telemetry source.</p>
   */
  inline const TelemetrySourceConfigurationInput& GetTelemetrySourceConfiguration() const { return m_telemetrySourceConfiguration; }
  inline bool TelemetrySourceConfigurationHasBeenSet() const { return m_telemetrySourceConfigurationHasBeenSet; }
  template <typename TelemetrySourceConfigurationT = TelemetrySourceConfigurationInput>
  void SetTelemetrySourceConfiguration(TelemetrySourceConfigurationT&& value) {
    m_telemetrySourceConfigurationHasBeenSet = true;
    m_telemetrySourceConfiguration = std::forward<TelemetrySourceConfigurationT>(value);
  }
  template <typename TelemetrySourceConfigurationT = TelemetrySourceConfigurationInput>
  StartThirdPartyTelemetryEnrichmentRequest& WithTelemetrySourceConfiguration(TelemetrySourceConfigurationT&& value) {
    SetTelemetrySourceConfiguration(std::forward<TelemetrySourceConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to associate with the enrichment resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  StartThirdPartyTelemetryEnrichmentRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  StartThirdPartyTelemetryEnrichmentRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  TelemetrySourceConfigurationInput m_telemetrySourceConfiguration;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_nameHasBeenSet = false;
  bool m_telemetrySourceConfigurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
