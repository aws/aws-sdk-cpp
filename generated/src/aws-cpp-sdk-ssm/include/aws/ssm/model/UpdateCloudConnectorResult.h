/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/SSM_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SSM {
namespace Model {
class UpdateCloudConnectorResult {
 public:
  AWS_SSM_API UpdateCloudConnectorResult() = default;
  AWS_SSM_API UpdateCloudConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SSM_API UpdateCloudConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the cloud connector that was updated.</p>
   */
  inline const Aws::String& GetCloudConnectorId() const { return m_cloudConnectorId; }
  template <typename CloudConnectorIdT = Aws::String>
  void SetCloudConnectorId(CloudConnectorIdT&& value) {
    m_cloudConnectorIdHasBeenSet = true;
    m_cloudConnectorId = std::forward<CloudConnectorIdT>(value);
  }
  template <typename CloudConnectorIdT = Aws::String>
  UpdateCloudConnectorResult& WithCloudConnectorId(CloudConnectorIdT&& value) {
    SetCloudConnectorId(std::forward<CloudConnectorIdT>(value));
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
  UpdateCloudConnectorResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_cloudConnectorId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_cloudConnectorIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SSM
}  // namespace Aws
