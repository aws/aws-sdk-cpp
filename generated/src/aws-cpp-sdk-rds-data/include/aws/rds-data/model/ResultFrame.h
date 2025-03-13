/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/rds-data/model/ResultSetMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds-data/model/Record.h>
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
   * <p>The result set returned by a SQL statement.</p>  <p>This data structure
   * is only used with the deprecated <code>ExecuteSql</code> operation. Use the
   * <code>BatchExecuteStatement</code> or <code>ExecuteStatement</code> operation
   * instead.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/ResultFrame">AWS
   * API Reference</a></p>
   */
  class ResultFrame
  {
  public:
    AWS_RDSDATASERVICE_API ResultFrame() = default;
    AWS_RDSDATASERVICE_API ResultFrame(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API ResultFrame& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The result-set metadata in the result set.</p>
     */
    inline const ResultSetMetadata& GetResultSetMetadata() const { return m_resultSetMetadata; }
    inline bool ResultSetMetadataHasBeenSet() const { return m_resultSetMetadataHasBeenSet; }
    template<typename ResultSetMetadataT = ResultSetMetadata>
    void SetResultSetMetadata(ResultSetMetadataT&& value) { m_resultSetMetadataHasBeenSet = true; m_resultSetMetadata = std::forward<ResultSetMetadataT>(value); }
    template<typename ResultSetMetadataT = ResultSetMetadata>
    ResultFrame& WithResultSetMetadata(ResultSetMetadataT&& value) { SetResultSetMetadata(std::forward<ResultSetMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The records in the result set.</p>
     */
    inline const Aws::Vector<Record>& GetRecords() const { return m_records; }
    inline bool RecordsHasBeenSet() const { return m_recordsHasBeenSet; }
    template<typename RecordsT = Aws::Vector<Record>>
    void SetRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records = std::forward<RecordsT>(value); }
    template<typename RecordsT = Aws::Vector<Record>>
    ResultFrame& WithRecords(RecordsT&& value) { SetRecords(std::forward<RecordsT>(value)); return *this;}
    template<typename RecordsT = Record>
    ResultFrame& AddRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records.emplace_back(std::forward<RecordsT>(value)); return *this; }
    ///@}
  private:

    ResultSetMetadata m_resultSetMetadata;
    bool m_resultSetMetadataHasBeenSet = false;

    Aws::Vector<Record> m_records;
    bool m_recordsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
