/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_TRANSCRIBESTREAMINGSERVICE_API ClinicalNoteGenerationSettings();
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
    inline const Aws::String& GetOutputBucketName() const{ return m_outputBucketName; }
    inline bool OutputBucketNameHasBeenSet() const { return m_outputBucketNameHasBeenSet; }
    inline void SetOutputBucketName(const Aws::String& value) { m_outputBucketNameHasBeenSet = true; m_outputBucketName = value; }
    inline void SetOutputBucketName(Aws::String&& value) { m_outputBucketNameHasBeenSet = true; m_outputBucketName = std::move(value); }
    inline void SetOutputBucketName(const char* value) { m_outputBucketNameHasBeenSet = true; m_outputBucketName.assign(value); }
    inline ClinicalNoteGenerationSettings& WithOutputBucketName(const Aws::String& value) { SetOutputBucketName(value); return *this;}
    inline ClinicalNoteGenerationSettings& WithOutputBucketName(Aws::String&& value) { SetOutputBucketName(std::move(value)); return *this;}
    inline ClinicalNoteGenerationSettings& WithOutputBucketName(const char* value) { SetOutputBucketName(value); return *this;}
    ///@}
  private:

    Aws::String m_outputBucketName;
    bool m_outputBucketNameHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
