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
    AWS_QAPPS_API GetQAppSessionResult();
    AWS_QAPPS_API GetQAppSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QAPPS_API GetQAppSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the Q App session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }
    inline GetQAppSessionResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline GetQAppSessionResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline GetQAppSessionResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Q App session.</p>
     */
    inline const Aws::String& GetSessionArn() const{ return m_sessionArn; }
    inline void SetSessionArn(const Aws::String& value) { m_sessionArn = value; }
    inline void SetSessionArn(Aws::String&& value) { m_sessionArn = std::move(value); }
    inline void SetSessionArn(const char* value) { m_sessionArn.assign(value); }
    inline GetQAppSessionResult& WithSessionArn(const Aws::String& value) { SetSessionArn(value); return *this;}
    inline GetQAppSessionResult& WithSessionArn(Aws::String&& value) { SetSessionArn(std::move(value)); return *this;}
    inline GetQAppSessionResult& WithSessionArn(const char* value) { SetSessionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Q App session.</p>
     */
    inline const Aws::String& GetSessionName() const{ return m_sessionName; }
    inline void SetSessionName(const Aws::String& value) { m_sessionName = value; }
    inline void SetSessionName(Aws::String&& value) { m_sessionName = std::move(value); }
    inline void SetSessionName(const char* value) { m_sessionName.assign(value); }
    inline GetQAppSessionResult& WithSessionName(const Aws::String& value) { SetSessionName(value); return *this;}
    inline GetQAppSessionResult& WithSessionName(Aws::String&& value) { SetSessionName(std::move(value)); return *this;}
    inline GetQAppSessionResult& WithSessionName(const char* value) { SetSessionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Q App used for the session.</p>
     */
    inline int GetAppVersion() const{ return m_appVersion; }
    inline void SetAppVersion(int value) { m_appVersion = value; }
    inline GetQAppSessionResult& WithAppVersion(int value) { SetAppVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest published version of the Q App used for the session.</p>
     */
    inline int GetLatestPublishedAppVersion() const{ return m_latestPublishedAppVersion; }
    inline void SetLatestPublishedAppVersion(int value) { m_latestPublishedAppVersion = value; }
    inline GetQAppSessionResult& WithLatestPublishedAppVersion(int value) { SetLatestPublishedAppVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the Q App session.</p>
     */
    inline const ExecutionStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ExecutionStatus& value) { m_status = value; }
    inline void SetStatus(ExecutionStatus&& value) { m_status = std::move(value); }
    inline GetQAppSessionResult& WithStatus(const ExecutionStatus& value) { SetStatus(value); return *this;}
    inline GetQAppSessionResult& WithStatus(ExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status for each card in the Q App session.</p>
     */
    inline const Aws::Map<Aws::String, CardStatus>& GetCardStatus() const{ return m_cardStatus; }
    inline void SetCardStatus(const Aws::Map<Aws::String, CardStatus>& value) { m_cardStatus = value; }
    inline void SetCardStatus(Aws::Map<Aws::String, CardStatus>&& value) { m_cardStatus = std::move(value); }
    inline GetQAppSessionResult& WithCardStatus(const Aws::Map<Aws::String, CardStatus>& value) { SetCardStatus(value); return *this;}
    inline GetQAppSessionResult& WithCardStatus(Aws::Map<Aws::String, CardStatus>&& value) { SetCardStatus(std::move(value)); return *this;}
    inline GetQAppSessionResult& AddCardStatus(const Aws::String& key, const CardStatus& value) { m_cardStatus.emplace(key, value); return *this; }
    inline GetQAppSessionResult& AddCardStatus(Aws::String&& key, const CardStatus& value) { m_cardStatus.emplace(std::move(key), value); return *this; }
    inline GetQAppSessionResult& AddCardStatus(const Aws::String& key, CardStatus&& value) { m_cardStatus.emplace(key, std::move(value)); return *this; }
    inline GetQAppSessionResult& AddCardStatus(Aws::String&& key, CardStatus&& value) { m_cardStatus.emplace(std::move(key), std::move(value)); return *this; }
    inline GetQAppSessionResult& AddCardStatus(const char* key, CardStatus&& value) { m_cardStatus.emplace(key, std::move(value)); return *this; }
    inline GetQAppSessionResult& AddCardStatus(const char* key, const CardStatus& value) { m_cardStatus.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the current user is the owner of the Q App data collection
     * session.</p>
     */
    inline bool GetUserIsHost() const{ return m_userIsHost; }
    inline void SetUserIsHost(bool value) { m_userIsHost = value; }
    inline GetQAppSessionResult& WithUserIsHost(bool value) { SetUserIsHost(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetQAppSessionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetQAppSessionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetQAppSessionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;

    Aws::String m_sessionArn;

    Aws::String m_sessionName;

    int m_appVersion;

    int m_latestPublishedAppVersion;

    ExecutionStatus m_status;

    Aws::Map<Aws::String, CardStatus> m_cardStatus;

    bool m_userIsHost;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
