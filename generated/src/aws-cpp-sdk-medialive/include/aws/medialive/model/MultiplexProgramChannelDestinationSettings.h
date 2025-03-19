/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
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
   * Multiplex Program Input Destination Settings for outputting a Channel to a
   * Multiplex<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MultiplexProgramChannelDestinationSettings">AWS
   * API Reference</a></p>
   */
  class MultiplexProgramChannelDestinationSettings
  {
  public:
    AWS_MEDIALIVE_API MultiplexProgramChannelDestinationSettings() = default;
    AWS_MEDIALIVE_API MultiplexProgramChannelDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MultiplexProgramChannelDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ID of the Multiplex that the encoder is providing output to. You do not need
     * to specify the individual inputs to the Multiplex; MediaLive will handle the
     * connection of the two MediaLive pipelines to the two Multiplex instances.
The
     * Multiplex must be in the same region as the Channel.
     */
    inline const Aws::String& GetMultiplexId() const { return m_multiplexId; }
    inline bool MultiplexIdHasBeenSet() const { return m_multiplexIdHasBeenSet; }
    template<typename MultiplexIdT = Aws::String>
    void SetMultiplexId(MultiplexIdT&& value) { m_multiplexIdHasBeenSet = true; m_multiplexId = std::forward<MultiplexIdT>(value); }
    template<typename MultiplexIdT = Aws::String>
    MultiplexProgramChannelDestinationSettings& WithMultiplexId(MultiplexIdT&& value) { SetMultiplexId(std::forward<MultiplexIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The program name of the Multiplex program that the encoder is providing output
     * to.
     */
    inline const Aws::String& GetProgramName() const { return m_programName; }
    inline bool ProgramNameHasBeenSet() const { return m_programNameHasBeenSet; }
    template<typename ProgramNameT = Aws::String>
    void SetProgramName(ProgramNameT&& value) { m_programNameHasBeenSet = true; m_programName = std::forward<ProgramNameT>(value); }
    template<typename ProgramNameT = Aws::String>
    MultiplexProgramChannelDestinationSettings& WithProgramName(ProgramNameT&& value) { SetProgramName(std::forward<ProgramNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_multiplexId;
    bool m_multiplexIdHasBeenSet = false;

    Aws::String m_programName;
    bool m_programNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
