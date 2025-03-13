/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/workdocs/model/DocumentVersionMetadata.h>
#include <aws/workdocs/model/ResourceStateType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes the document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DocumentMetadata">AWS
   * API Reference</a></p>
   */
  class DocumentMetadata
  {
  public:
    AWS_WORKDOCS_API DocumentMetadata() = default;
    AWS_WORKDOCS_API DocumentMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API DocumentMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the document.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DocumentMetadata& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
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
    DocumentMetadata& WithCreatorId(CreatorIdT&& value) { SetCreatorId(std::forward<CreatorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the parent folder.</p>
     */
    inline const Aws::String& GetParentFolderId() const { return m_parentFolderId; }
    inline bool ParentFolderIdHasBeenSet() const { return m_parentFolderIdHasBeenSet; }
    template<typename ParentFolderIdT = Aws::String>
    void SetParentFolderId(ParentFolderIdT&& value) { m_parentFolderIdHasBeenSet = true; m_parentFolderId = std::forward<ParentFolderIdT>(value); }
    template<typename ParentFolderIdT = Aws::String>
    DocumentMetadata& WithParentFolderId(ParentFolderIdT&& value) { SetParentFolderId(std::forward<ParentFolderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the document was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    DocumentMetadata& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the document was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedTimestamp() const { return m_modifiedTimestamp; }
    inline bool ModifiedTimestampHasBeenSet() const { return m_modifiedTimestampHasBeenSet; }
    template<typename ModifiedTimestampT = Aws::Utils::DateTime>
    void SetModifiedTimestamp(ModifiedTimestampT&& value) { m_modifiedTimestampHasBeenSet = true; m_modifiedTimestamp = std::forward<ModifiedTimestampT>(value); }
    template<typename ModifiedTimestampT = Aws::Utils::DateTime>
    DocumentMetadata& WithModifiedTimestamp(ModifiedTimestampT&& value) { SetModifiedTimestamp(std::forward<ModifiedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest version of the document.</p>
     */
    inline const DocumentVersionMetadata& GetLatestVersionMetadata() const { return m_latestVersionMetadata; }
    inline bool LatestVersionMetadataHasBeenSet() const { return m_latestVersionMetadataHasBeenSet; }
    template<typename LatestVersionMetadataT = DocumentVersionMetadata>
    void SetLatestVersionMetadata(LatestVersionMetadataT&& value) { m_latestVersionMetadataHasBeenSet = true; m_latestVersionMetadata = std::forward<LatestVersionMetadataT>(value); }
    template<typename LatestVersionMetadataT = DocumentVersionMetadata>
    DocumentMetadata& WithLatestVersionMetadata(LatestVersionMetadataT&& value) { SetLatestVersionMetadata(std::forward<LatestVersionMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource state.</p>
     */
    inline ResourceStateType GetResourceState() const { return m_resourceState; }
    inline bool ResourceStateHasBeenSet() const { return m_resourceStateHasBeenSet; }
    inline void SetResourceState(ResourceStateType value) { m_resourceStateHasBeenSet = true; m_resourceState = value; }
    inline DocumentMetadata& WithResourceState(ResourceStateType value) { SetResourceState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of labels on the document.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabels() const { return m_labels; }
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }
    template<typename LabelsT = Aws::Vector<Aws::String>>
    void SetLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels = std::forward<LabelsT>(value); }
    template<typename LabelsT = Aws::Vector<Aws::String>>
    DocumentMetadata& WithLabels(LabelsT&& value) { SetLabels(std::forward<LabelsT>(value)); return *this;}
    template<typename LabelsT = Aws::String>
    DocumentMetadata& AddLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels.emplace_back(std::forward<LabelsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_creatorId;
    bool m_creatorIdHasBeenSet = false;

    Aws::String m_parentFolderId;
    bool m_parentFolderIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedTimestamp{};
    bool m_modifiedTimestampHasBeenSet = false;

    DocumentVersionMetadata m_latestVersionMetadata;
    bool m_latestVersionMetadataHasBeenSet = false;

    ResourceStateType m_resourceState{ResourceStateType::NOT_SET};
    bool m_resourceStateHasBeenSet = false;

    Aws::Vector<Aws::String> m_labels;
    bool m_labelsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
