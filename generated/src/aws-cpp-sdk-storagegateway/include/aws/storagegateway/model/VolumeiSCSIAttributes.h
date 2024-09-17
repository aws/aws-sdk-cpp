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
   * <p>Lists iSCSI information about a volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/VolumeiSCSIAttributes">AWS
   * API Reference</a></p>
   */
  class VolumeiSCSIAttributes
  {
  public:
    AWS_STORAGEGATEWAY_API VolumeiSCSIAttributes();
    AWS_STORAGEGATEWAY_API VolumeiSCSIAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API VolumeiSCSIAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the volume target.</p>
     */
    inline const Aws::String& GetTargetARN() const{ return m_targetARN; }
    inline bool TargetARNHasBeenSet() const { return m_targetARNHasBeenSet; }
    inline void SetTargetARN(const Aws::String& value) { m_targetARNHasBeenSet = true; m_targetARN = value; }
    inline void SetTargetARN(Aws::String&& value) { m_targetARNHasBeenSet = true; m_targetARN = std::move(value); }
    inline void SetTargetARN(const char* value) { m_targetARNHasBeenSet = true; m_targetARN.assign(value); }
    inline VolumeiSCSIAttributes& WithTargetARN(const Aws::String& value) { SetTargetARN(value); return *this;}
    inline VolumeiSCSIAttributes& WithTargetARN(Aws::String&& value) { SetTargetARN(std::move(value)); return *this;}
    inline VolumeiSCSIAttributes& WithTargetARN(const char* value) { SetTargetARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interface identifier.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }
    inline VolumeiSCSIAttributes& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}
    inline VolumeiSCSIAttributes& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}
    inline VolumeiSCSIAttributes& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port used to communicate with iSCSI targets.</p>
     */
    inline int GetNetworkInterfacePort() const{ return m_networkInterfacePort; }
    inline bool NetworkInterfacePortHasBeenSet() const { return m_networkInterfacePortHasBeenSet; }
    inline void SetNetworkInterfacePort(int value) { m_networkInterfacePortHasBeenSet = true; m_networkInterfacePort = value; }
    inline VolumeiSCSIAttributes& WithNetworkInterfacePort(int value) { SetNetworkInterfacePort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logical disk number.</p>
     */
    inline int GetLunNumber() const{ return m_lunNumber; }
    inline bool LunNumberHasBeenSet() const { return m_lunNumberHasBeenSet; }
    inline void SetLunNumber(int value) { m_lunNumberHasBeenSet = true; m_lunNumber = value; }
    inline VolumeiSCSIAttributes& WithLunNumber(int value) { SetLunNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether mutual CHAP is enabled for the iSCSI target.</p>
     */
    inline bool GetChapEnabled() const{ return m_chapEnabled; }
    inline bool ChapEnabledHasBeenSet() const { return m_chapEnabledHasBeenSet; }
    inline void SetChapEnabled(bool value) { m_chapEnabledHasBeenSet = true; m_chapEnabled = value; }
    inline VolumeiSCSIAttributes& WithChapEnabled(bool value) { SetChapEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_targetARN;
    bool m_targetARNHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    int m_networkInterfacePort;
    bool m_networkInterfacePortHasBeenSet = false;

    int m_lunNumber;
    bool m_lunNumberHasBeenSet = false;

    bool m_chapEnabled;
    bool m_chapEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
