/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/MultiplexStatmuxVideoSettings.h>
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
   * The video configuration for each program in a multiplex.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MultiplexVideoSettings">AWS
   * API Reference</a></p>
   */
  class MultiplexVideoSettings
  {
  public:
    AWS_MEDIALIVE_API MultiplexVideoSettings();
    AWS_MEDIALIVE_API MultiplexVideoSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MultiplexVideoSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The constant bitrate configuration for the video encode.
When this field is
     * defined, StatmuxSettings must be undefined.
     */
    inline int GetConstantBitrate() const{ return m_constantBitrate; }

    /**
     * The constant bitrate configuration for the video encode.
When this field is
     * defined, StatmuxSettings must be undefined.
     */
    inline bool ConstantBitrateHasBeenSet() const { return m_constantBitrateHasBeenSet; }

    /**
     * The constant bitrate configuration for the video encode.
When this field is
     * defined, StatmuxSettings must be undefined.
     */
    inline void SetConstantBitrate(int value) { m_constantBitrateHasBeenSet = true; m_constantBitrate = value; }

    /**
     * The constant bitrate configuration for the video encode.
When this field is
     * defined, StatmuxSettings must be undefined.
     */
    inline MultiplexVideoSettings& WithConstantBitrate(int value) { SetConstantBitrate(value); return *this;}


    /**
     * Statmux rate control settings.
When this field is defined, ConstantBitrate must
     * be undefined.
     */
    inline const MultiplexStatmuxVideoSettings& GetStatmuxSettings() const{ return m_statmuxSettings; }

    /**
     * Statmux rate control settings.
When this field is defined, ConstantBitrate must
     * be undefined.
     */
    inline bool StatmuxSettingsHasBeenSet() const { return m_statmuxSettingsHasBeenSet; }

    /**
     * Statmux rate control settings.
When this field is defined, ConstantBitrate must
     * be undefined.
     */
    inline void SetStatmuxSettings(const MultiplexStatmuxVideoSettings& value) { m_statmuxSettingsHasBeenSet = true; m_statmuxSettings = value; }

    /**
     * Statmux rate control settings.
When this field is defined, ConstantBitrate must
     * be undefined.
     */
    inline void SetStatmuxSettings(MultiplexStatmuxVideoSettings&& value) { m_statmuxSettingsHasBeenSet = true; m_statmuxSettings = std::move(value); }

    /**
     * Statmux rate control settings.
When this field is defined, ConstantBitrate must
     * be undefined.
     */
    inline MultiplexVideoSettings& WithStatmuxSettings(const MultiplexStatmuxVideoSettings& value) { SetStatmuxSettings(value); return *this;}

    /**
     * Statmux rate control settings.
When this field is defined, ConstantBitrate must
     * be undefined.
     */
    inline MultiplexVideoSettings& WithStatmuxSettings(MultiplexStatmuxVideoSettings&& value) { SetStatmuxSettings(std::move(value)); return *this;}

  private:

    int m_constantBitrate;
    bool m_constantBitrateHasBeenSet = false;

    MultiplexStatmuxVideoSettings m_statmuxSettings;
    bool m_statmuxSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
