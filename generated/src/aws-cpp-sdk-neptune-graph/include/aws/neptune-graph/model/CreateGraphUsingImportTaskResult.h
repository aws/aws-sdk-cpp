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
  class CreateGraphUsingImportTaskResult
  {
  public:
    AWS_NEPTUNEGRAPH_API CreateGraphUsingImportTaskResult() = default;
    AWS_NEPTUNEGRAPH_API CreateGraphUsingImportTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEGRAPH_API CreateGraphUsingImportTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline const Aws::String& GetGraphId() const { return m_graphId; }
    template<typename GraphIdT = Aws::String>
    void SetGraphId(GraphIdT&& value) { m_graphIdHasBeenSet = true; m_graphId = std::forward<GraphIdT>(value); }
    template<typename GraphIdT = Aws::String>
    CreateGraphUsingImportTaskResult& WithGraphId(GraphIdT&& value) { SetGraphId(std::forward<GraphIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the import task.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    CreateGraphUsingImportTaskResult& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL identifying to the location of the data to be imported. This can be an
     * Amazon S3 path, or can point to a Neptune database endpoint or snapshot.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    CreateGraphUsingImportTaskResult& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the format of S3 data to be imported. Valid values are
     * <code>CSV</code>, which identifies the <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-format-gremlin.html">Gremlin
     * CSV format</a>, <code>OPENCYPHER</code>, which identifies the <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-format-opencypher.html">openCypher
     * load format</a>, or <code>ntriples</code>, which identifies the <a
     * href="https://docs.aws.amazon.com/neptune-analytics/latest/userguide/using-rdf-data.html">RDF
     * n-triples</a> format.</p>
     */
    inline Format GetFormat() const { return m_format; }
    inline void SetFormat(Format value) { m_formatHasBeenSet = true; m_format = value; }
    inline CreateGraphUsingImportTaskResult& WithFormat(Format value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parquet type of the import task.</p>
     */
    inline ParquetType GetParquetType() const { return m_parquetType; }
    inline void SetParquetType(ParquetType value) { m_parquetTypeHasBeenSet = true; m_parquetType = value; }
    inline CreateGraphUsingImportTaskResult& WithParquetType(ParquetType value) { SetParquetType(value); return *this;}
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
    CreateGraphUsingImportTaskResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the import task.</p>
     */
    inline ImportTaskStatus GetStatus() const { return m_status; }
    inline void SetStatus(ImportTaskStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateGraphUsingImportTaskResult& WithStatus(ImportTaskStatus value) { SetStatus(value); return *this;}
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
    CreateGraphUsingImportTaskResult& WithImportOptions(ImportOptionsT&& value) { SetImportOptions(std::forward<ImportOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateGraphUsingImportTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
