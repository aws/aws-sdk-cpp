/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Lists iSCSI information about a VTL device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DeviceiSCSIAttributes">AWS
   * API Reference</a></p>
   */
  class DeviceiSCSIAttributes
  {
  public:
    AWS_STORAGEGATEWAY_API DeviceiSCSIAttributes() = default;
    AWS_STORAGEGATEWAY_API DeviceiSCSIAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API DeviceiSCSIAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) that encodes the iSCSI
     * qualified name(iqn) of a tape drive or media changer target.</p>
     */
    inline const Aws::String& GetTargetARN() const { return m_targetARN; }
    inline bool TargetARNHasBeenSet() const { return m_targetARNHasBeenSet; }
    template<typename TargetARNT = Aws::String>
    void SetTargetARN(TargetARNT&& value) { m_targetARNHasBeenSet = true; m_targetARN = std::forward<TargetARNT>(value); }
    template<typename TargetARNT = Aws::String>
    DeviceiSCSIAttributes& WithTargetARN(TargetARNT&& value) { SetTargetARN(std::forward<TargetARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interface identifier of the VTL device.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    template<typename NetworkInterfaceIdT = Aws::String>
    void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value); }
    template<typename NetworkInterfaceIdT = Aws::String>
    DeviceiSCSIAttributes& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) { SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port used to communicate with iSCSI VTL device targets.</p>
     */
    inline int GetNetworkInterfacePort() const { return m_networkInterfacePort; }
    inline bool NetworkInterfacePortHasBeenSet() const { return m_networkInterfacePortHasBeenSet; }
    inline void SetNetworkInterfacePort(int value) { m_networkInterfacePortHasBeenSet = true; m_networkInterfacePort = value; }
    inline DeviceiSCSIAttributes& WithNetworkInterfacePort(int value) { SetNetworkInterfacePort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether mutual CHAP is enabled for the iSCSI target.</p>
     */
    inline bool GetChapEnabled() const { return m_chapEnabled; }
    inline bool ChapEnabledHasBeenSet() const { return m_chapEnabledHasBeenSet; }
    inline void SetChapEnabled(bool value) { m_chapEnabledHasBeenSet = true; m_chapEnabled = value; }
    inline DeviceiSCSIAttributes& WithChapEnabled(bool value) { SetChapEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_targetARN;
    bool m_targetARNHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    int m_networkInterfacePort{0};
    bool m_networkInterfacePortHasBeenSet = false;

    bool m_chapEnabled{false};
    bool m_chapEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
