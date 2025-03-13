/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-query/model/MultiMeasureMappings.h>
#include <aws/timestream-query/model/DimensionMapping.h>
#include <aws/timestream-query/model/MixedMeasureMapping.h>
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
namespace TimestreamQuery
{
namespace Model
{

  /**
   * <p> Configuration to write data into Timestream database and table. This
   * configuration allows the user to map the query result select columns into the
   * destination table columns. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/TimestreamConfiguration">AWS
   * API Reference</a></p>
   */
  class TimestreamConfiguration
  {
  public:
    AWS_TIMESTREAMQUERY_API TimestreamConfiguration() = default;
    AWS_TIMESTREAMQUERY_API TimestreamConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API TimestreamConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of Timestream database to which the query result will be written.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    TimestreamConfiguration& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of Timestream table that the query result will be written to. The table
     * should be within the same database that is provided in Timestream
     * configuration.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    TimestreamConfiguration& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Column from query result that should be used as the time column in
     * destination table. Column type for this should be TIMESTAMP.</p>
     */
    inline const Aws::String& GetTimeColumn() const { return m_timeColumn; }
    inline bool TimeColumnHasBeenSet() const { return m_timeColumnHasBeenSet; }
    template<typename TimeColumnT = Aws::String>
    void SetTimeColumn(TimeColumnT&& value) { m_timeColumnHasBeenSet = true; m_timeColumn = std::forward<TimeColumnT>(value); }
    template<typename TimeColumnT = Aws::String>
    TimestreamConfiguration& WithTimeColumn(TimeColumnT&& value) { SetTimeColumn(std::forward<TimeColumnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> This is to allow mapping column(s) from the query result to the dimension in
     * the destination table. </p>
     */
    inline const Aws::Vector<DimensionMapping>& GetDimensionMappings() const { return m_dimensionMappings; }
    inline bool DimensionMappingsHasBeenSet() const { return m_dimensionMappingsHasBeenSet; }
    template<typename DimensionMappingsT = Aws::Vector<DimensionMapping>>
    void SetDimensionMappings(DimensionMappingsT&& value) { m_dimensionMappingsHasBeenSet = true; m_dimensionMappings = std::forward<DimensionMappingsT>(value); }
    template<typename DimensionMappingsT = Aws::Vector<DimensionMapping>>
    TimestreamConfiguration& WithDimensionMappings(DimensionMappingsT&& value) { SetDimensionMappings(std::forward<DimensionMappingsT>(value)); return *this;}
    template<typename DimensionMappingsT = DimensionMapping>
    TimestreamConfiguration& AddDimensionMappings(DimensionMappingsT&& value) { m_dimensionMappingsHasBeenSet = true; m_dimensionMappings.emplace_back(std::forward<DimensionMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Multi-measure mappings.</p>
     */
    inline const MultiMeasureMappings& GetMultiMeasureMappings() const { return m_multiMeasureMappings; }
    inline bool MultiMeasureMappingsHasBeenSet() const { return m_multiMeasureMappingsHasBeenSet; }
    template<typename MultiMeasureMappingsT = MultiMeasureMappings>
    void SetMultiMeasureMappings(MultiMeasureMappingsT&& value) { m_multiMeasureMappingsHasBeenSet = true; m_multiMeasureMappings = std::forward<MultiMeasureMappingsT>(value); }
    template<typename MultiMeasureMappingsT = MultiMeasureMappings>
    TimestreamConfiguration& WithMultiMeasureMappings(MultiMeasureMappingsT&& value) { SetMultiMeasureMappings(std::forward<MultiMeasureMappingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how to map measures to multi-measure records.</p>
     */
    inline const Aws::Vector<MixedMeasureMapping>& GetMixedMeasureMappings() const { return m_mixedMeasureMappings; }
    inline bool MixedMeasureMappingsHasBeenSet() const { return m_mixedMeasureMappingsHasBeenSet; }
    template<typename MixedMeasureMappingsT = Aws::Vector<MixedMeasureMapping>>
    void SetMixedMeasureMappings(MixedMeasureMappingsT&& value) { m_mixedMeasureMappingsHasBeenSet = true; m_mixedMeasureMappings = std::forward<MixedMeasureMappingsT>(value); }
    template<typename MixedMeasureMappingsT = Aws::Vector<MixedMeasureMapping>>
    TimestreamConfiguration& WithMixedMeasureMappings(MixedMeasureMappingsT&& value) { SetMixedMeasureMappings(std::forward<MixedMeasureMappingsT>(value)); return *this;}
    template<typename MixedMeasureMappingsT = MixedMeasureMapping>
    TimestreamConfiguration& AddMixedMeasureMappings(MixedMeasureMappingsT&& value) { m_mixedMeasureMappingsHasBeenSet = true; m_mixedMeasureMappings.emplace_back(std::forward<MixedMeasureMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Name of the measure column.</p>
     */
    inline const Aws::String& GetMeasureNameColumn() const { return m_measureNameColumn; }
    inline bool MeasureNameColumnHasBeenSet() const { return m_measureNameColumnHasBeenSet; }
    template<typename MeasureNameColumnT = Aws::String>
    void SetMeasureNameColumn(MeasureNameColumnT&& value) { m_measureNameColumnHasBeenSet = true; m_measureNameColumn = std::forward<MeasureNameColumnT>(value); }
    template<typename MeasureNameColumnT = Aws::String>
    TimestreamConfiguration& WithMeasureNameColumn(MeasureNameColumnT&& value) { SetMeasureNameColumn(std::forward<MeasureNameColumnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_timeColumn;
    bool m_timeColumnHasBeenSet = false;

    Aws::Vector<DimensionMapping> m_dimensionMappings;
    bool m_dimensionMappingsHasBeenSet = false;

    MultiMeasureMappings m_multiMeasureMappings;
    bool m_multiMeasureMappingsHasBeenSet = false;

    Aws::Vector<MixedMeasureMapping> m_mixedMeasureMappings;
    bool m_mixedMeasureMappingsHasBeenSet = false;

    Aws::String m_measureNameColumn;
    bool m_measureNameColumnHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
