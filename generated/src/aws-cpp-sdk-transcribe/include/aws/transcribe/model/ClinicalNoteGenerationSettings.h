/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/MedicalScribeNoteTemplate.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>The output configuration for clinical note generation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ClinicalNoteGenerationSettings">AWS
   * API Reference</a></p>
   */
  class ClinicalNoteGenerationSettings
  {
  public:
    AWS_TRANSCRIBESERVICE_API ClinicalNoteGenerationSettings() = default;
    AWS_TRANSCRIBESERVICE_API ClinicalNoteGenerationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API ClinicalNoteGenerationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify one of the following templates to use for the clinical note summary.
     * The default is <code>HISTORY_AND_PHYSICAL</code>.</p> <ul> <li>
     * <p>HISTORY_AND_PHYSICAL: Provides summaries for key sections of the clinical
     * documentation. Examples of sections include Chief Complaint, History of Present
     * Illness, Review of Systems, Past Medical History, Assessment, and Plan. </p>
     * </li> <li> <p>GIRPP: Provides summaries based on the patients progress toward
     * goals. Examples of sections include Goal, Intervention, Response, Progress, and
     * Plan.</p> </li> <li> <p>BIRP: Focuses on the patient's behavioral patterns and
     * responses. Examples of sections include Behavior, Intervention, Response, and
     * Plan.</p> </li> <li> <p>SIRP: Emphasizes the situational context of therapy.
     * Examples of sections include Situation, Intervention, Response, and Plan.</p>
     * </li> <li> <p>DAP: Provides a simplified format for clinical documentation.
     * Examples of sections include Data, Assessment, and Plan.</p> </li> <li>
     * <p>BEHAVIORAL_SOAP: Behavioral health focused documentation format. Examples of
     * sections include Subjective, Objective, Assessment, and Plan.</p> </li> <li>
     * <p>PHYSICAL_SOAP: Physical health focused documentation format. Examples of
     * sections include Subjective, Objective, Assessment, and Plan.</p> </li> </ul>
     */
    inline MedicalScribeNoteTemplate GetNoteTemplate() const { return m_noteTemplate; }
    inline bool NoteTemplateHasBeenSet() const { return m_noteTemplateHasBeenSet; }
    inline void SetNoteTemplate(MedicalScribeNoteTemplate value) { m_noteTemplateHasBeenSet = true; m_noteTemplate = value; }
    inline ClinicalNoteGenerationSettings& WithNoteTemplate(MedicalScribeNoteTemplate value) { SetNoteTemplate(value); return *this;}
    ///@}
  private:

    MedicalScribeNoteTemplate m_noteTemplate{MedicalScribeNoteTemplate::NOT_SET};
    bool m_noteTemplateHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
