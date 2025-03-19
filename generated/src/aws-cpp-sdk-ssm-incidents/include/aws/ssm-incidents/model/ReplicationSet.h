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
    AWS_SSMINCIDENTS_API ReplicationSet() = default;
    AWS_SSMINCIDENTS_API ReplicationSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API ReplicationSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the replication set.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ReplicationSet& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about who created the replication set.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    ReplicationSet& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the replication set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    ReplicationSet& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines if the replication set deletion protection is enabled or not. If
     * deletion protection is enabled, you can't delete the last Amazon Web Services
     * Region in the replication set. </p>
     */
    inline bool GetDeletionProtected() const { return m_deletionProtected; }
    inline bool DeletionProtectedHasBeenSet() const { return m_deletionProtectedHasBeenSet; }
    inline void SetDeletionProtected(bool value) { m_deletionProtectedHasBeenSet = true; m_deletionProtected = value; }
    inline ReplicationSet& WithDeletionProtected(bool value) { SetDeletionProtected(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Who last modified the replication set.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const { return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    template<typename LastModifiedByT = Aws::String>
    void SetLastModifiedBy(LastModifiedByT&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::forward<LastModifiedByT>(value); }
    template<typename LastModifiedByT = Aws::String>
    ReplicationSet& WithLastModifiedBy(LastModifiedByT&& value) { SetLastModifiedBy(std::forward<LastModifiedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the replication set was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    ReplicationSet& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The map between each Amazon Web Services Region in your replication set and
     * the KMS key that's used to encrypt the data in that Region.</p>
     */
    inline const Aws::Map<Aws::String, RegionInfo>& GetRegionMap() const { return m_regionMap; }
    inline bool RegionMapHasBeenSet() const { return m_regionMapHasBeenSet; }
    template<typename RegionMapT = Aws::Map<Aws::String, RegionInfo>>
    void SetRegionMap(RegionMapT&& value) { m_regionMapHasBeenSet = true; m_regionMap = std::forward<RegionMapT>(value); }
    template<typename RegionMapT = Aws::Map<Aws::String, RegionInfo>>
    ReplicationSet& WithRegionMap(RegionMapT&& value) { SetRegionMap(std::forward<RegionMapT>(value)); return *this;}
    template<typename RegionMapKeyT = Aws::String, typename RegionMapValueT = RegionInfo>
    ReplicationSet& AddRegionMap(RegionMapKeyT&& key, RegionMapValueT&& value) {
      m_regionMapHasBeenSet = true; m_regionMap.emplace(std::forward<RegionMapKeyT>(key), std::forward<RegionMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The status of the replication set. If the replication set is still pending,
     * you can't use Incident Manager functionality.</p>
     */
    inline ReplicationSetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ReplicationSetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ReplicationSet& WithStatus(ReplicationSetStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    bool m_deletionProtected{false};
    bool m_deletionProtectedHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Map<Aws::String, RegionInfo> m_regionMap;
    bool m_regionMapHasBeenSet = false;

    ReplicationSetStatus m_status{ReplicationSetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
