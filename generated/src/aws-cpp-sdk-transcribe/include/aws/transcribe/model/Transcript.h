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
   * <p>Provides you with the Amazon S3 URI you can use to access your
   * transcript.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/Transcript">AWS
   * API Reference</a></p>
   */
  class Transcript
  {
  public:
    AWS_TRANSCRIBESERVICE_API Transcript() = default;
    AWS_TRANSCRIBESERVICE_API Transcript(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Transcript& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 location of your transcript. You can use this URI to access or
     * download your transcript.</p> <p>If you included <code>OutputBucketName</code>
     * in your transcription job request, this is the URI of that bucket. If you also
     * included <code>OutputKey</code> in your request, your output is located in the
     * path you specified in your request.</p> <p>If you didn't include
     * <code>OutputBucketName</code> in your transcription job request, your transcript
     * is stored in a service-managed bucket, and <code>TranscriptFileUri</code>
     * provides you with a temporary URI you can use for secure access to your
     * transcript.</p>  <p>Temporary URIs for service-managed Amazon S3 buckets
     * are only valid for 15 minutes. If you get an <code>AccesDenied</code> error, you
     * can get a new temporary URI by running a <code>GetTranscriptionJob</code> or
     * <code>ListTranscriptionJob</code> request.</p> 
     */
    inline const Aws::String& GetTranscriptFileUri() const { return m_transcriptFileUri; }
    inline bool TranscriptFileUriHasBeenSet() const { return m_transcriptFileUriHasBeenSet; }
    template<typename TranscriptFileUriT = Aws::String>
    void SetTranscriptFileUri(TranscriptFileUriT&& value) { m_transcriptFileUriHasBeenSet = true; m_transcriptFileUri = std::forward<TranscriptFileUriT>(value); }
    template<typename TranscriptFileUriT = Aws::String>
    Transcript& WithTranscriptFileUri(TranscriptFileUriT&& value) { SetTranscriptFileUri(std::forward<TranscriptFileUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of your redacted transcript. You can use this URI to
     * access or download your transcript.</p> <p>If you included
     * <code>OutputBucketName</code> in your transcription job request, this is the URI
     * of that bucket. If you also included <code>OutputKey</code> in your request,
     * your output is located in the path you specified in your request.</p> <p>If you
     * didn't include <code>OutputBucketName</code> in your transcription job request,
     * your transcript is stored in a service-managed bucket, and
     * <code>RedactedTranscriptFileUri</code> provides you with a temporary URI you can
     * use for secure access to your transcript.</p>  <p>Temporary URIs for
     * service-managed Amazon S3 buckets are only valid for 15 minutes. If you get an
     * <code>AccesDenied</code> error, you can get a new temporary URI by running a
     * <code>GetTranscriptionJob</code> or <code>ListTranscriptionJob</code>
     * request.</p> 
     */
    inline const Aws::String& GetRedactedTranscriptFileUri() const { return m_redactedTranscriptFileUri; }
    inline bool RedactedTranscriptFileUriHasBeenSet() const { return m_redactedTranscriptFileUriHasBeenSet; }
    template<typename RedactedTranscriptFileUriT = Aws::String>
    void SetRedactedTranscriptFileUri(RedactedTranscriptFileUriT&& value) { m_redactedTranscriptFileUriHasBeenSet = true; m_redactedTranscriptFileUri = std::forward<RedactedTranscriptFileUriT>(value); }
    template<typename RedactedTranscriptFileUriT = Aws::String>
    Transcript& WithRedactedTranscriptFileUri(RedactedTranscriptFileUriT&& value) { SetRedactedTranscriptFileUri(std::forward<RedactedTranscriptFileUriT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_transcriptFileUri;
    bool m_transcriptFileUriHasBeenSet = false;

    Aws::String m_redactedTranscriptFileUri;
    bool m_redactedTranscriptFileUriHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
