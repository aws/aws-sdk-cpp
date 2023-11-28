/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/AccessConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/DocumentContent.h>
#include <aws/qbusiness/model/ContentType.h>
#include <aws/qbusiness/model/DocumentEnrichmentConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A document in an Amazon Q application.</p><p><h3>See Also:</h3>   <a
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


    /**
     * <p>Configuration information for access permission to a document.</p>
     */
    inline const AccessConfiguration& GetAccessConfiguration() const{ return m_accessConfiguration; }

    /**
     * <p>Configuration information for access permission to a document.</p>
     */
    inline bool AccessConfigurationHasBeenSet() const { return m_accessConfigurationHasBeenSet; }

    /**
     * <p>Configuration information for access permission to a document.</p>
     */
    inline void SetAccessConfiguration(const AccessConfiguration& value) { m_accessConfigurationHasBeenSet = true; m_accessConfiguration = value; }

    /**
     * <p>Configuration information for access permission to a document.</p>
     */
    inline void SetAccessConfiguration(AccessConfiguration&& value) { m_accessConfigurationHasBeenSet = true; m_accessConfiguration = std::move(value); }

    /**
     * <p>Configuration information for access permission to a document.</p>
     */
    inline Document& WithAccessConfiguration(const AccessConfiguration& value) { SetAccessConfiguration(value); return *this;}

    /**
     * <p>Configuration information for access permission to a document.</p>
     */
    inline Document& WithAccessConfiguration(AccessConfiguration&& value) { SetAccessConfiguration(std::move(value)); return *this;}


    /**
     * <p>Custom attributes to apply to the document for refining Amazon Q web
     * experience responses.</p>
     */
    inline const Aws::Vector<DocumentAttribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>Custom attributes to apply to the document for refining Amazon Q web
     * experience responses.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>Custom attributes to apply to the document for refining Amazon Q web
     * experience responses.</p>
     */
    inline void SetAttributes(const Aws::Vector<DocumentAttribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>Custom attributes to apply to the document for refining Amazon Q web
     * experience responses.</p>
     */
    inline void SetAttributes(Aws::Vector<DocumentAttribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>Custom attributes to apply to the document for refining Amazon Q web
     * experience responses.</p>
     */
    inline Document& WithAttributes(const Aws::Vector<DocumentAttribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>Custom attributes to apply to the document for refining Amazon Q web
     * experience responses.</p>
     */
    inline Document& WithAttributes(Aws::Vector<DocumentAttribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>Custom attributes to apply to the document for refining Amazon Q web
     * experience responses.</p>
     */
    inline Document& AddAttributes(const DocumentAttribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>Custom attributes to apply to the document for refining Amazon Q web
     * experience responses.</p>
     */
    inline Document& AddAttributes(DocumentAttribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The contents of the document.</p>
     */
    inline const DocumentContent& GetContent() const{ return m_content; }

    /**
     * <p>The contents of the document.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The contents of the document.</p>
     */
    inline void SetContent(const DocumentContent& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The contents of the document.</p>
     */
    inline void SetContent(DocumentContent&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The contents of the document.</p>
     */
    inline Document& WithContent(const DocumentContent& value) { SetContent(value); return *this;}

    /**
     * <p>The contents of the document.</p>
     */
    inline Document& WithContent(DocumentContent&& value) { SetContent(std::move(value)); return *this;}


    /**
     * <p>The file type of the document in the Blob field.</p> <p>If you want to index
     * snippets or subsets of HTML documents instead of the entirety of the HTML
     * documents, you add the <code>HTML</code> start and closing tags
     * (<code>&lt;HTML&gt;content&lt;/HTML&gt;</code>) around the content.</p>
     */
    inline const ContentType& GetContentType() const{ return m_contentType; }

    /**
     * <p>The file type of the document in the Blob field.</p> <p>If you want to index
     * snippets or subsets of HTML documents instead of the entirety of the HTML
     * documents, you add the <code>HTML</code> start and closing tags
     * (<code>&lt;HTML&gt;content&lt;/HTML&gt;</code>) around the content.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The file type of the document in the Blob field.</p> <p>If you want to index
     * snippets or subsets of HTML documents instead of the entirety of the HTML
     * documents, you add the <code>HTML</code> start and closing tags
     * (<code>&lt;HTML&gt;content&lt;/HTML&gt;</code>) around the content.</p>
     */
    inline void SetContentType(const ContentType& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The file type of the document in the Blob field.</p> <p>If you want to index
     * snippets or subsets of HTML documents instead of the entirety of the HTML
     * documents, you add the <code>HTML</code> start and closing tags
     * (<code>&lt;HTML&gt;content&lt;/HTML&gt;</code>) around the content.</p>
     */
    inline void SetContentType(ContentType&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The file type of the document in the Blob field.</p> <p>If you want to index
     * snippets or subsets of HTML documents instead of the entirety of the HTML
     * documents, you add the <code>HTML</code> start and closing tags
     * (<code>&lt;HTML&gt;content&lt;/HTML&gt;</code>) around the content.</p>
     */
    inline Document& WithContentType(const ContentType& value) { SetContentType(value); return *this;}

    /**
     * <p>The file type of the document in the Blob field.</p> <p>If you want to index
     * snippets or subsets of HTML documents instead of the entirety of the HTML
     * documents, you add the <code>HTML</code> start and closing tags
     * (<code>&lt;HTML&gt;content&lt;/HTML&gt;</code>) around the content.</p>
     */
    inline Document& WithContentType(ContentType&& value) { SetContentType(std::move(value)); return *this;}


    /**
     * <p>The configuration information for altering document metadata and content
     * during the document ingestion process.</p>
     */
    inline const DocumentEnrichmentConfiguration& GetDocumentEnrichmentConfiguration() const{ return m_documentEnrichmentConfiguration; }

    /**
     * <p>The configuration information for altering document metadata and content
     * during the document ingestion process.</p>
     */
    inline bool DocumentEnrichmentConfigurationHasBeenSet() const { return m_documentEnrichmentConfigurationHasBeenSet; }

    /**
     * <p>The configuration information for altering document metadata and content
     * during the document ingestion process.</p>
     */
    inline void SetDocumentEnrichmentConfiguration(const DocumentEnrichmentConfiguration& value) { m_documentEnrichmentConfigurationHasBeenSet = true; m_documentEnrichmentConfiguration = value; }

    /**
     * <p>The configuration information for altering document metadata and content
     * during the document ingestion process.</p>
     */
    inline void SetDocumentEnrichmentConfiguration(DocumentEnrichmentConfiguration&& value) { m_documentEnrichmentConfigurationHasBeenSet = true; m_documentEnrichmentConfiguration = std::move(value); }

    /**
     * <p>The configuration information for altering document metadata and content
     * during the document ingestion process.</p>
     */
    inline Document& WithDocumentEnrichmentConfiguration(const DocumentEnrichmentConfiguration& value) { SetDocumentEnrichmentConfiguration(value); return *this;}

    /**
     * <p>The configuration information for altering document metadata and content
     * during the document ingestion process.</p>
     */
    inline Document& WithDocumentEnrichmentConfiguration(DocumentEnrichmentConfiguration&& value) { SetDocumentEnrichmentConfiguration(std::move(value)); return *this;}


    /**
     * <p>The identifier of the document.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the document.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the document.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the document.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the document.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the document.</p>
     */
    inline Document& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the document.</p>
     */
    inline Document& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the document.</p>
     */
    inline Document& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The title of the document.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title of the document.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title of the document.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of the document.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of the document.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title of the document.</p>
     */
    inline Document& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of the document.</p>
     */
    inline Document& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the document.</p>
     */
    inline Document& WithTitle(const char* value) { SetTitle(value); return *this;}

  private:

    AccessConfiguration m_accessConfiguration;
    bool m_accessConfigurationHasBeenSet = false;

    Aws::Vector<DocumentAttribute> m_attributes;
    bool m_attributesHasBeenSet = false;

    DocumentContent m_content;
    bool m_contentHasBeenSet = false;

    ContentType m_contentType;
    bool m_contentTypeHasBeenSet = false;

    DocumentEnrichmentConfiguration m_documentEnrichmentConfiguration;
    bool m_documentEnrichmentConfigurationHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
