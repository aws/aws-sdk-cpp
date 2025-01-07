/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/DocumentContent.h>
#include <aws/qbusiness/model/ContentType.h>
#include <aws/qbusiness/model/AccessConfiguration.h>
#include <aws/qbusiness/model/DocumentEnrichmentConfiguration.h>
#include <aws/qbusiness/model/MediaExtractionConfiguration.h>
#include <aws/qbusiness/model/DocumentAttribute.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>A document in an Amazon Q Business application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/Document">AWS
   * API Reference</a></p>
   */
  class Document
  {
  public:
    AWS_QBUSINESS_API Document();
    AWS_QBUSINESS_API Document(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Document& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the document.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Document& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Document& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Document& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom attributes to apply to the document for refining Amazon Q Business web
     * experience responses.</p>
     */
    inline const Aws::Vector<DocumentAttribute>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Vector<DocumentAttribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Vector<DocumentAttribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline Document& WithAttributes(const Aws::Vector<DocumentAttribute>& value) { SetAttributes(value); return *this;}
    inline Document& WithAttributes(Aws::Vector<DocumentAttribute>&& value) { SetAttributes(std::move(value)); return *this;}
    inline Document& AddAttributes(const DocumentAttribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }
    inline Document& AddAttributes(DocumentAttribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The contents of the document.</p>
     */
    inline const DocumentContent& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const DocumentContent& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(DocumentContent&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline Document& WithContent(const DocumentContent& value) { SetContent(value); return *this;}
    inline Document& WithContent(DocumentContent&& value) { SetContent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file type of the document in the Blob field.</p> <p>If you want to index
     * snippets or subsets of HTML documents instead of the entirety of the HTML
     * documents, you add the <code>HTML</code> start and closing tags
     * (<code>&lt;HTML&gt;content&lt;/HTML&gt;</code>) around the content.</p>
     */
    inline const ContentType& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const ContentType& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(ContentType&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline Document& WithContentType(const ContentType& value) { SetContentType(value); return *this;}
    inline Document& WithContentType(ContentType&& value) { SetContentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the document.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline Document& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline Document& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline Document& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for access permission to a document.</p>
     */
    inline const AccessConfiguration& GetAccessConfiguration() const{ return m_accessConfiguration; }
    inline bool AccessConfigurationHasBeenSet() const { return m_accessConfigurationHasBeenSet; }
    inline void SetAccessConfiguration(const AccessConfiguration& value) { m_accessConfigurationHasBeenSet = true; m_accessConfiguration = value; }
    inline void SetAccessConfiguration(AccessConfiguration&& value) { m_accessConfigurationHasBeenSet = true; m_accessConfiguration = std::move(value); }
    inline Document& WithAccessConfiguration(const AccessConfiguration& value) { SetAccessConfiguration(value); return *this;}
    inline Document& WithAccessConfiguration(AccessConfiguration&& value) { SetAccessConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information for altering document metadata and content
     * during the document ingestion process.</p>
     */
    inline const DocumentEnrichmentConfiguration& GetDocumentEnrichmentConfiguration() const{ return m_documentEnrichmentConfiguration; }
    inline bool DocumentEnrichmentConfigurationHasBeenSet() const { return m_documentEnrichmentConfigurationHasBeenSet; }
    inline void SetDocumentEnrichmentConfiguration(const DocumentEnrichmentConfiguration& value) { m_documentEnrichmentConfigurationHasBeenSet = true; m_documentEnrichmentConfiguration = value; }
    inline void SetDocumentEnrichmentConfiguration(DocumentEnrichmentConfiguration&& value) { m_documentEnrichmentConfigurationHasBeenSet = true; m_documentEnrichmentConfiguration = std::move(value); }
    inline Document& WithDocumentEnrichmentConfiguration(const DocumentEnrichmentConfiguration& value) { SetDocumentEnrichmentConfiguration(value); return *this;}
    inline Document& WithDocumentEnrichmentConfiguration(DocumentEnrichmentConfiguration&& value) { SetDocumentEnrichmentConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for extracting information from media in the document.</p>
     */
    inline const MediaExtractionConfiguration& GetMediaExtractionConfiguration() const{ return m_mediaExtractionConfiguration; }
    inline bool MediaExtractionConfigurationHasBeenSet() const { return m_mediaExtractionConfigurationHasBeenSet; }
    inline void SetMediaExtractionConfiguration(const MediaExtractionConfiguration& value) { m_mediaExtractionConfigurationHasBeenSet = true; m_mediaExtractionConfiguration = value; }
    inline void SetMediaExtractionConfiguration(MediaExtractionConfiguration&& value) { m_mediaExtractionConfigurationHasBeenSet = true; m_mediaExtractionConfiguration = std::move(value); }
    inline Document& WithMediaExtractionConfiguration(const MediaExtractionConfiguration& value) { SetMediaExtractionConfiguration(value); return *this;}
    inline Document& WithMediaExtractionConfiguration(MediaExtractionConfiguration&& value) { SetMediaExtractionConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<DocumentAttribute> m_attributes;
    bool m_attributesHasBeenSet = false;

    DocumentContent m_content;
    bool m_contentHasBeenSet = false;

    ContentType m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    AccessConfiguration m_accessConfiguration;
    bool m_accessConfigurationHasBeenSet = false;

    DocumentEnrichmentConfiguration m_documentEnrichmentConfiguration;
    bool m_documentEnrichmentConfigurationHasBeenSet = false;

    MediaExtractionConfiguration m_mediaExtractionConfiguration;
    bool m_mediaExtractionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
