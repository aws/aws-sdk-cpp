/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/TelemetrySourceConfigurationOutput.h>
#include <aws/observabilityadmin/model/ThirdPartyTelemetryEnrichmentStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {
class StartThirdPartyTelemetryEnrichmentResult {
 public:
  AWS_OBSERVABILITYADMIN_API StartThirdPartyTelemetryEnrichmentResult() = default;
  AWS_OBSERVABILITYADMIN_API StartThirdPartyTelemetryEnrichmentResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OBSERVABILITYADMIN_API StartThirdPartyTelemetryEnrichmentResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the enrichment.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  StartThirdPartyTelemetryEnrichmentResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the enrichment.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  StartThirdPartyTelemetryEnrichmentResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the enrichment after the start operation. Valid values:</p>
   * <ul> <li> <p> <code>Initializing</code> - CloudWatch is setting up the
   * enrichment. Some telemetry can be enriched before setup completes.</p> </li>
   * <li> <p> <code>Running</code> - The enrichment is active.</p> </li> <li> <p>
   * <code>Stopped</code> - The enrichment is stopped.</p> </li> <li> <p>
   * <code>Impaired</code> - The enrichment has a problem. <code>StatusReason</code>
   * describes the problem.</p> </li> </ul>
   */
  inline ThirdPartyTelemetryEnrichmentStatus GetStatus() const { return m_status; }
  inline void SetStatus(ThirdPartyTelemetryEnrichmentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline StartThirdPartyTelemetryEnrichmentResult& WithStatus(ThirdPartyTelemetryEnrichmentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the current status. This field is present when the status is
   * <code>Impaired</code>.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  StartThirdPartyTelemetryEnrichmentResult& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source configuration of the enrichment.</p>
   */
  inline const TelemetrySourceConfigurationOutput& GetTelemetrySourceConfiguration() const { return m_telemetrySourceConfiguration; }
  template <typename TelemetrySourceConfigurationT = TelemetrySourceConfigurationOutput>
  void SetTelemetrySourceConfiguration(TelemetrySourceConfigurationT&& value) {
    m_telemetrySourceConfigurationHasBeenSet = true;
    m_telemetrySourceConfiguration = std::forward<TelemetrySourceConfigurationT>(value);
  }
  template <typename TelemetrySourceConfigurationT = TelemetrySourceConfigurationOutput>
  StartThirdPartyTelemetryEnrichmentResult& WithTelemetrySourceConfiguration(TelemetrySourceConfigurationT&& value) {
    SetTelemetrySourceConfiguration(std::forward<TelemetrySourceConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags associated with the enrichment.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  StartThirdPartyTelemetryEnrichmentResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  StartThirdPartyTelemetryEnrichmentResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  StartThirdPartyTelemetryEnrichmentResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_arn;

  Aws::String m_name;

  ThirdPartyTelemetryEnrichmentStatus m_status{ThirdPartyTelemetryEnrichmentStatus::NOT_SET};

  Aws::String m_statusReason;

  TelemetrySourceConfigurationOutput m_telemetrySourceConfiguration;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_telemetrySourceConfigurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
