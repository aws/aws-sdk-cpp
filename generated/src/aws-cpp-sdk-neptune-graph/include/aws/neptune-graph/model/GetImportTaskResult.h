/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune-graph/model/Format.h>
#include <aws/neptune-graph/model/ParquetType.h>
#include <aws/neptune-graph/model/ImportTaskStatus.h>
#include <aws/neptune-graph/model/ImportOptions.h>
#include <aws/neptune-graph/model/ImportTaskDetails.h>
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
namespace NeptuneGraph
{
namespace Model
{
  class GetImportTaskResult
  {
  public:
    AWS_NEPTUNEGRAPH_API GetImportTaskResult();
    AWS_NEPTUNEGRAPH_API GetImportTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEGRAPH_API GetImportTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline const Aws::String& GetGraphId() const{ return m_graphId; }
    inline void SetGraphId(const Aws::String& value) { m_graphId = value; }
    inline void SetGraphId(Aws::String&& value) { m_graphId = std::move(value); }
    inline void SetGraphId(const char* value) { m_graphId.assign(value); }
    inline GetImportTaskResult& WithGraphId(const Aws::String& value) { SetGraphId(value); return *this;}
    inline GetImportTaskResult& WithGraphId(Aws::String&& value) { SetGraphId(std::move(value)); return *this;}
    inline GetImportTaskResult& WithGraphId(const char* value) { SetGraphId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the import task.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline void SetTaskId(const Aws::String& value) { m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskId.assign(value); }
    inline GetImportTaskResult& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline GetImportTaskResult& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline GetImportTaskResult& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL identifying to the location of the data to be imported. This can be an
     * Amazon S3 path, or can point to a Neptune database endpoint or snapshot</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline void SetSource(const Aws::String& value) { m_source = value; }
    inline void SetSource(Aws::String&& value) { m_source = std::move(value); }
    inline void SetSource(const char* value) { m_source.assign(value); }
    inline GetImportTaskResult& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline GetImportTaskResult& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline GetImportTaskResult& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the format of S3 data to be imported. Valid values are
     * <code>CSV</code>, which identifies the <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-format-gremlin.html">Gremlin
     * CSV format</a> or <code>OPENCYPHER</code>, which identies the <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-format-opencypher.html">openCypher
     * load format</a>.</p>
     */
    inline const Format& GetFormat() const{ return m_format; }
    inline void SetFormat(const Format& value) { m_format = value; }
    inline void SetFormat(Format&& value) { m_format = std::move(value); }
    inline GetImportTaskResult& WithFormat(const Format& value) { SetFormat(value); return *this;}
    inline GetImportTaskResult& WithFormat(Format&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parquet type of the import task.</p>
     */
    inline const ParquetType& GetParquetType() const{ return m_parquetType; }
    inline void SetParquetType(const ParquetType& value) { m_parquetType = value; }
    inline void SetParquetType(ParquetType&& value) { m_parquetType = std::move(value); }
    inline GetImportTaskResult& WithParquetType(const ParquetType& value) { SetParquetType(value); return *this;}
    inline GetImportTaskResult& WithParquetType(ParquetType&& value) { SetParquetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that will allow access to the data that is to be
     * imported.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline GetImportTaskResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline GetImportTaskResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline GetImportTaskResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the import task:</p> <ul> <li> <p> <b>INITIALIZING</b>   –  
     * The necessary resources needed to create the graph are being prepared.</p> </li>
     * <li> <p> <b>ANALYZING_DATA</b>   –   The data is being analyzed to determine the
     * optimal infrastructure configuration for the new graph.</p> </li> <li> <p>
     * <b>RE_PROVISIONING</b>   –   The data did not fit into the provisioned graph, so
     * it is being re-provisioned with more capacity.</p> </li> <li> <p>
     * <b>IMPORTING</b>   –   The data is being loaded.</p> </li> <li> <p>
     * <b>ERROR_ENCOUNTERED</b>   –   An error has been encountered while trying to
     * create the graph and import the data.</p> </li> <li> <p>
     * <b>ERROR_ENCOUNTERED_ROLLING_BACK</b>   –   Because of the error that was
     * encountered, the graph is being rolled back and all its resources released.</p>
     * </li> <li> <p> <b>SUCCEEDED</b>   –   Graph creation and data loading
     * succeeded.</p> </li> <li> <p> <b>FAILED</b>   –   Graph creation or data loading
     * failed. When the status is <code>FAILED</code>, you can use
     * <code>get-graphs</code> to get more information about the state of the
     * graph.</p> </li> <li> <p> <b>CANCELLING</b>   –   Because you cancelled the
     * import task, cancellation is in progress.</p> </li> <li> <p> <b>CANCELLED</b>  
     * –   You have successfully cancelled the import task.</p> </li> </ul>
     */
    inline const ImportTaskStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ImportTaskStatus& value) { m_status = value; }
    inline void SetStatus(ImportTaskStatus&& value) { m_status = std::move(value); }
    inline GetImportTaskResult& WithStatus(const ImportTaskStatus& value) { SetStatus(value); return *this;}
    inline GetImportTaskResult& WithStatus(ImportTaskStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains options for controlling the import process. For example, if the
     * <code>failOnError</code> key is set to <code>false</code>, the import skips
     * problem data and attempts to continue (whereas if set to <code>true</code>, the
     * default, or if omitted, the import operation halts immediately when an error is
     * encountered.</p>
     */
    inline const ImportOptions& GetImportOptions() const{ return m_importOptions; }
    inline void SetImportOptions(const ImportOptions& value) { m_importOptions = value; }
    inline void SetImportOptions(ImportOptions&& value) { m_importOptions = std::move(value); }
    inline GetImportTaskResult& WithImportOptions(const ImportOptions& value) { SetImportOptions(value); return *this;}
    inline GetImportTaskResult& WithImportOptions(ImportOptions&& value) { SetImportOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the specified import task.</p>
     */
    inline const ImportTaskDetails& GetImportTaskDetails() const{ return m_importTaskDetails; }
    inline void SetImportTaskDetails(const ImportTaskDetails& value) { m_importTaskDetails = value; }
    inline void SetImportTaskDetails(ImportTaskDetails&& value) { m_importTaskDetails = std::move(value); }
    inline GetImportTaskResult& WithImportTaskDetails(const ImportTaskDetails& value) { SetImportTaskDetails(value); return *this;}
    inline GetImportTaskResult& WithImportTaskDetails(ImportTaskDetails&& value) { SetImportTaskDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of the current attempts to execute the import task.</p>
     */
    inline int GetAttemptNumber() const{ return m_attemptNumber; }
    inline void SetAttemptNumber(int value) { m_attemptNumber = value; }
    inline GetImportTaskResult& WithAttemptNumber(int value) { SetAttemptNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the import task has this status value.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }
    inline GetImportTaskResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline GetImportTaskResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline GetImportTaskResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetImportTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetImportTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetImportTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_graphId;

    Aws::String m_taskId;

    Aws::String m_source;

    Format m_format;

    ParquetType m_parquetType;

    Aws::String m_roleArn;

    ImportTaskStatus m_status;

    ImportOptions m_importOptions;

    ImportTaskDetails m_importTaskDetails;

    int m_attemptNumber;

    Aws::String m_statusReason;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
