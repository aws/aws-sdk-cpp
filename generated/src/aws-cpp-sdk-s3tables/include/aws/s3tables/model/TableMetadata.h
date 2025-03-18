/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/IcebergMetadata.h>
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
   * <p>Contains details about the table metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/TableMetadata">AWS
   * API Reference</a></p>
   */
  class TableMetadata
  {
  public:
    AWS_S3TABLES_API TableMetadata() = default;
    AWS_S3TABLES_API TableMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3TABLES_API TableMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains details about the metadata of an Iceberg table.</p>
     */
    inline const IcebergMetadata& GetIceberg() const { return m_iceberg; }
    inline bool IcebergHasBeenSet() const { return m_icebergHasBeenSet; }
    template<typename IcebergT = IcebergMetadata>
    void SetIceberg(IcebergT&& value) { m_icebergHasBeenSet = true; m_iceberg = std::forward<IcebergT>(value); }
    template<typename IcebergT = IcebergMetadata>
    TableMetadata& WithIceberg(IcebergT&& value) { SetIceberg(std::forward<IcebergT>(value)); return *this;}
    ///@}
  private:

    IcebergMetadata m_iceberg;
    bool m_icebergHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
