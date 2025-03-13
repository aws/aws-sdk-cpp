/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds-data/model/ColumnMetadata.h>
#include <aws/rds-data/model/Field.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace RDSDataService
{
namespace Model
{
  /**
   * <p>The response elements represent the output of a request to run a SQL
   * statement against a database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/ExecuteStatementResponse">AWS
   * API Reference</a></p>
   */
  class ExecuteStatementResult
  {
  public:
    AWS_RDSDATASERVICE_API ExecuteStatementResult() = default;
    AWS_RDSDATASERVICE_API ExecuteStatementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RDSDATASERVICE_API ExecuteStatementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The records returned by the SQL statement. This field is blank if the
     * <code>formatRecordsAs</code> parameter is set to <code>JSON</code>.</p>
     */
    inline const Aws::Vector<Aws::Vector<Field>>& GetRecords() const { return m_records; }
    template<typename RecordsT = Aws::Vector<Aws::Vector<Field>>>
    void SetRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records = std::forward<RecordsT>(value); }
    template<typename RecordsT = Aws::Vector<Aws::Vector<Field>>>
    ExecuteStatementResult& WithRecords(RecordsT&& value) { SetRecords(std::forward<RecordsT>(value)); return *this;}
    template<typename RecordsT = Aws::Vector<Field>>
    ExecuteStatementResult& AddRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records.emplace_back(std::forward<RecordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Metadata for the columns included in the results. This field is blank if the
     * <code>formatRecordsAs</code> parameter is set to <code>JSON</code>.</p>
     */
    inline const Aws::Vector<ColumnMetadata>& GetColumnMetadata() const { return m_columnMetadata; }
    template<typename ColumnMetadataT = Aws::Vector<ColumnMetadata>>
    void SetColumnMetadata(ColumnMetadataT&& value) { m_columnMetadataHasBeenSet = true; m_columnMetadata = std::forward<ColumnMetadataT>(value); }
    template<typename ColumnMetadataT = Aws::Vector<ColumnMetadata>>
    ExecuteStatementResult& WithColumnMetadata(ColumnMetadataT&& value) { SetColumnMetadata(std::forward<ColumnMetadataT>(value)); return *this;}
    template<typename ColumnMetadataT = ColumnMetadata>
    ExecuteStatementResult& AddColumnMetadata(ColumnMetadataT&& value) { m_columnMetadataHasBeenSet = true; m_columnMetadata.emplace_back(std::forward<ColumnMetadataT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of records updated by the request.</p>
     */
    inline long long GetNumberOfRecordsUpdated() const { return m_numberOfRecordsUpdated; }
    inline void SetNumberOfRecordsUpdated(long long value) { m_numberOfRecordsUpdatedHasBeenSet = true; m_numberOfRecordsUpdated = value; }
    inline ExecuteStatementResult& WithNumberOfRecordsUpdated(long long value) { SetNumberOfRecordsUpdated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Values for fields generated during a DML request.</p>  <p>The
     * <code>generatedFields</code> data isn't supported by Aurora PostgreSQL. To get
     * the values of generated fields, use the <code>RETURNING</code> clause. For more
     * information, see <a
     * href="https://www.postgresql.org/docs/10/dml-returning.html">Returning Data From
     * Modified Rows</a> in the PostgreSQL documentation.</p> 
     */
    inline const Aws::Vector<Field>& GetGeneratedFields() const { return m_generatedFields; }
    template<typename GeneratedFieldsT = Aws::Vector<Field>>
    void SetGeneratedFields(GeneratedFieldsT&& value) { m_generatedFieldsHasBeenSet = true; m_generatedFields = std::forward<GeneratedFieldsT>(value); }
    template<typename GeneratedFieldsT = Aws::Vector<Field>>
    ExecuteStatementResult& WithGeneratedFields(GeneratedFieldsT&& value) { SetGeneratedFields(std::forward<GeneratedFieldsT>(value)); return *this;}
    template<typename GeneratedFieldsT = Field>
    ExecuteStatementResult& AddGeneratedFields(GeneratedFieldsT&& value) { m_generatedFieldsHasBeenSet = true; m_generatedFields.emplace_back(std::forward<GeneratedFieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string value that represents the result set of a <code>SELECT</code>
     * statement in JSON format. This value is only present when the
     * <code>formatRecordsAs</code> parameter is set to <code>JSON</code>.</p> <p>The
     * size limit for this field is currently 10 MB. If the JSON-formatted string
     * representing the result set requires more than 10 MB, the call returns an
     * error.</p>
     */
    inline const Aws::String& GetFormattedRecords() const { return m_formattedRecords; }
    template<typename FormattedRecordsT = Aws::String>
    void SetFormattedRecords(FormattedRecordsT&& value) { m_formattedRecordsHasBeenSet = true; m_formattedRecords = std::forward<FormattedRecordsT>(value); }
    template<typename FormattedRecordsT = Aws::String>
    ExecuteStatementResult& WithFormattedRecords(FormattedRecordsT&& value) { SetFormattedRecords(std::forward<FormattedRecordsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ExecuteStatementResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::Vector<Field>> m_records;
    bool m_recordsHasBeenSet = false;

    Aws::Vector<ColumnMetadata> m_columnMetadata;
    bool m_columnMetadataHasBeenSet = false;

    long long m_numberOfRecordsUpdated{0};
    bool m_numberOfRecordsUpdatedHasBeenSet = false;

    Aws::Vector<Field> m_generatedFields;
    bool m_generatedFieldsHasBeenSet = false;

    Aws::String m_formattedRecords;
    bool m_formattedRecordsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
