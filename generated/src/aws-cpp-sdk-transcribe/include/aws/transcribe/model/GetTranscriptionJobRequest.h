/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class GetTranscriptionJobRequest : public TranscribeServiceRequest
  {
  public:
    AWS_TRANSCRIBESERVICE_API GetTranscriptionJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTranscriptionJob"; }

    AWS_TRANSCRIBESERVICE_API Aws::String SerializePayload() const override;

    AWS_TRANSCRIBESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the transcription job you want information about. Job names are
     * case sensitive.</p>
     */
    inline const Aws::String& GetTranscriptionJobName() const{ return m_transcriptionJobName; }

    /**
     * <p>The name of the transcription job you want information about. Job names are
     * case sensitive.</p>
     */
    inline bool TranscriptionJobNameHasBeenSet() const { return m_transcriptionJobNameHasBeenSet; }

    /**
     * <p>The name of the transcription job you want information about. Job names are
     * case sensitive.</p>
     */
    inline void SetTranscriptionJobName(const Aws::String& value) { m_transcriptionJobNameHasBeenSet = true; m_transcriptionJobName = value; }

    /**
     * <p>The name of the transcription job you want information about. Job names are
     * case sensitive.</p>
     */
    inline void SetTranscriptionJobName(Aws::String&& value) { m_transcriptionJobNameHasBeenSet = true; m_transcriptionJobName = std::move(value); }

    /**
     * <p>The name of the transcription job you want information about. Job names are
     * case sensitive.</p>
     */
    inline void SetTranscriptionJobName(const char* value) { m_transcriptionJobNameHasBeenSet = true; m_transcriptionJobName.assign(value); }

    /**
     * <p>The name of the transcription job you want information about. Job names are
     * case sensitive.</p>
     */
    inline GetTranscriptionJobRequest& WithTranscriptionJobName(const Aws::String& value) { SetTranscriptionJobName(value); return *this;}

    /**
     * <p>The name of the transcription job you want information about. Job names are
     * case sensitive.</p>
     */
    inline GetTranscriptionJobRequest& WithTranscriptionJobName(Aws::String&& value) { SetTranscriptionJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the transcription job you want information about. Job names are
     * case sensitive.</p>
     */
    inline GetTranscriptionJobRequest& WithTranscriptionJobName(const char* value) { SetTranscriptionJobName(value); return *this;}

  private:

    Aws::String m_transcriptionJobName;
    bool m_transcriptionJobNameHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
