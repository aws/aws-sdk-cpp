/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/RelationalTable.h>
#include <aws/quicksight/model/CustomSql.h>
#include <aws/quicksight/model/S3Source.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A view of a data source that contains information about the shape of the data
   * in the underlying source. This is a variant type structure. For this structure
   * to be valid, only one of the attributes can be non-null.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PhysicalTable">AWS
   * API Reference</a></p>
   */
  class PhysicalTable
  {
  public:
    AWS_QUICKSIGHT_API PhysicalTable() = default;
    AWS_QUICKSIGHT_API PhysicalTable(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PhysicalTable& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A physical table type for relational data sources.</p>
     */
    inline const RelationalTable& GetRelationalTable() const { return m_relationalTable; }
    inline bool RelationalTableHasBeenSet() const { return m_relationalTableHasBeenSet; }
    template<typename RelationalTableT = RelationalTable>
    void SetRelationalTable(RelationalTableT&& value) { m_relationalTableHasBeenSet = true; m_relationalTable = std::forward<RelationalTableT>(value); }
    template<typename RelationalTableT = RelationalTable>
    PhysicalTable& WithRelationalTable(RelationalTableT&& value) { SetRelationalTable(std::forward<RelationalTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A physical table type built from the results of the custom SQL query.</p>
     */
    inline const CustomSql& GetCustomSql() const { return m_customSql; }
    inline bool CustomSqlHasBeenSet() const { return m_customSqlHasBeenSet; }
    template<typename CustomSqlT = CustomSql>
    void SetCustomSql(CustomSqlT&& value) { m_customSqlHasBeenSet = true; m_customSql = std::forward<CustomSqlT>(value); }
    template<typename CustomSqlT = CustomSql>
    PhysicalTable& WithCustomSql(CustomSqlT&& value) { SetCustomSql(std::forward<CustomSqlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A physical table type for as S3 data source.</p>
     */
    inline const S3Source& GetS3Source() const { return m_s3Source; }
    inline bool S3SourceHasBeenSet() const { return m_s3SourceHasBeenSet; }
    template<typename S3SourceT = S3Source>
    void SetS3Source(S3SourceT&& value) { m_s3SourceHasBeenSet = true; m_s3Source = std::forward<S3SourceT>(value); }
    template<typename S3SourceT = S3Source>
    PhysicalTable& WithS3Source(S3SourceT&& value) { SetS3Source(std::forward<S3SourceT>(value)); return *this;}
    ///@}
  private:

    RelationalTable m_relationalTable;
    bool m_relationalTableHasBeenSet = false;

    CustomSql m_customSql;
    bool m_customSqlHasBeenSet = false;

    S3Source m_s3Source;
    bool m_s3SourceHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
