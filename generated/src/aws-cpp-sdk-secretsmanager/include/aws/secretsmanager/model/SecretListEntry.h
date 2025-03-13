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
    AWS_SECRETSMANAGER_API SecretListEntry() = default;
    AWS_SECRETSMANAGER_API SecretListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECRETSMANAGER_API SecretListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECRETSMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    SecretListEntry& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name of the secret. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SecretListEntry& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-provided description of the secret.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    SecretListEntry& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the KMS key that Secrets Manager uses to encrypt the secret value.
     * If the secret is encrypted with the Amazon Web Services managed key
     * <code>aws/secretsmanager</code>, this field is omitted.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    SecretListEntry& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether automatic, scheduled rotation is enabled for this
     * secret.</p>
     */
    inline bool GetRotationEnabled() const { return m_rotationEnabled; }
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
    inline const Aws::String& GetRotationLambdaARN() const { return m_rotationLambdaARN; }
    inline bool RotationLambdaARNHasBeenSet() const { return m_rotationLambdaARNHasBeenSet; }
    template<typename RotationLambdaARNT = Aws::String>
    void SetRotationLambdaARN(RotationLambdaARNT&& value) { m_rotationLambdaARNHasBeenSet = true; m_rotationLambdaARN = std::forward<RotationLambdaARNT>(value); }
    template<typename RotationLambdaARNT = Aws::String>
    SecretListEntry& WithRotationLambdaARN(RotationLambdaARNT&& value) { SetRotationLambdaARN(std::forward<RotationLambdaARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that defines the rotation configuration for the secret.</p>
     */
    inline const RotationRulesType& GetRotationRules() const { return m_rotationRules; }
    inline bool RotationRulesHasBeenSet() const { return m_rotationRulesHasBeenSet; }
    template<typename RotationRulesT = RotationRulesType>
    void SetRotationRules(RotationRulesT&& value) { m_rotationRulesHasBeenSet = true; m_rotationRules = std::forward<RotationRulesT>(value); }
    template<typename RotationRulesT = RotationRulesType>
    SecretListEntry& WithRotationRules(RotationRulesT&& value) { SetRotationRules(std::forward<RotationRulesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent date and time that the Secrets Manager rotation process was
     * successfully completed. This value is null if the secret hasn't ever
     * rotated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRotatedDate() const { return m_lastRotatedDate; }
    inline bool LastRotatedDateHasBeenSet() const { return m_lastRotatedDateHasBeenSet; }
    template<typename LastRotatedDateT = Aws::Utils::DateTime>
    void SetLastRotatedDate(LastRotatedDateT&& value) { m_lastRotatedDateHasBeenSet = true; m_lastRotatedDate = std::forward<LastRotatedDateT>(value); }
    template<typename LastRotatedDateT = Aws::Utils::DateTime>
    SecretListEntry& WithLastRotatedDate(LastRotatedDateT&& value) { SetLastRotatedDate(std::forward<LastRotatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last date and time that this secret was modified in any way.</p>
     */
    inline const Aws::Utils::DateTime& GetLastChangedDate() const { return m_lastChangedDate; }
    inline bool LastChangedDateHasBeenSet() const { return m_lastChangedDateHasBeenSet; }
    template<typename LastChangedDateT = Aws::Utils::DateTime>
    void SetLastChangedDate(LastChangedDateT&& value) { m_lastChangedDateHasBeenSet = true; m_lastChangedDate = std::forward<LastChangedDateT>(value); }
    template<typename LastChangedDateT = Aws::Utils::DateTime>
    SecretListEntry& WithLastChangedDate(LastChangedDateT&& value) { SetLastChangedDate(std::forward<LastChangedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the secret was last accessed in the Region. This field is
     * omitted if the secret has never been retrieved in the Region.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessedDate() const { return m_lastAccessedDate; }
    inline bool LastAccessedDateHasBeenSet() const { return m_lastAccessedDateHasBeenSet; }
    template<typename LastAccessedDateT = Aws::Utils::DateTime>
    void SetLastAccessedDate(LastAccessedDateT&& value) { m_lastAccessedDateHasBeenSet = true; m_lastAccessedDate = std::forward<LastAccessedDateT>(value); }
    template<typename LastAccessedDateT = Aws::Utils::DateTime>
    SecretListEntry& WithLastAccessedDate(LastAccessedDateT&& value) { SetLastAccessedDate(std::forward<LastAccessedDateT>(value)); return *this;}
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
    inline const Aws::Utils::DateTime& GetDeletedDate() const { return m_deletedDate; }
    inline bool DeletedDateHasBeenSet() const { return m_deletedDateHasBeenSet; }
    template<typename DeletedDateT = Aws::Utils::DateTime>
    void SetDeletedDate(DeletedDateT&& value) { m_deletedDateHasBeenSet = true; m_deletedDate = std::forward<DeletedDateT>(value); }
    template<typename DeletedDateT = Aws::Utils::DateTime>
    SecretListEntry& WithDeletedDate(DeletedDateT&& value) { SetDeletedDate(std::forward<DeletedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next rotation is scheduled to occur on or before this date. If the secret
     * isn't configured for rotation or rotation has been disabled, Secrets Manager
     * returns null.</p>
     */
    inline const Aws::Utils::DateTime& GetNextRotationDate() const { return m_nextRotationDate; }
    inline bool NextRotationDateHasBeenSet() const { return m_nextRotationDateHasBeenSet; }
    template<typename NextRotationDateT = Aws::Utils::DateTime>
    void SetNextRotationDate(NextRotationDateT&& value) { m_nextRotationDateHasBeenSet = true; m_nextRotationDate = std::forward<NextRotationDateT>(value); }
    template<typename NextRotationDateT = Aws::Utils::DateTime>
    SecretListEntry& WithNextRotationDate(NextRotationDateT&& value) { SetNextRotationDate(std::forward<NextRotationDateT>(value)); return *this;}
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
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    SecretListEntry& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    SecretListEntry& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetSecretVersionsToStages() const { return m_secretVersionsToStages; }
    inline bool SecretVersionsToStagesHasBeenSet() const { return m_secretVersionsToStagesHasBeenSet; }
    template<typename SecretVersionsToStagesT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetSecretVersionsToStages(SecretVersionsToStagesT&& value) { m_secretVersionsToStagesHasBeenSet = true; m_secretVersionsToStages = std::forward<SecretVersionsToStagesT>(value); }
    template<typename SecretVersionsToStagesT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    SecretListEntry& WithSecretVersionsToStages(SecretVersionsToStagesT&& value) { SetSecretVersionsToStages(std::forward<SecretVersionsToStagesT>(value)); return *this;}
    template<typename SecretVersionsToStagesKeyT = Aws::String, typename SecretVersionsToStagesValueT = Aws::Vector<Aws::String>>
    SecretListEntry& AddSecretVersionsToStages(SecretVersionsToStagesKeyT&& key, SecretVersionsToStagesValueT&& value) {
      m_secretVersionsToStagesHasBeenSet = true; m_secretVersionsToStages.emplace(std::forward<SecretVersionsToStagesKeyT>(key), std::forward<SecretVersionsToStagesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Returns the name of the service that created the secret.</p>
     */
    inline const Aws::String& GetOwningService() const { return m_owningService; }
    inline bool OwningServiceHasBeenSet() const { return m_owningServiceHasBeenSet; }
    template<typename OwningServiceT = Aws::String>
    void SetOwningService(OwningServiceT&& value) { m_owningServiceHasBeenSet = true; m_owningService = std::forward<OwningServiceT>(value); }
    template<typename OwningServiceT = Aws::String>
    SecretListEntry& WithOwningService(OwningServiceT&& value) { SetOwningService(std::forward<OwningServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when a secret was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    SecretListEntry& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region where Secrets Manager originated the secret.</p>
     */
    inline const Aws::String& GetPrimaryRegion() const { return m_primaryRegion; }
    inline bool PrimaryRegionHasBeenSet() const { return m_primaryRegionHasBeenSet; }
    template<typename PrimaryRegionT = Aws::String>
    void SetPrimaryRegion(PrimaryRegionT&& value) { m_primaryRegionHasBeenSet = true; m_primaryRegion = std::forward<PrimaryRegionT>(value); }
    template<typename PrimaryRegionT = Aws::String>
    SecretListEntry& WithPrimaryRegion(PrimaryRegionT&& value) { SetPrimaryRegion(std::forward<PrimaryRegionT>(value)); return *this;}
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

    bool m_rotationEnabled{false};
    bool m_rotationEnabledHasBeenSet = false;

    Aws::String m_rotationLambdaARN;
    bool m_rotationLambdaARNHasBeenSet = false;

    RotationRulesType m_rotationRules;
    bool m_rotationRulesHasBeenSet = false;

    Aws::Utils::DateTime m_lastRotatedDate{};
    bool m_lastRotatedDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastChangedDate{};
    bool m_lastChangedDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastAccessedDate{};
    bool m_lastAccessedDateHasBeenSet = false;

    Aws::Utils::DateTime m_deletedDate{};
    bool m_deletedDateHasBeenSet = false;

    Aws::Utils::DateTime m_nextRotationDate{};
    bool m_nextRotationDateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_secretVersionsToStages;
    bool m_secretVersionsToStagesHasBeenSet = false;

    Aws::String m_owningService;
    bool m_owningServiceHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    Aws::String m_primaryRegion;
    bool m_primaryRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
