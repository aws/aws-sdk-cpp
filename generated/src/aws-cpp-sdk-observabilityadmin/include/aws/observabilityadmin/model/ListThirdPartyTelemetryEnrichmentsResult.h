/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/ThirdPartyTelemetryEnrichmentSummary.h>

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
class ListThirdPartyTelemetryEnrichmentsResult {
 public:
  AWS_OBSERVABILITYADMIN_API ListThirdPartyTelemetryEnrichmentsResult() = default;
  AWS_OBSERVABILITYADMIN_API ListThirdPartyTelemetryEnrichmentsResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OBSERVABILITYADMIN_API ListThirdPartyTelemetryEnrichmentsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The enrichments in your account and Region.</p>
   */
  inline const Aws::Vector<ThirdPartyTelemetryEnrichmentSummary>& GetTelemetryEnrichments() const { return m_telemetryEnrichments; }
  template <typename TelemetryEnrichmentsT = Aws::Vector<ThirdPartyTelemetryEnrichmentSummary>>
  void SetTelemetryEnrichments(TelemetryEnrichmentsT&& value) {
    m_telemetryEnrichmentsHasBeenSet = true;
    m_telemetryEnrichments = std::forward<TelemetryEnrichmentsT>(value);
  }
  template <typename TelemetryEnrichmentsT = Aws::Vector<ThirdPartyTelemetryEnrichmentSummary>>
  ListThirdPartyTelemetryEnrichmentsResult& WithTelemetryEnrichments(TelemetryEnrichmentsT&& value) {
    SetTelemetryEnrichments(std::forward<TelemetryEnrichmentsT>(value));
    return *this;
  }
  template <typename TelemetryEnrichmentsT = ThirdPartyTelemetryEnrichmentSummary>
  ListThirdPartyTelemetryEnrichmentsResult& AddTelemetryEnrichments(TelemetryEnrichmentsT&& value) {
    m_telemetryEnrichmentsHasBeenSet = true;
    m_telemetryEnrichments.emplace_back(std::forward<TelemetryEnrichmentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to resume pagination of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListThirdPartyTelemetryEnrichmentsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListThirdPartyTelemetryEnrichmentsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ThirdPartyTelemetryEnrichmentSummary> m_telemetryEnrichments;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_telemetryEnrichmentsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
