/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/StreamingSessionBackup.h>
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
namespace NimbleStudio
{
namespace Model
{
  class GetStreamingSessionBackupResult
  {
  public:
    AWS_NIMBLESTUDIO_API GetStreamingSessionBackupResult();
    AWS_NIMBLESTUDIO_API GetStreamingSessionBackupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NIMBLESTUDIO_API GetStreamingSessionBackupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the streaming session backup.</p>
     */
    inline const StreamingSessionBackup& GetStreamingSessionBackup() const{ return m_streamingSessionBackup; }

    /**
     * <p>Information about the streaming session backup.</p>
     */
    inline void SetStreamingSessionBackup(const StreamingSessionBackup& value) { m_streamingSessionBackup = value; }

    /**
     * <p>Information about the streaming session backup.</p>
     */
    inline void SetStreamingSessionBackup(StreamingSessionBackup&& value) { m_streamingSessionBackup = std::move(value); }

    /**
     * <p>Information about the streaming session backup.</p>
     */
    inline GetStreamingSessionBackupResult& WithStreamingSessionBackup(const StreamingSessionBackup& value) { SetStreamingSessionBackup(value); return *this;}

    /**
     * <p>Information about the streaming session backup.</p>
     */
    inline GetStreamingSessionBackupResult& WithStreamingSessionBackup(StreamingSessionBackup&& value) { SetStreamingSessionBackup(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetStreamingSessionBackupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetStreamingSessionBackupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetStreamingSessionBackupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    StreamingSessionBackup m_streamingSessionBackup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
