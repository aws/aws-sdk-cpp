/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-influxdb/TimestreamInfluxDBRequest.h>
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>

#include <utility>

namespace Aws {
namespace TimestreamInfluxDB {
namespace Model {

/**
 */
class CreateDbBackupRequest : public TimestreamInfluxDBRequest {
 public:
  AWS_TIMESTREAMINFLUXDB_API CreateDbBackupRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateDbBackup"; }

  AWS_TIMESTREAMINFLUXDB_API Aws::String SerializePayload() const override;

  AWS_TIMESTREAMINFLUXDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the backup. Must be unique within the account and region.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateDbBackupRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The id of the DB instance or DB cluster to back up.</p>
   */
  inline const Aws::String& GetDbResourceId() const { return m_dbResourceId; }
  inline bool DbResourceIdHasBeenSet() const { return m_dbResourceIdHasBeenSet; }
  template <typename DbResourceIdT = Aws::String>
  void SetDbResourceId(DbResourceIdT&& value) {
    m_dbResourceIdHasBeenSet = true;
    m_dbResourceId = std::forward<DbResourceIdT>(value);
  }
  template <typename DbResourceIdT = Aws::String>
  CreateDbBackupRequest& WithDbResourceId(DbResourceIdT&& value) {
    SetDbResourceId(std::forward<DbResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of days to retain the backup. Valid values are 1 to 3650.</p>
   */
  inline int GetRetentionDays() const { return m_retentionDays; }
  inline bool RetentionDaysHasBeenSet() const { return m_retentionDaysHasBeenSet; }
  inline void SetRetentionDays(int value) {
    m_retentionDaysHasBeenSet = true;
    m_retentionDays = value;
  }
  inline CreateDbBackupRequest& WithRetentionDays(int value) {
    SetRetentionDays(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of key-value pairs to associate with the backup.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateDbBackupRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateDbBackupRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_dbResourceId;

  int m_retentionDays{0};

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_nameHasBeenSet = false;
  bool m_dbResourceIdHasBeenSet = false;
  bool m_retentionDaysHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
