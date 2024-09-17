/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/DocumentType.h>
#include <aws/ssm/model/DocumentFormat.h>
#include <aws/ssm/model/DocumentRequires.h>
#include <aws/ssm/model/AttachmentsSource.h>
#include <aws/ssm/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class CreateDocumentRequest : public SSMRequest
  {
  public:
    AWS_SSM_API CreateDocumentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDocument"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The content for the new SSM document in JSON or YAML format. The content of
     * the document must not exceed 64KB. This quota also includes the content
     * specified for input parameters at runtime. We recommend storing the contents for
     * your new document in an external JSON or YAML file and referencing the file in a
     * command.</p> <p>For examples, see the following topics in the <i>Amazon Web
     * Services Systems Manager User Guide</i>.</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/documents-using.html#create-ssm-console">Create
     * an SSM document (console)</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/documents-using.html#create-ssm-document-cli">Create
     * an SSM document (command line)</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/documents-using.html#create-ssm-document-api">Create
     * an SSM document (API)</a> </p> </li> </ul>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline CreateDocumentRequest& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline CreateDocumentRequest& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline CreateDocumentRequest& WithContent(const char* value) { SetContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of SSM documents required by a document. This parameter is used
     * exclusively by AppConfig. When a user creates an AppConfig configuration in an
     * SSM document, the user must also specify a required document for validation
     * purposes. In this case, an <code>ApplicationConfiguration</code> document
     * requires an <code>ApplicationConfigurationSchema</code> document for validation
     * purposes. For more information, see <a
     * href="https://docs.aws.amazon.com/appconfig/latest/userguide/what-is-appconfig.html">What
     * is AppConfig?</a> in the <i>AppConfig User Guide</i>.</p>
     */
    inline const Aws::Vector<DocumentRequires>& GetRequires() const{ return m_requires; }
    inline bool RequiresHasBeenSet() const { return m_requiresHasBeenSet; }
    inline void SetRequires(const Aws::Vector<DocumentRequires>& value) { m_requiresHasBeenSet = true; m_requires = value; }
    inline void SetRequires(Aws::Vector<DocumentRequires>&& value) { m_requiresHasBeenSet = true; m_requires = std::move(value); }
    inline CreateDocumentRequest& WithRequires(const Aws::Vector<DocumentRequires>& value) { SetRequires(value); return *this;}
    inline CreateDocumentRequest& WithRequires(Aws::Vector<DocumentRequires>&& value) { SetRequires(std::move(value)); return *this;}
    inline CreateDocumentRequest& AddRequires(const DocumentRequires& value) { m_requiresHasBeenSet = true; m_requires.push_back(value); return *this; }
    inline CreateDocumentRequest& AddRequires(DocumentRequires&& value) { m_requiresHasBeenSet = true; m_requires.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that describe attachments to a version of a
     * document.</p>
     */
    inline const Aws::Vector<AttachmentsSource>& GetAttachments() const{ return m_attachments; }
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }
    inline void SetAttachments(const Aws::Vector<AttachmentsSource>& value) { m_attachmentsHasBeenSet = true; m_attachments = value; }
    inline void SetAttachments(Aws::Vector<AttachmentsSource>&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::move(value); }
    inline CreateDocumentRequest& WithAttachments(const Aws::Vector<AttachmentsSource>& value) { SetAttachments(value); return *this;}
    inline CreateDocumentRequest& WithAttachments(Aws::Vector<AttachmentsSource>&& value) { SetAttachments(std::move(value)); return *this;}
    inline CreateDocumentRequest& AddAttachments(const AttachmentsSource& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(value); return *this; }
    inline CreateDocumentRequest& AddAttachments(AttachmentsSource&& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A name for the SSM document.</p>  <p>You can't use the following
     * strings as document name prefixes. These are reserved by Amazon Web Services for
     * use as document name prefixes:</p> <ul> <li> <p> <code>aws</code> </p> </li>
     * <li> <p> <code>amazon</code> </p> </li> <li> <p> <code>amzn</code> </p> </li>
     * <li> <p> <code>AWSEC2</code> </p> </li> <li> <p>
     * <code>AWSConfigRemediation</code> </p> </li> <li> <p> <code>AWSSupport</code>
     * </p> </li> </ul> 
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateDocumentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateDocumentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateDocumentRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional field where you can specify a friendly name for the SSM document.
     * This value can differ for each version of the document. You can update this
     * value at a later time using the <a>UpdateDocument</a> operation.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline CreateDocumentRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline CreateDocumentRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline CreateDocumentRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional field specifying the version of the artifact you are creating
     * with the document. For example, <code>Release12.1</code>. This value is unique
     * across all versions of a document, and can't be changed.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }
    inline CreateDocumentRequest& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}
    inline CreateDocumentRequest& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}
    inline CreateDocumentRequest& WithVersionName(const char* value) { SetVersionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of document to create.</p>  <p>The
     * <code>DeploymentStrategy</code> document type is an internal-use-only document
     * type reserved for AppConfig.</p> 
     */
    inline const DocumentType& GetDocumentType() const{ return m_documentType; }
    inline bool DocumentTypeHasBeenSet() const { return m_documentTypeHasBeenSet; }
    inline void SetDocumentType(const DocumentType& value) { m_documentTypeHasBeenSet = true; m_documentType = value; }
    inline void SetDocumentType(DocumentType&& value) { m_documentTypeHasBeenSet = true; m_documentType = std::move(value); }
    inline CreateDocumentRequest& WithDocumentType(const DocumentType& value) { SetDocumentType(value); return *this;}
    inline CreateDocumentRequest& WithDocumentType(DocumentType&& value) { SetDocumentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the document format for the request. The document format can be JSON,
     * YAML, or TEXT. JSON is the default format.</p>
     */
    inline const DocumentFormat& GetDocumentFormat() const{ return m_documentFormat; }
    inline bool DocumentFormatHasBeenSet() const { return m_documentFormatHasBeenSet; }
    inline void SetDocumentFormat(const DocumentFormat& value) { m_documentFormatHasBeenSet = true; m_documentFormat = value; }
    inline void SetDocumentFormat(DocumentFormat&& value) { m_documentFormatHasBeenSet = true; m_documentFormat = std::move(value); }
    inline CreateDocumentRequest& WithDocumentFormat(const DocumentFormat& value) { SetDocumentFormat(value); return *this;}
    inline CreateDocumentRequest& WithDocumentFormat(DocumentFormat&& value) { SetDocumentFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify a target type to define the kinds of resources the document can run
     * on. For example, to run a document on EC2 instances, specify the following
     * value: <code>/AWS::EC2::Instance</code>. If you specify a value of '/' the
     * document can run on all types of resources. If you don't specify a value, the
     * document can't run on any resources. For a list of valid resource types, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services resource and property types reference</a> in the <i>CloudFormation
     * User Guide</i>. </p>
     */
    inline const Aws::String& GetTargetType() const{ return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(const Aws::String& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline void SetTargetType(Aws::String&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }
    inline void SetTargetType(const char* value) { m_targetTypeHasBeenSet = true; m_targetType.assign(value); }
    inline CreateDocumentRequest& WithTargetType(const Aws::String& value) { SetTargetType(value); return *this;}
    inline CreateDocumentRequest& WithTargetType(Aws::String&& value) { SetTargetType(std::move(value)); return *this;}
    inline CreateDocumentRequest& WithTargetType(const char* value) { SetTargetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag an SSM document to identify the
     * types of targets or the environment where it will run. In this case, you could
     * specify the following key-value pairs:</p> <ul> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> <li> <p>
     * <code>Key=Environment,Value=Production</code> </p> </li> </ul>  <p>To add
     * tags to an existing SSM document, use the <a>AddTagsToResource</a>
     * operation.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateDocumentRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateDocumentRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateDocumentRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateDocumentRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::Vector<DocumentRequires> m_requires;
    bool m_requiresHasBeenSet = false;

    Aws::Vector<AttachmentsSource> m_attachments;
    bool m_attachmentsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    DocumentType m_documentType;
    bool m_documentTypeHasBeenSet = false;

    DocumentFormat m_documentFormat;
    bool m_documentFormatHasBeenSet = false;

    Aws::String m_targetType;
    bool m_targetTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
