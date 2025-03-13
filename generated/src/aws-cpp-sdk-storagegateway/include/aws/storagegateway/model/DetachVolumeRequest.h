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
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DetachVolumeInput">AWS
   * API Reference</a></p>
   */
  class DetachVolumeRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API DetachVolumeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetachVolume"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the volume to detach from the gateway.</p>
     */
    inline const Aws::String& GetVolumeARN() const { return m_volumeARN; }
    inline bool VolumeARNHasBeenSet() const { return m_volumeARNHasBeenSet; }
    template<typename VolumeARNT = Aws::String>
    void SetVolumeARN(VolumeARNT&& value) { m_volumeARNHasBeenSet = true; m_volumeARN = std::forward<VolumeARNT>(value); }
    template<typename VolumeARNT = Aws::String>
    DetachVolumeRequest& WithVolumeARN(VolumeARNT&& value) { SetVolumeARN(std::forward<VolumeARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>true</code> to forcibly remove the iSCSI connection of the
     * target volume and detach the volume. The default is <code>false</code>. If this
     * value is set to <code>false</code>, you must manually disconnect the iSCSI
     * connection from the target volume.</p> <p>Valid Values: <code>true</code> |
     * <code>false</code> </p>
     */
    inline bool GetForceDetach() const { return m_forceDetach; }
    inline bool ForceDetachHasBeenSet() const { return m_forceDetachHasBeenSet; }
    inline void SetForceDetach(bool value) { m_forceDetachHasBeenSet = true; m_forceDetach = value; }
    inline DetachVolumeRequest& WithForceDetach(bool value) { SetForceDetach(value); return *this;}
    ///@}
  private:

    Aws::String m_volumeARN;
    bool m_volumeARNHasBeenSet = false;

    bool m_forceDetach{false};
    bool m_forceDetachHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
