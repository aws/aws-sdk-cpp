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
  class UpdateSessionLoggerResult
  {
  public:
    AWS_WORKSPACESWEB_API UpdateSessionLoggerResult() = default;
    AWS_WORKSPACESWEB_API UpdateSessionLoggerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API UpdateSessionLoggerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The updated details of the session logger.</p>
     */
    inline const SessionLogger& GetSessionLogger() const { return m_sessionLogger; }
    template<typename SessionLoggerT = SessionLogger>
    void SetSessionLogger(SessionLoggerT&& value) { m_sessionLoggerHasBeenSet = true; m_sessionLogger = std::forward<SessionLoggerT>(value); }
    template<typename SessionLoggerT = SessionLogger>
    UpdateSessionLoggerResult& WithSessionLogger(SessionLoggerT&& value) { SetSessionLogger(std::forward<SessionLoggerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateSessionLoggerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
