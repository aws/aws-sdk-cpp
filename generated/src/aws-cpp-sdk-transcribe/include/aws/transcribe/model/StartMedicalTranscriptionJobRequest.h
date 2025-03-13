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
    AWS_TRANSCRIBESERVICE_API StartMedicalTranscriptionJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartMedicalTranscriptionJob"; }

    AWS_TRANSCRIBESERVICE_API Aws::String SerializePayload() const override;

    AWS_TRANSCRIBESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique name, chosen by you, for your medical transcription job. The name
     * that you specify is also used as the default name of your transcription output
     * file. If you want to specify a different name for your transcription output, use
     * the <code>OutputKey</code> parameter.</p> <p>This name is case sensitive, cannot
     * contain spaces, and must be unique within an Amazon Web Services account. If you
     * try to create a new job with the same name as an existing job, you get a
     * <code>ConflictException</code> error.</p>
     */
    inline const Aws::String& GetMedicalTranscriptionJobName() const { return m_medicalTranscriptionJobName; }
    inline bool MedicalTranscriptionJobNameHasBeenSet() const { return m_medicalTranscriptionJobNameHasBeenSet; }
    template<typename MedicalTranscriptionJobNameT = Aws::String>
    void SetMedicalTranscriptionJobName(MedicalTranscriptionJobNameT&& value) { m_medicalTranscriptionJobNameHasBeenSet = true; m_medicalTranscriptionJobName = std::forward<MedicalTranscriptionJobNameT>(value); }
    template<typename MedicalTranscriptionJobNameT = Aws::String>
    StartMedicalTranscriptionJobRequest& WithMedicalTranscriptionJobName(MedicalTranscriptionJobNameT&& value) { SetMedicalTranscriptionJobName(std::forward<MedicalTranscriptionJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code that represents the language spoken in the input media
     * file. US English (<code>en-US</code>) is the only valid value for medical
     * transcription jobs. Any other value you enter for language code results in a
     * <code>BadRequestException</code> error.</p>
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline StartMedicalTranscriptionJobRequest& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sample rate, in hertz, of the audio track in your input media file.</p>
     * <p>If you do not specify the media sample rate, Amazon Transcribe Medical
     * determines it for you. If you specify the sample rate, it must match the rate
     * detected by Amazon Transcribe Medical; if there's a mismatch between the value
     * that you specify and the value detected, your job fails. Therefore, in most
     * cases, it's advised to omit <code>MediaSampleRateHertz</code> and let Amazon
     * Transcribe Medical determine the sample rate.</p>
     */
    inline int GetMediaSampleRateHertz() const { return m_mediaSampleRateHertz; }
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }
    inline StartMedicalTranscriptionJobRequest& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the format of your input media file.</p>
     */
    inline MediaFormat GetMediaFormat() const { return m_mediaFormat; }
    inline bool MediaFormatHasBeenSet() const { return m_mediaFormatHasBeenSet; }
    inline void SetMediaFormat(MediaFormat value) { m_mediaFormatHasBeenSet = true; m_mediaFormat = value; }
    inline StartMedicalTranscriptionJobRequest& WithMediaFormat(MediaFormat value) { SetMediaFormat(value); return *this;}
    ///@}

    ///@{
    
    inline const Media& GetMedia() const { return m_media; }
    inline bool MediaHasBeenSet() const { return m_mediaHasBeenSet; }
    template<typename MediaT = Media>
    void SetMedia(MediaT&& value) { m_mediaHasBeenSet = true; m_media = std::forward<MediaT>(value); }
    template<typename MediaT = Media>
    StartMedicalTranscriptionJobRequest& WithMedia(MediaT&& value) { SetMedia(std::forward<MediaT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetOutputBucketName() const { return m_outputBucketName; }
    inline bool OutputBucketNameHasBeenSet() const { return m_outputBucketNameHasBeenSet; }
    template<typename OutputBucketNameT = Aws::String>
    void SetOutputBucketName(OutputBucketNameT&& value) { m_outputBucketNameHasBeenSet = true; m_outputBucketName = std::forward<OutputBucketNameT>(value); }
    template<typename OutputBucketNameT = Aws::String>
    StartMedicalTranscriptionJobRequest& WithOutputBucketName(OutputBucketNameT&& value) { SetOutputBucketName(std::forward<OutputBucketNameT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetOutputKey() const { return m_outputKey; }
    inline bool OutputKeyHasBeenSet() const { return m_outputKeyHasBeenSet; }
    template<typename OutputKeyT = Aws::String>
    void SetOutputKey(OutputKeyT&& value) { m_outputKeyHasBeenSet = true; m_outputKey = std::forward<OutputKeyT>(value); }
    template<typename OutputKeyT = Aws::String>
    StartMedicalTranscriptionJobRequest& WithOutputKey(OutputKeyT&& value) { SetOutputKey(std::forward<OutputKeyT>(value)); return *this;}
    ///@}

    ///@{
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
     * <p>If you do not specify an encryption key, your output is encrypted with the
     * default Amazon S3 key (SSE-S3).</p> <p>If you specify a KMS key to encrypt your
     * output, you must also specify an output location using the
     * <code>OutputLocation</code> parameter.</p> <p>Note that the role making the
     * request must have permission to use the specified KMS key.</p>
     */
    inline const Aws::String& GetOutputEncryptionKMSKeyId() const { return m_outputEncryptionKMSKeyId; }
    inline bool OutputEncryptionKMSKeyIdHasBeenSet() const { return m_outputEncryptionKMSKeyIdHasBeenSet; }
    template<typename OutputEncryptionKMSKeyIdT = Aws::String>
    void SetOutputEncryptionKMSKeyId(OutputEncryptionKMSKeyIdT&& value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId = std::forward<OutputEncryptionKMSKeyIdT>(value); }
    template<typename OutputEncryptionKMSKeyIdT = Aws::String>
    StartMedicalTranscriptionJobRequest& WithOutputEncryptionKMSKeyId(OutputEncryptionKMSKeyIdT&& value) { SetOutputEncryptionKMSKeyId(std::forward<OutputEncryptionKMSKeyIdT>(value)); return *this;}
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
    inline const Aws::Map<Aws::String, Aws::String>& GetKMSEncryptionContext() const { return m_kMSEncryptionContext; }
    inline bool KMSEncryptionContextHasBeenSet() const { return m_kMSEncryptionContextHasBeenSet; }
    template<typename KMSEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
    void SetKMSEncryptionContext(KMSEncryptionContextT&& value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext = std::forward<KMSEncryptionContextT>(value); }
    template<typename KMSEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
    StartMedicalTranscriptionJobRequest& WithKMSEncryptionContext(KMSEncryptionContextT&& value) { SetKMSEncryptionContext(std::forward<KMSEncryptionContextT>(value)); return *this;}
    template<typename KMSEncryptionContextKeyT = Aws::String, typename KMSEncryptionContextValueT = Aws::String>
    StartMedicalTranscriptionJobRequest& AddKMSEncryptionContext(KMSEncryptionContextKeyT&& key, KMSEncryptionContextValueT&& value) {
      m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext.emplace(std::forward<KMSEncryptionContextKeyT>(key), std::forward<KMSEncryptionContextValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specify additional optional settings in your request, including channel
     * identification, alternative transcriptions, and speaker partitioning. You can
     * use that to apply custom vocabularies to your transcription job.</p>
     */
    inline const MedicalTranscriptionSetting& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = MedicalTranscriptionSetting>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = MedicalTranscriptionSetting>
    StartMedicalTranscriptionJobRequest& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Labels all personal health information (PHI) identified in your transcript.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/phi-id.html">Identifying
     * personal health information (PHI) in a transcription</a>.</p>
     */
    inline MedicalContentIdentificationType GetContentIdentificationType() const { return m_contentIdentificationType; }
    inline bool ContentIdentificationTypeHasBeenSet() const { return m_contentIdentificationTypeHasBeenSet; }
    inline void SetContentIdentificationType(MedicalContentIdentificationType value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = value; }
    inline StartMedicalTranscriptionJobRequest& WithContentIdentificationType(MedicalContentIdentificationType value) { SetContentIdentificationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the predominant medical specialty represented in your media. For
     * batch transcriptions, <code>PRIMARYCARE</code> is the only valid value. If you
     * require additional specialties, refer to .</p>
     */
    inline Specialty GetSpecialty() const { return m_specialty; }
    inline bool SpecialtyHasBeenSet() const { return m_specialtyHasBeenSet; }
    inline void SetSpecialty(Specialty value) { m_specialtyHasBeenSet = true; m_specialty = value; }
    inline StartMedicalTranscriptionJobRequest& WithSpecialty(Specialty value) { SetSpecialty(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify whether your input media contains only one person
     * (<code>DICTATION</code>) or contains a conversation between two people
     * (<code>CONVERSATION</code>).</p> <p>For example, <code>DICTATION</code> could be
     * used for a medical professional wanting to transcribe voice memos;
     * <code>CONVERSATION</code> could be used for transcribing the doctor-patient
     * dialogue during the patient's office visit.</p>
     */
    inline Type GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(Type value) { m_typeHasBeenSet = true; m_type = value; }
    inline StartMedicalTranscriptionJobRequest& WithType(Type value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * medical transcription job at the time you start this new job.</p> <p>To learn
     * more about using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    StartMedicalTranscriptionJobRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    StartMedicalTranscriptionJobRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_medicalTranscriptionJobName;
    bool m_medicalTranscriptionJobNameHasBeenSet = false;

    LanguageCode m_languageCode{LanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    int m_mediaSampleRateHertz{0};
    bool m_mediaSampleRateHertzHasBeenSet = false;

    MediaFormat m_mediaFormat{MediaFormat::NOT_SET};
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

    MedicalContentIdentificationType m_contentIdentificationType{MedicalContentIdentificationType::NOT_SET};
    bool m_contentIdentificationTypeHasBeenSet = false;

    Specialty m_specialty{Specialty::NOT_SET};
    bool m_specialtyHasBeenSet = false;

    Type m_type{Type::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
