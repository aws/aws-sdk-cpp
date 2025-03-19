/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/LanguageCode.h>
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
  class CreateVocabularyRequest : public TranscribeServiceRequest
  {
  public:
    AWS_TRANSCRIBESERVICE_API CreateVocabularyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVocabulary"; }

    AWS_TRANSCRIBESERVICE_API Aws::String SerializePayload() const override;

    AWS_TRANSCRIBESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique name, chosen by you, for your new custom vocabulary.</p> <p>This
     * name is case sensitive, cannot contain spaces, and must be unique within an
     * Amazon Web Services account. If you try to create a new custom vocabulary with
     * the same name as an existing custom vocabulary, you get a
     * <code>ConflictException</code> error.</p>
     */
    inline const Aws::String& GetVocabularyName() const { return m_vocabularyName; }
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }
    template<typename VocabularyNameT = Aws::String>
    void SetVocabularyName(VocabularyNameT&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::forward<VocabularyNameT>(value); }
    template<typename VocabularyNameT = Aws::String>
    CreateVocabularyRequest& WithVocabularyName(VocabularyNameT&& value) { SetVocabularyName(std::forward<VocabularyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code that represents the language of the entries in your custom
     * vocabulary. Each custom vocabulary must contain terms in only one language.</p>
     * <p>A custom vocabulary can only be used to transcribe files in the same language
     * as the custom vocabulary. For example, if you create a custom vocabulary using
     * US English (<code>en-US</code>), you can only apply this custom vocabulary to
     * files that contain English audio.</p> <p>For a list of supported languages and
     * their associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline CreateVocabularyRequest& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter if you want to create your custom vocabulary by including
     * all desired terms, as comma-separated values, within your request. The other
     * option for creating your custom vocabulary is to save your entries in a text
     * file and upload them to an Amazon S3 bucket, then specify the location of your
     * file using the <code>VocabularyFileUri</code> parameter.</p> <p>Note that if you
     * include <code>Phrases</code> in your request, you cannot use
     * <code>VocabularyFileUri</code>; you must choose one or the other.</p> <p>Each
     * language has a character set that contains all allowed characters for that
     * specific language. If you use unsupported characters, your custom vocabulary
     * filter request fails. Refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
     * Sets for Custom Vocabularies</a> to get the character set for your language.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPhrases() const { return m_phrases; }
    inline bool PhrasesHasBeenSet() const { return m_phrasesHasBeenSet; }
    template<typename PhrasesT = Aws::Vector<Aws::String>>
    void SetPhrases(PhrasesT&& value) { m_phrasesHasBeenSet = true; m_phrases = std::forward<PhrasesT>(value); }
    template<typename PhrasesT = Aws::Vector<Aws::String>>
    CreateVocabularyRequest& WithPhrases(PhrasesT&& value) { SetPhrases(std::forward<PhrasesT>(value)); return *this;}
    template<typename PhrasesT = Aws::String>
    CreateVocabularyRequest& AddPhrases(PhrasesT&& value) { m_phrasesHasBeenSet = true; m_phrases.emplace_back(std::forward<PhrasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of the text file that contains your custom vocabulary.
     * The URI must be located in the same Amazon Web Services Region as the resource
     * you're calling.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-vocab-file.txt</code> </p> <p>Note that if you
     * include <code>VocabularyFileUri</code> in your request, you cannot use the
     * <code>Phrases</code> flag; you must choose one or the other.</p>
     */
    inline const Aws::String& GetVocabularyFileUri() const { return m_vocabularyFileUri; }
    inline bool VocabularyFileUriHasBeenSet() const { return m_vocabularyFileUriHasBeenSet; }
    template<typename VocabularyFileUriT = Aws::String>
    void SetVocabularyFileUri(VocabularyFileUriT&& value) { m_vocabularyFileUriHasBeenSet = true; m_vocabularyFileUri = std::forward<VocabularyFileUriT>(value); }
    template<typename VocabularyFileUriT = Aws::String>
    CreateVocabularyRequest& WithVocabularyFileUri(VocabularyFileUriT&& value) { SetVocabularyFileUri(std::forward<VocabularyFileUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * custom vocabulary at the time you create this new custom vocabulary.</p> <p>To
     * learn more about using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateVocabularyRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateVocabularyRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files (in this case, your custom
     * vocabulary). If the role that you specify doesn’t have the appropriate
     * permissions to access the specified Amazon S3 location, your request fails.</p>
     * <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const { return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    template<typename DataAccessRoleArnT = Aws::String>
    void SetDataAccessRoleArn(DataAccessRoleArnT&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::forward<DataAccessRoleArnT>(value); }
    template<typename DataAccessRoleArnT = Aws::String>
    CreateVocabularyRequest& WithDataAccessRoleArn(DataAccessRoleArnT&& value) { SetDataAccessRoleArn(std::forward<DataAccessRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    LanguageCode m_languageCode{LanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    Aws::Vector<Aws::String> m_phrases;
    bool m_phrasesHasBeenSet = false;

    Aws::String m_vocabularyFileUri;
    bool m_vocabularyFileUriHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
