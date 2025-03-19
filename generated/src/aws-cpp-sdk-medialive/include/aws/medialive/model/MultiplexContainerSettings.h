/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/MultiplexM2tsSettings.h>
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
   * Multiplex Container Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MultiplexContainerSettings">AWS
   * API Reference</a></p>
   */
  class MultiplexContainerSettings
  {
  public:
    AWS_MEDIALIVE_API MultiplexContainerSettings() = default;
    AWS_MEDIALIVE_API MultiplexContainerSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MultiplexContainerSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const MultiplexM2tsSettings& GetMultiplexM2tsSettings() const { return m_multiplexM2tsSettings; }
    inline bool MultiplexM2tsSettingsHasBeenSet() const { return m_multiplexM2tsSettingsHasBeenSet; }
    template<typename MultiplexM2tsSettingsT = MultiplexM2tsSettings>
    void SetMultiplexM2tsSettings(MultiplexM2tsSettingsT&& value) { m_multiplexM2tsSettingsHasBeenSet = true; m_multiplexM2tsSettings = std::forward<MultiplexM2tsSettingsT>(value); }
    template<typename MultiplexM2tsSettingsT = MultiplexM2tsSettings>
    MultiplexContainerSettings& WithMultiplexM2tsSettings(MultiplexM2tsSettingsT&& value) { SetMultiplexM2tsSettings(std::forward<MultiplexM2tsSettingsT>(value)); return *this;}
    ///@}
  private:

    MultiplexM2tsSettings m_multiplexM2tsSettings;
    bool m_multiplexM2tsSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
