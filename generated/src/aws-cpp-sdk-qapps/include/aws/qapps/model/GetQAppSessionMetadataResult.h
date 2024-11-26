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
    AWS_QAPPS_API GetQAppSessionMetadataResult();
    AWS_QAPPS_API GetQAppSessionMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QAPPS_API GetQAppSessionMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the Q App session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }
    inline GetQAppSessionMetadataResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline GetQAppSessionMetadataResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline GetQAppSessionMetadataResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Q App session.</p>
     */
    inline const Aws::String& GetSessionArn() const{ return m_sessionArn; }
    inline void SetSessionArn(const Aws::String& value) { m_sessionArn = value; }
    inline void SetSessionArn(Aws::String&& value) { m_sessionArn = std::move(value); }
    inline void SetSessionArn(const char* value) { m_sessionArn.assign(value); }
    inline GetQAppSessionMetadataResult& WithSessionArn(const Aws::String& value) { SetSessionArn(value); return *this;}
    inline GetQAppSessionMetadataResult& WithSessionArn(Aws::String&& value) { SetSessionArn(std::move(value)); return *this;}
    inline GetQAppSessionMetadataResult& WithSessionArn(const char* value) { SetSessionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Q App session.</p>
     */
    inline const Aws::String& GetSessionName() const{ return m_sessionName; }
    inline void SetSessionName(const Aws::String& value) { m_sessionName = value; }
    inline void SetSessionName(Aws::String&& value) { m_sessionName = std::move(value); }
    inline void SetSessionName(const char* value) { m_sessionName.assign(value); }
    inline GetQAppSessionMetadataResult& WithSessionName(const Aws::String& value) { SetSessionName(value); return *this;}
    inline GetQAppSessionMetadataResult& WithSessionName(Aws::String&& value) { SetSessionName(std::move(value)); return *this;}
    inline GetQAppSessionMetadataResult& WithSessionName(const char* value) { SetSessionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sharing configuration of the Q App data collection session.</p>
     */
    inline const SessionSharingConfiguration& GetSharingConfiguration() const{ return m_sharingConfiguration; }
    inline void SetSharingConfiguration(const SessionSharingConfiguration& value) { m_sharingConfiguration = value; }
    inline void SetSharingConfiguration(SessionSharingConfiguration&& value) { m_sharingConfiguration = std::move(value); }
    inline GetQAppSessionMetadataResult& WithSharingConfiguration(const SessionSharingConfiguration& value) { SetSharingConfiguration(value); return *this;}
    inline GetQAppSessionMetadataResult& WithSharingConfiguration(SessionSharingConfiguration&& value) { SetSharingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the current user is the owner of the Q App session.</p>
     */
    inline bool GetSessionOwner() const{ return m_sessionOwner; }
    inline void SetSessionOwner(bool value) { m_sessionOwner = value; }
    inline GetQAppSessionMetadataResult& WithSessionOwner(bool value) { SetSessionOwner(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetQAppSessionMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetQAppSessionMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetQAppSessionMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;

    Aws::String m_sessionArn;

    Aws::String m_sessionName;

    SessionSharingConfiguration m_sharingConfiguration;

    bool m_sessionOwner;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
