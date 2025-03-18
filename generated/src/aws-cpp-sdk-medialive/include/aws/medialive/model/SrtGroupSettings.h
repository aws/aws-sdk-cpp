/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/InputLossActionForUdpOut.h>
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
   * Srt Group Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/SrtGroupSettings">AWS
   * API Reference</a></p>
   */
  class SrtGroupSettings
  {
  public:
    AWS_MEDIALIVE_API SrtGroupSettings() = default;
    AWS_MEDIALIVE_API SrtGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API SrtGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specifies behavior of last resort when input video is lost, and no more backup
     * inputs are available. When dropTs is selected the entire transport stream will
     * stop being emitted.  When dropProgram is selected the program can be dropped
     * from the transport stream (and replaced with null packets to meet the TS bitrate
     * requirement).  Or, when emitProgram is chosen the transport stream will continue
     * to be produced normally with repeat frames, black frames, or slate frames
     * substituted for the absent input video.
     */
    inline InputLossActionForUdpOut GetInputLossAction() const { return m_inputLossAction; }
    inline bool InputLossActionHasBeenSet() const { return m_inputLossActionHasBeenSet; }
    inline void SetInputLossAction(InputLossActionForUdpOut value) { m_inputLossActionHasBeenSet = true; m_inputLossAction = value; }
    inline SrtGroupSettings& WithInputLossAction(InputLossActionForUdpOut value) { SetInputLossAction(value); return *this;}
    ///@}
  private:

    InputLossActionForUdpOut m_inputLossAction{InputLossActionForUdpOut::NOT_SET};
    bool m_inputLossActionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
