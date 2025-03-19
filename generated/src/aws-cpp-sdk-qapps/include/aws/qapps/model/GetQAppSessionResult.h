/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qapps/model/ExecutionStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/qapps/model/CardStatus.h>
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
  class GetQAppSessionResult
  {
  public:
    AWS_QAPPS_API GetQAppSessionResult() = default;
    AWS_QAPPS_API GetQAppSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QAPPS_API GetQAppSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the Q App session.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    GetQAppSessionResult& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Q App session.</p>
     */
    inline const Aws::String& GetSessionArn() const { return m_sessionArn; }
    template<typename SessionArnT = Aws::String>
    void SetSessionArn(SessionArnT&& value) { m_sessionArnHasBeenSet = true; m_sessionArn = std::forward<SessionArnT>(value); }
    template<typename SessionArnT = Aws::String>
    GetQAppSessionResult& WithSessionArn(SessionArnT&& value) { SetSessionArn(std::forward<SessionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Q App session.</p>
     */
    inline const Aws::String& GetSessionName() const { return m_sessionName; }
    template<typename SessionNameT = Aws::String>
    void SetSessionName(SessionNameT&& value) { m_sessionNameHasBeenSet = true; m_sessionName = std::forward<SessionNameT>(value); }
    template<typename SessionNameT = Aws::String>
    GetQAppSessionResult& WithSessionName(SessionNameT&& value) { SetSessionName(std::forward<SessionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Q App used for the session.</p>
     */
    inline int GetAppVersion() const { return m_appVersion; }
    inline void SetAppVersion(int value) { m_appVersionHasBeenSet = true; m_appVersion = value; }
    inline GetQAppSessionResult& WithAppVersion(int value) { SetAppVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest published version of the Q App used for the session.</p>
     */
    inline int GetLatestPublishedAppVersion() const { return m_latestPublishedAppVersion; }
    inline void SetLatestPublishedAppVersion(int value) { m_latestPublishedAppVersionHasBeenSet = true; m_latestPublishedAppVersion = value; }
    inline GetQAppSessionResult& WithLatestPublishedAppVersion(int value) { SetLatestPublishedAppVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the Q App session.</p>
     */
    inline ExecutionStatus GetStatus() const { return m_status; }
    inline void SetStatus(ExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetQAppSessionResult& WithStatus(ExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status for each card in the Q App session.</p>
     */
    inline const Aws::Map<Aws::String, CardStatus>& GetCardStatus() const { return m_cardStatus; }
    template<typename CardStatusT = Aws::Map<Aws::String, CardStatus>>
    void SetCardStatus(CardStatusT&& value) { m_cardStatusHasBeenSet = true; m_cardStatus = std::forward<CardStatusT>(value); }
    template<typename CardStatusT = Aws::Map<Aws::String, CardStatus>>
    GetQAppSessionResult& WithCardStatus(CardStatusT&& value) { SetCardStatus(std::forward<CardStatusT>(value)); return *this;}
    template<typename CardStatusKeyT = Aws::String, typename CardStatusValueT = CardStatus>
    GetQAppSessionResult& AddCardStatus(CardStatusKeyT&& key, CardStatusValueT&& value) {
      m_cardStatusHasBeenSet = true; m_cardStatus.emplace(std::forward<CardStatusKeyT>(key), std::forward<CardStatusValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the current user is the owner of the Q App data collection
     * session.</p>
     */
    inline bool GetUserIsHost() const { return m_userIsHost; }
    inline void SetUserIsHost(bool value) { m_userIsHostHasBeenSet = true; m_userIsHost = value; }
    inline GetQAppSessionResult& WithUserIsHost(bool value) { SetUserIsHost(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetQAppSessionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_sessionArn;
    bool m_sessionArnHasBeenSet = false;

    Aws::String m_sessionName;
    bool m_sessionNameHasBeenSet = false;

    int m_appVersion{0};
    bool m_appVersionHasBeenSet = false;

    int m_latestPublishedAppVersion{0};
    bool m_latestPublishedAppVersionHasBeenSet = false;

    ExecutionStatus m_status{ExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, CardStatus> m_cardStatus;
    bool m_cardStatusHasBeenSet = false;

    bool m_userIsHost{false};
    bool m_userIsHostHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
