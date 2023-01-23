/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/WebvttDestinationStyleControl.h>
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
   * Webvtt Destination Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/WebvttDestinationSettings">AWS
   * API Reference</a></p>
   */
  class WebvttDestinationSettings
  {
  public:
    AWS_MEDIALIVE_API WebvttDestinationSettings();
    AWS_MEDIALIVE_API WebvttDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API WebvttDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Controls whether the color and position of the source captions is passed through
     * to the WebVTT output captions.  PASSTHROUGH - Valid only if the source captions
     * are EMBEDDED or TELETEXT.  NO_STYLE_DATA - Don't pass through the style. The
     * output captions will not contain any font styling information.
     */
    inline const WebvttDestinationStyleControl& GetStyleControl() const{ return m_styleControl; }

    /**
     * Controls whether the color and position of the source captions is passed through
     * to the WebVTT output captions.  PASSTHROUGH - Valid only if the source captions
     * are EMBEDDED or TELETEXT.  NO_STYLE_DATA - Don't pass through the style. The
     * output captions will not contain any font styling information.
     */
    inline bool StyleControlHasBeenSet() const { return m_styleControlHasBeenSet; }

    /**
     * Controls whether the color and position of the source captions is passed through
     * to the WebVTT output captions.  PASSTHROUGH - Valid only if the source captions
     * are EMBEDDED or TELETEXT.  NO_STYLE_DATA - Don't pass through the style. The
     * output captions will not contain any font styling information.
     */
    inline void SetStyleControl(const WebvttDestinationStyleControl& value) { m_styleControlHasBeenSet = true; m_styleControl = value; }

    /**
     * Controls whether the color and position of the source captions is passed through
     * to the WebVTT output captions.  PASSTHROUGH - Valid only if the source captions
     * are EMBEDDED or TELETEXT.  NO_STYLE_DATA - Don't pass through the style. The
     * output captions will not contain any font styling information.
     */
    inline void SetStyleControl(WebvttDestinationStyleControl&& value) { m_styleControlHasBeenSet = true; m_styleControl = std::move(value); }

    /**
     * Controls whether the color and position of the source captions is passed through
     * to the WebVTT output captions.  PASSTHROUGH - Valid only if the source captions
     * are EMBEDDED or TELETEXT.  NO_STYLE_DATA - Don't pass through the style. The
     * output captions will not contain any font styling information.
     */
    inline WebvttDestinationSettings& WithStyleControl(const WebvttDestinationStyleControl& value) { SetStyleControl(value); return *this;}

    /**
     * Controls whether the color and position of the source captions is passed through
     * to the WebVTT output captions.  PASSTHROUGH - Valid only if the source captions
     * are EMBEDDED or TELETEXT.  NO_STYLE_DATA - Don't pass through the style. The
     * output captions will not contain any font styling information.
     */
    inline WebvttDestinationSettings& WithStyleControl(WebvttDestinationStyleControl&& value) { SetStyleControl(std::move(value)); return *this;}

  private:

    WebvttDestinationStyleControl m_styleControl;
    bool m_styleControlHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
