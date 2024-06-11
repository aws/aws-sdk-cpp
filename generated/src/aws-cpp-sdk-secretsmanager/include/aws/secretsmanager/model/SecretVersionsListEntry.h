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
    AWS_SECRETSMANAGER_API SecretVersionsListEntry();
    AWS_SECRETSMANAGER_API SecretVersionsListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECRETSMANAGER_API SecretVersionsListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECRETSMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique version identifier of this version of the secret.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }
    inline SecretVersionsListEntry& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline SecretVersionsListEntry& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline SecretVersionsListEntry& WithVersionId(const char* value) { SetVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of staging labels that are currently associated with this version of
     * the secret.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVersionStages() const{ return m_versionStages; }
    inline bool VersionStagesHasBeenSet() const { return m_versionStagesHasBeenSet; }
    inline void SetVersionStages(const Aws::Vector<Aws::String>& value) { m_versionStagesHasBeenSet = true; m_versionStages = value; }
    inline void SetVersionStages(Aws::Vector<Aws::String>&& value) { m_versionStagesHasBeenSet = true; m_versionStages = std::move(value); }
    inline SecretVersionsListEntry& WithVersionStages(const Aws::Vector<Aws::String>& value) { SetVersionStages(value); return *this;}
    inline SecretVersionsListEntry& WithVersionStages(Aws::Vector<Aws::String>&& value) { SetVersionStages(std::move(value)); return *this;}
    inline SecretVersionsListEntry& AddVersionStages(const Aws::String& value) { m_versionStagesHasBeenSet = true; m_versionStages.push_back(value); return *this; }
    inline SecretVersionsListEntry& AddVersionStages(Aws::String&& value) { m_versionStagesHasBeenSet = true; m_versionStages.push_back(std::move(value)); return *this; }
    inline SecretVersionsListEntry& AddVersionStages(const char* value) { m_versionStagesHasBeenSet = true; m_versionStages.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date that this version of the secret was last accessed. Note that the
     * resolution of this field is at the date level and does not include the time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessedDate() const{ return m_lastAccessedDate; }
    inline bool LastAccessedDateHasBeenSet() const { return m_lastAccessedDateHasBeenSet; }
    inline void SetLastAccessedDate(const Aws::Utils::DateTime& value) { m_lastAccessedDateHasBeenSet = true; m_lastAccessedDate = value; }
    inline void SetLastAccessedDate(Aws::Utils::DateTime&& value) { m_lastAccessedDateHasBeenSet = true; m_lastAccessedDate = std::move(value); }
    inline SecretVersionsListEntry& WithLastAccessedDate(const Aws::Utils::DateTime& value) { SetLastAccessedDate(value); return *this;}
    inline SecretVersionsListEntry& WithLastAccessedDate(Aws::Utils::DateTime&& value) { SetLastAccessedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time this version of the secret was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }
    inline SecretVersionsListEntry& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline SecretVersionsListEntry& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS keys used to encrypt the secret version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKmsKeyIds() const{ return m_kmsKeyIds; }
    inline bool KmsKeyIdsHasBeenSet() const { return m_kmsKeyIdsHasBeenSet; }
    inline void SetKmsKeyIds(const Aws::Vector<Aws::String>& value) { m_kmsKeyIdsHasBeenSet = true; m_kmsKeyIds = value; }
    inline void SetKmsKeyIds(Aws::Vector<Aws::String>&& value) { m_kmsKeyIdsHasBeenSet = true; m_kmsKeyIds = std::move(value); }
    inline SecretVersionsListEntry& WithKmsKeyIds(const Aws::Vector<Aws::String>& value) { SetKmsKeyIds(value); return *this;}
    inline SecretVersionsListEntry& WithKmsKeyIds(Aws::Vector<Aws::String>&& value) { SetKmsKeyIds(std::move(value)); return *this;}
    inline SecretVersionsListEntry& AddKmsKeyIds(const Aws::String& value) { m_kmsKeyIdsHasBeenSet = true; m_kmsKeyIds.push_back(value); return *this; }
    inline SecretVersionsListEntry& AddKmsKeyIds(Aws::String&& value) { m_kmsKeyIdsHasBeenSet = true; m_kmsKeyIds.push_back(std::move(value)); return *this; }
    inline SecretVersionsListEntry& AddKmsKeyIds(const char* value) { m_kmsKeyIdsHasBeenSet = true; m_kmsKeyIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_versionStages;
    bool m_versionStagesHasBeenSet = false;

    Aws::Utils::DateTime m_lastAccessedDate;
    bool m_lastAccessedDateHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::Vector<Aws::String> m_kmsKeyIds;
    bool m_kmsKeyIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
