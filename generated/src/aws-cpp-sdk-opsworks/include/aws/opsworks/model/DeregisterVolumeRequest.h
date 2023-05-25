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
  class DeregisterVolumeRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API DeregisterVolumeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterVolume"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The AWS OpsWorks Stacks volume ID, which is the GUID that AWS OpsWorks Stacks
     * assigned to the instance when you registered the volume with the stack, not the
     * Amazon EC2 volume ID.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>The AWS OpsWorks Stacks volume ID, which is the GUID that AWS OpsWorks Stacks
     * assigned to the instance when you registered the volume with the stack, not the
     * Amazon EC2 volume ID.</p>
     */
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }

    /**
     * <p>The AWS OpsWorks Stacks volume ID, which is the GUID that AWS OpsWorks Stacks
     * assigned to the instance when you registered the volume with the stack, not the
     * Amazon EC2 volume ID.</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    /**
     * <p>The AWS OpsWorks Stacks volume ID, which is the GUID that AWS OpsWorks Stacks
     * assigned to the instance when you registered the volume with the stack, not the
     * Amazon EC2 volume ID.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }

    /**
     * <p>The AWS OpsWorks Stacks volume ID, which is the GUID that AWS OpsWorks Stacks
     * assigned to the instance when you registered the volume with the stack, not the
     * Amazon EC2 volume ID.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }

    /**
     * <p>The AWS OpsWorks Stacks volume ID, which is the GUID that AWS OpsWorks Stacks
     * assigned to the instance when you registered the volume with the stack, not the
     * Amazon EC2 volume ID.</p>
     */
    inline DeregisterVolumeRequest& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The AWS OpsWorks Stacks volume ID, which is the GUID that AWS OpsWorks Stacks
     * assigned to the instance when you registered the volume with the stack, not the
     * Amazon EC2 volume ID.</p>
     */
    inline DeregisterVolumeRequest& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>The AWS OpsWorks Stacks volume ID, which is the GUID that AWS OpsWorks Stacks
     * assigned to the instance when you registered the volume with the stack, not the
     * Amazon EC2 volume ID.</p>
     */
    inline DeregisterVolumeRequest& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}

  private:

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
