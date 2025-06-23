/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/IcebergCompactionStrategy.h>
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
namespace S3Tables
{
namespace Model
{

  /**
   * <p>Contains details about the compaction settings for an Iceberg
   * table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/IcebergCompactionSettings">AWS
   * API Reference</a></p>
   */
  class IcebergCompactionSettings
  {
  public:
    AWS_S3TABLES_API IcebergCompactionSettings() = default;
    AWS_S3TABLES_API IcebergCompactionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3TABLES_API IcebergCompactionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The target file size for the table in MB.</p>
     */
    inline int GetTargetFileSizeMB() const { return m_targetFileSizeMB; }
    inline bool TargetFileSizeMBHasBeenSet() const { return m_targetFileSizeMBHasBeenSet; }
    inline void SetTargetFileSizeMB(int value) { m_targetFileSizeMBHasBeenSet = true; m_targetFileSizeMB = value; }
    inline IcebergCompactionSettings& WithTargetFileSizeMB(int value) { SetTargetFileSizeMB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compaction strategy to use for the table. This determines how files are
     * selected and combined during compaction operations.</p>
     */
    inline IcebergCompactionStrategy GetStrategy() const { return m_strategy; }
    inline bool StrategyHasBeenSet() const { return m_strategyHasBeenSet; }
    inline void SetStrategy(IcebergCompactionStrategy value) { m_strategyHasBeenSet = true; m_strategy = value; }
    inline IcebergCompactionSettings& WithStrategy(IcebergCompactionStrategy value) { SetStrategy(value); return *this;}
    ///@}
  private:

    int m_targetFileSizeMB{0};
    bool m_targetFileSizeMBHasBeenSet = false;

    IcebergCompactionStrategy m_strategy{IcebergCompactionStrategy::NOT_SET};
    bool m_strategyHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
