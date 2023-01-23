/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details about an Amazon S3 object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3ObjectDetails">AWS
   * API Reference</a></p>
   */
  class AwsS3ObjectDetails
  {
  public:
    AWS_SECURITYHUB_API AwsS3ObjectDetails();
    AWS_SECURITYHUB_API AwsS3ObjectDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3ObjectDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates when the object was last modified.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>Indicates when the object was last modified.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }

    /**
     * <p>Indicates when the object was last modified.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetLastModified(const Aws::String& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }

    /**
     * <p>Indicates when the object was last modified.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetLastModified(Aws::String&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }

    /**
     * <p>Indicates when the object was last modified.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetLastModified(const char* value) { m_lastModifiedHasBeenSet = true; m_lastModified.assign(value); }

    /**
     * <p>Indicates when the object was last modified.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsS3ObjectDetails& WithLastModified(const Aws::String& value) { SetLastModified(value); return *this;}

    /**
     * <p>Indicates when the object was last modified.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsS3ObjectDetails& WithLastModified(Aws::String&& value) { SetLastModified(std::move(value)); return *this;}

    /**
     * <p>Indicates when the object was last modified.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsS3ObjectDetails& WithLastModified(const char* value) { SetLastModified(value); return *this;}


    /**
     * <p>The opaque identifier assigned by a web server to a specific version of a
     * resource found at a URL.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The opaque identifier assigned by a web server to a specific version of a
     * resource found at a URL.</p>
     */
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }

    /**
     * <p>The opaque identifier assigned by a web server to a specific version of a
     * resource found at a URL.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTagHasBeenSet = true; m_eTag = value; }

    /**
     * <p>The opaque identifier assigned by a web server to a specific version of a
     * resource found at a URL.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTagHasBeenSet = true; m_eTag = std::move(value); }

    /**
     * <p>The opaque identifier assigned by a web server to a specific version of a
     * resource found at a URL.</p>
     */
    inline void SetETag(const char* value) { m_eTagHasBeenSet = true; m_eTag.assign(value); }

    /**
     * <p>The opaque identifier assigned by a web server to a specific version of a
     * resource found at a URL.</p>
     */
    inline AwsS3ObjectDetails& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The opaque identifier assigned by a web server to a specific version of a
     * resource found at a URL.</p>
     */
    inline AwsS3ObjectDetails& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The opaque identifier assigned by a web server to a specific version of a
     * resource found at a URL.</p>
     */
    inline AwsS3ObjectDetails& WithETag(const char* value) { SetETag(value); return *this;}


    /**
     * <p>The version of the object.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The version of the object.</p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>The version of the object.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>The version of the object.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p>The version of the object.</p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>The version of the object.</p>
     */
    inline AwsS3ObjectDetails& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The version of the object.</p>
     */
    inline AwsS3ObjectDetails& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The version of the object.</p>
     */
    inline AwsS3ObjectDetails& WithVersionId(const char* value) { SetVersionId(value); return *this;}


    /**
     * <p>A standard MIME type describing the format of the object data.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>A standard MIME type describing the format of the object data.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>A standard MIME type describing the format of the object data.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>A standard MIME type describing the format of the object data.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>A standard MIME type describing the format of the object data.</p>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>A standard MIME type describing the format of the object data.</p>
     */
    inline AwsS3ObjectDetails& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>A standard MIME type describing the format of the object data.</p>
     */
    inline AwsS3ObjectDetails& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>A standard MIME type describing the format of the object data.</p>
     */
    inline AwsS3ObjectDetails& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>If the object is stored using server-side encryption, the value of the
     * server-side encryption algorithm used when storing this object in Amazon S3.</p>
     */
    inline const Aws::String& GetServerSideEncryption() const{ return m_serverSideEncryption; }

    /**
     * <p>If the object is stored using server-side encryption, the value of the
     * server-side encryption algorithm used when storing this object in Amazon S3.</p>
     */
    inline bool ServerSideEncryptionHasBeenSet() const { return m_serverSideEncryptionHasBeenSet; }

    /**
     * <p>If the object is stored using server-side encryption, the value of the
     * server-side encryption algorithm used when storing this object in Amazon S3.</p>
     */
    inline void SetServerSideEncryption(const Aws::String& value) { m_serverSideEncryptionHasBeenSet = true; m_serverSideEncryption = value; }

    /**
     * <p>If the object is stored using server-side encryption, the value of the
     * server-side encryption algorithm used when storing this object in Amazon S3.</p>
     */
    inline void SetServerSideEncryption(Aws::String&& value) { m_serverSideEncryptionHasBeenSet = true; m_serverSideEncryption = std::move(value); }

    /**
     * <p>If the object is stored using server-side encryption, the value of the
     * server-side encryption algorithm used when storing this object in Amazon S3.</p>
     */
    inline void SetServerSideEncryption(const char* value) { m_serverSideEncryptionHasBeenSet = true; m_serverSideEncryption.assign(value); }

    /**
     * <p>If the object is stored using server-side encryption, the value of the
     * server-side encryption algorithm used when storing this object in Amazon S3.</p>
     */
    inline AwsS3ObjectDetails& WithServerSideEncryption(const Aws::String& value) { SetServerSideEncryption(value); return *this;}

    /**
     * <p>If the object is stored using server-side encryption, the value of the
     * server-side encryption algorithm used when storing this object in Amazon S3.</p>
     */
    inline AwsS3ObjectDetails& WithServerSideEncryption(Aws::String&& value) { SetServerSideEncryption(std::move(value)); return *this;}

    /**
     * <p>If the object is stored using server-side encryption, the value of the
     * server-side encryption algorithm used when storing this object in Amazon S3.</p>
     */
    inline AwsS3ObjectDetails& WithServerSideEncryption(const char* value) { SetServerSideEncryption(value); return *this;}


    /**
     * <p>The identifier of the KMS symmetric customer managed key that was used for
     * the object.</p>
     */
    inline const Aws::String& GetSSEKMSKeyId() const{ return m_sSEKMSKeyId; }

    /**
     * <p>The identifier of the KMS symmetric customer managed key that was used for
     * the object.</p>
     */
    inline bool SSEKMSKeyIdHasBeenSet() const { return m_sSEKMSKeyIdHasBeenSet; }

    /**
     * <p>The identifier of the KMS symmetric customer managed key that was used for
     * the object.</p>
     */
    inline void SetSSEKMSKeyId(const Aws::String& value) { m_sSEKMSKeyIdHasBeenSet = true; m_sSEKMSKeyId = value; }

    /**
     * <p>The identifier of the KMS symmetric customer managed key that was used for
     * the object.</p>
     */
    inline void SetSSEKMSKeyId(Aws::String&& value) { m_sSEKMSKeyIdHasBeenSet = true; m_sSEKMSKeyId = std::move(value); }

    /**
     * <p>The identifier of the KMS symmetric customer managed key that was used for
     * the object.</p>
     */
    inline void SetSSEKMSKeyId(const char* value) { m_sSEKMSKeyIdHasBeenSet = true; m_sSEKMSKeyId.assign(value); }

    /**
     * <p>The identifier of the KMS symmetric customer managed key that was used for
     * the object.</p>
     */
    inline AwsS3ObjectDetails& WithSSEKMSKeyId(const Aws::String& value) { SetSSEKMSKeyId(value); return *this;}

    /**
     * <p>The identifier of the KMS symmetric customer managed key that was used for
     * the object.</p>
     */
    inline AwsS3ObjectDetails& WithSSEKMSKeyId(Aws::String&& value) { SetSSEKMSKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the KMS symmetric customer managed key that was used for
     * the object.</p>
     */
    inline AwsS3ObjectDetails& WithSSEKMSKeyId(const char* value) { SetSSEKMSKeyId(value); return *this;}

  private:

    Aws::String m_lastModified;
    bool m_lastModifiedHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_serverSideEncryption;
    bool m_serverSideEncryptionHasBeenSet = false;

    Aws::String m_sSEKMSKeyId;
    bool m_sSEKMSKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
