/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Describes the Amazon S3 location of the media file you want to use in your
   * request.</p> <p>For information on supported media formats, refer to the <a
   * href="https://docs.aws.amazon.com/APIReference/API_StartTranscriptionJob.html#transcribe-StartTranscriptionJob-request-MediaFormat">MediaFormat</a>
   * parameter or the <a
   * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-input.html#how-input-audio">Media
   * formats</a> section in the Amazon S3 Developer Guide.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/Media">AWS
   * API Reference</a></p>
   */
  class Media
  {
  public:
    AWS_TRANSCRIBESERVICE_API Media();
    AWS_TRANSCRIBESERVICE_API Media(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Media& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 location of the media file you want to transcribe. For
     * example:</p> <ul> <li> <p>
     * <code>s3://DOC-EXAMPLE-BUCKET/my-media-file.flac</code> </p> </li> <li> <p>
     * <code>s3://DOC-EXAMPLE-BUCKET/media-files/my-media-file.flac</code> </p> </li>
     * </ul> <p>Note that the Amazon S3 bucket that contains your input media must be
     * located in the same Amazon Web Services Region where you're making your
     * transcription request.</p>
     */
    inline const Aws::String& GetMediaFileUri() const{ return m_mediaFileUri; }

    /**
     * <p>The Amazon S3 location of the media file you want to transcribe. For
     * example:</p> <ul> <li> <p>
     * <code>s3://DOC-EXAMPLE-BUCKET/my-media-file.flac</code> </p> </li> <li> <p>
     * <code>s3://DOC-EXAMPLE-BUCKET/media-files/my-media-file.flac</code> </p> </li>
     * </ul> <p>Note that the Amazon S3 bucket that contains your input media must be
     * located in the same Amazon Web Services Region where you're making your
     * transcription request.</p>
     */
    inline bool MediaFileUriHasBeenSet() const { return m_mediaFileUriHasBeenSet; }

    /**
     * <p>The Amazon S3 location of the media file you want to transcribe. For
     * example:</p> <ul> <li> <p>
     * <code>s3://DOC-EXAMPLE-BUCKET/my-media-file.flac</code> </p> </li> <li> <p>
     * <code>s3://DOC-EXAMPLE-BUCKET/media-files/my-media-file.flac</code> </p> </li>
     * </ul> <p>Note that the Amazon S3 bucket that contains your input media must be
     * located in the same Amazon Web Services Region where you're making your
     * transcription request.</p>
     */
    inline void SetMediaFileUri(const Aws::String& value) { m_mediaFileUriHasBeenSet = true; m_mediaFileUri = value; }

    /**
     * <p>The Amazon S3 location of the media file you want to transcribe. For
     * example:</p> <ul> <li> <p>
     * <code>s3://DOC-EXAMPLE-BUCKET/my-media-file.flac</code> </p> </li> <li> <p>
     * <code>s3://DOC-EXAMPLE-BUCKET/media-files/my-media-file.flac</code> </p> </li>
     * </ul> <p>Note that the Amazon S3 bucket that contains your input media must be
     * located in the same Amazon Web Services Region where you're making your
     * transcription request.</p>
     */
    inline void SetMediaFileUri(Aws::String&& value) { m_mediaFileUriHasBeenSet = true; m_mediaFileUri = std::move(value); }

    /**
     * <p>The Amazon S3 location of the media file you want to transcribe. For
     * example:</p> <ul> <li> <p>
     * <code>s3://DOC-EXAMPLE-BUCKET/my-media-file.flac</code> </p> </li> <li> <p>
     * <code>s3://DOC-EXAMPLE-BUCKET/media-files/my-media-file.flac</code> </p> </li>
     * </ul> <p>Note that the Amazon S3 bucket that contains your input media must be
     * located in the same Amazon Web Services Region where you're making your
     * transcription request.</p>
     */
    inline void SetMediaFileUri(const char* value) { m_mediaFileUriHasBeenSet = true; m_mediaFileUri.assign(value); }

    /**
     * <p>The Amazon S3 location of the media file you want to transcribe. For
     * example:</p> <ul> <li> <p>
     * <code>s3://DOC-EXAMPLE-BUCKET/my-media-file.flac</code> </p> </li> <li> <p>
     * <code>s3://DOC-EXAMPLE-BUCKET/media-files/my-media-file.flac</code> </p> </li>
     * </ul> <p>Note that the Amazon S3 bucket that contains your input media must be
     * located in the same Amazon Web Services Region where you're making your
     * transcription request.</p>
     */
    inline Media& WithMediaFileUri(const Aws::String& value) { SetMediaFileUri(value); return *this;}

    /**
     * <p>The Amazon S3 location of the media file you want to transcribe. For
     * example:</p> <ul> <li> <p>
     * <code>s3://DOC-EXAMPLE-BUCKET/my-media-file.flac</code> </p> </li> <li> <p>
     * <code>s3://DOC-EXAMPLE-BUCKET/media-files/my-media-file.flac</code> </p> </li>
     * </ul> <p>Note that the Amazon S3 bucket that contains your input media must be
     * located in the same Amazon Web Services Region where you're making your
     * transcription request.</p>
     */
    inline Media& WithMediaFileUri(Aws::String&& value) { SetMediaFileUri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location of the media file you want to transcribe. For
     * example:</p> <ul> <li> <p>
     * <code>s3://DOC-EXAMPLE-BUCKET/my-media-file.flac</code> </p> </li> <li> <p>
     * <code>s3://DOC-EXAMPLE-BUCKET/media-files/my-media-file.flac</code> </p> </li>
     * </ul> <p>Note that the Amazon S3 bucket that contains your input media must be
     * located in the same Amazon Web Services Region where you're making your
     * transcription request.</p>
     */
    inline Media& WithMediaFileUri(const char* value) { SetMediaFileUri(value); return *this;}


    /**
     * <p>The Amazon S3 location of the media file you want to redact. For example:</p>
     * <ul> <li> <p> <code>s3://DOC-EXAMPLE-BUCKET/my-media-file.flac</code> </p> </li>
     * <li> <p> <code>s3://DOC-EXAMPLE-BUCKET/media-files/my-media-file.flac</code>
     * </p> </li> </ul> <p>Note that the Amazon S3 bucket that contains your input
     * media must be located in the same Amazon Web Services Region where you're making
     * your transcription request.</p>  <p>
     * <code>RedactedMediaFileUri</code> produces a redacted audio file in addition to
     * a redacted transcript. It is only supported for Call Analytics
     * (<code>StartCallAnalyticsJob</code>) transcription requests.</p> 
     */
    inline const Aws::String& GetRedactedMediaFileUri() const{ return m_redactedMediaFileUri; }

    /**
     * <p>The Amazon S3 location of the media file you want to redact. For example:</p>
     * <ul> <li> <p> <code>s3://DOC-EXAMPLE-BUCKET/my-media-file.flac</code> </p> </li>
     * <li> <p> <code>s3://DOC-EXAMPLE-BUCKET/media-files/my-media-file.flac</code>
     * </p> </li> </ul> <p>Note that the Amazon S3 bucket that contains your input
     * media must be located in the same Amazon Web Services Region where you're making
     * your transcription request.</p>  <p>
     * <code>RedactedMediaFileUri</code> produces a redacted audio file in addition to
     * a redacted transcript. It is only supported for Call Analytics
     * (<code>StartCallAnalyticsJob</code>) transcription requests.</p> 
     */
    inline bool RedactedMediaFileUriHasBeenSet() const { return m_redactedMediaFileUriHasBeenSet; }

    /**
     * <p>The Amazon S3 location of the media file you want to redact. For example:</p>
     * <ul> <li> <p> <code>s3://DOC-EXAMPLE-BUCKET/my-media-file.flac</code> </p> </li>
     * <li> <p> <code>s3://DOC-EXAMPLE-BUCKET/media-files/my-media-file.flac</code>
     * </p> </li> </ul> <p>Note that the Amazon S3 bucket that contains your input
     * media must be located in the same Amazon Web Services Region where you're making
     * your transcription request.</p>  <p>
     * <code>RedactedMediaFileUri</code> produces a redacted audio file in addition to
     * a redacted transcript. It is only supported for Call Analytics
     * (<code>StartCallAnalyticsJob</code>) transcription requests.</p> 
     */
    inline void SetRedactedMediaFileUri(const Aws::String& value) { m_redactedMediaFileUriHasBeenSet = true; m_redactedMediaFileUri = value; }

    /**
     * <p>The Amazon S3 location of the media file you want to redact. For example:</p>
     * <ul> <li> <p> <code>s3://DOC-EXAMPLE-BUCKET/my-media-file.flac</code> </p> </li>
     * <li> <p> <code>s3://DOC-EXAMPLE-BUCKET/media-files/my-media-file.flac</code>
     * </p> </li> </ul> <p>Note that the Amazon S3 bucket that contains your input
     * media must be located in the same Amazon Web Services Region where you're making
     * your transcription request.</p>  <p>
     * <code>RedactedMediaFileUri</code> produces a redacted audio file in addition to
     * a redacted transcript. It is only supported for Call Analytics
     * (<code>StartCallAnalyticsJob</code>) transcription requests.</p> 
     */
    inline void SetRedactedMediaFileUri(Aws::String&& value) { m_redactedMediaFileUriHasBeenSet = true; m_redactedMediaFileUri = std::move(value); }

    /**
     * <p>The Amazon S3 location of the media file you want to redact. For example:</p>
     * <ul> <li> <p> <code>s3://DOC-EXAMPLE-BUCKET/my-media-file.flac</code> </p> </li>
     * <li> <p> <code>s3://DOC-EXAMPLE-BUCKET/media-files/my-media-file.flac</code>
     * </p> </li> </ul> <p>Note that the Amazon S3 bucket that contains your input
     * media must be located in the same Amazon Web Services Region where you're making
     * your transcription request.</p>  <p>
     * <code>RedactedMediaFileUri</code> produces a redacted audio file in addition to
     * a redacted transcript. It is only supported for Call Analytics
     * (<code>StartCallAnalyticsJob</code>) transcription requests.</p> 
     */
    inline void SetRedactedMediaFileUri(const char* value) { m_redactedMediaFileUriHasBeenSet = true; m_redactedMediaFileUri.assign(value); }

    /**
     * <p>The Amazon S3 location of the media file you want to redact. For example:</p>
     * <ul> <li> <p> <code>s3://DOC-EXAMPLE-BUCKET/my-media-file.flac</code> </p> </li>
     * <li> <p> <code>s3://DOC-EXAMPLE-BUCKET/media-files/my-media-file.flac</code>
     * </p> </li> </ul> <p>Note that the Amazon S3 bucket that contains your input
     * media must be located in the same Amazon Web Services Region where you're making
     * your transcription request.</p>  <p>
     * <code>RedactedMediaFileUri</code> produces a redacted audio file in addition to
     * a redacted transcript. It is only supported for Call Analytics
     * (<code>StartCallAnalyticsJob</code>) transcription requests.</p> 
     */
    inline Media& WithRedactedMediaFileUri(const Aws::String& value) { SetRedactedMediaFileUri(value); return *this;}

    /**
     * <p>The Amazon S3 location of the media file you want to redact. For example:</p>
     * <ul> <li> <p> <code>s3://DOC-EXAMPLE-BUCKET/my-media-file.flac</code> </p> </li>
     * <li> <p> <code>s3://DOC-EXAMPLE-BUCKET/media-files/my-media-file.flac</code>
     * </p> </li> </ul> <p>Note that the Amazon S3 bucket that contains your input
     * media must be located in the same Amazon Web Services Region where you're making
     * your transcription request.</p>  <p>
     * <code>RedactedMediaFileUri</code> produces a redacted audio file in addition to
     * a redacted transcript. It is only supported for Call Analytics
     * (<code>StartCallAnalyticsJob</code>) transcription requests.</p> 
     */
    inline Media& WithRedactedMediaFileUri(Aws::String&& value) { SetRedactedMediaFileUri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location of the media file you want to redact. For example:</p>
     * <ul> <li> <p> <code>s3://DOC-EXAMPLE-BUCKET/my-media-file.flac</code> </p> </li>
     * <li> <p> <code>s3://DOC-EXAMPLE-BUCKET/media-files/my-media-file.flac</code>
     * </p> </li> </ul> <p>Note that the Amazon S3 bucket that contains your input
     * media must be located in the same Amazon Web Services Region where you're making
     * your transcription request.</p>  <p>
     * <code>RedactedMediaFileUri</code> produces a redacted audio file in addition to
     * a redacted transcript. It is only supported for Call Analytics
     * (<code>StartCallAnalyticsJob</code>) transcription requests.</p> 
     */
    inline Media& WithRedactedMediaFileUri(const char* value) { SetRedactedMediaFileUri(value); return *this;}

  private:

    Aws::String m_mediaFileUri;
    bool m_mediaFileUriHasBeenSet = false;

    Aws::String m_redactedMediaFileUri;
    bool m_redactedMediaFileUriHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
