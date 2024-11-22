/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune-graph/model/ExportTaskStatus.h>
#include <aws/neptune-graph/model/ExportFormat.h>
#include <aws/neptune-graph/model/ParquetType.h>
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
  class CancelExportTaskResult
  {
  public:
    AWS_NEPTUNEGRAPH_API CancelExportTaskResult();
    AWS_NEPTUNEGRAPH_API CancelExportTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEGRAPH_API CancelExportTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The source graph identifier of the cancelled export task.</p>
     */
    inline const Aws::String& GetGraphId() const{ return m_graphId; }
    inline void SetGraphId(const Aws::String& value) { m_graphId = value; }
    inline void SetGraphId(Aws::String&& value) { m_graphId = std::move(value); }
    inline void SetGraphId(const char* value) { m_graphId.assign(value); }
    inline CancelExportTaskResult& WithGraphId(const Aws::String& value) { SetGraphId(value); return *this;}
    inline CancelExportTaskResult& WithGraphId(Aws::String&& value) { SetGraphId(std::move(value)); return *this;}
    inline CancelExportTaskResult& WithGraphId(const char* value) { SetGraphId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that will allow the exporting of data to the
     * destination.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline CancelExportTaskResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CancelExportTaskResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CancelExportTaskResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the export task.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline void SetTaskId(const Aws::String& value) { m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskId.assign(value); }
    inline CancelExportTaskResult& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline CancelExportTaskResult& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline CancelExportTaskResult& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the export task. The status is <code>CANCELLING</code>
     * when the export task is cancelled.</p>
     */
    inline const ExportTaskStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ExportTaskStatus& value) { m_status = value; }
    inline void SetStatus(ExportTaskStatus&& value) { m_status = std::move(value); }
    inline CancelExportTaskResult& WithStatus(const ExportTaskStatus& value) { SetStatus(value); return *this;}
    inline CancelExportTaskResult& WithStatus(ExportTaskStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the cancelled export task.</p>
     */
    inline const ExportFormat& GetFormat() const{ return m_format; }
    inline void SetFormat(const ExportFormat& value) { m_format = value; }
    inline void SetFormat(ExportFormat&& value) { m_format = std::move(value); }
    inline CancelExportTaskResult& WithFormat(const ExportFormat& value) { SetFormat(value); return *this;}
    inline CancelExportTaskResult& WithFormat(ExportFormat&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 URI of the cancelled export task where data will be exported
     * to.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }
    inline void SetDestination(const Aws::String& value) { m_destination = value; }
    inline void SetDestination(Aws::String&& value) { m_destination = std::move(value); }
    inline void SetDestination(const char* value) { m_destination.assign(value); }
    inline CancelExportTaskResult& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}
    inline CancelExportTaskResult& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}
    inline CancelExportTaskResult& WithDestination(const char* value) { SetDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key identifier of the cancelled export task.</p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const{ return m_kmsKeyIdentifier; }
    inline void SetKmsKeyIdentifier(const Aws::String& value) { m_kmsKeyIdentifier = value; }
    inline void SetKmsKeyIdentifier(Aws::String&& value) { m_kmsKeyIdentifier = std::move(value); }
    inline void SetKmsKeyIdentifier(const char* value) { m_kmsKeyIdentifier.assign(value); }
    inline CancelExportTaskResult& WithKmsKeyIdentifier(const Aws::String& value) { SetKmsKeyIdentifier(value); return *this;}
    inline CancelExportTaskResult& WithKmsKeyIdentifier(Aws::String&& value) { SetKmsKeyIdentifier(std::move(value)); return *this;}
    inline CancelExportTaskResult& WithKmsKeyIdentifier(const char* value) { SetKmsKeyIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parquet type of the cancelled export task.</p>
     */
    inline const ParquetType& GetParquetType() const{ return m_parquetType; }
    inline void SetParquetType(const ParquetType& value) { m_parquetType = value; }
    inline void SetParquetType(ParquetType&& value) { m_parquetType = std::move(value); }
    inline CancelExportTaskResult& WithParquetType(const ParquetType& value) { SetParquetType(value); return *this;}
    inline CancelExportTaskResult& WithParquetType(ParquetType&& value) { SetParquetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the export task has this status value.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }
    inline CancelExportTaskResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline CancelExportTaskResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline CancelExportTaskResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CancelExportTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CancelExportTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CancelExportTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_graphId;

    Aws::String m_roleArn;

    Aws::String m_taskId;

    ExportTaskStatus m_status;

    ExportFormat m_format;

    Aws::String m_destination;

    Aws::String m_kmsKeyIdentifier;

    ParquetType m_parquetType;

    Aws::String m_statusReason;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
