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

    ExecutionStatus m_status;

    Aws::Map<Aws::String, CardStatus> m_cardStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
