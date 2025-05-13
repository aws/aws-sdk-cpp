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
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * A request to create a program in a multiplex.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateMultiplexProgramRequest">AWS
   * API Reference</a></p>
   */
  class CreateMultiplexProgramRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API CreateMultiplexProgramRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMultiplexProgram"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * ID of the multiplex where the program is to be created.
     */
    inline const Aws::String& GetMultiplexId() const { return m_multiplexId; }
    inline bool MultiplexIdHasBeenSet() const { return m_multiplexIdHasBeenSet; }
    template<typename MultiplexIdT = Aws::String>
    void SetMultiplexId(MultiplexIdT&& value) { m_multiplexIdHasBeenSet = true; m_multiplexId = std::forward<MultiplexIdT>(value); }
    template<typename MultiplexIdT = Aws::String>
    CreateMultiplexProgramRequest& WithMultiplexId(MultiplexIdT&& value) { SetMultiplexId(std::forward<MultiplexIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The settings for this multiplex program.
     */
    inline const MultiplexProgramSettings& GetMultiplexProgramSettings() const { return m_multiplexProgramSettings; }
    inline bool MultiplexProgramSettingsHasBeenSet() const { return m_multiplexProgramSettingsHasBeenSet; }
    template<typename MultiplexProgramSettingsT = MultiplexProgramSettings>
    void SetMultiplexProgramSettings(MultiplexProgramSettingsT&& value) { m_multiplexProgramSettingsHasBeenSet = true; m_multiplexProgramSettings = std::forward<MultiplexProgramSettingsT>(value); }
    template<typename MultiplexProgramSettingsT = MultiplexProgramSettings>
    CreateMultiplexProgramRequest& WithMultiplexProgramSettings(MultiplexProgramSettingsT&& value) { SetMultiplexProgramSettings(std::forward<MultiplexProgramSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Name of multiplex program.
     */
    inline const Aws::String& GetProgramName() const { return m_programName; }
    inline bool ProgramNameHasBeenSet() const { return m_programNameHasBeenSet; }
    template<typename ProgramNameT = Aws::String>
    void SetProgramName(ProgramNameT&& value) { m_programNameHasBeenSet = true; m_programName = std::forward<ProgramNameT>(value); }
    template<typename ProgramNameT = Aws::String>
    CreateMultiplexProgramRequest& WithProgramName(ProgramNameT&& value) { SetProgramName(std::forward<ProgramNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Unique request ID. This prevents retries from creating multiple
resources.
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateMultiplexProgramRequest& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_multiplexId;
    bool m_multiplexIdHasBeenSet = false;

    MultiplexProgramSettings m_multiplexProgramSettings;
    bool m_multiplexProgramSettingsHasBeenSet = false;

    Aws::String m_programName;
    bool m_programNameHasBeenSet = false;

    Aws::String m_requestId{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_requestIdHasBeenSet = true;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
