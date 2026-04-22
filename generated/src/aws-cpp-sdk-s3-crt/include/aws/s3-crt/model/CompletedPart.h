/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3-crt/S3Crt_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace S3Crt {
namespace Model {

/**
 * <p>Details of the parts that were uploaded.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/CompletedPart">AWS
 * API Reference</a></p>
 */
class CompletedPart {
 public:
  AWS_S3CRT_API CompletedPart() = default;
  AWS_S3CRT_API CompletedPart(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_S3CRT_API CompletedPart& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_S3CRT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>Entity tag returned when the part was uploaded.</p>
   */
  inline const Aws::String& GetETag() const { return m_eTag; }
  inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
  template <typename ETagT = Aws::String>
  void SetETag(ETagT&& value) {
    m_eTagHasBeenSet = true;
    m_eTag = std::forward<ETagT>(value);
  }
  template <typename ETagT = Aws::String>
  CompletedPart& WithETag(ETagT&& value) {
    SetETag(std::forward<ETagT>(value));
    return *this;
  }
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
  template <typename ChecksumCRC32T = Aws::String>
  void SetChecksumCRC32(ChecksumCRC32T&& value) {
    m_checksumCRC32HasBeenSet = true;
    m_checksumCRC32 = std::forward<ChecksumCRC32T>(value);
  }
  template <typename ChecksumCRC32T = Aws::String>
  CompletedPart& WithChecksumCRC32(ChecksumCRC32T&& value) {
    SetChecksumCRC32(std::forward<ChecksumCRC32T>(value));
    return *this;
  }
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
  template <typename ChecksumCRC32CT = Aws::String>
  void SetChecksumCRC32C(ChecksumCRC32CT&& value) {
    m_checksumCRC32CHasBeenSet = true;
    m_checksumCRC32C = std::forward<ChecksumCRC32CT>(value);
  }
  template <typename ChecksumCRC32CT = Aws::String>
  CompletedPart& WithChecksumCRC32C(ChecksumCRC32CT&& value) {
    SetChecksumCRC32C(std::forward<ChecksumCRC32CT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Base64 encoded, 64-bit <code>CRC64NVME</code> checksum of the part. This
   * checksum is present if the multipart upload request was created with the
   * <code>CRC64NVME</code> checksum algorithm. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
   * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
   */
  inline const Aws::String& GetChecksumCRC64NVME() const { return m_checksumCRC64NVME; }
  inline bool ChecksumCRC64NVMEHasBeenSet() const { return m_checksumCRC64NVMEHasBeenSet; }
  template <typename ChecksumCRC64NVMET = Aws::String>
  void SetChecksumCRC64NVME(ChecksumCRC64NVMET&& value) {
    m_checksumCRC64NVMEHasBeenSet = true;
    m_checksumCRC64NVME = std::forward<ChecksumCRC64NVMET>(value);
  }
  template <typename ChecksumCRC64NVMET = Aws::String>
  CompletedPart& WithChecksumCRC64NVME(ChecksumCRC64NVMET&& value) {
    SetChecksumCRC64NVME(std::forward<ChecksumCRC64NVMET>(value));
    return *this;
  }
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
  template <typename ChecksumSHA1T = Aws::String>
  void SetChecksumSHA1(ChecksumSHA1T&& value) {
    m_checksumSHA1HasBeenSet = true;
    m_checksumSHA1 = std::forward<ChecksumSHA1T>(value);
  }
  template <typename ChecksumSHA1T = Aws::String>
  CompletedPart& WithChecksumSHA1(ChecksumSHA1T&& value) {
    SetChecksumSHA1(std::forward<ChecksumSHA1T>(value));
    return *this;
  }
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
  template <typename ChecksumSHA256T = Aws::String>
  void SetChecksumSHA256(ChecksumSHA256T&& value) {
    m_checksumSHA256HasBeenSet = true;
    m_checksumSHA256 = std::forward<ChecksumSHA256T>(value);
  }
  template <typename ChecksumSHA256T = Aws::String>
  CompletedPart& WithChecksumSHA256(ChecksumSHA256T&& value) {
    SetChecksumSHA256(std::forward<ChecksumSHA256T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Base64 encoded, 512-bit <code>SHA512</code> digest of the part. This
   * checksum is present if the multipart upload request was created with the
   * <code>SHA512</code> checksum algorithm. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
   * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
   */
  inline const Aws::String& GetChecksumSHA512() const { return m_checksumSHA512; }
  inline bool ChecksumSHA512HasBeenSet() const { return m_checksumSHA512HasBeenSet; }
  template <typename ChecksumSHA512T = Aws::String>
  void SetChecksumSHA512(ChecksumSHA512T&& value) {
    m_checksumSHA512HasBeenSet = true;
    m_checksumSHA512 = std::forward<ChecksumSHA512T>(value);
  }
  template <typename ChecksumSHA512T = Aws::String>
  CompletedPart& WithChecksumSHA512(ChecksumSHA512T&& value) {
    SetChecksumSHA512(std::forward<ChecksumSHA512T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Base64 encoded, 128-bit <code>MD5</code> digest of the part. This
   * checksum is present if the multipart upload request was created with the
   * <code>MD5</code> checksum algorithm. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
   * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
   */
  inline const Aws::String& GetChecksumMD5() const { return m_checksumMD5; }
  inline bool ChecksumMD5HasBeenSet() const { return m_checksumMD5HasBeenSet; }
  template <typename ChecksumMD5T = Aws::String>
  void SetChecksumMD5(ChecksumMD5T&& value) {
    m_checksumMD5HasBeenSet = true;
    m_checksumMD5 = std::forward<ChecksumMD5T>(value);
  }
  template <typename ChecksumMD5T = Aws::String>
  CompletedPart& WithChecksumMD5(ChecksumMD5T&& value) {
    SetChecksumMD5(std::forward<ChecksumMD5T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Base64 encoded, 64-bit <code>XXHASH64</code> checksum of the part. This
   * checksum is present if the multipart upload request was created with the
   * <code>XXHASH64</code> checksum algorithm. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
   * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
   */
  inline const Aws::String& GetChecksumXXHASH64() const { return m_checksumXXHASH64; }
  inline bool ChecksumXXHASH64HasBeenSet() const { return m_checksumXXHASH64HasBeenSet; }
  template <typename ChecksumXXHASH64T = Aws::String>
  void SetChecksumXXHASH64(ChecksumXXHASH64T&& value) {
    m_checksumXXHASH64HasBeenSet = true;
    m_checksumXXHASH64 = std::forward<ChecksumXXHASH64T>(value);
  }
  template <typename ChecksumXXHASH64T = Aws::String>
  CompletedPart& WithChecksumXXHASH64(ChecksumXXHASH64T&& value) {
    SetChecksumXXHASH64(std::forward<ChecksumXXHASH64T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Base64 encoded, 64-bit <code>XXHASH3</code> checksum of the part. This
   * checksum is present if the multipart upload request was created with the
   * <code>XXHASH3</code> checksum algorithm. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
   * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
   */
  inline const Aws::String& GetChecksumXXHASH3() const { return m_checksumXXHASH3; }
  inline bool ChecksumXXHASH3HasBeenSet() const { return m_checksumXXHASH3HasBeenSet; }
  template <typename ChecksumXXHASH3T = Aws::String>
  void SetChecksumXXHASH3(ChecksumXXHASH3T&& value) {
    m_checksumXXHASH3HasBeenSet = true;
    m_checksumXXHASH3 = std::forward<ChecksumXXHASH3T>(value);
  }
  template <typename ChecksumXXHASH3T = Aws::String>
  CompletedPart& WithChecksumXXHASH3(ChecksumXXHASH3T&& value) {
    SetChecksumXXHASH3(std::forward<ChecksumXXHASH3T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Base64 encoded, 128-bit <code>XXHASH128</code> checksum of the part. This
   * checksum is present if the multipart upload request was created with the
   * <code>XXHASH128</code> checksum algorithm. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
   * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
   */
  inline const Aws::String& GetChecksumXXHASH128() const { return m_checksumXXHASH128; }
  inline bool ChecksumXXHASH128HasBeenSet() const { return m_checksumXXHASH128HasBeenSet; }
  template <typename ChecksumXXHASH128T = Aws::String>
  void SetChecksumXXHASH128(ChecksumXXHASH128T&& value) {
    m_checksumXXHASH128HasBeenSet = true;
    m_checksumXXHASH128 = std::forward<ChecksumXXHASH128T>(value);
  }
  template <typename ChecksumXXHASH128T = Aws::String>
  CompletedPart& WithChecksumXXHASH128(ChecksumXXHASH128T&& value) {
    SetChecksumXXHASH128(std::forward<ChecksumXXHASH128T>(value));
    return *this;
  }
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
  inline void SetPartNumber(int value) {
    m_partNumberHasBeenSet = true;
    m_partNumber = value;
  }
  inline CompletedPart& WithPartNumber(int value) {
    SetPartNumber(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_eTag;

  Aws::String m_checksumCRC32;

  Aws::String m_checksumCRC32C;

  Aws::String m_checksumCRC64NVME;

  Aws::String m_checksumSHA1;

  Aws::String m_checksumSHA256;

  Aws::String m_checksumSHA512;

  Aws::String m_checksumMD5;

  Aws::String m_checksumXXHASH64;

  Aws::String m_checksumXXHASH3;

  Aws::String m_checksumXXHASH128;

  int m_partNumber{0};
  bool m_eTagHasBeenSet = false;
  bool m_checksumCRC32HasBeenSet = false;
  bool m_checksumCRC32CHasBeenSet = false;
  bool m_checksumCRC64NVMEHasBeenSet = false;
  bool m_checksumSHA1HasBeenSet = false;
  bool m_checksumSHA256HasBeenSet = false;
  bool m_checksumSHA512HasBeenSet = false;
  bool m_checksumMD5HasBeenSet = false;
  bool m_checksumXXHASH64HasBeenSet = false;
  bool m_checksumXXHASH3HasBeenSet = false;
  bool m_checksumXXHASH128HasBeenSet = false;
  bool m_partNumberHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
