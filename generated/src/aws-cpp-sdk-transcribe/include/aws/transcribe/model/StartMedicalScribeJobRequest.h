/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/Media.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/transcribe/model/MedicalScribeSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/MedicalScribeChannelDefinition.h>
#include <aws/transcribe/model/Tag.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class StartMedicalScribeJobRequest : public TranscribeServiceRequest
  {
  public:
    AWS_TRANSCRIBESERVICE_API StartMedicalScribeJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartMedicalScribeJob"; }

    AWS_TRANSCRIBESERVICE_API Aws::String SerializePayload() const override;

    AWS_TRANSCRIBESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique name, chosen by you, for your Medical Scribe job.</p> <p>This name
     * is case sensitive, cannot contain spaces, and must be unique within an Amazon
     * Web Services account. If you try to create a new job with the same name as an
     * existing job, you get a <code>ConflictException</code> error.</p>
     */
    inline const Aws::String& GetMedicalScribeJobName() const{ return m_medicalScribeJobName; }

    /**
     * <p>A unique name, chosen by you, for your Medical Scribe job.</p> <p>This name
     * is case sensitive, cannot contain spaces, and must be unique within an Amazon
     * Web Services account. If you try to create a new job with the same name as an
     * existing job, you get a <code>ConflictException</code> error.</p>
     */
    inline bool MedicalScribeJobNameHasBeenSet() const { return m_medicalScribeJobNameHasBeenSet; }

    /**
     * <p>A unique name, chosen by you, for your Medical Scribe job.</p> <p>This name
     * is case sensitive, cannot contain spaces, and must be unique within an Amazon
     * Web Services account. If you try to create a new job with the same name as an
     * existing job, you get a <code>ConflictException</code> error.</p>
     */
    inline void SetMedicalScribeJobName(const Aws::String& value) { m_medicalScribeJobNameHasBeenSet = true; m_medicalScribeJobName = value; }

    /**
     * <p>A unique name, chosen by you, for your Medical Scribe job.</p> <p>This name
     * is case sensitive, cannot contain spaces, and must be unique within an Amazon
     * Web Services account. If you try to create a new job with the same name as an
     * existing job, you get a <code>ConflictException</code> error.</p>
     */
    inline void SetMedicalScribeJobName(Aws::String&& value) { m_medicalScribeJobNameHasBeenSet = true; m_medicalScribeJobName = std::move(value); }

    /**
     * <p>A unique name, chosen by you, for your Medical Scribe job.</p> <p>This name
     * is case sensitive, cannot contain spaces, and must be unique within an Amazon
     * Web Services account. If you try to create a new job with the same name as an
     * existing job, you get a <code>ConflictException</code> error.</p>
     */
    inline void SetMedicalScribeJobName(const char* value) { m_medicalScribeJobNameHasBeenSet = true; m_medicalScribeJobName.assign(value); }

    /**
     * <p>A unique name, chosen by you, for your Medical Scribe job.</p> <p>This name
     * is case sensitive, cannot contain spaces, and must be unique within an Amazon
     * Web Services account. If you try to create a new job with the same name as an
     * existing job, you get a <code>ConflictException</code> error.</p>
     */
    inline StartMedicalScribeJobRequest& WithMedicalScribeJobName(const Aws::String& value) { SetMedicalScribeJobName(value); return *this;}

    /**
     * <p>A unique name, chosen by you, for your Medical Scribe job.</p> <p>This name
     * is case sensitive, cannot contain spaces, and must be unique within an Amazon
     * Web Services account. If you try to create a new job with the same name as an
     * existing job, you get a <code>ConflictException</code> error.</p>
     */
    inline StartMedicalScribeJobRequest& WithMedicalScribeJobName(Aws::String&& value) { SetMedicalScribeJobName(std::move(value)); return *this;}

    /**
     * <p>A unique name, chosen by you, for your Medical Scribe job.</p> <p>This name
     * is case sensitive, cannot contain spaces, and must be unique within an Amazon
     * Web Services account. If you try to create a new job with the same name as an
     * existing job, you get a <code>ConflictException</code> error.</p>
     */
    inline StartMedicalScribeJobRequest& WithMedicalScribeJobName(const char* value) { SetMedicalScribeJobName(value); return *this;}


    
    inline const Media& GetMedia() const{ return m_media; }

    
    inline bool MediaHasBeenSet() const { return m_mediaHasBeenSet; }

    
    inline void SetMedia(const Media& value) { m_mediaHasBeenSet = true; m_media = value; }

    
    inline void SetMedia(Media&& value) { m_mediaHasBeenSet = true; m_media = std::move(value); }

    
    inline StartMedicalScribeJobRequest& WithMedia(const Media& value) { SetMedia(value); return *this;}

    
    inline StartMedicalScribeJobRequest& WithMedia(Media&& value) { SetMedia(std::move(value)); return *this;}


    /**
     * <p>The name of the Amazon S3 bucket where you want your Medical Scribe output
     * stored. Do not include the <code>S3://</code> prefix of the specified
     * bucket.</p> <p>Note that the role specified in the
     * <code>DataAccessRoleArn</code> request parameter must have permission to use the
     * specified location. You can change Amazon S3 permissions using the <a
     * href="https://console.aws.amazon.com/s3">Amazon Web Services Management
     * Console</a>. See also <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/security_iam_id-based-policy-examples.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p>
     */
    inline const Aws::String& GetOutputBucketName() const{ return m_outputBucketName; }

    /**
     * <p>The name of the Amazon S3 bucket where you want your Medical Scribe output
     * stored. Do not include the <code>S3://</code> prefix of the specified
     * bucket.</p> <p>Note that the role specified in the
     * <code>DataAccessRoleArn</code> request parameter must have permission to use the
     * specified location. You can change Amazon S3 permissions using the <a
     * href="https://console.aws.amazon.com/s3">Amazon Web Services Management
     * Console</a>. See also <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/security_iam_id-based-policy-examples.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p>
     */
    inline bool OutputBucketNameHasBeenSet() const { return m_outputBucketNameHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket where you want your Medical Scribe output
     * stored. Do not include the <code>S3://</code> prefix of the specified
     * bucket.</p> <p>Note that the role specified in the
     * <code>DataAccessRoleArn</code> request parameter must have permission to use the
     * specified location. You can change Amazon S3 permissions using the <a
     * href="https://console.aws.amazon.com/s3">Amazon Web Services Management
     * Console</a>. See also <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/security_iam_id-based-policy-examples.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p>
     */
    inline void SetOutputBucketName(const Aws::String& value) { m_outputBucketNameHasBeenSet = true; m_outputBucketName = value; }

    /**
     * <p>The name of the Amazon S3 bucket where you want your Medical Scribe output
     * stored. Do not include the <code>S3://</code> prefix of the specified
     * bucket.</p> <p>Note that the role specified in the
     * <code>DataAccessRoleArn</code> request parameter must have permission to use the
     * specified location. You can change Amazon S3 permissions using the <a
     * href="https://console.aws.amazon.com/s3">Amazon Web Services Management
     * Console</a>. See also <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/security_iam_id-based-policy-examples.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p>
     */
    inline void SetOutputBucketName(Aws::String&& value) { m_outputBucketNameHasBeenSet = true; m_outputBucketName = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket where you want your Medical Scribe output
     * stored. Do not include the <code>S3://</code> prefix of the specified
     * bucket.</p> <p>Note that the role specified in the
     * <code>DataAccessRoleArn</code> request parameter must have permission to use the
     * specified location. You can change Amazon S3 permissions using the <a
     * href="https://console.aws.amazon.com/s3">Amazon Web Services Management
     * Console</a>. See also <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/security_iam_id-based-policy-examples.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p>
     */
    inline void SetOutputBucketName(const char* value) { m_outputBucketNameHasBeenSet = true; m_outputBucketName.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket where you want your Medical Scribe output
     * stored. Do not include the <code>S3://</code> prefix of the specified
     * bucket.</p> <p>Note that the role specified in the
     * <code>DataAccessRoleArn</code> request parameter must have permission to use the
     * specified location. You can change Amazon S3 permissions using the <a
     * href="https://console.aws.amazon.com/s3">Amazon Web Services Management
     * Console</a>. See also <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/security_iam_id-based-policy-examples.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p>
     */
    inline StartMedicalScribeJobRequest& WithOutputBucketName(const Aws::String& value) { SetOutputBucketName(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket where you want your Medical Scribe output
     * stored. Do not include the <code>S3://</code> prefix of the specified
     * bucket.</p> <p>Note that the role specified in the
     * <code>DataAccessRoleArn</code> request parameter must have permission to use the
     * specified location. You can change Amazon S3 permissions using the <a
     * href="https://console.aws.amazon.com/s3">Amazon Web Services Management
     * Console</a>. See also <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/security_iam_id-based-policy-examples.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p>
     */
    inline StartMedicalScribeJobRequest& WithOutputBucketName(Aws::String&& value) { SetOutputBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket where you want your Medical Scribe output
     * stored. Do not include the <code>S3://</code> prefix of the specified
     * bucket.</p> <p>Note that the role specified in the
     * <code>DataAccessRoleArn</code> request parameter must have permission to use the
     * specified location. You can change Amazon S3 permissions using the <a
     * href="https://console.aws.amazon.com/s3">Amazon Web Services Management
     * Console</a>. See also <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/security_iam_id-based-policy-examples.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p>
     */
    inline StartMedicalScribeJobRequest& WithOutputBucketName(const char* value) { SetOutputBucketName(value); return *this;}


    /**
     * <p>The KMS key you want to use to encrypt your Medical Scribe output.</p> <p>If
     * using a key located in the <b>current</b> Amazon Web Services account, you can
     * specify your KMS key in one of four ways:</p> <ol> <li> <p>Use the KMS key ID
     * itself. For example, <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use an alias for the KMS key ID. For example,
     * <code>alias/ExampleAlias</code>.</p> </li> <li> <p>Use the Amazon Resource Name
     * (ARN) for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If you do not specify an encryption key, your output is encrypted with the
     * default Amazon S3 key (SSE-S3).</p> <p>Note that the role specified in the
     * <code>DataAccessRoleArn</code> request parameter must have permission to use the
     * specified KMS key.</p>
     */
    inline const Aws::String& GetOutputEncryptionKMSKeyId() const{ return m_outputEncryptionKMSKeyId; }

    /**
     * <p>The KMS key you want to use to encrypt your Medical Scribe output.</p> <p>If
     * using a key located in the <b>current</b> Amazon Web Services account, you can
     * specify your KMS key in one of four ways:</p> <ol> <li> <p>Use the KMS key ID
     * itself. For example, <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use an alias for the KMS key ID. For example,
     * <code>alias/ExampleAlias</code>.</p> </li> <li> <p>Use the Amazon Resource Name
     * (ARN) for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If you do not specify an encryption key, your output is encrypted with the
     * default Amazon S3 key (SSE-S3).</p> <p>Note that the role specified in the
     * <code>DataAccessRoleArn</code> request parameter must have permission to use the
     * specified KMS key.</p>
     */
    inline bool OutputEncryptionKMSKeyIdHasBeenSet() const { return m_outputEncryptionKMSKeyIdHasBeenSet; }

    /**
     * <p>The KMS key you want to use to encrypt your Medical Scribe output.</p> <p>If
     * using a key located in the <b>current</b> Amazon Web Services account, you can
     * specify your KMS key in one of four ways:</p> <ol> <li> <p>Use the KMS key ID
     * itself. For example, <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use an alias for the KMS key ID. For example,
     * <code>alias/ExampleAlias</code>.</p> </li> <li> <p>Use the Amazon Resource Name
     * (ARN) for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If you do not specify an encryption key, your output is encrypted with the
     * default Amazon S3 key (SSE-S3).</p> <p>Note that the role specified in the
     * <code>DataAccessRoleArn</code> request parameter must have permission to use the
     * specified KMS key.</p>
     */
    inline void SetOutputEncryptionKMSKeyId(const Aws::String& value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId = value; }

    /**
     * <p>The KMS key you want to use to encrypt your Medical Scribe output.</p> <p>If
     * using a key located in the <b>current</b> Amazon Web Services account, you can
     * specify your KMS key in one of four ways:</p> <ol> <li> <p>Use the KMS key ID
     * itself. For example, <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use an alias for the KMS key ID. For example,
     * <code>alias/ExampleAlias</code>.</p> </li> <li> <p>Use the Amazon Resource Name
     * (ARN) for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If you do not specify an encryption key, your output is encrypted with the
     * default Amazon S3 key (SSE-S3).</p> <p>Note that the role specified in the
     * <code>DataAccessRoleArn</code> request parameter must have permission to use the
     * specified KMS key.</p>
     */
    inline void SetOutputEncryptionKMSKeyId(Aws::String&& value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId = std::move(value); }

    /**
     * <p>The KMS key you want to use to encrypt your Medical Scribe output.</p> <p>If
     * using a key located in the <b>current</b> Amazon Web Services account, you can
     * specify your KMS key in one of four ways:</p> <ol> <li> <p>Use the KMS key ID
     * itself. For example, <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use an alias for the KMS key ID. For example,
     * <code>alias/ExampleAlias</code>.</p> </li> <li> <p>Use the Amazon Resource Name
     * (ARN) for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If you do not specify an encryption key, your output is encrypted with the
     * default Amazon S3 key (SSE-S3).</p> <p>Note that the role specified in the
     * <code>DataAccessRoleArn</code> request parameter must have permission to use the
     * specified KMS key.</p>
     */
    inline void SetOutputEncryptionKMSKeyId(const char* value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId.assign(value); }

    /**
     * <p>The KMS key you want to use to encrypt your Medical Scribe output.</p> <p>If
     * using a key located in the <b>current</b> Amazon Web Services account, you can
     * specify your KMS key in one of four ways:</p> <ol> <li> <p>Use the KMS key ID
     * itself. For example, <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use an alias for the KMS key ID. For example,
     * <code>alias/ExampleAlias</code>.</p> </li> <li> <p>Use the Amazon Resource Name
     * (ARN) for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If you do not specify an encryption key, your output is encrypted with the
     * default Amazon S3 key (SSE-S3).</p> <p>Note that the role specified in the
     * <code>DataAccessRoleArn</code> request parameter must have permission to use the
     * specified KMS key.</p>
     */
    inline StartMedicalScribeJobRequest& WithOutputEncryptionKMSKeyId(const Aws::String& value) { SetOutputEncryptionKMSKeyId(value); return *this;}

    /**
     * <p>The KMS key you want to use to encrypt your Medical Scribe output.</p> <p>If
     * using a key located in the <b>current</b> Amazon Web Services account, you can
     * specify your KMS key in one of four ways:</p> <ol> <li> <p>Use the KMS key ID
     * itself. For example, <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use an alias for the KMS key ID. For example,
     * <code>alias/ExampleAlias</code>.</p> </li> <li> <p>Use the Amazon Resource Name
     * (ARN) for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If you do not specify an encryption key, your output is encrypted with the
     * default Amazon S3 key (SSE-S3).</p> <p>Note that the role specified in the
     * <code>DataAccessRoleArn</code> request parameter must have permission to use the
     * specified KMS key.</p>
     */
    inline StartMedicalScribeJobRequest& WithOutputEncryptionKMSKeyId(Aws::String&& value) { SetOutputEncryptionKMSKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS key you want to use to encrypt your Medical Scribe output.</p> <p>If
     * using a key located in the <b>current</b> Amazon Web Services account, you can
     * specify your KMS key in one of four ways:</p> <ol> <li> <p>Use the KMS key ID
     * itself. For example, <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use an alias for the KMS key ID. For example,
     * <code>alias/ExampleAlias</code>.</p> </li> <li> <p>Use the Amazon Resource Name
     * (ARN) for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If you do not specify an encryption key, your output is encrypted with the
     * default Amazon S3 key (SSE-S3).</p> <p>Note that the role specified in the
     * <code>DataAccessRoleArn</code> request parameter must have permission to use the
     * specified KMS key.</p>
     */
    inline StartMedicalScribeJobRequest& WithOutputEncryptionKMSKeyId(const char* value) { SetOutputEncryptionKMSKeyId(value); return *this;}


    /**
     * <p>A map of plain text, non-secret key:value pairs, known as encryption context
     * pairs, that provide an added layer of security for your data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMS
     * encryption context</a> and <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetKMSEncryptionContext() const{ return m_kMSEncryptionContext; }

    /**
     * <p>A map of plain text, non-secret key:value pairs, known as encryption context
     * pairs, that provide an added layer of security for your data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMS
     * encryption context</a> and <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a>.</p>
     */
    inline bool KMSEncryptionContextHasBeenSet() const { return m_kMSEncryptionContextHasBeenSet; }

    /**
     * <p>A map of plain text, non-secret key:value pairs, known as encryption context
     * pairs, that provide an added layer of security for your data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMS
     * encryption context</a> and <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a>.</p>
     */
    inline void SetKMSEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext = value; }

    /**
     * <p>A map of plain text, non-secret key:value pairs, known as encryption context
     * pairs, that provide an added layer of security for your data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMS
     * encryption context</a> and <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a>.</p>
     */
    inline void SetKMSEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext = std::move(value); }

    /**
     * <p>A map of plain text, non-secret key:value pairs, known as encryption context
     * pairs, that provide an added layer of security for your data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMS
     * encryption context</a> and <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a>.</p>
     */
    inline StartMedicalScribeJobRequest& WithKMSEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetKMSEncryptionContext(value); return *this;}

    /**
     * <p>A map of plain text, non-secret key:value pairs, known as encryption context
     * pairs, that provide an added layer of security for your data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMS
     * encryption context</a> and <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a>.</p>
     */
    inline StartMedicalScribeJobRequest& WithKMSEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetKMSEncryptionContext(std::move(value)); return *this;}

    /**
     * <p>A map of plain text, non-secret key:value pairs, known as encryption context
     * pairs, that provide an added layer of security for your data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMS
     * encryption context</a> and <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a>.</p>
     */
    inline StartMedicalScribeJobRequest& AddKMSEncryptionContext(const Aws::String& key, const Aws::String& value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext.emplace(key, value); return *this; }

    /**
     * <p>A map of plain text, non-secret key:value pairs, known as encryption context
     * pairs, that provide an added layer of security for your data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMS
     * encryption context</a> and <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a>.</p>
     */
    inline StartMedicalScribeJobRequest& AddKMSEncryptionContext(Aws::String&& key, const Aws::String& value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of plain text, non-secret key:value pairs, known as encryption context
     * pairs, that provide an added layer of security for your data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMS
     * encryption context</a> and <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a>.</p>
     */
    inline StartMedicalScribeJobRequest& AddKMSEncryptionContext(const Aws::String& key, Aws::String&& value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of plain text, non-secret key:value pairs, known as encryption context
     * pairs, that provide an added layer of security for your data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMS
     * encryption context</a> and <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a>.</p>
     */
    inline StartMedicalScribeJobRequest& AddKMSEncryptionContext(Aws::String&& key, Aws::String&& value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of plain text, non-secret key:value pairs, known as encryption context
     * pairs, that provide an added layer of security for your data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMS
     * encryption context</a> and <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a>.</p>
     */
    inline StartMedicalScribeJobRequest& AddKMSEncryptionContext(const char* key, Aws::String&& value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of plain text, non-secret key:value pairs, known as encryption context
     * pairs, that provide an added layer of security for your data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMS
     * encryption context</a> and <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a>.</p>
     */
    inline StartMedicalScribeJobRequest& AddKMSEncryptionContext(Aws::String&& key, const char* value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of plain text, non-secret key:value pairs, known as encryption context
     * pairs, that provide an added layer of security for your data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMS
     * encryption context</a> and <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a>.</p>
     */
    inline StartMedicalScribeJobRequest& AddKMSEncryptionContext(const char* key, const char* value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext.emplace(key, value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files, write to the output bucket,
     * and use your KMS key if supplied. If the role that you specify doesn’t have the
     * appropriate permissions your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files, write to the output bucket,
     * and use your KMS key if supplied. If the role that you specify doesn’t have the
     * appropriate permissions your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files, write to the output bucket,
     * and use your KMS key if supplied. If the role that you specify doesn’t have the
     * appropriate permissions your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files, write to the output bucket,
     * and use your KMS key if supplied. If the role that you specify doesn’t have the
     * appropriate permissions your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files, write to the output bucket,
     * and use your KMS key if supplied. If the role that you specify doesn’t have the
     * appropriate permissions your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files, write to the output bucket,
     * and use your KMS key if supplied. If the role that you specify doesn’t have the
     * appropriate permissions your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline StartMedicalScribeJobRequest& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files, write to the output bucket,
     * and use your KMS key if supplied. If the role that you specify doesn’t have the
     * appropriate permissions your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline StartMedicalScribeJobRequest& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files, write to the output bucket,
     * and use your KMS key if supplied. If the role that you specify doesn’t have the
     * appropriate permissions your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline StartMedicalScribeJobRequest& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}


    /**
     * <p>Makes it possible to control how your Medical Scribe job is processed using a
     * <code>MedicalScribeSettings</code> object. Specify
     * <code>ChannelIdentification</code> if <code>ChannelDefinitions</code> are set.
     * Enabled <code>ShowSpeakerLabels</code> if <code>ChannelIdentification</code> and
     * <code>ChannelDefinitions</code> are not set. One and only one of
     * <code>ChannelIdentification</code> and <code>ShowSpeakerLabels</code> must be
     * set. If <code>ShowSpeakerLabels</code> is set, <code>MaxSpeakerLabels</code>
     * must also be set. Use <code>Settings</code> to specify a vocabulary or
     * vocabulary filter or both using <code>VocabularyName</code>,
     * <code>VocabularyFilterName</code>. <code>VocabularyFilterMethod</code> must be
     * specified if <code>VocabularyFilterName</code> is set. </p>
     */
    inline const MedicalScribeSettings& GetSettings() const{ return m_settings; }

    /**
     * <p>Makes it possible to control how your Medical Scribe job is processed using a
     * <code>MedicalScribeSettings</code> object. Specify
     * <code>ChannelIdentification</code> if <code>ChannelDefinitions</code> are set.
     * Enabled <code>ShowSpeakerLabels</code> if <code>ChannelIdentification</code> and
     * <code>ChannelDefinitions</code> are not set. One and only one of
     * <code>ChannelIdentification</code> and <code>ShowSpeakerLabels</code> must be
     * set. If <code>ShowSpeakerLabels</code> is set, <code>MaxSpeakerLabels</code>
     * must also be set. Use <code>Settings</code> to specify a vocabulary or
     * vocabulary filter or both using <code>VocabularyName</code>,
     * <code>VocabularyFilterName</code>. <code>VocabularyFilterMethod</code> must be
     * specified if <code>VocabularyFilterName</code> is set. </p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>Makes it possible to control how your Medical Scribe job is processed using a
     * <code>MedicalScribeSettings</code> object. Specify
     * <code>ChannelIdentification</code> if <code>ChannelDefinitions</code> are set.
     * Enabled <code>ShowSpeakerLabels</code> if <code>ChannelIdentification</code> and
     * <code>ChannelDefinitions</code> are not set. One and only one of
     * <code>ChannelIdentification</code> and <code>ShowSpeakerLabels</code> must be
     * set. If <code>ShowSpeakerLabels</code> is set, <code>MaxSpeakerLabels</code>
     * must also be set. Use <code>Settings</code> to specify a vocabulary or
     * vocabulary filter or both using <code>VocabularyName</code>,
     * <code>VocabularyFilterName</code>. <code>VocabularyFilterMethod</code> must be
     * specified if <code>VocabularyFilterName</code> is set. </p>
     */
    inline void SetSettings(const MedicalScribeSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>Makes it possible to control how your Medical Scribe job is processed using a
     * <code>MedicalScribeSettings</code> object. Specify
     * <code>ChannelIdentification</code> if <code>ChannelDefinitions</code> are set.
     * Enabled <code>ShowSpeakerLabels</code> if <code>ChannelIdentification</code> and
     * <code>ChannelDefinitions</code> are not set. One and only one of
     * <code>ChannelIdentification</code> and <code>ShowSpeakerLabels</code> must be
     * set. If <code>ShowSpeakerLabels</code> is set, <code>MaxSpeakerLabels</code>
     * must also be set. Use <code>Settings</code> to specify a vocabulary or
     * vocabulary filter or both using <code>VocabularyName</code>,
     * <code>VocabularyFilterName</code>. <code>VocabularyFilterMethod</code> must be
     * specified if <code>VocabularyFilterName</code> is set. </p>
     */
    inline void SetSettings(MedicalScribeSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>Makes it possible to control how your Medical Scribe job is processed using a
     * <code>MedicalScribeSettings</code> object. Specify
     * <code>ChannelIdentification</code> if <code>ChannelDefinitions</code> are set.
     * Enabled <code>ShowSpeakerLabels</code> if <code>ChannelIdentification</code> and
     * <code>ChannelDefinitions</code> are not set. One and only one of
     * <code>ChannelIdentification</code> and <code>ShowSpeakerLabels</code> must be
     * set. If <code>ShowSpeakerLabels</code> is set, <code>MaxSpeakerLabels</code>
     * must also be set. Use <code>Settings</code> to specify a vocabulary or
     * vocabulary filter or both using <code>VocabularyName</code>,
     * <code>VocabularyFilterName</code>. <code>VocabularyFilterMethod</code> must be
     * specified if <code>VocabularyFilterName</code> is set. </p>
     */
    inline StartMedicalScribeJobRequest& WithSettings(const MedicalScribeSettings& value) { SetSettings(value); return *this;}

    /**
     * <p>Makes it possible to control how your Medical Scribe job is processed using a
     * <code>MedicalScribeSettings</code> object. Specify
     * <code>ChannelIdentification</code> if <code>ChannelDefinitions</code> are set.
     * Enabled <code>ShowSpeakerLabels</code> if <code>ChannelIdentification</code> and
     * <code>ChannelDefinitions</code> are not set. One and only one of
     * <code>ChannelIdentification</code> and <code>ShowSpeakerLabels</code> must be
     * set. If <code>ShowSpeakerLabels</code> is set, <code>MaxSpeakerLabels</code>
     * must also be set. Use <code>Settings</code> to specify a vocabulary or
     * vocabulary filter or both using <code>VocabularyName</code>,
     * <code>VocabularyFilterName</code>. <code>VocabularyFilterMethod</code> must be
     * specified if <code>VocabularyFilterName</code> is set. </p>
     */
    inline StartMedicalScribeJobRequest& WithSettings(MedicalScribeSettings&& value) { SetSettings(std::move(value)); return *this;}


    /**
     * <p>Makes it possible to specify which speaker is on which channel. For example,
     * if the clinician is the first participant to speak, you would set
     * <code>ChannelId</code> of the first <code>ChannelDefinition</code> in the list
     * to <code>0</code> (to indicate the first channel) and
     * <code>ParticipantRole</code> to <code>CLINICIAN</code> (to indicate that it's
     * the clinician speaking). Then you would set the <code>ChannelId</code> of the
     * second <code>ChannelDefinition</code> in the list to <code>1</code> (to indicate
     * the second channel) and <code>ParticipantRole</code> to <code>PATIENT</code> (to
     * indicate that it's the patient speaking). </p>
     */
    inline const Aws::Vector<MedicalScribeChannelDefinition>& GetChannelDefinitions() const{ return m_channelDefinitions; }

    /**
     * <p>Makes it possible to specify which speaker is on which channel. For example,
     * if the clinician is the first participant to speak, you would set
     * <code>ChannelId</code> of the first <code>ChannelDefinition</code> in the list
     * to <code>0</code> (to indicate the first channel) and
     * <code>ParticipantRole</code> to <code>CLINICIAN</code> (to indicate that it's
     * the clinician speaking). Then you would set the <code>ChannelId</code> of the
     * second <code>ChannelDefinition</code> in the list to <code>1</code> (to indicate
     * the second channel) and <code>ParticipantRole</code> to <code>PATIENT</code> (to
     * indicate that it's the patient speaking). </p>
     */
    inline bool ChannelDefinitionsHasBeenSet() const { return m_channelDefinitionsHasBeenSet; }

    /**
     * <p>Makes it possible to specify which speaker is on which channel. For example,
     * if the clinician is the first participant to speak, you would set
     * <code>ChannelId</code> of the first <code>ChannelDefinition</code> in the list
     * to <code>0</code> (to indicate the first channel) and
     * <code>ParticipantRole</code> to <code>CLINICIAN</code> (to indicate that it's
     * the clinician speaking). Then you would set the <code>ChannelId</code> of the
     * second <code>ChannelDefinition</code> in the list to <code>1</code> (to indicate
     * the second channel) and <code>ParticipantRole</code> to <code>PATIENT</code> (to
     * indicate that it's the patient speaking). </p>
     */
    inline void SetChannelDefinitions(const Aws::Vector<MedicalScribeChannelDefinition>& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions = value; }

    /**
     * <p>Makes it possible to specify which speaker is on which channel. For example,
     * if the clinician is the first participant to speak, you would set
     * <code>ChannelId</code> of the first <code>ChannelDefinition</code> in the list
     * to <code>0</code> (to indicate the first channel) and
     * <code>ParticipantRole</code> to <code>CLINICIAN</code> (to indicate that it's
     * the clinician speaking). Then you would set the <code>ChannelId</code> of the
     * second <code>ChannelDefinition</code> in the list to <code>1</code> (to indicate
     * the second channel) and <code>ParticipantRole</code> to <code>PATIENT</code> (to
     * indicate that it's the patient speaking). </p>
     */
    inline void SetChannelDefinitions(Aws::Vector<MedicalScribeChannelDefinition>&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions = std::move(value); }

    /**
     * <p>Makes it possible to specify which speaker is on which channel. For example,
     * if the clinician is the first participant to speak, you would set
     * <code>ChannelId</code> of the first <code>ChannelDefinition</code> in the list
     * to <code>0</code> (to indicate the first channel) and
     * <code>ParticipantRole</code> to <code>CLINICIAN</code> (to indicate that it's
     * the clinician speaking). Then you would set the <code>ChannelId</code> of the
     * second <code>ChannelDefinition</code> in the list to <code>1</code> (to indicate
     * the second channel) and <code>ParticipantRole</code> to <code>PATIENT</code> (to
     * indicate that it's the patient speaking). </p>
     */
    inline StartMedicalScribeJobRequest& WithChannelDefinitions(const Aws::Vector<MedicalScribeChannelDefinition>& value) { SetChannelDefinitions(value); return *this;}

    /**
     * <p>Makes it possible to specify which speaker is on which channel. For example,
     * if the clinician is the first participant to speak, you would set
     * <code>ChannelId</code> of the first <code>ChannelDefinition</code> in the list
     * to <code>0</code> (to indicate the first channel) and
     * <code>ParticipantRole</code> to <code>CLINICIAN</code> (to indicate that it's
     * the clinician speaking). Then you would set the <code>ChannelId</code> of the
     * second <code>ChannelDefinition</code> in the list to <code>1</code> (to indicate
     * the second channel) and <code>ParticipantRole</code> to <code>PATIENT</code> (to
     * indicate that it's the patient speaking). </p>
     */
    inline StartMedicalScribeJobRequest& WithChannelDefinitions(Aws::Vector<MedicalScribeChannelDefinition>&& value) { SetChannelDefinitions(std::move(value)); return *this;}

    /**
     * <p>Makes it possible to specify which speaker is on which channel. For example,
     * if the clinician is the first participant to speak, you would set
     * <code>ChannelId</code> of the first <code>ChannelDefinition</code> in the list
     * to <code>0</code> (to indicate the first channel) and
     * <code>ParticipantRole</code> to <code>CLINICIAN</code> (to indicate that it's
     * the clinician speaking). Then you would set the <code>ChannelId</code> of the
     * second <code>ChannelDefinition</code> in the list to <code>1</code> (to indicate
     * the second channel) and <code>ParticipantRole</code> to <code>PATIENT</code> (to
     * indicate that it's the patient speaking). </p>
     */
    inline StartMedicalScribeJobRequest& AddChannelDefinitions(const MedicalScribeChannelDefinition& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions.push_back(value); return *this; }

    /**
     * <p>Makes it possible to specify which speaker is on which channel. For example,
     * if the clinician is the first participant to speak, you would set
     * <code>ChannelId</code> of the first <code>ChannelDefinition</code> in the list
     * to <code>0</code> (to indicate the first channel) and
     * <code>ParticipantRole</code> to <code>CLINICIAN</code> (to indicate that it's
     * the clinician speaking). Then you would set the <code>ChannelId</code> of the
     * second <code>ChannelDefinition</code> in the list to <code>1</code> (to indicate
     * the second channel) and <code>ParticipantRole</code> to <code>PATIENT</code> (to
     * indicate that it's the patient speaking). </p>
     */
    inline StartMedicalScribeJobRequest& AddChannelDefinitions(MedicalScribeChannelDefinition&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to the
     * Medica Scribe job.</p> <p>To learn more about using tags with Amazon Transcribe,
     * refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to the
     * Medica Scribe job.</p> <p>To learn more about using tags with Amazon Transcribe,
     * refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to the
     * Medica Scribe job.</p> <p>To learn more about using tags with Amazon Transcribe,
     * refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to the
     * Medica Scribe job.</p> <p>To learn more about using tags with Amazon Transcribe,
     * refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to the
     * Medica Scribe job.</p> <p>To learn more about using tags with Amazon Transcribe,
     * refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline StartMedicalScribeJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to the
     * Medica Scribe job.</p> <p>To learn more about using tags with Amazon Transcribe,
     * refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline StartMedicalScribeJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to the
     * Medica Scribe job.</p> <p>To learn more about using tags with Amazon Transcribe,
     * refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline StartMedicalScribeJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to the
     * Medica Scribe job.</p> <p>To learn more about using tags with Amazon Transcribe,
     * refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline StartMedicalScribeJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_medicalScribeJobName;
    bool m_medicalScribeJobNameHasBeenSet = false;

    Media m_media;
    bool m_mediaHasBeenSet = false;

    Aws::String m_outputBucketName;
    bool m_outputBucketNameHasBeenSet = false;

    Aws::String m_outputEncryptionKMSKeyId;
    bool m_outputEncryptionKMSKeyIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_kMSEncryptionContext;
    bool m_kMSEncryptionContextHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    MedicalScribeSettings m_settings;
    bool m_settingsHasBeenSet = false;

    Aws::Vector<MedicalScribeChannelDefinition> m_channelDefinitions;
    bool m_channelDefinitionsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
