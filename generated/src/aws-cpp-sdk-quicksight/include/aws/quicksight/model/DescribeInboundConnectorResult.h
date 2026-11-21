/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/InboundConnector.h>

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
class DescribeInboundConnectorResult {
 public:
  AWS_QUICKSIGHT_API DescribeInboundConnectorResult() = default;
  AWS_QUICKSIGHT_API DescribeInboundConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API DescribeInboundConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The HTTP status of the request.</p>
   */
  inline int GetStatus() const { return m_status; }
  inline void SetStatus(int value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeInboundConnectorResult& WithStatus(int value) {
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
  DescribeInboundConnectorResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The inbound connector.</p>
   */
  inline const InboundConnector& GetInboundConnector() const { return m_inboundConnector; }
  template <typename InboundConnectorT = InboundConnector>
  void SetInboundConnector(InboundConnectorT&& value) {
    m_inboundConnectorHasBeenSet = true;
    m_inboundConnector = std::forward<InboundConnectorT>(value);
  }
  template <typename InboundConnectorT = InboundConnector>
  DescribeInboundConnectorResult& WithInboundConnector(InboundConnectorT&& value) {
    SetInboundConnector(std::forward<InboundConnectorT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  int m_status{0};

  Aws::String m_requestId;

  InboundConnector m_inboundConnector;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_inboundConnectorHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
