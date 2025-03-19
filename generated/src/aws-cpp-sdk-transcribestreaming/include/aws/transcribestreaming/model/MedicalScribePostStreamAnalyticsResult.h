/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/model/ClinicalNoteGenerationResult.h>
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
namespace TranscribeStreamingService
{
namespace Model
{

  /**
   * <p>Contains details for the result of post-stream analytics. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/MedicalScribePostStreamAnalyticsResult">AWS
   * API Reference</a></p>
   */
  class MedicalScribePostStreamAnalyticsResult
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribePostStreamAnalyticsResult() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribePostStreamAnalyticsResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribePostStreamAnalyticsResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides the Clinical Note Generation result for post-stream analytics.</p>
     */
    inline const ClinicalNoteGenerationResult& GetClinicalNoteGenerationResult() const { return m_clinicalNoteGenerationResult; }
    inline bool ClinicalNoteGenerationResultHasBeenSet() const { return m_clinicalNoteGenerationResultHasBeenSet; }
    template<typename ClinicalNoteGenerationResultT = ClinicalNoteGenerationResult>
    void SetClinicalNoteGenerationResult(ClinicalNoteGenerationResultT&& value) { m_clinicalNoteGenerationResultHasBeenSet = true; m_clinicalNoteGenerationResult = std::forward<ClinicalNoteGenerationResultT>(value); }
    template<typename ClinicalNoteGenerationResultT = ClinicalNoteGenerationResult>
    MedicalScribePostStreamAnalyticsResult& WithClinicalNoteGenerationResult(ClinicalNoteGenerationResultT&& value) { SetClinicalNoteGenerationResult(std::forward<ClinicalNoteGenerationResultT>(value)); return *this;}
    ///@}
  private:

    ClinicalNoteGenerationResult m_clinicalNoteGenerationResult;
    bool m_clinicalNoteGenerationResultHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
