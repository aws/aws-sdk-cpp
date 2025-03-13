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
    AWS_MEDIALIVE_API StaticImageOutputDeactivateScheduleActionSettings() = default;
    AWS_MEDIALIVE_API StaticImageOutputDeactivateScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API StaticImageOutputDeactivateScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The time in milliseconds for the image to fade out. Default is 0 (no fade-out).
     */
    inline int GetFadeOut() const { return m_fadeOut; }
    inline bool FadeOutHasBeenSet() const { return m_fadeOutHasBeenSet; }
    inline void SetFadeOut(int value) { m_fadeOutHasBeenSet = true; m_fadeOut = value; }
    inline StaticImageOutputDeactivateScheduleActionSettings& WithFadeOut(int value) { SetFadeOut(value); return *this;}
    ///@}

    ///@{
    /**
     * The image overlay layer to deactivate, 0 to 7. Default is 0.
     */
    inline int GetLayer() const { return m_layer; }
    inline bool LayerHasBeenSet() const { return m_layerHasBeenSet; }
    inline void SetLayer(int value) { m_layerHasBeenSet = true; m_layer = value; }
    inline StaticImageOutputDeactivateScheduleActionSettings& WithLayer(int value) { SetLayer(value); return *this;}
    ///@}

    ///@{
    /**
     * The name(s) of the output(s) the deactivation should apply to.
     */
    inline const Aws::Vector<Aws::String>& GetOutputNames() const { return m_outputNames; }
    inline bool OutputNamesHasBeenSet() const { return m_outputNamesHasBeenSet; }
    template<typename OutputNamesT = Aws::Vector<Aws::String>>
    void SetOutputNames(OutputNamesT&& value) { m_outputNamesHasBeenSet = true; m_outputNames = std::forward<OutputNamesT>(value); }
    template<typename OutputNamesT = Aws::Vector<Aws::String>>
    StaticImageOutputDeactivateScheduleActionSettings& WithOutputNames(OutputNamesT&& value) { SetOutputNames(std::forward<OutputNamesT>(value)); return *this;}
    template<typename OutputNamesT = Aws::String>
    StaticImageOutputDeactivateScheduleActionSettings& AddOutputNames(OutputNamesT&& value) { m_outputNamesHasBeenSet = true; m_outputNames.emplace_back(std::forward<OutputNamesT>(value)); return *this; }
    ///@}
  private:

    int m_fadeOut{0};
    bool m_fadeOutHasBeenSet = false;

    int m_layer{0};
    bool m_layerHasBeenSet = false;

    Aws::Vector<Aws::String> m_outputNames;
    bool m_outputNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
