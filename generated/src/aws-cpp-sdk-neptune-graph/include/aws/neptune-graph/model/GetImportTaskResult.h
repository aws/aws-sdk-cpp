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
    AWS_NEPTUNEGRAPH_API GetImportTaskResult() = default;
    AWS_NEPTUNEGRAPH_API GetImportTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEGRAPH_API GetImportTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline const Aws::String& GetGraphId() const { return m_graphId; }
    template<typename GraphIdT = Aws::String>
    void SetGraphId(GraphIdT&& value) { m_graphIdHasBeenSet = true; m_graphId = std::forward<GraphIdT>(value); }
    template<typename GraphIdT = Aws::String>
    GetImportTaskResult& WithGraphId(GraphIdT&& value) { SetGraphId(std::forward<GraphIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the import task.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    GetImportTaskResult& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL identifying to the location of the data to be imported. This can be an
     * Amazon S3 path, or can point to a Neptune database endpoint or snapshot</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    GetImportTaskResult& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
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
    inline Format GetFormat() const { return m_format; }
    inline void SetFormat(Format value) { m_formatHasBeenSet = true; m_format = value; }
    inline GetImportTaskResult& WithFormat(Format value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parquet type of the import task.</p>
     */
    inline ParquetType GetParquetType() const { return m_parquetType; }
    inline void SetParquetType(ParquetType value) { m_parquetTypeHasBeenSet = true; m_parquetType = value; }
    inline GetImportTaskResult& WithParquetType(ParquetType value) { SetParquetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that will allow access to the data that is to be
     * imported.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    GetImportTaskResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
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
    inline ImportTaskStatus GetStatus() const { return m_status; }
    inline void SetStatus(ImportTaskStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetImportTaskResult& WithStatus(ImportTaskStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains options for controlling the import process. For example, if the
     * <code>failOnError</code> key is set to <code>false</code>, the import skips
     * problem data and attempts to continue (whereas if set to <code>true</code>, the
     * default, or if omitted, the import operation halts immediately when an error is
     * encountered.</p>
     */
    inline const ImportOptions& GetImportOptions() const { return m_importOptions; }
    template<typename ImportOptionsT = ImportOptions>
    void SetImportOptions(ImportOptionsT&& value) { m_importOptionsHasBeenSet = true; m_importOptions = std::forward<ImportOptionsT>(value); }
    template<typename ImportOptionsT = ImportOptions>
    GetImportTaskResult& WithImportOptions(ImportOptionsT&& value) { SetImportOptions(std::forward<ImportOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the specified import task.</p>
     */
    inline const ImportTaskDetails& GetImportTaskDetails() const { return m_importTaskDetails; }
    template<typename ImportTaskDetailsT = ImportTaskDetails>
    void SetImportTaskDetails(ImportTaskDetailsT&& value) { m_importTaskDetailsHasBeenSet = true; m_importTaskDetails = std::forward<ImportTaskDetailsT>(value); }
    template<typename ImportTaskDetailsT = ImportTaskDetails>
    GetImportTaskResult& WithImportTaskDetails(ImportTaskDetailsT&& value) { SetImportTaskDetails(std::forward<ImportTaskDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of the current attempts to execute the import task.</p>
     */
    inline int GetAttemptNumber() const { return m_attemptNumber; }
    inline void SetAttemptNumber(int value) { m_attemptNumberHasBeenSet = true; m_attemptNumber = value; }
    inline GetImportTaskResult& WithAttemptNumber(int value) { SetAttemptNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the import task has this status value.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    GetImportTaskResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetImportTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_graphId;
    bool m_graphIdHasBeenSet = false;

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Format m_format{Format::NOT_SET};
    bool m_formatHasBeenSet = false;

    ParquetType m_parquetType{ParquetType::NOT_SET};
    bool m_parquetTypeHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    ImportTaskStatus m_status{ImportTaskStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ImportOptions m_importOptions;
    bool m_importOptionsHasBeenSet = false;

    ImportTaskDetails m_importTaskDetails;
    bool m_importTaskDetailsHasBeenSet = false;

    int m_attemptNumber{0};
    bool m_attemptNumberHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
