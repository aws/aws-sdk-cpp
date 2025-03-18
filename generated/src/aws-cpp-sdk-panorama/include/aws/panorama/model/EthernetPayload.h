/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/model/ConnectionType.h>
#include <aws/panorama/model/StaticIpConnectionInfo.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>A device's network configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/EthernetPayload">AWS
   * API Reference</a></p>
   */
  class EthernetPayload
  {
  public:
    AWS_PANORAMA_API EthernetPayload() = default;
    AWS_PANORAMA_API EthernetPayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API EthernetPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>How the device gets an IP address.</p>
     */
    inline ConnectionType GetConnectionType() const { return m_connectionType; }
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
    inline void SetConnectionType(ConnectionType value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }
    inline EthernetPayload& WithConnectionType(ConnectionType value) { SetConnectionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network configuration for a static IP connection.</p>
     */
    inline const StaticIpConnectionInfo& GetStaticIpConnectionInfo() const { return m_staticIpConnectionInfo; }
    inline bool StaticIpConnectionInfoHasBeenSet() const { return m_staticIpConnectionInfoHasBeenSet; }
    template<typename StaticIpConnectionInfoT = StaticIpConnectionInfo>
    void SetStaticIpConnectionInfo(StaticIpConnectionInfoT&& value) { m_staticIpConnectionInfoHasBeenSet = true; m_staticIpConnectionInfo = std::forward<StaticIpConnectionInfoT>(value); }
    template<typename StaticIpConnectionInfoT = StaticIpConnectionInfo>
    EthernetPayload& WithStaticIpConnectionInfo(StaticIpConnectionInfoT&& value) { SetStaticIpConnectionInfo(std::forward<StaticIpConnectionInfoT>(value)); return *this;}
    ///@}
  private:

    ConnectionType m_connectionType{ConnectionType::NOT_SET};
    bool m_connectionTypeHasBeenSet = false;

    StaticIpConnectionInfo m_staticIpConnectionInfo;
    bool m_staticIpConnectionInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
