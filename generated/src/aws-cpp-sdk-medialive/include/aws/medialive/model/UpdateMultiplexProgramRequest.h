/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/MultiplexProgramSettings.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * A request to update a program in a multiplex.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateMultiplexProgramRequest">AWS
   * API Reference</a></p>
   */
  class UpdateMultiplexProgramRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API UpdateMultiplexProgramRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMultiplexProgram"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The ID of the multiplex of the program to update.
     */
    inline const Aws::String& GetMultiplexId() const { return m_multiplexId; }
    inline bool MultiplexIdHasBeenSet() const { return m_multiplexIdHasBeenSet; }
    template<typename MultiplexIdT = Aws::String>
    void SetMultiplexId(MultiplexIdT&& value) { m_multiplexIdHasBeenSet = true; m_multiplexId = std::forward<MultiplexIdT>(value); }
    template<typename MultiplexIdT = Aws::String>
    UpdateMultiplexProgramRequest& WithMultiplexId(MultiplexIdT&& value) { SetMultiplexId(std::forward<MultiplexIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The new settings for a multiplex program.
     */
    inline const MultiplexProgramSettings& GetMultiplexProgramSettings() const { return m_multiplexProgramSettings; }
    inline bool MultiplexProgramSettingsHasBeenSet() const { return m_multiplexProgramSettingsHasBeenSet; }
    template<typename MultiplexProgramSettingsT = MultiplexProgramSettings>
    void SetMultiplexProgramSettings(MultiplexProgramSettingsT&& value) { m_multiplexProgramSettingsHasBeenSet = true; m_multiplexProgramSettings = std::forward<MultiplexProgramSettingsT>(value); }
    template<typename MultiplexProgramSettingsT = MultiplexProgramSettings>
    UpdateMultiplexProgramRequest& WithMultiplexProgramSettings(MultiplexProgramSettingsT&& value) { SetMultiplexProgramSettings(std::forward<MultiplexProgramSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name of the program to update.
     */
    inline const Aws::String& GetProgramName() const { return m_programName; }
    inline bool ProgramNameHasBeenSet() const { return m_programNameHasBeenSet; }
    template<typename ProgramNameT = Aws::String>
    void SetProgramName(ProgramNameT&& value) { m_programNameHasBeenSet = true; m_programName = std::forward<ProgramNameT>(value); }
    template<typename ProgramNameT = Aws::String>
    UpdateMultiplexProgramRequest& WithProgramName(ProgramNameT&& value) { SetProgramName(std::forward<ProgramNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_multiplexId;
    bool m_multiplexIdHasBeenSet = false;

    MultiplexProgramSettings m_multiplexProgramSettings;
    bool m_multiplexProgramSettingsHasBeenSet = false;

    Aws::String m_programName;
    bool m_programNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
