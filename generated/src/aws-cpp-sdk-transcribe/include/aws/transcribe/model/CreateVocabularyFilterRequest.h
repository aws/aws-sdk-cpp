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
  class CreateVocabularyFilterRequest : public TranscribeServiceRequest
  {
  public:
    AWS_TRANSCRIBESERVICE_API CreateVocabularyFilterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVocabularyFilter"; }

    AWS_TRANSCRIBESERVICE_API Aws::String SerializePayload() const override;

    AWS_TRANSCRIBESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique name, chosen by you, for your new custom vocabulary filter.</p>
     * <p>This name is case sensitive, cannot contain spaces, and must be unique within
     * an Amazon Web Services account. If you try to create a new custom vocabulary
     * filter with the same name as an existing custom vocabulary filter, you get a
     * <code>ConflictException</code> error.</p>
     */
    inline const Aws::String& GetVocabularyFilterName() const{ return m_vocabularyFilterName; }

    /**
     * <p>A unique name, chosen by you, for your new custom vocabulary filter.</p>
     * <p>This name is case sensitive, cannot contain spaces, and must be unique within
     * an Amazon Web Services account. If you try to create a new custom vocabulary
     * filter with the same name as an existing custom vocabulary filter, you get a
     * <code>ConflictException</code> error.</p>
     */
    inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }

    /**
     * <p>A unique name, chosen by you, for your new custom vocabulary filter.</p>
     * <p>This name is case sensitive, cannot contain spaces, and must be unique within
     * an Amazon Web Services account. If you try to create a new custom vocabulary
     * filter with the same name as an existing custom vocabulary filter, you get a
     * <code>ConflictException</code> error.</p>
     */
    inline void SetVocabularyFilterName(const Aws::String& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = value; }

    /**
     * <p>A unique name, chosen by you, for your new custom vocabulary filter.</p>
     * <p>This name is case sensitive, cannot contain spaces, and must be unique within
     * an Amazon Web Services account. If you try to create a new custom vocabulary
     * filter with the same name as an existing custom vocabulary filter, you get a
     * <code>ConflictException</code> error.</p>
     */
    inline void SetVocabularyFilterName(Aws::String&& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = std::move(value); }

    /**
     * <p>A unique name, chosen by you, for your new custom vocabulary filter.</p>
     * <p>This name is case sensitive, cannot contain spaces, and must be unique within
     * an Amazon Web Services account. If you try to create a new custom vocabulary
     * filter with the same name as an existing custom vocabulary filter, you get a
     * <code>ConflictException</code> error.</p>
     */
    inline void SetVocabularyFilterName(const char* value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName.assign(value); }

    /**
     * <p>A unique name, chosen by you, for your new custom vocabulary filter.</p>
     * <p>This name is case sensitive, cannot contain spaces, and must be unique within
     * an Amazon Web Services account. If you try to create a new custom vocabulary
     * filter with the same name as an existing custom vocabulary filter, you get a
     * <code>ConflictException</code> error.</p>
     */
    inline CreateVocabularyFilterRequest& WithVocabularyFilterName(const Aws::String& value) { SetVocabularyFilterName(value); return *this;}

    /**
     * <p>A unique name, chosen by you, for your new custom vocabulary filter.</p>
     * <p>This name is case sensitive, cannot contain spaces, and must be unique within
     * an Amazon Web Services account. If you try to create a new custom vocabulary
     * filter with the same name as an existing custom vocabulary filter, you get a
     * <code>ConflictException</code> error.</p>
     */
    inline CreateVocabularyFilterRequest& WithVocabularyFilterName(Aws::String&& value) { SetVocabularyFilterName(std::move(value)); return *this;}

    /**
     * <p>A unique name, chosen by you, for your new custom vocabulary filter.</p>
     * <p>This name is case sensitive, cannot contain spaces, and must be unique within
     * an Amazon Web Services account. If you try to create a new custom vocabulary
     * filter with the same name as an existing custom vocabulary filter, you get a
     * <code>ConflictException</code> error.</p>
     */
    inline CreateVocabularyFilterRequest& WithVocabularyFilterName(const char* value) { SetVocabularyFilterName(value); return *this;}


    /**
     * <p>The language code that represents the language of the entries in your
     * vocabulary filter. Each custom vocabulary filter must contain terms in only one
     * language.</p> <p>A custom vocabulary filter can only be used to transcribe files
     * in the same language as the filter. For example, if you create a custom
     * vocabulary filter using US English (<code>en-US</code>), you can only apply this
     * filter to files that contain English audio.</p> <p>For a list of supported
     * languages and their associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code that represents the language of the entries in your
     * vocabulary filter. Each custom vocabulary filter must contain terms in only one
     * language.</p> <p>A custom vocabulary filter can only be used to transcribe files
     * in the same language as the filter. For example, if you create a custom
     * vocabulary filter using US English (<code>en-US</code>), you can only apply this
     * filter to files that contain English audio.</p> <p>For a list of supported
     * languages and their associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code that represents the language of the entries in your
     * vocabulary filter. Each custom vocabulary filter must contain terms in only one
     * language.</p> <p>A custom vocabulary filter can only be used to transcribe files
     * in the same language as the filter. For example, if you create a custom
     * vocabulary filter using US English (<code>en-US</code>), you can only apply this
     * filter to files that contain English audio.</p> <p>For a list of supported
     * languages and their associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code that represents the language of the entries in your
     * vocabulary filter. Each custom vocabulary filter must contain terms in only one
     * language.</p> <p>A custom vocabulary filter can only be used to transcribe files
     * in the same language as the filter. For example, if you create a custom
     * vocabulary filter using US English (<code>en-US</code>), you can only apply this
     * filter to files that contain English audio.</p> <p>For a list of supported
     * languages and their associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code that represents the language of the entries in your
     * vocabulary filter. Each custom vocabulary filter must contain terms in only one
     * language.</p> <p>A custom vocabulary filter can only be used to transcribe files
     * in the same language as the filter. For example, if you create a custom
     * vocabulary filter using US English (<code>en-US</code>), you can only apply this
     * filter to files that contain English audio.</p> <p>For a list of supported
     * languages and their associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline CreateVocabularyFilterRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code that represents the language of the entries in your
     * vocabulary filter. Each custom vocabulary filter must contain terms in only one
     * language.</p> <p>A custom vocabulary filter can only be used to transcribe files
     * in the same language as the filter. For example, if you create a custom
     * vocabulary filter using US English (<code>en-US</code>), you can only apply this
     * filter to files that contain English audio.</p> <p>For a list of supported
     * languages and their associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline CreateVocabularyFilterRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>Use this parameter if you want to create your custom vocabulary filter by
     * including all desired terms, as comma-separated values, within your request. The
     * other option for creating your vocabulary filter is to save your entries in a
     * text file and upload them to an Amazon S3 bucket, then specify the location of
     * your file using the <code>VocabularyFilterFileUri</code> parameter.</p> <p>Note
     * that if you include <code>Words</code> in your request, you cannot use
     * <code>VocabularyFilterFileUri</code>; you must choose one or the other.</p>
     * <p>Each language has a character set that contains all allowed characters for
     * that specific language. If you use unsupported characters, your custom
     * vocabulary filter request fails. Refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
     * Sets for Custom Vocabularies</a> to get the character set for your language.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWords() const{ return m_words; }

    /**
     * <p>Use this parameter if you want to create your custom vocabulary filter by
     * including all desired terms, as comma-separated values, within your request. The
     * other option for creating your vocabulary filter is to save your entries in a
     * text file and upload them to an Amazon S3 bucket, then specify the location of
     * your file using the <code>VocabularyFilterFileUri</code> parameter.</p> <p>Note
     * that if you include <code>Words</code> in your request, you cannot use
     * <code>VocabularyFilterFileUri</code>; you must choose one or the other.</p>
     * <p>Each language has a character set that contains all allowed characters for
     * that specific language. If you use unsupported characters, your custom
     * vocabulary filter request fails. Refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
     * Sets for Custom Vocabularies</a> to get the character set for your language.</p>
     */
    inline bool WordsHasBeenSet() const { return m_wordsHasBeenSet; }

    /**
     * <p>Use this parameter if you want to create your custom vocabulary filter by
     * including all desired terms, as comma-separated values, within your request. The
     * other option for creating your vocabulary filter is to save your entries in a
     * text file and upload them to an Amazon S3 bucket, then specify the location of
     * your file using the <code>VocabularyFilterFileUri</code> parameter.</p> <p>Note
     * that if you include <code>Words</code> in your request, you cannot use
     * <code>VocabularyFilterFileUri</code>; you must choose one or the other.</p>
     * <p>Each language has a character set that contains all allowed characters for
     * that specific language. If you use unsupported characters, your custom
     * vocabulary filter request fails. Refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
     * Sets for Custom Vocabularies</a> to get the character set for your language.</p>
     */
    inline void SetWords(const Aws::Vector<Aws::String>& value) { m_wordsHasBeenSet = true; m_words = value; }

    /**
     * <p>Use this parameter if you want to create your custom vocabulary filter by
     * including all desired terms, as comma-separated values, within your request. The
     * other option for creating your vocabulary filter is to save your entries in a
     * text file and upload them to an Amazon S3 bucket, then specify the location of
     * your file using the <code>VocabularyFilterFileUri</code> parameter.</p> <p>Note
     * that if you include <code>Words</code> in your request, you cannot use
     * <code>VocabularyFilterFileUri</code>; you must choose one or the other.</p>
     * <p>Each language has a character set that contains all allowed characters for
     * that specific language. If you use unsupported characters, your custom
     * vocabulary filter request fails. Refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
     * Sets for Custom Vocabularies</a> to get the character set for your language.</p>
     */
    inline void SetWords(Aws::Vector<Aws::String>&& value) { m_wordsHasBeenSet = true; m_words = std::move(value); }

    /**
     * <p>Use this parameter if you want to create your custom vocabulary filter by
     * including all desired terms, as comma-separated values, within your request. The
     * other option for creating your vocabulary filter is to save your entries in a
     * text file and upload them to an Amazon S3 bucket, then specify the location of
     * your file using the <code>VocabularyFilterFileUri</code> parameter.</p> <p>Note
     * that if you include <code>Words</code> in your request, you cannot use
     * <code>VocabularyFilterFileUri</code>; you must choose one or the other.</p>
     * <p>Each language has a character set that contains all allowed characters for
     * that specific language. If you use unsupported characters, your custom
     * vocabulary filter request fails. Refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
     * Sets for Custom Vocabularies</a> to get the character set for your language.</p>
     */
    inline CreateVocabularyFilterRequest& WithWords(const Aws::Vector<Aws::String>& value) { SetWords(value); return *this;}

    /**
     * <p>Use this parameter if you want to create your custom vocabulary filter by
     * including all desired terms, as comma-separated values, within your request. The
     * other option for creating your vocabulary filter is to save your entries in a
     * text file and upload them to an Amazon S3 bucket, then specify the location of
     * your file using the <code>VocabularyFilterFileUri</code> parameter.</p> <p>Note
     * that if you include <code>Words</code> in your request, you cannot use
     * <code>VocabularyFilterFileUri</code>; you must choose one or the other.</p>
     * <p>Each language has a character set that contains all allowed characters for
     * that specific language. If you use unsupported characters, your custom
     * vocabulary filter request fails. Refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
     * Sets for Custom Vocabularies</a> to get the character set for your language.</p>
     */
    inline CreateVocabularyFilterRequest& WithWords(Aws::Vector<Aws::String>&& value) { SetWords(std::move(value)); return *this;}

    /**
     * <p>Use this parameter if you want to create your custom vocabulary filter by
     * including all desired terms, as comma-separated values, within your request. The
     * other option for creating your vocabulary filter is to save your entries in a
     * text file and upload them to an Amazon S3 bucket, then specify the location of
     * your file using the <code>VocabularyFilterFileUri</code> parameter.</p> <p>Note
     * that if you include <code>Words</code> in your request, you cannot use
     * <code>VocabularyFilterFileUri</code>; you must choose one or the other.</p>
     * <p>Each language has a character set that contains all allowed characters for
     * that specific language. If you use unsupported characters, your custom
     * vocabulary filter request fails. Refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
     * Sets for Custom Vocabularies</a> to get the character set for your language.</p>
     */
    inline CreateVocabularyFilterRequest& AddWords(const Aws::String& value) { m_wordsHasBeenSet = true; m_words.push_back(value); return *this; }

    /**
     * <p>Use this parameter if you want to create your custom vocabulary filter by
     * including all desired terms, as comma-separated values, within your request. The
     * other option for creating your vocabulary filter is to save your entries in a
     * text file and upload them to an Amazon S3 bucket, then specify the location of
     * your file using the <code>VocabularyFilterFileUri</code> parameter.</p> <p>Note
     * that if you include <code>Words</code> in your request, you cannot use
     * <code>VocabularyFilterFileUri</code>; you must choose one or the other.</p>
     * <p>Each language has a character set that contains all allowed characters for
     * that specific language. If you use unsupported characters, your custom
     * vocabulary filter request fails. Refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
     * Sets for Custom Vocabularies</a> to get the character set for your language.</p>
     */
    inline CreateVocabularyFilterRequest& AddWords(Aws::String&& value) { m_wordsHasBeenSet = true; m_words.push_back(std::move(value)); return *this; }

    /**
     * <p>Use this parameter if you want to create your custom vocabulary filter by
     * including all desired terms, as comma-separated values, within your request. The
     * other option for creating your vocabulary filter is to save your entries in a
     * text file and upload them to an Amazon S3 bucket, then specify the location of
     * your file using the <code>VocabularyFilterFileUri</code> parameter.</p> <p>Note
     * that if you include <code>Words</code> in your request, you cannot use
     * <code>VocabularyFilterFileUri</code>; you must choose one or the other.</p>
     * <p>Each language has a character set that contains all allowed characters for
     * that specific language. If you use unsupported characters, your custom
     * vocabulary filter request fails. Refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
     * Sets for Custom Vocabularies</a> to get the character set for your language.</p>
     */
    inline CreateVocabularyFilterRequest& AddWords(const char* value) { m_wordsHasBeenSet = true; m_words.push_back(value); return *this; }


    /**
     * <p>The Amazon S3 location of the text file that contains your custom vocabulary
     * filter terms. The URI must be located in the same Amazon Web Services Region as
     * the resource you're calling.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-vocab-filter-file.txt</code> </p> <p>Note that
     * if you include <code>VocabularyFilterFileUri</code> in your request, you cannot
     * use <code>Words</code>; you must choose one or the other.</p>
     */
    inline const Aws::String& GetVocabularyFilterFileUri() const{ return m_vocabularyFilterFileUri; }

    /**
     * <p>The Amazon S3 location of the text file that contains your custom vocabulary
     * filter terms. The URI must be located in the same Amazon Web Services Region as
     * the resource you're calling.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-vocab-filter-file.txt</code> </p> <p>Note that
     * if you include <code>VocabularyFilterFileUri</code> in your request, you cannot
     * use <code>Words</code>; you must choose one or the other.</p>
     */
    inline bool VocabularyFilterFileUriHasBeenSet() const { return m_vocabularyFilterFileUriHasBeenSet; }

    /**
     * <p>The Amazon S3 location of the text file that contains your custom vocabulary
     * filter terms. The URI must be located in the same Amazon Web Services Region as
     * the resource you're calling.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-vocab-filter-file.txt</code> </p> <p>Note that
     * if you include <code>VocabularyFilterFileUri</code> in your request, you cannot
     * use <code>Words</code>; you must choose one or the other.</p>
     */
    inline void SetVocabularyFilterFileUri(const Aws::String& value) { m_vocabularyFilterFileUriHasBeenSet = true; m_vocabularyFilterFileUri = value; }

    /**
     * <p>The Amazon S3 location of the text file that contains your custom vocabulary
     * filter terms. The URI must be located in the same Amazon Web Services Region as
     * the resource you're calling.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-vocab-filter-file.txt</code> </p> <p>Note that
     * if you include <code>VocabularyFilterFileUri</code> in your request, you cannot
     * use <code>Words</code>; you must choose one or the other.</p>
     */
    inline void SetVocabularyFilterFileUri(Aws::String&& value) { m_vocabularyFilterFileUriHasBeenSet = true; m_vocabularyFilterFileUri = std::move(value); }

    /**
     * <p>The Amazon S3 location of the text file that contains your custom vocabulary
     * filter terms. The URI must be located in the same Amazon Web Services Region as
     * the resource you're calling.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-vocab-filter-file.txt</code> </p> <p>Note that
     * if you include <code>VocabularyFilterFileUri</code> in your request, you cannot
     * use <code>Words</code>; you must choose one or the other.</p>
     */
    inline void SetVocabularyFilterFileUri(const char* value) { m_vocabularyFilterFileUriHasBeenSet = true; m_vocabularyFilterFileUri.assign(value); }

    /**
     * <p>The Amazon S3 location of the text file that contains your custom vocabulary
     * filter terms. The URI must be located in the same Amazon Web Services Region as
     * the resource you're calling.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-vocab-filter-file.txt</code> </p> <p>Note that
     * if you include <code>VocabularyFilterFileUri</code> in your request, you cannot
     * use <code>Words</code>; you must choose one or the other.</p>
     */
    inline CreateVocabularyFilterRequest& WithVocabularyFilterFileUri(const Aws::String& value) { SetVocabularyFilterFileUri(value); return *this;}

    /**
     * <p>The Amazon S3 location of the text file that contains your custom vocabulary
     * filter terms. The URI must be located in the same Amazon Web Services Region as
     * the resource you're calling.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-vocab-filter-file.txt</code> </p> <p>Note that
     * if you include <code>VocabularyFilterFileUri</code> in your request, you cannot
     * use <code>Words</code>; you must choose one or the other.</p>
     */
    inline CreateVocabularyFilterRequest& WithVocabularyFilterFileUri(Aws::String&& value) { SetVocabularyFilterFileUri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location of the text file that contains your custom vocabulary
     * filter terms. The URI must be located in the same Amazon Web Services Region as
     * the resource you're calling.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-vocab-filter-file.txt</code> </p> <p>Note that
     * if you include <code>VocabularyFilterFileUri</code> in your request, you cannot
     * use <code>Words</code>; you must choose one or the other.</p>
     */
    inline CreateVocabularyFilterRequest& WithVocabularyFilterFileUri(const char* value) { SetVocabularyFilterFileUri(value); return *this;}


    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * custom vocabulary filter at the time you create this new vocabulary filter.</p>
     * <p>To learn more about using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * custom vocabulary filter at the time you create this new vocabulary filter.</p>
     * <p>To learn more about using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * custom vocabulary filter at the time you create this new vocabulary filter.</p>
     * <p>To learn more about using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * custom vocabulary filter at the time you create this new vocabulary filter.</p>
     * <p>To learn more about using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * custom vocabulary filter at the time you create this new vocabulary filter.</p>
     * <p>To learn more about using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline CreateVocabularyFilterRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * custom vocabulary filter at the time you create this new vocabulary filter.</p>
     * <p>To learn more about using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline CreateVocabularyFilterRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * custom vocabulary filter at the time you create this new vocabulary filter.</p>
     * <p>To learn more about using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline CreateVocabularyFilterRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * custom vocabulary filter at the time you create this new vocabulary filter.</p>
     * <p>To learn more about using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline CreateVocabularyFilterRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_vocabularyFilterName;
    bool m_vocabularyFilterNameHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::Vector<Aws::String> m_words;
    bool m_wordsHasBeenSet = false;

    Aws::String m_vocabularyFilterFileUri;
    bool m_vocabularyFilterFileUriHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
