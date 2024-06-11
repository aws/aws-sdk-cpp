/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>AttachVolumeInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/AttachVolumeInput">AWS
   * API Reference</a></p>
   */
  class AttachVolumeRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API AttachVolumeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AttachVolume"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the gateway that you want to attach the
     * volume to.</p>
     */
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }
    inline AttachVolumeRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}
    inline AttachVolumeRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}
    inline AttachVolumeRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the iSCSI target used by an initiator to connect to a volume and
     * used as a suffix for the target ARN. For example, specifying
     * <code>TargetName</code> as <i>myvolume</i> results in the target ARN of
     * <code>arn:aws:storagegateway:us-east-2:111122223333:gateway/sgw-12A3456B/target/iqn.1997-05.com.amazon:myvolume</code>.
     * The target name must be unique across all volumes on a gateway.</p> <p>If you
     * don't specify a value, Storage Gateway uses the value that was previously used
     * for this volume as the new target name.</p>
     */
    inline const Aws::String& GetTargetName() const{ return m_targetName; }
    inline bool TargetNameHasBeenSet() const { return m_targetNameHasBeenSet; }
    inline void SetTargetName(const Aws::String& value) { m_targetNameHasBeenSet = true; m_targetName = value; }
    inline void SetTargetName(Aws::String&& value) { m_targetNameHasBeenSet = true; m_targetName = std::move(value); }
    inline void SetTargetName(const char* value) { m_targetNameHasBeenSet = true; m_targetName.assign(value); }
    inline AttachVolumeRequest& WithTargetName(const Aws::String& value) { SetTargetName(value); return *this;}
    inline AttachVolumeRequest& WithTargetName(Aws::String&& value) { SetTargetName(std::move(value)); return *this;}
    inline AttachVolumeRequest& WithTargetName(const char* value) { SetTargetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the volume to attach to the specified
     * gateway.</p>
     */
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }
    inline bool VolumeARNHasBeenSet() const { return m_volumeARNHasBeenSet; }
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARNHasBeenSet = true; m_volumeARN = value; }
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARNHasBeenSet = true; m_volumeARN = std::move(value); }
    inline void SetVolumeARN(const char* value) { m_volumeARNHasBeenSet = true; m_volumeARN.assign(value); }
    inline AttachVolumeRequest& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}
    inline AttachVolumeRequest& WithVolumeARN(Aws::String&& value) { SetVolumeARN(std::move(value)); return *this;}
    inline AttachVolumeRequest& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interface of the gateway on which to expose the iSCSI target.
     * Only IPv4 addresses are accepted. Use <a>DescribeGatewayInformation</a> to get a
     * list of the network interfaces available on a gateway.</p> <p>Valid Values: A
     * valid IP address.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }
    inline AttachVolumeRequest& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}
    inline AttachVolumeRequest& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}
    inline AttachVolumeRequest& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique device ID or other distinguishing data that identifies the local
     * disk used to create the volume. This value is only required when you are
     * attaching a stored volume.</p>
     */
    inline const Aws::String& GetDiskId() const{ return m_diskId; }
    inline bool DiskIdHasBeenSet() const { return m_diskIdHasBeenSet; }
    inline void SetDiskId(const Aws::String& value) { m_diskIdHasBeenSet = true; m_diskId = value; }
    inline void SetDiskId(Aws::String&& value) { m_diskIdHasBeenSet = true; m_diskId = std::move(value); }
    inline void SetDiskId(const char* value) { m_diskIdHasBeenSet = true; m_diskId.assign(value); }
    inline AttachVolumeRequest& WithDiskId(const Aws::String& value) { SetDiskId(value); return *this;}
    inline AttachVolumeRequest& WithDiskId(Aws::String&& value) { SetDiskId(std::move(value)); return *this;}
    inline AttachVolumeRequest& WithDiskId(const char* value) { SetDiskId(value); return *this;}
    ///@}
  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    Aws::String m_targetName;
    bool m_targetNameHasBeenSet = false;

    Aws::String m_volumeARN;
    bool m_volumeARNHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::String m_diskId;
    bool m_diskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
