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
class StartTelemetryEnrichmentResult {
 public:
  AWS_OBSERVABILITYADMIN_API StartTelemetryEnrichmentResult() = default;
  AWS_OBSERVABILITYADMIN_API StartTelemetryEnrichmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OBSERVABILITYADMIN_API StartTelemetryEnrichmentResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The status of the resource tags for telemetry feature after the start
   * operation (<code>Running</code>, <code>Stopped</code>, or
   * <code>Impaired</code>). </p>
   */
  inline TelemetryEnrichmentStatus GetStatus() const { return m_status; }
  inline void SetStatus(TelemetryEnrichmentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline StartTelemetryEnrichmentResult& WithStatus(TelemetryEnrichmentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the Resource Explorer managed view created
   * for resource tags for telemetry. </p>
   */
  inline const Aws::String& GetAwsResourceExplorerManagedViewArn() const { return m_awsResourceExplorerManagedViewArn; }
  template <typename AwsResourceExplorerManagedViewArnT = Aws::String>
  void SetAwsResourceExplorerManagedViewArn(AwsResourceExplorerManagedViewArnT&& value) {
    m_awsResourceExplorerManagedViewArnHasBeenSet = true;
    m_awsResourceExplorerManagedViewArn = std::forward<AwsResourceExplorerManagedViewArnT>(value);
  }
  template <typename AwsResourceExplorerManagedViewArnT = Aws::String>
  StartTelemetryEnrichmentResult& WithAwsResourceExplorerManagedViewArn(AwsResourceExplorerManagedViewArnT&& value) {
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
  StartTelemetryEnrichmentResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  TelemetryEnrichmentStatus m_status{TelemetryEnrichmentStatus::NOT_SET};

  Aws::String m_awsResourceExplorerManagedViewArn;

  Aws::String m_requestId;
  bool m_statusHasBeenSet = false;
  bool m_awsResourceExplorerManagedViewArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
