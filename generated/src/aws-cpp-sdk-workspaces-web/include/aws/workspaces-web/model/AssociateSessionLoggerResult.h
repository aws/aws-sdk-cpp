/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace WorkSpacesWeb {
namespace Model {
class AssociateSessionLoggerResult {
 public:
  AWS_WORKSPACESWEB_API AssociateSessionLoggerResult() = default;
  AWS_WORKSPACESWEB_API AssociateSessionLoggerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WORKSPACESWEB_API AssociateSessionLoggerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the portal.</p>
   */
  inline const Aws::String& GetPortalArn() const { return m_portalArn; }
  template <typename PortalArnT = Aws::String>
  void SetPortalArn(PortalArnT&& value) {
    m_portalArnHasBeenSet = true;
    m_portalArn = std::forward<PortalArnT>(value);
  }
  template <typename PortalArnT = Aws::String>
  AssociateSessionLoggerResult& WithPortalArn(PortalArnT&& value) {
    SetPortalArn(std::forward<PortalArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the session logger.</p>
   */
  inline const Aws::String& GetSessionLoggerArn() const { return m_sessionLoggerArn; }
  template <typename SessionLoggerArnT = Aws::String>
  void SetSessionLoggerArn(SessionLoggerArnT&& value) {
    m_sessionLoggerArnHasBeenSet = true;
    m_sessionLoggerArn = std::forward<SessionLoggerArnT>(value);
  }
  template <typename SessionLoggerArnT = Aws::String>
  AssociateSessionLoggerResult& WithSessionLoggerArn(SessionLoggerArnT&& value) {
    SetSessionLoggerArn(std::forward<SessionLoggerArnT>(value));
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
  AssociateSessionLoggerResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_portalArn;

  Aws::String m_sessionLoggerArn;

  Aws::String m_requestId;
  bool m_portalArnHasBeenSet = false;
  bool m_sessionLoggerArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
