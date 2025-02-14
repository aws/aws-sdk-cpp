/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
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
   * <p>A container for elements related to an individual part.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ObjectPart">AWS API
   * Reference</a></p>
   */
  class ObjectPart
  {
  public:
    AWS_S3_API ObjectPart();
    AWS_S3_API ObjectPart(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API ObjectPart& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The part number identifying the part. This value is a positive integer
     * between 1 and 10,000.</p>
     */
    inline int GetPartNumber() const{ return m_partNumber; }
    inline bool PartNumberHasBeenSet() const { return m_partNumberHasBeenSet; }
    inline void SetPartNumber(int value) { m_partNumberHasBeenSet = true; m_partNumber = value; }
    inline ObjectPart& WithPartNumber(int value) { SetPartNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the uploaded part in bytes.</p>
     */
    inline long long GetSize() const{ return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }
    inline ObjectPart& WithSize(long long value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64 encoded, 32-bit <code>CRC32</code> checksum of the part. This
     * checksum is present if the multipart upload request was created with the
     * <code>CRC32</code> checksum algorithm. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetChecksumCRC32() const{ return m_checksumCRC32; }
    inline bool ChecksumCRC32HasBeenSet() const { return m_checksumCRC32HasBeenSet; }
    inline void SetChecksumCRC32(const Aws::String& value) { m_checksumCRC32HasBeenSet = true; m_checksumCRC32 = value; }
    inline void SetChecksumCRC32(Aws::String&& value) { m_checksumCRC32HasBeenSet = true; m_checksumCRC32 = std::move(value); }
    inline void SetChecksumCRC32(const char* value) { m_checksumCRC32HasBeenSet = true; m_checksumCRC32.assign(value); }
    inline ObjectPart& WithChecksumCRC32(const Aws::String& value) { SetChecksumCRC32(value); return *this;}
    inline ObjectPart& WithChecksumCRC32(Aws::String&& value) { SetChecksumCRC32(std::move(value)); return *this;}
    inline ObjectPart& WithChecksumCRC32(const char* value) { SetChecksumCRC32(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64 encoded, 32-bit <code>CRC32C</code> checksum of the part. This
     * checksum is present if the multipart upload request was created with the
     * <code>CRC32C</code> checksum algorithm. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetChecksumCRC32C() const{ return m_checksumCRC32C; }
    inline bool ChecksumCRC32CHasBeenSet() const { return m_checksumCRC32CHasBeenSet; }
    inline void SetChecksumCRC32C(const Aws::String& value) { m_checksumCRC32CHasBeenSet = true; m_checksumCRC32C = value; }
    inline void SetChecksumCRC32C(Aws::String&& value) { m_checksumCRC32CHasBeenSet = true; m_checksumCRC32C = std::move(value); }
    inline void SetChecksumCRC32C(const char* value) { m_checksumCRC32CHasBeenSet = true; m_checksumCRC32C.assign(value); }
    inline ObjectPart& WithChecksumCRC32C(const Aws::String& value) { SetChecksumCRC32C(value); return *this;}
    inline ObjectPart& WithChecksumCRC32C(Aws::String&& value) { SetChecksumCRC32C(std::move(value)); return *this;}
    inline ObjectPart& WithChecksumCRC32C(const char* value) { SetChecksumCRC32C(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64 encoded, 64-bit <code>CRC64NVME</code> checksum of the part. This
     * checksum is present if the multipart upload request was created with the
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
    inline ObjectPart& WithChecksumCRC64NVME(const Aws::String& value) { SetChecksumCRC64NVME(value); return *this;}
    inline ObjectPart& WithChecksumCRC64NVME(Aws::String&& value) { SetChecksumCRC64NVME(std::move(value)); return *this;}
    inline ObjectPart& WithChecksumCRC64NVME(const char* value) { SetChecksumCRC64NVME(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64 encoded, 160-bit <code>SHA1</code> checksum of the part. This
     * checksum is present if the multipart upload request was created with the
     * <code>SHA1</code> checksum algorithm. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetChecksumSHA1() const{ return m_checksumSHA1; }
    inline bool ChecksumSHA1HasBeenSet() const { return m_checksumSHA1HasBeenSet; }
    inline void SetChecksumSHA1(const Aws::String& value) { m_checksumSHA1HasBeenSet = true; m_checksumSHA1 = value; }
    inline void SetChecksumSHA1(Aws::String&& value) { m_checksumSHA1HasBeenSet = true; m_checksumSHA1 = std::move(value); }
    inline void SetChecksumSHA1(const char* value) { m_checksumSHA1HasBeenSet = true; m_checksumSHA1.assign(value); }
    inline ObjectPart& WithChecksumSHA1(const Aws::String& value) { SetChecksumSHA1(value); return *this;}
    inline ObjectPart& WithChecksumSHA1(Aws::String&& value) { SetChecksumSHA1(std::move(value)); return *this;}
    inline ObjectPart& WithChecksumSHA1(const char* value) { SetChecksumSHA1(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64 encoded, 256-bit <code>SHA256</code> checksum of the part. This
     * checksum is present if the multipart upload request was created with the
     * <code>SHA256</code> checksum algorithm. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetChecksumSHA256() const{ return m_checksumSHA256; }
    inline bool ChecksumSHA256HasBeenSet() const { return m_checksumSHA256HasBeenSet; }
    inline void SetChecksumSHA256(const Aws::String& value) { m_checksumSHA256HasBeenSet = true; m_checksumSHA256 = value; }
    inline void SetChecksumSHA256(Aws::String&& value) { m_checksumSHA256HasBeenSet = true; m_checksumSHA256 = std::move(value); }
    inline void SetChecksumSHA256(const char* value) { m_checksumSHA256HasBeenSet = true; m_checksumSHA256.assign(value); }
    inline ObjectPart& WithChecksumSHA256(const Aws::String& value) { SetChecksumSHA256(value); return *this;}
    inline ObjectPart& WithChecksumSHA256(Aws::String&& value) { SetChecksumSHA256(std::move(value)); return *this;}
    inline ObjectPart& WithChecksumSHA256(const char* value) { SetChecksumSHA256(value); return *this;}
    ///@}
  private:

    int m_partNumber;
    bool m_partNumberHasBeenSet = false;

    long long m_size;
    bool m_sizeHasBeenSet = false;

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
  };

} // namespace Model
} // namespace S3
} // namespace Aws
