/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * Settings for the action to deactivate the image in a specific layer.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StaticImageOutputDeactivateScheduleActionSettings">AWS
   * API Reference</a></p>
   */
  class StaticImageOutputDeactivateScheduleActionSettings
  {
  public:
    AWS_MEDIALIVE_API StaticImageOutputDeactivateScheduleActionSettings();
    AWS_MEDIALIVE_API StaticImageOutputDeactivateScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API StaticImageOutputDeactivateScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The time in milliseconds for the image to fade out. Default is 0 (no fade-out).
     */
    inline int GetFadeOut() const{ return m_fadeOut; }

    /**
     * The time in milliseconds for the image to fade out. Default is 0 (no fade-out).
     */
    inline bool FadeOutHasBeenSet() const { return m_fadeOutHasBeenSet; }

    /**
     * The time in milliseconds for the image to fade out. Default is 0 (no fade-out).
     */
    inline void SetFadeOut(int value) { m_fadeOutHasBeenSet = true; m_fadeOut = value; }

    /**
     * The time in milliseconds for the image to fade out. Default is 0 (no fade-out).
     */
    inline StaticImageOutputDeactivateScheduleActionSettings& WithFadeOut(int value) { SetFadeOut(value); return *this;}


    /**
     * The image overlay layer to deactivate, 0 to 7. Default is 0.
     */
    inline int GetLayer() const{ return m_layer; }

    /**
     * The image overlay layer to deactivate, 0 to 7. Default is 0.
     */
    inline bool LayerHasBeenSet() const { return m_layerHasBeenSet; }

    /**
     * The image overlay layer to deactivate, 0 to 7. Default is 0.
     */
    inline void SetLayer(int value) { m_layerHasBeenSet = true; m_layer = value; }

    /**
     * The image overlay layer to deactivate, 0 to 7. Default is 0.
     */
    inline StaticImageOutputDeactivateScheduleActionSettings& WithLayer(int value) { SetLayer(value); return *this;}


    /**
     * The name(s) of the output(s) the deactivation should apply to.
     */
    inline const Aws::Vector<Aws::String>& GetOutputNames() const{ return m_outputNames; }

    /**
     * The name(s) of the output(s) the deactivation should apply to.
     */
    inline bool OutputNamesHasBeenSet() const { return m_outputNamesHasBeenSet; }

    /**
     * The name(s) of the output(s) the deactivation should apply to.
     */
    inline void SetOutputNames(const Aws::Vector<Aws::String>& value) { m_outputNamesHasBeenSet = true; m_outputNames = value; }

    /**
     * The name(s) of the output(s) the deactivation should apply to.
     */
    inline void SetOutputNames(Aws::Vector<Aws::String>&& value) { m_outputNamesHasBeenSet = true; m_outputNames = std::move(value); }

    /**
     * The name(s) of the output(s) the deactivation should apply to.
     */
    inline StaticImageOutputDeactivateScheduleActionSettings& WithOutputNames(const Aws::Vector<Aws::String>& value) { SetOutputNames(value); return *this;}

    /**
     * The name(s) of the output(s) the deactivation should apply to.
     */
    inline StaticImageOutputDeactivateScheduleActionSettings& WithOutputNames(Aws::Vector<Aws::String>&& value) { SetOutputNames(std::move(value)); return *this;}

    /**
     * The name(s) of the output(s) the deactivation should apply to.
     */
    inline StaticImageOutputDeactivateScheduleActionSettings& AddOutputNames(const Aws::String& value) { m_outputNamesHasBeenSet = true; m_outputNames.push_back(value); return *this; }

    /**
     * The name(s) of the output(s) the deactivation should apply to.
     */
    inline StaticImageOutputDeactivateScheduleActionSettings& AddOutputNames(Aws::String&& value) { m_outputNamesHasBeenSet = true; m_outputNames.push_back(std::move(value)); return *this; }

    /**
     * The name(s) of the output(s) the deactivation should apply to.
     */
    inline StaticImageOutputDeactivateScheduleActionSettings& AddOutputNames(const char* value) { m_outputNamesHasBeenSet = true; m_outputNames.push_back(value); return *this; }

  private:

    int m_fadeOut;
    bool m_fadeOutHasBeenSet = false;

    int m_layer;
    bool m_layerHasBeenSet = false;

    Aws::Vector<Aws::String> m_outputNames;
    bool m_outputNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
