/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/model/WirelessConnection.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Snowball {
namespace Model {

/**
 * <p>Specifies the device configuration for an Snowball Edge job.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/SnowconeDeviceConfiguration">AWS
 * API Reference</a></p>
 */
class SnowconeDeviceConfiguration {
 public:
  AWS_SNOWBALL_API SnowconeDeviceConfiguration() = default;
  AWS_SNOWBALL_API SnowconeDeviceConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SNOWBALL_API SnowconeDeviceConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SNOWBALL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Configures the wireless connection for the Snowball Edge device.</p>
   */
  inline const WirelessConnection& GetWirelessConnection() const { return m_wirelessConnection; }
  inline bool WirelessConnectionHasBeenSet() const { return m_wirelessConnectionHasBeenSet; }
  template <typename WirelessConnectionT = WirelessConnection>
  void SetWirelessConnection(WirelessConnectionT&& value) {
    m_wirelessConnectionHasBeenSet = true;
    m_wirelessConnection = std::forward<WirelessConnectionT>(value);
  }
  template <typename WirelessConnectionT = WirelessConnection>
  SnowconeDeviceConfiguration& WithWirelessConnection(WirelessConnectionT&& value) {
    SetWirelessConnection(std::forward<WirelessConnectionT>(value));
    return *this;
  }
  ///@}
 private:
  WirelessConnection m_wirelessConnection;
  bool m_wirelessConnectionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Snowball
}  // namespace Aws
