﻿/**
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
class CreateSessionLoggerResult {
 public:
  AWS_WORKSPACESWEB_API CreateSessionLoggerResult() = default;
  AWS_WORKSPACESWEB_API CreateSessionLoggerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WORKSPACESWEB_API CreateSessionLoggerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  CreateSessionLoggerResult& WithSessionLoggerArn(SessionLoggerArnT&& value) {
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
  CreateSessionLoggerResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sessionLoggerArn;
  bool m_sessionLoggerArnHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
