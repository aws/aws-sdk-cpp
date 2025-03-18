/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/DataReplication.h>
#include <aws/workspaces/model/Tag.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes a standby WorkSpace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/StandbyWorkspace">AWS
   * API Reference</a></p>
   */
  class StandbyWorkspace
  {
  public:
    AWS_WORKSPACES_API StandbyWorkspace() = default;
    AWS_WORKSPACES_API StandbyWorkspace(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API StandbyWorkspace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the standby WorkSpace.</p>
     */
    inline const Aws::String& GetPrimaryWorkspaceId() const { return m_primaryWorkspaceId; }
    inline bool PrimaryWorkspaceIdHasBeenSet() const { return m_primaryWorkspaceIdHasBeenSet; }
    template<typename PrimaryWorkspaceIdT = Aws::String>
    void SetPrimaryWorkspaceId(PrimaryWorkspaceIdT&& value) { m_primaryWorkspaceIdHasBeenSet = true; m_primaryWorkspaceId = std::forward<PrimaryWorkspaceIdT>(value); }
    template<typename PrimaryWorkspaceIdT = Aws::String>
    StandbyWorkspace& WithPrimaryWorkspaceId(PrimaryWorkspaceIdT&& value) { SetPrimaryWorkspaceId(std::forward<PrimaryWorkspaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume encryption key of the standby WorkSpace.</p>
     */
    inline const Aws::String& GetVolumeEncryptionKey() const { return m_volumeEncryptionKey; }
    inline bool VolumeEncryptionKeyHasBeenSet() const { return m_volumeEncryptionKeyHasBeenSet; }
    template<typename VolumeEncryptionKeyT = Aws::String>
    void SetVolumeEncryptionKey(VolumeEncryptionKeyT&& value) { m_volumeEncryptionKeyHasBeenSet = true; m_volumeEncryptionKey = std::forward<VolumeEncryptionKeyT>(value); }
    template<typename VolumeEncryptionKeyT = Aws::String>
    StandbyWorkspace& WithVolumeEncryptionKey(VolumeEncryptionKeyT&& value) { SetVolumeEncryptionKey(std::forward<VolumeEncryptionKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the directory for the standby WorkSpace.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    StandbyWorkspace& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the standby WorkSpace.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    StandbyWorkspace& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    StandbyWorkspace& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether data replication is enabled, and if enabled, the type of
     * data replication.</p>
     */
    inline DataReplication GetDataReplication() const { return m_dataReplication; }
    inline bool DataReplicationHasBeenSet() const { return m_dataReplicationHasBeenSet; }
    inline void SetDataReplication(DataReplication value) { m_dataReplicationHasBeenSet = true; m_dataReplication = value; }
    inline StandbyWorkspace& WithDataReplication(DataReplication value) { SetDataReplication(value); return *this;}
    ///@}
  private:

    Aws::String m_primaryWorkspaceId;
    bool m_primaryWorkspaceIdHasBeenSet = false;

    Aws::String m_volumeEncryptionKey;
    bool m_volumeEncryptionKeyHasBeenSet = false;

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    DataReplication m_dataReplication{DataReplication::NOT_SET};
    bool m_dataReplicationHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
