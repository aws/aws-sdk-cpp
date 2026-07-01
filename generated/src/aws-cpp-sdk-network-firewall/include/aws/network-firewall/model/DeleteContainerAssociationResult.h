/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ContainerAssociationStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {
class DeleteContainerAssociationResult {
 public:
  AWS_NETWORKFIREWALL_API DeleteContainerAssociationResult() = default;
  AWS_NETWORKFIREWALL_API DeleteContainerAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKFIREWALL_API DeleteContainerAssociationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The descriptive name of the container association.</p>
   */
  inline const Aws::String& GetContainerAssociationName() const { return m_containerAssociationName; }
  template <typename ContainerAssociationNameT = Aws::String>
  void SetContainerAssociationName(ContainerAssociationNameT&& value) {
    m_containerAssociationNameHasBeenSet = true;
    m_containerAssociationName = std::forward<ContainerAssociationNameT>(value);
  }
  template <typename ContainerAssociationNameT = Aws::String>
  DeleteContainerAssociationResult& WithContainerAssociationName(ContainerAssociationNameT&& value) {
    SetContainerAssociationName(std::forward<ContainerAssociationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the container association.</p>
   */
  inline const Aws::String& GetContainerAssociationArn() const { return m_containerAssociationArn; }
  template <typename ContainerAssociationArnT = Aws::String>
  void SetContainerAssociationArn(ContainerAssociationArnT&& value) {
    m_containerAssociationArnHasBeenSet = true;
    m_containerAssociationArn = std::forward<ContainerAssociationArnT>(value);
  }
  template <typename ContainerAssociationArnT = Aws::String>
  DeleteContainerAssociationResult& WithContainerAssociationArn(ContainerAssociationArnT&& value) {
    SetContainerAssociationArn(std::forward<ContainerAssociationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the container association.</p>
   */
  inline ContainerAssociationStatus GetStatus() const { return m_status; }
  inline void SetStatus(ContainerAssociationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DeleteContainerAssociationResult& WithStatus(ContainerAssociationStatus value) {
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
  DeleteContainerAssociationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_containerAssociationName;

  Aws::String m_containerAssociationArn;

  ContainerAssociationStatus m_status{ContainerAssociationStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_containerAssociationNameHasBeenSet = false;
  bool m_containerAssociationArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
