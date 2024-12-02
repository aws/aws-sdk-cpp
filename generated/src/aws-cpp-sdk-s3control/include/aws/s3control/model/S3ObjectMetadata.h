/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/s3control/model/S3SSEAlgorithm.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3ObjectMetadata">AWS
   * API Reference</a></p>
   */
  class S3ObjectMetadata
  {
  public:
    AWS_S3CONTROL_API S3ObjectMetadata();
    AWS_S3CONTROL_API S3ObjectMetadata(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API S3ObjectMetadata& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetCacheControl() const{ return m_cacheControl; }
    inline bool CacheControlHasBeenSet() const { return m_cacheControlHasBeenSet; }
    inline void SetCacheControl(const Aws::String& value) { m_cacheControlHasBeenSet = true; m_cacheControl = value; }
    inline void SetCacheControl(Aws::String&& value) { m_cacheControlHasBeenSet = true; m_cacheControl = std::move(value); }
    inline void SetCacheControl(const char* value) { m_cacheControlHasBeenSet = true; m_cacheControl.assign(value); }
    inline S3ObjectMetadata& WithCacheControl(const Aws::String& value) { SetCacheControl(value); return *this;}
    inline S3ObjectMetadata& WithCacheControl(Aws::String&& value) { SetCacheControl(std::move(value)); return *this;}
    inline S3ObjectMetadata& WithCacheControl(const char* value) { SetCacheControl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetContentDisposition() const{ return m_contentDisposition; }
    inline bool ContentDispositionHasBeenSet() const { return m_contentDispositionHasBeenSet; }
    inline void SetContentDisposition(const Aws::String& value) { m_contentDispositionHasBeenSet = true; m_contentDisposition = value; }
    inline void SetContentDisposition(Aws::String&& value) { m_contentDispositionHasBeenSet = true; m_contentDisposition = std::move(value); }
    inline void SetContentDisposition(const char* value) { m_contentDispositionHasBeenSet = true; m_contentDisposition.assign(value); }
    inline S3ObjectMetadata& WithContentDisposition(const Aws::String& value) { SetContentDisposition(value); return *this;}
    inline S3ObjectMetadata& WithContentDisposition(Aws::String&& value) { SetContentDisposition(std::move(value)); return *this;}
    inline S3ObjectMetadata& WithContentDisposition(const char* value) { SetContentDisposition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetContentEncoding() const{ return m_contentEncoding; }
    inline bool ContentEncodingHasBeenSet() const { return m_contentEncodingHasBeenSet; }
    inline void SetContentEncoding(const Aws::String& value) { m_contentEncodingHasBeenSet = true; m_contentEncoding = value; }
    inline void SetContentEncoding(Aws::String&& value) { m_contentEncodingHasBeenSet = true; m_contentEncoding = std::move(value); }
    inline void SetContentEncoding(const char* value) { m_contentEncodingHasBeenSet = true; m_contentEncoding.assign(value); }
    inline S3ObjectMetadata& WithContentEncoding(const Aws::String& value) { SetContentEncoding(value); return *this;}
    inline S3ObjectMetadata& WithContentEncoding(Aws::String&& value) { SetContentEncoding(std::move(value)); return *this;}
    inline S3ObjectMetadata& WithContentEncoding(const char* value) { SetContentEncoding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetContentLanguage() const{ return m_contentLanguage; }
    inline bool ContentLanguageHasBeenSet() const { return m_contentLanguageHasBeenSet; }
    inline void SetContentLanguage(const Aws::String& value) { m_contentLanguageHasBeenSet = true; m_contentLanguage = value; }
    inline void SetContentLanguage(Aws::String&& value) { m_contentLanguageHasBeenSet = true; m_contentLanguage = std::move(value); }
    inline void SetContentLanguage(const char* value) { m_contentLanguageHasBeenSet = true; m_contentLanguage.assign(value); }
    inline S3ObjectMetadata& WithContentLanguage(const Aws::String& value) { SetContentLanguage(value); return *this;}
    inline S3ObjectMetadata& WithContentLanguage(Aws::String&& value) { SetContentLanguage(std::move(value)); return *this;}
    inline S3ObjectMetadata& WithContentLanguage(const char* value) { SetContentLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserMetadata() const{ return m_userMetadata; }
    inline bool UserMetadataHasBeenSet() const { return m_userMetadataHasBeenSet; }
    inline void SetUserMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_userMetadataHasBeenSet = true; m_userMetadata = value; }
    inline void SetUserMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_userMetadataHasBeenSet = true; m_userMetadata = std::move(value); }
    inline S3ObjectMetadata& WithUserMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetUserMetadata(value); return *this;}
    inline S3ObjectMetadata& WithUserMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetUserMetadata(std::move(value)); return *this;}
    inline S3ObjectMetadata& AddUserMetadata(const Aws::String& key, const Aws::String& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, value); return *this; }
    inline S3ObjectMetadata& AddUserMetadata(Aws::String&& key, const Aws::String& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), value); return *this; }
    inline S3ObjectMetadata& AddUserMetadata(const Aws::String& key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, std::move(value)); return *this; }
    inline S3ObjectMetadata& AddUserMetadata(Aws::String&& key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), std::move(value)); return *this; }
    inline S3ObjectMetadata& AddUserMetadata(const char* key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, std::move(value)); return *this; }
    inline S3ObjectMetadata& AddUserMetadata(Aws::String&& key, const char* value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), value); return *this; }
    inline S3ObjectMetadata& AddUserMetadata(const char* key, const char* value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p> <i>This member has been deprecated.</i> </p> <p/>
     */
    inline long long GetContentLength() const{ return m_contentLength; }
    inline bool ContentLengthHasBeenSet() const { return m_contentLengthHasBeenSet; }
    inline void SetContentLength(long long value) { m_contentLengthHasBeenSet = true; m_contentLength = value; }
    inline S3ObjectMetadata& WithContentLength(long long value) { SetContentLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>This member has been deprecated.</i> </p> <p/>
     */
    inline const Aws::String& GetContentMD5() const{ return m_contentMD5; }
    inline bool ContentMD5HasBeenSet() const { return m_contentMD5HasBeenSet; }
    inline void SetContentMD5(const Aws::String& value) { m_contentMD5HasBeenSet = true; m_contentMD5 = value; }
    inline void SetContentMD5(Aws::String&& value) { m_contentMD5HasBeenSet = true; m_contentMD5 = std::move(value); }
    inline void SetContentMD5(const char* value) { m_contentMD5HasBeenSet = true; m_contentMD5.assign(value); }
    inline S3ObjectMetadata& WithContentMD5(const Aws::String& value) { SetContentMD5(value); return *this;}
    inline S3ObjectMetadata& WithContentMD5(Aws::String&& value) { SetContentMD5(std::move(value)); return *this;}
    inline S3ObjectMetadata& WithContentMD5(const char* value) { SetContentMD5(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }
    inline S3ObjectMetadata& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline S3ObjectMetadata& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline S3ObjectMetadata& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Utils::DateTime& GetHttpExpiresDate() const{ return m_httpExpiresDate; }
    inline bool HttpExpiresDateHasBeenSet() const { return m_httpExpiresDateHasBeenSet; }
    inline void SetHttpExpiresDate(const Aws::Utils::DateTime& value) { m_httpExpiresDateHasBeenSet = true; m_httpExpiresDate = value; }
    inline void SetHttpExpiresDate(Aws::Utils::DateTime&& value) { m_httpExpiresDateHasBeenSet = true; m_httpExpiresDate = std::move(value); }
    inline S3ObjectMetadata& WithHttpExpiresDate(const Aws::Utils::DateTime& value) { SetHttpExpiresDate(value); return *this;}
    inline S3ObjectMetadata& WithHttpExpiresDate(Aws::Utils::DateTime&& value) { SetHttpExpiresDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>This member has been deprecated.</i> </p> <p/>
     */
    inline bool GetRequesterCharged() const{ return m_requesterCharged; }
    inline bool RequesterChargedHasBeenSet() const { return m_requesterChargedHasBeenSet; }
    inline void SetRequesterCharged(bool value) { m_requesterChargedHasBeenSet = true; m_requesterCharged = value; }
    inline S3ObjectMetadata& WithRequesterCharged(bool value) { SetRequesterCharged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The server-side encryption algorithm used when storing objects in Amazon
     * S3.</p> <p> <b>Directory buckets </b> - For directory buckets, there are only
     * two supported options for server-side encryption: server-side encryption with
     * Amazon S3 managed keys (SSE-S3) (<code>AES256</code>) and server-side encryption
     * with KMS keys (SSE-KMS) (<code>KMS</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-express-serv-side-encryption.html">Protecting
     * data with server-side encryption</a> in the <i>Amazon S3 User Guide</i>. For <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/directory-buckets-objects-Batch-Ops">the
     * Copy operation in Batch Operations</a>, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_S3CopyObjectOperation.html">S3CopyObjectOperation</a>.</p>
     */
    inline const S3SSEAlgorithm& GetSSEAlgorithm() const{ return m_sSEAlgorithm; }
    inline bool SSEAlgorithmHasBeenSet() const { return m_sSEAlgorithmHasBeenSet; }
    inline void SetSSEAlgorithm(const S3SSEAlgorithm& value) { m_sSEAlgorithmHasBeenSet = true; m_sSEAlgorithm = value; }
    inline void SetSSEAlgorithm(S3SSEAlgorithm&& value) { m_sSEAlgorithmHasBeenSet = true; m_sSEAlgorithm = std::move(value); }
    inline S3ObjectMetadata& WithSSEAlgorithm(const S3SSEAlgorithm& value) { SetSSEAlgorithm(value); return *this;}
    inline S3ObjectMetadata& WithSSEAlgorithm(S3SSEAlgorithm&& value) { SetSSEAlgorithm(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_cacheControl;
    bool m_cacheControlHasBeenSet = false;

    Aws::String m_contentDisposition;
    bool m_contentDispositionHasBeenSet = false;

    Aws::String m_contentEncoding;
    bool m_contentEncodingHasBeenSet = false;

    Aws::String m_contentLanguage;
    bool m_contentLanguageHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_userMetadata;
    bool m_userMetadataHasBeenSet = false;

    long long m_contentLength;
    bool m_contentLengthHasBeenSet = false;

    Aws::String m_contentMD5;
    bool m_contentMD5HasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::Utils::DateTime m_httpExpiresDate;
    bool m_httpExpiresDateHasBeenSet = false;

    bool m_requesterCharged;
    bool m_requesterChargedHasBeenSet = false;

    S3SSEAlgorithm m_sSEAlgorithm;
    bool m_sSEAlgorithmHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
