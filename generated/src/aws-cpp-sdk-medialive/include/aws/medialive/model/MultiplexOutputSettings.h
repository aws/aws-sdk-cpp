/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/OutputLocationRef.h>
#include <aws/medialive/model/MultiplexContainerSettings.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Multiplex Output Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MultiplexOutputSettings">AWS
   * API Reference</a></p>
   */
  class MultiplexOutputSettings
  {
  public:
    AWS_MEDIALIVE_API MultiplexOutputSettings() = default;
    AWS_MEDIALIVE_API MultiplexOutputSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MultiplexOutputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Destination is a Multiplex.
     */
    inline const OutputLocationRef& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = OutputLocationRef>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = OutputLocationRef>
    MultiplexOutputSettings& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MultiplexContainerSettings& GetContainerSettings() const { return m_containerSettings; }
    inline bool ContainerSettingsHasBeenSet() const { return m_containerSettingsHasBeenSet; }
    template<typename ContainerSettingsT = MultiplexContainerSettings>
    void SetContainerSettings(ContainerSettingsT&& value) { m_containerSettingsHasBeenSet = true; m_containerSettings = std::forward<ContainerSettingsT>(value); }
    template<typename ContainerSettingsT = MultiplexContainerSettings>
    MultiplexOutputSettings& WithContainerSettings(ContainerSettingsT&& value) { SetContainerSettings(std::forward<ContainerSettingsT>(value)); return *this;}
    ///@}
  private:

    OutputLocationRef m_destination;
    bool m_destinationHasBeenSet = false;

    MultiplexContainerSettings m_containerSettings;
    bool m_containerSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
