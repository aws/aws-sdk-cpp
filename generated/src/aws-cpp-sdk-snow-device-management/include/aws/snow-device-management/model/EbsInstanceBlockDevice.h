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


    /**
     * <p>When the attachment was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetAttachTime() const{ return m_attachTime; }

    /**
     * <p>When the attachment was initiated.</p>
     */
    inline bool AttachTimeHasBeenSet() const { return m_attachTimeHasBeenSet; }

    /**
     * <p>When the attachment was initiated.</p>
     */
    inline void SetAttachTime(const Aws::Utils::DateTime& value) { m_attachTimeHasBeenSet = true; m_attachTime = value; }

    /**
     * <p>When the attachment was initiated.</p>
     */
    inline void SetAttachTime(Aws::Utils::DateTime&& value) { m_attachTimeHasBeenSet = true; m_attachTime = std::move(value); }

    /**
     * <p>When the attachment was initiated.</p>
     */
    inline EbsInstanceBlockDevice& WithAttachTime(const Aws::Utils::DateTime& value) { SetAttachTime(value); return *this;}

    /**
     * <p>When the attachment was initiated.</p>
     */
    inline EbsInstanceBlockDevice& WithAttachTime(Aws::Utils::DateTime&& value) { SetAttachTime(std::move(value)); return *this;}


    /**
     * <p>A value that indicates whether the volume is deleted on instance
     * termination.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }

    /**
     * <p>A value that indicates whether the volume is deleted on instance
     * termination.</p>
     */
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }

    /**
     * <p>A value that indicates whether the volume is deleted on instance
     * termination.</p>
     */
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }

    /**
     * <p>A value that indicates whether the volume is deleted on instance
     * termination.</p>
     */
    inline EbsInstanceBlockDevice& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}


    /**
     * <p>The attachment state.</p>
     */
    inline const AttachmentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The attachment state.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The attachment state.</p>
     */
    inline void SetStatus(const AttachmentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The attachment state.</p>
     */
    inline void SetStatus(AttachmentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The attachment state.</p>
     */
    inline EbsInstanceBlockDevice& WithStatus(const AttachmentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The attachment state.</p>
     */
    inline EbsInstanceBlockDevice& WithStatus(AttachmentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The ID of the Amazon EBS volume.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>The ID of the Amazon EBS volume.</p>
     */
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon EBS volume.</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    /**
     * <p>The ID of the Amazon EBS volume.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }

    /**
     * <p>The ID of the Amazon EBS volume.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }

    /**
     * <p>The ID of the Amazon EBS volume.</p>
     */
    inline EbsInstanceBlockDevice& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The ID of the Amazon EBS volume.</p>
     */
    inline EbsInstanceBlockDevice& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon EBS volume.</p>
     */
    inline EbsInstanceBlockDevice& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}

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
