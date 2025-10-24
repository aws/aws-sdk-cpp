﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/SessionLoggerSummary.h>

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
class ListSessionLoggersResult {
 public:
  AWS_WORKSPACESWEB_API ListSessionLoggersResult() = default;
  AWS_WORKSPACESWEB_API ListSessionLoggersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WORKSPACESWEB_API ListSessionLoggersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of session loggers, including summaries of their details.</p>
   */
  inline const Aws::Vector<SessionLoggerSummary>& GetSessionLoggers() const { return m_sessionLoggers; }
  template <typename SessionLoggersT = Aws::Vector<SessionLoggerSummary>>
  void SetSessionLoggers(SessionLoggersT&& value) {
    m_sessionLoggersHasBeenSet = true;
    m_sessionLoggers = std::forward<SessionLoggersT>(value);
  }
  template <typename SessionLoggersT = Aws::Vector<SessionLoggerSummary>>
  ListSessionLoggersResult& WithSessionLoggers(SessionLoggersT&& value) {
    SetSessionLoggers(std::forward<SessionLoggersT>(value));
    return *this;
  }
  template <typename SessionLoggersT = SessionLoggerSummary>
  ListSessionLoggersResult& AddSessionLoggers(SessionLoggersT&& value) {
    m_sessionLoggersHasBeenSet = true;
    m_sessionLoggers.emplace_back(std::forward<SessionLoggersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token used to retrieve the next page of results for this
   * operation.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListSessionLoggersResult& WithNextToken(NextTokenT&& value) {
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
  ListSessionLoggersResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<SessionLoggerSummary> m_sessionLoggers;
  bool m_sessionLoggersHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
