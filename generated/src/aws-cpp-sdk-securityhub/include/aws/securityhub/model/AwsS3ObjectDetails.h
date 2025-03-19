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
    AWS_SECURITYHUB_API AwsS3ObjectDetails() = default;
    AWS_SECURITYHUB_API AwsS3ObjectDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3ObjectDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates when the object was last modified.</p> <p>For more information
     * about the validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetLastModified() const { return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    template<typename LastModifiedT = Aws::String>
    void SetLastModified(LastModifiedT&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::forward<LastModifiedT>(value); }
    template<typename LastModifiedT = Aws::String>
    AwsS3ObjectDetails& WithLastModified(LastModifiedT&& value) { SetLastModified(std::forward<LastModifiedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The opaque identifier assigned by a web server to a specific version of a
     * resource found at a URL.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    AwsS3ObjectDetails& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the object.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    AwsS3ObjectDetails& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A standard MIME type describing the format of the object data.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    AwsS3ObjectDetails& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the object is stored using server-side encryption, the value of the
     * server-side encryption algorithm used when storing this object in Amazon S3.</p>
     */
    inline const Aws::String& GetServerSideEncryption() const { return m_serverSideEncryption; }
    inline bool ServerSideEncryptionHasBeenSet() const { return m_serverSideEncryptionHasBeenSet; }
    template<typename ServerSideEncryptionT = Aws::String>
    void SetServerSideEncryption(ServerSideEncryptionT&& value) { m_serverSideEncryptionHasBeenSet = true; m_serverSideEncryption = std::forward<ServerSideEncryptionT>(value); }
    template<typename ServerSideEncryptionT = Aws::String>
    AwsS3ObjectDetails& WithServerSideEncryption(ServerSideEncryptionT&& value) { SetServerSideEncryption(std::forward<ServerSideEncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the KMS symmetric customer managed key that was used for
     * the object.</p>
     */
    inline const Aws::String& GetSSEKMSKeyId() const { return m_sSEKMSKeyId; }
    inline bool SSEKMSKeyIdHasBeenSet() const { return m_sSEKMSKeyIdHasBeenSet; }
    template<typename SSEKMSKeyIdT = Aws::String>
    void SetSSEKMSKeyId(SSEKMSKeyIdT&& value) { m_sSEKMSKeyIdHasBeenSet = true; m_sSEKMSKeyId = std::forward<SSEKMSKeyIdT>(value); }
    template<typename SSEKMSKeyIdT = Aws::String>
    AwsS3ObjectDetails& WithSSEKMSKeyId(SSEKMSKeyIdT&& value) { SetSSEKMSKeyId(std::forward<SSEKMSKeyIdT>(value)); return *this;}
    ///@}
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
