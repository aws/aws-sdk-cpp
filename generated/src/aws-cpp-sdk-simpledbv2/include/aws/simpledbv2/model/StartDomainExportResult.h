/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/simpledbv2/SimpleDBv2_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SimpleDBv2 {
namespace Model {
class StartDomainExportResult {
 public:
  AWS_SIMPLEDBV2_API StartDomainExportResult() = default;
  AWS_SIMPLEDBV2_API StartDomainExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SIMPLEDBV2_API StartDomainExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The client token that was provided in the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartDomainExportResult& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique ARN identifier of the export.</p>
   */
  inline const Aws::String& GetExportArn() const { return m_exportArn; }
  template <typename ExportArnT = Aws::String>
  void SetExportArn(ExportArnT&& value) {
    m_exportArnHasBeenSet = true;
    m_exportArn = std::forward<ExportArnT>(value);
  }
  template <typename ExportArnT = Aws::String>
  StartDomainExportResult& WithExportArn(ExportArnT&& value) {
    SetExportArn(std::forward<ExportArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the export request was received by the service.</p>
   */
  inline const Aws::Utils::DateTime& GetRequestedAt() const { return m_requestedAt; }
  template <typename RequestedAtT = Aws::Utils::DateTime>
  void SetRequestedAt(RequestedAtT&& value) {
    m_requestedAtHasBeenSet = true;
    m_requestedAt = std::forward<RequestedAtT>(value);
  }
  template <typename RequestedAtT = Aws::Utils::DateTime>
  StartDomainExportResult& WithRequestedAt(RequestedAtT&& value) {
    SetRequestedAt(std::forward<RequestedAtT>(value));
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
  StartDomainExportResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_clientToken;

  Aws::String m_exportArn;

  Aws::Utils::DateTime m_requestedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_clientTokenHasBeenSet = false;
  bool m_exportArnHasBeenSet = false;
  bool m_requestedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SimpleDBv2
}  // namespace Aws
