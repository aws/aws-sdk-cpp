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
    AWS_RDSDATASERVICE_API ResultSetMetadata();
    AWS_RDSDATASERVICE_API ResultSetMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API ResultSetMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of columns in the result set.</p>
     */
    inline long long GetColumnCount() const{ return m_columnCount; }

    /**
     * <p>The number of columns in the result set.</p>
     */
    inline bool ColumnCountHasBeenSet() const { return m_columnCountHasBeenSet; }

    /**
     * <p>The number of columns in the result set.</p>
     */
    inline void SetColumnCount(long long value) { m_columnCountHasBeenSet = true; m_columnCount = value; }

    /**
     * <p>The number of columns in the result set.</p>
     */
    inline ResultSetMetadata& WithColumnCount(long long value) { SetColumnCount(value); return *this;}


    /**
     * <p>The metadata of the columns in the result set.</p>
     */
    inline const Aws::Vector<ColumnMetadata>& GetColumnMetadata() const{ return m_columnMetadata; }

    /**
     * <p>The metadata of the columns in the result set.</p>
     */
    inline bool ColumnMetadataHasBeenSet() const { return m_columnMetadataHasBeenSet; }

    /**
     * <p>The metadata of the columns in the result set.</p>
     */
    inline void SetColumnMetadata(const Aws::Vector<ColumnMetadata>& value) { m_columnMetadataHasBeenSet = true; m_columnMetadata = value; }

    /**
     * <p>The metadata of the columns in the result set.</p>
     */
    inline void SetColumnMetadata(Aws::Vector<ColumnMetadata>&& value) { m_columnMetadataHasBeenSet = true; m_columnMetadata = std::move(value); }

    /**
     * <p>The metadata of the columns in the result set.</p>
     */
    inline ResultSetMetadata& WithColumnMetadata(const Aws::Vector<ColumnMetadata>& value) { SetColumnMetadata(value); return *this;}

    /**
     * <p>The metadata of the columns in the result set.</p>
     */
    inline ResultSetMetadata& WithColumnMetadata(Aws::Vector<ColumnMetadata>&& value) { SetColumnMetadata(std::move(value)); return *this;}

    /**
     * <p>The metadata of the columns in the result set.</p>
     */
    inline ResultSetMetadata& AddColumnMetadata(const ColumnMetadata& value) { m_columnMetadataHasBeenSet = true; m_columnMetadata.push_back(value); return *this; }

    /**
     * <p>The metadata of the columns in the result set.</p>
     */
    inline ResultSetMetadata& AddColumnMetadata(ColumnMetadata&& value) { m_columnMetadataHasBeenSet = true; m_columnMetadata.push_back(std::move(value)); return *this; }

  private:

    long long m_columnCount;
    bool m_columnCountHasBeenSet = false;

    Aws::Vector<ColumnMetadata> m_columnMetadata;
    bool m_columnMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
