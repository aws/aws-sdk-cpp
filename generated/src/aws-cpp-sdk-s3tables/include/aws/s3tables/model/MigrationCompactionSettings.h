/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/IcebergCompactionStrategy.h>

#include <utility>

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
 * <p>The compaction settings that a migration applies to the destination
 * table.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/MigrationCompactionSettings">AWS
 * API Reference</a></p>
 */
class MigrationCompactionSettings {
 public:
  AWS_S3TABLES_API MigrationCompactionSettings() = default;
  AWS_S3TABLES_API MigrationCompactionSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API MigrationCompactionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The target size, from 64 to 512 MB, of the data files that the migration
   * writes, and of the files that compaction writes after you complete the
   * migration. The default is 512.</p>
   */
  inline int GetTargetFileSizeMB() const { return m_targetFileSizeMB; }
  inline bool TargetFileSizeMBHasBeenSet() const { return m_targetFileSizeMBHasBeenSet; }
  inline void SetTargetFileSizeMB(int value) {
    m_targetFileSizeMBHasBeenSet = true;
    m_targetFileSizeMB = value;
  }
  inline MigrationCompactionSettings& WithTargetFileSizeMB(int value) {
    SetTargetFileSizeMB(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compaction strategy. The only valid value is <code>binpack</code>, which
   * is the default.</p>
   */
  inline IcebergCompactionStrategy GetStrategy() const { return m_strategy; }
  inline bool StrategyHasBeenSet() const { return m_strategyHasBeenSet; }
  inline void SetStrategy(IcebergCompactionStrategy value) {
    m_strategyHasBeenSet = true;
    m_strategy = value;
  }
  inline MigrationCompactionSettings& WithStrategy(IcebergCompactionStrategy value) {
    SetStrategy(value);
    return *this;
  }
  ///@}
 private:
  int m_targetFileSizeMB{0};

  IcebergCompactionStrategy m_strategy{IcebergCompactionStrategy::NOT_SET};
  bool m_targetFileSizeMBHasBeenSet = false;
  bool m_strategyHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
