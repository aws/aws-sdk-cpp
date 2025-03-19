/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/IcebergUnreferencedFileRemovalSettings.h>
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
   * <p>Contains details about the maintenance settings for the table
   * bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/TableBucketMaintenanceSettings">AWS
   * API Reference</a></p>
   */
  class TableBucketMaintenanceSettings
  {
  public:
    AWS_S3TABLES_API TableBucketMaintenanceSettings() = default;
    AWS_S3TABLES_API TableBucketMaintenanceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3TABLES_API TableBucketMaintenanceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unreferenced file removal settings for the table bucket.</p>
     */
    inline const IcebergUnreferencedFileRemovalSettings& GetIcebergUnreferencedFileRemoval() const { return m_icebergUnreferencedFileRemoval; }
    inline bool IcebergUnreferencedFileRemovalHasBeenSet() const { return m_icebergUnreferencedFileRemovalHasBeenSet; }
    template<typename IcebergUnreferencedFileRemovalT = IcebergUnreferencedFileRemovalSettings>
    void SetIcebergUnreferencedFileRemoval(IcebergUnreferencedFileRemovalT&& value) { m_icebergUnreferencedFileRemovalHasBeenSet = true; m_icebergUnreferencedFileRemoval = std::forward<IcebergUnreferencedFileRemovalT>(value); }
    template<typename IcebergUnreferencedFileRemovalT = IcebergUnreferencedFileRemovalSettings>
    TableBucketMaintenanceSettings& WithIcebergUnreferencedFileRemoval(IcebergUnreferencedFileRemovalT&& value) { SetIcebergUnreferencedFileRemoval(std::forward<IcebergUnreferencedFileRemovalT>(value)); return *this;}
    ///@}
  private:

    IcebergUnreferencedFileRemovalSettings m_icebergUnreferencedFileRemoval;
    bool m_icebergUnreferencedFileRemovalHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
