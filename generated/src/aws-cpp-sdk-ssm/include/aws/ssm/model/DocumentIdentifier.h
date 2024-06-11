/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/DocumentType.h>
#include <aws/ssm/model/DocumentFormat.h>
#include <aws/ssm/model/ReviewStatus.h>
#include <aws/ssm/model/PlatformType.h>
#include <aws/ssm/model/Tag.h>
#include <aws/ssm/model/DocumentRequires.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Describes the name of a SSM document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DocumentIdentifier">AWS
   * API Reference</a></p>
   */
  class DocumentIdentifier
  {
  public:
    AWS_SSM_API DocumentIdentifier();
    AWS_SSM_API DocumentIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API DocumentIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the SSM document.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DocumentIdentifier& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DocumentIdentifier& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DocumentIdentifier& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the SSM document was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }
    inline DocumentIdentifier& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline DocumentIdentifier& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional field where you can specify a friendly name for the SSM document.
     * This value can differ for each version of the document. If you want to update
     * this value, see <a>UpdateDocument</a>.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline DocumentIdentifier& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline DocumentIdentifier& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline DocumentIdentifier& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services user that created the document.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline DocumentIdentifier& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline DocumentIdentifier& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline DocumentIdentifier& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional field specifying the version of the artifact associated with the
     * document. For example, 12.6. This value is unique across all versions of a
     * document, and can't be changed.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }
    inline DocumentIdentifier& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}
    inline DocumentIdentifier& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}
    inline DocumentIdentifier& WithVersionName(const char* value) { SetVersionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system platform. </p>
     */
    inline const Aws::Vector<PlatformType>& GetPlatformTypes() const{ return m_platformTypes; }
    inline bool PlatformTypesHasBeenSet() const { return m_platformTypesHasBeenSet; }
    inline void SetPlatformTypes(const Aws::Vector<PlatformType>& value) { m_platformTypesHasBeenSet = true; m_platformTypes = value; }
    inline void SetPlatformTypes(Aws::Vector<PlatformType>&& value) { m_platformTypesHasBeenSet = true; m_platformTypes = std::move(value); }
    inline DocumentIdentifier& WithPlatformTypes(const Aws::Vector<PlatformType>& value) { SetPlatformTypes(value); return *this;}
    inline DocumentIdentifier& WithPlatformTypes(Aws::Vector<PlatformType>&& value) { SetPlatformTypes(std::move(value)); return *this;}
    inline DocumentIdentifier& AddPlatformTypes(const PlatformType& value) { m_platformTypesHasBeenSet = true; m_platformTypes.push_back(value); return *this; }
    inline DocumentIdentifier& AddPlatformTypes(PlatformType&& value) { m_platformTypesHasBeenSet = true; m_platformTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The document version.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }
    inline DocumentIdentifier& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}
    inline DocumentIdentifier& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}
    inline DocumentIdentifier& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document type.</p>
     */
    inline const DocumentType& GetDocumentType() const{ return m_documentType; }
    inline bool DocumentTypeHasBeenSet() const { return m_documentTypeHasBeenSet; }
    inline void SetDocumentType(const DocumentType& value) { m_documentTypeHasBeenSet = true; m_documentType = value; }
    inline void SetDocumentType(DocumentType&& value) { m_documentTypeHasBeenSet = true; m_documentType = std::move(value); }
    inline DocumentIdentifier& WithDocumentType(const DocumentType& value) { SetDocumentType(value); return *this;}
    inline DocumentIdentifier& WithDocumentType(DocumentType&& value) { SetDocumentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema version.</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::move(value); }
    inline void SetSchemaVersion(const char* value) { m_schemaVersionHasBeenSet = true; m_schemaVersion.assign(value); }
    inline DocumentIdentifier& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}
    inline DocumentIdentifier& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}
    inline DocumentIdentifier& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document format, either JSON or YAML.</p>
     */
    inline const DocumentFormat& GetDocumentFormat() const{ return m_documentFormat; }
    inline bool DocumentFormatHasBeenSet() const { return m_documentFormatHasBeenSet; }
    inline void SetDocumentFormat(const DocumentFormat& value) { m_documentFormatHasBeenSet = true; m_documentFormat = value; }
    inline void SetDocumentFormat(DocumentFormat&& value) { m_documentFormatHasBeenSet = true; m_documentFormat = std::move(value); }
    inline DocumentIdentifier& WithDocumentFormat(const DocumentFormat& value) { SetDocumentFormat(value); return *this;}
    inline DocumentIdentifier& WithDocumentFormat(DocumentFormat&& value) { SetDocumentFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target type which defines the kinds of resources the document can run on.
     * For example, <code>/AWS::EC2::Instance</code>. For a list of valid resource
     * types, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services resource and property types reference</a> in the <i>CloudFormation
     * User Guide</i>. </p>
     */
    inline const Aws::String& GetTargetType() const{ return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(const Aws::String& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline void SetTargetType(Aws::String&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }
    inline void SetTargetType(const char* value) { m_targetTypeHasBeenSet = true; m_targetType.assign(value); }
    inline DocumentIdentifier& WithTargetType(const Aws::String& value) { SetTargetType(value); return *this;}
    inline DocumentIdentifier& WithTargetType(Aws::String&& value) { SetTargetType(std::move(value)); return *this;}
    inline DocumentIdentifier& WithTargetType(const char* value) { SetTargetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags, or metadata, that have been applied to the document.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline DocumentIdentifier& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline DocumentIdentifier& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline DocumentIdentifier& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline DocumentIdentifier& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of SSM documents required by a document. For example, an
     * <code>ApplicationConfiguration</code> document requires an
     * <code>ApplicationConfigurationSchema</code> document.</p>
     */
    inline const Aws::Vector<DocumentRequires>& GetRequires() const{ return m_requires; }
    inline bool RequiresHasBeenSet() const { return m_requiresHasBeenSet; }
    inline void SetRequires(const Aws::Vector<DocumentRequires>& value) { m_requiresHasBeenSet = true; m_requires = value; }
    inline void SetRequires(Aws::Vector<DocumentRequires>&& value) { m_requiresHasBeenSet = true; m_requires = std::move(value); }
    inline DocumentIdentifier& WithRequires(const Aws::Vector<DocumentRequires>& value) { SetRequires(value); return *this;}
    inline DocumentIdentifier& WithRequires(Aws::Vector<DocumentRequires>&& value) { SetRequires(std::move(value)); return *this;}
    inline DocumentIdentifier& AddRequires(const DocumentRequires& value) { m_requiresHasBeenSet = true; m_requires.push_back(value); return *this; }
    inline DocumentIdentifier& AddRequires(DocumentRequires&& value) { m_requiresHasBeenSet = true; m_requires.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current status of a document review.</p>
     */
    inline const ReviewStatus& GetReviewStatus() const{ return m_reviewStatus; }
    inline bool ReviewStatusHasBeenSet() const { return m_reviewStatusHasBeenSet; }
    inline void SetReviewStatus(const ReviewStatus& value) { m_reviewStatusHasBeenSet = true; m_reviewStatus = value; }
    inline void SetReviewStatus(ReviewStatus&& value) { m_reviewStatusHasBeenSet = true; m_reviewStatus = std::move(value); }
    inline DocumentIdentifier& WithReviewStatus(const ReviewStatus& value) { SetReviewStatus(value); return *this;}
    inline DocumentIdentifier& WithReviewStatus(ReviewStatus&& value) { SetReviewStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user in your organization who created the document.</p>
     */
    inline const Aws::String& GetAuthor() const{ return m_author; }
    inline bool AuthorHasBeenSet() const { return m_authorHasBeenSet; }
    inline void SetAuthor(const Aws::String& value) { m_authorHasBeenSet = true; m_author = value; }
    inline void SetAuthor(Aws::String&& value) { m_authorHasBeenSet = true; m_author = std::move(value); }
    inline void SetAuthor(const char* value) { m_authorHasBeenSet = true; m_author.assign(value); }
    inline DocumentIdentifier& WithAuthor(const Aws::String& value) { SetAuthor(value); return *this;}
    inline DocumentIdentifier& WithAuthor(Aws::String&& value) { SetAuthor(std::move(value)); return *this;}
    inline DocumentIdentifier& WithAuthor(const char* value) { SetAuthor(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    Aws::Vector<PlatformType> m_platformTypes;
    bool m_platformTypesHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    DocumentType m_documentType;
    bool m_documentTypeHasBeenSet = false;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;

    DocumentFormat m_documentFormat;
    bool m_documentFormatHasBeenSet = false;

    Aws::String m_targetType;
    bool m_targetTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<DocumentRequires> m_requires;
    bool m_requiresHasBeenSet = false;

    ReviewStatus m_reviewStatus;
    bool m_reviewStatusHasBeenSet = false;

    Aws::String m_author;
    bool m_authorHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
