/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/MultiplexMediaConnectOutputDestinationSettings.h>
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
   * Multiplex output destination settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MultiplexOutputDestination">AWS
   * API Reference</a></p>
   */
  class MultiplexOutputDestination
  {
  public:
    AWS_MEDIALIVE_API MultiplexOutputDestination();
    AWS_MEDIALIVE_API MultiplexOutputDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MultiplexOutputDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Multiplex MediaConnect output destination settings.
     */
    inline const MultiplexMediaConnectOutputDestinationSettings& GetMediaConnectSettings() const{ return m_mediaConnectSettings; }

    /**
     * Multiplex MediaConnect output destination settings.
     */
    inline bool MediaConnectSettingsHasBeenSet() const { return m_mediaConnectSettingsHasBeenSet; }

    /**
     * Multiplex MediaConnect output destination settings.
     */
    inline void SetMediaConnectSettings(const MultiplexMediaConnectOutputDestinationSettings& value) { m_mediaConnectSettingsHasBeenSet = true; m_mediaConnectSettings = value; }

    /**
     * Multiplex MediaConnect output destination settings.
     */
    inline void SetMediaConnectSettings(MultiplexMediaConnectOutputDestinationSettings&& value) { m_mediaConnectSettingsHasBeenSet = true; m_mediaConnectSettings = std::move(value); }

    /**
     * Multiplex MediaConnect output destination settings.
     */
    inline MultiplexOutputDestination& WithMediaConnectSettings(const MultiplexMediaConnectOutputDestinationSettings& value) { SetMediaConnectSettings(value); return *this;}

    /**
     * Multiplex MediaConnect output destination settings.
     */
    inline MultiplexOutputDestination& WithMediaConnectSettings(MultiplexMediaConnectOutputDestinationSettings&& value) { SetMediaConnectSettings(std::move(value)); return *this;}

  private:

    MultiplexMediaConnectOutputDestinationSettings m_mediaConnectSettings;
    bool m_mediaConnectSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
