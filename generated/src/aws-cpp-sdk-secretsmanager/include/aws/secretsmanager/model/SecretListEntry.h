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
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecretsManager
{
namespace Model
{

  /**
   * <p>A structure that contains the details about a secret. It does not include the
   * encrypted <code>SecretString</code> and <code>SecretBinary</code> values. To get
   * those values, use <a
   * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_GetSecretValue.html">GetSecretValue</a>
   * .</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/SecretListEntry">AWS
   * API Reference</a></p>
   */
  class SecretListEntry
  {
  public:
    AWS_SECRETSMANAGER_API SecretListEntry();
    AWS_SECRETSMANAGER_API SecretListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECRETSMANAGER_API SecretListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECRETSMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline SecretListEntry& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline SecretListEntry& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline SecretListEntry& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The friendly name of the secret. You can use forward slashes in the name to
     * represent a path hierarchy. For example, <code>/prod/databases/dbserver1</code>
     * could represent the secret for a server named <code>dbserver1</code> in the
     * folder <code>databases</code> in the folder <code>prod</code>. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name of the secret. You can use forward slashes in the name to
     * represent a path hierarchy. For example, <code>/prod/databases/dbserver1</code>
     * could represent the secret for a server named <code>dbserver1</code> in the
     * folder <code>databases</code> in the folder <code>prod</code>. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The friendly name of the secret. You can use forward slashes in the name to
     * represent a path hierarchy. For example, <code>/prod/databases/dbserver1</code>
     * could represent the secret for a server named <code>dbserver1</code> in the
     * folder <code>databases</code> in the folder <code>prod</code>. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The friendly name of the secret. You can use forward slashes in the name to
     * represent a path hierarchy. For example, <code>/prod/databases/dbserver1</code>
     * could represent the secret for a server named <code>dbserver1</code> in the
     * folder <code>databases</code> in the folder <code>prod</code>. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The friendly name of the secret. You can use forward slashes in the name to
     * represent a path hierarchy. For example, <code>/prod/databases/dbserver1</code>
     * could represent the secret for a server named <code>dbserver1</code> in the
     * folder <code>databases</code> in the folder <code>prod</code>. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The friendly name of the secret. You can use forward slashes in the name to
     * represent a path hierarchy. For example, <code>/prod/databases/dbserver1</code>
     * could represent the secret for a server named <code>dbserver1</code> in the
     * folder <code>databases</code> in the folder <code>prod</code>. </p>
     */
    inline SecretListEntry& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name of the secret. You can use forward slashes in the name to
     * represent a path hierarchy. For example, <code>/prod/databases/dbserver1</code>
     * could represent the secret for a server named <code>dbserver1</code> in the
     * folder <code>databases</code> in the folder <code>prod</code>. </p>
     */
    inline SecretListEntry& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the secret. You can use forward slashes in the name to
     * represent a path hierarchy. For example, <code>/prod/databases/dbserver1</code>
     * could represent the secret for a server named <code>dbserver1</code> in the
     * folder <code>databases</code> in the folder <code>prod</code>. </p>
     */
    inline SecretListEntry& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The user-provided description of the secret.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The user-provided description of the secret.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The user-provided description of the secret.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The user-provided description of the secret.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The user-provided description of the secret.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The user-provided description of the secret.</p>
     */
    inline SecretListEntry& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The user-provided description of the secret.</p>
     */
    inline SecretListEntry& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The user-provided description of the secret.</p>
     */
    inline SecretListEntry& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ARN of the KMS key that Secrets Manager uses to encrypt the secret value.
     * If the secret is encrypted with the Amazon Web Services managed key
     * <code>aws/secretsmanager</code>, this field is omitted.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ARN of the KMS key that Secrets Manager uses to encrypt the secret value.
     * If the secret is encrypted with the Amazon Web Services managed key
     * <code>aws/secretsmanager</code>, this field is omitted.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ARN of the KMS key that Secrets Manager uses to encrypt the secret value.
     * If the secret is encrypted with the Amazon Web Services managed key
     * <code>aws/secretsmanager</code>, this field is omitted.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ARN of the KMS key that Secrets Manager uses to encrypt the secret value.
     * If the secret is encrypted with the Amazon Web Services managed key
     * <code>aws/secretsmanager</code>, this field is omitted.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ARN of the KMS key that Secrets Manager uses to encrypt the secret value.
     * If the secret is encrypted with the Amazon Web Services managed key
     * <code>aws/secretsmanager</code>, this field is omitted.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ARN of the KMS key that Secrets Manager uses to encrypt the secret value.
     * If the secret is encrypted with the Amazon Web Services managed key
     * <code>aws/secretsmanager</code>, this field is omitted.</p>
     */
    inline SecretListEntry& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ARN of the KMS key that Secrets Manager uses to encrypt the secret value.
     * If the secret is encrypted with the Amazon Web Services managed key
     * <code>aws/secretsmanager</code>, this field is omitted.</p>
     */
    inline SecretListEntry& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ARN of the KMS key that Secrets Manager uses to encrypt the secret value.
     * If the secret is encrypted with the Amazon Web Services managed key
     * <code>aws/secretsmanager</code>, this field is omitted.</p>
     */
    inline SecretListEntry& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Indicates whether automatic, scheduled rotation is enabled for this
     * secret.</p>
     */
    inline bool GetRotationEnabled() const{ return m_rotationEnabled; }

    /**
     * <p>Indicates whether automatic, scheduled rotation is enabled for this
     * secret.</p>
     */
    inline bool RotationEnabledHasBeenSet() const { return m_rotationEnabledHasBeenSet; }

    /**
     * <p>Indicates whether automatic, scheduled rotation is enabled for this
     * secret.</p>
     */
    inline void SetRotationEnabled(bool value) { m_rotationEnabledHasBeenSet = true; m_rotationEnabled = value; }

    /**
     * <p>Indicates whether automatic, scheduled rotation is enabled for this
     * secret.</p>
     */
    inline SecretListEntry& WithRotationEnabled(bool value) { SetRotationEnabled(value); return *this;}


    /**
     * <p>The ARN of an Amazon Web Services Lambda function invoked by Secrets Manager
     * to rotate and expire the secret either automatically per the schedule or
     * manually by a call to <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_RotateSecret.html">
     * <code>RotateSecret</code> </a>.</p>
     */
    inline const Aws::String& GetRotationLambdaARN() const{ return m_rotationLambdaARN; }

    /**
     * <p>The ARN of an Amazon Web Services Lambda function invoked by Secrets Manager
     * to rotate and expire the secret either automatically per the schedule or
     * manually by a call to <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_RotateSecret.html">
     * <code>RotateSecret</code> </a>.</p>
     */
    inline bool RotationLambdaARNHasBeenSet() const { return m_rotationLambdaARNHasBeenSet; }

    /**
     * <p>The ARN of an Amazon Web Services Lambda function invoked by Secrets Manager
     * to rotate and expire the secret either automatically per the schedule or
     * manually by a call to <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_RotateSecret.html">
     * <code>RotateSecret</code> </a>.</p>
     */
    inline void SetRotationLambdaARN(const Aws::String& value) { m_rotationLambdaARNHasBeenSet = true; m_rotationLambdaARN = value; }

    /**
     * <p>The ARN of an Amazon Web Services Lambda function invoked by Secrets Manager
     * to rotate and expire the secret either automatically per the schedule or
     * manually by a call to <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_RotateSecret.html">
     * <code>RotateSecret</code> </a>.</p>
     */
    inline void SetRotationLambdaARN(Aws::String&& value) { m_rotationLambdaARNHasBeenSet = true; m_rotationLambdaARN = std::move(value); }

    /**
     * <p>The ARN of an Amazon Web Services Lambda function invoked by Secrets Manager
     * to rotate and expire the secret either automatically per the schedule or
     * manually by a call to <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_RotateSecret.html">
     * <code>RotateSecret</code> </a>.</p>
     */
    inline void SetRotationLambdaARN(const char* value) { m_rotationLambdaARNHasBeenSet = true; m_rotationLambdaARN.assign(value); }

    /**
     * <p>The ARN of an Amazon Web Services Lambda function invoked by Secrets Manager
     * to rotate and expire the secret either automatically per the schedule or
     * manually by a call to <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_RotateSecret.html">
     * <code>RotateSecret</code> </a>.</p>
     */
    inline SecretListEntry& WithRotationLambdaARN(const Aws::String& value) { SetRotationLambdaARN(value); return *this;}

    /**
     * <p>The ARN of an Amazon Web Services Lambda function invoked by Secrets Manager
     * to rotate and expire the secret either automatically per the schedule or
     * manually by a call to <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_RotateSecret.html">
     * <code>RotateSecret</code> </a>.</p>
     */
    inline SecretListEntry& WithRotationLambdaARN(Aws::String&& value) { SetRotationLambdaARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of an Amazon Web Services Lambda function invoked by Secrets Manager
     * to rotate and expire the secret either automatically per the schedule or
     * manually by a call to <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_RotateSecret.html">
     * <code>RotateSecret</code> </a>.</p>
     */
    inline SecretListEntry& WithRotationLambdaARN(const char* value) { SetRotationLambdaARN(value); return *this;}


    /**
     * <p>A structure that defines the rotation configuration for the secret.</p>
     */
    inline const RotationRulesType& GetRotationRules() const{ return m_rotationRules; }

    /**
     * <p>A structure that defines the rotation configuration for the secret.</p>
     */
    inline bool RotationRulesHasBeenSet() const { return m_rotationRulesHasBeenSet; }

    /**
     * <p>A structure that defines the rotation configuration for the secret.</p>
     */
    inline void SetRotationRules(const RotationRulesType& value) { m_rotationRulesHasBeenSet = true; m_rotationRules = value; }

    /**
     * <p>A structure that defines the rotation configuration for the secret.</p>
     */
    inline void SetRotationRules(RotationRulesType&& value) { m_rotationRulesHasBeenSet = true; m_rotationRules = std::move(value); }

    /**
     * <p>A structure that defines the rotation configuration for the secret.</p>
     */
    inline SecretListEntry& WithRotationRules(const RotationRulesType& value) { SetRotationRules(value); return *this;}

    /**
     * <p>A structure that defines the rotation configuration for the secret.</p>
     */
    inline SecretListEntry& WithRotationRules(RotationRulesType&& value) { SetRotationRules(std::move(value)); return *this;}


    /**
     * <p>The most recent date and time that the Secrets Manager rotation process was
     * successfully completed. This value is null if the secret hasn't ever
     * rotated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRotatedDate() const{ return m_lastRotatedDate; }

    /**
     * <p>The most recent date and time that the Secrets Manager rotation process was
     * successfully completed. This value is null if the secret hasn't ever
     * rotated.</p>
     */
    inline bool LastRotatedDateHasBeenSet() const { return m_lastRotatedDateHasBeenSet; }

    /**
     * <p>The most recent date and time that the Secrets Manager rotation process was
     * successfully completed. This value is null if the secret hasn't ever
     * rotated.</p>
     */
    inline void SetLastRotatedDate(const Aws::Utils::DateTime& value) { m_lastRotatedDateHasBeenSet = true; m_lastRotatedDate = value; }

    /**
     * <p>The most recent date and time that the Secrets Manager rotation process was
     * successfully completed. This value is null if the secret hasn't ever
     * rotated.</p>
     */
    inline void SetLastRotatedDate(Aws::Utils::DateTime&& value) { m_lastRotatedDateHasBeenSet = true; m_lastRotatedDate = std::move(value); }

    /**
     * <p>The most recent date and time that the Secrets Manager rotation process was
     * successfully completed. This value is null if the secret hasn't ever
     * rotated.</p>
     */
    inline SecretListEntry& WithLastRotatedDate(const Aws::Utils::DateTime& value) { SetLastRotatedDate(value); return *this;}

    /**
     * <p>The most recent date and time that the Secrets Manager rotation process was
     * successfully completed. This value is null if the secret hasn't ever
     * rotated.</p>
     */
    inline SecretListEntry& WithLastRotatedDate(Aws::Utils::DateTime&& value) { SetLastRotatedDate(std::move(value)); return *this;}


    /**
     * <p>The last date and time that this secret was modified in any way.</p>
     */
    inline const Aws::Utils::DateTime& GetLastChangedDate() const{ return m_lastChangedDate; }

    /**
     * <p>The last date and time that this secret was modified in any way.</p>
     */
    inline bool LastChangedDateHasBeenSet() const { return m_lastChangedDateHasBeenSet; }

    /**
     * <p>The last date and time that this secret was modified in any way.</p>
     */
    inline void SetLastChangedDate(const Aws::Utils::DateTime& value) { m_lastChangedDateHasBeenSet = true; m_lastChangedDate = value; }

    /**
     * <p>The last date and time that this secret was modified in any way.</p>
     */
    inline void SetLastChangedDate(Aws::Utils::DateTime&& value) { m_lastChangedDateHasBeenSet = true; m_lastChangedDate = std::move(value); }

    /**
     * <p>The last date and time that this secret was modified in any way.</p>
     */
    inline SecretListEntry& WithLastChangedDate(const Aws::Utils::DateTime& value) { SetLastChangedDate(value); return *this;}

    /**
     * <p>The last date and time that this secret was modified in any way.</p>
     */
    inline SecretListEntry& WithLastChangedDate(Aws::Utils::DateTime&& value) { SetLastChangedDate(std::move(value)); return *this;}


    /**
     * <p>The date that the secret was last accessed in the Region. This field is
     * omitted if the secret has never been retrieved in the Region.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessedDate() const{ return m_lastAccessedDate; }

    /**
     * <p>The date that the secret was last accessed in the Region. This field is
     * omitted if the secret has never been retrieved in the Region.</p>
     */
    inline bool LastAccessedDateHasBeenSet() const { return m_lastAccessedDateHasBeenSet; }

    /**
     * <p>The date that the secret was last accessed in the Region. This field is
     * omitted if the secret has never been retrieved in the Region.</p>
     */
    inline void SetLastAccessedDate(const Aws::Utils::DateTime& value) { m_lastAccessedDateHasBeenSet = true; m_lastAccessedDate = value; }

    /**
     * <p>The date that the secret was last accessed in the Region. This field is
     * omitted if the secret has never been retrieved in the Region.</p>
     */
    inline void SetLastAccessedDate(Aws::Utils::DateTime&& value) { m_lastAccessedDateHasBeenSet = true; m_lastAccessedDate = std::move(value); }

    /**
     * <p>The date that the secret was last accessed in the Region. This field is
     * omitted if the secret has never been retrieved in the Region.</p>
     */
    inline SecretListEntry& WithLastAccessedDate(const Aws::Utils::DateTime& value) { SetLastAccessedDate(value); return *this;}

    /**
     * <p>The date that the secret was last accessed in the Region. This field is
     * omitted if the secret has never been retrieved in the Region.</p>
     */
    inline SecretListEntry& WithLastAccessedDate(Aws::Utils::DateTime&& value) { SetLastAccessedDate(std::move(value)); return *this;}


    /**
     * <p>The date and time the deletion of the secret occurred. Not present on active
     * secrets. The secret can be recovered until the number of days in the recovery
     * window has passed, as specified in the <code>RecoveryWindowInDays</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_DeleteSecret.html">
     * <code>DeleteSecret</code> </a> operation.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletedDate() const{ return m_deletedDate; }

    /**
     * <p>The date and time the deletion of the secret occurred. Not present on active
     * secrets. The secret can be recovered until the number of days in the recovery
     * window has passed, as specified in the <code>RecoveryWindowInDays</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_DeleteSecret.html">
     * <code>DeleteSecret</code> </a> operation.</p>
     */
    inline bool DeletedDateHasBeenSet() const { return m_deletedDateHasBeenSet; }

    /**
     * <p>The date and time the deletion of the secret occurred. Not present on active
     * secrets. The secret can be recovered until the number of days in the recovery
     * window has passed, as specified in the <code>RecoveryWindowInDays</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_DeleteSecret.html">
     * <code>DeleteSecret</code> </a> operation.</p>
     */
    inline void SetDeletedDate(const Aws::Utils::DateTime& value) { m_deletedDateHasBeenSet = true; m_deletedDate = value; }

    /**
     * <p>The date and time the deletion of the secret occurred. Not present on active
     * secrets. The secret can be recovered until the number of days in the recovery
     * window has passed, as specified in the <code>RecoveryWindowInDays</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_DeleteSecret.html">
     * <code>DeleteSecret</code> </a> operation.</p>
     */
    inline void SetDeletedDate(Aws::Utils::DateTime&& value) { m_deletedDateHasBeenSet = true; m_deletedDate = std::move(value); }

    /**
     * <p>The date and time the deletion of the secret occurred. Not present on active
     * secrets. The secret can be recovered until the number of days in the recovery
     * window has passed, as specified in the <code>RecoveryWindowInDays</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_DeleteSecret.html">
     * <code>DeleteSecret</code> </a> operation.</p>
     */
    inline SecretListEntry& WithDeletedDate(const Aws::Utils::DateTime& value) { SetDeletedDate(value); return *this;}

    /**
     * <p>The date and time the deletion of the secret occurred. Not present on active
     * secrets. The secret can be recovered until the number of days in the recovery
     * window has passed, as specified in the <code>RecoveryWindowInDays</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_DeleteSecret.html">
     * <code>DeleteSecret</code> </a> operation.</p>
     */
    inline SecretListEntry& WithDeletedDate(Aws::Utils::DateTime&& value) { SetDeletedDate(std::move(value)); return *this;}


    /**
     * <p>The next rotation is scheduled to occur on or before this date. If the secret
     * isn't configured for rotation, Secrets Manager returns null.</p>
     */
    inline const Aws::Utils::DateTime& GetNextRotationDate() const{ return m_nextRotationDate; }

    /**
     * <p>The next rotation is scheduled to occur on or before this date. If the secret
     * isn't configured for rotation, Secrets Manager returns null.</p>
     */
    inline bool NextRotationDateHasBeenSet() const { return m_nextRotationDateHasBeenSet; }

    /**
     * <p>The next rotation is scheduled to occur on or before this date. If the secret
     * isn't configured for rotation, Secrets Manager returns null.</p>
     */
    inline void SetNextRotationDate(const Aws::Utils::DateTime& value) { m_nextRotationDateHasBeenSet = true; m_nextRotationDate = value; }

    /**
     * <p>The next rotation is scheduled to occur on or before this date. If the secret
     * isn't configured for rotation, Secrets Manager returns null.</p>
     */
    inline void SetNextRotationDate(Aws::Utils::DateTime&& value) { m_nextRotationDateHasBeenSet = true; m_nextRotationDate = std::move(value); }

    /**
     * <p>The next rotation is scheduled to occur on or before this date. If the secret
     * isn't configured for rotation, Secrets Manager returns null.</p>
     */
    inline SecretListEntry& WithNextRotationDate(const Aws::Utils::DateTime& value) { SetNextRotationDate(value); return *this;}

    /**
     * <p>The next rotation is scheduled to occur on or before this date. If the secret
     * isn't configured for rotation, Secrets Manager returns null.</p>
     */
    inline SecretListEntry& WithNextRotationDate(Aws::Utils::DateTime&& value) { SetNextRotationDate(std::move(value)); return *this;}


    /**
     * <p>The list of user-defined tags associated with the secret. To add tags to a
     * secret, use <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_TagResource.html">
     * <code>TagResource</code> </a>. To remove tags, use <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_UntagResource.html">
     * <code>UntagResource</code> </a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of user-defined tags associated with the secret. To add tags to a
     * secret, use <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_TagResource.html">
     * <code>TagResource</code> </a>. To remove tags, use <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_UntagResource.html">
     * <code>UntagResource</code> </a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of user-defined tags associated with the secret. To add tags to a
     * secret, use <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_TagResource.html">
     * <code>TagResource</code> </a>. To remove tags, use <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_UntagResource.html">
     * <code>UntagResource</code> </a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of user-defined tags associated with the secret. To add tags to a
     * secret, use <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_TagResource.html">
     * <code>TagResource</code> </a>. To remove tags, use <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_UntagResource.html">
     * <code>UntagResource</code> </a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of user-defined tags associated with the secret. To add tags to a
     * secret, use <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_TagResource.html">
     * <code>TagResource</code> </a>. To remove tags, use <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_UntagResource.html">
     * <code>UntagResource</code> </a>.</p>
     */
    inline SecretListEntry& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of user-defined tags associated with the secret. To add tags to a
     * secret, use <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_TagResource.html">
     * <code>TagResource</code> </a>. To remove tags, use <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_UntagResource.html">
     * <code>UntagResource</code> </a>.</p>
     */
    inline SecretListEntry& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of user-defined tags associated with the secret. To add tags to a
     * secret, use <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_TagResource.html">
     * <code>TagResource</code> </a>. To remove tags, use <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_UntagResource.html">
     * <code>UntagResource</code> </a>.</p>
     */
    inline SecretListEntry& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The list of user-defined tags associated with the secret. To add tags to a
     * secret, use <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_TagResource.html">
     * <code>TagResource</code> </a>. To remove tags, use <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_UntagResource.html">
     * <code>UntagResource</code> </a>.</p>
     */
    inline SecretListEntry& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of all of the currently assigned <code>SecretVersionStage</code>
     * staging labels and the <code>SecretVersionId</code> attached to each one.
     * Staging labels are used to keep track of the different versions during the
     * rotation process.</p>  <p>A version that does not have any
     * <code>SecretVersionStage</code> is considered deprecated and subject to
     * deletion. Such versions are not included in this list.</p> 
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetSecretVersionsToStages() const{ return m_secretVersionsToStages; }

    /**
     * <p>A list of all of the currently assigned <code>SecretVersionStage</code>
     * staging labels and the <code>SecretVersionId</code> attached to each one.
     * Staging labels are used to keep track of the different versions during the
     * rotation process.</p>  <p>A version that does not have any
     * <code>SecretVersionStage</code> is considered deprecated and subject to
     * deletion. Such versions are not included in this list.</p> 
     */
    inline bool SecretVersionsToStagesHasBeenSet() const { return m_secretVersionsToStagesHasBeenSet; }

    /**
     * <p>A list of all of the currently assigned <code>SecretVersionStage</code>
     * staging labels and the <code>SecretVersionId</code> attached to each one.
     * Staging labels are used to keep track of the different versions during the
     * rotation process.</p>  <p>A version that does not have any
     * <code>SecretVersionStage</code> is considered deprecated and subject to
     * deletion. Such versions are not included in this list.</p> 
     */
    inline void SetSecretVersionsToStages(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_secretVersionsToStagesHasBeenSet = true; m_secretVersionsToStages = value; }

    /**
     * <p>A list of all of the currently assigned <code>SecretVersionStage</code>
     * staging labels and the <code>SecretVersionId</code> attached to each one.
     * Staging labels are used to keep track of the different versions during the
     * rotation process.</p>  <p>A version that does not have any
     * <code>SecretVersionStage</code> is considered deprecated and subject to
     * deletion. Such versions are not included in this list.</p> 
     */
    inline void SetSecretVersionsToStages(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_secretVersionsToStagesHasBeenSet = true; m_secretVersionsToStages = std::move(value); }

    /**
     * <p>A list of all of the currently assigned <code>SecretVersionStage</code>
     * staging labels and the <code>SecretVersionId</code> attached to each one.
     * Staging labels are used to keep track of the different versions during the
     * rotation process.</p>  <p>A version that does not have any
     * <code>SecretVersionStage</code> is considered deprecated and subject to
     * deletion. Such versions are not included in this list.</p> 
     */
    inline SecretListEntry& WithSecretVersionsToStages(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetSecretVersionsToStages(value); return *this;}

    /**
     * <p>A list of all of the currently assigned <code>SecretVersionStage</code>
     * staging labels and the <code>SecretVersionId</code> attached to each one.
     * Staging labels are used to keep track of the different versions during the
     * rotation process.</p>  <p>A version that does not have any
     * <code>SecretVersionStage</code> is considered deprecated and subject to
     * deletion. Such versions are not included in this list.</p> 
     */
    inline SecretListEntry& WithSecretVersionsToStages(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetSecretVersionsToStages(std::move(value)); return *this;}

    /**
     * <p>A list of all of the currently assigned <code>SecretVersionStage</code>
     * staging labels and the <code>SecretVersionId</code> attached to each one.
     * Staging labels are used to keep track of the different versions during the
     * rotation process.</p>  <p>A version that does not have any
     * <code>SecretVersionStage</code> is considered deprecated and subject to
     * deletion. Such versions are not included in this list.</p> 
     */
    inline SecretListEntry& AddSecretVersionsToStages(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_secretVersionsToStagesHasBeenSet = true; m_secretVersionsToStages.emplace(key, value); return *this; }

    /**
     * <p>A list of all of the currently assigned <code>SecretVersionStage</code>
     * staging labels and the <code>SecretVersionId</code> attached to each one.
     * Staging labels are used to keep track of the different versions during the
     * rotation process.</p>  <p>A version that does not have any
     * <code>SecretVersionStage</code> is considered deprecated and subject to
     * deletion. Such versions are not included in this list.</p> 
     */
    inline SecretListEntry& AddSecretVersionsToStages(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_secretVersionsToStagesHasBeenSet = true; m_secretVersionsToStages.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of all of the currently assigned <code>SecretVersionStage</code>
     * staging labels and the <code>SecretVersionId</code> attached to each one.
     * Staging labels are used to keep track of the different versions during the
     * rotation process.</p>  <p>A version that does not have any
     * <code>SecretVersionStage</code> is considered deprecated and subject to
     * deletion. Such versions are not included in this list.</p> 
     */
    inline SecretListEntry& AddSecretVersionsToStages(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_secretVersionsToStagesHasBeenSet = true; m_secretVersionsToStages.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of all of the currently assigned <code>SecretVersionStage</code>
     * staging labels and the <code>SecretVersionId</code> attached to each one.
     * Staging labels are used to keep track of the different versions during the
     * rotation process.</p>  <p>A version that does not have any
     * <code>SecretVersionStage</code> is considered deprecated and subject to
     * deletion. Such versions are not included in this list.</p> 
     */
    inline SecretListEntry& AddSecretVersionsToStages(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_secretVersionsToStagesHasBeenSet = true; m_secretVersionsToStages.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of all of the currently assigned <code>SecretVersionStage</code>
     * staging labels and the <code>SecretVersionId</code> attached to each one.
     * Staging labels are used to keep track of the different versions during the
     * rotation process.</p>  <p>A version that does not have any
     * <code>SecretVersionStage</code> is considered deprecated and subject to
     * deletion. Such versions are not included in this list.</p> 
     */
    inline SecretListEntry& AddSecretVersionsToStages(const char* key, Aws::Vector<Aws::String>&& value) { m_secretVersionsToStagesHasBeenSet = true; m_secretVersionsToStages.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of all of the currently assigned <code>SecretVersionStage</code>
     * staging labels and the <code>SecretVersionId</code> attached to each one.
     * Staging labels are used to keep track of the different versions during the
     * rotation process.</p>  <p>A version that does not have any
     * <code>SecretVersionStage</code> is considered deprecated and subject to
     * deletion. Such versions are not included in this list.</p> 
     */
    inline SecretListEntry& AddSecretVersionsToStages(const char* key, const Aws::Vector<Aws::String>& value) { m_secretVersionsToStagesHasBeenSet = true; m_secretVersionsToStages.emplace(key, value); return *this; }


    /**
     * <p>Returns the name of the service that created the secret.</p>
     */
    inline const Aws::String& GetOwningService() const{ return m_owningService; }

    /**
     * <p>Returns the name of the service that created the secret.</p>
     */
    inline bool OwningServiceHasBeenSet() const { return m_owningServiceHasBeenSet; }

    /**
     * <p>Returns the name of the service that created the secret.</p>
     */
    inline void SetOwningService(const Aws::String& value) { m_owningServiceHasBeenSet = true; m_owningService = value; }

    /**
     * <p>Returns the name of the service that created the secret.</p>
     */
    inline void SetOwningService(Aws::String&& value) { m_owningServiceHasBeenSet = true; m_owningService = std::move(value); }

    /**
     * <p>Returns the name of the service that created the secret.</p>
     */
    inline void SetOwningService(const char* value) { m_owningServiceHasBeenSet = true; m_owningService.assign(value); }

    /**
     * <p>Returns the name of the service that created the secret.</p>
     */
    inline SecretListEntry& WithOwningService(const Aws::String& value) { SetOwningService(value); return *this;}

    /**
     * <p>Returns the name of the service that created the secret.</p>
     */
    inline SecretListEntry& WithOwningService(Aws::String&& value) { SetOwningService(std::move(value)); return *this;}

    /**
     * <p>Returns the name of the service that created the secret.</p>
     */
    inline SecretListEntry& WithOwningService(const char* value) { SetOwningService(value); return *this;}


    /**
     * <p>The date and time when a secret was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date and time when a secret was created.</p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>The date and time when a secret was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The date and time when a secret was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>The date and time when a secret was created.</p>
     */
    inline SecretListEntry& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date and time when a secret was created.</p>
     */
    inline SecretListEntry& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The Region where Secrets Manager originated the secret.</p>
     */
    inline const Aws::String& GetPrimaryRegion() const{ return m_primaryRegion; }

    /**
     * <p>The Region where Secrets Manager originated the secret.</p>
     */
    inline bool PrimaryRegionHasBeenSet() const { return m_primaryRegionHasBeenSet; }

    /**
     * <p>The Region where Secrets Manager originated the secret.</p>
     */
    inline void SetPrimaryRegion(const Aws::String& value) { m_primaryRegionHasBeenSet = true; m_primaryRegion = value; }

    /**
     * <p>The Region where Secrets Manager originated the secret.</p>
     */
    inline void SetPrimaryRegion(Aws::String&& value) { m_primaryRegionHasBeenSet = true; m_primaryRegion = std::move(value); }

    /**
     * <p>The Region where Secrets Manager originated the secret.</p>
     */
    inline void SetPrimaryRegion(const char* value) { m_primaryRegionHasBeenSet = true; m_primaryRegion.assign(value); }

    /**
     * <p>The Region where Secrets Manager originated the secret.</p>
     */
    inline SecretListEntry& WithPrimaryRegion(const Aws::String& value) { SetPrimaryRegion(value); return *this;}

    /**
     * <p>The Region where Secrets Manager originated the secret.</p>
     */
    inline SecretListEntry& WithPrimaryRegion(Aws::String&& value) { SetPrimaryRegion(std::move(value)); return *this;}

    /**
     * <p>The Region where Secrets Manager originated the secret.</p>
     */
    inline SecretListEntry& WithPrimaryRegion(const char* value) { SetPrimaryRegion(value); return *this;}

  private:

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_rotationEnabled;
    bool m_rotationEnabledHasBeenSet = false;

    Aws::String m_rotationLambdaARN;
    bool m_rotationLambdaARNHasBeenSet = false;

    RotationRulesType m_rotationRules;
    bool m_rotationRulesHasBeenSet = false;

    Aws::Utils::DateTime m_lastRotatedDate;
    bool m_lastRotatedDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastChangedDate;
    bool m_lastChangedDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastAccessedDate;
    bool m_lastAccessedDateHasBeenSet = false;

    Aws::Utils::DateTime m_deletedDate;
    bool m_deletedDateHasBeenSet = false;

    Aws::Utils::DateTime m_nextRotationDate;
    bool m_nextRotationDateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_secretVersionsToStages;
    bool m_secretVersionsToStagesHasBeenSet = false;

    Aws::String m_owningService;
    bool m_owningServiceHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_primaryRegion;
    bool m_primaryRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
