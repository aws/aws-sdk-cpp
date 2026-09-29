/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/ClientSideBeaconingConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaTailor {
namespace Model {

/**
 * <p>The beaconing configuration for a playback configuration. Beaconing controls
 * whether MediaTailor includes its own beacons in the ad tracking response, in
 * addition to the ad server beacons.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/BeaconingConfiguration">AWS
 * API Reference</a></p>
 */
class BeaconingConfiguration {
 public:
  AWS_MEDIATAILOR_API BeaconingConfiguration() = default;
  AWS_MEDIATAILOR_API BeaconingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API BeaconingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The beaconing settings for client-side reporting sessions. If you omit this
   * object, MediaTailor uses <code>INSIGHTS</code> reporting mode.</p>
   */
  inline const ClientSideBeaconingConfiguration& GetClientSide() const { return m_clientSide; }
  inline bool ClientSideHasBeenSet() const { return m_clientSideHasBeenSet; }
  template <typename ClientSideT = ClientSideBeaconingConfiguration>
  void SetClientSide(ClientSideT&& value) {
    m_clientSideHasBeenSet = true;
    m_clientSide = std::forward<ClientSideT>(value);
  }
  template <typename ClientSideT = ClientSideBeaconingConfiguration>
  BeaconingConfiguration& WithClientSide(ClientSideT&& value) {
    SetClientSide(std::forward<ClientSideT>(value));
    return *this;
  }
  ///@}
 private:
  ClientSideBeaconingConfiguration m_clientSide;
  bool m_clientSideHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
