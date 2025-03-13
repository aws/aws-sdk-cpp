/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/ServerSideEncryption.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace S3
{
namespace Model
{

  /**
   * <p>Contains the type of server-side encryption used.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/Encryption">AWS
   * API Reference</a></p>
   */
  class Encryption
  {
  public:
    AWS_S3_API Encryption() = default;
    AWS_S3_API Encryption(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API Encryption& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The server-side encryption algorithm used when storing job results in Amazon
     * S3 (for example, AES256, <code>aws:kms</code>).</p>
     */
    inline ServerSideEncryption GetEncryptionType() const { return m_encryptionType; }
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
    inline void SetEncryptionType(ServerSideEncryption value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }
    inline Encryption& WithEncryptionType(ServerSideEncryption value) { SetEncryptionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the encryption type is <code>aws:kms</code>, this optional value specifies
     * the ID of the symmetric encryption customer managed key to use for encryption of
     * job results. Amazon S3 only supports symmetric encryption KMS keys. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a> in the <i>Amazon Web Services Key Management Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetKMSKeyId() const { return m_kMSKeyId; }
    inline bool KMSKeyIdHasBeenSet() const { return m_kMSKeyIdHasBeenSet; }
    template<typename KMSKeyIdT = Aws::String>
    void SetKMSKeyId(KMSKeyIdT&& value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId = std::forward<KMSKeyIdT>(value); }
    template<typename KMSKeyIdT = Aws::String>
    Encryption& WithKMSKeyId(KMSKeyIdT&& value) { SetKMSKeyId(std::forward<KMSKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the encryption type is <code>aws:kms</code>, this optional value can be
     * used to specify the encryption context for the restore results.</p>
     */
    inline const Aws::String& GetKMSContext() const { return m_kMSContext; }
    inline bool KMSContextHasBeenSet() const { return m_kMSContextHasBeenSet; }
    template<typename KMSContextT = Aws::String>
    void SetKMSContext(KMSContextT&& value) { m_kMSContextHasBeenSet = true; m_kMSContext = std::forward<KMSContextT>(value); }
    template<typename KMSContextT = Aws::String>
    Encryption& WithKMSContext(KMSContextT&& value) { SetKMSContext(std::forward<KMSContextT>(value)); return *this;}
    ///@}
  private:

    ServerSideEncryption m_encryptionType{ServerSideEncryption::NOT_SET};
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_kMSKeyId;
    bool m_kMSKeyIdHasBeenSet = false;

    Aws::String m_kMSContext;
    bool m_kMSContextHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
