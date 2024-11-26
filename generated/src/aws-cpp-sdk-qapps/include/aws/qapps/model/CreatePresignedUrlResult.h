/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
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
  class CreatePresignedUrlResult
  {
  public:
    AWS_QAPPS_API CreatePresignedUrlResult();
    AWS_QAPPS_API CreatePresignedUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QAPPS_API CreatePresignedUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier assigned to the file to be uploaded.</p>
     */
    inline const Aws::String& GetFileId() const{ return m_fileId; }
    inline void SetFileId(const Aws::String& value) { m_fileId = value; }
    inline void SetFileId(Aws::String&& value) { m_fileId = std::move(value); }
    inline void SetFileId(const char* value) { m_fileId.assign(value); }
    inline CreatePresignedUrlResult& WithFileId(const Aws::String& value) { SetFileId(value); return *this;}
    inline CreatePresignedUrlResult& WithFileId(Aws::String&& value) { SetFileId(std::move(value)); return *this;}
    inline CreatePresignedUrlResult& WithFileId(const char* value) { SetFileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL for a presigned S3 POST operation used to upload a file.</p>
     */
    inline const Aws::String& GetPresignedUrl() const{ return m_presignedUrl; }
    inline void SetPresignedUrl(const Aws::String& value) { m_presignedUrl = value; }
    inline void SetPresignedUrl(Aws::String&& value) { m_presignedUrl = std::move(value); }
    inline void SetPresignedUrl(const char* value) { m_presignedUrl.assign(value); }
    inline CreatePresignedUrlResult& WithPresignedUrl(const Aws::String& value) { SetPresignedUrl(value); return *this;}
    inline CreatePresignedUrlResult& WithPresignedUrl(Aws::String&& value) { SetPresignedUrl(std::move(value)); return *this;}
    inline CreatePresignedUrlResult& WithPresignedUrl(const char* value) { SetPresignedUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The form fields to include in the presigned S3 POST operation used to upload
     * a file.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPresignedUrlFields() const{ return m_presignedUrlFields; }
    inline void SetPresignedUrlFields(const Aws::Map<Aws::String, Aws::String>& value) { m_presignedUrlFields = value; }
    inline void SetPresignedUrlFields(Aws::Map<Aws::String, Aws::String>&& value) { m_presignedUrlFields = std::move(value); }
    inline CreatePresignedUrlResult& WithPresignedUrlFields(const Aws::Map<Aws::String, Aws::String>& value) { SetPresignedUrlFields(value); return *this;}
    inline CreatePresignedUrlResult& WithPresignedUrlFields(Aws::Map<Aws::String, Aws::String>&& value) { SetPresignedUrlFields(std::move(value)); return *this;}
    inline CreatePresignedUrlResult& AddPresignedUrlFields(const Aws::String& key, const Aws::String& value) { m_presignedUrlFields.emplace(key, value); return *this; }
    inline CreatePresignedUrlResult& AddPresignedUrlFields(Aws::String&& key, const Aws::String& value) { m_presignedUrlFields.emplace(std::move(key), value); return *this; }
    inline CreatePresignedUrlResult& AddPresignedUrlFields(const Aws::String& key, Aws::String&& value) { m_presignedUrlFields.emplace(key, std::move(value)); return *this; }
    inline CreatePresignedUrlResult& AddPresignedUrlFields(Aws::String&& key, Aws::String&& value) { m_presignedUrlFields.emplace(std::move(key), std::move(value)); return *this; }
    inline CreatePresignedUrlResult& AddPresignedUrlFields(const char* key, Aws::String&& value) { m_presignedUrlFields.emplace(key, std::move(value)); return *this; }
    inline CreatePresignedUrlResult& AddPresignedUrlFields(Aws::String&& key, const char* value) { m_presignedUrlFields.emplace(std::move(key), value); return *this; }
    inline CreatePresignedUrlResult& AddPresignedUrlFields(const char* key, const char* value) { m_presignedUrlFields.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time that the presigned URL will expire in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetPresignedUrlExpiration() const{ return m_presignedUrlExpiration; }
    inline void SetPresignedUrlExpiration(const Aws::Utils::DateTime& value) { m_presignedUrlExpiration = value; }
    inline void SetPresignedUrlExpiration(Aws::Utils::DateTime&& value) { m_presignedUrlExpiration = std::move(value); }
    inline CreatePresignedUrlResult& WithPresignedUrlExpiration(const Aws::Utils::DateTime& value) { SetPresignedUrlExpiration(value); return *this;}
    inline CreatePresignedUrlResult& WithPresignedUrlExpiration(Aws::Utils::DateTime&& value) { SetPresignedUrlExpiration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreatePresignedUrlResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreatePresignedUrlResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreatePresignedUrlResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_fileId;

    Aws::String m_presignedUrl;

    Aws::Map<Aws::String, Aws::String> m_presignedUrlFields;

    Aws::Utils::DateTime m_presignedUrlExpiration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
