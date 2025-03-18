/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/HtmlMotionGraphicsSettings.h>
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
   * Motion Graphics Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MotionGraphicsSettings">AWS
   * API Reference</a></p>
   */
  class MotionGraphicsSettings
  {
  public:
    AWS_MEDIALIVE_API MotionGraphicsSettings() = default;
    AWS_MEDIALIVE_API MotionGraphicsSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MotionGraphicsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const HtmlMotionGraphicsSettings& GetHtmlMotionGraphicsSettings() const { return m_htmlMotionGraphicsSettings; }
    inline bool HtmlMotionGraphicsSettingsHasBeenSet() const { return m_htmlMotionGraphicsSettingsHasBeenSet; }
    template<typename HtmlMotionGraphicsSettingsT = HtmlMotionGraphicsSettings>
    void SetHtmlMotionGraphicsSettings(HtmlMotionGraphicsSettingsT&& value) { m_htmlMotionGraphicsSettingsHasBeenSet = true; m_htmlMotionGraphicsSettings = std::forward<HtmlMotionGraphicsSettingsT>(value); }
    template<typename HtmlMotionGraphicsSettingsT = HtmlMotionGraphicsSettings>
    MotionGraphicsSettings& WithHtmlMotionGraphicsSettings(HtmlMotionGraphicsSettingsT&& value) { SetHtmlMotionGraphicsSettings(std::forward<HtmlMotionGraphicsSettingsT>(value)); return *this;}
    ///@}
  private:

    HtmlMotionGraphicsSettings m_htmlMotionGraphicsSettings;
    bool m_htmlMotionGraphicsSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
