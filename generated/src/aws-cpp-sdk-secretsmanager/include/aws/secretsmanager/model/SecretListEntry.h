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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }
    inline SecretListEntry& WithARN(const Aws::String& value) { SetARN(value); return *this;}
    inline SecretListEntry& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}
    inline SecretListEntry& WithARN(const char* value) { SetARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name of the secret. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SecretListEntry& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SecretListEntry& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SecretListEntry& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-provided description of the secret.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline SecretListEntry& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline SecretListEntry& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline SecretListEntry& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the KMS key that Secrets Manager uses to encrypt the secret value.
     * If the secret is encrypted with the Amazon Web Services managed key
     * <code>aws/secretsmanager</code>, this field is omitted.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline SecretListEntry& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline SecretListEntry& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline SecretListEntry& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether automatic, scheduled rotation is enabled for this
     * secret.</p>
     */
    inline bool GetRotationEnabled() const{ return m_rotationEnabled; }
    inline bool RotationEnabledHasBeenSet() const { return m_rotationEnabledHasBeenSet; }
    inline void SetRotationEnabled(bool value) { m_rotationEnabledHasBeenSet = true; m_rotationEnabled = value; }
    inline SecretListEntry& WithRotationEnabled(bool value) { SetRotationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of an Amazon Web Services Lambda function invoked by Secrets Manager
     * to rotate and expire the secret either automatically per the schedule or
     * manually by a call to <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_RotateSecret.html">
     * <code>RotateSecret</code> </a>.</p>
     */
    inline const Aws::String& GetRotationLambdaARN() const{ return m_rotationLambdaARN; }
    inline bool RotationLambdaARNHasBeenSet() const { return m_rotationLambdaARNHasBeenSet; }
    inline void SetRotationLambdaARN(const Aws::String& value) { m_rotationLambdaARNHasBeenSet = true; m_rotationLambdaARN = value; }
    inline void SetRotationLambdaARN(Aws::String&& value) { m_rotationLambdaARNHasBeenSet = true; m_rotationLambdaARN = std::move(value); }
    inline void SetRotationLambdaARN(const char* value) { m_rotationLambdaARNHasBeenSet = true; m_rotationLambdaARN.assign(value); }
    inline SecretListEntry& WithRotationLambdaARN(const Aws::String& value) { SetRotationLambdaARN(value); return *this;}
    inline SecretListEntry& WithRotationLambdaARN(Aws::String&& value) { SetRotationLambdaARN(std::move(value)); return *this;}
    inline SecretListEntry& WithRotationLambdaARN(const char* value) { SetRotationLambdaARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that defines the rotation configuration for the secret.</p>
     */
    inline const RotationRulesType& GetRotationRules() const{ return m_rotationRules; }
    inline bool RotationRulesHasBeenSet() const { return m_rotationRulesHasBeenSet; }
    inline void SetRotationRules(const RotationRulesType& value) { m_rotationRulesHasBeenSet = true; m_rotationRules = value; }
    inline void SetRotationRules(RotationRulesType&& value) { m_rotationRulesHasBeenSet = true; m_rotationRules = std::move(value); }
    inline SecretListEntry& WithRotationRules(const RotationRulesType& value) { SetRotationRules(value); return *this;}
    inline SecretListEntry& WithRotationRules(RotationRulesType&& value) { SetRotationRules(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent date and time that the Secrets Manager rotation process was
     * successfully completed. This value is null if the secret hasn't ever
     * rotated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRotatedDate() const{ return m_lastRotatedDate; }
    inline bool LastRotatedDateHasBeenSet() const { return m_lastRotatedDateHasBeenSet; }
    inline void SetLastRotatedDate(const Aws::Utils::DateTime& value) { m_lastRotatedDateHasBeenSet = true; m_lastRotatedDate = value; }
    inline void SetLastRotatedDate(Aws::Utils::DateTime&& value) { m_lastRotatedDateHasBeenSet = true; m_lastRotatedDate = std::move(value); }
    inline SecretListEntry& WithLastRotatedDate(const Aws::Utils::DateTime& value) { SetLastRotatedDate(value); return *this;}
    inline SecretListEntry& WithLastRotatedDate(Aws::Utils::DateTime&& value) { SetLastRotatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last date and time that this secret was modified in any way.</p>
     */
    inline const Aws::Utils::DateTime& GetLastChangedDate() const{ return m_lastChangedDate; }
    inline bool LastChangedDateHasBeenSet() const { return m_lastChangedDateHasBeenSet; }
    inline void SetLastChangedDate(const Aws::Utils::DateTime& value) { m_lastChangedDateHasBeenSet = true; m_lastChangedDate = value; }
    inline void SetLastChangedDate(Aws::Utils::DateTime&& value) { m_lastChangedDateHasBeenSet = true; m_lastChangedDate = std::move(value); }
    inline SecretListEntry& WithLastChangedDate(const Aws::Utils::DateTime& value) { SetLastChangedDate(value); return *this;}
    inline SecretListEntry& WithLastChangedDate(Aws::Utils::DateTime&& value) { SetLastChangedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the secret was last accessed in the Region. This field is
     * omitted if the secret has never been retrieved in the Region.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessedDate() const{ return m_lastAccessedDate; }
    inline bool LastAccessedDateHasBeenSet() const { return m_lastAccessedDateHasBeenSet; }
    inline void SetLastAccessedDate(const Aws::Utils::DateTime& value) { m_lastAccessedDateHasBeenSet = true; m_lastAccessedDate = value; }
    inline void SetLastAccessedDate(Aws::Utils::DateTime&& value) { m_lastAccessedDateHasBeenSet = true; m_lastAccessedDate = std::move(value); }
    inline SecretListEntry& WithLastAccessedDate(const Aws::Utils::DateTime& value) { SetLastAccessedDate(value); return *this;}
    inline SecretListEntry& WithLastAccessedDate(Aws::Utils::DateTime&& value) { SetLastAccessedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the deletion of the secret occurred. Not present on active
     * secrets. The secret can be recovered until the number of days in the recovery
     * window has passed, as specified in the <code>RecoveryWindowInDays</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_DeleteSecret.html">
     * <code>DeleteSecret</code> </a> operation.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletedDate() const{ return m_deletedDate; }
    inline bool DeletedDateHasBeenSet() const { return m_deletedDateHasBeenSet; }
    inline void SetDeletedDate(const Aws::Utils::DateTime& value) { m_deletedDateHasBeenSet = true; m_deletedDate = value; }
    inline void SetDeletedDate(Aws::Utils::DateTime&& value) { m_deletedDateHasBeenSet = true; m_deletedDate = std::move(value); }
    inline SecretListEntry& WithDeletedDate(const Aws::Utils::DateTime& value) { SetDeletedDate(value); return *this;}
    inline SecretListEntry& WithDeletedDate(Aws::Utils::DateTime&& value) { SetDeletedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next rotation is scheduled to occur on or before this date. If the secret
     * isn't configured for rotation or rotation has been disabled, Secrets Manager
     * returns null.</p>
     */
    inline const Aws::Utils::DateTime& GetNextRotationDate() const{ return m_nextRotationDate; }
    inline bool NextRotationDateHasBeenSet() const { return m_nextRotationDateHasBeenSet; }
    inline void SetNextRotationDate(const Aws::Utils::DateTime& value) { m_nextRotationDateHasBeenSet = true; m_nextRotationDate = value; }
    inline void SetNextRotationDate(Aws::Utils::DateTime&& value) { m_nextRotationDateHasBeenSet = true; m_nextRotationDate = std::move(value); }
    inline SecretListEntry& WithNextRotationDate(const Aws::Utils::DateTime& value) { SetNextRotationDate(value); return *this;}
    inline SecretListEntry& WithNextRotationDate(Aws::Utils::DateTime&& value) { SetNextRotationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of user-defined tags associated with the secret. To add tags to a
     * secret, use <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_TagResource.html">
     * <code>TagResource</code> </a>. To remove tags, use <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_UntagResource.html">
     * <code>UntagResource</code> </a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline SecretListEntry& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline SecretListEntry& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline SecretListEntry& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline SecretListEntry& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of all of the currently assigned <code>SecretVersionStage</code>
     * staging labels and the <code>SecretVersionId</code> attached to each one.
     * Staging labels are used to keep track of the different versions during the
     * rotation process.</p>  <p>A version that does not have any
     * <code>SecretVersionStage</code> is considered deprecated and subject to
     * deletion. Such versions are not included in this list.</p> 
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetSecretVersionsToStages() const{ return m_secretVersionsToStages; }
    inline bool SecretVersionsToStagesHasBeenSet() const { return m_secretVersionsToStagesHasBeenSet; }
    inline void SetSecretVersionsToStages(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_secretVersionsToStagesHasBeenSet = true; m_secretVersionsToStages = value; }
    inline void SetSecretVersionsToStages(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_secretVersionsToStagesHasBeenSet = true; m_secretVersionsToStages = std::move(value); }
    inline SecretListEntry& WithSecretVersionsToStages(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetSecretVersionsToStages(value); return *this;}
    inline SecretListEntry& WithSecretVersionsToStages(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetSecretVersionsToStages(std::move(value)); return *this;}
    inline SecretListEntry& AddSecretVersionsToStages(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_secretVersionsToStagesHasBeenSet = true; m_secretVersionsToStages.emplace(key, value); return *this; }
    inline SecretListEntry& AddSecretVersionsToStages(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_secretVersionsToStagesHasBeenSet = true; m_secretVersionsToStages.emplace(std::move(key), value); return *this; }
    inline SecretListEntry& AddSecretVersionsToStages(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_secretVersionsToStagesHasBeenSet = true; m_secretVersionsToStages.emplace(key, std::move(value)); return *this; }
    inline SecretListEntry& AddSecretVersionsToStages(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_secretVersionsToStagesHasBeenSet = true; m_secretVersionsToStages.emplace(std::move(key), std::move(value)); return *this; }
    inline SecretListEntry& AddSecretVersionsToStages(const char* key, Aws::Vector<Aws::String>&& value) { m_secretVersionsToStagesHasBeenSet = true; m_secretVersionsToStages.emplace(key, std::move(value)); return *this; }
    inline SecretListEntry& AddSecretVersionsToStages(const char* key, const Aws::Vector<Aws::String>& value) { m_secretVersionsToStagesHasBeenSet = true; m_secretVersionsToStages.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns the name of the service that created the secret.</p>
     */
    inline const Aws::String& GetOwningService() const{ return m_owningService; }
    inline bool OwningServiceHasBeenSet() const { return m_owningServiceHasBeenSet; }
    inline void SetOwningService(const Aws::String& value) { m_owningServiceHasBeenSet = true; m_owningService = value; }
    inline void SetOwningService(Aws::String&& value) { m_owningServiceHasBeenSet = true; m_owningService = std::move(value); }
    inline void SetOwningService(const char* value) { m_owningServiceHasBeenSet = true; m_owningService.assign(value); }
    inline SecretListEntry& WithOwningService(const Aws::String& value) { SetOwningService(value); return *this;}
    inline SecretListEntry& WithOwningService(Aws::String&& value) { SetOwningService(std::move(value)); return *this;}
    inline SecretListEntry& WithOwningService(const char* value) { SetOwningService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when a secret was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }
    inline SecretListEntry& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline SecretListEntry& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region where Secrets Manager originated the secret.</p>
     */
    inline const Aws::String& GetPrimaryRegion() const{ return m_primaryRegion; }
    inline bool PrimaryRegionHasBeenSet() const { return m_primaryRegionHasBeenSet; }
    inline void SetPrimaryRegion(const Aws::String& value) { m_primaryRegionHasBeenSet = true; m_primaryRegion = value; }
    inline void SetPrimaryRegion(Aws::String&& value) { m_primaryRegionHasBeenSet = true; m_primaryRegion = std::move(value); }
    inline void SetPrimaryRegion(const char* value) { m_primaryRegionHasBeenSet = true; m_primaryRegion.assign(value); }
    inline SecretListEntry& WithPrimaryRegion(const Aws::String& value) { SetPrimaryRegion(value); return *this;}
    inline SecretListEntry& WithPrimaryRegion(Aws::String&& value) { SetPrimaryRegion(std::move(value)); return *this;}
    inline SecretListEntry& WithPrimaryRegion(const char* value) { SetPrimaryRegion(value); return *this;}
    ///@}
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
