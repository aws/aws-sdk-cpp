/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/LanguageCode.h>
#include <aws/transcribe/model/MediaFormat.h>
#include <aws/transcribe/model/Media.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/transcribe/model/MedicalTranscriptionSetting.h>
#include <aws/transcribe/model/MedicalContentIdentificationType.h>
#include <aws/transcribe/model/Specialty.h>
#include <aws/transcribe/model/Type.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/Tag.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class StartMedicalTranscriptionJobRequest : public TranscribeServiceRequest
  {
  public:
    AWS_TRANSCRIBESERVICE_API StartMedicalTranscriptionJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartMedicalTranscriptionJob"; }

    AWS_TRANSCRIBESERVICE_API Aws::String SerializePayload() const override;

    AWS_TRANSCRIBESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique name, chosen by you, for your medical transcription job. The name
     * that you specify is also used as the default name of your transcription output
     * file. If you want to specify a different name for your transcription output, use
     * the <code>OutputKey</code> parameter.</p> <p>This name is case sensitive, cannot
     * contain spaces, and must be unique within an Amazon Web Services account. If you
     * try to create a new job with the same name as an existing job, you get a
     * <code>ConflictException</code> error.</p>
     */
    inline const Aws::String& GetMedicalTranscriptionJobName() const{ return m_medicalTranscriptionJobName; }

    /**
     * <p>A unique name, chosen by you, for your medical transcription job. The name
     * that you specify is also used as the default name of your transcription output
     * file. If you want to specify a different name for your transcription output, use
     * the <code>OutputKey</code> parameter.</p> <p>This name is case sensitive, cannot
     * contain spaces, and must be unique within an Amazon Web Services account. If you
     * try to create a new job with the same name as an existing job, you get a
     * <code>ConflictException</code> error.</p>
     */
    inline bool MedicalTranscriptionJobNameHasBeenSet() const { return m_medicalTranscriptionJobNameHasBeenSet; }

    /**
     * <p>A unique name, chosen by you, for your medical transcription job. The name
     * that you specify is also used as the default name of your transcription output
     * file. If you want to specify a different name for your transcription output, use
     * the <code>OutputKey</code> parameter.</p> <p>This name is case sensitive, cannot
     * contain spaces, and must be unique within an Amazon Web Services account. If you
     * try to create a new job with the same name as an existing job, you get a
     * <code>ConflictException</code> error.</p>
     */
    inline void SetMedicalTranscriptionJobName(const Aws::String& value) { m_medicalTranscriptionJobNameHasBeenSet = true; m_medicalTranscriptionJobName = value; }

    /**
     * <p>A unique name, chosen by you, for your medical transcription job. The name
     * that you specify is also used as the default name of your transcription output
     * file. If you want to specify a different name for your transcription output, use
     * the <code>OutputKey</code> parameter.</p> <p>This name is case sensitive, cannot
     * contain spaces, and must be unique within an Amazon Web Services account. If you
     * try to create a new job with the same name as an existing job, you get a
     * <code>ConflictException</code> error.</p>
     */
    inline void SetMedicalTranscriptionJobName(Aws::String&& value) { m_medicalTranscriptionJobNameHasBeenSet = true; m_medicalTranscriptionJobName = std::move(value); }

    /**
     * <p>A unique name, chosen by you, for your medical transcription job. The name
     * that you specify is also used as the default name of your transcription output
     * file. If you want to specify a different name for your transcription output, use
     * the <code>OutputKey</code> parameter.</p> <p>This name is case sensitive, cannot
     * contain spaces, and must be unique within an Amazon Web Services account. If you
     * try to create a new job with the same name as an existing job, you get a
     * <code>ConflictException</code> error.</p>
     */
    inline void SetMedicalTranscriptionJobName(const char* value) { m_medicalTranscriptionJobNameHasBeenSet = true; m_medicalTranscriptionJobName.assign(value); }

    /**
     * <p>A unique name, chosen by you, for your medical transcription job. The name
     * that you specify is also used as the default name of your transcription output
     * file. If you want to specify a different name for your transcription output, use
     * the <code>OutputKey</code> parameter.</p> <p>This name is case sensitive, cannot
     * contain spaces, and must be unique within an Amazon Web Services account. If you
     * try to create a new job with the same name as an existing job, you get a
     * <code>ConflictException</code> error.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithMedicalTranscriptionJobName(const Aws::String& value) { SetMedicalTranscriptionJobName(value); return *this;}

    /**
     * <p>A unique name, chosen by you, for your medical transcription job. The name
     * that you specify is also used as the default name of your transcription output
     * file. If you want to specify a different name for your transcription output, use
     * the <code>OutputKey</code> parameter.</p> <p>This name is case sensitive, cannot
     * contain spaces, and must be unique within an Amazon Web Services account. If you
     * try to create a new job with the same name as an existing job, you get a
     * <code>ConflictException</code> error.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithMedicalTranscriptionJobName(Aws::String&& value) { SetMedicalTranscriptionJobName(std::move(value)); return *this;}

    /**
     * <p>A unique name, chosen by you, for your medical transcription job. The name
     * that you specify is also used as the default name of your transcription output
     * file. If you want to specify a different name for your transcription output, use
     * the <code>OutputKey</code> parameter.</p> <p>This name is case sensitive, cannot
     * contain spaces, and must be unique within an Amazon Web Services account. If you
     * try to create a new job with the same name as an existing job, you get a
     * <code>ConflictException</code> error.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithMedicalTranscriptionJobName(const char* value) { SetMedicalTranscriptionJobName(value); return *this;}


    /**
     * <p>The language code that represents the language spoken in the input media
     * file. US English (<code>en-US</code>) is the only valid value for medical
     * transcription jobs. Any other value you enter for language code results in a
     * <code>BadRequestException</code> error.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code that represents the language spoken in the input media
     * file. US English (<code>en-US</code>) is the only valid value for medical
     * transcription jobs. Any other value you enter for language code results in a
     * <code>BadRequestException</code> error.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code that represents the language spoken in the input media
     * file. US English (<code>en-US</code>) is the only valid value for medical
     * transcription jobs. Any other value you enter for language code results in a
     * <code>BadRequestException</code> error.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code that represents the language spoken in the input media
     * file. US English (<code>en-US</code>) is the only valid value for medical
     * transcription jobs. Any other value you enter for language code results in a
     * <code>BadRequestException</code> error.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code that represents the language spoken in the input media
     * file. US English (<code>en-US</code>) is the only valid value for medical
     * transcription jobs. Any other value you enter for language code results in a
     * <code>BadRequestException</code> error.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code that represents the language spoken in the input media
     * file. US English (<code>en-US</code>) is the only valid value for medical
     * transcription jobs. Any other value you enter for language code results in a
     * <code>BadRequestException</code> error.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The sample rate, in hertz, of the audio track in your input media file.</p>
     * <p>If you don't specify the media sample rate, Amazon Transcribe Medical
     * determines it for you. If you specify the sample rate, it must match the rate
     * detected by Amazon Transcribe Medical; if there's a mismatch between the value
     * that you specify and the value detected, your job fails. Therefore, in most
     * cases, it's advised to omit <code>MediaSampleRateHertz</code> and let Amazon
     * Transcribe Medical determine the sample rate.</p>
     */
    inline int GetMediaSampleRateHertz() const{ return m_mediaSampleRateHertz; }

    /**
     * <p>The sample rate, in hertz, of the audio track in your input media file.</p>
     * <p>If you don't specify the media sample rate, Amazon Transcribe Medical
     * determines it for you. If you specify the sample rate, it must match the rate
     * detected by Amazon Transcribe Medical; if there's a mismatch between the value
     * that you specify and the value detected, your job fails. Therefore, in most
     * cases, it's advised to omit <code>MediaSampleRateHertz</code> and let Amazon
     * Transcribe Medical determine the sample rate.</p>
     */
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }

    /**
     * <p>The sample rate, in hertz, of the audio track in your input media file.</p>
     * <p>If you don't specify the media sample rate, Amazon Transcribe Medical
     * determines it for you. If you specify the sample rate, it must match the rate
     * detected by Amazon Transcribe Medical; if there's a mismatch between the value
     * that you specify and the value detected, your job fails. Therefore, in most
     * cases, it's advised to omit <code>MediaSampleRateHertz</code> and let Amazon
     * Transcribe Medical determine the sample rate.</p>
     */
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }

    /**
     * <p>The sample rate, in hertz, of the audio track in your input media file.</p>
     * <p>If you don't specify the media sample rate, Amazon Transcribe Medical
     * determines it for you. If you specify the sample rate, it must match the rate
     * detected by Amazon Transcribe Medical; if there's a mismatch between the value
     * that you specify and the value detected, your job fails. Therefore, in most
     * cases, it's advised to omit <code>MediaSampleRateHertz</code> and let Amazon
     * Transcribe Medical determine the sample rate.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}


    /**
     * <p>Specify the format of your input media file.</p>
     */
    inline const MediaFormat& GetMediaFormat() const{ return m_mediaFormat; }

    /**
     * <p>Specify the format of your input media file.</p>
     */
    inline bool MediaFormatHasBeenSet() const { return m_mediaFormatHasBeenSet; }

    /**
     * <p>Specify the format of your input media file.</p>
     */
    inline void SetMediaFormat(const MediaFormat& value) { m_mediaFormatHasBeenSet = true; m_mediaFormat = value; }

    /**
     * <p>Specify the format of your input media file.</p>
     */
    inline void SetMediaFormat(MediaFormat&& value) { m_mediaFormatHasBeenSet = true; m_mediaFormat = std::move(value); }

    /**
     * <p>Specify the format of your input media file.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithMediaFormat(const MediaFormat& value) { SetMediaFormat(value); return *this;}

    /**
     * <p>Specify the format of your input media file.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithMediaFormat(MediaFormat&& value) { SetMediaFormat(std::move(value)); return *this;}


    
    inline const Media& GetMedia() const{ return m_media; }

    
    inline bool MediaHasBeenSet() const { return m_mediaHasBeenSet; }

    
    inline void SetMedia(const Media& value) { m_mediaHasBeenSet = true; m_media = value; }

    
    inline void SetMedia(Media&& value) { m_mediaHasBeenSet = true; m_media = std::move(value); }

    
    inline StartMedicalTranscriptionJobRequest& WithMedia(const Media& value) { SetMedia(value); return *this;}

    
    inline StartMedicalTranscriptionJobRequest& WithMedia(Media&& value) { SetMedia(std::move(value)); return *this;}


    /**
     * <p>The name of the Amazon S3 bucket where you want your medical transcription
     * output stored. Do not include the <code>S3://</code> prefix of the specified
     * bucket.</p> <p>If you want your output to go to a sub-folder of this bucket,
     * specify it using the <code>OutputKey</code> parameter;
     * <code>OutputBucketName</code> only accepts the name of a bucket.</p> <p>For
     * example, if you want your output stored in <code>S3://DOC-EXAMPLE-BUCKET</code>,
     * set <code>OutputBucketName</code> to <code>DOC-EXAMPLE-BUCKET</code>. However,
     * if you want your output stored in
     * <code>S3://DOC-EXAMPLE-BUCKET/test-files/</code>, set
     * <code>OutputBucketName</code> to <code>DOC-EXAMPLE-BUCKET</code> and
     * <code>OutputKey</code> to <code>test-files/</code>.</p> <p>Note that Amazon
     * Transcribe must have permission to use the specified location. You can change
     * Amazon S3 permissions using the <a
     * href="https://console.aws.amazon.com/s3">Amazon Web Services Management
     * Console</a>. See also <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/security_iam_id-based-policy-examples.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p>
     */
    inline const Aws::String& GetOutputBucketName() const{ return m_outputBucketName; }

    /**
     * <p>The name of the Amazon S3 bucket where you want your medical transcription
     * output stored. Do not include the <code>S3://</code> prefix of the specified
     * bucket.</p> <p>If you want your output to go to a sub-folder of this bucket,
     * specify it using the <code>OutputKey</code> parameter;
     * <code>OutputBucketName</code> only accepts the name of a bucket.</p> <p>For
     * example, if you want your output stored in <code>S3://DOC-EXAMPLE-BUCKET</code>,
     * set <code>OutputBucketName</code> to <code>DOC-EXAMPLE-BUCKET</code>. However,
     * if you want your output stored in
     * <code>S3://DOC-EXAMPLE-BUCKET/test-files/</code>, set
     * <code>OutputBucketName</code> to <code>DOC-EXAMPLE-BUCKET</code> and
     * <code>OutputKey</code> to <code>test-files/</code>.</p> <p>Note that Amazon
     * Transcribe must have permission to use the specified location. You can change
     * Amazon S3 permissions using the <a
     * href="https://console.aws.amazon.com/s3">Amazon Web Services Management
     * Console</a>. See also <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/security_iam_id-based-policy-examples.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p>
     */
    inline bool OutputBucketNameHasBeenSet() const { return m_outputBucketNameHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket where you want your medical transcription
     * output stored. Do not include the <code>S3://</code> prefix of the specified
     * bucket.</p> <p>If you want your output to go to a sub-folder of this bucket,
     * specify it using the <code>OutputKey</code> parameter;
     * <code>OutputBucketName</code> only accepts the name of a bucket.</p> <p>For
     * example, if you want your output stored in <code>S3://DOC-EXAMPLE-BUCKET</code>,
     * set <code>OutputBucketName</code> to <code>DOC-EXAMPLE-BUCKET</code>. However,
     * if you want your output stored in
     * <code>S3://DOC-EXAMPLE-BUCKET/test-files/</code>, set
     * <code>OutputBucketName</code> to <code>DOC-EXAMPLE-BUCKET</code> and
     * <code>OutputKey</code> to <code>test-files/</code>.</p> <p>Note that Amazon
     * Transcribe must have permission to use the specified location. You can change
     * Amazon S3 permissions using the <a
     * href="https://console.aws.amazon.com/s3">Amazon Web Services Management
     * Console</a>. See also <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/security_iam_id-based-policy-examples.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p>
     */
    inline void SetOutputBucketName(const Aws::String& value) { m_outputBucketNameHasBeenSet = true; m_outputBucketName = value; }

    /**
     * <p>The name of the Amazon S3 bucket where you want your medical transcription
     * output stored. Do not include the <code>S3://</code> prefix of the specified
     * bucket.</p> <p>If you want your output to go to a sub-folder of this bucket,
     * specify it using the <code>OutputKey</code> parameter;
     * <code>OutputBucketName</code> only accepts the name of a bucket.</p> <p>For
     * example, if you want your output stored in <code>S3://DOC-EXAMPLE-BUCKET</code>,
     * set <code>OutputBucketName</code> to <code>DOC-EXAMPLE-BUCKET</code>. However,
     * if you want your output stored in
     * <code>S3://DOC-EXAMPLE-BUCKET/test-files/</code>, set
     * <code>OutputBucketName</code> to <code>DOC-EXAMPLE-BUCKET</code> and
     * <code>OutputKey</code> to <code>test-files/</code>.</p> <p>Note that Amazon
     * Transcribe must have permission to use the specified location. You can change
     * Amazon S3 permissions using the <a
     * href="https://console.aws.amazon.com/s3">Amazon Web Services Management
     * Console</a>. See also <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/security_iam_id-based-policy-examples.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p>
     */
    inline void SetOutputBucketName(Aws::String&& value) { m_outputBucketNameHasBeenSet = true; m_outputBucketName = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket where you want your medical transcription
     * output stored. Do not include the <code>S3://</code> prefix of the specified
     * bucket.</p> <p>If you want your output to go to a sub-folder of this bucket,
     * specify it using the <code>OutputKey</code> parameter;
     * <code>OutputBucketName</code> only accepts the name of a bucket.</p> <p>For
     * example, if you want your output stored in <code>S3://DOC-EXAMPLE-BUCKET</code>,
     * set <code>OutputBucketName</code> to <code>DOC-EXAMPLE-BUCKET</code>. However,
     * if you want your output stored in
     * <code>S3://DOC-EXAMPLE-BUCKET/test-files/</code>, set
     * <code>OutputBucketName</code> to <code>DOC-EXAMPLE-BUCKET</code> and
     * <code>OutputKey</code> to <code>test-files/</code>.</p> <p>Note that Amazon
     * Transcribe must have permission to use the specified location. You can change
     * Amazon S3 permissions using the <a
     * href="https://console.aws.amazon.com/s3">Amazon Web Services Management
     * Console</a>. See also <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/security_iam_id-based-policy-examples.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p>
     */
    inline void SetOutputBucketName(const char* value) { m_outputBucketNameHasBeenSet = true; m_outputBucketName.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket where you want your medical transcription
     * output stored. Do not include the <code>S3://</code> prefix of the specified
     * bucket.</p> <p>If you want your output to go to a sub-folder of this bucket,
     * specify it using the <code>OutputKey</code> parameter;
     * <code>OutputBucketName</code> only accepts the name of a bucket.</p> <p>For
     * example, if you want your output stored in <code>S3://DOC-EXAMPLE-BUCKET</code>,
     * set <code>OutputBucketName</code> to <code>DOC-EXAMPLE-BUCKET</code>. However,
     * if you want your output stored in
     * <code>S3://DOC-EXAMPLE-BUCKET/test-files/</code>, set
     * <code>OutputBucketName</code> to <code>DOC-EXAMPLE-BUCKET</code> and
     * <code>OutputKey</code> to <code>test-files/</code>.</p> <p>Note that Amazon
     * Transcribe must have permission to use the specified location. You can change
     * Amazon S3 permissions using the <a
     * href="https://console.aws.amazon.com/s3">Amazon Web Services Management
     * Console</a>. See also <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/security_iam_id-based-policy-examples.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithOutputBucketName(const Aws::String& value) { SetOutputBucketName(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket where you want your medical transcription
     * output stored. Do not include the <code>S3://</code> prefix of the specified
     * bucket.</p> <p>If you want your output to go to a sub-folder of this bucket,
     * specify it using the <code>OutputKey</code> parameter;
     * <code>OutputBucketName</code> only accepts the name of a bucket.</p> <p>For
     * example, if you want your output stored in <code>S3://DOC-EXAMPLE-BUCKET</code>,
     * set <code>OutputBucketName</code> to <code>DOC-EXAMPLE-BUCKET</code>. However,
     * if you want your output stored in
     * <code>S3://DOC-EXAMPLE-BUCKET/test-files/</code>, set
     * <code>OutputBucketName</code> to <code>DOC-EXAMPLE-BUCKET</code> and
     * <code>OutputKey</code> to <code>test-files/</code>.</p> <p>Note that Amazon
     * Transcribe must have permission to use the specified location. You can change
     * Amazon S3 permissions using the <a
     * href="https://console.aws.amazon.com/s3">Amazon Web Services Management
     * Console</a>. See also <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/security_iam_id-based-policy-examples.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithOutputBucketName(Aws::String&& value) { SetOutputBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket where you want your medical transcription
     * output stored. Do not include the <code>S3://</code> prefix of the specified
     * bucket.</p> <p>If you want your output to go to a sub-folder of this bucket,
     * specify it using the <code>OutputKey</code> parameter;
     * <code>OutputBucketName</code> only accepts the name of a bucket.</p> <p>For
     * example, if you want your output stored in <code>S3://DOC-EXAMPLE-BUCKET</code>,
     * set <code>OutputBucketName</code> to <code>DOC-EXAMPLE-BUCKET</code>. However,
     * if you want your output stored in
     * <code>S3://DOC-EXAMPLE-BUCKET/test-files/</code>, set
     * <code>OutputBucketName</code> to <code>DOC-EXAMPLE-BUCKET</code> and
     * <code>OutputKey</code> to <code>test-files/</code>.</p> <p>Note that Amazon
     * Transcribe must have permission to use the specified location. You can change
     * Amazon S3 permissions using the <a
     * href="https://console.aws.amazon.com/s3">Amazon Web Services Management
     * Console</a>. See also <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/security_iam_id-based-policy-examples.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithOutputBucketName(const char* value) { SetOutputBucketName(value); return *this;}


    /**
     * <p>Use in combination with <code>OutputBucketName</code> to specify the output
     * location of your transcript and, optionally, a unique name for your output file.
     * The default name for your transcription output is the same as the name you
     * specified for your medical transcription job
     * (<code>MedicalTranscriptionJobName</code>).</p> <p>Here are some examples of how
     * you can use <code>OutputKey</code>:</p> <ul> <li> <p>If you specify
     * 'DOC-EXAMPLE-BUCKET' as the <code>OutputBucketName</code> and
     * 'my-transcript.json' as the <code>OutputKey</code>, your transcription output
     * path is <code>s3://DOC-EXAMPLE-BUCKET/my-transcript.json</code>.</p> </li> <li>
     * <p>If you specify 'my-first-transcription' as the
     * <code>MedicalTranscriptionJobName</code>, 'DOC-EXAMPLE-BUCKET' as the
     * <code>OutputBucketName</code>, and 'my-transcript' as the
     * <code>OutputKey</code>, your transcription output path is
     * <code>s3://DOC-EXAMPLE-BUCKET/my-transcript/my-first-transcription.json</code>.</p>
     * </li> <li> <p>If you specify 'DOC-EXAMPLE-BUCKET' as the
     * <code>OutputBucketName</code> and 'test-files/my-transcript.json' as the
     * <code>OutputKey</code>, your transcription output path is
     * <code>s3://DOC-EXAMPLE-BUCKET/test-files/my-transcript.json</code>.</p> </li>
     * <li> <p>If you specify 'my-first-transcription' as the
     * <code>MedicalTranscriptionJobName</code>, 'DOC-EXAMPLE-BUCKET' as the
     * <code>OutputBucketName</code>, and 'test-files/my-transcript' as the
     * <code>OutputKey</code>, your transcription output path is
     * <code>s3://DOC-EXAMPLE-BUCKET/test-files/my-transcript/my-first-transcription.json</code>.</p>
     * </li> </ul> <p>If you specify the name of an Amazon S3 bucket sub-folder that
     * doesn't exist, one is created for you.</p>
     */
    inline const Aws::String& GetOutputKey() const{ return m_outputKey; }

    /**
     * <p>Use in combination with <code>OutputBucketName</code> to specify the output
     * location of your transcript and, optionally, a unique name for your output file.
     * The default name for your transcription output is the same as the name you
     * specified for your medical transcription job
     * (<code>MedicalTranscriptionJobName</code>).</p> <p>Here are some examples of how
     * you can use <code>OutputKey</code>:</p> <ul> <li> <p>If you specify
     * 'DOC-EXAMPLE-BUCKET' as the <code>OutputBucketName</code> and
     * 'my-transcript.json' as the <code>OutputKey</code>, your transcription output
     * path is <code>s3://DOC-EXAMPLE-BUCKET/my-transcript.json</code>.</p> </li> <li>
     * <p>If you specify 'my-first-transcription' as the
     * <code>MedicalTranscriptionJobName</code>, 'DOC-EXAMPLE-BUCKET' as the
     * <code>OutputBucketName</code>, and 'my-transcript' as the
     * <code>OutputKey</code>, your transcription output path is
     * <code>s3://DOC-EXAMPLE-BUCKET/my-transcript/my-first-transcription.json</code>.</p>
     * </li> <li> <p>If you specify 'DOC-EXAMPLE-BUCKET' as the
     * <code>OutputBucketName</code> and 'test-files/my-transcript.json' as the
     * <code>OutputKey</code>, your transcription output path is
     * <code>s3://DOC-EXAMPLE-BUCKET/test-files/my-transcript.json</code>.</p> </li>
     * <li> <p>If you specify 'my-first-transcription' as the
     * <code>MedicalTranscriptionJobName</code>, 'DOC-EXAMPLE-BUCKET' as the
     * <code>OutputBucketName</code>, and 'test-files/my-transcript' as the
     * <code>OutputKey</code>, your transcription output path is
     * <code>s3://DOC-EXAMPLE-BUCKET/test-files/my-transcript/my-first-transcription.json</code>.</p>
     * </li> </ul> <p>If you specify the name of an Amazon S3 bucket sub-folder that
     * doesn't exist, one is created for you.</p>
     */
    inline bool OutputKeyHasBeenSet() const { return m_outputKeyHasBeenSet; }

    /**
     * <p>Use in combination with <code>OutputBucketName</code> to specify the output
     * location of your transcript and, optionally, a unique name for your output file.
     * The default name for your transcription output is the same as the name you
     * specified for your medical transcription job
     * (<code>MedicalTranscriptionJobName</code>).</p> <p>Here are some examples of how
     * you can use <code>OutputKey</code>:</p> <ul> <li> <p>If you specify
     * 'DOC-EXAMPLE-BUCKET' as the <code>OutputBucketName</code> and
     * 'my-transcript.json' as the <code>OutputKey</code>, your transcription output
     * path is <code>s3://DOC-EXAMPLE-BUCKET/my-transcript.json</code>.</p> </li> <li>
     * <p>If you specify 'my-first-transcription' as the
     * <code>MedicalTranscriptionJobName</code>, 'DOC-EXAMPLE-BUCKET' as the
     * <code>OutputBucketName</code>, and 'my-transcript' as the
     * <code>OutputKey</code>, your transcription output path is
     * <code>s3://DOC-EXAMPLE-BUCKET/my-transcript/my-first-transcription.json</code>.</p>
     * </li> <li> <p>If you specify 'DOC-EXAMPLE-BUCKET' as the
     * <code>OutputBucketName</code> and 'test-files/my-transcript.json' as the
     * <code>OutputKey</code>, your transcription output path is
     * <code>s3://DOC-EXAMPLE-BUCKET/test-files/my-transcript.json</code>.</p> </li>
     * <li> <p>If you specify 'my-first-transcription' as the
     * <code>MedicalTranscriptionJobName</code>, 'DOC-EXAMPLE-BUCKET' as the
     * <code>OutputBucketName</code>, and 'test-files/my-transcript' as the
     * <code>OutputKey</code>, your transcription output path is
     * <code>s3://DOC-EXAMPLE-BUCKET/test-files/my-transcript/my-first-transcription.json</code>.</p>
     * </li> </ul> <p>If you specify the name of an Amazon S3 bucket sub-folder that
     * doesn't exist, one is created for you.</p>
     */
    inline void SetOutputKey(const Aws::String& value) { m_outputKeyHasBeenSet = true; m_outputKey = value; }

    /**
     * <p>Use in combination with <code>OutputBucketName</code> to specify the output
     * location of your transcript and, optionally, a unique name for your output file.
     * The default name for your transcription output is the same as the name you
     * specified for your medical transcription job
     * (<code>MedicalTranscriptionJobName</code>).</p> <p>Here are some examples of how
     * you can use <code>OutputKey</code>:</p> <ul> <li> <p>If you specify
     * 'DOC-EXAMPLE-BUCKET' as the <code>OutputBucketName</code> and
     * 'my-transcript.json' as the <code>OutputKey</code>, your transcription output
     * path is <code>s3://DOC-EXAMPLE-BUCKET/my-transcript.json</code>.</p> </li> <li>
     * <p>If you specify 'my-first-transcription' as the
     * <code>MedicalTranscriptionJobName</code>, 'DOC-EXAMPLE-BUCKET' as the
     * <code>OutputBucketName</code>, and 'my-transcript' as the
     * <code>OutputKey</code>, your transcription output path is
     * <code>s3://DOC-EXAMPLE-BUCKET/my-transcript/my-first-transcription.json</code>.</p>
     * </li> <li> <p>If you specify 'DOC-EXAMPLE-BUCKET' as the
     * <code>OutputBucketName</code> and 'test-files/my-transcript.json' as the
     * <code>OutputKey</code>, your transcription output path is
     * <code>s3://DOC-EXAMPLE-BUCKET/test-files/my-transcript.json</code>.</p> </li>
     * <li> <p>If you specify 'my-first-transcription' as the
     * <code>MedicalTranscriptionJobName</code>, 'DOC-EXAMPLE-BUCKET' as the
     * <code>OutputBucketName</code>, and 'test-files/my-transcript' as the
     * <code>OutputKey</code>, your transcription output path is
     * <code>s3://DOC-EXAMPLE-BUCKET/test-files/my-transcript/my-first-transcription.json</code>.</p>
     * </li> </ul> <p>If you specify the name of an Amazon S3 bucket sub-folder that
     * doesn't exist, one is created for you.</p>
     */
    inline void SetOutputKey(Aws::String&& value) { m_outputKeyHasBeenSet = true; m_outputKey = std::move(value); }

    /**
     * <p>Use in combination with <code>OutputBucketName</code> to specify the output
     * location of your transcript and, optionally, a unique name for your output file.
     * The default name for your transcription output is the same as the name you
     * specified for your medical transcription job
     * (<code>MedicalTranscriptionJobName</code>).</p> <p>Here are some examples of how
     * you can use <code>OutputKey</code>:</p> <ul> <li> <p>If you specify
     * 'DOC-EXAMPLE-BUCKET' as the <code>OutputBucketName</code> and
     * 'my-transcript.json' as the <code>OutputKey</code>, your transcription output
     * path is <code>s3://DOC-EXAMPLE-BUCKET/my-transcript.json</code>.</p> </li> <li>
     * <p>If you specify 'my-first-transcription' as the
     * <code>MedicalTranscriptionJobName</code>, 'DOC-EXAMPLE-BUCKET' as the
     * <code>OutputBucketName</code>, and 'my-transcript' as the
     * <code>OutputKey</code>, your transcription output path is
     * <code>s3://DOC-EXAMPLE-BUCKET/my-transcript/my-first-transcription.json</code>.</p>
     * </li> <li> <p>If you specify 'DOC-EXAMPLE-BUCKET' as the
     * <code>OutputBucketName</code> and 'test-files/my-transcript.json' as the
     * <code>OutputKey</code>, your transcription output path is
     * <code>s3://DOC-EXAMPLE-BUCKET/test-files/my-transcript.json</code>.</p> </li>
     * <li> <p>If you specify 'my-first-transcription' as the
     * <code>MedicalTranscriptionJobName</code>, 'DOC-EXAMPLE-BUCKET' as the
     * <code>OutputBucketName</code>, and 'test-files/my-transcript' as the
     * <code>OutputKey</code>, your transcription output path is
     * <code>s3://DOC-EXAMPLE-BUCKET/test-files/my-transcript/my-first-transcription.json</code>.</p>
     * </li> </ul> <p>If you specify the name of an Amazon S3 bucket sub-folder that
     * doesn't exist, one is created for you.</p>
     */
    inline void SetOutputKey(const char* value) { m_outputKeyHasBeenSet = true; m_outputKey.assign(value); }

    /**
     * <p>Use in combination with <code>OutputBucketName</code> to specify the output
     * location of your transcript and, optionally, a unique name for your output file.
     * The default name for your transcription output is the same as the name you
     * specified for your medical transcription job
     * (<code>MedicalTranscriptionJobName</code>).</p> <p>Here are some examples of how
     * you can use <code>OutputKey</code>:</p> <ul> <li> <p>If you specify
     * 'DOC-EXAMPLE-BUCKET' as the <code>OutputBucketName</code> and
     * 'my-transcript.json' as the <code>OutputKey</code>, your transcription output
     * path is <code>s3://DOC-EXAMPLE-BUCKET/my-transcript.json</code>.</p> </li> <li>
     * <p>If you specify 'my-first-transcription' as the
     * <code>MedicalTranscriptionJobName</code>, 'DOC-EXAMPLE-BUCKET' as the
     * <code>OutputBucketName</code>, and 'my-transcript' as the
     * <code>OutputKey</code>, your transcription output path is
     * <code>s3://DOC-EXAMPLE-BUCKET/my-transcript/my-first-transcription.json</code>.</p>
     * </li> <li> <p>If you specify 'DOC-EXAMPLE-BUCKET' as the
     * <code>OutputBucketName</code> and 'test-files/my-transcript.json' as the
     * <code>OutputKey</code>, your transcription output path is
     * <code>s3://DOC-EXAMPLE-BUCKET/test-files/my-transcript.json</code>.</p> </li>
     * <li> <p>If you specify 'my-first-transcription' as the
     * <code>MedicalTranscriptionJobName</code>, 'DOC-EXAMPLE-BUCKET' as the
     * <code>OutputBucketName</code>, and 'test-files/my-transcript' as the
     * <code>OutputKey</code>, your transcription output path is
     * <code>s3://DOC-EXAMPLE-BUCKET/test-files/my-transcript/my-first-transcription.json</code>.</p>
     * </li> </ul> <p>If you specify the name of an Amazon S3 bucket sub-folder that
     * doesn't exist, one is created for you.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithOutputKey(const Aws::String& value) { SetOutputKey(value); return *this;}

    /**
     * <p>Use in combination with <code>OutputBucketName</code> to specify the output
     * location of your transcript and, optionally, a unique name for your output file.
     * The default name for your transcription output is the same as the name you
     * specified for your medical transcription job
     * (<code>MedicalTranscriptionJobName</code>).</p> <p>Here are some examples of how
     * you can use <code>OutputKey</code>:</p> <ul> <li> <p>If you specify
     * 'DOC-EXAMPLE-BUCKET' as the <code>OutputBucketName</code> and
     * 'my-transcript.json' as the <code>OutputKey</code>, your transcription output
     * path is <code>s3://DOC-EXAMPLE-BUCKET/my-transcript.json</code>.</p> </li> <li>
     * <p>If you specify 'my-first-transcription' as the
     * <code>MedicalTranscriptionJobName</code>, 'DOC-EXAMPLE-BUCKET' as the
     * <code>OutputBucketName</code>, and 'my-transcript' as the
     * <code>OutputKey</code>, your transcription output path is
     * <code>s3://DOC-EXAMPLE-BUCKET/my-transcript/my-first-transcription.json</code>.</p>
     * </li> <li> <p>If you specify 'DOC-EXAMPLE-BUCKET' as the
     * <code>OutputBucketName</code> and 'test-files/my-transcript.json' as the
     * <code>OutputKey</code>, your transcription output path is
     * <code>s3://DOC-EXAMPLE-BUCKET/test-files/my-transcript.json</code>.</p> </li>
     * <li> <p>If you specify 'my-first-transcription' as the
     * <code>MedicalTranscriptionJobName</code>, 'DOC-EXAMPLE-BUCKET' as the
     * <code>OutputBucketName</code>, and 'test-files/my-transcript' as the
     * <code>OutputKey</code>, your transcription output path is
     * <code>s3://DOC-EXAMPLE-BUCKET/test-files/my-transcript/my-first-transcription.json</code>.</p>
     * </li> </ul> <p>If you specify the name of an Amazon S3 bucket sub-folder that
     * doesn't exist, one is created for you.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithOutputKey(Aws::String&& value) { SetOutputKey(std::move(value)); return *this;}

    /**
     * <p>Use in combination with <code>OutputBucketName</code> to specify the output
     * location of your transcript and, optionally, a unique name for your output file.
     * The default name for your transcription output is the same as the name you
     * specified for your medical transcription job
     * (<code>MedicalTranscriptionJobName</code>).</p> <p>Here are some examples of how
     * you can use <code>OutputKey</code>:</p> <ul> <li> <p>If you specify
     * 'DOC-EXAMPLE-BUCKET' as the <code>OutputBucketName</code> and
     * 'my-transcript.json' as the <code>OutputKey</code>, your transcription output
     * path is <code>s3://DOC-EXAMPLE-BUCKET/my-transcript.json</code>.</p> </li> <li>
     * <p>If you specify 'my-first-transcription' as the
     * <code>MedicalTranscriptionJobName</code>, 'DOC-EXAMPLE-BUCKET' as the
     * <code>OutputBucketName</code>, and 'my-transcript' as the
     * <code>OutputKey</code>, your transcription output path is
     * <code>s3://DOC-EXAMPLE-BUCKET/my-transcript/my-first-transcription.json</code>.</p>
     * </li> <li> <p>If you specify 'DOC-EXAMPLE-BUCKET' as the
     * <code>OutputBucketName</code> and 'test-files/my-transcript.json' as the
     * <code>OutputKey</code>, your transcription output path is
     * <code>s3://DOC-EXAMPLE-BUCKET/test-files/my-transcript.json</code>.</p> </li>
     * <li> <p>If you specify 'my-first-transcription' as the
     * <code>MedicalTranscriptionJobName</code>, 'DOC-EXAMPLE-BUCKET' as the
     * <code>OutputBucketName</code>, and 'test-files/my-transcript' as the
     * <code>OutputKey</code>, your transcription output path is
     * <code>s3://DOC-EXAMPLE-BUCKET/test-files/my-transcript/my-first-transcription.json</code>.</p>
     * </li> </ul> <p>If you specify the name of an Amazon S3 bucket sub-folder that
     * doesn't exist, one is created for you.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithOutputKey(const char* value) { SetOutputKey(value); return *this;}


    /**
     * <p>The KMS key you want to use to encrypt your medical transcription output.</p>
     * <p>If using a key located in the <b>current</b> Amazon Web Services account, you
     * can specify your KMS key in one of four ways:</p> <ol> <li> <p>Use the KMS key
     * ID itself. For example, <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use an alias for the KMS key ID. For example,
     * <code>alias/ExampleAlias</code>.</p> </li> <li> <p>Use the Amazon Resource Name
     * (ARN) for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If you don't specify an encryption key, your output is encrypted with the
     * default Amazon S3 key (SSE-S3).</p> <p>If you specify a KMS key to encrypt your
     * output, you must also specify an output location using the
     * <code>OutputLocation</code> parameter.</p> <p>Note that the user making the
     * request must have permission to use the specified KMS key.</p>
     */
    inline const Aws::String& GetOutputEncryptionKMSKeyId() const{ return m_outputEncryptionKMSKeyId; }

    /**
     * <p>The KMS key you want to use to encrypt your medical transcription output.</p>
     * <p>If using a key located in the <b>current</b> Amazon Web Services account, you
     * can specify your KMS key in one of four ways:</p> <ol> <li> <p>Use the KMS key
     * ID itself. For example, <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use an alias for the KMS key ID. For example,
     * <code>alias/ExampleAlias</code>.</p> </li> <li> <p>Use the Amazon Resource Name
     * (ARN) for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If you don't specify an encryption key, your output is encrypted with the
     * default Amazon S3 key (SSE-S3).</p> <p>If you specify a KMS key to encrypt your
     * output, you must also specify an output location using the
     * <code>OutputLocation</code> parameter.</p> <p>Note that the user making the
     * request must have permission to use the specified KMS key.</p>
     */
    inline bool OutputEncryptionKMSKeyIdHasBeenSet() const { return m_outputEncryptionKMSKeyIdHasBeenSet; }

    /**
     * <p>The KMS key you want to use to encrypt your medical transcription output.</p>
     * <p>If using a key located in the <b>current</b> Amazon Web Services account, you
     * can specify your KMS key in one of four ways:</p> <ol> <li> <p>Use the KMS key
     * ID itself. For example, <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use an alias for the KMS key ID. For example,
     * <code>alias/ExampleAlias</code>.</p> </li> <li> <p>Use the Amazon Resource Name
     * (ARN) for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If you don't specify an encryption key, your output is encrypted with the
     * default Amazon S3 key (SSE-S3).</p> <p>If you specify a KMS key to encrypt your
     * output, you must also specify an output location using the
     * <code>OutputLocation</code> parameter.</p> <p>Note that the user making the
     * request must have permission to use the specified KMS key.</p>
     */
    inline void SetOutputEncryptionKMSKeyId(const Aws::String& value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId = value; }

    /**
     * <p>The KMS key you want to use to encrypt your medical transcription output.</p>
     * <p>If using a key located in the <b>current</b> Amazon Web Services account, you
     * can specify your KMS key in one of four ways:</p> <ol> <li> <p>Use the KMS key
     * ID itself. For example, <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use an alias for the KMS key ID. For example,
     * <code>alias/ExampleAlias</code>.</p> </li> <li> <p>Use the Amazon Resource Name
     * (ARN) for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If you don't specify an encryption key, your output is encrypted with the
     * default Amazon S3 key (SSE-S3).</p> <p>If you specify a KMS key to encrypt your
     * output, you must also specify an output location using the
     * <code>OutputLocation</code> parameter.</p> <p>Note that the user making the
     * request must have permission to use the specified KMS key.</p>
     */
    inline void SetOutputEncryptionKMSKeyId(Aws::String&& value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId = std::move(value); }

    /**
     * <p>The KMS key you want to use to encrypt your medical transcription output.</p>
     * <p>If using a key located in the <b>current</b> Amazon Web Services account, you
     * can specify your KMS key in one of four ways:</p> <ol> <li> <p>Use the KMS key
     * ID itself. For example, <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use an alias for the KMS key ID. For example,
     * <code>alias/ExampleAlias</code>.</p> </li> <li> <p>Use the Amazon Resource Name
     * (ARN) for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If you don't specify an encryption key, your output is encrypted with the
     * default Amazon S3 key (SSE-S3).</p> <p>If you specify a KMS key to encrypt your
     * output, you must also specify an output location using the
     * <code>OutputLocation</code> parameter.</p> <p>Note that the user making the
     * request must have permission to use the specified KMS key.</p>
     */
    inline void SetOutputEncryptionKMSKeyId(const char* value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId.assign(value); }

    /**
     * <p>The KMS key you want to use to encrypt your medical transcription output.</p>
     * <p>If using a key located in the <b>current</b> Amazon Web Services account, you
     * can specify your KMS key in one of four ways:</p> <ol> <li> <p>Use the KMS key
     * ID itself. For example, <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use an alias for the KMS key ID. For example,
     * <code>alias/ExampleAlias</code>.</p> </li> <li> <p>Use the Amazon Resource Name
     * (ARN) for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If you don't specify an encryption key, your output is encrypted with the
     * default Amazon S3 key (SSE-S3).</p> <p>If you specify a KMS key to encrypt your
     * output, you must also specify an output location using the
     * <code>OutputLocation</code> parameter.</p> <p>Note that the user making the
     * request must have permission to use the specified KMS key.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithOutputEncryptionKMSKeyId(const Aws::String& value) { SetOutputEncryptionKMSKeyId(value); return *this;}

    /**
     * <p>The KMS key you want to use to encrypt your medical transcription output.</p>
     * <p>If using a key located in the <b>current</b> Amazon Web Services account, you
     * can specify your KMS key in one of four ways:</p> <ol> <li> <p>Use the KMS key
     * ID itself. For example, <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use an alias for the KMS key ID. For example,
     * <code>alias/ExampleAlias</code>.</p> </li> <li> <p>Use the Amazon Resource Name
     * (ARN) for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If you don't specify an encryption key, your output is encrypted with the
     * default Amazon S3 key (SSE-S3).</p> <p>If you specify a KMS key to encrypt your
     * output, you must also specify an output location using the
     * <code>OutputLocation</code> parameter.</p> <p>Note that the user making the
     * request must have permission to use the specified KMS key.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithOutputEncryptionKMSKeyId(Aws::String&& value) { SetOutputEncryptionKMSKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS key you want to use to encrypt your medical transcription output.</p>
     * <p>If using a key located in the <b>current</b> Amazon Web Services account, you
     * can specify your KMS key in one of four ways:</p> <ol> <li> <p>Use the KMS key
     * ID itself. For example, <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use an alias for the KMS key ID. For example,
     * <code>alias/ExampleAlias</code>.</p> </li> <li> <p>Use the Amazon Resource Name
     * (ARN) for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If you don't specify an encryption key, your output is encrypted with the
     * default Amazon S3 key (SSE-S3).</p> <p>If you specify a KMS key to encrypt your
     * output, you must also specify an output location using the
     * <code>OutputLocation</code> parameter.</p> <p>Note that the user making the
     * request must have permission to use the specified KMS key.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithOutputEncryptionKMSKeyId(const char* value) { SetOutputEncryptionKMSKeyId(value); return *this;}


    /**
     * <p>A map of plain text, non-secret key:value pairs, known as encryption context
     * pairs, that provide an added layer of security for your data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMS
     * encryption context</a> and <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetKMSEncryptionContext() const{ return m_kMSEncryptionContext; }

    /**
     * <p>A map of plain text, non-secret key:value pairs, known as encryption context
     * pairs, that provide an added layer of security for your data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMS
     * encryption context</a> and <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a>.</p>
     */
    inline bool KMSEncryptionContextHasBeenSet() const { return m_kMSEncryptionContextHasBeenSet; }

    /**
     * <p>A map of plain text, non-secret key:value pairs, known as encryption context
     * pairs, that provide an added layer of security for your data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMS
     * encryption context</a> and <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a>.</p>
     */
    inline void SetKMSEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext = value; }

    /**
     * <p>A map of plain text, non-secret key:value pairs, known as encryption context
     * pairs, that provide an added layer of security for your data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMS
     * encryption context</a> and <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a>.</p>
     */
    inline void SetKMSEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext = std::move(value); }

    /**
     * <p>A map of plain text, non-secret key:value pairs, known as encryption context
     * pairs, that provide an added layer of security for your data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMS
     * encryption context</a> and <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a>.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithKMSEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetKMSEncryptionContext(value); return *this;}

    /**
     * <p>A map of plain text, non-secret key:value pairs, known as encryption context
     * pairs, that provide an added layer of security for your data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMS
     * encryption context</a> and <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a>.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithKMSEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetKMSEncryptionContext(std::move(value)); return *this;}

    /**
     * <p>A map of plain text, non-secret key:value pairs, known as encryption context
     * pairs, that provide an added layer of security for your data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMS
     * encryption context</a> and <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a>.</p>
     */
    inline StartMedicalTranscriptionJobRequest& AddKMSEncryptionContext(const Aws::String& key, const Aws::String& value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext.emplace(key, value); return *this; }

    /**
     * <p>A map of plain text, non-secret key:value pairs, known as encryption context
     * pairs, that provide an added layer of security for your data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMS
     * encryption context</a> and <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a>.</p>
     */
    inline StartMedicalTranscriptionJobRequest& AddKMSEncryptionContext(Aws::String&& key, const Aws::String& value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of plain text, non-secret key:value pairs, known as encryption context
     * pairs, that provide an added layer of security for your data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMS
     * encryption context</a> and <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a>.</p>
     */
    inline StartMedicalTranscriptionJobRequest& AddKMSEncryptionContext(const Aws::String& key, Aws::String&& value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of plain text, non-secret key:value pairs, known as encryption context
     * pairs, that provide an added layer of security for your data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMS
     * encryption context</a> and <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a>.</p>
     */
    inline StartMedicalTranscriptionJobRequest& AddKMSEncryptionContext(Aws::String&& key, Aws::String&& value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of plain text, non-secret key:value pairs, known as encryption context
     * pairs, that provide an added layer of security for your data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMS
     * encryption context</a> and <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a>.</p>
     */
    inline StartMedicalTranscriptionJobRequest& AddKMSEncryptionContext(const char* key, Aws::String&& value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of plain text, non-secret key:value pairs, known as encryption context
     * pairs, that provide an added layer of security for your data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMS
     * encryption context</a> and <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a>.</p>
     */
    inline StartMedicalTranscriptionJobRequest& AddKMSEncryptionContext(Aws::String&& key, const char* value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of plain text, non-secret key:value pairs, known as encryption context
     * pairs, that provide an added layer of security for your data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMS
     * encryption context</a> and <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a>.</p>
     */
    inline StartMedicalTranscriptionJobRequest& AddKMSEncryptionContext(const char* key, const char* value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext.emplace(key, value); return *this; }


    /**
     * <p>Specify additional optional settings in your request, including channel
     * identification, alternative transcriptions, and speaker partitioning. You can
     * use that to apply custom vocabularies to your transcription job.</p>
     */
    inline const MedicalTranscriptionSetting& GetSettings() const{ return m_settings; }

    /**
     * <p>Specify additional optional settings in your request, including channel
     * identification, alternative transcriptions, and speaker partitioning. You can
     * use that to apply custom vocabularies to your transcription job.</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>Specify additional optional settings in your request, including channel
     * identification, alternative transcriptions, and speaker partitioning. You can
     * use that to apply custom vocabularies to your transcription job.</p>
     */
    inline void SetSettings(const MedicalTranscriptionSetting& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>Specify additional optional settings in your request, including channel
     * identification, alternative transcriptions, and speaker partitioning. You can
     * use that to apply custom vocabularies to your transcription job.</p>
     */
    inline void SetSettings(MedicalTranscriptionSetting&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>Specify additional optional settings in your request, including channel
     * identification, alternative transcriptions, and speaker partitioning. You can
     * use that to apply custom vocabularies to your transcription job.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithSettings(const MedicalTranscriptionSetting& value) { SetSettings(value); return *this;}

    /**
     * <p>Specify additional optional settings in your request, including channel
     * identification, alternative transcriptions, and speaker partitioning. You can
     * use that to apply custom vocabularies to your transcription job.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithSettings(MedicalTranscriptionSetting&& value) { SetSettings(std::move(value)); return *this;}


    /**
     * <p>Labels all personal health information (PHI) identified in your transcript.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/phi-id.html">Identifying
     * personal health information (PHI) in a transcription</a>.</p>
     */
    inline const MedicalContentIdentificationType& GetContentIdentificationType() const{ return m_contentIdentificationType; }

    /**
     * <p>Labels all personal health information (PHI) identified in your transcript.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/phi-id.html">Identifying
     * personal health information (PHI) in a transcription</a>.</p>
     */
    inline bool ContentIdentificationTypeHasBeenSet() const { return m_contentIdentificationTypeHasBeenSet; }

    /**
     * <p>Labels all personal health information (PHI) identified in your transcript.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/phi-id.html">Identifying
     * personal health information (PHI) in a transcription</a>.</p>
     */
    inline void SetContentIdentificationType(const MedicalContentIdentificationType& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = value; }

    /**
     * <p>Labels all personal health information (PHI) identified in your transcript.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/phi-id.html">Identifying
     * personal health information (PHI) in a transcription</a>.</p>
     */
    inline void SetContentIdentificationType(MedicalContentIdentificationType&& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = std::move(value); }

    /**
     * <p>Labels all personal health information (PHI) identified in your transcript.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/phi-id.html">Identifying
     * personal health information (PHI) in a transcription</a>.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithContentIdentificationType(const MedicalContentIdentificationType& value) { SetContentIdentificationType(value); return *this;}

    /**
     * <p>Labels all personal health information (PHI) identified in your transcript.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/phi-id.html">Identifying
     * personal health information (PHI) in a transcription</a>.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithContentIdentificationType(MedicalContentIdentificationType&& value) { SetContentIdentificationType(std::move(value)); return *this;}


    /**
     * <p>Specify the predominant medical specialty represented in your media. For
     * batch transcriptions, <code>PRIMARYCARE</code> is the only valid value. If you
     * require additional specialties, refer to .</p>
     */
    inline const Specialty& GetSpecialty() const{ return m_specialty; }

    /**
     * <p>Specify the predominant medical specialty represented in your media. For
     * batch transcriptions, <code>PRIMARYCARE</code> is the only valid value. If you
     * require additional specialties, refer to .</p>
     */
    inline bool SpecialtyHasBeenSet() const { return m_specialtyHasBeenSet; }

    /**
     * <p>Specify the predominant medical specialty represented in your media. For
     * batch transcriptions, <code>PRIMARYCARE</code> is the only valid value. If you
     * require additional specialties, refer to .</p>
     */
    inline void SetSpecialty(const Specialty& value) { m_specialtyHasBeenSet = true; m_specialty = value; }

    /**
     * <p>Specify the predominant medical specialty represented in your media. For
     * batch transcriptions, <code>PRIMARYCARE</code> is the only valid value. If you
     * require additional specialties, refer to .</p>
     */
    inline void SetSpecialty(Specialty&& value) { m_specialtyHasBeenSet = true; m_specialty = std::move(value); }

    /**
     * <p>Specify the predominant medical specialty represented in your media. For
     * batch transcriptions, <code>PRIMARYCARE</code> is the only valid value. If you
     * require additional specialties, refer to .</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithSpecialty(const Specialty& value) { SetSpecialty(value); return *this;}

    /**
     * <p>Specify the predominant medical specialty represented in your media. For
     * batch transcriptions, <code>PRIMARYCARE</code> is the only valid value. If you
     * require additional specialties, refer to .</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithSpecialty(Specialty&& value) { SetSpecialty(std::move(value)); return *this;}


    /**
     * <p>Specify whether your input media contains only one person
     * (<code>DICTATION</code>) or contains a conversation between two people
     * (<code>CONVERSATION</code>).</p> <p>For example, <code>DICTATION</code> could be
     * used for a medical professional wanting to transcribe voice memos;
     * <code>CONVERSATION</code> could be used for transcribing the doctor-patient
     * dialogue during the patient's office visit.</p>
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * <p>Specify whether your input media contains only one person
     * (<code>DICTATION</code>) or contains a conversation between two people
     * (<code>CONVERSATION</code>).</p> <p>For example, <code>DICTATION</code> could be
     * used for a medical professional wanting to transcribe voice memos;
     * <code>CONVERSATION</code> could be used for transcribing the doctor-patient
     * dialogue during the patient's office visit.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Specify whether your input media contains only one person
     * (<code>DICTATION</code>) or contains a conversation between two people
     * (<code>CONVERSATION</code>).</p> <p>For example, <code>DICTATION</code> could be
     * used for a medical professional wanting to transcribe voice memos;
     * <code>CONVERSATION</code> could be used for transcribing the doctor-patient
     * dialogue during the patient's office visit.</p>
     */
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specify whether your input media contains only one person
     * (<code>DICTATION</code>) or contains a conversation between two people
     * (<code>CONVERSATION</code>).</p> <p>For example, <code>DICTATION</code> could be
     * used for a medical professional wanting to transcribe voice memos;
     * <code>CONVERSATION</code> could be used for transcribing the doctor-patient
     * dialogue during the patient's office visit.</p>
     */
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Specify whether your input media contains only one person
     * (<code>DICTATION</code>) or contains a conversation between two people
     * (<code>CONVERSATION</code>).</p> <p>For example, <code>DICTATION</code> could be
     * used for a medical professional wanting to transcribe voice memos;
     * <code>CONVERSATION</code> could be used for transcribing the doctor-patient
     * dialogue during the patient's office visit.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * <p>Specify whether your input media contains only one person
     * (<code>DICTATION</code>) or contains a conversation between two people
     * (<code>CONVERSATION</code>).</p> <p>For example, <code>DICTATION</code> could be
     * used for a medical professional wanting to transcribe voice memos;
     * <code>CONVERSATION</code> could be used for transcribing the doctor-patient
     * dialogue during the patient's office visit.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithType(Type&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * medical transcription job at the time you start this new job.</p> <p>To learn
     * more about using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * medical transcription job at the time you start this new job.</p> <p>To learn
     * more about using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * medical transcription job at the time you start this new job.</p> <p>To learn
     * more about using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * medical transcription job at the time you start this new job.</p> <p>To learn
     * more about using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * medical transcription job at the time you start this new job.</p> <p>To learn
     * more about using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * medical transcription job at the time you start this new job.</p> <p>To learn
     * more about using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * medical transcription job at the time you start this new job.</p> <p>To learn
     * more about using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline StartMedicalTranscriptionJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * medical transcription job at the time you start this new job.</p> <p>To learn
     * more about using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline StartMedicalTranscriptionJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_medicalTranscriptionJobName;
    bool m_medicalTranscriptionJobNameHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    int m_mediaSampleRateHertz;
    bool m_mediaSampleRateHertzHasBeenSet = false;

    MediaFormat m_mediaFormat;
    bool m_mediaFormatHasBeenSet = false;

    Media m_media;
    bool m_mediaHasBeenSet = false;

    Aws::String m_outputBucketName;
    bool m_outputBucketNameHasBeenSet = false;

    Aws::String m_outputKey;
    bool m_outputKeyHasBeenSet = false;

    Aws::String m_outputEncryptionKMSKeyId;
    bool m_outputEncryptionKMSKeyIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_kMSEncryptionContext;
    bool m_kMSEncryptionContextHasBeenSet = false;

    MedicalTranscriptionSetting m_settings;
    bool m_settingsHasBeenSet = false;

    MedicalContentIdentificationType m_contentIdentificationType;
    bool m_contentIdentificationTypeHasBeenSet = false;

    Specialty m_specialty;
    bool m_specialtyHasBeenSet = false;

    Type m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
