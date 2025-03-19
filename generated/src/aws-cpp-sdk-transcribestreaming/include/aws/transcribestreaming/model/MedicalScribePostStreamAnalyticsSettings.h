/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/model/ClinicalNoteGenerationSettings.h>
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
   * <p>The settings for post-stream analytics. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/MedicalScribePostStreamAnalyticsSettings">AWS
   * API Reference</a></p>
   */
  class MedicalScribePostStreamAnalyticsSettings
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribePostStreamAnalyticsSettings() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribePostStreamAnalyticsSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribePostStreamAnalyticsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify settings for the post-stream clinical note generation.</p>
     */
    inline const ClinicalNoteGenerationSettings& GetClinicalNoteGenerationSettings() const { return m_clinicalNoteGenerationSettings; }
    inline bool ClinicalNoteGenerationSettingsHasBeenSet() const { return m_clinicalNoteGenerationSettingsHasBeenSet; }
    template<typename ClinicalNoteGenerationSettingsT = ClinicalNoteGenerationSettings>
    void SetClinicalNoteGenerationSettings(ClinicalNoteGenerationSettingsT&& value) { m_clinicalNoteGenerationSettingsHasBeenSet = true; m_clinicalNoteGenerationSettings = std::forward<ClinicalNoteGenerationSettingsT>(value); }
    template<typename ClinicalNoteGenerationSettingsT = ClinicalNoteGenerationSettings>
    MedicalScribePostStreamAnalyticsSettings& WithClinicalNoteGenerationSettings(ClinicalNoteGenerationSettingsT&& value) { SetClinicalNoteGenerationSettings(std::forward<ClinicalNoteGenerationSettingsT>(value)); return *this;}
    ///@}
  private:

    ClinicalNoteGenerationSettings m_clinicalNoteGenerationSettings;
    bool m_clinicalNoteGenerationSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
