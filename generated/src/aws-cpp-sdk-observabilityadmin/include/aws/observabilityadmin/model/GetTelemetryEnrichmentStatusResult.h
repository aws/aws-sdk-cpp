/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/TelemetryEnrichmentStatus.h>

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
class GetTelemetryEnrichmentStatusResult {
 public:
  AWS_OBSERVABILITYADMIN_API GetTelemetryEnrichmentStatusResult() = default;
  AWS_OBSERVABILITYADMIN_API GetTelemetryEnrichmentStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OBSERVABILITYADMIN_API GetTelemetryEnrichmentStatusResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The current status of the resource tags for telemetry feature
   * (<code>Running</code>, <code>Stopped</code>, or <code>Impaired</code>). </p>
   */
  inline TelemetryEnrichmentStatus GetStatus() const { return m_status; }
  inline void SetStatus(TelemetryEnrichmentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetTelemetryEnrichmentStatusResult& WithStatus(TelemetryEnrichmentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the Amazon Web Services Resource Explorer
   * managed view used for resource tags for telemetry, if the feature is enabled.
   * </p>
   */
  inline const Aws::String& GetAwsResourceExplorerManagedViewArn() const { return m_awsResourceExplorerManagedViewArn; }
  template <typename AwsResourceExplorerManagedViewArnT = Aws::String>
  void SetAwsResourceExplorerManagedViewArn(AwsResourceExplorerManagedViewArnT&& value) {
    m_awsResourceExplorerManagedViewArnHasBeenSet = true;
    m_awsResourceExplorerManagedViewArn = std::forward<AwsResourceExplorerManagedViewArnT>(value);
  }
  template <typename AwsResourceExplorerManagedViewArnT = Aws::String>
  GetTelemetryEnrichmentStatusResult& WithAwsResourceExplorerManagedViewArn(AwsResourceExplorerManagedViewArnT&& value) {
    SetAwsResourceExplorerManagedViewArn(std::forward<AwsResourceExplorerManagedViewArnT>(value));
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
  GetTelemetryEnrichmentStatusResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  TelemetryEnrichmentStatus m_status{TelemetryEnrichmentStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_awsResourceExplorerManagedViewArn;
  bool m_awsResourceExplorerManagedViewArnHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
