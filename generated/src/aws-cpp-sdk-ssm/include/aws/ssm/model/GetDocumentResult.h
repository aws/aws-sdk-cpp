/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/DocumentStatus.h>
#include <aws/ssm/model/DocumentType.h>
#include <aws/ssm/model/DocumentFormat.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/ReviewStatus.h>
#include <aws/ssm/model/DocumentRequires.h>
#include <aws/ssm/model/AttachmentContent.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{
  class GetDocumentResult
  {
  public:
    AWS_SSM_API GetDocumentResult() = default;
    AWS_SSM_API GetDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the SSM document.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetDocumentResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the SSM document was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    GetDocumentResult& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name of the SSM document. This value can differ for each version
     * of the document. If you want to update this value, see
     * <a>UpdateDocument</a>.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    GetDocumentResult& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the artifact associated with the document. For example, 12.6.
     * This value is unique across all versions of a document, and can't be
     * changed.</p>
     */
    inline const Aws::String& GetVersionName() const { return m_versionName; }
    template<typename VersionNameT = Aws::String>
    void SetVersionName(VersionNameT&& value) { m_versionNameHasBeenSet = true; m_versionName = std::forward<VersionNameT>(value); }
    template<typename VersionNameT = Aws::String>
    GetDocumentResult& WithVersionName(VersionNameT&& value) { SetVersionName(std::forward<VersionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document version.</p>
     */
    inline const Aws::String& GetDocumentVersion() const { return m_documentVersion; }
    template<typename DocumentVersionT = Aws::String>
    void SetDocumentVersion(DocumentVersionT&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::forward<DocumentVersionT>(value); }
    template<typename DocumentVersionT = Aws::String>
    GetDocumentResult& WithDocumentVersion(DocumentVersionT&& value) { SetDocumentVersion(std::forward<DocumentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the SSM document, such as <code>Creating</code>,
     * <code>Active</code>, <code>Updating</code>, <code>Failed</code>, and
     * <code>Deleting</code>.</p>
     */
    inline DocumentStatus GetStatus() const { return m_status; }
    inline void SetStatus(DocumentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetDocumentResult& WithStatus(DocumentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message returned by Amazon Web Services Systems Manager that explains the
     * <code>Status</code> value. For example, a <code>Failed</code> status might be
     * explained by the <code>StatusInformation</code> message, "The specified S3
     * bucket doesn't exist. Verify that the URL of the S3 bucket is correct."</p>
     */
    inline const Aws::String& GetStatusInformation() const { return m_statusInformation; }
    template<typename StatusInformationT = Aws::String>
    void SetStatusInformation(StatusInformationT&& value) { m_statusInformationHasBeenSet = true; m_statusInformation = std::forward<StatusInformationT>(value); }
    template<typename StatusInformationT = Aws::String>
    GetDocumentResult& WithStatusInformation(StatusInformationT&& value) { SetStatusInformation(std::forward<StatusInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contents of the SSM document.</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    GetDocumentResult& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document type.</p>
     */
    inline DocumentType GetDocumentType() const { return m_documentType; }
    inline void SetDocumentType(DocumentType value) { m_documentTypeHasBeenSet = true; m_documentType = value; }
    inline GetDocumentResult& WithDocumentType(DocumentType value) { SetDocumentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document format, either JSON or YAML.</p>
     */
    inline DocumentFormat GetDocumentFormat() const { return m_documentFormat; }
    inline void SetDocumentFormat(DocumentFormat value) { m_documentFormatHasBeenSet = true; m_documentFormat = value; }
    inline GetDocumentResult& WithDocumentFormat(DocumentFormat value) { SetDocumentFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of SSM documents required by a document. For example, an
     * <code>ApplicationConfiguration</code> document requires an
     * <code>ApplicationConfigurationSchema</code> document.</p>
     */
    inline const Aws::Vector<DocumentRequires>& GetRequires() const { return m_requires; }
    template<typename RequiresT = Aws::Vector<DocumentRequires>>
    void SetRequires(RequiresT&& value) { m_requiresHasBeenSet = true; m_requires = std::forward<RequiresT>(value); }
    template<typename RequiresT = Aws::Vector<DocumentRequires>>
    GetDocumentResult& WithRequires(RequiresT&& value) { SetRequires(std::forward<RequiresT>(value)); return *this;}
    template<typename RequiresT = DocumentRequires>
    GetDocumentResult& AddRequires(RequiresT&& value) { m_requiresHasBeenSet = true; m_requires.emplace_back(std::forward<RequiresT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description of the document attachments, including names, locations, sizes,
     * and so on.</p>
     */
    inline const Aws::Vector<AttachmentContent>& GetAttachmentsContent() const { return m_attachmentsContent; }
    template<typename AttachmentsContentT = Aws::Vector<AttachmentContent>>
    void SetAttachmentsContent(AttachmentsContentT&& value) { m_attachmentsContentHasBeenSet = true; m_attachmentsContent = std::forward<AttachmentsContentT>(value); }
    template<typename AttachmentsContentT = Aws::Vector<AttachmentContent>>
    GetDocumentResult& WithAttachmentsContent(AttachmentsContentT&& value) { SetAttachmentsContent(std::forward<AttachmentsContentT>(value)); return *this;}
    template<typename AttachmentsContentT = AttachmentContent>
    GetDocumentResult& AddAttachmentsContent(AttachmentsContentT&& value) { m_attachmentsContentHasBeenSet = true; m_attachmentsContent.emplace_back(std::forward<AttachmentsContentT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current review status of a new custom Systems Manager document (SSM
     * document) created by a member of your organization, or of the latest version of
     * an existing SSM document.</p> <p>Only one version of an SSM document can be in
     * the APPROVED state at a time. When a new version is approved, the status of the
     * previous version changes to REJECTED.</p> <p>Only one version of an SSM document
     * can be in review, or PENDING, at a time.</p>
     */
    inline ReviewStatus GetReviewStatus() const { return m_reviewStatus; }
    inline void SetReviewStatus(ReviewStatus value) { m_reviewStatusHasBeenSet = true; m_reviewStatus = value; }
    inline GetDocumentResult& WithReviewStatus(ReviewStatus value) { SetReviewStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDocumentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    DocumentStatus m_status{DocumentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusInformation;
    bool m_statusInformationHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    DocumentType m_documentType{DocumentType::NOT_SET};
    bool m_documentTypeHasBeenSet = false;

    DocumentFormat m_documentFormat{DocumentFormat::NOT_SET};
    bool m_documentFormatHasBeenSet = false;

    Aws::Vector<DocumentRequires> m_requires;
    bool m_requiresHasBeenSet = false;

    Aws::Vector<AttachmentContent> m_attachmentsContent;
    bool m_attachmentsContentHasBeenSet = false;

    ReviewStatus m_reviewStatus{ReviewStatus::NOT_SET};
    bool m_reviewStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
