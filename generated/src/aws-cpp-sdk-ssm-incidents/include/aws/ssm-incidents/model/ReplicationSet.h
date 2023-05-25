/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm-incidents/model/ReplicationSetStatus.h>
#include <aws/ssm-incidents/model/RegionInfo.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>The set of Amazon Web Services Region that your Incident Manager data will be
   * replicated to and the KMS key used to encrypt the data. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/ReplicationSet">AWS
   * API Reference</a></p>
   */
  class ReplicationSet
  {
  public:
    AWS_SSMINCIDENTS_API ReplicationSet();
    AWS_SSMINCIDENTS_API ReplicationSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API ReplicationSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the replication set.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication set.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication set.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication set.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication set.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication set.</p>
     */
    inline ReplicationSet& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication set.</p>
     */
    inline ReplicationSet& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication set.</p>
     */
    inline ReplicationSet& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Details about who created the replication set.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>Details about who created the replication set.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>Details about who created the replication set.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>Details about who created the replication set.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>Details about who created the replication set.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>Details about who created the replication set.</p>
     */
    inline ReplicationSet& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>Details about who created the replication set.</p>
     */
    inline ReplicationSet& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>Details about who created the replication set.</p>
     */
    inline ReplicationSet& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>When the replication set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>When the replication set was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>When the replication set was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>When the replication set was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>When the replication set was created.</p>
     */
    inline ReplicationSet& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>When the replication set was created.</p>
     */
    inline ReplicationSet& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>Determines if the replication set deletion protection is enabled or not. If
     * deletion protection is enabled, you can't delete the last Amazon Web Services
     * Region in the replication set. </p>
     */
    inline bool GetDeletionProtected() const{ return m_deletionProtected; }

    /**
     * <p>Determines if the replication set deletion protection is enabled or not. If
     * deletion protection is enabled, you can't delete the last Amazon Web Services
     * Region in the replication set. </p>
     */
    inline bool DeletionProtectedHasBeenSet() const { return m_deletionProtectedHasBeenSet; }

    /**
     * <p>Determines if the replication set deletion protection is enabled or not. If
     * deletion protection is enabled, you can't delete the last Amazon Web Services
     * Region in the replication set. </p>
     */
    inline void SetDeletionProtected(bool value) { m_deletionProtectedHasBeenSet = true; m_deletionProtected = value; }

    /**
     * <p>Determines if the replication set deletion protection is enabled or not. If
     * deletion protection is enabled, you can't delete the last Amazon Web Services
     * Region in the replication set. </p>
     */
    inline ReplicationSet& WithDeletionProtected(bool value) { SetDeletionProtected(value); return *this;}


    /**
     * <p>Who last modified the replication set.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    /**
     * <p>Who last modified the replication set.</p>
     */
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }

    /**
     * <p>Who last modified the replication set.</p>
     */
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }

    /**
     * <p>Who last modified the replication set.</p>
     */
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }

    /**
     * <p>Who last modified the replication set.</p>
     */
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy.assign(value); }

    /**
     * <p>Who last modified the replication set.</p>
     */
    inline ReplicationSet& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}

    /**
     * <p>Who last modified the replication set.</p>
     */
    inline ReplicationSet& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}

    /**
     * <p>Who last modified the replication set.</p>
     */
    inline ReplicationSet& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}


    /**
     * <p>When the replication set was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>When the replication set was last updated.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>When the replication set was last updated.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>When the replication set was last updated.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>When the replication set was last updated.</p>
     */
    inline ReplicationSet& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>When the replication set was last updated.</p>
     */
    inline ReplicationSet& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The map between each Amazon Web Services Region in your replication set and
     * the KMS key that's used to encrypt the data in that Region.</p>
     */
    inline const Aws::Map<Aws::String, RegionInfo>& GetRegionMap() const{ return m_regionMap; }

    /**
     * <p>The map between each Amazon Web Services Region in your replication set and
     * the KMS key that's used to encrypt the data in that Region.</p>
     */
    inline bool RegionMapHasBeenSet() const { return m_regionMapHasBeenSet; }

    /**
     * <p>The map between each Amazon Web Services Region in your replication set and
     * the KMS key that's used to encrypt the data in that Region.</p>
     */
    inline void SetRegionMap(const Aws::Map<Aws::String, RegionInfo>& value) { m_regionMapHasBeenSet = true; m_regionMap = value; }

    /**
     * <p>The map between each Amazon Web Services Region in your replication set and
     * the KMS key that's used to encrypt the data in that Region.</p>
     */
    inline void SetRegionMap(Aws::Map<Aws::String, RegionInfo>&& value) { m_regionMapHasBeenSet = true; m_regionMap = std::move(value); }

    /**
     * <p>The map between each Amazon Web Services Region in your replication set and
     * the KMS key that's used to encrypt the data in that Region.</p>
     */
    inline ReplicationSet& WithRegionMap(const Aws::Map<Aws::String, RegionInfo>& value) { SetRegionMap(value); return *this;}

    /**
     * <p>The map between each Amazon Web Services Region in your replication set and
     * the KMS key that's used to encrypt the data in that Region.</p>
     */
    inline ReplicationSet& WithRegionMap(Aws::Map<Aws::String, RegionInfo>&& value) { SetRegionMap(std::move(value)); return *this;}

    /**
     * <p>The map between each Amazon Web Services Region in your replication set and
     * the KMS key that's used to encrypt the data in that Region.</p>
     */
    inline ReplicationSet& AddRegionMap(const Aws::String& key, const RegionInfo& value) { m_regionMapHasBeenSet = true; m_regionMap.emplace(key, value); return *this; }

    /**
     * <p>The map between each Amazon Web Services Region in your replication set and
     * the KMS key that's used to encrypt the data in that Region.</p>
     */
    inline ReplicationSet& AddRegionMap(Aws::String&& key, const RegionInfo& value) { m_regionMapHasBeenSet = true; m_regionMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>The map between each Amazon Web Services Region in your replication set and
     * the KMS key that's used to encrypt the data in that Region.</p>
     */
    inline ReplicationSet& AddRegionMap(const Aws::String& key, RegionInfo&& value) { m_regionMapHasBeenSet = true; m_regionMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The map between each Amazon Web Services Region in your replication set and
     * the KMS key that's used to encrypt the data in that Region.</p>
     */
    inline ReplicationSet& AddRegionMap(Aws::String&& key, RegionInfo&& value) { m_regionMapHasBeenSet = true; m_regionMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The map between each Amazon Web Services Region in your replication set and
     * the KMS key that's used to encrypt the data in that Region.</p>
     */
    inline ReplicationSet& AddRegionMap(const char* key, RegionInfo&& value) { m_regionMapHasBeenSet = true; m_regionMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The map between each Amazon Web Services Region in your replication set and
     * the KMS key that's used to encrypt the data in that Region.</p>
     */
    inline ReplicationSet& AddRegionMap(const char* key, const RegionInfo& value) { m_regionMapHasBeenSet = true; m_regionMap.emplace(key, value); return *this; }


    /**
     * <p>The status of the replication set. If the replication set is still pending,
     * you can't use Incident Manager functionality.</p>
     */
    inline const ReplicationSetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the replication set. If the replication set is still pending,
     * you can't use Incident Manager functionality.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the replication set. If the replication set is still pending,
     * you can't use Incident Manager functionality.</p>
     */
    inline void SetStatus(const ReplicationSetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the replication set. If the replication set is still pending,
     * you can't use Incident Manager functionality.</p>
     */
    inline void SetStatus(ReplicationSetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the replication set. If the replication set is still pending,
     * you can't use Incident Manager functionality.</p>
     */
    inline ReplicationSet& WithStatus(const ReplicationSetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the replication set. If the replication set is still pending,
     * you can't use Incident Manager functionality.</p>
     */
    inline ReplicationSet& WithStatus(ReplicationSetStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    bool m_deletionProtected;
    bool m_deletionProtectedHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Map<Aws::String, RegionInfo> m_regionMap;
    bool m_regionMapHasBeenSet = false;

    ReplicationSetStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
