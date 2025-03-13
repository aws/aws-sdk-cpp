/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/LanguageCode.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class UpdateMedicalVocabularyRequest : public TranscribeServiceRequest
  {
  public:
    AWS_TRANSCRIBESERVICE_API UpdateMedicalVocabularyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMedicalVocabulary"; }

    AWS_TRANSCRIBESERVICE_API Aws::String SerializePayload() const override;

    AWS_TRANSCRIBESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the custom medical vocabulary you want to update. Custom medical
     * vocabulary names are case sensitive.</p>
     */
    inline const Aws::String& GetVocabularyName() const { return m_vocabularyName; }
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }
    template<typename VocabularyNameT = Aws::String>
    void SetVocabularyName(VocabularyNameT&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::forward<VocabularyNameT>(value); }
    template<typename VocabularyNameT = Aws::String>
    UpdateMedicalVocabularyRequest& WithVocabularyName(VocabularyNameT&& value) { SetVocabularyName(std::forward<VocabularyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code that represents the language of the entries in the custom
     * vocabulary you want to update. US English (<code>en-US</code>) is the only
     * language supported with Amazon Transcribe Medical.</p>
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline UpdateMedicalVocabularyRequest& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of the text file that contains your custom medical
     * vocabulary. The URI must be located in the same Amazon Web Services Region as
     * the resource you're calling.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-vocab-file.txt</code> </p>
     */
    inline const Aws::String& GetVocabularyFileUri() const { return m_vocabularyFileUri; }
    inline bool VocabularyFileUriHasBeenSet() const { return m_vocabularyFileUriHasBeenSet; }
    template<typename VocabularyFileUriT = Aws::String>
    void SetVocabularyFileUri(VocabularyFileUriT&& value) { m_vocabularyFileUriHasBeenSet = true; m_vocabularyFileUri = std::forward<VocabularyFileUriT>(value); }
    template<typename VocabularyFileUriT = Aws::String>
    UpdateMedicalVocabularyRequest& WithVocabularyFileUri(VocabularyFileUriT&& value) { SetVocabularyFileUri(std::forward<VocabularyFileUriT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    LanguageCode m_languageCode{LanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_vocabularyFileUri;
    bool m_vocabularyFileUriHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
