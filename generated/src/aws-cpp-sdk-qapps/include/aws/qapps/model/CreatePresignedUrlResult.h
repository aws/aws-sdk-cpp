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
    AWS_QAPPS_API CreatePresignedUrlResult() = default;
    AWS_QAPPS_API CreatePresignedUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QAPPS_API CreatePresignedUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier assigned to the file to be uploaded.</p>
     */
    inline const Aws::String& GetFileId() const { return m_fileId; }
    template<typename FileIdT = Aws::String>
    void SetFileId(FileIdT&& value) { m_fileIdHasBeenSet = true; m_fileId = std::forward<FileIdT>(value); }
    template<typename FileIdT = Aws::String>
    CreatePresignedUrlResult& WithFileId(FileIdT&& value) { SetFileId(std::forward<FileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL for a presigned S3 POST operation used to upload a file.</p>
     */
    inline const Aws::String& GetPresignedUrl() const { return m_presignedUrl; }
    template<typename PresignedUrlT = Aws::String>
    void SetPresignedUrl(PresignedUrlT&& value) { m_presignedUrlHasBeenSet = true; m_presignedUrl = std::forward<PresignedUrlT>(value); }
    template<typename PresignedUrlT = Aws::String>
    CreatePresignedUrlResult& WithPresignedUrl(PresignedUrlT&& value) { SetPresignedUrl(std::forward<PresignedUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The form fields to include in the presigned S3 POST operation used to upload
     * a file.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPresignedUrlFields() const { return m_presignedUrlFields; }
    template<typename PresignedUrlFieldsT = Aws::Map<Aws::String, Aws::String>>
    void SetPresignedUrlFields(PresignedUrlFieldsT&& value) { m_presignedUrlFieldsHasBeenSet = true; m_presignedUrlFields = std::forward<PresignedUrlFieldsT>(value); }
    template<typename PresignedUrlFieldsT = Aws::Map<Aws::String, Aws::String>>
    CreatePresignedUrlResult& WithPresignedUrlFields(PresignedUrlFieldsT&& value) { SetPresignedUrlFields(std::forward<PresignedUrlFieldsT>(value)); return *this;}
    template<typename PresignedUrlFieldsKeyT = Aws::String, typename PresignedUrlFieldsValueT = Aws::String>
    CreatePresignedUrlResult& AddPresignedUrlFields(PresignedUrlFieldsKeyT&& key, PresignedUrlFieldsValueT&& value) {
      m_presignedUrlFieldsHasBeenSet = true; m_presignedUrlFields.emplace(std::forward<PresignedUrlFieldsKeyT>(key), std::forward<PresignedUrlFieldsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The date and time that the presigned URL will expire in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetPresignedUrlExpiration() const { return m_presignedUrlExpiration; }
    template<typename PresignedUrlExpirationT = Aws::Utils::DateTime>
    void SetPresignedUrlExpiration(PresignedUrlExpirationT&& value) { m_presignedUrlExpirationHasBeenSet = true; m_presignedUrlExpiration = std::forward<PresignedUrlExpirationT>(value); }
    template<typename PresignedUrlExpirationT = Aws::Utils::DateTime>
    CreatePresignedUrlResult& WithPresignedUrlExpiration(PresignedUrlExpirationT&& value) { SetPresignedUrlExpiration(std::forward<PresignedUrlExpirationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreatePresignedUrlResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fileId;
    bool m_fileIdHasBeenSet = false;

    Aws::String m_presignedUrl;
    bool m_presignedUrlHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_presignedUrlFields;
    bool m_presignedUrlFieldsHasBeenSet = false;

    Aws::Utils::DateTime m_presignedUrlExpiration{};
    bool m_presignedUrlExpirationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
