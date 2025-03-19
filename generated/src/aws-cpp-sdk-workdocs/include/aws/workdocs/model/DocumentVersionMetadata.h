/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/DocumentStatusType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/workdocs/model/DocumentThumbnailType.h>
#include <aws/workdocs/model/DocumentSourceType.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Describes a version of a document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DocumentVersionMetadata">AWS
   * API Reference</a></p>
   */
  class DocumentVersionMetadata
  {
  public:
    AWS_WORKDOCS_API DocumentVersionMetadata() = default;
    AWS_WORKDOCS_API DocumentVersionMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API DocumentVersionMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the version.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DocumentVersionMetadata& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the version.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DocumentVersionMetadata& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content type of the document.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    DocumentVersionMetadata& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the document, in bytes.</p>
     */
    inline long long GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }
    inline DocumentVersionMetadata& WithSize(long long value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signature of the document.</p>
     */
    inline const Aws::String& GetSignature() const { return m_signature; }
    inline bool SignatureHasBeenSet() const { return m_signatureHasBeenSet; }
    template<typename SignatureT = Aws::String>
    void SetSignature(SignatureT&& value) { m_signatureHasBeenSet = true; m_signature = std::forward<SignatureT>(value); }
    template<typename SignatureT = Aws::String>
    DocumentVersionMetadata& WithSignature(SignatureT&& value) { SetSignature(std::forward<SignatureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the document.</p>
     */
    inline DocumentStatusType GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DocumentStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline DocumentVersionMetadata& WithStatus(DocumentStatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the document was first uploaded.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    DocumentVersionMetadata& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the document was last uploaded.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedTimestamp() const { return m_modifiedTimestamp; }
    inline bool ModifiedTimestampHasBeenSet() const { return m_modifiedTimestampHasBeenSet; }
    template<typename ModifiedTimestampT = Aws::Utils::DateTime>
    void SetModifiedTimestamp(ModifiedTimestampT&& value) { m_modifiedTimestampHasBeenSet = true; m_modifiedTimestamp = std::forward<ModifiedTimestampT>(value); }
    template<typename ModifiedTimestampT = Aws::Utils::DateTime>
    DocumentVersionMetadata& WithModifiedTimestamp(ModifiedTimestampT&& value) { SetModifiedTimestamp(std::forward<ModifiedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the content of the document was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetContentCreatedTimestamp() const { return m_contentCreatedTimestamp; }
    inline bool ContentCreatedTimestampHasBeenSet() const { return m_contentCreatedTimestampHasBeenSet; }
    template<typename ContentCreatedTimestampT = Aws::Utils::DateTime>
    void SetContentCreatedTimestamp(ContentCreatedTimestampT&& value) { m_contentCreatedTimestampHasBeenSet = true; m_contentCreatedTimestamp = std::forward<ContentCreatedTimestampT>(value); }
    template<typename ContentCreatedTimestampT = Aws::Utils::DateTime>
    DocumentVersionMetadata& WithContentCreatedTimestamp(ContentCreatedTimestampT&& value) { SetContentCreatedTimestamp(std::forward<ContentCreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the content of the document was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetContentModifiedTimestamp() const { return m_contentModifiedTimestamp; }
    inline bool ContentModifiedTimestampHasBeenSet() const { return m_contentModifiedTimestampHasBeenSet; }
    template<typename ContentModifiedTimestampT = Aws::Utils::DateTime>
    void SetContentModifiedTimestamp(ContentModifiedTimestampT&& value) { m_contentModifiedTimestampHasBeenSet = true; m_contentModifiedTimestamp = std::forward<ContentModifiedTimestampT>(value); }
    template<typename ContentModifiedTimestampT = Aws::Utils::DateTime>
    DocumentVersionMetadata& WithContentModifiedTimestamp(ContentModifiedTimestampT&& value) { SetContentModifiedTimestamp(std::forward<ContentModifiedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the creator.</p>
     */
    inline const Aws::String& GetCreatorId() const { return m_creatorId; }
    inline bool CreatorIdHasBeenSet() const { return m_creatorIdHasBeenSet; }
    template<typename CreatorIdT = Aws::String>
    void SetCreatorId(CreatorIdT&& value) { m_creatorIdHasBeenSet = true; m_creatorId = std::forward<CreatorIdT>(value); }
    template<typename CreatorIdT = Aws::String>
    DocumentVersionMetadata& WithCreatorId(CreatorIdT&& value) { SetCreatorId(std::forward<CreatorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thumbnail of the document.</p>
     */
    inline const Aws::Map<DocumentThumbnailType, Aws::String>& GetThumbnail() const { return m_thumbnail; }
    inline bool ThumbnailHasBeenSet() const { return m_thumbnailHasBeenSet; }
    template<typename ThumbnailT = Aws::Map<DocumentThumbnailType, Aws::String>>
    void SetThumbnail(ThumbnailT&& value) { m_thumbnailHasBeenSet = true; m_thumbnail = std::forward<ThumbnailT>(value); }
    template<typename ThumbnailT = Aws::Map<DocumentThumbnailType, Aws::String>>
    DocumentVersionMetadata& WithThumbnail(ThumbnailT&& value) { SetThumbnail(std::forward<ThumbnailT>(value)); return *this;}
    inline DocumentVersionMetadata& AddThumbnail(DocumentThumbnailType key, Aws::String value) {
      m_thumbnailHasBeenSet = true; m_thumbnail.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The source of the document.</p>
     */
    inline const Aws::Map<DocumentSourceType, Aws::String>& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::Map<DocumentSourceType, Aws::String>>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::Map<DocumentSourceType, Aws::String>>
    DocumentVersionMetadata& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    inline DocumentVersionMetadata& AddSource(DocumentSourceType key, Aws::String value) {
      m_sourceHasBeenSet = true; m_source.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    long long m_size{0};
    bool m_sizeHasBeenSet = false;

    Aws::String m_signature;
    bool m_signatureHasBeenSet = false;

    DocumentStatusType m_status{DocumentStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedTimestamp{};
    bool m_modifiedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_contentCreatedTimestamp{};
    bool m_contentCreatedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_contentModifiedTimestamp{};
    bool m_contentModifiedTimestampHasBeenSet = false;

    Aws::String m_creatorId;
    bool m_creatorIdHasBeenSet = false;

    Aws::Map<DocumentThumbnailType, Aws::String> m_thumbnail;
    bool m_thumbnailHasBeenSet = false;

    Aws::Map<DocumentSourceType, Aws::String> m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
