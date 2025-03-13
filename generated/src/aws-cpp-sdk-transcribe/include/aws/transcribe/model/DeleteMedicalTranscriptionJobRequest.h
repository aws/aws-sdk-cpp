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
  class DeleteMedicalTranscriptionJobRequest : public TranscribeServiceRequest
  {
  public:
    AWS_TRANSCRIBESERVICE_API DeleteMedicalTranscriptionJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMedicalTranscriptionJob"; }

    AWS_TRANSCRIBESERVICE_API Aws::String SerializePayload() const override;

    AWS_TRANSCRIBESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the medical transcription job you want to delete. Job names are
     * case sensitive.</p>
     */
    inline const Aws::String& GetMedicalTranscriptionJobName() const { return m_medicalTranscriptionJobName; }
    inline bool MedicalTranscriptionJobNameHasBeenSet() const { return m_medicalTranscriptionJobNameHasBeenSet; }
    template<typename MedicalTranscriptionJobNameT = Aws::String>
    void SetMedicalTranscriptionJobName(MedicalTranscriptionJobNameT&& value) { m_medicalTranscriptionJobNameHasBeenSet = true; m_medicalTranscriptionJobName = std::forward<MedicalTranscriptionJobNameT>(value); }
    template<typename MedicalTranscriptionJobNameT = Aws::String>
    DeleteMedicalTranscriptionJobRequest& WithMedicalTranscriptionJobName(MedicalTranscriptionJobNameT&& value) { SetMedicalTranscriptionJobName(std::forward<MedicalTranscriptionJobNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_medicalTranscriptionJobName;
    bool m_medicalTranscriptionJobNameHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
