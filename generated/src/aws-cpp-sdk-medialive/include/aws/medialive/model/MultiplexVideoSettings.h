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
    AWS_MEDIALIVE_API MultiplexVideoSettings() = default;
    AWS_MEDIALIVE_API MultiplexVideoSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MultiplexVideoSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The constant bitrate configuration for the video encode.
When this field is
     * defined, StatmuxSettings must be undefined.
     */
    inline int GetConstantBitrate() const { return m_constantBitrate; }
    inline bool ConstantBitrateHasBeenSet() const { return m_constantBitrateHasBeenSet; }
    inline void SetConstantBitrate(int value) { m_constantBitrateHasBeenSet = true; m_constantBitrate = value; }
    inline MultiplexVideoSettings& WithConstantBitrate(int value) { SetConstantBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * Statmux rate control settings.
When this field is defined, ConstantBitrate must
     * be undefined.
     */
    inline const MultiplexStatmuxVideoSettings& GetStatmuxSettings() const { return m_statmuxSettings; }
    inline bool StatmuxSettingsHasBeenSet() const { return m_statmuxSettingsHasBeenSet; }
    template<typename StatmuxSettingsT = MultiplexStatmuxVideoSettings>
    void SetStatmuxSettings(StatmuxSettingsT&& value) { m_statmuxSettingsHasBeenSet = true; m_statmuxSettings = std::forward<StatmuxSettingsT>(value); }
    template<typename StatmuxSettingsT = MultiplexStatmuxVideoSettings>
    MultiplexVideoSettings& WithStatmuxSettings(StatmuxSettingsT&& value) { SetStatmuxSettings(std::forward<StatmuxSettingsT>(value)); return *this;}
    ///@}
  private:

    int m_constantBitrate{0};
    bool m_constantBitrateHasBeenSet = false;

    MultiplexStatmuxVideoSettings m_statmuxSettings;
    bool m_statmuxSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
