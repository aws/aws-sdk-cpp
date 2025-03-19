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
    AWS_QBUSINESS_API Document() = default;
    AWS_QBUSINESS_API Document(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Document& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the document.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Document& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom attributes to apply to the document for refining Amazon Q Business web
     * experience responses.</p>
     */
    inline const Aws::Vector<DocumentAttribute>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<DocumentAttribute>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<DocumentAttribute>>
    Document& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = DocumentAttribute>
    Document& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The contents of the document.</p>
     */
    inline const DocumentContent& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = DocumentContent>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = DocumentContent>
    Document& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file type of the document in the Blob field.</p> <p>If you want to index
     * snippets or subsets of HTML documents instead of the entirety of the HTML
     * documents, you add the <code>HTML</code> start and closing tags
     * (<code>&lt;HTML&gt;content&lt;/HTML&gt;</code>) around the content.</p>
     */
    inline ContentType GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(ContentType value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline Document& WithContentType(ContentType value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the document.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    Document& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for access permission to a document.</p>
     */
    inline const AccessConfiguration& GetAccessConfiguration() const { return m_accessConfiguration; }
    inline bool AccessConfigurationHasBeenSet() const { return m_accessConfigurationHasBeenSet; }
    template<typename AccessConfigurationT = AccessConfiguration>
    void SetAccessConfiguration(AccessConfigurationT&& value) { m_accessConfigurationHasBeenSet = true; m_accessConfiguration = std::forward<AccessConfigurationT>(value); }
    template<typename AccessConfigurationT = AccessConfiguration>
    Document& WithAccessConfiguration(AccessConfigurationT&& value) { SetAccessConfiguration(std::forward<AccessConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information for altering document metadata and content
     * during the document ingestion process.</p>
     */
    inline const DocumentEnrichmentConfiguration& GetDocumentEnrichmentConfiguration() const { return m_documentEnrichmentConfiguration; }
    inline bool DocumentEnrichmentConfigurationHasBeenSet() const { return m_documentEnrichmentConfigurationHasBeenSet; }
    template<typename DocumentEnrichmentConfigurationT = DocumentEnrichmentConfiguration>
    void SetDocumentEnrichmentConfiguration(DocumentEnrichmentConfigurationT&& value) { m_documentEnrichmentConfigurationHasBeenSet = true; m_documentEnrichmentConfiguration = std::forward<DocumentEnrichmentConfigurationT>(value); }
    template<typename DocumentEnrichmentConfigurationT = DocumentEnrichmentConfiguration>
    Document& WithDocumentEnrichmentConfiguration(DocumentEnrichmentConfigurationT&& value) { SetDocumentEnrichmentConfiguration(std::forward<DocumentEnrichmentConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for extracting information from media in the document.</p>
     */
    inline const MediaExtractionConfiguration& GetMediaExtractionConfiguration() const { return m_mediaExtractionConfiguration; }
    inline bool MediaExtractionConfigurationHasBeenSet() const { return m_mediaExtractionConfigurationHasBeenSet; }
    template<typename MediaExtractionConfigurationT = MediaExtractionConfiguration>
    void SetMediaExtractionConfiguration(MediaExtractionConfigurationT&& value) { m_mediaExtractionConfigurationHasBeenSet = true; m_mediaExtractionConfiguration = std::forward<MediaExtractionConfigurationT>(value); }
    template<typename MediaExtractionConfigurationT = MediaExtractionConfiguration>
    Document& WithMediaExtractionConfiguration(MediaExtractionConfigurationT&& value) { SetMediaExtractionConfiguration(std::forward<MediaExtractionConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<DocumentAttribute> m_attributes;
    bool m_attributesHasBeenSet = false;

    DocumentContent m_content;
    bool m_contentHasBeenSet = false;

    ContentType m_contentType{ContentType::NOT_SET};
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
