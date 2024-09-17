/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class UpdateVolumeRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API UpdateVolumeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVolume"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The volume ID.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }
    inline UpdateVolumeRequest& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}
    inline UpdateVolumeRequest& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}
    inline UpdateVolumeRequest& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name. Volume names can be a maximum of 128 characters.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateVolumeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateVolumeRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateVolumeRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new mount point.</p>
     */
    inline const Aws::String& GetMountPoint() const{ return m_mountPoint; }
    inline bool MountPointHasBeenSet() const { return m_mountPointHasBeenSet; }
    inline void SetMountPoint(const Aws::String& value) { m_mountPointHasBeenSet = true; m_mountPoint = value; }
    inline void SetMountPoint(Aws::String&& value) { m_mountPointHasBeenSet = true; m_mountPoint = std::move(value); }
    inline void SetMountPoint(const char* value) { m_mountPointHasBeenSet = true; m_mountPoint.assign(value); }
    inline UpdateVolumeRequest& WithMountPoint(const Aws::String& value) { SetMountPoint(value); return *this;}
    inline UpdateVolumeRequest& WithMountPoint(Aws::String&& value) { SetMountPoint(std::move(value)); return *this;}
    inline UpdateVolumeRequest& WithMountPoint(const char* value) { SetMountPoint(value); return *this;}
    ///@}
  private:

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_mountPoint;
    bool m_mountPointHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
