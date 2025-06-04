/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribestreaming/model/MedicalScribeNoteTemplate.h>
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
   * <p>The output configuration for aggregated transcript and clinical note
   * generation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/ClinicalNoteGenerationSettings">AWS
   * API Reference</a></p>
   */
  class ClinicalNoteGenerationSettings
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API ClinicalNoteGenerationSettings() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API ClinicalNoteGenerationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API ClinicalNoteGenerationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon S3 bucket where you want the output of Amazon Web
     * Services HealthScribe post-stream analytics stored. Don't include the
     * <code>S3://</code> prefix of the specified bucket. </p> <p>HealthScribe outputs
     * transcript and clinical note files under the prefix:
     * <code>S3://$output-bucket-name/healthscribe-streaming/session-id/post-stream-analytics/clinical-notes</code>
     * </p> <p>The role <code>ResourceAccessRoleArn</code> specified in the
     * <code>MedicalScribeConfigurationEvent</code> must have permission to use the
     * specified location. You can change Amazon S3 permissions using the <a
     * href="https://console.aws.amazon.com/s3"> Amazon Web Services Management Console
     * </a>. See also <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/security_iam_id-based-policy-examples.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles </a> . </p>
     */
    inline const Aws::String& GetOutputBucketName() const { return m_outputBucketName; }
    inline bool OutputBucketNameHasBeenSet() const { return m_outputBucketNameHasBeenSet; }
    template<typename OutputBucketNameT = Aws::String>
    void SetOutputBucketName(OutputBucketNameT&& value) { m_outputBucketNameHasBeenSet = true; m_outputBucketName = std::forward<OutputBucketNameT>(value); }
    template<typename OutputBucketNameT = Aws::String>
    ClinicalNoteGenerationSettings& WithOutputBucketName(OutputBucketNameT&& value) { SetOutputBucketName(std::forward<OutputBucketNameT>(value)); return *this;}
    ///@}

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

    Aws::String m_outputBucketName;
    bool m_outputBucketNameHasBeenSet = false;

    MedicalScribeNoteTemplate m_noteTemplate{MedicalScribeNoteTemplate::NOT_SET};
    bool m_noteTemplateHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
