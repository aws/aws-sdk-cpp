/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Use audio selector groups to combine multiple sidecar audio inputs so that you
   * can assign them to a single output audio tab (AudioDescription). Note that, if
   * you're working with embedded audio, it's simpler to assign multiple input tracks
   * into a single audio selector rather than use an audio selector group.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AudioSelectorGroup">AWS
   * API Reference</a></p>
   */
  class AudioSelectorGroup
  {
  public:
    AWS_MEDIACONVERT_API AudioSelectorGroup();
    AWS_MEDIACONVERT_API AudioSelectorGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API AudioSelectorGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Name of an Audio Selector within the same input to include in the group.  Audio
     * selector names are standardized, based on their order within the input (e.g.,
     * "Audio Selector 1"). The audio selector name parameter can be repeated to add
     * any number of audio selectors to the group.
     */
    inline const Aws::Vector<Aws::String>& GetAudioSelectorNames() const{ return m_audioSelectorNames; }

    /**
     * Name of an Audio Selector within the same input to include in the group.  Audio
     * selector names are standardized, based on their order within the input (e.g.,
     * "Audio Selector 1"). The audio selector name parameter can be repeated to add
     * any number of audio selectors to the group.
     */
    inline bool AudioSelectorNamesHasBeenSet() const { return m_audioSelectorNamesHasBeenSet; }

    /**
     * Name of an Audio Selector within the same input to include in the group.  Audio
     * selector names are standardized, based on their order within the input (e.g.,
     * "Audio Selector 1"). The audio selector name parameter can be repeated to add
     * any number of audio selectors to the group.
     */
    inline void SetAudioSelectorNames(const Aws::Vector<Aws::String>& value) { m_audioSelectorNamesHasBeenSet = true; m_audioSelectorNames = value; }

    /**
     * Name of an Audio Selector within the same input to include in the group.  Audio
     * selector names are standardized, based on their order within the input (e.g.,
     * "Audio Selector 1"). The audio selector name parameter can be repeated to add
     * any number of audio selectors to the group.
     */
    inline void SetAudioSelectorNames(Aws::Vector<Aws::String>&& value) { m_audioSelectorNamesHasBeenSet = true; m_audioSelectorNames = std::move(value); }

    /**
     * Name of an Audio Selector within the same input to include in the group.  Audio
     * selector names are standardized, based on their order within the input (e.g.,
     * "Audio Selector 1"). The audio selector name parameter can be repeated to add
     * any number of audio selectors to the group.
     */
    inline AudioSelectorGroup& WithAudioSelectorNames(const Aws::Vector<Aws::String>& value) { SetAudioSelectorNames(value); return *this;}

    /**
     * Name of an Audio Selector within the same input to include in the group.  Audio
     * selector names are standardized, based on their order within the input (e.g.,
     * "Audio Selector 1"). The audio selector name parameter can be repeated to add
     * any number of audio selectors to the group.
     */
    inline AudioSelectorGroup& WithAudioSelectorNames(Aws::Vector<Aws::String>&& value) { SetAudioSelectorNames(std::move(value)); return *this;}

    /**
     * Name of an Audio Selector within the same input to include in the group.  Audio
     * selector names are standardized, based on their order within the input (e.g.,
     * "Audio Selector 1"). The audio selector name parameter can be repeated to add
     * any number of audio selectors to the group.
     */
    inline AudioSelectorGroup& AddAudioSelectorNames(const Aws::String& value) { m_audioSelectorNamesHasBeenSet = true; m_audioSelectorNames.push_back(value); return *this; }

    /**
     * Name of an Audio Selector within the same input to include in the group.  Audio
     * selector names are standardized, based on their order within the input (e.g.,
     * "Audio Selector 1"). The audio selector name parameter can be repeated to add
     * any number of audio selectors to the group.
     */
    inline AudioSelectorGroup& AddAudioSelectorNames(Aws::String&& value) { m_audioSelectorNamesHasBeenSet = true; m_audioSelectorNames.push_back(std::move(value)); return *this; }

    /**
     * Name of an Audio Selector within the same input to include in the group.  Audio
     * selector names are standardized, based on their order within the input (e.g.,
     * "Audio Selector 1"). The audio selector name parameter can be repeated to add
     * any number of audio selectors to the group.
     */
    inline AudioSelectorGroup& AddAudioSelectorNames(const char* value) { m_audioSelectorNamesHasBeenSet = true; m_audioSelectorNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_audioSelectorNames;
    bool m_audioSelectorNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
