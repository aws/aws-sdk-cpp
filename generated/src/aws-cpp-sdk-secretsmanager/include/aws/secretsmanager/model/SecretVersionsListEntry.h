/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A structure that contains information about one version of a
   * secret.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/SecretVersionsListEntry">AWS
   * API Reference</a></p>
   */
  class SecretVersionsListEntry
  {
  public:
    AWS_SECRETSMANAGER_API SecretVersionsListEntry() = default;
    AWS_SECRETSMANAGER_API SecretVersionsListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECRETSMANAGER_API SecretVersionsListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECRETSMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique version identifier of this version of the secret.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    SecretVersionsListEntry& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of staging labels that are currently associated with this version of
     * the secret.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVersionStages() const { return m_versionStages; }
    inline bool VersionStagesHasBeenSet() const { return m_versionStagesHasBeenSet; }
    template<typename VersionStagesT = Aws::Vector<Aws::String>>
    void SetVersionStages(VersionStagesT&& value) { m_versionStagesHasBeenSet = true; m_versionStages = std::forward<VersionStagesT>(value); }
    template<typename VersionStagesT = Aws::Vector<Aws::String>>
    SecretVersionsListEntry& WithVersionStages(VersionStagesT&& value) { SetVersionStages(std::forward<VersionStagesT>(value)); return *this;}
    template<typename VersionStagesT = Aws::String>
    SecretVersionsListEntry& AddVersionStages(VersionStagesT&& value) { m_versionStagesHasBeenSet = true; m_versionStages.emplace_back(std::forward<VersionStagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date that this version of the secret was last accessed. Note that the
     * resolution of this field is at the date level and does not include the time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessedDate() const { return m_lastAccessedDate; }
    inline bool LastAccessedDateHasBeenSet() const { return m_lastAccessedDateHasBeenSet; }
    template<typename LastAccessedDateT = Aws::Utils::DateTime>
    void SetLastAccessedDate(LastAccessedDateT&& value) { m_lastAccessedDateHasBeenSet = true; m_lastAccessedDate = std::forward<LastAccessedDateT>(value); }
    template<typename LastAccessedDateT = Aws::Utils::DateTime>
    SecretVersionsListEntry& WithLastAccessedDate(LastAccessedDateT&& value) { SetLastAccessedDate(std::forward<LastAccessedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time this version of the secret was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    SecretVersionsListEntry& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS keys used to encrypt the secret version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKmsKeyIds() const { return m_kmsKeyIds; }
    inline bool KmsKeyIdsHasBeenSet() const { return m_kmsKeyIdsHasBeenSet; }
    template<typename KmsKeyIdsT = Aws::Vector<Aws::String>>
    void SetKmsKeyIds(KmsKeyIdsT&& value) { m_kmsKeyIdsHasBeenSet = true; m_kmsKeyIds = std::forward<KmsKeyIdsT>(value); }
    template<typename KmsKeyIdsT = Aws::Vector<Aws::String>>
    SecretVersionsListEntry& WithKmsKeyIds(KmsKeyIdsT&& value) { SetKmsKeyIds(std::forward<KmsKeyIdsT>(value)); return *this;}
    template<typename KmsKeyIdsT = Aws::String>
    SecretVersionsListEntry& AddKmsKeyIds(KmsKeyIdsT&& value) { m_kmsKeyIdsHasBeenSet = true; m_kmsKeyIds.emplace_back(std::forward<KmsKeyIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_versionStages;
    bool m_versionStagesHasBeenSet = false;

    Aws::Utils::DateTime m_lastAccessedDate{};
    bool m_lastAccessedDateHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    Aws::Vector<Aws::String> m_kmsKeyIds;
    bool m_kmsKeyIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
