/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/ChecksumType.h>
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
   * <p>Contains all the possible checksum or digest values for an
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/Checksum">AWS API
   * Reference</a></p>
   */
  class Checksum
  {
  public:
    AWS_S3_API Checksum();
    AWS_S3_API Checksum(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API Checksum& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The Base64 encoded, 32-bit <code>CRC32 checksum</code> of the object. This
     * checksum is only be present if the checksum was uploaded with the object. When
     * you use an API operation on an object that was uploaded using multipart uploads,
     * this value may not be a direct checksum value of the full object. Instead, it's
     * a calculation based on the checksum values of each individual part. For more
     * information about how checksums are calculated with multipart uploads, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html#large-object-checksums">
     * Checking object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetChecksumCRC32() const{ return m_checksumCRC32; }
    inline bool ChecksumCRC32HasBeenSet() const { return m_checksumCRC32HasBeenSet; }
    inline void SetChecksumCRC32(const Aws::String& value) { m_checksumCRC32HasBeenSet = true; m_checksumCRC32 = value; }
    inline void SetChecksumCRC32(Aws::String&& value) { m_checksumCRC32HasBeenSet = true; m_checksumCRC32 = std::move(value); }
    inline void SetChecksumCRC32(const char* value) { m_checksumCRC32HasBeenSet = true; m_checksumCRC32.assign(value); }
    inline Checksum& WithChecksumCRC32(const Aws::String& value) { SetChecksumCRC32(value); return *this;}
    inline Checksum& WithChecksumCRC32(Aws::String&& value) { SetChecksumCRC32(std::move(value)); return *this;}
    inline Checksum& WithChecksumCRC32(const char* value) { SetChecksumCRC32(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64 encoded, 32-bit <code>CRC32C</code> checksum of the object. This
     * checksum is only present if the checksum was uploaded with the object. When you
     * use an API operation on an object that was uploaded using multipart uploads,
     * this value may not be a direct checksum value of the full object. Instead, it's
     * a calculation based on the checksum values of each individual part. For more
     * information about how checksums are calculated with multipart uploads, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html#large-object-checksums">
     * Checking object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetChecksumCRC32C() const{ return m_checksumCRC32C; }
    inline bool ChecksumCRC32CHasBeenSet() const { return m_checksumCRC32CHasBeenSet; }
    inline void SetChecksumCRC32C(const Aws::String& value) { m_checksumCRC32CHasBeenSet = true; m_checksumCRC32C = value; }
    inline void SetChecksumCRC32C(Aws::String&& value) { m_checksumCRC32CHasBeenSet = true; m_checksumCRC32C = std::move(value); }
    inline void SetChecksumCRC32C(const char* value) { m_checksumCRC32CHasBeenSet = true; m_checksumCRC32C.assign(value); }
    inline Checksum& WithChecksumCRC32C(const Aws::String& value) { SetChecksumCRC32C(value); return *this;}
    inline Checksum& WithChecksumCRC32C(Aws::String&& value) { SetChecksumCRC32C(std::move(value)); return *this;}
    inline Checksum& WithChecksumCRC32C(const char* value) { SetChecksumCRC32C(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64 encoded, 64-bit <code>CRC64NVME</code> checksum of the object.
     * This checksum is present if the object was uploaded with the
     * <code>CRC64NVME</code> checksum algorithm, or if the object was uploaded without
     * a checksum (and Amazon S3 added the default checksum, <code>CRC64NVME</code>, to
     * the uploaded object). For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetChecksumCRC64NVME() const{ return m_checksumCRC64NVME; }
    inline bool ChecksumCRC64NVMEHasBeenSet() const { return m_checksumCRC64NVMEHasBeenSet; }
    inline void SetChecksumCRC64NVME(const Aws::String& value) { m_checksumCRC64NVMEHasBeenSet = true; m_checksumCRC64NVME = value; }
    inline void SetChecksumCRC64NVME(Aws::String&& value) { m_checksumCRC64NVMEHasBeenSet = true; m_checksumCRC64NVME = std::move(value); }
    inline void SetChecksumCRC64NVME(const char* value) { m_checksumCRC64NVMEHasBeenSet = true; m_checksumCRC64NVME.assign(value); }
    inline Checksum& WithChecksumCRC64NVME(const Aws::String& value) { SetChecksumCRC64NVME(value); return *this;}
    inline Checksum& WithChecksumCRC64NVME(Aws::String&& value) { SetChecksumCRC64NVME(std::move(value)); return *this;}
    inline Checksum& WithChecksumCRC64NVME(const char* value) { SetChecksumCRC64NVME(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64 encoded, 160-bit <code>SHA1</code> digest of the object. This will
     * only be present if the object was uploaded with the object. When you use the API
     * operation on an object that was uploaded using multipart uploads, this value may
     * not be a direct checksum value of the full object. Instead, it's a calculation
     * based on the checksum values of each individual part. For more information about
     * how checksums are calculated with multipart uploads, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html#large-object-checksums">
     * Checking object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetChecksumSHA1() const{ return m_checksumSHA1; }
    inline bool ChecksumSHA1HasBeenSet() const { return m_checksumSHA1HasBeenSet; }
    inline void SetChecksumSHA1(const Aws::String& value) { m_checksumSHA1HasBeenSet = true; m_checksumSHA1 = value; }
    inline void SetChecksumSHA1(Aws::String&& value) { m_checksumSHA1HasBeenSet = true; m_checksumSHA1 = std::move(value); }
    inline void SetChecksumSHA1(const char* value) { m_checksumSHA1HasBeenSet = true; m_checksumSHA1.assign(value); }
    inline Checksum& WithChecksumSHA1(const Aws::String& value) { SetChecksumSHA1(value); return *this;}
    inline Checksum& WithChecksumSHA1(Aws::String&& value) { SetChecksumSHA1(std::move(value)); return *this;}
    inline Checksum& WithChecksumSHA1(const char* value) { SetChecksumSHA1(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64 encoded, 256-bit <code>SHA256</code> digest of the object. This
     * will only be present if the object was uploaded with the object. When you use an
     * API operation on an object that was uploaded using multipart uploads, this value
     * may not be a direct checksum value of the full object. Instead, it's a
     * calculation based on the checksum values of each individual part. For more
     * information about how checksums are calculated with multipart uploads, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html#large-object-checksums">
     * Checking object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetChecksumSHA256() const{ return m_checksumSHA256; }
    inline bool ChecksumSHA256HasBeenSet() const { return m_checksumSHA256HasBeenSet; }
    inline void SetChecksumSHA256(const Aws::String& value) { m_checksumSHA256HasBeenSet = true; m_checksumSHA256 = value; }
    inline void SetChecksumSHA256(Aws::String&& value) { m_checksumSHA256HasBeenSet = true; m_checksumSHA256 = std::move(value); }
    inline void SetChecksumSHA256(const char* value) { m_checksumSHA256HasBeenSet = true; m_checksumSHA256.assign(value); }
    inline Checksum& WithChecksumSHA256(const Aws::String& value) { SetChecksumSHA256(value); return *this;}
    inline Checksum& WithChecksumSHA256(Aws::String&& value) { SetChecksumSHA256(std::move(value)); return *this;}
    inline Checksum& WithChecksumSHA256(const char* value) { SetChecksumSHA256(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The checksum type that is used to calculate the object’s checksum value. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const ChecksumType& GetChecksumType() const{ return m_checksumType; }
    inline bool ChecksumTypeHasBeenSet() const { return m_checksumTypeHasBeenSet; }
    inline void SetChecksumType(const ChecksumType& value) { m_checksumTypeHasBeenSet = true; m_checksumType = value; }
    inline void SetChecksumType(ChecksumType&& value) { m_checksumTypeHasBeenSet = true; m_checksumType = std::move(value); }
    inline Checksum& WithChecksumType(const ChecksumType& value) { SetChecksumType(value); return *this;}
    inline Checksum& WithChecksumType(ChecksumType&& value) { SetChecksumType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_checksumCRC32;
    bool m_checksumCRC32HasBeenSet = false;

    Aws::String m_checksumCRC32C;
    bool m_checksumCRC32CHasBeenSet = false;

    Aws::String m_checksumCRC64NVME;
    bool m_checksumCRC64NVMEHasBeenSet = false;

    Aws::String m_checksumSHA1;
    bool m_checksumSHA1HasBeenSet = false;

    Aws::String m_checksumSHA256;
    bool m_checksumSHA256HasBeenSet = false;

    ChecksumType m_checksumType;
    bool m_checksumTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
