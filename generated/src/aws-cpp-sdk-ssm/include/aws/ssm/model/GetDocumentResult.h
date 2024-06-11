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
    AWS_SSM_API GetDocumentResult();
    AWS_SSM_API GetDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the SSM document.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetDocumentResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetDocumentResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetDocumentResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the SSM document was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }
    inline GetDocumentResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline GetDocumentResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name of the SSM document. This value can differ for each version
     * of the document. If you want to update this value, see
     * <a>UpdateDocument</a>.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline GetDocumentResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline GetDocumentResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline GetDocumentResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the artifact associated with the document. For example, 12.6.
     * This value is unique across all versions of a document, and can't be
     * changed.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }
    inline void SetVersionName(const Aws::String& value) { m_versionName = value; }
    inline void SetVersionName(Aws::String&& value) { m_versionName = std::move(value); }
    inline void SetVersionName(const char* value) { m_versionName.assign(value); }
    inline GetDocumentResult& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}
    inline GetDocumentResult& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}
    inline GetDocumentResult& WithVersionName(const char* value) { SetVersionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document version.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersion = value; }
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersion = std::move(value); }
    inline void SetDocumentVersion(const char* value) { m_documentVersion.assign(value); }
    inline GetDocumentResult& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}
    inline GetDocumentResult& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}
    inline GetDocumentResult& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the SSM document, such as <code>Creating</code>,
     * <code>Active</code>, <code>Updating</code>, <code>Failed</code>, and
     * <code>Deleting</code>.</p>
     */
    inline const DocumentStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const DocumentStatus& value) { m_status = value; }
    inline void SetStatus(DocumentStatus&& value) { m_status = std::move(value); }
    inline GetDocumentResult& WithStatus(const DocumentStatus& value) { SetStatus(value); return *this;}
    inline GetDocumentResult& WithStatus(DocumentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message returned by Amazon Web Services Systems Manager that explains the
     * <code>Status</code> value. For example, a <code>Failed</code> status might be
     * explained by the <code>StatusInformation</code> message, "The specified S3
     * bucket doesn't exist. Verify that the URL of the S3 bucket is correct."</p>
     */
    inline const Aws::String& GetStatusInformation() const{ return m_statusInformation; }
    inline void SetStatusInformation(const Aws::String& value) { m_statusInformation = value; }
    inline void SetStatusInformation(Aws::String&& value) { m_statusInformation = std::move(value); }
    inline void SetStatusInformation(const char* value) { m_statusInformation.assign(value); }
    inline GetDocumentResult& WithStatusInformation(const Aws::String& value) { SetStatusInformation(value); return *this;}
    inline GetDocumentResult& WithStatusInformation(Aws::String&& value) { SetStatusInformation(std::move(value)); return *this;}
    inline GetDocumentResult& WithStatusInformation(const char* value) { SetStatusInformation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contents of the SSM document.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline void SetContent(const Aws::String& value) { m_content = value; }
    inline void SetContent(Aws::String&& value) { m_content = std::move(value); }
    inline void SetContent(const char* value) { m_content.assign(value); }
    inline GetDocumentResult& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline GetDocumentResult& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline GetDocumentResult& WithContent(const char* value) { SetContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document type.</p>
     */
    inline const DocumentType& GetDocumentType() const{ return m_documentType; }
    inline void SetDocumentType(const DocumentType& value) { m_documentType = value; }
    inline void SetDocumentType(DocumentType&& value) { m_documentType = std::move(value); }
    inline GetDocumentResult& WithDocumentType(const DocumentType& value) { SetDocumentType(value); return *this;}
    inline GetDocumentResult& WithDocumentType(DocumentType&& value) { SetDocumentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document format, either JSON or YAML.</p>
     */
    inline const DocumentFormat& GetDocumentFormat() const{ return m_documentFormat; }
    inline void SetDocumentFormat(const DocumentFormat& value) { m_documentFormat = value; }
    inline void SetDocumentFormat(DocumentFormat&& value) { m_documentFormat = std::move(value); }
    inline GetDocumentResult& WithDocumentFormat(const DocumentFormat& value) { SetDocumentFormat(value); return *this;}
    inline GetDocumentResult& WithDocumentFormat(DocumentFormat&& value) { SetDocumentFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of SSM documents required by a document. For example, an
     * <code>ApplicationConfiguration</code> document requires an
     * <code>ApplicationConfigurationSchema</code> document.</p>
     */
    inline const Aws::Vector<DocumentRequires>& GetRequires() const{ return m_requires; }
    inline void SetRequires(const Aws::Vector<DocumentRequires>& value) { m_requires = value; }
    inline void SetRequires(Aws::Vector<DocumentRequires>&& value) { m_requires = std::move(value); }
    inline GetDocumentResult& WithRequires(const Aws::Vector<DocumentRequires>& value) { SetRequires(value); return *this;}
    inline GetDocumentResult& WithRequires(Aws::Vector<DocumentRequires>&& value) { SetRequires(std::move(value)); return *this;}
    inline GetDocumentResult& AddRequires(const DocumentRequires& value) { m_requires.push_back(value); return *this; }
    inline GetDocumentResult& AddRequires(DocumentRequires&& value) { m_requires.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description of the document attachments, including names, locations, sizes,
     * and so on.</p>
     */
    inline const Aws::Vector<AttachmentContent>& GetAttachmentsContent() const{ return m_attachmentsContent; }
    inline void SetAttachmentsContent(const Aws::Vector<AttachmentContent>& value) { m_attachmentsContent = value; }
    inline void SetAttachmentsContent(Aws::Vector<AttachmentContent>&& value) { m_attachmentsContent = std::move(value); }
    inline GetDocumentResult& WithAttachmentsContent(const Aws::Vector<AttachmentContent>& value) { SetAttachmentsContent(value); return *this;}
    inline GetDocumentResult& WithAttachmentsContent(Aws::Vector<AttachmentContent>&& value) { SetAttachmentsContent(std::move(value)); return *this;}
    inline GetDocumentResult& AddAttachmentsContent(const AttachmentContent& value) { m_attachmentsContent.push_back(value); return *this; }
    inline GetDocumentResult& AddAttachmentsContent(AttachmentContent&& value) { m_attachmentsContent.push_back(std::move(value)); return *this; }
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
    inline const ReviewStatus& GetReviewStatus() const{ return m_reviewStatus; }
    inline void SetReviewStatus(const ReviewStatus& value) { m_reviewStatus = value; }
    inline void SetReviewStatus(ReviewStatus&& value) { m_reviewStatus = std::move(value); }
    inline GetDocumentResult& WithReviewStatus(const ReviewStatus& value) { SetReviewStatus(value); return *this;}
    inline GetDocumentResult& WithReviewStatus(ReviewStatus&& value) { SetReviewStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDocumentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDocumentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDocumentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::Utils::DateTime m_createdDate;

    Aws::String m_displayName;

    Aws::String m_versionName;

    Aws::String m_documentVersion;

    DocumentStatus m_status;

    Aws::String m_statusInformation;

    Aws::String m_content;

    DocumentType m_documentType;

    DocumentFormat m_documentFormat;

    Aws::Vector<DocumentRequires> m_requires;

    Aws::Vector<AttachmentContent> m_attachmentsContent;

    ReviewStatus m_reviewStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
