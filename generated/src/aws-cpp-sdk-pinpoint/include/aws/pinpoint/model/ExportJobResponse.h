/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/ExportJobResource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint/model/JobStatus.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information about the status and settings of a job that exports
   * endpoint definitions to a file. The file can be added directly to an Amazon
   * Simple Storage Service (Amazon S3) bucket by using the Amazon Pinpoint API or
   * downloaded directly to a computer by using the Amazon Pinpoint
   * console.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ExportJobResponse">AWS
   * API Reference</a></p>
   */
  class ExportJobResponse
  {
  public:
    AWS_PINPOINT_API ExportJobResponse() = default;
    AWS_PINPOINT_API ExportJobResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API ExportJobResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the application that's associated with the export
     * job.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    ExportJobResponse& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of pieces that were processed successfully (completed) by the
     * export job, as of the time of the request.</p>
     */
    inline int GetCompletedPieces() const { return m_completedPieces; }
    inline bool CompletedPiecesHasBeenSet() const { return m_completedPiecesHasBeenSet; }
    inline void SetCompletedPieces(int value) { m_completedPiecesHasBeenSet = true; m_completedPieces = value; }
    inline ExportJobResponse& WithCompletedPieces(int value) { SetCompletedPieces(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date, in ISO 8601 format, when the export job was completed.</p>
     */
    inline const Aws::String& GetCompletionDate() const { return m_completionDate; }
    inline bool CompletionDateHasBeenSet() const { return m_completionDateHasBeenSet; }
    template<typename CompletionDateT = Aws::String>
    void SetCompletionDate(CompletionDateT&& value) { m_completionDateHasBeenSet = true; m_completionDate = std::forward<CompletionDateT>(value); }
    template<typename CompletionDateT = Aws::String>
    ExportJobResponse& WithCompletionDate(CompletionDateT&& value) { SetCompletionDate(std::forward<CompletionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date, in ISO 8601 format, when the export job was created.</p>
     */
    inline const Aws::String& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::String>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::String>
    ExportJobResponse& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource settings that apply to the export job.</p>
     */
    inline const ExportJobResource& GetDefinition() const { return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    template<typename DefinitionT = ExportJobResource>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = ExportJobResource>
    ExportJobResponse& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of pieces that weren't processed successfully (failed) by the
     * export job, as of the time of the request.</p>
     */
    inline int GetFailedPieces() const { return m_failedPieces; }
    inline bool FailedPiecesHasBeenSet() const { return m_failedPiecesHasBeenSet; }
    inline void SetFailedPieces(int value) { m_failedPiecesHasBeenSet = true; m_failedPieces = value; }
    inline ExportJobResponse& WithFailedPieces(int value) { SetFailedPieces(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of entries, one for each of the first 100 entries that weren't
     * processed successfully (failed) by the export job, if any.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailures() const { return m_failures; }
    inline bool FailuresHasBeenSet() const { return m_failuresHasBeenSet; }
    template<typename FailuresT = Aws::Vector<Aws::String>>
    void SetFailures(FailuresT&& value) { m_failuresHasBeenSet = true; m_failures = std::forward<FailuresT>(value); }
    template<typename FailuresT = Aws::Vector<Aws::String>>
    ExportJobResponse& WithFailures(FailuresT&& value) { SetFailures(std::forward<FailuresT>(value)); return *this;}
    template<typename FailuresT = Aws::String>
    ExportJobResponse& AddFailures(FailuresT&& value) { m_failuresHasBeenSet = true; m_failures.emplace_back(std::forward<FailuresT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the export job.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ExportJobResponse& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the export job. The job status is FAILED if Amazon Pinpoint
     * wasn't able to process one or more pieces in the job.</p>
     */
    inline JobStatus GetJobStatus() const { return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(JobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline ExportJobResponse& WithJobStatus(JobStatus value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of endpoint definitions that weren't processed successfully
     * (failed) by the export job, typically because an error, such as a syntax error,
     * occurred.</p>
     */
    inline int GetTotalFailures() const { return m_totalFailures; }
    inline bool TotalFailuresHasBeenSet() const { return m_totalFailuresHasBeenSet; }
    inline void SetTotalFailures(int value) { m_totalFailuresHasBeenSet = true; m_totalFailures = value; }
    inline ExportJobResponse& WithTotalFailures(int value) { SetTotalFailures(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of pieces that must be processed to complete the export job.
     * Each piece consists of an approximately equal portion of the endpoint
     * definitions that are part of the export job.</p>
     */
    inline int GetTotalPieces() const { return m_totalPieces; }
    inline bool TotalPiecesHasBeenSet() const { return m_totalPiecesHasBeenSet; }
    inline void SetTotalPieces(int value) { m_totalPiecesHasBeenSet = true; m_totalPieces = value; }
    inline ExportJobResponse& WithTotalPieces(int value) { SetTotalPieces(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of endpoint definitions that were processed by the export
     * job.</p>
     */
    inline int GetTotalProcessed() const { return m_totalProcessed; }
    inline bool TotalProcessedHasBeenSet() const { return m_totalProcessedHasBeenSet; }
    inline void SetTotalProcessed(int value) { m_totalProcessedHasBeenSet = true; m_totalProcessed = value; }
    inline ExportJobResponse& WithTotalProcessed(int value) { SetTotalProcessed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job type. This value is EXPORT for export jobs.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    ExportJobResponse& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    int m_completedPieces{0};
    bool m_completedPiecesHasBeenSet = false;

    Aws::String m_completionDate;
    bool m_completionDateHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    ExportJobResource m_definition;
    bool m_definitionHasBeenSet = false;

    int m_failedPieces{0};
    bool m_failedPiecesHasBeenSet = false;

    Aws::Vector<Aws::String> m_failures;
    bool m_failuresHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    JobStatus m_jobStatus{JobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    int m_totalFailures{0};
    bool m_totalFailuresHasBeenSet = false;

    int m_totalPieces{0};
    bool m_totalPiecesHasBeenSet = false;

    int m_totalProcessed{0};
    bool m_totalProcessedHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
