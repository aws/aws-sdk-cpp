/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/secretsmanager/model/RotationRulesType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/secretsmanager/model/Tag.h>
#include <aws/secretsmanager/model/ReplicationStatusType.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SecretsManager
{
namespace Model
{
  class DescribeSecretResult
  {
  public:
    AWS_SECRETSMANAGER_API DescribeSecretResult();
    AWS_SECRETSMANAGER_API DescribeSecretResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECRETSMANAGER_API DescribeSecretResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the secret.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The ARN of the secret.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRN = value; }

    /**
     * <p>The ARN of the secret.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRN = std::move(value); }

    /**
     * <p>The ARN of the secret.</p>
     */
    inline void SetARN(const char* value) { m_aRN.assign(value); }

    /**
     * <p>The ARN of the secret.</p>
     */
    inline DescribeSecretResult& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The ARN of the secret.</p>
     */
    inline DescribeSecretResult& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the secret.</p>
     */
    inline DescribeSecretResult& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The name of the secret.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the secret.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the secret.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the secret.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the secret.</p>
     */
    inline DescribeSecretResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the secret.</p>
     */
    inline DescribeSecretResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the secret.</p>
     */
    inline DescribeSecretResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the secret.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the secret.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the secret.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the secret.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the secret.</p>
     */
    inline DescribeSecretResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the secret.</p>
     */
    inline DescribeSecretResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the secret.</p>
     */
    inline DescribeSecretResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The key ID or alias ARN of the KMS key that Secrets Manager uses to encrypt
     * the secret value. If the secret is encrypted with the Amazon Web Services
     * managed key <code>aws/secretsmanager</code>, this field is omitted. Secrets
     * created using the console use an KMS key ID.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The key ID or alias ARN of the KMS key that Secrets Manager uses to encrypt
     * the secret value. If the secret is encrypted with the Amazon Web Services
     * managed key <code>aws/secretsmanager</code>, this field is omitted. Secrets
     * created using the console use an KMS key ID.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }

    /**
     * <p>The key ID or alias ARN of the KMS key that Secrets Manager uses to encrypt
     * the secret value. If the secret is encrypted with the Amazon Web Services
     * managed key <code>aws/secretsmanager</code>, this field is omitted. Secrets
     * created using the console use an KMS key ID.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }

    /**
     * <p>The key ID or alias ARN of the KMS key that Secrets Manager uses to encrypt
     * the secret value. If the secret is encrypted with the Amazon Web Services
     * managed key <code>aws/secretsmanager</code>, this field is omitted. Secrets
     * created using the console use an KMS key ID.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }

    /**
     * <p>The key ID or alias ARN of the KMS key that Secrets Manager uses to encrypt
     * the secret value. If the secret is encrypted with the Amazon Web Services
     * managed key <code>aws/secretsmanager</code>, this field is omitted. Secrets
     * created using the console use an KMS key ID.</p>
     */
    inline DescribeSecretResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The key ID or alias ARN of the KMS key that Secrets Manager uses to encrypt
     * the secret value. If the secret is encrypted with the Amazon Web Services
     * managed key <code>aws/secretsmanager</code>, this field is omitted. Secrets
     * created using the console use an KMS key ID.</p>
     */
    inline DescribeSecretResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The key ID or alias ARN of the KMS key that Secrets Manager uses to encrypt
     * the secret value. If the secret is encrypted with the Amazon Web Services
     * managed key <code>aws/secretsmanager</code>, this field is omitted. Secrets
     * created using the console use an KMS key ID.</p>
     */
    inline DescribeSecretResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Specifies whether automatic rotation is turned on for this secret.</p> <p>To
     * turn on rotation, use <a>RotateSecret</a>. To turn off rotation, use
     * <a>CancelRotateSecret</a>.</p>
     */
    inline bool GetRotationEnabled() const{ return m_rotationEnabled; }

    /**
     * <p>Specifies whether automatic rotation is turned on for this secret.</p> <p>To
     * turn on rotation, use <a>RotateSecret</a>. To turn off rotation, use
     * <a>CancelRotateSecret</a>.</p>
     */
    inline void SetRotationEnabled(bool value) { m_rotationEnabled = value; }

    /**
     * <p>Specifies whether automatic rotation is turned on for this secret.</p> <p>To
     * turn on rotation, use <a>RotateSecret</a>. To turn off rotation, use
     * <a>CancelRotateSecret</a>.</p>
     */
    inline DescribeSecretResult& WithRotationEnabled(bool value) { SetRotationEnabled(value); return *this;}


    /**
     * <p>The ARN of the Lambda function that Secrets Manager invokes to rotate the
     * secret. </p>
     */
    inline const Aws::String& GetRotationLambdaARN() const{ return m_rotationLambdaARN; }

    /**
     * <p>The ARN of the Lambda function that Secrets Manager invokes to rotate the
     * secret. </p>
     */
    inline void SetRotationLambdaARN(const Aws::String& value) { m_rotationLambdaARN = value; }

    /**
     * <p>The ARN of the Lambda function that Secrets Manager invokes to rotate the
     * secret. </p>
     */
    inline void SetRotationLambdaARN(Aws::String&& value) { m_rotationLambdaARN = std::move(value); }

    /**
     * <p>The ARN of the Lambda function that Secrets Manager invokes to rotate the
     * secret. </p>
     */
    inline void SetRotationLambdaARN(const char* value) { m_rotationLambdaARN.assign(value); }

    /**
     * <p>The ARN of the Lambda function that Secrets Manager invokes to rotate the
     * secret. </p>
     */
    inline DescribeSecretResult& WithRotationLambdaARN(const Aws::String& value) { SetRotationLambdaARN(value); return *this;}

    /**
     * <p>The ARN of the Lambda function that Secrets Manager invokes to rotate the
     * secret. </p>
     */
    inline DescribeSecretResult& WithRotationLambdaARN(Aws::String&& value) { SetRotationLambdaARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Lambda function that Secrets Manager invokes to rotate the
     * secret. </p>
     */
    inline DescribeSecretResult& WithRotationLambdaARN(const char* value) { SetRotationLambdaARN(value); return *this;}


    /**
     * <p>The rotation schedule and Lambda function for this secret. If the secret
     * previously had rotation turned on, but it is now turned off, this field shows
     * the previous rotation schedule and rotation function. If the secret never had
     * rotation turned on, this field is omitted.</p>
     */
    inline const RotationRulesType& GetRotationRules() const{ return m_rotationRules; }

    /**
     * <p>The rotation schedule and Lambda function for this secret. If the secret
     * previously had rotation turned on, but it is now turned off, this field shows
     * the previous rotation schedule and rotation function. If the secret never had
     * rotation turned on, this field is omitted.</p>
     */
    inline void SetRotationRules(const RotationRulesType& value) { m_rotationRules = value; }

    /**
     * <p>The rotation schedule and Lambda function for this secret. If the secret
     * previously had rotation turned on, but it is now turned off, this field shows
     * the previous rotation schedule and rotation function. If the secret never had
     * rotation turned on, this field is omitted.</p>
     */
    inline void SetRotationRules(RotationRulesType&& value) { m_rotationRules = std::move(value); }

    /**
     * <p>The rotation schedule and Lambda function for this secret. If the secret
     * previously had rotation turned on, but it is now turned off, this field shows
     * the previous rotation schedule and rotation function. If the secret never had
     * rotation turned on, this field is omitted.</p>
     */
    inline DescribeSecretResult& WithRotationRules(const RotationRulesType& value) { SetRotationRules(value); return *this;}

    /**
     * <p>The rotation schedule and Lambda function for this secret. If the secret
     * previously had rotation turned on, but it is now turned off, this field shows
     * the previous rotation schedule and rotation function. If the secret never had
     * rotation turned on, this field is omitted.</p>
     */
    inline DescribeSecretResult& WithRotationRules(RotationRulesType&& value) { SetRotationRules(std::move(value)); return *this;}


    /**
     * <p>The last date and time that Secrets Manager rotated the secret. If the secret
     * isn't configured for rotation, Secrets Manager returns null.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRotatedDate() const{ return m_lastRotatedDate; }

    /**
     * <p>The last date and time that Secrets Manager rotated the secret. If the secret
     * isn't configured for rotation, Secrets Manager returns null.</p>
     */
    inline void SetLastRotatedDate(const Aws::Utils::DateTime& value) { m_lastRotatedDate = value; }

    /**
     * <p>The last date and time that Secrets Manager rotated the secret. If the secret
     * isn't configured for rotation, Secrets Manager returns null.</p>
     */
    inline void SetLastRotatedDate(Aws::Utils::DateTime&& value) { m_lastRotatedDate = std::move(value); }

    /**
     * <p>The last date and time that Secrets Manager rotated the secret. If the secret
     * isn't configured for rotation, Secrets Manager returns null.</p>
     */
    inline DescribeSecretResult& WithLastRotatedDate(const Aws::Utils::DateTime& value) { SetLastRotatedDate(value); return *this;}

    /**
     * <p>The last date and time that Secrets Manager rotated the secret. If the secret
     * isn't configured for rotation, Secrets Manager returns null.</p>
     */
    inline DescribeSecretResult& WithLastRotatedDate(Aws::Utils::DateTime&& value) { SetLastRotatedDate(std::move(value)); return *this;}


    /**
     * <p>The last date and time that this secret was modified in any way.</p>
     */
    inline const Aws::Utils::DateTime& GetLastChangedDate() const{ return m_lastChangedDate; }

    /**
     * <p>The last date and time that this secret was modified in any way.</p>
     */
    inline void SetLastChangedDate(const Aws::Utils::DateTime& value) { m_lastChangedDate = value; }

    /**
     * <p>The last date and time that this secret was modified in any way.</p>
     */
    inline void SetLastChangedDate(Aws::Utils::DateTime&& value) { m_lastChangedDate = std::move(value); }

    /**
     * <p>The last date and time that this secret was modified in any way.</p>
     */
    inline DescribeSecretResult& WithLastChangedDate(const Aws::Utils::DateTime& value) { SetLastChangedDate(value); return *this;}

    /**
     * <p>The last date and time that this secret was modified in any way.</p>
     */
    inline DescribeSecretResult& WithLastChangedDate(Aws::Utils::DateTime&& value) { SetLastChangedDate(std::move(value)); return *this;}


    /**
     * <p>The date that the secret was last accessed in the Region. This field is
     * omitted if the secret has never been retrieved in the Region.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessedDate() const{ return m_lastAccessedDate; }

    /**
     * <p>The date that the secret was last accessed in the Region. This field is
     * omitted if the secret has never been retrieved in the Region.</p>
     */
    inline void SetLastAccessedDate(const Aws::Utils::DateTime& value) { m_lastAccessedDate = value; }

    /**
     * <p>The date that the secret was last accessed in the Region. This field is
     * omitted if the secret has never been retrieved in the Region.</p>
     */
    inline void SetLastAccessedDate(Aws::Utils::DateTime&& value) { m_lastAccessedDate = std::move(value); }

    /**
     * <p>The date that the secret was last accessed in the Region. This field is
     * omitted if the secret has never been retrieved in the Region.</p>
     */
    inline DescribeSecretResult& WithLastAccessedDate(const Aws::Utils::DateTime& value) { SetLastAccessedDate(value); return *this;}

    /**
     * <p>The date that the secret was last accessed in the Region. This field is
     * omitted if the secret has never been retrieved in the Region.</p>
     */
    inline DescribeSecretResult& WithLastAccessedDate(Aws::Utils::DateTime&& value) { SetLastAccessedDate(std::move(value)); return *this;}


    /**
     * <p>The date the secret is scheduled for deletion. If it is not scheduled for
     * deletion, this field is omitted. When you delete a secret, Secrets Manager
     * requires a recovery window of at least 7 days before deleting the secret. Some
     * time after the deleted date, Secrets Manager deletes the secret, including all
     * of its versions.</p> <p>If a secret is scheduled for deletion, then its details,
     * including the encrypted secret value, is not accessible. To cancel a scheduled
     * deletion and restore access to the secret, use <a>RestoreSecret</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletedDate() const{ return m_deletedDate; }

    /**
     * <p>The date the secret is scheduled for deletion. If it is not scheduled for
     * deletion, this field is omitted. When you delete a secret, Secrets Manager
     * requires a recovery window of at least 7 days before deleting the secret. Some
     * time after the deleted date, Secrets Manager deletes the secret, including all
     * of its versions.</p> <p>If a secret is scheduled for deletion, then its details,
     * including the encrypted secret value, is not accessible. To cancel a scheduled
     * deletion and restore access to the secret, use <a>RestoreSecret</a>.</p>
     */
    inline void SetDeletedDate(const Aws::Utils::DateTime& value) { m_deletedDate = value; }

    /**
     * <p>The date the secret is scheduled for deletion. If it is not scheduled for
     * deletion, this field is omitted. When you delete a secret, Secrets Manager
     * requires a recovery window of at least 7 days before deleting the secret. Some
     * time after the deleted date, Secrets Manager deletes the secret, including all
     * of its versions.</p> <p>If a secret is scheduled for deletion, then its details,
     * including the encrypted secret value, is not accessible. To cancel a scheduled
     * deletion and restore access to the secret, use <a>RestoreSecret</a>.</p>
     */
    inline void SetDeletedDate(Aws::Utils::DateTime&& value) { m_deletedDate = std::move(value); }

    /**
     * <p>The date the secret is scheduled for deletion. If it is not scheduled for
     * deletion, this field is omitted. When you delete a secret, Secrets Manager
     * requires a recovery window of at least 7 days before deleting the secret. Some
     * time after the deleted date, Secrets Manager deletes the secret, including all
     * of its versions.</p> <p>If a secret is scheduled for deletion, then its details,
     * including the encrypted secret value, is not accessible. To cancel a scheduled
     * deletion and restore access to the secret, use <a>RestoreSecret</a>.</p>
     */
    inline DescribeSecretResult& WithDeletedDate(const Aws::Utils::DateTime& value) { SetDeletedDate(value); return *this;}

    /**
     * <p>The date the secret is scheduled for deletion. If it is not scheduled for
     * deletion, this field is omitted. When you delete a secret, Secrets Manager
     * requires a recovery window of at least 7 days before deleting the secret. Some
     * time after the deleted date, Secrets Manager deletes the secret, including all
     * of its versions.</p> <p>If a secret is scheduled for deletion, then its details,
     * including the encrypted secret value, is not accessible. To cancel a scheduled
     * deletion and restore access to the secret, use <a>RestoreSecret</a>.</p>
     */
    inline DescribeSecretResult& WithDeletedDate(Aws::Utils::DateTime&& value) { SetDeletedDate(std::move(value)); return *this;}


    /**
     * <p>The next rotation is scheduled to occur on or before this date. If the secret
     * isn't configured for rotation, Secrets Manager returns null.</p>
     */
    inline const Aws::Utils::DateTime& GetNextRotationDate() const{ return m_nextRotationDate; }

    /**
     * <p>The next rotation is scheduled to occur on or before this date. If the secret
     * isn't configured for rotation, Secrets Manager returns null.</p>
     */
    inline void SetNextRotationDate(const Aws::Utils::DateTime& value) { m_nextRotationDate = value; }

    /**
     * <p>The next rotation is scheduled to occur on or before this date. If the secret
     * isn't configured for rotation, Secrets Manager returns null.</p>
     */
    inline void SetNextRotationDate(Aws::Utils::DateTime&& value) { m_nextRotationDate = std::move(value); }

    /**
     * <p>The next rotation is scheduled to occur on or before this date. If the secret
     * isn't configured for rotation, Secrets Manager returns null.</p>
     */
    inline DescribeSecretResult& WithNextRotationDate(const Aws::Utils::DateTime& value) { SetNextRotationDate(value); return *this;}

    /**
     * <p>The next rotation is scheduled to occur on or before this date. If the secret
     * isn't configured for rotation, Secrets Manager returns null.</p>
     */
    inline DescribeSecretResult& WithNextRotationDate(Aws::Utils::DateTime&& value) { SetNextRotationDate(std::move(value)); return *this;}


    /**
     * <p>The list of tags attached to the secret. To add tags to a secret, use
     * <a>TagResource</a>. To remove tags, use <a>UntagResource</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tags attached to the secret. To add tags to a secret, use
     * <a>TagResource</a>. To remove tags, use <a>UntagResource</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>The list of tags attached to the secret. To add tags to a secret, use
     * <a>TagResource</a>. To remove tags, use <a>UntagResource</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>The list of tags attached to the secret. To add tags to a secret, use
     * <a>TagResource</a>. To remove tags, use <a>UntagResource</a>.</p>
     */
    inline DescribeSecretResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tags attached to the secret. To add tags to a secret, use
     * <a>TagResource</a>. To remove tags, use <a>UntagResource</a>.</p>
     */
    inline DescribeSecretResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags attached to the secret. To add tags to a secret, use
     * <a>TagResource</a>. To remove tags, use <a>UntagResource</a>.</p>
     */
    inline DescribeSecretResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>The list of tags attached to the secret. To add tags to a secret, use
     * <a>TagResource</a>. To remove tags, use <a>UntagResource</a>.</p>
     */
    inline DescribeSecretResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of the versions of the secret that have staging labels attached.
     * Versions that don't have staging labels are considered deprecated and Secrets
     * Manager can delete them.</p> <p>Secrets Manager uses staging labels to indicate
     * the status of a secret version during rotation. The three staging labels for
     * rotation are: </p> <ul> <li> <p> <code>AWSCURRENT</code>, which indicates the
     * current version of the secret.</p> </li> <li> <p> <code>AWSPENDING</code>, which
     * indicates the version of the secret that contains new secret information that
     * will become the next current version when rotation finishes.</p> <p>During
     * rotation, Secrets Manager creates an <code>AWSPENDING</code> version ID before
     * creating the new secret version. To check if a secret version exists, call
     * <a>GetSecretValue</a>.</p> </li> <li> <p> <code>AWSPREVIOUS</code>, which
     * indicates the previous current version of the secret. You can use this as the
     * <i>last known good</i> version.</p> </li> </ul> <p>For more information about
     * rotation and staging labels, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_how.html">How
     * rotation works</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetVersionIdsToStages() const{ return m_versionIdsToStages; }

    /**
     * <p>A list of the versions of the secret that have staging labels attached.
     * Versions that don't have staging labels are considered deprecated and Secrets
     * Manager can delete them.</p> <p>Secrets Manager uses staging labels to indicate
     * the status of a secret version during rotation. The three staging labels for
     * rotation are: </p> <ul> <li> <p> <code>AWSCURRENT</code>, which indicates the
     * current version of the secret.</p> </li> <li> <p> <code>AWSPENDING</code>, which
     * indicates the version of the secret that contains new secret information that
     * will become the next current version when rotation finishes.</p> <p>During
     * rotation, Secrets Manager creates an <code>AWSPENDING</code> version ID before
     * creating the new secret version. To check if a secret version exists, call
     * <a>GetSecretValue</a>.</p> </li> <li> <p> <code>AWSPREVIOUS</code>, which
     * indicates the previous current version of the secret. You can use this as the
     * <i>last known good</i> version.</p> </li> </ul> <p>For more information about
     * rotation and staging labels, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_how.html">How
     * rotation works</a>.</p>
     */
    inline void SetVersionIdsToStages(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_versionIdsToStages = value; }

    /**
     * <p>A list of the versions of the secret that have staging labels attached.
     * Versions that don't have staging labels are considered deprecated and Secrets
     * Manager can delete them.</p> <p>Secrets Manager uses staging labels to indicate
     * the status of a secret version during rotation. The three staging labels for
     * rotation are: </p> <ul> <li> <p> <code>AWSCURRENT</code>, which indicates the
     * current version of the secret.</p> </li> <li> <p> <code>AWSPENDING</code>, which
     * indicates the version of the secret that contains new secret information that
     * will become the next current version when rotation finishes.</p> <p>During
     * rotation, Secrets Manager creates an <code>AWSPENDING</code> version ID before
     * creating the new secret version. To check if a secret version exists, call
     * <a>GetSecretValue</a>.</p> </li> <li> <p> <code>AWSPREVIOUS</code>, which
     * indicates the previous current version of the secret. You can use this as the
     * <i>last known good</i> version.</p> </li> </ul> <p>For more information about
     * rotation and staging labels, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_how.html">How
     * rotation works</a>.</p>
     */
    inline void SetVersionIdsToStages(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_versionIdsToStages = std::move(value); }

    /**
     * <p>A list of the versions of the secret that have staging labels attached.
     * Versions that don't have staging labels are considered deprecated and Secrets
     * Manager can delete them.</p> <p>Secrets Manager uses staging labels to indicate
     * the status of a secret version during rotation. The three staging labels for
     * rotation are: </p> <ul> <li> <p> <code>AWSCURRENT</code>, which indicates the
     * current version of the secret.</p> </li> <li> <p> <code>AWSPENDING</code>, which
     * indicates the version of the secret that contains new secret information that
     * will become the next current version when rotation finishes.</p> <p>During
     * rotation, Secrets Manager creates an <code>AWSPENDING</code> version ID before
     * creating the new secret version. To check if a secret version exists, call
     * <a>GetSecretValue</a>.</p> </li> <li> <p> <code>AWSPREVIOUS</code>, which
     * indicates the previous current version of the secret. You can use this as the
     * <i>last known good</i> version.</p> </li> </ul> <p>For more information about
     * rotation and staging labels, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_how.html">How
     * rotation works</a>.</p>
     */
    inline DescribeSecretResult& WithVersionIdsToStages(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetVersionIdsToStages(value); return *this;}

    /**
     * <p>A list of the versions of the secret that have staging labels attached.
     * Versions that don't have staging labels are considered deprecated and Secrets
     * Manager can delete them.</p> <p>Secrets Manager uses staging labels to indicate
     * the status of a secret version during rotation. The three staging labels for
     * rotation are: </p> <ul> <li> <p> <code>AWSCURRENT</code>, which indicates the
     * current version of the secret.</p> </li> <li> <p> <code>AWSPENDING</code>, which
     * indicates the version of the secret that contains new secret information that
     * will become the next current version when rotation finishes.</p> <p>During
     * rotation, Secrets Manager creates an <code>AWSPENDING</code> version ID before
     * creating the new secret version. To check if a secret version exists, call
     * <a>GetSecretValue</a>.</p> </li> <li> <p> <code>AWSPREVIOUS</code>, which
     * indicates the previous current version of the secret. You can use this as the
     * <i>last known good</i> version.</p> </li> </ul> <p>For more information about
     * rotation and staging labels, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_how.html">How
     * rotation works</a>.</p>
     */
    inline DescribeSecretResult& WithVersionIdsToStages(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetVersionIdsToStages(std::move(value)); return *this;}

    /**
     * <p>A list of the versions of the secret that have staging labels attached.
     * Versions that don't have staging labels are considered deprecated and Secrets
     * Manager can delete them.</p> <p>Secrets Manager uses staging labels to indicate
     * the status of a secret version during rotation. The three staging labels for
     * rotation are: </p> <ul> <li> <p> <code>AWSCURRENT</code>, which indicates the
     * current version of the secret.</p> </li> <li> <p> <code>AWSPENDING</code>, which
     * indicates the version of the secret that contains new secret information that
     * will become the next current version when rotation finishes.</p> <p>During
     * rotation, Secrets Manager creates an <code>AWSPENDING</code> version ID before
     * creating the new secret version. To check if a secret version exists, call
     * <a>GetSecretValue</a>.</p> </li> <li> <p> <code>AWSPREVIOUS</code>, which
     * indicates the previous current version of the secret. You can use this as the
     * <i>last known good</i> version.</p> </li> </ul> <p>For more information about
     * rotation and staging labels, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_how.html">How
     * rotation works</a>.</p>
     */
    inline DescribeSecretResult& AddVersionIdsToStages(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_versionIdsToStages.emplace(key, value); return *this; }

    /**
     * <p>A list of the versions of the secret that have staging labels attached.
     * Versions that don't have staging labels are considered deprecated and Secrets
     * Manager can delete them.</p> <p>Secrets Manager uses staging labels to indicate
     * the status of a secret version during rotation. The three staging labels for
     * rotation are: </p> <ul> <li> <p> <code>AWSCURRENT</code>, which indicates the
     * current version of the secret.</p> </li> <li> <p> <code>AWSPENDING</code>, which
     * indicates the version of the secret that contains new secret information that
     * will become the next current version when rotation finishes.</p> <p>During
     * rotation, Secrets Manager creates an <code>AWSPENDING</code> version ID before
     * creating the new secret version. To check if a secret version exists, call
     * <a>GetSecretValue</a>.</p> </li> <li> <p> <code>AWSPREVIOUS</code>, which
     * indicates the previous current version of the secret. You can use this as the
     * <i>last known good</i> version.</p> </li> </ul> <p>For more information about
     * rotation and staging labels, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_how.html">How
     * rotation works</a>.</p>
     */
    inline DescribeSecretResult& AddVersionIdsToStages(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_versionIdsToStages.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of the versions of the secret that have staging labels attached.
     * Versions that don't have staging labels are considered deprecated and Secrets
     * Manager can delete them.</p> <p>Secrets Manager uses staging labels to indicate
     * the status of a secret version during rotation. The three staging labels for
     * rotation are: </p> <ul> <li> <p> <code>AWSCURRENT</code>, which indicates the
     * current version of the secret.</p> </li> <li> <p> <code>AWSPENDING</code>, which
     * indicates the version of the secret that contains new secret information that
     * will become the next current version when rotation finishes.</p> <p>During
     * rotation, Secrets Manager creates an <code>AWSPENDING</code> version ID before
     * creating the new secret version. To check if a secret version exists, call
     * <a>GetSecretValue</a>.</p> </li> <li> <p> <code>AWSPREVIOUS</code>, which
     * indicates the previous current version of the secret. You can use this as the
     * <i>last known good</i> version.</p> </li> </ul> <p>For more information about
     * rotation and staging labels, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_how.html">How
     * rotation works</a>.</p>
     */
    inline DescribeSecretResult& AddVersionIdsToStages(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_versionIdsToStages.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of the versions of the secret that have staging labels attached.
     * Versions that don't have staging labels are considered deprecated and Secrets
     * Manager can delete them.</p> <p>Secrets Manager uses staging labels to indicate
     * the status of a secret version during rotation. The three staging labels for
     * rotation are: </p> <ul> <li> <p> <code>AWSCURRENT</code>, which indicates the
     * current version of the secret.</p> </li> <li> <p> <code>AWSPENDING</code>, which
     * indicates the version of the secret that contains new secret information that
     * will become the next current version when rotation finishes.</p> <p>During
     * rotation, Secrets Manager creates an <code>AWSPENDING</code> version ID before
     * creating the new secret version. To check if a secret version exists, call
     * <a>GetSecretValue</a>.</p> </li> <li> <p> <code>AWSPREVIOUS</code>, which
     * indicates the previous current version of the secret. You can use this as the
     * <i>last known good</i> version.</p> </li> </ul> <p>For more information about
     * rotation and staging labels, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_how.html">How
     * rotation works</a>.</p>
     */
    inline DescribeSecretResult& AddVersionIdsToStages(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_versionIdsToStages.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of the versions of the secret that have staging labels attached.
     * Versions that don't have staging labels are considered deprecated and Secrets
     * Manager can delete them.</p> <p>Secrets Manager uses staging labels to indicate
     * the status of a secret version during rotation. The three staging labels for
     * rotation are: </p> <ul> <li> <p> <code>AWSCURRENT</code>, which indicates the
     * current version of the secret.</p> </li> <li> <p> <code>AWSPENDING</code>, which
     * indicates the version of the secret that contains new secret information that
     * will become the next current version when rotation finishes.</p> <p>During
     * rotation, Secrets Manager creates an <code>AWSPENDING</code> version ID before
     * creating the new secret version. To check if a secret version exists, call
     * <a>GetSecretValue</a>.</p> </li> <li> <p> <code>AWSPREVIOUS</code>, which
     * indicates the previous current version of the secret. You can use this as the
     * <i>last known good</i> version.</p> </li> </ul> <p>For more information about
     * rotation and staging labels, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_how.html">How
     * rotation works</a>.</p>
     */
    inline DescribeSecretResult& AddVersionIdsToStages(const char* key, Aws::Vector<Aws::String>&& value) { m_versionIdsToStages.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of the versions of the secret that have staging labels attached.
     * Versions that don't have staging labels are considered deprecated and Secrets
     * Manager can delete them.</p> <p>Secrets Manager uses staging labels to indicate
     * the status of a secret version during rotation. The three staging labels for
     * rotation are: </p> <ul> <li> <p> <code>AWSCURRENT</code>, which indicates the
     * current version of the secret.</p> </li> <li> <p> <code>AWSPENDING</code>, which
     * indicates the version of the secret that contains new secret information that
     * will become the next current version when rotation finishes.</p> <p>During
     * rotation, Secrets Manager creates an <code>AWSPENDING</code> version ID before
     * creating the new secret version. To check if a secret version exists, call
     * <a>GetSecretValue</a>.</p> </li> <li> <p> <code>AWSPREVIOUS</code>, which
     * indicates the previous current version of the secret. You can use this as the
     * <i>last known good</i> version.</p> </li> </ul> <p>For more information about
     * rotation and staging labels, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_how.html">How
     * rotation works</a>.</p>
     */
    inline DescribeSecretResult& AddVersionIdsToStages(const char* key, const Aws::Vector<Aws::String>& value) { m_versionIdsToStages.emplace(key, value); return *this; }


    /**
     * <p>The ID of the service that created this secret. For more information, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/service-linked-secrets.html">Secrets
     * managed by other Amazon Web Services services</a>.</p>
     */
    inline const Aws::String& GetOwningService() const{ return m_owningService; }

    /**
     * <p>The ID of the service that created this secret. For more information, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/service-linked-secrets.html">Secrets
     * managed by other Amazon Web Services services</a>.</p>
     */
    inline void SetOwningService(const Aws::String& value) { m_owningService = value; }

    /**
     * <p>The ID of the service that created this secret. For more information, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/service-linked-secrets.html">Secrets
     * managed by other Amazon Web Services services</a>.</p>
     */
    inline void SetOwningService(Aws::String&& value) { m_owningService = std::move(value); }

    /**
     * <p>The ID of the service that created this secret. For more information, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/service-linked-secrets.html">Secrets
     * managed by other Amazon Web Services services</a>.</p>
     */
    inline void SetOwningService(const char* value) { m_owningService.assign(value); }

    /**
     * <p>The ID of the service that created this secret. For more information, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/service-linked-secrets.html">Secrets
     * managed by other Amazon Web Services services</a>.</p>
     */
    inline DescribeSecretResult& WithOwningService(const Aws::String& value) { SetOwningService(value); return *this;}

    /**
     * <p>The ID of the service that created this secret. For more information, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/service-linked-secrets.html">Secrets
     * managed by other Amazon Web Services services</a>.</p>
     */
    inline DescribeSecretResult& WithOwningService(Aws::String&& value) { SetOwningService(std::move(value)); return *this;}

    /**
     * <p>The ID of the service that created this secret. For more information, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/service-linked-secrets.html">Secrets
     * managed by other Amazon Web Services services</a>.</p>
     */
    inline DescribeSecretResult& WithOwningService(const char* value) { SetOwningService(value); return *this;}


    /**
     * <p>The date the secret was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date the secret was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The date the secret was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }

    /**
     * <p>The date the secret was created.</p>
     */
    inline DescribeSecretResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date the secret was created.</p>
     */
    inline DescribeSecretResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The Region the secret is in. If a secret is replicated to other Regions, the
     * replicas are listed in <code>ReplicationStatus</code>. </p>
     */
    inline const Aws::String& GetPrimaryRegion() const{ return m_primaryRegion; }

    /**
     * <p>The Region the secret is in. If a secret is replicated to other Regions, the
     * replicas are listed in <code>ReplicationStatus</code>. </p>
     */
    inline void SetPrimaryRegion(const Aws::String& value) { m_primaryRegion = value; }

    /**
     * <p>The Region the secret is in. If a secret is replicated to other Regions, the
     * replicas are listed in <code>ReplicationStatus</code>. </p>
     */
    inline void SetPrimaryRegion(Aws::String&& value) { m_primaryRegion = std::move(value); }

    /**
     * <p>The Region the secret is in. If a secret is replicated to other Regions, the
     * replicas are listed in <code>ReplicationStatus</code>. </p>
     */
    inline void SetPrimaryRegion(const char* value) { m_primaryRegion.assign(value); }

    /**
     * <p>The Region the secret is in. If a secret is replicated to other Regions, the
     * replicas are listed in <code>ReplicationStatus</code>. </p>
     */
    inline DescribeSecretResult& WithPrimaryRegion(const Aws::String& value) { SetPrimaryRegion(value); return *this;}

    /**
     * <p>The Region the secret is in. If a secret is replicated to other Regions, the
     * replicas are listed in <code>ReplicationStatus</code>. </p>
     */
    inline DescribeSecretResult& WithPrimaryRegion(Aws::String&& value) { SetPrimaryRegion(std::move(value)); return *this;}

    /**
     * <p>The Region the secret is in. If a secret is replicated to other Regions, the
     * replicas are listed in <code>ReplicationStatus</code>. </p>
     */
    inline DescribeSecretResult& WithPrimaryRegion(const char* value) { SetPrimaryRegion(value); return *this;}


    /**
     * <p>A list of the replicas of this secret and their status: </p> <ul> <li> <p>
     * <code>Failed</code>, which indicates that the replica was not created.</p> </li>
     * <li> <p> <code>InProgress</code>, which indicates that Secrets Manager is in the
     * process of creating the replica.</p> </li> <li> <p> <code>InSync</code>, which
     * indicates that the replica was created.</p> </li> </ul>
     */
    inline const Aws::Vector<ReplicationStatusType>& GetReplicationStatus() const{ return m_replicationStatus; }

    /**
     * <p>A list of the replicas of this secret and their status: </p> <ul> <li> <p>
     * <code>Failed</code>, which indicates that the replica was not created.</p> </li>
     * <li> <p> <code>InProgress</code>, which indicates that Secrets Manager is in the
     * process of creating the replica.</p> </li> <li> <p> <code>InSync</code>, which
     * indicates that the replica was created.</p> </li> </ul>
     */
    inline void SetReplicationStatus(const Aws::Vector<ReplicationStatusType>& value) { m_replicationStatus = value; }

    /**
     * <p>A list of the replicas of this secret and their status: </p> <ul> <li> <p>
     * <code>Failed</code>, which indicates that the replica was not created.</p> </li>
     * <li> <p> <code>InProgress</code>, which indicates that Secrets Manager is in the
     * process of creating the replica.</p> </li> <li> <p> <code>InSync</code>, which
     * indicates that the replica was created.</p> </li> </ul>
     */
    inline void SetReplicationStatus(Aws::Vector<ReplicationStatusType>&& value) { m_replicationStatus = std::move(value); }

    /**
     * <p>A list of the replicas of this secret and their status: </p> <ul> <li> <p>
     * <code>Failed</code>, which indicates that the replica was not created.</p> </li>
     * <li> <p> <code>InProgress</code>, which indicates that Secrets Manager is in the
     * process of creating the replica.</p> </li> <li> <p> <code>InSync</code>, which
     * indicates that the replica was created.</p> </li> </ul>
     */
    inline DescribeSecretResult& WithReplicationStatus(const Aws::Vector<ReplicationStatusType>& value) { SetReplicationStatus(value); return *this;}

    /**
     * <p>A list of the replicas of this secret and their status: </p> <ul> <li> <p>
     * <code>Failed</code>, which indicates that the replica was not created.</p> </li>
     * <li> <p> <code>InProgress</code>, which indicates that Secrets Manager is in the
     * process of creating the replica.</p> </li> <li> <p> <code>InSync</code>, which
     * indicates that the replica was created.</p> </li> </ul>
     */
    inline DescribeSecretResult& WithReplicationStatus(Aws::Vector<ReplicationStatusType>&& value) { SetReplicationStatus(std::move(value)); return *this;}

    /**
     * <p>A list of the replicas of this secret and their status: </p> <ul> <li> <p>
     * <code>Failed</code>, which indicates that the replica was not created.</p> </li>
     * <li> <p> <code>InProgress</code>, which indicates that Secrets Manager is in the
     * process of creating the replica.</p> </li> <li> <p> <code>InSync</code>, which
     * indicates that the replica was created.</p> </li> </ul>
     */
    inline DescribeSecretResult& AddReplicationStatus(const ReplicationStatusType& value) { m_replicationStatus.push_back(value); return *this; }

    /**
     * <p>A list of the replicas of this secret and their status: </p> <ul> <li> <p>
     * <code>Failed</code>, which indicates that the replica was not created.</p> </li>
     * <li> <p> <code>InProgress</code>, which indicates that Secrets Manager is in the
     * process of creating the replica.</p> </li> <li> <p> <code>InSync</code>, which
     * indicates that the replica was created.</p> </li> </ul>
     */
    inline DescribeSecretResult& AddReplicationStatus(ReplicationStatusType&& value) { m_replicationStatus.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeSecretResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeSecretResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeSecretResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_aRN;

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_kmsKeyId;

    bool m_rotationEnabled;

    Aws::String m_rotationLambdaARN;

    RotationRulesType m_rotationRules;

    Aws::Utils::DateTime m_lastRotatedDate;

    Aws::Utils::DateTime m_lastChangedDate;

    Aws::Utils::DateTime m_lastAccessedDate;

    Aws::Utils::DateTime m_deletedDate;

    Aws::Utils::DateTime m_nextRotationDate;

    Aws::Vector<Tag> m_tags;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_versionIdsToStages;

    Aws::String m_owningService;

    Aws::Utils::DateTime m_createdDate;

    Aws::String m_primaryRegion;

    Aws::Vector<ReplicationStatusType> m_replicationStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
