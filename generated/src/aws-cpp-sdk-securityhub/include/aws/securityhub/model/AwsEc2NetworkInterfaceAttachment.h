/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about the network interface attachment.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2NetworkInterfaceAttachment">AWS
   * API Reference</a></p>
   */
  class AwsEc2NetworkInterfaceAttachment
  {
  public:
    AWS_SECURITYHUB_API AwsEc2NetworkInterfaceAttachment();
    AWS_SECURITYHUB_API AwsEc2NetworkInterfaceAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2NetworkInterfaceAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates when the attachment initiated.</p> <p>For more information about
     * the validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetAttachTime() const{ return m_attachTime; }
    inline bool AttachTimeHasBeenSet() const { return m_attachTimeHasBeenSet; }
    inline void SetAttachTime(const Aws::String& value) { m_attachTimeHasBeenSet = true; m_attachTime = value; }
    inline void SetAttachTime(Aws::String&& value) { m_attachTimeHasBeenSet = true; m_attachTime = std::move(value); }
    inline void SetAttachTime(const char* value) { m_attachTimeHasBeenSet = true; m_attachTime.assign(value); }
    inline AwsEc2NetworkInterfaceAttachment& WithAttachTime(const Aws::String& value) { SetAttachTime(value); return *this;}
    inline AwsEc2NetworkInterfaceAttachment& WithAttachTime(Aws::String&& value) { SetAttachTime(std::move(value)); return *this;}
    inline AwsEc2NetworkInterfaceAttachment& WithAttachTime(const char* value) { SetAttachTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the network interface attachment</p>
     */
    inline const Aws::String& GetAttachmentId() const{ return m_attachmentId; }
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
    inline void SetAttachmentId(const Aws::String& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = value; }
    inline void SetAttachmentId(Aws::String&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::move(value); }
    inline void SetAttachmentId(const char* value) { m_attachmentIdHasBeenSet = true; m_attachmentId.assign(value); }
    inline AwsEc2NetworkInterfaceAttachment& WithAttachmentId(const Aws::String& value) { SetAttachmentId(value); return *this;}
    inline AwsEc2NetworkInterfaceAttachment& WithAttachmentId(Aws::String&& value) { SetAttachmentId(std::move(value)); return *this;}
    inline AwsEc2NetworkInterfaceAttachment& WithAttachmentId(const char* value) { SetAttachmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the network interface is deleted when the instance is
     * terminated.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }
    inline AwsEc2NetworkInterfaceAttachment& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device index of the network interface attachment on the instance.</p>
     */
    inline int GetDeviceIndex() const{ return m_deviceIndex; }
    inline bool DeviceIndexHasBeenSet() const { return m_deviceIndexHasBeenSet; }
    inline void SetDeviceIndex(int value) { m_deviceIndexHasBeenSet = true; m_deviceIndex = value; }
    inline AwsEc2NetworkInterfaceAttachment& WithDeviceIndex(int value) { SetDeviceIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline AwsEc2NetworkInterfaceAttachment& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline AwsEc2NetworkInterfaceAttachment& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline AwsEc2NetworkInterfaceAttachment& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the owner of the instance.</p>
     */
    inline const Aws::String& GetInstanceOwnerId() const{ return m_instanceOwnerId; }
    inline bool InstanceOwnerIdHasBeenSet() const { return m_instanceOwnerIdHasBeenSet; }
    inline void SetInstanceOwnerId(const Aws::String& value) { m_instanceOwnerIdHasBeenSet = true; m_instanceOwnerId = value; }
    inline void SetInstanceOwnerId(Aws::String&& value) { m_instanceOwnerIdHasBeenSet = true; m_instanceOwnerId = std::move(value); }
    inline void SetInstanceOwnerId(const char* value) { m_instanceOwnerIdHasBeenSet = true; m_instanceOwnerId.assign(value); }
    inline AwsEc2NetworkInterfaceAttachment& WithInstanceOwnerId(const Aws::String& value) { SetInstanceOwnerId(value); return *this;}
    inline AwsEc2NetworkInterfaceAttachment& WithInstanceOwnerId(Aws::String&& value) { SetInstanceOwnerId(std::move(value)); return *this;}
    inline AwsEc2NetworkInterfaceAttachment& WithInstanceOwnerId(const char* value) { SetInstanceOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attachment state.</p> <p>Valid values: <code>attaching</code> |
     * <code>attached</code> | <code>detaching</code> | <code>detached</code> </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline AwsEc2NetworkInterfaceAttachment& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline AwsEc2NetworkInterfaceAttachment& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline AwsEc2NetworkInterfaceAttachment& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_attachTime;
    bool m_attachTimeHasBeenSet = false;

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;

    bool m_deleteOnTermination;
    bool m_deleteOnTerminationHasBeenSet = false;

    int m_deviceIndex;
    bool m_deviceIndexHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_instanceOwnerId;
    bool m_instanceOwnerIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
