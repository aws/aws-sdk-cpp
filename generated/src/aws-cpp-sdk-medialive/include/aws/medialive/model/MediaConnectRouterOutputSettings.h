/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/MediaConnectRouterContainerSettings.h>
#include <aws/medialive/model/MediaConnectRouterOutputConnectionMap.h>
#include <aws/medialive/model/OutputLocationRef.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaLive {
namespace Model {

/**
 * Media Connect Router Output Settings<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MediaConnectRouterOutputSettings">AWS
 * API Reference</a></p>
 */
class MediaConnectRouterOutputSettings {
 public:
  AWS_MEDIALIVE_API MediaConnectRouterOutputSettings() = default;
  AWS_MEDIALIVE_API MediaConnectRouterOutputSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API MediaConnectRouterOutputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Shows the MediaConnect Router Inputs that are connected to this output. This
   * parameter is purely informative, and editing it will have no effect. To connect
   * or disconnect MediaConnect Router Inputs, go to MediaConnect.
   */
  inline const MediaConnectRouterOutputConnectionMap& GetConnectedRouterInputs() const { return m_connectedRouterInputs; }
  inline bool ConnectedRouterInputsHasBeenSet() const { return m_connectedRouterInputsHasBeenSet; }
  template <typename ConnectedRouterInputsT = MediaConnectRouterOutputConnectionMap>
  void SetConnectedRouterInputs(ConnectedRouterInputsT&& value) {
    m_connectedRouterInputsHasBeenSet = true;
    m_connectedRouterInputs = std::forward<ConnectedRouterInputsT>(value);
  }
  template <typename ConnectedRouterInputsT = MediaConnectRouterOutputConnectionMap>
  MediaConnectRouterOutputSettings& WithConnectedRouterInputs(ConnectedRouterInputsT&& value) {
    SetConnectedRouterInputs(std::forward<ConnectedRouterInputsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const MediaConnectRouterContainerSettings& GetContainerSettings() const { return m_containerSettings; }
  inline bool ContainerSettingsHasBeenSet() const { return m_containerSettingsHasBeenSet; }
  template <typename ContainerSettingsT = MediaConnectRouterContainerSettings>
  void SetContainerSettings(ContainerSettingsT&& value) {
    m_containerSettingsHasBeenSet = true;
    m_containerSettings = std::forward<ContainerSettingsT>(value);
  }
  template <typename ContainerSettingsT = MediaConnectRouterContainerSettings>
  MediaConnectRouterOutputSettings& WithContainerSettings(ContainerSettingsT&& value) {
    SetContainerSettings(std::forward<ContainerSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * Destination for this MediaConnect Router Output. The referenced
   * OutputDestination must have MediaConnect Router settings configured.
   */
  inline const OutputLocationRef& GetDestination() const { return m_destination; }
  inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
  template <typename DestinationT = OutputLocationRef>
  void SetDestination(DestinationT&& value) {
    m_destinationHasBeenSet = true;
    m_destination = std::forward<DestinationT>(value);
  }
  template <typename DestinationT = OutputLocationRef>
  MediaConnectRouterOutputSettings& WithDestination(DestinationT&& value) {
    SetDestination(std::forward<DestinationT>(value));
    return *this;
  }
  ///@}
 private:
  MediaConnectRouterOutputConnectionMap m_connectedRouterInputs;

  MediaConnectRouterContainerSettings m_containerSettings;

  OutputLocationRef m_destination;
  bool m_connectedRouterInputsHasBeenSet = false;
  bool m_containerSettingsHasBeenSet = false;
  bool m_destinationHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
