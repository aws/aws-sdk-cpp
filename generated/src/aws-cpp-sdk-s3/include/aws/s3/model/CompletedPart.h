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
   * <p>Details of the parts that were uploaded.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/CompletedPart">AWS
   * API Reference</a></p>
   */
  class CompletedPart
  {
  public:
    AWS_S3_API CompletedPart() = default;
    AWS_S3_API CompletedPart(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API CompletedPart& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Entity tag returned when the part was uploaded.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    CompletedPart& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64 encoded, 32-bit <code>CRC32</code> checksum of the part. This
     * checksum is present if the multipart upload request was created with the
     * <code>CRC32</code> checksum algorithm. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetChecksumCRC32() const { return m_checksumCRC32; }
    inline bool ChecksumCRC32HasBeenSet() const { return m_checksumCRC32HasBeenSet; }
    template<typename ChecksumCRC32T = Aws::String>
    void SetChecksumCRC32(ChecksumCRC32T&& value) { m_checksumCRC32HasBeenSet = true; m_checksumCRC32 = std::forward<ChecksumCRC32T>(value); }
    template<typename ChecksumCRC32T = Aws::String>
    CompletedPart& WithChecksumCRC32(ChecksumCRC32T&& value) { SetChecksumCRC32(std::forward<ChecksumCRC32T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64 encoded, 32-bit <code>CRC32C</code> checksum of the part. This
     * checksum is present if the multipart upload request was created with the
     * <code>CRC32C</code> checksum algorithm. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetChecksumCRC32C() const { return m_checksumCRC32C; }
    inline bool ChecksumCRC32CHasBeenSet() const { return m_checksumCRC32CHasBeenSet; }
    template<typename ChecksumCRC32CT = Aws::String>
    void SetChecksumCRC32C(ChecksumCRC32CT&& value) { m_checksumCRC32CHasBeenSet = true; m_checksumCRC32C = std::forward<ChecksumCRC32CT>(value); }
    template<typename ChecksumCRC32CT = Aws::String>
    CompletedPart& WithChecksumCRC32C(ChecksumCRC32CT&& value) { SetChecksumCRC32C(std::forward<ChecksumCRC32CT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64 encoded, 64-bit <code>CRC64NVME</code> checksum of the part. This
     * checksum is present if the multipart upload request was created with the
     * <code>CRC64NVME</code> checksum algorithm to the uploaded object). For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetChecksumCRC64NVME() const { return m_checksumCRC64NVME; }
    inline bool ChecksumCRC64NVMEHasBeenSet() const { return m_checksumCRC64NVMEHasBeenSet; }
    template<typename ChecksumCRC64NVMET = Aws::String>
    void SetChecksumCRC64NVME(ChecksumCRC64NVMET&& value) { m_checksumCRC64NVMEHasBeenSet = true; m_checksumCRC64NVME = std::forward<ChecksumCRC64NVMET>(value); }
    template<typename ChecksumCRC64NVMET = Aws::String>
    CompletedPart& WithChecksumCRC64NVME(ChecksumCRC64NVMET&& value) { SetChecksumCRC64NVME(std::forward<ChecksumCRC64NVMET>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64 encoded, 160-bit <code>SHA1</code> checksum of the part. This
     * checksum is present if the multipart upload request was created with the
     * <code>SHA1</code> checksum algorithm. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetChecksumSHA1() const { return m_checksumSHA1; }
    inline bool ChecksumSHA1HasBeenSet() const { return m_checksumSHA1HasBeenSet; }
    template<typename ChecksumSHA1T = Aws::String>
    void SetChecksumSHA1(ChecksumSHA1T&& value) { m_checksumSHA1HasBeenSet = true; m_checksumSHA1 = std::forward<ChecksumSHA1T>(value); }
    template<typename ChecksumSHA1T = Aws::String>
    CompletedPart& WithChecksumSHA1(ChecksumSHA1T&& value) { SetChecksumSHA1(std::forward<ChecksumSHA1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64 encoded, 256-bit <code>SHA256</code> checksum of the part. This
     * checksum is present if the multipart upload request was created with the
     * <code>SHA256</code> checksum algorithm. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetChecksumSHA256() const { return m_checksumSHA256; }
    inline bool ChecksumSHA256HasBeenSet() const { return m_checksumSHA256HasBeenSet; }
    template<typename ChecksumSHA256T = Aws::String>
    void SetChecksumSHA256(ChecksumSHA256T&& value) { m_checksumSHA256HasBeenSet = true; m_checksumSHA256 = std::forward<ChecksumSHA256T>(value); }
    template<typename ChecksumSHA256T = Aws::String>
    CompletedPart& WithChecksumSHA256(ChecksumSHA256T&& value) { SetChecksumSHA256(std::forward<ChecksumSHA256T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Part number that identifies the part. This is a positive integer between 1
     * and 10,000.</p>  <ul> <li> <p> <b>General purpose buckets</b> - In
     * <code>CompleteMultipartUpload</code>, when a additional checksum (including
     * <code>x-amz-checksum-crc32</code>, <code>x-amz-checksum-crc32c</code>,
     * <code>x-amz-checksum-sha1</code>, or <code>x-amz-checksum-sha256</code>) is
     * applied to each part, the <code>PartNumber</code> must start at 1 and the part
     * numbers must be consecutive. Otherwise, Amazon S3 generates an HTTP <code>400
     * Bad Request</code> status code and an <code>InvalidPartOrder</code> error
     * code.</p> </li> <li> <p> <b>Directory buckets</b> - In
     * <code>CompleteMultipartUpload</code>, the <code>PartNumber</code> must start at
     * 1 and the part numbers must be consecutive.</p> </li> </ul> 
     */
    inline int GetPartNumber() const { return m_partNumber; }
    inline bool PartNumberHasBeenSet() const { return m_partNumberHasBeenSet; }
    inline void SetPartNumber(int value) { m_partNumberHasBeenSet = true; m_partNumber = value; }
    inline CompletedPart& WithPartNumber(int value) { SetPartNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

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

    int m_partNumber{0};
    bool m_partNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
