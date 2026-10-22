/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/AttachmentNatConfiguration.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace NetworkManager {
namespace Model {
class ListAttachmentNatConfigurationsResult {
 public:
  AWS_NETWORKMANAGER_API ListAttachmentNatConfigurationsResult() = default;
  AWS_NETWORKMANAGER_API ListAttachmentNatConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKMANAGER_API ListAttachmentNatConfigurationsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The NAT configurations of the attachments.</p>
   */
  inline const Aws::Vector<AttachmentNatConfiguration>& GetAttachmentNatConfigurations() const { return m_attachmentNatConfigurations; }
  template <typename AttachmentNatConfigurationsT = Aws::Vector<AttachmentNatConfiguration>>
  void SetAttachmentNatConfigurations(AttachmentNatConfigurationsT&& value) {
    m_attachmentNatConfigurationsHasBeenSet = true;
    m_attachmentNatConfigurations = std::forward<AttachmentNatConfigurationsT>(value);
  }
  template <typename AttachmentNatConfigurationsT = Aws::Vector<AttachmentNatConfiguration>>
  ListAttachmentNatConfigurationsResult& WithAttachmentNatConfigurations(AttachmentNatConfigurationsT&& value) {
    SetAttachmentNatConfigurations(std::forward<AttachmentNatConfigurationsT>(value));
    return *this;
  }
  template <typename AttachmentNatConfigurationsT = AttachmentNatConfiguration>
  ListAttachmentNatConfigurationsResult& AddAttachmentNatConfigurations(AttachmentNatConfigurationsT&& value) {
    m_attachmentNatConfigurationsHasBeenSet = true;
    m_attachmentNatConfigurations.emplace_back(std::forward<AttachmentNatConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAttachmentNatConfigurationsResult& WithNextToken(NextTokenT&& value) {
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
  ListAttachmentNatConfigurationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AttachmentNatConfiguration> m_attachmentNatConfigurations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_attachmentNatConfigurationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
