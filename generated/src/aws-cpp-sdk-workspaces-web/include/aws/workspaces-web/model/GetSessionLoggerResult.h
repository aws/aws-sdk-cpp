/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/SessionLogger.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkSpacesWeb
{
namespace Model
{
  class GetSessionLoggerResult
  {
  public:
    AWS_WORKSPACESWEB_API GetSessionLoggerResult() = default;
    AWS_WORKSPACESWEB_API GetSessionLoggerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API GetSessionLoggerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The session logger details.</p>
     */
    inline const SessionLogger& GetSessionLogger() const { return m_sessionLogger; }
    template<typename SessionLoggerT = SessionLogger>
    void SetSessionLogger(SessionLoggerT&& value) { m_sessionLoggerHasBeenSet = true; m_sessionLogger = std::forward<SessionLoggerT>(value); }
    template<typename SessionLoggerT = SessionLogger>
    GetSessionLoggerResult& WithSessionLogger(SessionLoggerT&& value) { SetSessionLogger(std::forward<SessionLoggerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSessionLoggerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SessionLogger m_sessionLogger;
    bool m_sessionLoggerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
