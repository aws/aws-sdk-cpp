/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/PrivateConnectivityConfig.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Outposts {
namespace Model {
class GetPrivateConnectivityConfigResult {
 public:
  AWS_OUTPOSTS_API GetPrivateConnectivityConfigResult() = default;
  AWS_OUTPOSTS_API GetPrivateConnectivityConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OUTPOSTS_API GetPrivateConnectivityConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The private connectivity configuration for the Outpost.</p>
   */
  inline const PrivateConnectivityConfig& GetPrivateConnectivityConfig() const { return m_privateConnectivityConfig; }
  template <typename PrivateConnectivityConfigT = PrivateConnectivityConfig>
  void SetPrivateConnectivityConfig(PrivateConnectivityConfigT&& value) {
    m_privateConnectivityConfigHasBeenSet = true;
    m_privateConnectivityConfig = std::forward<PrivateConnectivityConfigT>(value);
  }
  template <typename PrivateConnectivityConfigT = PrivateConnectivityConfig>
  GetPrivateConnectivityConfigResult& WithPrivateConnectivityConfig(PrivateConnectivityConfigT&& value) {
    SetPrivateConnectivityConfig(std::forward<PrivateConnectivityConfigT>(value));
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
  GetPrivateConnectivityConfigResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  PrivateConnectivityConfig m_privateConnectivityConfig;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_privateConnectivityConfigHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
