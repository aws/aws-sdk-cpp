/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace S3Tables {
namespace Model {

/**
 * <p>Statistics about the source and the partitions in a migration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/PlanningStats">AWS
 * API Reference</a></p>
 */
class PlanningStats {
 public:
  AWS_S3TABLES_API PlanningStats() = default;
  AWS_S3TABLES_API PlanningStats(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API PlanningStats& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of source objects that the migration found under the source
   * table's location, whether or not it migrates them. The object compatibility
   * report has one row for each.</p>
   */
  inline long long GetObjectsScanned() const { return m_objectsScanned; }
  inline bool ObjectsScannedHasBeenSet() const { return m_objectsScannedHasBeenSet; }
  inline void SetObjectsScanned(long long value) {
    m_objectsScannedHasBeenSet = true;
    m_objectsScanned = value;
  }
  inline PlanningStats& WithObjectsScanned(long long value) {
    SetObjectsScanned(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of source objects in the migration. For a start, these are the
   * data files in the Amazon Web Services Glue table's partitions, or under the
   * table's location if the table isn't partitioned. For a sync, these are all the
   * data files of the table after the sync, including files that earlier migrations
   * migrated.</p>
   */
  inline long long GetObjectsPlanned() const { return m_objectsPlanned; }
  inline bool ObjectsPlannedHasBeenSet() const { return m_objectsPlannedHasBeenSet; }
  inline void SetObjectsPlanned(long long value) {
    m_objectsPlannedHasBeenSet = true;
    m_objectsPlanned = value;
  }
  inline PlanningStats& WithObjectsPlanned(long long value) {
    SetObjectsPlanned(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of partitions in the destination table after this migration, or 0
   * if the source table isn't partitioned. This value is returned when planning
   * produces a valid plan.</p>
   */
  inline long long GetPartitionCount() const { return m_partitionCount; }
  inline bool PartitionCountHasBeenSet() const { return m_partitionCountHasBeenSet; }
  inline void SetPartitionCount(long long value) {
    m_partitionCountHasBeenSet = true;
    m_partitionCount = value;
  }
  inline PlanningStats& WithPartitionCount(long long value) {
    SetPartitionCount(value);
    return *this;
  }
  ///@}
 private:
  long long m_objectsScanned{0};

  long long m_objectsPlanned{0};

  long long m_partitionCount{0};
  bool m_objectsScannedHasBeenSet = false;
  bool m_objectsPlannedHasBeenSet = false;
  bool m_partitionCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
