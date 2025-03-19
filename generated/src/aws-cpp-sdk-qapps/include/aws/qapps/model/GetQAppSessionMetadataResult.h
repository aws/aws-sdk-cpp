/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qapps/model/SessionSharingConfiguration.h>
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
namespace QApps
{
namespace Model
{
  class GetQAppSessionMetadataResult
  {
  public:
    AWS_QAPPS_API GetQAppSessionMetadataResult() = default;
    AWS_QAPPS_API GetQAppSessionMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QAPPS_API GetQAppSessionMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the Q App session.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    GetQAppSessionMetadataResult& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Q App session.</p>
     */
    inline const Aws::String& GetSessionArn() const { return m_sessionArn; }
    template<typename SessionArnT = Aws::String>
    void SetSessionArn(SessionArnT&& value) { m_sessionArnHasBeenSet = true; m_sessionArn = std::forward<SessionArnT>(value); }
    template<typename SessionArnT = Aws::String>
    GetQAppSessionMetadataResult& WithSessionArn(SessionArnT&& value) { SetSessionArn(std::forward<SessionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Q App session.</p>
     */
    inline const Aws::String& GetSessionName() const { return m_sessionName; }
    template<typename SessionNameT = Aws::String>
    void SetSessionName(SessionNameT&& value) { m_sessionNameHasBeenSet = true; m_sessionName = std::forward<SessionNameT>(value); }
    template<typename SessionNameT = Aws::String>
    GetQAppSessionMetadataResult& WithSessionName(SessionNameT&& value) { SetSessionName(std::forward<SessionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sharing configuration of the Q App data collection session.</p>
     */
    inline const SessionSharingConfiguration& GetSharingConfiguration() const { return m_sharingConfiguration; }
    template<typename SharingConfigurationT = SessionSharingConfiguration>
    void SetSharingConfiguration(SharingConfigurationT&& value) { m_sharingConfigurationHasBeenSet = true; m_sharingConfiguration = std::forward<SharingConfigurationT>(value); }
    template<typename SharingConfigurationT = SessionSharingConfiguration>
    GetQAppSessionMetadataResult& WithSharingConfiguration(SharingConfigurationT&& value) { SetSharingConfiguration(std::forward<SharingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the current user is the owner of the Q App session.</p>
     */
    inline bool GetSessionOwner() const { return m_sessionOwner; }
    inline void SetSessionOwner(bool value) { m_sessionOwnerHasBeenSet = true; m_sessionOwner = value; }
    inline GetQAppSessionMetadataResult& WithSessionOwner(bool value) { SetSessionOwner(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetQAppSessionMetadataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_sessionArn;
    bool m_sessionArnHasBeenSet = false;

    Aws::String m_sessionName;
    bool m_sessionNameHasBeenSet = false;

    SessionSharingConfiguration m_sharingConfiguration;
    bool m_sharingConfigurationHasBeenSet = false;

    bool m_sessionOwner{false};
    bool m_sessionOwnerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
