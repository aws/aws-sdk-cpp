/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/S3Request.h>
#include <aws/s3/model/BucketCannedACL.h>
#include <aws/s3/model/AccessControlPolicy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/ChecksumAlgorithm.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace S3
{
namespace Model
{

  /**
   */
  class PutBucketAclRequest : public S3Request
  {
  public:
    AWS_S3_API PutBucketAclRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutBucketAcl"; }

    AWS_S3_API Aws::String SerializePayload() const override;

    AWS_S3_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_S3_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_S3_API bool HasEmbeddedError(IOStream &body, const Http::HeaderValueCollection &header) const override;
    AWS_S3_API Aws::String GetChecksumAlgorithmName() const override;
    inline bool RequestChecksumRequired() const override { return true; };

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The canned ACL to apply to the bucket.</p>
     */
    inline BucketCannedACL GetACL() const { return m_aCL; }
    inline bool ACLHasBeenSet() const { return m_aCLHasBeenSet; }
    inline void SetACL(BucketCannedACL value) { m_aCLHasBeenSet = true; m_aCL = value; }
    inline PutBucketAclRequest& WithACL(BucketCannedACL value) { SetACL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the elements that set the ACL permissions for an object per
     * grantee.</p>
     */
    inline const AccessControlPolicy& GetAccessControlPolicy() const { return m_accessControlPolicy; }
    inline bool AccessControlPolicyHasBeenSet() const { return m_accessControlPolicyHasBeenSet; }
    template<typename AccessControlPolicyT = AccessControlPolicy>
    void SetAccessControlPolicy(AccessControlPolicyT&& value) { m_accessControlPolicyHasBeenSet = true; m_accessControlPolicy = std::forward<AccessControlPolicyT>(value); }
    template<typename AccessControlPolicyT = AccessControlPolicy>
    PutBucketAclRequest& WithAccessControlPolicy(AccessControlPolicyT&& value) { SetAccessControlPolicy(std::forward<AccessControlPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bucket to which to apply the ACL.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    PutBucketAclRequest& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64 encoded 128-bit <code>MD5</code> digest of the data. This header
     * must be used as a message integrity check to verify that the request body was
     * not corrupted in transit. For more information, go to <a
     * href="http://www.ietf.org/rfc/rfc1864.txt">RFC 1864.</a> </p> <p>For requests
     * made using the Amazon Web Services Command Line Interface (CLI) or Amazon Web
     * Services SDKs, this field is calculated automatically.</p>
     */
    inline const Aws::String& GetContentMD5() const { return m_contentMD5; }
    inline bool ContentMD5HasBeenSet() const { return m_contentMD5HasBeenSet; }
    template<typename ContentMD5T = Aws::String>
    void SetContentMD5(ContentMD5T&& value) { m_contentMD5HasBeenSet = true; m_contentMD5 = std::forward<ContentMD5T>(value); }
    template<typename ContentMD5T = Aws::String>
    PutBucketAclRequest& WithContentMD5(ContentMD5T&& value) { SetContentMD5(std::forward<ContentMD5T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the algorithm used to create the checksum for the request when you
     * use the SDK. This header will not provide any additional functionality if you
     * don't use the SDK. When you send this header, there must be a corresponding
     * <code>x-amz-checksum</code> or <code>x-amz-trailer</code> header sent.
     * Otherwise, Amazon S3 fails the request with the HTTP status code <code>400 Bad
     * Request</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p> <p>If you provide
     * an individual checksum, Amazon S3 ignores any provided
     * <code>ChecksumAlgorithm</code> parameter.</p>
     */
    inline ChecksumAlgorithm GetChecksumAlgorithm() const { return m_checksumAlgorithm; }
    inline bool ChecksumAlgorithmHasBeenSet() const { return m_checksumAlgorithmHasBeenSet; }
    inline void SetChecksumAlgorithm(ChecksumAlgorithm value) { m_checksumAlgorithmHasBeenSet = true; m_checksumAlgorithm = value; }
    inline PutBucketAclRequest& WithChecksumAlgorithm(ChecksumAlgorithm value) { SetChecksumAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows grantee the read, write, read ACP, and write ACP permissions on the
     * bucket.</p>
     */
    inline const Aws::String& GetGrantFullControl() const { return m_grantFullControl; }
    inline bool GrantFullControlHasBeenSet() const { return m_grantFullControlHasBeenSet; }
    template<typename GrantFullControlT = Aws::String>
    void SetGrantFullControl(GrantFullControlT&& value) { m_grantFullControlHasBeenSet = true; m_grantFullControl = std::forward<GrantFullControlT>(value); }
    template<typename GrantFullControlT = Aws::String>
    PutBucketAclRequest& WithGrantFullControl(GrantFullControlT&& value) { SetGrantFullControl(std::forward<GrantFullControlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows grantee to list the objects in the bucket.</p>
     */
    inline const Aws::String& GetGrantRead() const { return m_grantRead; }
    inline bool GrantReadHasBeenSet() const { return m_grantReadHasBeenSet; }
    template<typename GrantReadT = Aws::String>
    void SetGrantRead(GrantReadT&& value) { m_grantReadHasBeenSet = true; m_grantRead = std::forward<GrantReadT>(value); }
    template<typename GrantReadT = Aws::String>
    PutBucketAclRequest& WithGrantRead(GrantReadT&& value) { SetGrantRead(std::forward<GrantReadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows grantee to read the bucket ACL.</p>
     */
    inline const Aws::String& GetGrantReadACP() const { return m_grantReadACP; }
    inline bool GrantReadACPHasBeenSet() const { return m_grantReadACPHasBeenSet; }
    template<typename GrantReadACPT = Aws::String>
    void SetGrantReadACP(GrantReadACPT&& value) { m_grantReadACPHasBeenSet = true; m_grantReadACP = std::forward<GrantReadACPT>(value); }
    template<typename GrantReadACPT = Aws::String>
    PutBucketAclRequest& WithGrantReadACP(GrantReadACPT&& value) { SetGrantReadACP(std::forward<GrantReadACPT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows grantee to create new objects in the bucket.</p> <p>For the bucket and
     * object owners of existing objects, also allows deletions and overwrites of those
     * objects.</p>
     */
    inline const Aws::String& GetGrantWrite() const { return m_grantWrite; }
    inline bool GrantWriteHasBeenSet() const { return m_grantWriteHasBeenSet; }
    template<typename GrantWriteT = Aws::String>
    void SetGrantWrite(GrantWriteT&& value) { m_grantWriteHasBeenSet = true; m_grantWrite = std::forward<GrantWriteT>(value); }
    template<typename GrantWriteT = Aws::String>
    PutBucketAclRequest& WithGrantWrite(GrantWriteT&& value) { SetGrantWrite(std::forward<GrantWriteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows grantee to write the ACL for the applicable bucket.</p>
     */
    inline const Aws::String& GetGrantWriteACP() const { return m_grantWriteACP; }
    inline bool GrantWriteACPHasBeenSet() const { return m_grantWriteACPHasBeenSet; }
    template<typename GrantWriteACPT = Aws::String>
    void SetGrantWriteACP(GrantWriteACPT&& value) { m_grantWriteACPHasBeenSet = true; m_grantWriteACP = std::forward<GrantWriteACPT>(value); }
    template<typename GrantWriteACPT = Aws::String>
    PutBucketAclRequest& WithGrantWriteACP(GrantWriteACPT&& value) { SetGrantWriteACP(std::forward<GrantWriteACPT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of the expected bucket owner. If the account ID that you
     * provide does not match the actual owner of the bucket, the request fails with
     * the HTTP status code <code>403 Forbidden</code> (access denied).</p>
     */
    inline const Aws::String& GetExpectedBucketOwner() const { return m_expectedBucketOwner; }
    inline bool ExpectedBucketOwnerHasBeenSet() const { return m_expectedBucketOwnerHasBeenSet; }
    template<typename ExpectedBucketOwnerT = Aws::String>
    void SetExpectedBucketOwner(ExpectedBucketOwnerT&& value) { m_expectedBucketOwnerHasBeenSet = true; m_expectedBucketOwner = std::forward<ExpectedBucketOwnerT>(value); }
    template<typename ExpectedBucketOwnerT = Aws::String>
    PutBucketAclRequest& WithExpectedBucketOwner(ExpectedBucketOwnerT&& value) { SetExpectedBucketOwner(std::forward<ExpectedBucketOwnerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomizedAccessLogTag() const { return m_customizedAccessLogTag; }
    inline bool CustomizedAccessLogTagHasBeenSet() const { return m_customizedAccessLogTagHasBeenSet; }
    template<typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) { m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag = std::forward<CustomizedAccessLogTagT>(value); }
    template<typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
    PutBucketAclRequest& WithCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) { SetCustomizedAccessLogTag(std::forward<CustomizedAccessLogTagT>(value)); return *this;}
    template<typename CustomizedAccessLogTagKeyT = Aws::String, typename CustomizedAccessLogTagValueT = Aws::String>
    PutBucketAclRequest& AddCustomizedAccessLogTag(CustomizedAccessLogTagKeyT&& key, CustomizedAccessLogTagValueT&& value) {
      m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag.emplace(std::forward<CustomizedAccessLogTagKeyT>(key), std::forward<CustomizedAccessLogTagValueT>(value)); return *this;
    }
    ///@}
  private:

    BucketCannedACL m_aCL{BucketCannedACL::NOT_SET};
    bool m_aCLHasBeenSet = false;

    AccessControlPolicy m_accessControlPolicy;
    bool m_accessControlPolicyHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_contentMD5;
    bool m_contentMD5HasBeenSet = false;

    ChecksumAlgorithm m_checksumAlgorithm{ChecksumAlgorithm::NOT_SET};
    bool m_checksumAlgorithmHasBeenSet = false;

    Aws::String m_grantFullControl;
    bool m_grantFullControlHasBeenSet = false;

    Aws::String m_grantRead;
    bool m_grantReadHasBeenSet = false;

    Aws::String m_grantReadACP;
    bool m_grantReadACPHasBeenSet = false;

    Aws::String m_grantWrite;
    bool m_grantWriteHasBeenSet = false;

    Aws::String m_grantWriteACP;
    bool m_grantWriteACPHasBeenSet = false;

    Aws::String m_expectedBucketOwner;
    bool m_expectedBucketOwnerHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customizedAccessLogTag;
    bool m_customizedAccessLogTagHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
