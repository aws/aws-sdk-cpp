/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/snow-device-management/model/AttachmentStatus.h>
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
namespace SnowDeviceManagement
{
namespace Model
{

  /**
   * <p>Describes a parameter used to set up an Amazon Elastic Block Store (Amazon
   * EBS) volume in a block device mapping.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/EbsInstanceBlockDevice">AWS
   * API Reference</a></p>
   */
  class EbsInstanceBlockDevice
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API EbsInstanceBlockDevice();
    AWS_SNOWDEVICEMANAGEMENT_API EbsInstanceBlockDevice(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API EbsInstanceBlockDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>When the attachment was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetAttachTime() const{ return m_attachTime; }
    inline bool AttachTimeHasBeenSet() const { return m_attachTimeHasBeenSet; }
    inline void SetAttachTime(const Aws::Utils::DateTime& value) { m_attachTimeHasBeenSet = true; m_attachTime = value; }
    inline void SetAttachTime(Aws::Utils::DateTime&& value) { m_attachTimeHasBeenSet = true; m_attachTime = std::move(value); }
    inline EbsInstanceBlockDevice& WithAttachTime(const Aws::Utils::DateTime& value) { SetAttachTime(value); return *this;}
    inline EbsInstanceBlockDevice& WithAttachTime(Aws::Utils::DateTime&& value) { SetAttachTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether the volume is deleted on instance
     * termination.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }
    inline EbsInstanceBlockDevice& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attachment state.</p>
     */
    inline const AttachmentStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AttachmentStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AttachmentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline EbsInstanceBlockDevice& WithStatus(const AttachmentStatus& value) { SetStatus(value); return *this;}
    inline EbsInstanceBlockDevice& WithStatus(AttachmentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon EBS volume.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }
    inline EbsInstanceBlockDevice& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}
    inline EbsInstanceBlockDevice& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}
    inline EbsInstanceBlockDevice& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_attachTime;
    bool m_attachTimeHasBeenSet = false;

    bool m_deleteOnTermination;
    bool m_deleteOnTerminationHasBeenSet = false;

    AttachmentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
