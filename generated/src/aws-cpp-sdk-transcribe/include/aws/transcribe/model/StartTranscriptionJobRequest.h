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
#include <aws/transcribe/model/Settings.h>
#include <aws/transcribe/model/ModelSettings.h>
#include <aws/transcribe/model/JobExecutionSettings.h>
#include <aws/transcribe/model/ContentRedaction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/Subtitles.h>
#include <aws/transcribe/model/Tag.h>
#include <aws/transcribe/model/LanguageIdSettings.h>
#include <aws/transcribe/model/ToxicityDetectionSettings.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class StartTranscriptionJobRequest : public TranscribeServiceRequest
  {
  public:
    AWS_TRANSCRIBESERVICE_API StartTranscriptionJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartTranscriptionJob"; }

    AWS_TRANSCRIBESERVICE_API Aws::String SerializePayload() const override;

    AWS_TRANSCRIBESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique name, chosen by you, for your transcription job. The name that you
     * specify is also used as the default name of your transcription output file. If
     * you want to specify a different name for your transcription output, use the
     * <code>OutputKey</code> parameter.</p> <p>This name is case sensitive, cannot
     * contain spaces, and must be unique within an Amazon Web Services account. If you
     * try to create a new job with the same name as an existing job, you get a
     * <code>ConflictException</code> error.</p>
     */
    inline const Aws::String& GetTranscriptionJobName() const{ return m_transcriptionJobName; }
    inline bool TranscriptionJobNameHasBeenSet() const { return m_transcriptionJobNameHasBeenSet; }
    inline void SetTranscriptionJobName(const Aws::String& value) { m_transcriptionJobNameHasBeenSet = true; m_transcriptionJobName = value; }
    inline void SetTranscriptionJobName(Aws::String&& value) { m_transcriptionJobNameHasBeenSet = true; m_transcriptionJobName = std::move(value); }
    inline void SetTranscriptionJobName(const char* value) { m_transcriptionJobNameHasBeenSet = true; m_transcriptionJobName.assign(value); }
    inline StartTranscriptionJobRequest& WithTranscriptionJobName(const Aws::String& value) { SetTranscriptionJobName(value); return *this;}
    inline StartTranscriptionJobRequest& WithTranscriptionJobName(Aws::String&& value) { SetTranscriptionJobName(std::move(value)); return *this;}
    inline StartTranscriptionJobRequest& WithTranscriptionJobName(const char* value) { SetTranscriptionJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code that represents the language spoken in the input media
     * file.</p> <p>If you're unsure of the language spoken in your media file,
     * consider using <code>IdentifyLanguage</code> or
     * <code>IdentifyMultipleLanguages</code> to enable automatic language
     * identification.</p> <p>Note that you must include one of
     * <code>LanguageCode</code>, <code>IdentifyLanguage</code>, or
     * <code>IdentifyMultipleLanguages</code> in your request. If you include more than
     * one of these parameters, your transcription job fails.</p> <p>For a list of
     * supported languages and their associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>  <p>To transcribe speech in Modern Standard
     * Arabic (<code>ar-SA</code>), your media file must be encoded at a sample rate of
     * 16,000 Hz or higher.</p> 
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }
    inline StartTranscriptionJobRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}
    inline StartTranscriptionJobRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sample rate, in hertz, of the audio track in your input media file.</p>
     * <p>If you do not specify the media sample rate, Amazon Transcribe determines it
     * for you. If you specify the sample rate, it must match the rate detected by
     * Amazon Transcribe. If there's a mismatch between the value that you specify and
     * the value detected, your job fails. In most cases, you can omit
     * <code>MediaSampleRateHertz</code> and let Amazon Transcribe determine the sample
     * rate.</p>
     */
    inline int GetMediaSampleRateHertz() const{ return m_mediaSampleRateHertz; }
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }
    inline StartTranscriptionJobRequest& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the format of your input media file.</p>
     */
    inline const MediaFormat& GetMediaFormat() const{ return m_mediaFormat; }
    inline bool MediaFormatHasBeenSet() const { return m_mediaFormatHasBeenSet; }
    inline void SetMediaFormat(const MediaFormat& value) { m_mediaFormatHasBeenSet = true; m_mediaFormat = value; }
    inline void SetMediaFormat(MediaFormat&& value) { m_mediaFormatHasBeenSet = true; m_mediaFormat = std::move(value); }
    inline StartTranscriptionJobRequest& WithMediaFormat(const MediaFormat& value) { SetMediaFormat(value); return *this;}
    inline StartTranscriptionJobRequest& WithMediaFormat(MediaFormat&& value) { SetMediaFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the Amazon S3 location of the media file you want to use in your
     * request.</p>
     */
    inline const Media& GetMedia() const{ return m_media; }
    inline bool MediaHasBeenSet() const { return m_mediaHasBeenSet; }
    inline void SetMedia(const Media& value) { m_mediaHasBeenSet = true; m_media = value; }
    inline void SetMedia(Media&& value) { m_mediaHasBeenSet = true; m_media = std::move(value); }
    inline StartTranscriptionJobRequest& WithMedia(const Media& value) { SetMedia(value); return *this;}
    inline StartTranscriptionJobRequest& WithMedia(Media&& value) { SetMedia(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket where you want your transcription output
     * stored. Do not include the <code>S3://</code> prefix of the specified
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
     * Required for IAM User Roles</a>.</p> <p>If you do not specify
     * <code>OutputBucketName</code>, your transcript is placed in a service-managed
     * Amazon S3 bucket and you are provided with a URI to access your transcript.</p>
     */
    inline const Aws::String& GetOutputBucketName() const{ return m_outputBucketName; }
    inline bool OutputBucketNameHasBeenSet() const { return m_outputBucketNameHasBeenSet; }
    inline void SetOutputBucketName(const Aws::String& value) { m_outputBucketNameHasBeenSet = true; m_outputBucketName = value; }
    inline void SetOutputBucketName(Aws::String&& value) { m_outputBucketNameHasBeenSet = true; m_outputBucketName = std::move(value); }
    inline void SetOutputBucketName(const char* value) { m_outputBucketNameHasBeenSet = true; m_outputBucketName.assign(value); }
    inline StartTranscriptionJobRequest& WithOutputBucketName(const Aws::String& value) { SetOutputBucketName(value); return *this;}
    inline StartTranscriptionJobRequest& WithOutputBucketName(Aws::String&& value) { SetOutputBucketName(std::move(value)); return *this;}
    inline StartTranscriptionJobRequest& WithOutputBucketName(const char* value) { SetOutputBucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use in combination with <code>OutputBucketName</code> to specify the output
     * location of your transcript and, optionally, a unique name for your output file.
     * The default name for your transcription output is the same as the name you
     * specified for your transcription job (<code>TranscriptionJobName</code>).</p>
     * <p>Here are some examples of how you can use <code>OutputKey</code>:</p> <ul>
     * <li> <p>If you specify 'DOC-EXAMPLE-BUCKET' as the <code>OutputBucketName</code>
     * and 'my-transcript.json' as the <code>OutputKey</code>, your transcription
     * output path is <code>s3://DOC-EXAMPLE-BUCKET/my-transcript.json</code>.</p>
     * </li> <li> <p>If you specify 'my-first-transcription' as the
     * <code>TranscriptionJobName</code>, 'DOC-EXAMPLE-BUCKET' as the
     * <code>OutputBucketName</code>, and 'my-transcript' as the
     * <code>OutputKey</code>, your transcription output path is
     * <code>s3://DOC-EXAMPLE-BUCKET/my-transcript/my-first-transcription.json</code>.</p>
     * </li> <li> <p>If you specify 'DOC-EXAMPLE-BUCKET' as the
     * <code>OutputBucketName</code> and 'test-files/my-transcript.json' as the
     * <code>OutputKey</code>, your transcription output path is
     * <code>s3://DOC-EXAMPLE-BUCKET/test-files/my-transcript.json</code>.</p> </li>
     * <li> <p>If you specify 'my-first-transcription' as the
     * <code>TranscriptionJobName</code>, 'DOC-EXAMPLE-BUCKET' as the
     * <code>OutputBucketName</code>, and 'test-files/my-transcript' as the
     * <code>OutputKey</code>, your transcription output path is
     * <code>s3://DOC-EXAMPLE-BUCKET/test-files/my-transcript/my-first-transcription.json</code>.</p>
     * </li> </ul> <p>If you specify the name of an Amazon S3 bucket sub-folder that
     * doesn't exist, one is created for you.</p>
     */
    inline const Aws::String& GetOutputKey() const{ return m_outputKey; }
    inline bool OutputKeyHasBeenSet() const { return m_outputKeyHasBeenSet; }
    inline void SetOutputKey(const Aws::String& value) { m_outputKeyHasBeenSet = true; m_outputKey = value; }
    inline void SetOutputKey(Aws::String&& value) { m_outputKeyHasBeenSet = true; m_outputKey = std::move(value); }
    inline void SetOutputKey(const char* value) { m_outputKeyHasBeenSet = true; m_outputKey.assign(value); }
    inline StartTranscriptionJobRequest& WithOutputKey(const Aws::String& value) { SetOutputKey(value); return *this;}
    inline StartTranscriptionJobRequest& WithOutputKey(Aws::String&& value) { SetOutputKey(std::move(value)); return *this;}
    inline StartTranscriptionJobRequest& WithOutputKey(const char* value) { SetOutputKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key you want to use to encrypt your transcription output.</p> <p>If
     * using a key located in the <b>current</b> Amazon Web Services account, you can
     * specify your KMS key in one of four ways:</p> <ol> <li> <p>Use the KMS key ID
     * itself. For example, <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
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
     * <p>If you do not specify an encryption key, your output is encrypted with the
     * default Amazon S3 key (SSE-S3).</p> <p>If you specify a KMS key to encrypt your
     * output, you must also specify an output location using the
     * <code>OutputLocation</code> parameter.</p> <p>Note that the role making the
     * request must have permission to use the specified KMS key.</p>
     */
    inline const Aws::String& GetOutputEncryptionKMSKeyId() const{ return m_outputEncryptionKMSKeyId; }
    inline bool OutputEncryptionKMSKeyIdHasBeenSet() const { return m_outputEncryptionKMSKeyIdHasBeenSet; }
    inline void SetOutputEncryptionKMSKeyId(const Aws::String& value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId = value; }
    inline void SetOutputEncryptionKMSKeyId(Aws::String&& value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId = std::move(value); }
    inline void SetOutputEncryptionKMSKeyId(const char* value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId.assign(value); }
    inline StartTranscriptionJobRequest& WithOutputEncryptionKMSKeyId(const Aws::String& value) { SetOutputEncryptionKMSKeyId(value); return *this;}
    inline StartTranscriptionJobRequest& WithOutputEncryptionKMSKeyId(Aws::String&& value) { SetOutputEncryptionKMSKeyId(std::move(value)); return *this;}
    inline StartTranscriptionJobRequest& WithOutputEncryptionKMSKeyId(const char* value) { SetOutputEncryptionKMSKeyId(value); return *this;}
    ///@}

    ///@{
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
    inline bool KMSEncryptionContextHasBeenSet() const { return m_kMSEncryptionContextHasBeenSet; }
    inline void SetKMSEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext = value; }
    inline void SetKMSEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext = std::move(value); }
    inline StartTranscriptionJobRequest& WithKMSEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetKMSEncryptionContext(value); return *this;}
    inline StartTranscriptionJobRequest& WithKMSEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetKMSEncryptionContext(std::move(value)); return *this;}
    inline StartTranscriptionJobRequest& AddKMSEncryptionContext(const Aws::String& key, const Aws::String& value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext.emplace(key, value); return *this; }
    inline StartTranscriptionJobRequest& AddKMSEncryptionContext(Aws::String&& key, const Aws::String& value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext.emplace(std::move(key), value); return *this; }
    inline StartTranscriptionJobRequest& AddKMSEncryptionContext(const Aws::String& key, Aws::String&& value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext.emplace(key, std::move(value)); return *this; }
    inline StartTranscriptionJobRequest& AddKMSEncryptionContext(Aws::String&& key, Aws::String&& value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext.emplace(std::move(key), std::move(value)); return *this; }
    inline StartTranscriptionJobRequest& AddKMSEncryptionContext(const char* key, Aws::String&& value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext.emplace(key, std::move(value)); return *this; }
    inline StartTranscriptionJobRequest& AddKMSEncryptionContext(Aws::String&& key, const char* value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext.emplace(std::move(key), value); return *this; }
    inline StartTranscriptionJobRequest& AddKMSEncryptionContext(const char* key, const char* value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify additional optional settings in your request, including channel
     * identification, alternative transcriptions, speaker partitioning. You can use
     * that to apply custom vocabularies and vocabulary filters.</p> <p>If you want to
     * include a custom vocabulary or a custom vocabulary filter (or both) with your
     * request but <b>do not</b> want to use automatic language identification, use
     * <code>Settings</code> with the <code>VocabularyName</code> or
     * <code>VocabularyFilterName</code> (or both) sub-parameter.</p> <p>If you're
     * using automatic language identification with your request and want to include a
     * custom language model, a custom vocabulary, or a custom vocabulary filter, use
     * instead the <code/> parameter with the <code>LanguageModelName</code>,
     * <code>VocabularyName</code> or <code>VocabularyFilterName</code>
     * sub-parameters.</p>
     */
    inline const Settings& GetSettings() const{ return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    inline void SetSettings(const Settings& value) { m_settingsHasBeenSet = true; m_settings = value; }
    inline void SetSettings(Settings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }
    inline StartTranscriptionJobRequest& WithSettings(const Settings& value) { SetSettings(value); return *this;}
    inline StartTranscriptionJobRequest& WithSettings(Settings&& value) { SetSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the custom language model you want to include with your transcription
     * job. If you include <code>ModelSettings</code> in your request, you must include
     * the <code>LanguageModelName</code> sub-parameter.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a>.</p>
     */
    inline const ModelSettings& GetModelSettings() const{ return m_modelSettings; }
    inline bool ModelSettingsHasBeenSet() const { return m_modelSettingsHasBeenSet; }
    inline void SetModelSettings(const ModelSettings& value) { m_modelSettingsHasBeenSet = true; m_modelSettings = value; }
    inline void SetModelSettings(ModelSettings&& value) { m_modelSettingsHasBeenSet = true; m_modelSettings = std::move(value); }
    inline StartTranscriptionJobRequest& WithModelSettings(const ModelSettings& value) { SetModelSettings(value); return *this;}
    inline StartTranscriptionJobRequest& WithModelSettings(ModelSettings&& value) { SetModelSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Makes it possible to control how your transcription job is processed.
     * Currently, the only <code>JobExecutionSettings</code> modification you can
     * choose is enabling job queueing using the <code>AllowDeferredExecution</code>
     * sub-parameter.</p> <p>If you include <code>JobExecutionSettings</code> in your
     * request, you must also include the sub-parameters:
     * <code>AllowDeferredExecution</code> and <code>DataAccessRoleArn</code>.</p>
     */
    inline const JobExecutionSettings& GetJobExecutionSettings() const{ return m_jobExecutionSettings; }
    inline bool JobExecutionSettingsHasBeenSet() const { return m_jobExecutionSettingsHasBeenSet; }
    inline void SetJobExecutionSettings(const JobExecutionSettings& value) { m_jobExecutionSettingsHasBeenSet = true; m_jobExecutionSettings = value; }
    inline void SetJobExecutionSettings(JobExecutionSettings&& value) { m_jobExecutionSettingsHasBeenSet = true; m_jobExecutionSettings = std::move(value); }
    inline StartTranscriptionJobRequest& WithJobExecutionSettings(const JobExecutionSettings& value) { SetJobExecutionSettings(value); return *this;}
    inline StartTranscriptionJobRequest& WithJobExecutionSettings(JobExecutionSettings&& value) { SetJobExecutionSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Makes it possible to redact or flag specified personally identifiable
     * information (PII) in your transcript. If you use <code>ContentRedaction</code>,
     * you must also include the sub-parameters: <code>RedactionOutput</code> and
     * <code>RedactionType</code>. You can optionally include
     * <code>PiiEntityTypes</code> to choose which types of PII you want to redact. If
     * you do not include <code>PiiEntityTypes</code> in your request, all PII is
     * redacted.</p>
     */
    inline const ContentRedaction& GetContentRedaction() const{ return m_contentRedaction; }
    inline bool ContentRedactionHasBeenSet() const { return m_contentRedactionHasBeenSet; }
    inline void SetContentRedaction(const ContentRedaction& value) { m_contentRedactionHasBeenSet = true; m_contentRedaction = value; }
    inline void SetContentRedaction(ContentRedaction&& value) { m_contentRedactionHasBeenSet = true; m_contentRedaction = std::move(value); }
    inline StartTranscriptionJobRequest& WithContentRedaction(const ContentRedaction& value) { SetContentRedaction(value); return *this;}
    inline StartTranscriptionJobRequest& WithContentRedaction(ContentRedaction&& value) { SetContentRedaction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables automatic language identification in your transcription job request.
     * Use this parameter if your media file contains only one language. If your media
     * contains multiple languages, use <code>IdentifyMultipleLanguages</code>
     * instead.</p> <p>If you include <code>IdentifyLanguage</code>, you can optionally
     * include a list of language codes, using <code>LanguageOptions</code>, that you
     * think may be present in your media file. Including <code>LanguageOptions</code>
     * restricts <code>IdentifyLanguage</code> to only the language options that you
     * specify, which can improve transcription accuracy.</p> <p>If you want to apply a
     * custom language model, a custom vocabulary, or a custom vocabulary filter to
     * your automatic language identification request, include
     * <code>LanguageIdSettings</code> with the relevant sub-parameters
     * (<code>VocabularyName</code>, <code>LanguageModelName</code>, and
     * <code>VocabularyFilterName</code>). If you include
     * <code>LanguageIdSettings</code>, also include <code>LanguageOptions</code>.</p>
     * <p>Note that you must include one of <code>LanguageCode</code>,
     * <code>IdentifyLanguage</code>, or <code>IdentifyMultipleLanguages</code> in your
     * request. If you include more than one of these parameters, your transcription
     * job fails.</p>
     */
    inline bool GetIdentifyLanguage() const{ return m_identifyLanguage; }
    inline bool IdentifyLanguageHasBeenSet() const { return m_identifyLanguageHasBeenSet; }
    inline void SetIdentifyLanguage(bool value) { m_identifyLanguageHasBeenSet = true; m_identifyLanguage = value; }
    inline StartTranscriptionJobRequest& WithIdentifyLanguage(bool value) { SetIdentifyLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables automatic multi-language identification in your transcription job
     * request. Use this parameter if your media file contains more than one language.
     * If your media contains only one language, use <code>IdentifyLanguage</code>
     * instead.</p> <p>If you include <code>IdentifyMultipleLanguages</code>, you can
     * optionally include a list of language codes, using <code>LanguageOptions</code>,
     * that you think may be present in your media file. Including
     * <code>LanguageOptions</code> restricts <code>IdentifyLanguage</code> to only the
     * language options that you specify, which can improve transcription accuracy.</p>
     * <p>If you want to apply a custom vocabulary or a custom vocabulary filter to
     * your automatic language identification request, include
     * <code>LanguageIdSettings</code> with the relevant sub-parameters
     * (<code>VocabularyName</code> and <code>VocabularyFilterName</code>). If you
     * include <code>LanguageIdSettings</code>, also include
     * <code>LanguageOptions</code>.</p> <p>Note that you must include one of
     * <code>LanguageCode</code>, <code>IdentifyLanguage</code>, or
     * <code>IdentifyMultipleLanguages</code> in your request. If you include more than
     * one of these parameters, your transcription job fails.</p>
     */
    inline bool GetIdentifyMultipleLanguages() const{ return m_identifyMultipleLanguages; }
    inline bool IdentifyMultipleLanguagesHasBeenSet() const { return m_identifyMultipleLanguagesHasBeenSet; }
    inline void SetIdentifyMultipleLanguages(bool value) { m_identifyMultipleLanguagesHasBeenSet = true; m_identifyMultipleLanguages = value; }
    inline StartTranscriptionJobRequest& WithIdentifyMultipleLanguages(bool value) { SetIdentifyMultipleLanguages(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can specify two or more language codes that represent the languages you
     * think may be present in your media. Including more than five is not recommended.
     * If you're unsure what languages are present, do not include this parameter.</p>
     * <p>If you include <code>LanguageOptions</code> in your request, you must also
     * include <code>IdentifyLanguage</code>.</p> <p>For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a>.</p> <p>To transcribe speech in Modern Standard Arabic
     * (<code>ar-SA</code>), your media file must be encoded at a sample rate of 16,000
     * Hz or higher.</p>
     */
    inline const Aws::Vector<LanguageCode>& GetLanguageOptions() const{ return m_languageOptions; }
    inline bool LanguageOptionsHasBeenSet() const { return m_languageOptionsHasBeenSet; }
    inline void SetLanguageOptions(const Aws::Vector<LanguageCode>& value) { m_languageOptionsHasBeenSet = true; m_languageOptions = value; }
    inline void SetLanguageOptions(Aws::Vector<LanguageCode>&& value) { m_languageOptionsHasBeenSet = true; m_languageOptions = std::move(value); }
    inline StartTranscriptionJobRequest& WithLanguageOptions(const Aws::Vector<LanguageCode>& value) { SetLanguageOptions(value); return *this;}
    inline StartTranscriptionJobRequest& WithLanguageOptions(Aws::Vector<LanguageCode>&& value) { SetLanguageOptions(std::move(value)); return *this;}
    inline StartTranscriptionJobRequest& AddLanguageOptions(const LanguageCode& value) { m_languageOptionsHasBeenSet = true; m_languageOptions.push_back(value); return *this; }
    inline StartTranscriptionJobRequest& AddLanguageOptions(LanguageCode&& value) { m_languageOptionsHasBeenSet = true; m_languageOptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Produces subtitle files for your input media. You can specify WebVTT (*.vtt)
     * and SubRip (*.srt) formats.</p>
     */
    inline const Subtitles& GetSubtitles() const{ return m_subtitles; }
    inline bool SubtitlesHasBeenSet() const { return m_subtitlesHasBeenSet; }
    inline void SetSubtitles(const Subtitles& value) { m_subtitlesHasBeenSet = true; m_subtitles = value; }
    inline void SetSubtitles(Subtitles&& value) { m_subtitlesHasBeenSet = true; m_subtitles = std::move(value); }
    inline StartTranscriptionJobRequest& WithSubtitles(const Subtitles& value) { SetSubtitles(value); return *this;}
    inline StartTranscriptionJobRequest& WithSubtitles(Subtitles&& value) { SetSubtitles(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * transcription job at the time you start this new job.</p> <p>To learn more about
     * using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline StartTranscriptionJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline StartTranscriptionJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline StartTranscriptionJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline StartTranscriptionJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If using automatic language identification in your request and you want to
     * apply a custom language model, a custom vocabulary, or a custom vocabulary
     * filter, include <code>LanguageIdSettings</code> with the relevant sub-parameters
     * (<code>VocabularyName</code>, <code>LanguageModelName</code>, and
     * <code>VocabularyFilterName</code>). Note that multi-language identification
     * (<code>IdentifyMultipleLanguages</code>) doesn't support custom language
     * models.</p> <p> <code>LanguageIdSettings</code> supports two to five language
     * codes. Each language code you include can have an associated custom language
     * model, custom vocabulary, and custom vocabulary filter. The language codes that
     * you specify must match the languages of the associated custom language models,
     * custom vocabularies, and custom vocabulary filters.</p> <p>It's recommended that
     * you include <code>LanguageOptions</code> when using
     * <code>LanguageIdSettings</code> to ensure that the correct language dialect is
     * identified. For example, if you specify a custom vocabulary that is in
     * <code>en-US</code> but Amazon Transcribe determines that the language spoken in
     * your media is <code>en-AU</code>, your custom vocabulary <i>is not</i> applied
     * to your transcription. If you include <code>LanguageOptions</code> and include
     * <code>en-US</code> as the only English language dialect, your custom vocabulary
     * <i>is</i> applied to your transcription.</p> <p>If you want to include a custom
     * language model with your request but <b>do not</b> want to use automatic
     * language identification, use instead the <code/> parameter with the
     * <code>LanguageModelName</code> sub-parameter. If you want to include a custom
     * vocabulary or a custom vocabulary filter (or both) with your request but <b>do
     * not</b> want to use automatic language identification, use instead the <code/>
     * parameter with the <code>VocabularyName</code> or
     * <code>VocabularyFilterName</code> (or both) sub-parameter.</p>
     */
    inline const Aws::Map<LanguageCode, LanguageIdSettings>& GetLanguageIdSettings() const{ return m_languageIdSettings; }
    inline bool LanguageIdSettingsHasBeenSet() const { return m_languageIdSettingsHasBeenSet; }
    inline void SetLanguageIdSettings(const Aws::Map<LanguageCode, LanguageIdSettings>& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings = value; }
    inline void SetLanguageIdSettings(Aws::Map<LanguageCode, LanguageIdSettings>&& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings = std::move(value); }
    inline StartTranscriptionJobRequest& WithLanguageIdSettings(const Aws::Map<LanguageCode, LanguageIdSettings>& value) { SetLanguageIdSettings(value); return *this;}
    inline StartTranscriptionJobRequest& WithLanguageIdSettings(Aws::Map<LanguageCode, LanguageIdSettings>&& value) { SetLanguageIdSettings(std::move(value)); return *this;}
    inline StartTranscriptionJobRequest& AddLanguageIdSettings(const LanguageCode& key, const LanguageIdSettings& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings.emplace(key, value); return *this; }
    inline StartTranscriptionJobRequest& AddLanguageIdSettings(LanguageCode&& key, const LanguageIdSettings& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings.emplace(std::move(key), value); return *this; }
    inline StartTranscriptionJobRequest& AddLanguageIdSettings(const LanguageCode& key, LanguageIdSettings&& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings.emplace(key, std::move(value)); return *this; }
    inline StartTranscriptionJobRequest& AddLanguageIdSettings(LanguageCode&& key, LanguageIdSettings&& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enables toxic speech detection in your transcript. If you include
     * <code>ToxicityDetection</code> in your request, you must also include
     * <code>ToxicityCategories</code>.</p> <p>For information on the types of toxic
     * speech Amazon Transcribe can detect, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/toxic-language.html">Detecting
     * toxic speech</a>.</p>
     */
    inline const Aws::Vector<ToxicityDetectionSettings>& GetToxicityDetection() const{ return m_toxicityDetection; }
    inline bool ToxicityDetectionHasBeenSet() const { return m_toxicityDetectionHasBeenSet; }
    inline void SetToxicityDetection(const Aws::Vector<ToxicityDetectionSettings>& value) { m_toxicityDetectionHasBeenSet = true; m_toxicityDetection = value; }
    inline void SetToxicityDetection(Aws::Vector<ToxicityDetectionSettings>&& value) { m_toxicityDetectionHasBeenSet = true; m_toxicityDetection = std::move(value); }
    inline StartTranscriptionJobRequest& WithToxicityDetection(const Aws::Vector<ToxicityDetectionSettings>& value) { SetToxicityDetection(value); return *this;}
    inline StartTranscriptionJobRequest& WithToxicityDetection(Aws::Vector<ToxicityDetectionSettings>&& value) { SetToxicityDetection(std::move(value)); return *this;}
    inline StartTranscriptionJobRequest& AddToxicityDetection(const ToxicityDetectionSettings& value) { m_toxicityDetectionHasBeenSet = true; m_toxicityDetection.push_back(value); return *this; }
    inline StartTranscriptionJobRequest& AddToxicityDetection(ToxicityDetectionSettings&& value) { m_toxicityDetectionHasBeenSet = true; m_toxicityDetection.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_transcriptionJobName;
    bool m_transcriptionJobNameHasBeenSet = false;

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

    Settings m_settings;
    bool m_settingsHasBeenSet = false;

    ModelSettings m_modelSettings;
    bool m_modelSettingsHasBeenSet = false;

    JobExecutionSettings m_jobExecutionSettings;
    bool m_jobExecutionSettingsHasBeenSet = false;

    ContentRedaction m_contentRedaction;
    bool m_contentRedactionHasBeenSet = false;

    bool m_identifyLanguage;
    bool m_identifyLanguageHasBeenSet = false;

    bool m_identifyMultipleLanguages;
    bool m_identifyMultipleLanguagesHasBeenSet = false;

    Aws::Vector<LanguageCode> m_languageOptions;
    bool m_languageOptionsHasBeenSet = false;

    Subtitles m_subtitles;
    bool m_subtitlesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Map<LanguageCode, LanguageIdSettings> m_languageIdSettings;
    bool m_languageIdSettingsHasBeenSet = false;

    Aws::Vector<ToxicityDetectionSettings> m_toxicityDetection;
    bool m_toxicityDetectionHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
