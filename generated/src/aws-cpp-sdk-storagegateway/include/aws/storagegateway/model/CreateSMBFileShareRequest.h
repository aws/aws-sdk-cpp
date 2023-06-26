/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/ObjectACL.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/CaseSensitivity.h>
#include <aws/storagegateway/model/CacheAttributes.h>
#include <aws/storagegateway/model/Tag.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>CreateSMBFileShareInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CreateSMBFileShareInput">AWS
   * API Reference</a></p>
   */
  class CreateSMBFileShareRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API CreateSMBFileShareRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSMBFileShare"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique string value that you supply that is used by S3 File Gateway to
     * ensure idempotent file share creation.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique string value that you supply that is used by S3 File Gateway to
     * ensure idempotent file share creation.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique string value that you supply that is used by S3 File Gateway to
     * ensure idempotent file share creation.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique string value that you supply that is used by S3 File Gateway to
     * ensure idempotent file share creation.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique string value that you supply that is used by S3 File Gateway to
     * ensure idempotent file share creation.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique string value that you supply that is used by S3 File Gateway to
     * ensure idempotent file share creation.</p>
     */
    inline CreateSMBFileShareRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique string value that you supply that is used by S3 File Gateway to
     * ensure idempotent file share creation.</p>
     */
    inline CreateSMBFileShareRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique string value that you supply that is used by S3 File Gateway to
     * ensure idempotent file share creation.</p>
     */
    inline CreateSMBFileShareRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The ARN of the S3 File Gateway on which you want to create a file share.</p>
     */
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    /**
     * <p>The ARN of the S3 File Gateway on which you want to create a file share.</p>
     */
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }

    /**
     * <p>The ARN of the S3 File Gateway on which you want to create a file share.</p>
     */
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    /**
     * <p>The ARN of the S3 File Gateway on which you want to create a file share.</p>
     */
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    /**
     * <p>The ARN of the S3 File Gateway on which you want to create a file share.</p>
     */
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    /**
     * <p>The ARN of the S3 File Gateway on which you want to create a file share.</p>
     */
    inline CreateSMBFileShareRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    /**
     * <p>The ARN of the S3 File Gateway on which you want to create a file share.</p>
     */
    inline CreateSMBFileShareRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the S3 File Gateway on which you want to create a file share.</p>
     */
    inline CreateSMBFileShareRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>Set to <code>true</code> to use Amazon S3 server-side encryption with your
     * own KMS key, or <code>false</code> to use a key managed by Amazon S3.
     * Optional.</p> <p>Valid Values: <code>true</code> | <code>false</code> </p>
     */
    inline bool GetKMSEncrypted() const{ return m_kMSEncrypted; }

    /**
     * <p>Set to <code>true</code> to use Amazon S3 server-side encryption with your
     * own KMS key, or <code>false</code> to use a key managed by Amazon S3.
     * Optional.</p> <p>Valid Values: <code>true</code> | <code>false</code> </p>
     */
    inline bool KMSEncryptedHasBeenSet() const { return m_kMSEncryptedHasBeenSet; }

    /**
     * <p>Set to <code>true</code> to use Amazon S3 server-side encryption with your
     * own KMS key, or <code>false</code> to use a key managed by Amazon S3.
     * Optional.</p> <p>Valid Values: <code>true</code> | <code>false</code> </p>
     */
    inline void SetKMSEncrypted(bool value) { m_kMSEncryptedHasBeenSet = true; m_kMSEncrypted = value; }

    /**
     * <p>Set to <code>true</code> to use Amazon S3 server-side encryption with your
     * own KMS key, or <code>false</code> to use a key managed by Amazon S3.
     * Optional.</p> <p>Valid Values: <code>true</code> | <code>false</code> </p>
     */
    inline CreateSMBFileShareRequest& WithKMSEncrypted(bool value) { SetKMSEncrypted(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a symmetric customer master key (CMK) used
     * for Amazon S3 server-side encryption. Storage Gateway does not support
     * asymmetric CMKs. This value can only be set when <code>KMSEncrypted</code> is
     * <code>true</code>. Optional.</p>
     */
    inline const Aws::String& GetKMSKey() const{ return m_kMSKey; }

    /**
     * <p>The Amazon Resource Name (ARN) of a symmetric customer master key (CMK) used
     * for Amazon S3 server-side encryption. Storage Gateway does not support
     * asymmetric CMKs. This value can only be set when <code>KMSEncrypted</code> is
     * <code>true</code>. Optional.</p>
     */
    inline bool KMSKeyHasBeenSet() const { return m_kMSKeyHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a symmetric customer master key (CMK) used
     * for Amazon S3 server-side encryption. Storage Gateway does not support
     * asymmetric CMKs. This value can only be set when <code>KMSEncrypted</code> is
     * <code>true</code>. Optional.</p>
     */
    inline void SetKMSKey(const Aws::String& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a symmetric customer master key (CMK) used
     * for Amazon S3 server-side encryption. Storage Gateway does not support
     * asymmetric CMKs. This value can only be set when <code>KMSEncrypted</code> is
     * <code>true</code>. Optional.</p>
     */
    inline void SetKMSKey(Aws::String&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a symmetric customer master key (CMK) used
     * for Amazon S3 server-side encryption. Storage Gateway does not support
     * asymmetric CMKs. This value can only be set when <code>KMSEncrypted</code> is
     * <code>true</code>. Optional.</p>
     */
    inline void SetKMSKey(const char* value) { m_kMSKeyHasBeenSet = true; m_kMSKey.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a symmetric customer master key (CMK) used
     * for Amazon S3 server-side encryption. Storage Gateway does not support
     * asymmetric CMKs. This value can only be set when <code>KMSEncrypted</code> is
     * <code>true</code>. Optional.</p>
     */
    inline CreateSMBFileShareRequest& WithKMSKey(const Aws::String& value) { SetKMSKey(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a symmetric customer master key (CMK) used
     * for Amazon S3 server-side encryption. Storage Gateway does not support
     * asymmetric CMKs. This value can only be set when <code>KMSEncrypted</code> is
     * <code>true</code>. Optional.</p>
     */
    inline CreateSMBFileShareRequest& WithKMSKey(Aws::String&& value) { SetKMSKey(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a symmetric customer master key (CMK) used
     * for Amazon S3 server-side encryption. Storage Gateway does not support
     * asymmetric CMKs. This value can only be set when <code>KMSEncrypted</code> is
     * <code>true</code>. Optional.</p>
     */
    inline CreateSMBFileShareRequest& WithKMSKey(const char* value) { SetKMSKey(value); return *this;}


    /**
     * <p>The ARN of the Identity and Access Management (IAM) role that an S3 File
     * Gateway assumes when it accesses the underlying storage.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The ARN of the Identity and Access Management (IAM) role that an S3 File
     * Gateway assumes when it accesses the underlying storage.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The ARN of the Identity and Access Management (IAM) role that an S3 File
     * Gateway assumes when it accesses the underlying storage.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The ARN of the Identity and Access Management (IAM) role that an S3 File
     * Gateway assumes when it accesses the underlying storage.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The ARN of the Identity and Access Management (IAM) role that an S3 File
     * Gateway assumes when it accesses the underlying storage.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The ARN of the Identity and Access Management (IAM) role that an S3 File
     * Gateway assumes when it accesses the underlying storage.</p>
     */
    inline CreateSMBFileShareRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The ARN of the Identity and Access Management (IAM) role that an S3 File
     * Gateway assumes when it accesses the underlying storage.</p>
     */
    inline CreateSMBFileShareRequest& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Identity and Access Management (IAM) role that an S3 File
     * Gateway assumes when it accesses the underlying storage.</p>
     */
    inline CreateSMBFileShareRequest& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>A custom ARN for the backend storage used for storing data for file shares.
     * It includes a resource ARN with an optional prefix concatenation. The prefix
     * must end with a forward slash (/).</p>  <p>You can specify LocationARN as
     * a bucket ARN, access point ARN or access point alias, as shown in the following
     * examples.</p> <p>Bucket ARN:</p> <p> <code>arn:aws:s3:::my-bucket/prefix/</code>
     * </p> <p>Access point ARN:</p> <p>
     * <code>arn:aws:s3:region:account-id:accesspoint/access-point-name/prefix/</code>
     * </p> <p>If you specify an access point, the bucket policy must be configured to
     * delegate access control to the access point. For information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points-policies.html#access-points-delegating-control">Delegating
     * access control to access points</a> in the <i>Amazon S3 User Guide</i>.</p>
     * <p>Access point alias:</p> <p>
     * <code>test-ap-ab123cdef4gehijklmn5opqrstuvuse1a-s3alias</code> </p> 
     */
    inline const Aws::String& GetLocationARN() const{ return m_locationARN; }

    /**
     * <p>A custom ARN for the backend storage used for storing data for file shares.
     * It includes a resource ARN with an optional prefix concatenation. The prefix
     * must end with a forward slash (/).</p>  <p>You can specify LocationARN as
     * a bucket ARN, access point ARN or access point alias, as shown in the following
     * examples.</p> <p>Bucket ARN:</p> <p> <code>arn:aws:s3:::my-bucket/prefix/</code>
     * </p> <p>Access point ARN:</p> <p>
     * <code>arn:aws:s3:region:account-id:accesspoint/access-point-name/prefix/</code>
     * </p> <p>If you specify an access point, the bucket policy must be configured to
     * delegate access control to the access point. For information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points-policies.html#access-points-delegating-control">Delegating
     * access control to access points</a> in the <i>Amazon S3 User Guide</i>.</p>
     * <p>Access point alias:</p> <p>
     * <code>test-ap-ab123cdef4gehijklmn5opqrstuvuse1a-s3alias</code> </p> 
     */
    inline bool LocationARNHasBeenSet() const { return m_locationARNHasBeenSet; }

    /**
     * <p>A custom ARN for the backend storage used for storing data for file shares.
     * It includes a resource ARN with an optional prefix concatenation. The prefix
     * must end with a forward slash (/).</p>  <p>You can specify LocationARN as
     * a bucket ARN, access point ARN or access point alias, as shown in the following
     * examples.</p> <p>Bucket ARN:</p> <p> <code>arn:aws:s3:::my-bucket/prefix/</code>
     * </p> <p>Access point ARN:</p> <p>
     * <code>arn:aws:s3:region:account-id:accesspoint/access-point-name/prefix/</code>
     * </p> <p>If you specify an access point, the bucket policy must be configured to
     * delegate access control to the access point. For information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points-policies.html#access-points-delegating-control">Delegating
     * access control to access points</a> in the <i>Amazon S3 User Guide</i>.</p>
     * <p>Access point alias:</p> <p>
     * <code>test-ap-ab123cdef4gehijklmn5opqrstuvuse1a-s3alias</code> </p> 
     */
    inline void SetLocationARN(const Aws::String& value) { m_locationARNHasBeenSet = true; m_locationARN = value; }

    /**
     * <p>A custom ARN for the backend storage used for storing data for file shares.
     * It includes a resource ARN with an optional prefix concatenation. The prefix
     * must end with a forward slash (/).</p>  <p>You can specify LocationARN as
     * a bucket ARN, access point ARN or access point alias, as shown in the following
     * examples.</p> <p>Bucket ARN:</p> <p> <code>arn:aws:s3:::my-bucket/prefix/</code>
     * </p> <p>Access point ARN:</p> <p>
     * <code>arn:aws:s3:region:account-id:accesspoint/access-point-name/prefix/</code>
     * </p> <p>If you specify an access point, the bucket policy must be configured to
     * delegate access control to the access point. For information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points-policies.html#access-points-delegating-control">Delegating
     * access control to access points</a> in the <i>Amazon S3 User Guide</i>.</p>
     * <p>Access point alias:</p> <p>
     * <code>test-ap-ab123cdef4gehijklmn5opqrstuvuse1a-s3alias</code> </p> 
     */
    inline void SetLocationARN(Aws::String&& value) { m_locationARNHasBeenSet = true; m_locationARN = std::move(value); }

    /**
     * <p>A custom ARN for the backend storage used for storing data for file shares.
     * It includes a resource ARN with an optional prefix concatenation. The prefix
     * must end with a forward slash (/).</p>  <p>You can specify LocationARN as
     * a bucket ARN, access point ARN or access point alias, as shown in the following
     * examples.</p> <p>Bucket ARN:</p> <p> <code>arn:aws:s3:::my-bucket/prefix/</code>
     * </p> <p>Access point ARN:</p> <p>
     * <code>arn:aws:s3:region:account-id:accesspoint/access-point-name/prefix/</code>
     * </p> <p>If you specify an access point, the bucket policy must be configured to
     * delegate access control to the access point. For information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points-policies.html#access-points-delegating-control">Delegating
     * access control to access points</a> in the <i>Amazon S3 User Guide</i>.</p>
     * <p>Access point alias:</p> <p>
     * <code>test-ap-ab123cdef4gehijklmn5opqrstuvuse1a-s3alias</code> </p> 
     */
    inline void SetLocationARN(const char* value) { m_locationARNHasBeenSet = true; m_locationARN.assign(value); }

    /**
     * <p>A custom ARN for the backend storage used for storing data for file shares.
     * It includes a resource ARN with an optional prefix concatenation. The prefix
     * must end with a forward slash (/).</p>  <p>You can specify LocationARN as
     * a bucket ARN, access point ARN or access point alias, as shown in the following
     * examples.</p> <p>Bucket ARN:</p> <p> <code>arn:aws:s3:::my-bucket/prefix/</code>
     * </p> <p>Access point ARN:</p> <p>
     * <code>arn:aws:s3:region:account-id:accesspoint/access-point-name/prefix/</code>
     * </p> <p>If you specify an access point, the bucket policy must be configured to
     * delegate access control to the access point. For information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points-policies.html#access-points-delegating-control">Delegating
     * access control to access points</a> in the <i>Amazon S3 User Guide</i>.</p>
     * <p>Access point alias:</p> <p>
     * <code>test-ap-ab123cdef4gehijklmn5opqrstuvuse1a-s3alias</code> </p> 
     */
    inline CreateSMBFileShareRequest& WithLocationARN(const Aws::String& value) { SetLocationARN(value); return *this;}

    /**
     * <p>A custom ARN for the backend storage used for storing data for file shares.
     * It includes a resource ARN with an optional prefix concatenation. The prefix
     * must end with a forward slash (/).</p>  <p>You can specify LocationARN as
     * a bucket ARN, access point ARN or access point alias, as shown in the following
     * examples.</p> <p>Bucket ARN:</p> <p> <code>arn:aws:s3:::my-bucket/prefix/</code>
     * </p> <p>Access point ARN:</p> <p>
     * <code>arn:aws:s3:region:account-id:accesspoint/access-point-name/prefix/</code>
     * </p> <p>If you specify an access point, the bucket policy must be configured to
     * delegate access control to the access point. For information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points-policies.html#access-points-delegating-control">Delegating
     * access control to access points</a> in the <i>Amazon S3 User Guide</i>.</p>
     * <p>Access point alias:</p> <p>
     * <code>test-ap-ab123cdef4gehijklmn5opqrstuvuse1a-s3alias</code> </p> 
     */
    inline CreateSMBFileShareRequest& WithLocationARN(Aws::String&& value) { SetLocationARN(std::move(value)); return *this;}

    /**
     * <p>A custom ARN for the backend storage used for storing data for file shares.
     * It includes a resource ARN with an optional prefix concatenation. The prefix
     * must end with a forward slash (/).</p>  <p>You can specify LocationARN as
     * a bucket ARN, access point ARN or access point alias, as shown in the following
     * examples.</p> <p>Bucket ARN:</p> <p> <code>arn:aws:s3:::my-bucket/prefix/</code>
     * </p> <p>Access point ARN:</p> <p>
     * <code>arn:aws:s3:region:account-id:accesspoint/access-point-name/prefix/</code>
     * </p> <p>If you specify an access point, the bucket policy must be configured to
     * delegate access control to the access point. For information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points-policies.html#access-points-delegating-control">Delegating
     * access control to access points</a> in the <i>Amazon S3 User Guide</i>.</p>
     * <p>Access point alias:</p> <p>
     * <code>test-ap-ab123cdef4gehijklmn5opqrstuvuse1a-s3alias</code> </p> 
     */
    inline CreateSMBFileShareRequest& WithLocationARN(const char* value) { SetLocationARN(value); return *this;}


    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the S3
     * File Gateway. The default value is <code>S3_STANDARD</code>. Optional.</p>
     * <p>Valid Values: <code>S3_STANDARD</code> | <code>S3_INTELLIGENT_TIERING</code>
     * | <code>S3_STANDARD_IA</code> | <code>S3_ONEZONE_IA</code> </p>
     */
    inline const Aws::String& GetDefaultStorageClass() const{ return m_defaultStorageClass; }

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the S3
     * File Gateway. The default value is <code>S3_STANDARD</code>. Optional.</p>
     * <p>Valid Values: <code>S3_STANDARD</code> | <code>S3_INTELLIGENT_TIERING</code>
     * | <code>S3_STANDARD_IA</code> | <code>S3_ONEZONE_IA</code> </p>
     */
    inline bool DefaultStorageClassHasBeenSet() const { return m_defaultStorageClassHasBeenSet; }

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the S3
     * File Gateway. The default value is <code>S3_STANDARD</code>. Optional.</p>
     * <p>Valid Values: <code>S3_STANDARD</code> | <code>S3_INTELLIGENT_TIERING</code>
     * | <code>S3_STANDARD_IA</code> | <code>S3_ONEZONE_IA</code> </p>
     */
    inline void SetDefaultStorageClass(const Aws::String& value) { m_defaultStorageClassHasBeenSet = true; m_defaultStorageClass = value; }

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the S3
     * File Gateway. The default value is <code>S3_STANDARD</code>. Optional.</p>
     * <p>Valid Values: <code>S3_STANDARD</code> | <code>S3_INTELLIGENT_TIERING</code>
     * | <code>S3_STANDARD_IA</code> | <code>S3_ONEZONE_IA</code> </p>
     */
    inline void SetDefaultStorageClass(Aws::String&& value) { m_defaultStorageClassHasBeenSet = true; m_defaultStorageClass = std::move(value); }

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the S3
     * File Gateway. The default value is <code>S3_STANDARD</code>. Optional.</p>
     * <p>Valid Values: <code>S3_STANDARD</code> | <code>S3_INTELLIGENT_TIERING</code>
     * | <code>S3_STANDARD_IA</code> | <code>S3_ONEZONE_IA</code> </p>
     */
    inline void SetDefaultStorageClass(const char* value) { m_defaultStorageClassHasBeenSet = true; m_defaultStorageClass.assign(value); }

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the S3
     * File Gateway. The default value is <code>S3_STANDARD</code>. Optional.</p>
     * <p>Valid Values: <code>S3_STANDARD</code> | <code>S3_INTELLIGENT_TIERING</code>
     * | <code>S3_STANDARD_IA</code> | <code>S3_ONEZONE_IA</code> </p>
     */
    inline CreateSMBFileShareRequest& WithDefaultStorageClass(const Aws::String& value) { SetDefaultStorageClass(value); return *this;}

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the S3
     * File Gateway. The default value is <code>S3_STANDARD</code>. Optional.</p>
     * <p>Valid Values: <code>S3_STANDARD</code> | <code>S3_INTELLIGENT_TIERING</code>
     * | <code>S3_STANDARD_IA</code> | <code>S3_ONEZONE_IA</code> </p>
     */
    inline CreateSMBFileShareRequest& WithDefaultStorageClass(Aws::String&& value) { SetDefaultStorageClass(std::move(value)); return *this;}

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the S3
     * File Gateway. The default value is <code>S3_STANDARD</code>. Optional.</p>
     * <p>Valid Values: <code>S3_STANDARD</code> | <code>S3_INTELLIGENT_TIERING</code>
     * | <code>S3_STANDARD_IA</code> | <code>S3_ONEZONE_IA</code> </p>
     */
    inline CreateSMBFileShareRequest& WithDefaultStorageClass(const char* value) { SetDefaultStorageClass(value); return *this;}


    /**
     * <p>A value that sets the access control list (ACL) permission for objects in the
     * S3 bucket that a S3 File Gateway puts objects into. The default value is
     * <code>private</code>.</p>
     */
    inline const ObjectACL& GetObjectACL() const{ return m_objectACL; }

    /**
     * <p>A value that sets the access control list (ACL) permission for objects in the
     * S3 bucket that a S3 File Gateway puts objects into. The default value is
     * <code>private</code>.</p>
     */
    inline bool ObjectACLHasBeenSet() const { return m_objectACLHasBeenSet; }

    /**
     * <p>A value that sets the access control list (ACL) permission for objects in the
     * S3 bucket that a S3 File Gateway puts objects into. The default value is
     * <code>private</code>.</p>
     */
    inline void SetObjectACL(const ObjectACL& value) { m_objectACLHasBeenSet = true; m_objectACL = value; }

    /**
     * <p>A value that sets the access control list (ACL) permission for objects in the
     * S3 bucket that a S3 File Gateway puts objects into. The default value is
     * <code>private</code>.</p>
     */
    inline void SetObjectACL(ObjectACL&& value) { m_objectACLHasBeenSet = true; m_objectACL = std::move(value); }

    /**
     * <p>A value that sets the access control list (ACL) permission for objects in the
     * S3 bucket that a S3 File Gateway puts objects into. The default value is
     * <code>private</code>.</p>
     */
    inline CreateSMBFileShareRequest& WithObjectACL(const ObjectACL& value) { SetObjectACL(value); return *this;}

    /**
     * <p>A value that sets the access control list (ACL) permission for objects in the
     * S3 bucket that a S3 File Gateway puts objects into. The default value is
     * <code>private</code>.</p>
     */
    inline CreateSMBFileShareRequest& WithObjectACL(ObjectACL&& value) { SetObjectACL(std::move(value)); return *this;}


    /**
     * <p>A value that sets the write status of a file share. Set this value to
     * <code>true</code> to set the write status to read-only, otherwise set to
     * <code>false</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline bool GetReadOnly() const{ return m_readOnly; }

    /**
     * <p>A value that sets the write status of a file share. Set this value to
     * <code>true</code> to set the write status to read-only, otherwise set to
     * <code>false</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline bool ReadOnlyHasBeenSet() const { return m_readOnlyHasBeenSet; }

    /**
     * <p>A value that sets the write status of a file share. Set this value to
     * <code>true</code> to set the write status to read-only, otherwise set to
     * <code>false</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline void SetReadOnly(bool value) { m_readOnlyHasBeenSet = true; m_readOnly = value; }

    /**
     * <p>A value that sets the write status of a file share. Set this value to
     * <code>true</code> to set the write status to read-only, otherwise set to
     * <code>false</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline CreateSMBFileShareRequest& WithReadOnly(bool value) { SetReadOnly(value); return *this;}


    /**
     * <p>A value that enables guessing of the MIME type for uploaded objects based on
     * file extensions. Set this value to <code>true</code> to enable MIME type
     * guessing, otherwise set to <code>false</code>. The default value is
     * <code>true</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline bool GetGuessMIMETypeEnabled() const{ return m_guessMIMETypeEnabled; }

    /**
     * <p>A value that enables guessing of the MIME type for uploaded objects based on
     * file extensions. Set this value to <code>true</code> to enable MIME type
     * guessing, otherwise set to <code>false</code>. The default value is
     * <code>true</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline bool GuessMIMETypeEnabledHasBeenSet() const { return m_guessMIMETypeEnabledHasBeenSet; }

    /**
     * <p>A value that enables guessing of the MIME type for uploaded objects based on
     * file extensions. Set this value to <code>true</code> to enable MIME type
     * guessing, otherwise set to <code>false</code>. The default value is
     * <code>true</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline void SetGuessMIMETypeEnabled(bool value) { m_guessMIMETypeEnabledHasBeenSet = true; m_guessMIMETypeEnabled = value; }

    /**
     * <p>A value that enables guessing of the MIME type for uploaded objects based on
     * file extensions. Set this value to <code>true</code> to enable MIME type
     * guessing, otherwise set to <code>false</code>. The default value is
     * <code>true</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline CreateSMBFileShareRequest& WithGuessMIMETypeEnabled(bool value) { SetGuessMIMETypeEnabled(value); return *this;}


    /**
     * <p>A value that sets who pays the cost of the request and the cost associated
     * with data download from the S3 bucket. If this value is set to
     * <code>true</code>, the requester pays the costs; otherwise, the S3 bucket owner
     * pays. However, the S3 bucket owner always pays the cost of storing data.</p>
     *  <p> <code>RequesterPays</code> is a configuration for the S3 bucket that
     * backs the file share, so make sure that the configuration on the file share is
     * the same as the S3 bucket configuration.</p>  <p>Valid Values:
     * <code>true</code> | <code>false</code> </p>
     */
    inline bool GetRequesterPays() const{ return m_requesterPays; }

    /**
     * <p>A value that sets who pays the cost of the request and the cost associated
     * with data download from the S3 bucket. If this value is set to
     * <code>true</code>, the requester pays the costs; otherwise, the S3 bucket owner
     * pays. However, the S3 bucket owner always pays the cost of storing data.</p>
     *  <p> <code>RequesterPays</code> is a configuration for the S3 bucket that
     * backs the file share, so make sure that the configuration on the file share is
     * the same as the S3 bucket configuration.</p>  <p>Valid Values:
     * <code>true</code> | <code>false</code> </p>
     */
    inline bool RequesterPaysHasBeenSet() const { return m_requesterPaysHasBeenSet; }

    /**
     * <p>A value that sets who pays the cost of the request and the cost associated
     * with data download from the S3 bucket. If this value is set to
     * <code>true</code>, the requester pays the costs; otherwise, the S3 bucket owner
     * pays. However, the S3 bucket owner always pays the cost of storing data.</p>
     *  <p> <code>RequesterPays</code> is a configuration for the S3 bucket that
     * backs the file share, so make sure that the configuration on the file share is
     * the same as the S3 bucket configuration.</p>  <p>Valid Values:
     * <code>true</code> | <code>false</code> </p>
     */
    inline void SetRequesterPays(bool value) { m_requesterPaysHasBeenSet = true; m_requesterPays = value; }

    /**
     * <p>A value that sets who pays the cost of the request and the cost associated
     * with data download from the S3 bucket. If this value is set to
     * <code>true</code>, the requester pays the costs; otherwise, the S3 bucket owner
     * pays. However, the S3 bucket owner always pays the cost of storing data.</p>
     *  <p> <code>RequesterPays</code> is a configuration for the S3 bucket that
     * backs the file share, so make sure that the configuration on the file share is
     * the same as the S3 bucket configuration.</p>  <p>Valid Values:
     * <code>true</code> | <code>false</code> </p>
     */
    inline CreateSMBFileShareRequest& WithRequesterPays(bool value) { SetRequesterPays(value); return *this;}


    /**
     * <p>Set this value to <code>true</code> to enable access control list (ACL) on
     * the SMB file share. Set it to <code>false</code> to map file and directory
     * permissions to the POSIX permissions.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/smb-acl.html">Using
     * Microsoft Windows ACLs to control access to an SMB file share</a> in the
     * <i>Storage Gateway User Guide</i>.</p> <p>Valid Values: <code>true</code> |
     * <code>false</code> </p>
     */
    inline bool GetSMBACLEnabled() const{ return m_sMBACLEnabled; }

    /**
     * <p>Set this value to <code>true</code> to enable access control list (ACL) on
     * the SMB file share. Set it to <code>false</code> to map file and directory
     * permissions to the POSIX permissions.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/smb-acl.html">Using
     * Microsoft Windows ACLs to control access to an SMB file share</a> in the
     * <i>Storage Gateway User Guide</i>.</p> <p>Valid Values: <code>true</code> |
     * <code>false</code> </p>
     */
    inline bool SMBACLEnabledHasBeenSet() const { return m_sMBACLEnabledHasBeenSet; }

    /**
     * <p>Set this value to <code>true</code> to enable access control list (ACL) on
     * the SMB file share. Set it to <code>false</code> to map file and directory
     * permissions to the POSIX permissions.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/smb-acl.html">Using
     * Microsoft Windows ACLs to control access to an SMB file share</a> in the
     * <i>Storage Gateway User Guide</i>.</p> <p>Valid Values: <code>true</code> |
     * <code>false</code> </p>
     */
    inline void SetSMBACLEnabled(bool value) { m_sMBACLEnabledHasBeenSet = true; m_sMBACLEnabled = value; }

    /**
     * <p>Set this value to <code>true</code> to enable access control list (ACL) on
     * the SMB file share. Set it to <code>false</code> to map file and directory
     * permissions to the POSIX permissions.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/smb-acl.html">Using
     * Microsoft Windows ACLs to control access to an SMB file share</a> in the
     * <i>Storage Gateway User Guide</i>.</p> <p>Valid Values: <code>true</code> |
     * <code>false</code> </p>
     */
    inline CreateSMBFileShareRequest& WithSMBACLEnabled(bool value) { SetSMBACLEnabled(value); return *this;}


    /**
     * <p>The files and folders on this share will only be visible to users with read
     * access.</p>
     */
    inline bool GetAccessBasedEnumeration() const{ return m_accessBasedEnumeration; }

    /**
     * <p>The files and folders on this share will only be visible to users with read
     * access.</p>
     */
    inline bool AccessBasedEnumerationHasBeenSet() const { return m_accessBasedEnumerationHasBeenSet; }

    /**
     * <p>The files and folders on this share will only be visible to users with read
     * access.</p>
     */
    inline void SetAccessBasedEnumeration(bool value) { m_accessBasedEnumerationHasBeenSet = true; m_accessBasedEnumeration = value; }

    /**
     * <p>The files and folders on this share will only be visible to users with read
     * access.</p>
     */
    inline CreateSMBFileShareRequest& WithAccessBasedEnumeration(bool value) { SetAccessBasedEnumeration(value); return *this;}


    /**
     * <p>A list of users or groups in the Active Directory that will be granted
     * administrator privileges on the file share. These users can do all file
     * operations as the super-user. Acceptable formats include:
     * <code>DOMAIN\User1</code>, <code>user1</code>, <code>@group1</code>, and
     * <code>@DOMAIN\group1</code>.</p>  <p>Use this option very carefully,
     * because any user in this list can do anything they like on the file share,
     * regardless of file permissions.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetAdminUserList() const{ return m_adminUserList; }

    /**
     * <p>A list of users or groups in the Active Directory that will be granted
     * administrator privileges on the file share. These users can do all file
     * operations as the super-user. Acceptable formats include:
     * <code>DOMAIN\User1</code>, <code>user1</code>, <code>@group1</code>, and
     * <code>@DOMAIN\group1</code>.</p>  <p>Use this option very carefully,
     * because any user in this list can do anything they like on the file share,
     * regardless of file permissions.</p> 
     */
    inline bool AdminUserListHasBeenSet() const { return m_adminUserListHasBeenSet; }

    /**
     * <p>A list of users or groups in the Active Directory that will be granted
     * administrator privileges on the file share. These users can do all file
     * operations as the super-user. Acceptable formats include:
     * <code>DOMAIN\User1</code>, <code>user1</code>, <code>@group1</code>, and
     * <code>@DOMAIN\group1</code>.</p>  <p>Use this option very carefully,
     * because any user in this list can do anything they like on the file share,
     * regardless of file permissions.</p> 
     */
    inline void SetAdminUserList(const Aws::Vector<Aws::String>& value) { m_adminUserListHasBeenSet = true; m_adminUserList = value; }

    /**
     * <p>A list of users or groups in the Active Directory that will be granted
     * administrator privileges on the file share. These users can do all file
     * operations as the super-user. Acceptable formats include:
     * <code>DOMAIN\User1</code>, <code>user1</code>, <code>@group1</code>, and
     * <code>@DOMAIN\group1</code>.</p>  <p>Use this option very carefully,
     * because any user in this list can do anything they like on the file share,
     * regardless of file permissions.</p> 
     */
    inline void SetAdminUserList(Aws::Vector<Aws::String>&& value) { m_adminUserListHasBeenSet = true; m_adminUserList = std::move(value); }

    /**
     * <p>A list of users or groups in the Active Directory that will be granted
     * administrator privileges on the file share. These users can do all file
     * operations as the super-user. Acceptable formats include:
     * <code>DOMAIN\User1</code>, <code>user1</code>, <code>@group1</code>, and
     * <code>@DOMAIN\group1</code>.</p>  <p>Use this option very carefully,
     * because any user in this list can do anything they like on the file share,
     * regardless of file permissions.</p> 
     */
    inline CreateSMBFileShareRequest& WithAdminUserList(const Aws::Vector<Aws::String>& value) { SetAdminUserList(value); return *this;}

    /**
     * <p>A list of users or groups in the Active Directory that will be granted
     * administrator privileges on the file share. These users can do all file
     * operations as the super-user. Acceptable formats include:
     * <code>DOMAIN\User1</code>, <code>user1</code>, <code>@group1</code>, and
     * <code>@DOMAIN\group1</code>.</p>  <p>Use this option very carefully,
     * because any user in this list can do anything they like on the file share,
     * regardless of file permissions.</p> 
     */
    inline CreateSMBFileShareRequest& WithAdminUserList(Aws::Vector<Aws::String>&& value) { SetAdminUserList(std::move(value)); return *this;}

    /**
     * <p>A list of users or groups in the Active Directory that will be granted
     * administrator privileges on the file share. These users can do all file
     * operations as the super-user. Acceptable formats include:
     * <code>DOMAIN\User1</code>, <code>user1</code>, <code>@group1</code>, and
     * <code>@DOMAIN\group1</code>.</p>  <p>Use this option very carefully,
     * because any user in this list can do anything they like on the file share,
     * regardless of file permissions.</p> 
     */
    inline CreateSMBFileShareRequest& AddAdminUserList(const Aws::String& value) { m_adminUserListHasBeenSet = true; m_adminUserList.push_back(value); return *this; }

    /**
     * <p>A list of users or groups in the Active Directory that will be granted
     * administrator privileges on the file share. These users can do all file
     * operations as the super-user. Acceptable formats include:
     * <code>DOMAIN\User1</code>, <code>user1</code>, <code>@group1</code>, and
     * <code>@DOMAIN\group1</code>.</p>  <p>Use this option very carefully,
     * because any user in this list can do anything they like on the file share,
     * regardless of file permissions.</p> 
     */
    inline CreateSMBFileShareRequest& AddAdminUserList(Aws::String&& value) { m_adminUserListHasBeenSet = true; m_adminUserList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of users or groups in the Active Directory that will be granted
     * administrator privileges on the file share. These users can do all file
     * operations as the super-user. Acceptable formats include:
     * <code>DOMAIN\User1</code>, <code>user1</code>, <code>@group1</code>, and
     * <code>@DOMAIN\group1</code>.</p>  <p>Use this option very carefully,
     * because any user in this list can do anything they like on the file share,
     * regardless of file permissions.</p> 
     */
    inline CreateSMBFileShareRequest& AddAdminUserList(const char* value) { m_adminUserListHasBeenSet = true; m_adminUserList.push_back(value); return *this; }


    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file <a href=""/> share. A group must be prefixed with the @ character.
     * Acceptable formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValidUserList() const{ return m_validUserList; }

    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file <a href=""/> share. A group must be prefixed with the @ character.
     * Acceptable formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline bool ValidUserListHasBeenSet() const { return m_validUserListHasBeenSet; }

    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file <a href=""/> share. A group must be prefixed with the @ character.
     * Acceptable formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline void SetValidUserList(const Aws::Vector<Aws::String>& value) { m_validUserListHasBeenSet = true; m_validUserList = value; }

    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file <a href=""/> share. A group must be prefixed with the @ character.
     * Acceptable formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline void SetValidUserList(Aws::Vector<Aws::String>&& value) { m_validUserListHasBeenSet = true; m_validUserList = std::move(value); }

    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file <a href=""/> share. A group must be prefixed with the @ character.
     * Acceptable formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline CreateSMBFileShareRequest& WithValidUserList(const Aws::Vector<Aws::String>& value) { SetValidUserList(value); return *this;}

    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file <a href=""/> share. A group must be prefixed with the @ character.
     * Acceptable formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline CreateSMBFileShareRequest& WithValidUserList(Aws::Vector<Aws::String>&& value) { SetValidUserList(std::move(value)); return *this;}

    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file <a href=""/> share. A group must be prefixed with the @ character.
     * Acceptable formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline CreateSMBFileShareRequest& AddValidUserList(const Aws::String& value) { m_validUserListHasBeenSet = true; m_validUserList.push_back(value); return *this; }

    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file <a href=""/> share. A group must be prefixed with the @ character.
     * Acceptable formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline CreateSMBFileShareRequest& AddValidUserList(Aws::String&& value) { m_validUserListHasBeenSet = true; m_validUserList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file <a href=""/> share. A group must be prefixed with the @ character.
     * Acceptable formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline CreateSMBFileShareRequest& AddValidUserList(const char* value) { m_validUserListHasBeenSet = true; m_validUserList.push_back(value); return *this; }


    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInvalidUserList() const{ return m_invalidUserList; }

    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline bool InvalidUserListHasBeenSet() const { return m_invalidUserListHasBeenSet; }

    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline void SetInvalidUserList(const Aws::Vector<Aws::String>& value) { m_invalidUserListHasBeenSet = true; m_invalidUserList = value; }

    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline void SetInvalidUserList(Aws::Vector<Aws::String>&& value) { m_invalidUserListHasBeenSet = true; m_invalidUserList = std::move(value); }

    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline CreateSMBFileShareRequest& WithInvalidUserList(const Aws::Vector<Aws::String>& value) { SetInvalidUserList(value); return *this;}

    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline CreateSMBFileShareRequest& WithInvalidUserList(Aws::Vector<Aws::String>&& value) { SetInvalidUserList(std::move(value)); return *this;}

    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline CreateSMBFileShareRequest& AddInvalidUserList(const Aws::String& value) { m_invalidUserListHasBeenSet = true; m_invalidUserList.push_back(value); return *this; }

    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline CreateSMBFileShareRequest& AddInvalidUserList(Aws::String&& value) { m_invalidUserListHasBeenSet = true; m_invalidUserList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline CreateSMBFileShareRequest& AddInvalidUserList(const char* value) { m_invalidUserListHasBeenSet = true; m_invalidUserList.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for audit logs.</p>
     */
    inline const Aws::String& GetAuditDestinationARN() const{ return m_auditDestinationARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for audit logs.</p>
     */
    inline bool AuditDestinationARNHasBeenSet() const { return m_auditDestinationARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for audit logs.</p>
     */
    inline void SetAuditDestinationARN(const Aws::String& value) { m_auditDestinationARNHasBeenSet = true; m_auditDestinationARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for audit logs.</p>
     */
    inline void SetAuditDestinationARN(Aws::String&& value) { m_auditDestinationARNHasBeenSet = true; m_auditDestinationARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for audit logs.</p>
     */
    inline void SetAuditDestinationARN(const char* value) { m_auditDestinationARNHasBeenSet = true; m_auditDestinationARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for audit logs.</p>
     */
    inline CreateSMBFileShareRequest& WithAuditDestinationARN(const Aws::String& value) { SetAuditDestinationARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for audit logs.</p>
     */
    inline CreateSMBFileShareRequest& WithAuditDestinationARN(Aws::String&& value) { SetAuditDestinationARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for audit logs.</p>
     */
    inline CreateSMBFileShareRequest& WithAuditDestinationARN(const char* value) { SetAuditDestinationARN(value); return *this;}


    /**
     * <p>The authentication method that users use to access the file share. The
     * default is <code>ActiveDirectory</code>.</p> <p>Valid Values:
     * <code>ActiveDirectory</code> | <code>GuestAccess</code> </p>
     */
    inline const Aws::String& GetAuthentication() const{ return m_authentication; }

    /**
     * <p>The authentication method that users use to access the file share. The
     * default is <code>ActiveDirectory</code>.</p> <p>Valid Values:
     * <code>ActiveDirectory</code> | <code>GuestAccess</code> </p>
     */
    inline bool AuthenticationHasBeenSet() const { return m_authenticationHasBeenSet; }

    /**
     * <p>The authentication method that users use to access the file share. The
     * default is <code>ActiveDirectory</code>.</p> <p>Valid Values:
     * <code>ActiveDirectory</code> | <code>GuestAccess</code> </p>
     */
    inline void SetAuthentication(const Aws::String& value) { m_authenticationHasBeenSet = true; m_authentication = value; }

    /**
     * <p>The authentication method that users use to access the file share. The
     * default is <code>ActiveDirectory</code>.</p> <p>Valid Values:
     * <code>ActiveDirectory</code> | <code>GuestAccess</code> </p>
     */
    inline void SetAuthentication(Aws::String&& value) { m_authenticationHasBeenSet = true; m_authentication = std::move(value); }

    /**
     * <p>The authentication method that users use to access the file share. The
     * default is <code>ActiveDirectory</code>.</p> <p>Valid Values:
     * <code>ActiveDirectory</code> | <code>GuestAccess</code> </p>
     */
    inline void SetAuthentication(const char* value) { m_authenticationHasBeenSet = true; m_authentication.assign(value); }

    /**
     * <p>The authentication method that users use to access the file share. The
     * default is <code>ActiveDirectory</code>.</p> <p>Valid Values:
     * <code>ActiveDirectory</code> | <code>GuestAccess</code> </p>
     */
    inline CreateSMBFileShareRequest& WithAuthentication(const Aws::String& value) { SetAuthentication(value); return *this;}

    /**
     * <p>The authentication method that users use to access the file share. The
     * default is <code>ActiveDirectory</code>.</p> <p>Valid Values:
     * <code>ActiveDirectory</code> | <code>GuestAccess</code> </p>
     */
    inline CreateSMBFileShareRequest& WithAuthentication(Aws::String&& value) { SetAuthentication(std::move(value)); return *this;}

    /**
     * <p>The authentication method that users use to access the file share. The
     * default is <code>ActiveDirectory</code>.</p> <p>Valid Values:
     * <code>ActiveDirectory</code> | <code>GuestAccess</code> </p>
     */
    inline CreateSMBFileShareRequest& WithAuthentication(const char* value) { SetAuthentication(value); return *this;}


    /**
     * <p>The case of an object name in an Amazon S3 bucket. For
     * <code>ClientSpecified</code>, the client determines the case sensitivity. For
     * <code>CaseSensitive</code>, the gateway determines the case sensitivity. The
     * default value is <code>ClientSpecified</code>.</p>
     */
    inline const CaseSensitivity& GetCaseSensitivity() const{ return m_caseSensitivity; }

    /**
     * <p>The case of an object name in an Amazon S3 bucket. For
     * <code>ClientSpecified</code>, the client determines the case sensitivity. For
     * <code>CaseSensitive</code>, the gateway determines the case sensitivity. The
     * default value is <code>ClientSpecified</code>.</p>
     */
    inline bool CaseSensitivityHasBeenSet() const { return m_caseSensitivityHasBeenSet; }

    /**
     * <p>The case of an object name in an Amazon S3 bucket. For
     * <code>ClientSpecified</code>, the client determines the case sensitivity. For
     * <code>CaseSensitive</code>, the gateway determines the case sensitivity. The
     * default value is <code>ClientSpecified</code>.</p>
     */
    inline void SetCaseSensitivity(const CaseSensitivity& value) { m_caseSensitivityHasBeenSet = true; m_caseSensitivity = value; }

    /**
     * <p>The case of an object name in an Amazon S3 bucket. For
     * <code>ClientSpecified</code>, the client determines the case sensitivity. For
     * <code>CaseSensitive</code>, the gateway determines the case sensitivity. The
     * default value is <code>ClientSpecified</code>.</p>
     */
    inline void SetCaseSensitivity(CaseSensitivity&& value) { m_caseSensitivityHasBeenSet = true; m_caseSensitivity = std::move(value); }

    /**
     * <p>The case of an object name in an Amazon S3 bucket. For
     * <code>ClientSpecified</code>, the client determines the case sensitivity. For
     * <code>CaseSensitive</code>, the gateway determines the case sensitivity. The
     * default value is <code>ClientSpecified</code>.</p>
     */
    inline CreateSMBFileShareRequest& WithCaseSensitivity(const CaseSensitivity& value) { SetCaseSensitivity(value); return *this;}

    /**
     * <p>The case of an object name in an Amazon S3 bucket. For
     * <code>ClientSpecified</code>, the client determines the case sensitivity. For
     * <code>CaseSensitive</code>, the gateway determines the case sensitivity. The
     * default value is <code>ClientSpecified</code>.</p>
     */
    inline CreateSMBFileShareRequest& WithCaseSensitivity(CaseSensitivity&& value) { SetCaseSensitivity(std::move(value)); return *this;}


    /**
     * <p>A list of up to 50 tags that can be assigned to the NFS file share. Each tag
     * is a key-value pair.</p>  <p>Valid characters for key and value are
     * letters, spaces, and numbers representable in UTF-8 format, and the following
     * special characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of up to 50 tags that can be assigned to the NFS file share. Each tag
     * is a key-value pair.</p>  <p>Valid characters for key and value are
     * letters, spaces, and numbers representable in UTF-8 format, and the following
     * special characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of up to 50 tags that can be assigned to the NFS file share. Each tag
     * is a key-value pair.</p>  <p>Valid characters for key and value are
     * letters, spaces, and numbers representable in UTF-8 format, and the following
     * special characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of up to 50 tags that can be assigned to the NFS file share. Each tag
     * is a key-value pair.</p>  <p>Valid characters for key and value are
     * letters, spaces, and numbers representable in UTF-8 format, and the following
     * special characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of up to 50 tags that can be assigned to the NFS file share. Each tag
     * is a key-value pair.</p>  <p>Valid characters for key and value are
     * letters, spaces, and numbers representable in UTF-8 format, and the following
     * special characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline CreateSMBFileShareRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of up to 50 tags that can be assigned to the NFS file share. Each tag
     * is a key-value pair.</p>  <p>Valid characters for key and value are
     * letters, spaces, and numbers representable in UTF-8 format, and the following
     * special characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline CreateSMBFileShareRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of up to 50 tags that can be assigned to the NFS file share. Each tag
     * is a key-value pair.</p>  <p>Valid characters for key and value are
     * letters, spaces, and numbers representable in UTF-8 format, and the following
     * special characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline CreateSMBFileShareRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of up to 50 tags that can be assigned to the NFS file share. Each tag
     * is a key-value pair.</p>  <p>Valid characters for key and value are
     * letters, spaces, and numbers representable in UTF-8 format, and the following
     * special characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline CreateSMBFileShareRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the file share. Optional.</p>  <p>
     * <code>FileShareName</code> must be set if an S3 prefix name is set in
     * <code>LocationARN</code>, or if an access point or access point alias is
     * used.</p> 
     */
    inline const Aws::String& GetFileShareName() const{ return m_fileShareName; }

    /**
     * <p>The name of the file share. Optional.</p>  <p>
     * <code>FileShareName</code> must be set if an S3 prefix name is set in
     * <code>LocationARN</code>, or if an access point or access point alias is
     * used.</p> 
     */
    inline bool FileShareNameHasBeenSet() const { return m_fileShareNameHasBeenSet; }

    /**
     * <p>The name of the file share. Optional.</p>  <p>
     * <code>FileShareName</code> must be set if an S3 prefix name is set in
     * <code>LocationARN</code>, or if an access point or access point alias is
     * used.</p> 
     */
    inline void SetFileShareName(const Aws::String& value) { m_fileShareNameHasBeenSet = true; m_fileShareName = value; }

    /**
     * <p>The name of the file share. Optional.</p>  <p>
     * <code>FileShareName</code> must be set if an S3 prefix name is set in
     * <code>LocationARN</code>, or if an access point or access point alias is
     * used.</p> 
     */
    inline void SetFileShareName(Aws::String&& value) { m_fileShareNameHasBeenSet = true; m_fileShareName = std::move(value); }

    /**
     * <p>The name of the file share. Optional.</p>  <p>
     * <code>FileShareName</code> must be set if an S3 prefix name is set in
     * <code>LocationARN</code>, or if an access point or access point alias is
     * used.</p> 
     */
    inline void SetFileShareName(const char* value) { m_fileShareNameHasBeenSet = true; m_fileShareName.assign(value); }

    /**
     * <p>The name of the file share. Optional.</p>  <p>
     * <code>FileShareName</code> must be set if an S3 prefix name is set in
     * <code>LocationARN</code>, or if an access point or access point alias is
     * used.</p> 
     */
    inline CreateSMBFileShareRequest& WithFileShareName(const Aws::String& value) { SetFileShareName(value); return *this;}

    /**
     * <p>The name of the file share. Optional.</p>  <p>
     * <code>FileShareName</code> must be set if an S3 prefix name is set in
     * <code>LocationARN</code>, or if an access point or access point alias is
     * used.</p> 
     */
    inline CreateSMBFileShareRequest& WithFileShareName(Aws::String&& value) { SetFileShareName(std::move(value)); return *this;}

    /**
     * <p>The name of the file share. Optional.</p>  <p>
     * <code>FileShareName</code> must be set if an S3 prefix name is set in
     * <code>LocationARN</code>, or if an access point or access point alias is
     * used.</p> 
     */
    inline CreateSMBFileShareRequest& WithFileShareName(const char* value) { SetFileShareName(value); return *this;}


    /**
     * <p>Specifies refresh cache information for the file share.</p>
     */
    inline const CacheAttributes& GetCacheAttributes() const{ return m_cacheAttributes; }

    /**
     * <p>Specifies refresh cache information for the file share.</p>
     */
    inline bool CacheAttributesHasBeenSet() const { return m_cacheAttributesHasBeenSet; }

    /**
     * <p>Specifies refresh cache information for the file share.</p>
     */
    inline void SetCacheAttributes(const CacheAttributes& value) { m_cacheAttributesHasBeenSet = true; m_cacheAttributes = value; }

    /**
     * <p>Specifies refresh cache information for the file share.</p>
     */
    inline void SetCacheAttributes(CacheAttributes&& value) { m_cacheAttributesHasBeenSet = true; m_cacheAttributes = std::move(value); }

    /**
     * <p>Specifies refresh cache information for the file share.</p>
     */
    inline CreateSMBFileShareRequest& WithCacheAttributes(const CacheAttributes& value) { SetCacheAttributes(value); return *this;}

    /**
     * <p>Specifies refresh cache information for the file share.</p>
     */
    inline CreateSMBFileShareRequest& WithCacheAttributes(CacheAttributes&& value) { SetCacheAttributes(std::move(value)); return *this;}


    /**
     * <p>The notification policy of the file share. <code>SettlingTimeInSeconds</code>
     * controls the number of seconds to wait after the last point in time a client
     * wrote to a file before generating an <code>ObjectUploaded</code> notification.
     * Because clients can make many small writes to files, it's best to set this
     * parameter for as long as possible to avoid generating multiple notifications for
     * the same file in a small time period.</p>  <p>
     * <code>SettlingTimeInSeconds</code> has no effect on the timing of the object
     * uploading to Amazon S3, only the timing of the notification.</p>  <p>The
     * following example sets <code>NotificationPolicy</code> on with
     * <code>SettlingTimeInSeconds</code> set to 60.</p> <p> <code>{\"Upload\":
     * {\"SettlingTimeInSeconds\": 60}}</code> </p> <p>The following example sets
     * <code>NotificationPolicy</code> off.</p> <p> <code>{}</code> </p>
     */
    inline const Aws::String& GetNotificationPolicy() const{ return m_notificationPolicy; }

    /**
     * <p>The notification policy of the file share. <code>SettlingTimeInSeconds</code>
     * controls the number of seconds to wait after the last point in time a client
     * wrote to a file before generating an <code>ObjectUploaded</code> notification.
     * Because clients can make many small writes to files, it's best to set this
     * parameter for as long as possible to avoid generating multiple notifications for
     * the same file in a small time period.</p>  <p>
     * <code>SettlingTimeInSeconds</code> has no effect on the timing of the object
     * uploading to Amazon S3, only the timing of the notification.</p>  <p>The
     * following example sets <code>NotificationPolicy</code> on with
     * <code>SettlingTimeInSeconds</code> set to 60.</p> <p> <code>{\"Upload\":
     * {\"SettlingTimeInSeconds\": 60}}</code> </p> <p>The following example sets
     * <code>NotificationPolicy</code> off.</p> <p> <code>{}</code> </p>
     */
    inline bool NotificationPolicyHasBeenSet() const { return m_notificationPolicyHasBeenSet; }

    /**
     * <p>The notification policy of the file share. <code>SettlingTimeInSeconds</code>
     * controls the number of seconds to wait after the last point in time a client
     * wrote to a file before generating an <code>ObjectUploaded</code> notification.
     * Because clients can make many small writes to files, it's best to set this
     * parameter for as long as possible to avoid generating multiple notifications for
     * the same file in a small time period.</p>  <p>
     * <code>SettlingTimeInSeconds</code> has no effect on the timing of the object
     * uploading to Amazon S3, only the timing of the notification.</p>  <p>The
     * following example sets <code>NotificationPolicy</code> on with
     * <code>SettlingTimeInSeconds</code> set to 60.</p> <p> <code>{\"Upload\":
     * {\"SettlingTimeInSeconds\": 60}}</code> </p> <p>The following example sets
     * <code>NotificationPolicy</code> off.</p> <p> <code>{}</code> </p>
     */
    inline void SetNotificationPolicy(const Aws::String& value) { m_notificationPolicyHasBeenSet = true; m_notificationPolicy = value; }

    /**
     * <p>The notification policy of the file share. <code>SettlingTimeInSeconds</code>
     * controls the number of seconds to wait after the last point in time a client
     * wrote to a file before generating an <code>ObjectUploaded</code> notification.
     * Because clients can make many small writes to files, it's best to set this
     * parameter for as long as possible to avoid generating multiple notifications for
     * the same file in a small time period.</p>  <p>
     * <code>SettlingTimeInSeconds</code> has no effect on the timing of the object
     * uploading to Amazon S3, only the timing of the notification.</p>  <p>The
     * following example sets <code>NotificationPolicy</code> on with
     * <code>SettlingTimeInSeconds</code> set to 60.</p> <p> <code>{\"Upload\":
     * {\"SettlingTimeInSeconds\": 60}}</code> </p> <p>The following example sets
     * <code>NotificationPolicy</code> off.</p> <p> <code>{}</code> </p>
     */
    inline void SetNotificationPolicy(Aws::String&& value) { m_notificationPolicyHasBeenSet = true; m_notificationPolicy = std::move(value); }

    /**
     * <p>The notification policy of the file share. <code>SettlingTimeInSeconds</code>
     * controls the number of seconds to wait after the last point in time a client
     * wrote to a file before generating an <code>ObjectUploaded</code> notification.
     * Because clients can make many small writes to files, it's best to set this
     * parameter for as long as possible to avoid generating multiple notifications for
     * the same file in a small time period.</p>  <p>
     * <code>SettlingTimeInSeconds</code> has no effect on the timing of the object
     * uploading to Amazon S3, only the timing of the notification.</p>  <p>The
     * following example sets <code>NotificationPolicy</code> on with
     * <code>SettlingTimeInSeconds</code> set to 60.</p> <p> <code>{\"Upload\":
     * {\"SettlingTimeInSeconds\": 60}}</code> </p> <p>The following example sets
     * <code>NotificationPolicy</code> off.</p> <p> <code>{}</code> </p>
     */
    inline void SetNotificationPolicy(const char* value) { m_notificationPolicyHasBeenSet = true; m_notificationPolicy.assign(value); }

    /**
     * <p>The notification policy of the file share. <code>SettlingTimeInSeconds</code>
     * controls the number of seconds to wait after the last point in time a client
     * wrote to a file before generating an <code>ObjectUploaded</code> notification.
     * Because clients can make many small writes to files, it's best to set this
     * parameter for as long as possible to avoid generating multiple notifications for
     * the same file in a small time period.</p>  <p>
     * <code>SettlingTimeInSeconds</code> has no effect on the timing of the object
     * uploading to Amazon S3, only the timing of the notification.</p>  <p>The
     * following example sets <code>NotificationPolicy</code> on with
     * <code>SettlingTimeInSeconds</code> set to 60.</p> <p> <code>{\"Upload\":
     * {\"SettlingTimeInSeconds\": 60}}</code> </p> <p>The following example sets
     * <code>NotificationPolicy</code> off.</p> <p> <code>{}</code> </p>
     */
    inline CreateSMBFileShareRequest& WithNotificationPolicy(const Aws::String& value) { SetNotificationPolicy(value); return *this;}

    /**
     * <p>The notification policy of the file share. <code>SettlingTimeInSeconds</code>
     * controls the number of seconds to wait after the last point in time a client
     * wrote to a file before generating an <code>ObjectUploaded</code> notification.
     * Because clients can make many small writes to files, it's best to set this
     * parameter for as long as possible to avoid generating multiple notifications for
     * the same file in a small time period.</p>  <p>
     * <code>SettlingTimeInSeconds</code> has no effect on the timing of the object
     * uploading to Amazon S3, only the timing of the notification.</p>  <p>The
     * following example sets <code>NotificationPolicy</code> on with
     * <code>SettlingTimeInSeconds</code> set to 60.</p> <p> <code>{\"Upload\":
     * {\"SettlingTimeInSeconds\": 60}}</code> </p> <p>The following example sets
     * <code>NotificationPolicy</code> off.</p> <p> <code>{}</code> </p>
     */
    inline CreateSMBFileShareRequest& WithNotificationPolicy(Aws::String&& value) { SetNotificationPolicy(std::move(value)); return *this;}

    /**
     * <p>The notification policy of the file share. <code>SettlingTimeInSeconds</code>
     * controls the number of seconds to wait after the last point in time a client
     * wrote to a file before generating an <code>ObjectUploaded</code> notification.
     * Because clients can make many small writes to files, it's best to set this
     * parameter for as long as possible to avoid generating multiple notifications for
     * the same file in a small time period.</p>  <p>
     * <code>SettlingTimeInSeconds</code> has no effect on the timing of the object
     * uploading to Amazon S3, only the timing of the notification.</p>  <p>The
     * following example sets <code>NotificationPolicy</code> on with
     * <code>SettlingTimeInSeconds</code> set to 60.</p> <p> <code>{\"Upload\":
     * {\"SettlingTimeInSeconds\": 60}}</code> </p> <p>The following example sets
     * <code>NotificationPolicy</code> off.</p> <p> <code>{}</code> </p>
     */
    inline CreateSMBFileShareRequest& WithNotificationPolicy(const char* value) { SetNotificationPolicy(value); return *this;}


    /**
     * <p>Specifies the DNS name for the VPC endpoint that the SMB file share uses to
     * connect to Amazon S3.</p>  <p>This parameter is required for SMB file
     * shares that connect to Amazon S3 through a VPC endpoint, a VPC access point, or
     * an access point alias that points to a VPC access point.</p> 
     */
    inline const Aws::String& GetVPCEndpointDNSName() const{ return m_vPCEndpointDNSName; }

    /**
     * <p>Specifies the DNS name for the VPC endpoint that the SMB file share uses to
     * connect to Amazon S3.</p>  <p>This parameter is required for SMB file
     * shares that connect to Amazon S3 through a VPC endpoint, a VPC access point, or
     * an access point alias that points to a VPC access point.</p> 
     */
    inline bool VPCEndpointDNSNameHasBeenSet() const { return m_vPCEndpointDNSNameHasBeenSet; }

    /**
     * <p>Specifies the DNS name for the VPC endpoint that the SMB file share uses to
     * connect to Amazon S3.</p>  <p>This parameter is required for SMB file
     * shares that connect to Amazon S3 through a VPC endpoint, a VPC access point, or
     * an access point alias that points to a VPC access point.</p> 
     */
    inline void SetVPCEndpointDNSName(const Aws::String& value) { m_vPCEndpointDNSNameHasBeenSet = true; m_vPCEndpointDNSName = value; }

    /**
     * <p>Specifies the DNS name for the VPC endpoint that the SMB file share uses to
     * connect to Amazon S3.</p>  <p>This parameter is required for SMB file
     * shares that connect to Amazon S3 through a VPC endpoint, a VPC access point, or
     * an access point alias that points to a VPC access point.</p> 
     */
    inline void SetVPCEndpointDNSName(Aws::String&& value) { m_vPCEndpointDNSNameHasBeenSet = true; m_vPCEndpointDNSName = std::move(value); }

    /**
     * <p>Specifies the DNS name for the VPC endpoint that the SMB file share uses to
     * connect to Amazon S3.</p>  <p>This parameter is required for SMB file
     * shares that connect to Amazon S3 through a VPC endpoint, a VPC access point, or
     * an access point alias that points to a VPC access point.</p> 
     */
    inline void SetVPCEndpointDNSName(const char* value) { m_vPCEndpointDNSNameHasBeenSet = true; m_vPCEndpointDNSName.assign(value); }

    /**
     * <p>Specifies the DNS name for the VPC endpoint that the SMB file share uses to
     * connect to Amazon S3.</p>  <p>This parameter is required for SMB file
     * shares that connect to Amazon S3 through a VPC endpoint, a VPC access point, or
     * an access point alias that points to a VPC access point.</p> 
     */
    inline CreateSMBFileShareRequest& WithVPCEndpointDNSName(const Aws::String& value) { SetVPCEndpointDNSName(value); return *this;}

    /**
     * <p>Specifies the DNS name for the VPC endpoint that the SMB file share uses to
     * connect to Amazon S3.</p>  <p>This parameter is required for SMB file
     * shares that connect to Amazon S3 through a VPC endpoint, a VPC access point, or
     * an access point alias that points to a VPC access point.</p> 
     */
    inline CreateSMBFileShareRequest& WithVPCEndpointDNSName(Aws::String&& value) { SetVPCEndpointDNSName(std::move(value)); return *this;}

    /**
     * <p>Specifies the DNS name for the VPC endpoint that the SMB file share uses to
     * connect to Amazon S3.</p>  <p>This parameter is required for SMB file
     * shares that connect to Amazon S3 through a VPC endpoint, a VPC access point, or
     * an access point alias that points to a VPC access point.</p> 
     */
    inline CreateSMBFileShareRequest& WithVPCEndpointDNSName(const char* value) { SetVPCEndpointDNSName(value); return *this;}


    /**
     * <p>Specifies the Region of the S3 bucket where the SMB file share stores
     * files.</p>  <p>This parameter is required for SMB file shares that connect
     * to Amazon S3 through a VPC endpoint, a VPC access point, or an access point
     * alias that points to a VPC access point.</p> 
     */
    inline const Aws::String& GetBucketRegion() const{ return m_bucketRegion; }

    /**
     * <p>Specifies the Region of the S3 bucket where the SMB file share stores
     * files.</p>  <p>This parameter is required for SMB file shares that connect
     * to Amazon S3 through a VPC endpoint, a VPC access point, or an access point
     * alias that points to a VPC access point.</p> 
     */
    inline bool BucketRegionHasBeenSet() const { return m_bucketRegionHasBeenSet; }

    /**
     * <p>Specifies the Region of the S3 bucket where the SMB file share stores
     * files.</p>  <p>This parameter is required for SMB file shares that connect
     * to Amazon S3 through a VPC endpoint, a VPC access point, or an access point
     * alias that points to a VPC access point.</p> 
     */
    inline void SetBucketRegion(const Aws::String& value) { m_bucketRegionHasBeenSet = true; m_bucketRegion = value; }

    /**
     * <p>Specifies the Region of the S3 bucket where the SMB file share stores
     * files.</p>  <p>This parameter is required for SMB file shares that connect
     * to Amazon S3 through a VPC endpoint, a VPC access point, or an access point
     * alias that points to a VPC access point.</p> 
     */
    inline void SetBucketRegion(Aws::String&& value) { m_bucketRegionHasBeenSet = true; m_bucketRegion = std::move(value); }

    /**
     * <p>Specifies the Region of the S3 bucket where the SMB file share stores
     * files.</p>  <p>This parameter is required for SMB file shares that connect
     * to Amazon S3 through a VPC endpoint, a VPC access point, or an access point
     * alias that points to a VPC access point.</p> 
     */
    inline void SetBucketRegion(const char* value) { m_bucketRegionHasBeenSet = true; m_bucketRegion.assign(value); }

    /**
     * <p>Specifies the Region of the S3 bucket where the SMB file share stores
     * files.</p>  <p>This parameter is required for SMB file shares that connect
     * to Amazon S3 through a VPC endpoint, a VPC access point, or an access point
     * alias that points to a VPC access point.</p> 
     */
    inline CreateSMBFileShareRequest& WithBucketRegion(const Aws::String& value) { SetBucketRegion(value); return *this;}

    /**
     * <p>Specifies the Region of the S3 bucket where the SMB file share stores
     * files.</p>  <p>This parameter is required for SMB file shares that connect
     * to Amazon S3 through a VPC endpoint, a VPC access point, or an access point
     * alias that points to a VPC access point.</p> 
     */
    inline CreateSMBFileShareRequest& WithBucketRegion(Aws::String&& value) { SetBucketRegion(std::move(value)); return *this;}

    /**
     * <p>Specifies the Region of the S3 bucket where the SMB file share stores
     * files.</p>  <p>This parameter is required for SMB file shares that connect
     * to Amazon S3 through a VPC endpoint, a VPC access point, or an access point
     * alias that points to a VPC access point.</p> 
     */
    inline CreateSMBFileShareRequest& WithBucketRegion(const char* value) { SetBucketRegion(value); return *this;}


    /**
     * <p>Specifies whether opportunistic locking is enabled for the SMB file
     * share.</p>  <p>Enabling opportunistic locking on case-sensitive shares is
     * not recommended for workloads that involve access to files with the same name in
     * different case.</p>  <p>Valid Values: <code>true</code> |
     * <code>false</code> </p>
     */
    inline bool GetOplocksEnabled() const{ return m_oplocksEnabled; }

    /**
     * <p>Specifies whether opportunistic locking is enabled for the SMB file
     * share.</p>  <p>Enabling opportunistic locking on case-sensitive shares is
     * not recommended for workloads that involve access to files with the same name in
     * different case.</p>  <p>Valid Values: <code>true</code> |
     * <code>false</code> </p>
     */
    inline bool OplocksEnabledHasBeenSet() const { return m_oplocksEnabledHasBeenSet; }

    /**
     * <p>Specifies whether opportunistic locking is enabled for the SMB file
     * share.</p>  <p>Enabling opportunistic locking on case-sensitive shares is
     * not recommended for workloads that involve access to files with the same name in
     * different case.</p>  <p>Valid Values: <code>true</code> |
     * <code>false</code> </p>
     */
    inline void SetOplocksEnabled(bool value) { m_oplocksEnabledHasBeenSet = true; m_oplocksEnabled = value; }

    /**
     * <p>Specifies whether opportunistic locking is enabled for the SMB file
     * share.</p>  <p>Enabling opportunistic locking on case-sensitive shares is
     * not recommended for workloads that involve access to files with the same name in
     * different case.</p>  <p>Valid Values: <code>true</code> |
     * <code>false</code> </p>
     */
    inline CreateSMBFileShareRequest& WithOplocksEnabled(bool value) { SetOplocksEnabled(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    bool m_kMSEncrypted;
    bool m_kMSEncryptedHasBeenSet = false;

    Aws::String m_kMSKey;
    bool m_kMSKeyHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_locationARN;
    bool m_locationARNHasBeenSet = false;

    Aws::String m_defaultStorageClass;
    bool m_defaultStorageClassHasBeenSet = false;

    ObjectACL m_objectACL;
    bool m_objectACLHasBeenSet = false;

    bool m_readOnly;
    bool m_readOnlyHasBeenSet = false;

    bool m_guessMIMETypeEnabled;
    bool m_guessMIMETypeEnabledHasBeenSet = false;

    bool m_requesterPays;
    bool m_requesterPaysHasBeenSet = false;

    bool m_sMBACLEnabled;
    bool m_sMBACLEnabledHasBeenSet = false;

    bool m_accessBasedEnumeration;
    bool m_accessBasedEnumerationHasBeenSet = false;

    Aws::Vector<Aws::String> m_adminUserList;
    bool m_adminUserListHasBeenSet = false;

    Aws::Vector<Aws::String> m_validUserList;
    bool m_validUserListHasBeenSet = false;

    Aws::Vector<Aws::String> m_invalidUserList;
    bool m_invalidUserListHasBeenSet = false;

    Aws::String m_auditDestinationARN;
    bool m_auditDestinationARNHasBeenSet = false;

    Aws::String m_authentication;
    bool m_authenticationHasBeenSet = false;

    CaseSensitivity m_caseSensitivity;
    bool m_caseSensitivityHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_fileShareName;
    bool m_fileShareNameHasBeenSet = false;

    CacheAttributes m_cacheAttributes;
    bool m_cacheAttributesHasBeenSet = false;

    Aws::String m_notificationPolicy;
    bool m_notificationPolicyHasBeenSet = false;

    Aws::String m_vPCEndpointDNSName;
    bool m_vPCEndpointDNSNameHasBeenSet = false;

    Aws::String m_bucketRegion;
    bool m_bucketRegionHasBeenSet = false;

    bool m_oplocksEnabled;
    bool m_oplocksEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
