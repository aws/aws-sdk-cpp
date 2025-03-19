/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds-data/model/ColumnMetadata.h>
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
namespace RDSDataService
{
namespace Model
{

  /**
   * <p>The metadata of the result set returned by a SQL statement.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/ResultSetMetadata">AWS
   * API Reference</a></p>
   */
  class ResultSetMetadata
  {
  public:
    AWS_RDSDATASERVICE_API ResultSetMetadata() = default;
    AWS_RDSDATASERVICE_API ResultSetMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API ResultSetMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of columns in the result set.</p>
     */
    inline long long GetColumnCount() const { return m_columnCount; }
    inline bool ColumnCountHasBeenSet() const { return m_columnCountHasBeenSet; }
    inline void SetColumnCount(long long value) { m_columnCountHasBeenSet = true; m_columnCount = value; }
    inline ResultSetMetadata& WithColumnCount(long long value) { SetColumnCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata of the columns in the result set.</p>
     */
    inline const Aws::Vector<ColumnMetadata>& GetColumnMetadata() const { return m_columnMetadata; }
    inline bool ColumnMetadataHasBeenSet() const { return m_columnMetadataHasBeenSet; }
    template<typename ColumnMetadataT = Aws::Vector<ColumnMetadata>>
    void SetColumnMetadata(ColumnMetadataT&& value) { m_columnMetadataHasBeenSet = true; m_columnMetadata = std::forward<ColumnMetadataT>(value); }
    template<typename ColumnMetadataT = Aws::Vector<ColumnMetadata>>
    ResultSetMetadata& WithColumnMetadata(ColumnMetadataT&& value) { SetColumnMetadata(std::forward<ColumnMetadataT>(value)); return *this;}
    template<typename ColumnMetadataT = ColumnMetadata>
    ResultSetMetadata& AddColumnMetadata(ColumnMetadataT&& value) { m_columnMetadataHasBeenSet = true; m_columnMetadata.emplace_back(std::forward<ColumnMetadataT>(value)); return *this; }
    ///@}
  private:

    long long m_columnCount{0};
    bool m_columnCountHasBeenSet = false;

    Aws::Vector<ColumnMetadata> m_columnMetadata;
    bool m_columnMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
