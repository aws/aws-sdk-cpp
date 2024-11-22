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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace NeptuneGraph
{
namespace Model
{

  /**
   * <p>Provides details about an export task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/ExportTaskSummary">AWS
   * API Reference</a></p>
   */
  class ExportTaskSummary
  {
  public:
    AWS_NEPTUNEGRAPH_API ExportTaskSummary();
    AWS_NEPTUNEGRAPH_API ExportTaskSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API ExportTaskSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source graph identifier of the export task.</p>
     */
    inline const Aws::String& GetGraphId() const{ return m_graphId; }
    inline bool GraphIdHasBeenSet() const { return m_graphIdHasBeenSet; }
    inline void SetGraphId(const Aws::String& value) { m_graphIdHasBeenSet = true; m_graphId = value; }
    inline void SetGraphId(Aws::String&& value) { m_graphIdHasBeenSet = true; m_graphId = std::move(value); }
    inline void SetGraphId(const char* value) { m_graphIdHasBeenSet = true; m_graphId.assign(value); }
    inline ExportTaskSummary& WithGraphId(const Aws::String& value) { SetGraphId(value); return *this;}
    inline ExportTaskSummary& WithGraphId(Aws::String&& value) { SetGraphId(std::move(value)); return *this;}
    inline ExportTaskSummary& WithGraphId(const char* value) { SetGraphId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that will allow the data to be exported to the
     * destination.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline ExportTaskSummary& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline ExportTaskSummary& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline ExportTaskSummary& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the export task.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }
    inline ExportTaskSummary& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline ExportTaskSummary& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline ExportTaskSummary& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the export task.</p>
     */
    inline const ExportTaskStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ExportTaskStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ExportTaskStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ExportTaskSummary& WithStatus(const ExportTaskStatus& value) { SetStatus(value); return *this;}
    inline ExportTaskSummary& WithStatus(ExportTaskStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the export task.</p>
     */
    inline const ExportFormat& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const ExportFormat& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(ExportFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline ExportTaskSummary& WithFormat(const ExportFormat& value) { SetFormat(value); return *this;}
    inline ExportTaskSummary& WithFormat(ExportFormat&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 URI of the export task where data will be exported to.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }
    inline ExportTaskSummary& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}
    inline ExportTaskSummary& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}
    inline ExportTaskSummary& WithDestination(const char* value) { SetDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key identifier of the export task.</p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const{ return m_kmsKeyIdentifier; }
    inline bool KmsKeyIdentifierHasBeenSet() const { return m_kmsKeyIdentifierHasBeenSet; }
    inline void SetKmsKeyIdentifier(const Aws::String& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = value; }
    inline void SetKmsKeyIdentifier(Aws::String&& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = std::move(value); }
    inline void SetKmsKeyIdentifier(const char* value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier.assign(value); }
    inline ExportTaskSummary& WithKmsKeyIdentifier(const Aws::String& value) { SetKmsKeyIdentifier(value); return *this;}
    inline ExportTaskSummary& WithKmsKeyIdentifier(Aws::String&& value) { SetKmsKeyIdentifier(std::move(value)); return *this;}
    inline ExportTaskSummary& WithKmsKeyIdentifier(const char* value) { SetKmsKeyIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parquet type of the export task.</p>
     */
    inline const ParquetType& GetParquetType() const{ return m_parquetType; }
    inline bool ParquetTypeHasBeenSet() const { return m_parquetTypeHasBeenSet; }
    inline void SetParquetType(const ParquetType& value) { m_parquetTypeHasBeenSet = true; m_parquetType = value; }
    inline void SetParquetType(ParquetType&& value) { m_parquetTypeHasBeenSet = true; m_parquetType = std::move(value); }
    inline ExportTaskSummary& WithParquetType(const ParquetType& value) { SetParquetType(value); return *this;}
    inline ExportTaskSummary& WithParquetType(ParquetType&& value) { SetParquetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the export task has this status value.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline ExportTaskSummary& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline ExportTaskSummary& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline ExportTaskSummary& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}
  private:

    Aws::String m_graphId;
    bool m_graphIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    ExportTaskStatus m_status;
    bool m_statusHasBeenSet = false;

    ExportFormat m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_kmsKeyIdentifier;
    bool m_kmsKeyIdentifierHasBeenSet = false;

    ParquetType m_parquetType;
    bool m_parquetTypeHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
