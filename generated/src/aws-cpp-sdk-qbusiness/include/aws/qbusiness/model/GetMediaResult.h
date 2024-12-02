/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
namespace QBusiness
{
namespace Model
{
  class GetMediaResult
  {
  public:
    AWS_QBUSINESS_API GetMediaResult();
    AWS_QBUSINESS_API GetMediaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API GetMediaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The base64-encoded bytes of the media object.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetMediaBytes() const{ return m_mediaBytes; }
    inline void SetMediaBytes(const Aws::Utils::ByteBuffer& value) { m_mediaBytes = value; }
    inline void SetMediaBytes(Aws::Utils::ByteBuffer&& value) { m_mediaBytes = std::move(value); }
    inline GetMediaResult& WithMediaBytes(const Aws::Utils::ByteBuffer& value) { SetMediaBytes(value); return *this;}
    inline GetMediaResult& WithMediaBytes(Aws::Utils::ByteBuffer&& value) { SetMediaBytes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MIME type of the media object (image/png).</p>
     */
    inline const Aws::String& GetMediaMimeType() const{ return m_mediaMimeType; }
    inline void SetMediaMimeType(const Aws::String& value) { m_mediaMimeType = value; }
    inline void SetMediaMimeType(Aws::String&& value) { m_mediaMimeType = std::move(value); }
    inline void SetMediaMimeType(const char* value) { m_mediaMimeType.assign(value); }
    inline GetMediaResult& WithMediaMimeType(const Aws::String& value) { SetMediaMimeType(value); return *this;}
    inline GetMediaResult& WithMediaMimeType(Aws::String&& value) { SetMediaMimeType(std::move(value)); return *this;}
    inline GetMediaResult& WithMediaMimeType(const char* value) { SetMediaMimeType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetMediaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetMediaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetMediaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_mediaBytes;

    Aws::String m_mediaMimeType;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
