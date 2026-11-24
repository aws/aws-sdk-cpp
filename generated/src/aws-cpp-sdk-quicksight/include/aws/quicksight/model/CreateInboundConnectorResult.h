/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/InboundConnectorStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {
class CreateInboundConnectorResult {
 public:
  AWS_QUICKSIGHT_API CreateInboundConnectorResult() = default;
  AWS_QUICKSIGHT_API CreateInboundConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API CreateInboundConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The HTTP status of the request.</p>
   */
  inline int GetStatus() const { return m_status; }
  inline void SetStatus(int value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateInboundConnectorResult& WithStatus(int value) {
    SetStatus(value);
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
  CreateInboundConnectorResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the inbound connector.</p>
   */
  inline const Aws::String& GetInboundConnectorId() const { return m_inboundConnectorId; }
  template <typename InboundConnectorIdT = Aws::String>
  void SetInboundConnectorId(InboundConnectorIdT&& value) {
    m_inboundConnectorIdHasBeenSet = true;
    m_inboundConnectorId = std::forward<InboundConnectorIdT>(value);
  }
  template <typename InboundConnectorIdT = Aws::String>
  CreateInboundConnectorResult& WithInboundConnectorId(InboundConnectorIdT&& value) {
    SetInboundConnectorId(std::forward<InboundConnectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the inbound connector.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  CreateInboundConnectorResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The endpoint URL that clients use to reach Quick Sight through the inbound
   * connector.</p>
   */
  inline const Aws::String& GetTenantUrl() const { return m_tenantUrl; }
  template <typename TenantUrlT = Aws::String>
  void SetTenantUrl(TenantUrlT&& value) {
    m_tenantUrlHasBeenSet = true;
    m_tenantUrl = std::forward<TenantUrlT>(value);
  }
  template <typename TenantUrlT = Aws::String>
  CreateInboundConnectorResult& WithTenantUrl(TenantUrlT&& value) {
    SetTenantUrl(std::forward<TenantUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the inbound connector. A new connector is always
   * <code>ENABLED</code>.</p>
   */
  inline InboundConnectorStatus GetInboundConnectorStatus() const { return m_inboundConnectorStatus; }
  inline void SetInboundConnectorStatus(InboundConnectorStatus value) {
    m_inboundConnectorStatusHasBeenSet = true;
    m_inboundConnectorStatus = value;
  }
  inline CreateInboundConnectorResult& WithInboundConnectorStatus(InboundConnectorStatus value) {
    SetInboundConnectorStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the inbound connector was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  void SetCreatedTime(CreatedTimeT&& value) {
    m_createdTimeHasBeenSet = true;
    m_createdTime = std::forward<CreatedTimeT>(value);
  }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  CreateInboundConnectorResult& WithCreatedTime(CreatedTimeT&& value) {
    SetCreatedTime(std::forward<CreatedTimeT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  int m_status{0};

  Aws::String m_requestId;

  Aws::String m_inboundConnectorId;

  Aws::String m_arn;

  Aws::String m_tenantUrl;

  InboundConnectorStatus m_inboundConnectorStatus{InboundConnectorStatus::NOT_SET};

  Aws::Utils::DateTime m_createdTime{};
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_inboundConnectorIdHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_tenantUrlHasBeenSet = false;
  bool m_inboundConnectorStatusHasBeenSet = false;
  bool m_createdTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
