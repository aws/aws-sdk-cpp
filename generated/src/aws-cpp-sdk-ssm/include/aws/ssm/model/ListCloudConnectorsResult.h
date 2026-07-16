/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/CloudConnectorSummary.h>

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
class ListCloudConnectorsResult {
 public:
  AWS_SSM_API ListCloudConnectorsResult() = default;
  AWS_SSM_API ListCloudConnectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SSM_API ListCloudConnectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of cloud connector summary objects.</p>
   */
  inline const Aws::Vector<CloudConnectorSummary>& GetCloudConnectors() const { return m_cloudConnectors; }
  template <typename CloudConnectorsT = Aws::Vector<CloudConnectorSummary>>
  void SetCloudConnectors(CloudConnectorsT&& value) {
    m_cloudConnectorsHasBeenSet = true;
    m_cloudConnectors = std::forward<CloudConnectorsT>(value);
  }
  template <typename CloudConnectorsT = Aws::Vector<CloudConnectorSummary>>
  ListCloudConnectorsResult& WithCloudConnectors(CloudConnectorsT&& value) {
    SetCloudConnectors(std::forward<CloudConnectorsT>(value));
    return *this;
  }
  template <typename CloudConnectorsT = CloudConnectorSummary>
  ListCloudConnectorsResult& AddCloudConnectors(CloudConnectorsT&& value) {
    m_cloudConnectorsHasBeenSet = true;
    m_cloudConnectors.emplace_back(std::forward<CloudConnectorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to use when requesting the next set of items.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListCloudConnectorsResult& WithNextToken(NextTokenT&& value) {
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
  ListCloudConnectorsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<CloudConnectorSummary> m_cloudConnectors;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_cloudConnectorsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SSM
}  // namespace Aws
