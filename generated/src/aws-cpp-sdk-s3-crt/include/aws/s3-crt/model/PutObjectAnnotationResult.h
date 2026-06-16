/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/ChecksumType.h>
#include <aws/s3-crt/model/RequestCharged.h>
#include <aws/s3-crt/model/ServerSideEncryption.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace S3Crt {
namespace Model {
class PutObjectAnnotationResult {
 public:
  AWS_S3CRT_API PutObjectAnnotationResult() = default;
  AWS_S3CRT_API PutObjectAnnotationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_S3CRT_API PutObjectAnnotationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The object key.</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  PutObjectAnnotationResult& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the annotation.</p>
   */
  inline const Aws::String& GetAnnotationName() const { return m_annotationName; }
  template <typename AnnotationNameT = Aws::String>
  void SetAnnotationName(AnnotationNameT&& value) {
    m_annotationNameHasBeenSet = true;
    m_annotationName = std::forward<AnnotationNameT>(value);
  }
  template <typename AnnotationNameT = Aws::String>
  PutObjectAnnotationResult& WithAnnotationName(AnnotationNameT&& value) {
    SetAnnotationName(std::forward<AnnotationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version ID of the object that the annotation was attached to.</p>
   */
  inline const Aws::String& GetObjectVersionId() const { return m_objectVersionId; }
  template <typename ObjectVersionIdT = Aws::String>
  void SetObjectVersionId(ObjectVersionIdT&& value) {
    m_objectVersionIdHasBeenSet = true;
    m_objectVersionId = std::forward<ObjectVersionIdT>(value);
  }
  template <typename ObjectVersionIdT = Aws::String>
  PutObjectAnnotationResult& WithObjectVersionId(ObjectVersionIdT&& value) {
    SetObjectVersionId(std::forward<ObjectVersionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity tag of the annotation.</p>
   */
  inline const Aws::String& GetETag() const { return m_eTag; }
  template <typename ETagT = Aws::String>
  void SetETag(ETagT&& value) {
    m_eTagHasBeenSet = true;
    m_eTag = std::forward<ETagT>(value);
  }
  template <typename ETagT = Aws::String>
  PutObjectAnnotationResult& WithETag(ETagT&& value) {
    SetETag(std::forward<ETagT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CRC32 checksum of the stored annotation.</p>
   */
  inline const Aws::String& GetChecksumCRC32() const { return m_checksumCRC32; }
  template <typename ChecksumCRC32T = Aws::String>
  void SetChecksumCRC32(ChecksumCRC32T&& value) {
    m_checksumCRC32HasBeenSet = true;
    m_checksumCRC32 = std::forward<ChecksumCRC32T>(value);
  }
  template <typename ChecksumCRC32T = Aws::String>
  PutObjectAnnotationResult& WithChecksumCRC32(ChecksumCRC32T&& value) {
    SetChecksumCRC32(std::forward<ChecksumCRC32T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CRC32C checksum of the stored annotation.</p>
   */
  inline const Aws::String& GetChecksumCRC32C() const { return m_checksumCRC32C; }
  template <typename ChecksumCRC32CT = Aws::String>
  void SetChecksumCRC32C(ChecksumCRC32CT&& value) {
    m_checksumCRC32CHasBeenSet = true;
    m_checksumCRC32C = std::forward<ChecksumCRC32CT>(value);
  }
  template <typename ChecksumCRC32CT = Aws::String>
  PutObjectAnnotationResult& WithChecksumCRC32C(ChecksumCRC32CT&& value) {
    SetChecksumCRC32C(std::forward<ChecksumCRC32CT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CRC64NVME checksum of the stored annotation.</p>
   */
  inline const Aws::String& GetChecksumCRC64NVME() const { return m_checksumCRC64NVME; }
  template <typename ChecksumCRC64NVMET = Aws::String>
  void SetChecksumCRC64NVME(ChecksumCRC64NVMET&& value) {
    m_checksumCRC64NVMEHasBeenSet = true;
    m_checksumCRC64NVME = std::forward<ChecksumCRC64NVMET>(value);
  }
  template <typename ChecksumCRC64NVMET = Aws::String>
  PutObjectAnnotationResult& WithChecksumCRC64NVME(ChecksumCRC64NVMET&& value) {
    SetChecksumCRC64NVME(std::forward<ChecksumCRC64NVMET>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The SHA1 checksum of the stored annotation.</p>
   */
  inline const Aws::String& GetChecksumSHA1() const { return m_checksumSHA1; }
  template <typename ChecksumSHA1T = Aws::String>
  void SetChecksumSHA1(ChecksumSHA1T&& value) {
    m_checksumSHA1HasBeenSet = true;
    m_checksumSHA1 = std::forward<ChecksumSHA1T>(value);
  }
  template <typename ChecksumSHA1T = Aws::String>
  PutObjectAnnotationResult& WithChecksumSHA1(ChecksumSHA1T&& value) {
    SetChecksumSHA1(std::forward<ChecksumSHA1T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The SHA256 checksum of the stored annotation.</p>
   */
  inline const Aws::String& GetChecksumSHA256() const { return m_checksumSHA256; }
  template <typename ChecksumSHA256T = Aws::String>
  void SetChecksumSHA256(ChecksumSHA256T&& value) {
    m_checksumSHA256HasBeenSet = true;
    m_checksumSHA256 = std::forward<ChecksumSHA256T>(value);
  }
  template <typename ChecksumSHA256T = Aws::String>
  PutObjectAnnotationResult& WithChecksumSHA256(ChecksumSHA256T&& value) {
    SetChecksumSHA256(std::forward<ChecksumSHA256T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The SHA512 checksum of the stored annotation.</p>
   */
  inline const Aws::String& GetChecksumSHA512() const { return m_checksumSHA512; }
  template <typename ChecksumSHA512T = Aws::String>
  void SetChecksumSHA512(ChecksumSHA512T&& value) {
    m_checksumSHA512HasBeenSet = true;
    m_checksumSHA512 = std::forward<ChecksumSHA512T>(value);
  }
  template <typename ChecksumSHA512T = Aws::String>
  PutObjectAnnotationResult& WithChecksumSHA512(ChecksumSHA512T&& value) {
    SetChecksumSHA512(std::forward<ChecksumSHA512T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MD5 checksum of the stored annotation.</p>
   */
  inline const Aws::String& GetChecksumMD5() const { return m_checksumMD5; }
  template <typename ChecksumMD5T = Aws::String>
  void SetChecksumMD5(ChecksumMD5T&& value) {
    m_checksumMD5HasBeenSet = true;
    m_checksumMD5 = std::forward<ChecksumMD5T>(value);
  }
  template <typename ChecksumMD5T = Aws::String>
  PutObjectAnnotationResult& WithChecksumMD5(ChecksumMD5T&& value) {
    SetChecksumMD5(std::forward<ChecksumMD5T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The XXHASH64 checksum of the stored annotation.</p>
   */
  inline const Aws::String& GetChecksumXXHASH64() const { return m_checksumXXHASH64; }
  template <typename ChecksumXXHASH64T = Aws::String>
  void SetChecksumXXHASH64(ChecksumXXHASH64T&& value) {
    m_checksumXXHASH64HasBeenSet = true;
    m_checksumXXHASH64 = std::forward<ChecksumXXHASH64T>(value);
  }
  template <typename ChecksumXXHASH64T = Aws::String>
  PutObjectAnnotationResult& WithChecksumXXHASH64(ChecksumXXHASH64T&& value) {
    SetChecksumXXHASH64(std::forward<ChecksumXXHASH64T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The XXHASH3 checksum of the stored annotation.</p>
   */
  inline const Aws::String& GetChecksumXXHASH3() const { return m_checksumXXHASH3; }
  template <typename ChecksumXXHASH3T = Aws::String>
  void SetChecksumXXHASH3(ChecksumXXHASH3T&& value) {
    m_checksumXXHASH3HasBeenSet = true;
    m_checksumXXHASH3 = std::forward<ChecksumXXHASH3T>(value);
  }
  template <typename ChecksumXXHASH3T = Aws::String>
  PutObjectAnnotationResult& WithChecksumXXHASH3(ChecksumXXHASH3T&& value) {
    SetChecksumXXHASH3(std::forward<ChecksumXXHASH3T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The XXHASH128 checksum of the stored annotation.</p>
   */
  inline const Aws::String& GetChecksumXXHASH128() const { return m_checksumXXHASH128; }
  template <typename ChecksumXXHASH128T = Aws::String>
  void SetChecksumXXHASH128(ChecksumXXHASH128T&& value) {
    m_checksumXXHASH128HasBeenSet = true;
    m_checksumXXHASH128 = std::forward<ChecksumXXHASH128T>(value);
  }
  template <typename ChecksumXXHASH128T = Aws::String>
  PutObjectAnnotationResult& WithChecksumXXHASH128(ChecksumXXHASH128T&& value) {
    SetChecksumXXHASH128(std::forward<ChecksumXXHASH128T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of checksum used.</p>
   */
  inline ChecksumType GetChecksumType() const { return m_checksumType; }
  inline void SetChecksumType(ChecksumType value) {
    m_checksumTypeHasBeenSet = true;
    m_checksumType = value;
  }
  inline PutObjectAnnotationResult& WithChecksumType(ChecksumType value) {
    SetChecksumType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The server-side encryption algorithm used to encrypt the annotation.</p>
   */
  inline ServerSideEncryption GetServerSideEncryption() const { return m_serverSideEncryption; }
  inline void SetServerSideEncryption(ServerSideEncryption value) {
    m_serverSideEncryptionHasBeenSet = true;
    m_serverSideEncryption = value;
  }
  inline PutObjectAnnotationResult& WithServerSideEncryption(ServerSideEncryption value) {
    SetServerSideEncryption(value);
    return *this;
  }
  ///@}

  ///@{

  inline RequestCharged GetRequestCharged() const { return m_requestCharged; }
  inline void SetRequestCharged(RequestCharged value) {
    m_requestChargedHasBeenSet = true;
    m_requestCharged = value;
  }
  inline PutObjectAnnotationResult& WithRequestCharged(RequestCharged value) {
    SetRequestCharged(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  PutObjectAnnotationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_key;

  Aws::String m_annotationName;

  Aws::String m_objectVersionId;

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

  ChecksumType m_checksumType{ChecksumType::NOT_SET};

  ServerSideEncryption m_serverSideEncryption{ServerSideEncryption::NOT_SET};

  RequestCharged m_requestCharged{RequestCharged::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_keyHasBeenSet = false;
  bool m_annotationNameHasBeenSet = false;
  bool m_objectVersionIdHasBeenSet = false;
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
  bool m_checksumTypeHasBeenSet = false;
  bool m_serverSideEncryptionHasBeenSet = false;
  bool m_requestChargedHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
