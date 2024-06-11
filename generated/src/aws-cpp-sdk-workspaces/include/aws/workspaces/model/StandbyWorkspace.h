﻿/**
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
    AWS_WORKSPACES_API StandbyWorkspace();
    AWS_WORKSPACES_API StandbyWorkspace(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API StandbyWorkspace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the standby WorkSpace.</p>
     */
    inline const Aws::String& GetPrimaryWorkspaceId() const{ return m_primaryWorkspaceId; }
    inline bool PrimaryWorkspaceIdHasBeenSet() const { return m_primaryWorkspaceIdHasBeenSet; }
    inline void SetPrimaryWorkspaceId(const Aws::String& value) { m_primaryWorkspaceIdHasBeenSet = true; m_primaryWorkspaceId = value; }
    inline void SetPrimaryWorkspaceId(Aws::String&& value) { m_primaryWorkspaceIdHasBeenSet = true; m_primaryWorkspaceId = std::move(value); }
    inline void SetPrimaryWorkspaceId(const char* value) { m_primaryWorkspaceIdHasBeenSet = true; m_primaryWorkspaceId.assign(value); }
    inline StandbyWorkspace& WithPrimaryWorkspaceId(const Aws::String& value) { SetPrimaryWorkspaceId(value); return *this;}
    inline StandbyWorkspace& WithPrimaryWorkspaceId(Aws::String&& value) { SetPrimaryWorkspaceId(std::move(value)); return *this;}
    inline StandbyWorkspace& WithPrimaryWorkspaceId(const char* value) { SetPrimaryWorkspaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume encryption key of the standby WorkSpace.</p>
     */
    inline const Aws::String& GetVolumeEncryptionKey() const{ return m_volumeEncryptionKey; }
    inline bool VolumeEncryptionKeyHasBeenSet() const { return m_volumeEncryptionKeyHasBeenSet; }
    inline void SetVolumeEncryptionKey(const Aws::String& value) { m_volumeEncryptionKeyHasBeenSet = true; m_volumeEncryptionKey = value; }
    inline void SetVolumeEncryptionKey(Aws::String&& value) { m_volumeEncryptionKeyHasBeenSet = true; m_volumeEncryptionKey = std::move(value); }
    inline void SetVolumeEncryptionKey(const char* value) { m_volumeEncryptionKeyHasBeenSet = true; m_volumeEncryptionKey.assign(value); }
    inline StandbyWorkspace& WithVolumeEncryptionKey(const Aws::String& value) { SetVolumeEncryptionKey(value); return *this;}
    inline StandbyWorkspace& WithVolumeEncryptionKey(Aws::String&& value) { SetVolumeEncryptionKey(std::move(value)); return *this;}
    inline StandbyWorkspace& WithVolumeEncryptionKey(const char* value) { SetVolumeEncryptionKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the directory for the standby WorkSpace.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline StandbyWorkspace& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline StandbyWorkspace& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline StandbyWorkspace& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the standby WorkSpace.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline StandbyWorkspace& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline StandbyWorkspace& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline StandbyWorkspace& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline StandbyWorkspace& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether data replication is enabled, and if enabled, the type of
     * data replication.</p>
     */
    inline const DataReplication& GetDataReplication() const{ return m_dataReplication; }
    inline bool DataReplicationHasBeenSet() const { return m_dataReplicationHasBeenSet; }
    inline void SetDataReplication(const DataReplication& value) { m_dataReplicationHasBeenSet = true; m_dataReplication = value; }
    inline void SetDataReplication(DataReplication&& value) { m_dataReplicationHasBeenSet = true; m_dataReplication = std::move(value); }
    inline StandbyWorkspace& WithDataReplication(const DataReplication& value) { SetDataReplication(value); return *this;}
    inline StandbyWorkspace& WithDataReplication(DataReplication&& value) { SetDataReplication(std::move(value)); return *this;}
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

    DataReplication m_dataReplication;
    bool m_dataReplicationHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
