/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes a Standby WorkSpace.</p><p><h3>See Also:</h3>   <a
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


    /**
     * <p>The identifier of the Standby WorkSpace.</p>
     */
    inline const Aws::String& GetPrimaryWorkspaceId() const{ return m_primaryWorkspaceId; }

    /**
     * <p>The identifier of the Standby WorkSpace.</p>
     */
    inline bool PrimaryWorkspaceIdHasBeenSet() const { return m_primaryWorkspaceIdHasBeenSet; }

    /**
     * <p>The identifier of the Standby WorkSpace.</p>
     */
    inline void SetPrimaryWorkspaceId(const Aws::String& value) { m_primaryWorkspaceIdHasBeenSet = true; m_primaryWorkspaceId = value; }

    /**
     * <p>The identifier of the Standby WorkSpace.</p>
     */
    inline void SetPrimaryWorkspaceId(Aws::String&& value) { m_primaryWorkspaceIdHasBeenSet = true; m_primaryWorkspaceId = std::move(value); }

    /**
     * <p>The identifier of the Standby WorkSpace.</p>
     */
    inline void SetPrimaryWorkspaceId(const char* value) { m_primaryWorkspaceIdHasBeenSet = true; m_primaryWorkspaceId.assign(value); }

    /**
     * <p>The identifier of the Standby WorkSpace.</p>
     */
    inline StandbyWorkspace& WithPrimaryWorkspaceId(const Aws::String& value) { SetPrimaryWorkspaceId(value); return *this;}

    /**
     * <p>The identifier of the Standby WorkSpace.</p>
     */
    inline StandbyWorkspace& WithPrimaryWorkspaceId(Aws::String&& value) { SetPrimaryWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Standby WorkSpace.</p>
     */
    inline StandbyWorkspace& WithPrimaryWorkspaceId(const char* value) { SetPrimaryWorkspaceId(value); return *this;}


    /**
     * <p>The volume encryption key of the Standby WorkSpace.</p>
     */
    inline const Aws::String& GetVolumeEncryptionKey() const{ return m_volumeEncryptionKey; }

    /**
     * <p>The volume encryption key of the Standby WorkSpace.</p>
     */
    inline bool VolumeEncryptionKeyHasBeenSet() const { return m_volumeEncryptionKeyHasBeenSet; }

    /**
     * <p>The volume encryption key of the Standby WorkSpace.</p>
     */
    inline void SetVolumeEncryptionKey(const Aws::String& value) { m_volumeEncryptionKeyHasBeenSet = true; m_volumeEncryptionKey = value; }

    /**
     * <p>The volume encryption key of the Standby WorkSpace.</p>
     */
    inline void SetVolumeEncryptionKey(Aws::String&& value) { m_volumeEncryptionKeyHasBeenSet = true; m_volumeEncryptionKey = std::move(value); }

    /**
     * <p>The volume encryption key of the Standby WorkSpace.</p>
     */
    inline void SetVolumeEncryptionKey(const char* value) { m_volumeEncryptionKeyHasBeenSet = true; m_volumeEncryptionKey.assign(value); }

    /**
     * <p>The volume encryption key of the Standby WorkSpace.</p>
     */
    inline StandbyWorkspace& WithVolumeEncryptionKey(const Aws::String& value) { SetVolumeEncryptionKey(value); return *this;}

    /**
     * <p>The volume encryption key of the Standby WorkSpace.</p>
     */
    inline StandbyWorkspace& WithVolumeEncryptionKey(Aws::String&& value) { SetVolumeEncryptionKey(std::move(value)); return *this;}

    /**
     * <p>The volume encryption key of the Standby WorkSpace.</p>
     */
    inline StandbyWorkspace& WithVolumeEncryptionKey(const char* value) { SetVolumeEncryptionKey(value); return *this;}


    /**
     * <p>The identifier of the directory for the Standby WorkSpace.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the directory for the Standby WorkSpace.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the directory for the Standby WorkSpace.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the directory for the Standby WorkSpace.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the directory for the Standby WorkSpace.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the directory for the Standby WorkSpace.</p>
     */
    inline StandbyWorkspace& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory for the Standby WorkSpace.</p>
     */
    inline StandbyWorkspace& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory for the Standby WorkSpace.</p>
     */
    inline StandbyWorkspace& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The tags associated with the Standby WorkSpace.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with the Standby WorkSpace.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags associated with the Standby WorkSpace.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags associated with the Standby WorkSpace.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags associated with the Standby WorkSpace.</p>
     */
    inline StandbyWorkspace& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with the Standby WorkSpace.</p>
     */
    inline StandbyWorkspace& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the Standby WorkSpace.</p>
     */
    inline StandbyWorkspace& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags associated with the Standby WorkSpace.</p>
     */
    inline StandbyWorkspace& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_primaryWorkspaceId;
    bool m_primaryWorkspaceIdHasBeenSet = false;

    Aws::String m_volumeEncryptionKey;
    bool m_volumeEncryptionKeyHasBeenSet = false;

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
