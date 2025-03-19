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
    AWS_SECRETSMANAGER_API DescribeSecretResult() = default;
    AWS_SECRETSMANAGER_API DescribeSecretResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECRETSMANAGER_API DescribeSecretResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the secret.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    DescribeSecretResult& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the secret.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeSecretResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the secret.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeSecretResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key ID or alias ARN of the KMS key that Secrets Manager uses to encrypt
     * the secret value. If the secret is encrypted with the Amazon Web Services
     * managed key <code>aws/secretsmanager</code>, this field is omitted. Secrets
     * created using the console use an KMS key ID.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    DescribeSecretResult& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether automatic rotation is turned on for this secret. If the
     * secret has never been configured for rotation, Secrets Manager returns null.</p>
     * <p>To turn on rotation, use <a>RotateSecret</a>. To turn off rotation, use
     * <a>CancelRotateSecret</a>.</p>
     */
    inline bool GetRotationEnabled() const { return m_rotationEnabled; }
    inline void SetRotationEnabled(bool value) { m_rotationEnabledHasBeenSet = true; m_rotationEnabled = value; }
    inline DescribeSecretResult& WithRotationEnabled(bool value) { SetRotationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Lambda function that Secrets Manager invokes to rotate the
     * secret. </p>
     */
    inline const Aws::String& GetRotationLambdaARN() const { return m_rotationLambdaARN; }
    template<typename RotationLambdaARNT = Aws::String>
    void SetRotationLambdaARN(RotationLambdaARNT&& value) { m_rotationLambdaARNHasBeenSet = true; m_rotationLambdaARN = std::forward<RotationLambdaARNT>(value); }
    template<typename RotationLambdaARNT = Aws::String>
    DescribeSecretResult& WithRotationLambdaARN(RotationLambdaARNT&& value) { SetRotationLambdaARN(std::forward<RotationLambdaARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rotation schedule and Lambda function for this secret. If the secret
     * previously had rotation turned on, but it is now turned off, this field shows
     * the previous rotation schedule and rotation function. If the secret never had
     * rotation turned on, this field is omitted.</p>
     */
    inline const RotationRulesType& GetRotationRules() const { return m_rotationRules; }
    template<typename RotationRulesT = RotationRulesType>
    void SetRotationRules(RotationRulesT&& value) { m_rotationRulesHasBeenSet = true; m_rotationRules = std::forward<RotationRulesT>(value); }
    template<typename RotationRulesT = RotationRulesType>
    DescribeSecretResult& WithRotationRules(RotationRulesT&& value) { SetRotationRules(std::forward<RotationRulesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last date and time that Secrets Manager rotated the secret. If the secret
     * isn't configured for rotation or rotation has been disabled, Secrets Manager
     * returns null.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRotatedDate() const { return m_lastRotatedDate; }
    template<typename LastRotatedDateT = Aws::Utils::DateTime>
    void SetLastRotatedDate(LastRotatedDateT&& value) { m_lastRotatedDateHasBeenSet = true; m_lastRotatedDate = std::forward<LastRotatedDateT>(value); }
    template<typename LastRotatedDateT = Aws::Utils::DateTime>
    DescribeSecretResult& WithLastRotatedDate(LastRotatedDateT&& value) { SetLastRotatedDate(std::forward<LastRotatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last date and time that this secret was modified in any way.</p>
     */
    inline const Aws::Utils::DateTime& GetLastChangedDate() const { return m_lastChangedDate; }
    template<typename LastChangedDateT = Aws::Utils::DateTime>
    void SetLastChangedDate(LastChangedDateT&& value) { m_lastChangedDateHasBeenSet = true; m_lastChangedDate = std::forward<LastChangedDateT>(value); }
    template<typename LastChangedDateT = Aws::Utils::DateTime>
    DescribeSecretResult& WithLastChangedDate(LastChangedDateT&& value) { SetLastChangedDate(std::forward<LastChangedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the secret was last accessed in the Region. This field is
     * omitted if the secret has never been retrieved in the Region.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessedDate() const { return m_lastAccessedDate; }
    template<typename LastAccessedDateT = Aws::Utils::DateTime>
    void SetLastAccessedDate(LastAccessedDateT&& value) { m_lastAccessedDateHasBeenSet = true; m_lastAccessedDate = std::forward<LastAccessedDateT>(value); }
    template<typename LastAccessedDateT = Aws::Utils::DateTime>
    DescribeSecretResult& WithLastAccessedDate(LastAccessedDateT&& value) { SetLastAccessedDate(std::forward<LastAccessedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the secret is scheduled for deletion. If it is not scheduled for
     * deletion, this field is omitted. When you delete a secret, Secrets Manager
     * requires a recovery window of at least 7 days before deleting the secret. Some
     * time after the deleted date, Secrets Manager deletes the secret, including all
     * of its versions.</p> <p>If a secret is scheduled for deletion, then its details,
     * including the encrypted secret value, is not accessible. To cancel a scheduled
     * deletion and restore access to the secret, use <a>RestoreSecret</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletedDate() const { return m_deletedDate; }
    template<typename DeletedDateT = Aws::Utils::DateTime>
    void SetDeletedDate(DeletedDateT&& value) { m_deletedDateHasBeenSet = true; m_deletedDate = std::forward<DeletedDateT>(value); }
    template<typename DeletedDateT = Aws::Utils::DateTime>
    DescribeSecretResult& WithDeletedDate(DeletedDateT&& value) { SetDeletedDate(std::forward<DeletedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next rotation is scheduled to occur on or before this date. If the secret
     * isn't configured for rotation or rotation has been disabled, Secrets Manager
     * returns null. If rotation fails, Secrets Manager retries the entire rotation
     * process multiple times. If rotation is unsuccessful, this date may be in the
     * past.</p> <p>This date represents the latest date that rotation will occur, but
     * it is not an approximate rotation date. In some cases, for example if you turn
     * off automatic rotation and then turn it back on, the next rotation may occur
     * much sooner than this date.</p>
     */
    inline const Aws::Utils::DateTime& GetNextRotationDate() const { return m_nextRotationDate; }
    template<typename NextRotationDateT = Aws::Utils::DateTime>
    void SetNextRotationDate(NextRotationDateT&& value) { m_nextRotationDateHasBeenSet = true; m_nextRotationDate = std::forward<NextRotationDateT>(value); }
    template<typename NextRotationDateT = Aws::Utils::DateTime>
    DescribeSecretResult& WithNextRotationDate(NextRotationDateT&& value) { SetNextRotationDate(std::forward<NextRotationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags attached to the secret. To add tags to a secret, use
     * <a>TagResource</a>. To remove tags, use <a>UntagResource</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    DescribeSecretResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    DescribeSecretResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
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
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetVersionIdsToStages() const { return m_versionIdsToStages; }
    template<typename VersionIdsToStagesT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetVersionIdsToStages(VersionIdsToStagesT&& value) { m_versionIdsToStagesHasBeenSet = true; m_versionIdsToStages = std::forward<VersionIdsToStagesT>(value); }
    template<typename VersionIdsToStagesT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    DescribeSecretResult& WithVersionIdsToStages(VersionIdsToStagesT&& value) { SetVersionIdsToStages(std::forward<VersionIdsToStagesT>(value)); return *this;}
    template<typename VersionIdsToStagesKeyT = Aws::String, typename VersionIdsToStagesValueT = Aws::Vector<Aws::String>>
    DescribeSecretResult& AddVersionIdsToStages(VersionIdsToStagesKeyT&& key, VersionIdsToStagesValueT&& value) {
      m_versionIdsToStagesHasBeenSet = true; m_versionIdsToStages.emplace(std::forward<VersionIdsToStagesKeyT>(key), std::forward<VersionIdsToStagesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The ID of the service that created this secret. For more information, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/service-linked-secrets.html">Secrets
     * managed by other Amazon Web Services services</a>.</p>
     */
    inline const Aws::String& GetOwningService() const { return m_owningService; }
    template<typename OwningServiceT = Aws::String>
    void SetOwningService(OwningServiceT&& value) { m_owningServiceHasBeenSet = true; m_owningService = std::forward<OwningServiceT>(value); }
    template<typename OwningServiceT = Aws::String>
    DescribeSecretResult& WithOwningService(OwningServiceT&& value) { SetOwningService(std::forward<OwningServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the secret was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    DescribeSecretResult& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region the secret is in. If a secret is replicated to other Regions, the
     * replicas are listed in <code>ReplicationStatus</code>. </p>
     */
    inline const Aws::String& GetPrimaryRegion() const { return m_primaryRegion; }
    template<typename PrimaryRegionT = Aws::String>
    void SetPrimaryRegion(PrimaryRegionT&& value) { m_primaryRegionHasBeenSet = true; m_primaryRegion = std::forward<PrimaryRegionT>(value); }
    template<typename PrimaryRegionT = Aws::String>
    DescribeSecretResult& WithPrimaryRegion(PrimaryRegionT&& value) { SetPrimaryRegion(std::forward<PrimaryRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the replicas of this secret and their status: </p> <ul> <li> <p>
     * <code>Failed</code>, which indicates that the replica was not created.</p> </li>
     * <li> <p> <code>InProgress</code>, which indicates that Secrets Manager is in the
     * process of creating the replica.</p> </li> <li> <p> <code>InSync</code>, which
     * indicates that the replica was created.</p> </li> </ul>
     */
    inline const Aws::Vector<ReplicationStatusType>& GetReplicationStatus() const { return m_replicationStatus; }
    template<typename ReplicationStatusT = Aws::Vector<ReplicationStatusType>>
    void SetReplicationStatus(ReplicationStatusT&& value) { m_replicationStatusHasBeenSet = true; m_replicationStatus = std::forward<ReplicationStatusT>(value); }
    template<typename ReplicationStatusT = Aws::Vector<ReplicationStatusType>>
    DescribeSecretResult& WithReplicationStatus(ReplicationStatusT&& value) { SetReplicationStatus(std::forward<ReplicationStatusT>(value)); return *this;}
    template<typename ReplicationStatusT = ReplicationStatusType>
    DescribeSecretResult& AddReplicationStatus(ReplicationStatusT&& value) { m_replicationStatusHasBeenSet = true; m_replicationStatus.emplace_back(std::forward<ReplicationStatusT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSecretResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_versionIdsToStages;
    bool m_versionIdsToStagesHasBeenSet = false;

    Aws::String m_owningService;
    bool m_owningServiceHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    Aws::String m_primaryRegion;
    bool m_primaryRegionHasBeenSet = false;

    Aws::Vector<ReplicationStatusType> m_replicationStatus;
    bool m_replicationStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
