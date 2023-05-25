/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace NimbleStudio
{
namespace Model
{

  /**
   * <p>The configuration for a shared file storage system that is associated with a
   * studio resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/SharedFileSystemConfiguration">AWS
   * API Reference</a></p>
   */
  class SharedFileSystemConfiguration
  {
  public:
    AWS_NIMBLESTUDIO_API SharedFileSystemConfiguration();
    AWS_NIMBLESTUDIO_API SharedFileSystemConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API SharedFileSystemConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The endpoint of the shared file system that is accessed by the studio
     * component resource.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The endpoint of the shared file system that is accessed by the studio
     * component resource.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The endpoint of the shared file system that is accessed by the studio
     * component resource.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The endpoint of the shared file system that is accessed by the studio
     * component resource.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The endpoint of the shared file system that is accessed by the studio
     * component resource.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The endpoint of the shared file system that is accessed by the studio
     * component resource.</p>
     */
    inline SharedFileSystemConfiguration& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint of the shared file system that is accessed by the studio
     * component resource.</p>
     */
    inline SharedFileSystemConfiguration& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint of the shared file system that is accessed by the studio
     * component resource.</p>
     */
    inline SharedFileSystemConfiguration& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>The unique identifier for a file system.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The unique identifier for a file system.</p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>The unique identifier for a file system.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>The unique identifier for a file system.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>The unique identifier for a file system.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>The unique identifier for a file system.</p>
     */
    inline SharedFileSystemConfiguration& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The unique identifier for a file system.</p>
     */
    inline SharedFileSystemConfiguration& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for a file system.</p>
     */
    inline SharedFileSystemConfiguration& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>The mount location for a shared file system on a Linux virtual
     * workstation.</p>
     */
    inline const Aws::String& GetLinuxMountPoint() const{ return m_linuxMountPoint; }

    /**
     * <p>The mount location for a shared file system on a Linux virtual
     * workstation.</p>
     */
    inline bool LinuxMountPointHasBeenSet() const { return m_linuxMountPointHasBeenSet; }

    /**
     * <p>The mount location for a shared file system on a Linux virtual
     * workstation.</p>
     */
    inline void SetLinuxMountPoint(const Aws::String& value) { m_linuxMountPointHasBeenSet = true; m_linuxMountPoint = value; }

    /**
     * <p>The mount location for a shared file system on a Linux virtual
     * workstation.</p>
     */
    inline void SetLinuxMountPoint(Aws::String&& value) { m_linuxMountPointHasBeenSet = true; m_linuxMountPoint = std::move(value); }

    /**
     * <p>The mount location for a shared file system on a Linux virtual
     * workstation.</p>
     */
    inline void SetLinuxMountPoint(const char* value) { m_linuxMountPointHasBeenSet = true; m_linuxMountPoint.assign(value); }

    /**
     * <p>The mount location for a shared file system on a Linux virtual
     * workstation.</p>
     */
    inline SharedFileSystemConfiguration& WithLinuxMountPoint(const Aws::String& value) { SetLinuxMountPoint(value); return *this;}

    /**
     * <p>The mount location for a shared file system on a Linux virtual
     * workstation.</p>
     */
    inline SharedFileSystemConfiguration& WithLinuxMountPoint(Aws::String&& value) { SetLinuxMountPoint(std::move(value)); return *this;}

    /**
     * <p>The mount location for a shared file system on a Linux virtual
     * workstation.</p>
     */
    inline SharedFileSystemConfiguration& WithLinuxMountPoint(const char* value) { SetLinuxMountPoint(value); return *this;}


    /**
     * <p>The name of the file share.</p>
     */
    inline const Aws::String& GetShareName() const{ return m_shareName; }

    /**
     * <p>The name of the file share.</p>
     */
    inline bool ShareNameHasBeenSet() const { return m_shareNameHasBeenSet; }

    /**
     * <p>The name of the file share.</p>
     */
    inline void SetShareName(const Aws::String& value) { m_shareNameHasBeenSet = true; m_shareName = value; }

    /**
     * <p>The name of the file share.</p>
     */
    inline void SetShareName(Aws::String&& value) { m_shareNameHasBeenSet = true; m_shareName = std::move(value); }

    /**
     * <p>The name of the file share.</p>
     */
    inline void SetShareName(const char* value) { m_shareNameHasBeenSet = true; m_shareName.assign(value); }

    /**
     * <p>The name of the file share.</p>
     */
    inline SharedFileSystemConfiguration& WithShareName(const Aws::String& value) { SetShareName(value); return *this;}

    /**
     * <p>The name of the file share.</p>
     */
    inline SharedFileSystemConfiguration& WithShareName(Aws::String&& value) { SetShareName(std::move(value)); return *this;}

    /**
     * <p>The name of the file share.</p>
     */
    inline SharedFileSystemConfiguration& WithShareName(const char* value) { SetShareName(value); return *this;}


    /**
     * <p>The mount location for a shared file system on a Windows virtual
     * workstation.</p>
     */
    inline const Aws::String& GetWindowsMountDrive() const{ return m_windowsMountDrive; }

    /**
     * <p>The mount location for a shared file system on a Windows virtual
     * workstation.</p>
     */
    inline bool WindowsMountDriveHasBeenSet() const { return m_windowsMountDriveHasBeenSet; }

    /**
     * <p>The mount location for a shared file system on a Windows virtual
     * workstation.</p>
     */
    inline void SetWindowsMountDrive(const Aws::String& value) { m_windowsMountDriveHasBeenSet = true; m_windowsMountDrive = value; }

    /**
     * <p>The mount location for a shared file system on a Windows virtual
     * workstation.</p>
     */
    inline void SetWindowsMountDrive(Aws::String&& value) { m_windowsMountDriveHasBeenSet = true; m_windowsMountDrive = std::move(value); }

    /**
     * <p>The mount location for a shared file system on a Windows virtual
     * workstation.</p>
     */
    inline void SetWindowsMountDrive(const char* value) { m_windowsMountDriveHasBeenSet = true; m_windowsMountDrive.assign(value); }

    /**
     * <p>The mount location for a shared file system on a Windows virtual
     * workstation.</p>
     */
    inline SharedFileSystemConfiguration& WithWindowsMountDrive(const Aws::String& value) { SetWindowsMountDrive(value); return *this;}

    /**
     * <p>The mount location for a shared file system on a Windows virtual
     * workstation.</p>
     */
    inline SharedFileSystemConfiguration& WithWindowsMountDrive(Aws::String&& value) { SetWindowsMountDrive(std::move(value)); return *this;}

    /**
     * <p>The mount location for a shared file system on a Windows virtual
     * workstation.</p>
     */
    inline SharedFileSystemConfiguration& WithWindowsMountDrive(const char* value) { SetWindowsMountDrive(value); return *this;}

  private:

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    Aws::String m_linuxMountPoint;
    bool m_linuxMountPointHasBeenSet = false;

    Aws::String m_shareName;
    bool m_shareNameHasBeenSet = false;

    Aws::String m_windowsMountDrive;
    bool m_windowsMountDriveHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
