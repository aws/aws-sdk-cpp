/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/ConnectorStatus.h>
#include <aws/securityhub/model/EnablementStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {
class UpdateConnectorV2Result {
 public:
  AWS_SECURITYHUB_API UpdateConnectorV2Result() = default;
  AWS_SECURITYHUB_API UpdateConnectorV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYHUB_API UpdateConnectorV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The status of the connector after the update.</p>
   */
  inline ConnectorStatus GetConnectorStatus() const { return m_connectorStatus; }
  inline void SetConnectorStatus(ConnectorStatus value) {
    m_connectorStatusHasBeenSet = true;
    m_connectorStatus = value;
  }
  inline UpdateConnectorV2Result& WithConnectorStatus(ConnectorStatus value) {
    SetConnectorStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The enablement status of the connector after the update.</p>
   */
  inline EnablementStatus GetEnablementStatus() const { return m_enablementStatus; }
  inline void SetEnablementStatus(EnablementStatus value) {
    m_enablementStatusHasBeenSet = true;
    m_enablementStatus = value;
  }
  inline UpdateConnectorV2Result& WithEnablementStatus(EnablementStatus value) {
    SetEnablementStatus(value);
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
  UpdateConnectorV2Result& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  ConnectorStatus m_connectorStatus{ConnectorStatus::NOT_SET};

  EnablementStatus m_enablementStatus{EnablementStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_connectorStatusHasBeenSet = false;
  bool m_enablementStatusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
