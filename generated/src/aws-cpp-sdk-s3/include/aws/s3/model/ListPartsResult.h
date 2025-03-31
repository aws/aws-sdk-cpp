/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/Initiator.h>
#include <aws/s3/model/Owner.h>
#include <aws/s3/model/StorageClass.h>
#include <aws/s3/model/RequestCharged.h>
#include <aws/s3/model/ChecksumAlgorithm.h>
#include <aws/s3/model/ChecksumType.h>
#include <aws/s3/model/Part.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{
  class ListPartsResult
  {
  public:
    AWS_S3_API ListPartsResult() = default;
    AWS_S3_API ListPartsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API ListPartsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>If the bucket has a lifecycle rule configured with an action to abort
     * incomplete multipart uploads and the prefix in the lifecycle rule matches the
     * object name in the request, then the response includes this header indicating
     * when the initiated multipart upload will become eligible for abort operation.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuoverview.html#mpu-abort-incomplete-mpu-lifecycle-config">Aborting
     * Incomplete Multipart Uploads Using a Bucket Lifecycle Configuration</a>.</p>
     * <p>The response will also include the <code>x-amz-abort-rule-id</code> header
     * that will provide the ID of the lifecycle configuration rule that defines this
     * action.</p>  <p>This functionality is not supported for directory
     * buckets.</p> 
     */
    inline const Aws::Utils::DateTime& GetAbortDate() const { return m_abortDate; }
    template<typename AbortDateT = Aws::Utils::DateTime>
    void SetAbortDate(AbortDateT&& value) { m_abortDateHasBeenSet = true; m_abortDate = std::forward<AbortDateT>(value); }
    template<typename AbortDateT = Aws::Utils::DateTime>
    ListPartsResult& WithAbortDate(AbortDateT&& value) { SetAbortDate(std::forward<AbortDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This header is returned along with the <code>x-amz-abort-date</code> header.
     * It identifies applicable lifecycle configuration rule that defines the action to
     * abort incomplete multipart uploads.</p>  <p>This functionality is not
     * supported for directory buckets.</p> 
     */
    inline const Aws::String& GetAbortRuleId() const { return m_abortRuleId; }
    template<typename AbortRuleIdT = Aws::String>
    void SetAbortRuleId(AbortRuleIdT&& value) { m_abortRuleIdHasBeenSet = true; m_abortRuleId = std::forward<AbortRuleIdT>(value); }
    template<typename AbortRuleIdT = Aws::String>
    ListPartsResult& WithAbortRuleId(AbortRuleIdT&& value) { SetAbortRuleId(std::forward<AbortRuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the bucket to which the multipart upload was initiated. Does not
     * return the access point ARN or access point alias if used.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    ListPartsResult& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object key for which the multipart upload was initiated.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    ListPartsResult& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Upload ID identifying the multipart upload whose parts are being listed.</p>
     */
    inline const Aws::String& GetUploadId() const { return m_uploadId; }
    template<typename UploadIdT = Aws::String>
    void SetUploadId(UploadIdT&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::forward<UploadIdT>(value); }
    template<typename UploadIdT = Aws::String>
    ListPartsResult& WithUploadId(UploadIdT&& value) { SetUploadId(std::forward<UploadIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the part after which listing should begin. Only parts with higher
     * part numbers will be listed.</p>
     */
    inline int GetPartNumberMarker() const { return m_partNumberMarker; }
    inline void SetPartNumberMarker(int value) { m_partNumberMarkerHasBeenSet = true; m_partNumberMarker = value; }
    inline ListPartsResult& WithPartNumberMarker(int value) { SetPartNumberMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When a list is truncated, this element specifies the last part in the list,
     * as well as the value to use for the <code>part-number-marker</code> request
     * parameter in a subsequent request.</p>
     */
    inline int GetNextPartNumberMarker() const { return m_nextPartNumberMarker; }
    inline void SetNextPartNumberMarker(int value) { m_nextPartNumberMarkerHasBeenSet = true; m_nextPartNumberMarker = value; }
    inline ListPartsResult& WithNextPartNumberMarker(int value) { SetNextPartNumberMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of parts that were allowed in the response.</p>
     */
    inline int GetMaxParts() const { return m_maxParts; }
    inline void SetMaxParts(int value) { m_maxPartsHasBeenSet = true; m_maxParts = value; }
    inline ListPartsResult& WithMaxParts(int value) { SetMaxParts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether the returned list of parts is truncated. A true value
     * indicates that the list was truncated. A list can be truncated if the number of
     * parts exceeds the limit returned in the MaxParts element.</p>
     */
    inline bool GetIsTruncated() const { return m_isTruncated; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline ListPartsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for elements related to a particular part. A response can contain
     * zero or more <code>Part</code> elements.</p>
     */
    inline const Aws::Vector<Part>& GetParts() const { return m_parts; }
    template<typename PartsT = Aws::Vector<Part>>
    void SetParts(PartsT&& value) { m_partsHasBeenSet = true; m_parts = std::forward<PartsT>(value); }
    template<typename PartsT = Aws::Vector<Part>>
    ListPartsResult& WithParts(PartsT&& value) { SetParts(std::forward<PartsT>(value)); return *this;}
    template<typename PartsT = Part>
    ListPartsResult& AddParts(PartsT&& value) { m_partsHasBeenSet = true; m_parts.emplace_back(std::forward<PartsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Container element that identifies who initiated the multipart upload. If the
     * initiator is an Amazon Web Services account, this element provides the same
     * information as the <code>Owner</code> element. If the initiator is an IAM User,
     * this element provides the user ARN and display name.</p>
     */
    inline const Initiator& GetInitiator() const { return m_initiator; }
    template<typename InitiatorT = Initiator>
    void SetInitiator(InitiatorT&& value) { m_initiatorHasBeenSet = true; m_initiator = std::forward<InitiatorT>(value); }
    template<typename InitiatorT = Initiator>
    ListPartsResult& WithInitiator(InitiatorT&& value) { SetInitiator(std::forward<InitiatorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container element that identifies the object owner, after the object is
     * created. If multipart upload is initiated by an IAM user, this element provides
     * the parent account ID and display name.</p>  <p> <b>Directory buckets</b>
     * - The bucket owner is returned as the object owner for all the parts.</p>
     * 
     */
    inline const Owner& GetOwner() const { return m_owner; }
    template<typename OwnerT = Owner>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Owner>
    ListPartsResult& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The class of storage used to store the uploaded object.</p>  <p>
     * <b>Directory buckets</b> - Directory buckets only support
     * <code>EXPRESS_ONEZONE</code> (the S3 Express One Zone storage class) in
     * Availability Zones and <code>ONEZONE_IA</code> (the S3 One Zone-Infrequent
     * Access storage class) in Dedicated Local Zones.</p> 
     */
    inline StorageClass GetStorageClass() const { return m_storageClass; }
    inline void SetStorageClass(StorageClass value) { m_storageClassHasBeenSet = true; m_storageClass = value; }
    inline ListPartsResult& WithStorageClass(StorageClass value) { SetStorageClass(value); return *this;}
    ///@}

    ///@{
    
    inline RequestCharged GetRequestCharged() const { return m_requestCharged; }
    inline void SetRequestCharged(RequestCharged value) { m_requestChargedHasBeenSet = true; m_requestCharged = value; }
    inline ListPartsResult& WithRequestCharged(RequestCharged value) { SetRequestCharged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm that was used to create a checksum of the object.</p>
     */
    inline ChecksumAlgorithm GetChecksumAlgorithm() const { return m_checksumAlgorithm; }
    inline void SetChecksumAlgorithm(ChecksumAlgorithm value) { m_checksumAlgorithmHasBeenSet = true; m_checksumAlgorithm = value; }
    inline ListPartsResult& WithChecksumAlgorithm(ChecksumAlgorithm value) { SetChecksumAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The checksum type, which determines how part-level checksums are combined to
     * create an object-level checksum for multipart objects. You can use this header
     * response to verify that the checksum type that is received is the same checksum
     * type that was specified in <code>CreateMultipartUpload</code> request. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity in the Amazon S3 User Guide</a>.</p>
     */
    inline ChecksumType GetChecksumType() const { return m_checksumType; }
    inline void SetChecksumType(ChecksumType value) { m_checksumTypeHasBeenSet = true; m_checksumType = value; }
    inline ListPartsResult& WithChecksumType(ChecksumType value) { SetChecksumType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPartsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_abortDate{};
    bool m_abortDateHasBeenSet = false;

    Aws::String m_abortRuleId;
    bool m_abortRuleIdHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet = false;

    int m_partNumberMarker{0};
    bool m_partNumberMarkerHasBeenSet = false;

    int m_nextPartNumberMarker{0};
    bool m_nextPartNumberMarkerHasBeenSet = false;

    int m_maxParts{0};
    bool m_maxPartsHasBeenSet = false;

    bool m_isTruncated{false};
    bool m_isTruncatedHasBeenSet = false;

    Aws::Vector<Part> m_parts;
    bool m_partsHasBeenSet = false;

    Initiator m_initiator;
    bool m_initiatorHasBeenSet = false;

    Owner m_owner;
    bool m_ownerHasBeenSet = false;

    StorageClass m_storageClass{StorageClass::NOT_SET};
    bool m_storageClassHasBeenSet = false;

    RequestCharged m_requestCharged{RequestCharged::NOT_SET};
    bool m_requestChargedHasBeenSet = false;

    ChecksumAlgorithm m_checksumAlgorithm{ChecksumAlgorithm::NOT_SET};
    bool m_checksumAlgorithmHasBeenSet = false;

    ChecksumType m_checksumType{ChecksumType::NOT_SET};
    bool m_checksumTypeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
