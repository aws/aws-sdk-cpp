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
    AWS_S3CONTROL_API S3ObjectMetadata() = default;
    AWS_S3CONTROL_API S3ObjectMetadata(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API S3ObjectMetadata& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetCacheControl() const { return m_cacheControl; }
    inline bool CacheControlHasBeenSet() const { return m_cacheControlHasBeenSet; }
    template<typename CacheControlT = Aws::String>
    void SetCacheControl(CacheControlT&& value) { m_cacheControlHasBeenSet = true; m_cacheControl = std::forward<CacheControlT>(value); }
    template<typename CacheControlT = Aws::String>
    S3ObjectMetadata& WithCacheControl(CacheControlT&& value) { SetCacheControl(std::forward<CacheControlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetContentDisposition() const { return m_contentDisposition; }
    inline bool ContentDispositionHasBeenSet() const { return m_contentDispositionHasBeenSet; }
    template<typename ContentDispositionT = Aws::String>
    void SetContentDisposition(ContentDispositionT&& value) { m_contentDispositionHasBeenSet = true; m_contentDisposition = std::forward<ContentDispositionT>(value); }
    template<typename ContentDispositionT = Aws::String>
    S3ObjectMetadata& WithContentDisposition(ContentDispositionT&& value) { SetContentDisposition(std::forward<ContentDispositionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetContentEncoding() const { return m_contentEncoding; }
    inline bool ContentEncodingHasBeenSet() const { return m_contentEncodingHasBeenSet; }
    template<typename ContentEncodingT = Aws::String>
    void SetContentEncoding(ContentEncodingT&& value) { m_contentEncodingHasBeenSet = true; m_contentEncoding = std::forward<ContentEncodingT>(value); }
    template<typename ContentEncodingT = Aws::String>
    S3ObjectMetadata& WithContentEncoding(ContentEncodingT&& value) { SetContentEncoding(std::forward<ContentEncodingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetContentLanguage() const { return m_contentLanguage; }
    inline bool ContentLanguageHasBeenSet() const { return m_contentLanguageHasBeenSet; }
    template<typename ContentLanguageT = Aws::String>
    void SetContentLanguage(ContentLanguageT&& value) { m_contentLanguageHasBeenSet = true; m_contentLanguage = std::forward<ContentLanguageT>(value); }
    template<typename ContentLanguageT = Aws::String>
    S3ObjectMetadata& WithContentLanguage(ContentLanguageT&& value) { SetContentLanguage(std::forward<ContentLanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserMetadata() const { return m_userMetadata; }
    inline bool UserMetadataHasBeenSet() const { return m_userMetadataHasBeenSet; }
    template<typename UserMetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetUserMetadata(UserMetadataT&& value) { m_userMetadataHasBeenSet = true; m_userMetadata = std::forward<UserMetadataT>(value); }
    template<typename UserMetadataT = Aws::Map<Aws::String, Aws::String>>
    S3ObjectMetadata& WithUserMetadata(UserMetadataT&& value) { SetUserMetadata(std::forward<UserMetadataT>(value)); return *this;}
    template<typename UserMetadataKeyT = Aws::String, typename UserMetadataValueT = Aws::String>
    S3ObjectMetadata& AddUserMetadata(UserMetadataKeyT&& key, UserMetadataValueT&& value) {
      m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::forward<UserMetadataKeyT>(key), std::forward<UserMetadataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> <i>This member has been deprecated.</i> </p> <p/>
     */
    inline long long GetContentLength() const { return m_contentLength; }
    inline bool ContentLengthHasBeenSet() const { return m_contentLengthHasBeenSet; }
    inline void SetContentLength(long long value) { m_contentLengthHasBeenSet = true; m_contentLength = value; }
    inline S3ObjectMetadata& WithContentLength(long long value) { SetContentLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>This member has been deprecated.</i> </p> <p/>
     */
    inline const Aws::String& GetContentMD5() const { return m_contentMD5; }
    inline bool ContentMD5HasBeenSet() const { return m_contentMD5HasBeenSet; }
    template<typename ContentMD5T = Aws::String>
    void SetContentMD5(ContentMD5T&& value) { m_contentMD5HasBeenSet = true; m_contentMD5 = std::forward<ContentMD5T>(value); }
    template<typename ContentMD5T = Aws::String>
    S3ObjectMetadata& WithContentMD5(ContentMD5T&& value) { SetContentMD5(std::forward<ContentMD5T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    S3ObjectMetadata& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Utils::DateTime& GetHttpExpiresDate() const { return m_httpExpiresDate; }
    inline bool HttpExpiresDateHasBeenSet() const { return m_httpExpiresDateHasBeenSet; }
    template<typename HttpExpiresDateT = Aws::Utils::DateTime>
    void SetHttpExpiresDate(HttpExpiresDateT&& value) { m_httpExpiresDateHasBeenSet = true; m_httpExpiresDate = std::forward<HttpExpiresDateT>(value); }
    template<typename HttpExpiresDateT = Aws::Utils::DateTime>
    S3ObjectMetadata& WithHttpExpiresDate(HttpExpiresDateT&& value) { SetHttpExpiresDate(std::forward<HttpExpiresDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>This member has been deprecated.</i> </p> <p/>
     */
    inline bool GetRequesterCharged() const { return m_requesterCharged; }
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
    inline S3SSEAlgorithm GetSSEAlgorithm() const { return m_sSEAlgorithm; }
    inline bool SSEAlgorithmHasBeenSet() const { return m_sSEAlgorithmHasBeenSet; }
    inline void SetSSEAlgorithm(S3SSEAlgorithm value) { m_sSEAlgorithmHasBeenSet = true; m_sSEAlgorithm = value; }
    inline S3ObjectMetadata& WithSSEAlgorithm(S3SSEAlgorithm value) { SetSSEAlgorithm(value); return *this;}
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

    long long m_contentLength{0};
    bool m_contentLengthHasBeenSet = false;

    Aws::String m_contentMD5;
    bool m_contentMD5HasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::Utils::DateTime m_httpExpiresDate{};
    bool m_httpExpiresDateHasBeenSet = false;

    bool m_requesterCharged{false};
    bool m_requesterChargedHasBeenSet = false;

    S3SSEAlgorithm m_sSEAlgorithm{S3SSEAlgorithm::NOT_SET};
    bool m_sSEAlgorithmHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
