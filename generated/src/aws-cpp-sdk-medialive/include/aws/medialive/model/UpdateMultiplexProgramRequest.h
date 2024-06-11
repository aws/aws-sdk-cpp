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
    AWS_MEDIALIVE_API UpdateMultiplexProgramRequest();

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
    inline const Aws::String& GetMultiplexId() const{ return m_multiplexId; }
    inline bool MultiplexIdHasBeenSet() const { return m_multiplexIdHasBeenSet; }
    inline void SetMultiplexId(const Aws::String& value) { m_multiplexIdHasBeenSet = true; m_multiplexId = value; }
    inline void SetMultiplexId(Aws::String&& value) { m_multiplexIdHasBeenSet = true; m_multiplexId = std::move(value); }
    inline void SetMultiplexId(const char* value) { m_multiplexIdHasBeenSet = true; m_multiplexId.assign(value); }
    inline UpdateMultiplexProgramRequest& WithMultiplexId(const Aws::String& value) { SetMultiplexId(value); return *this;}
    inline UpdateMultiplexProgramRequest& WithMultiplexId(Aws::String&& value) { SetMultiplexId(std::move(value)); return *this;}
    inline UpdateMultiplexProgramRequest& WithMultiplexId(const char* value) { SetMultiplexId(value); return *this;}
    ///@}

    ///@{
    /**
     * The new settings for a multiplex program.
     */
    inline const MultiplexProgramSettings& GetMultiplexProgramSettings() const{ return m_multiplexProgramSettings; }
    inline bool MultiplexProgramSettingsHasBeenSet() const { return m_multiplexProgramSettingsHasBeenSet; }
    inline void SetMultiplexProgramSettings(const MultiplexProgramSettings& value) { m_multiplexProgramSettingsHasBeenSet = true; m_multiplexProgramSettings = value; }
    inline void SetMultiplexProgramSettings(MultiplexProgramSettings&& value) { m_multiplexProgramSettingsHasBeenSet = true; m_multiplexProgramSettings = std::move(value); }
    inline UpdateMultiplexProgramRequest& WithMultiplexProgramSettings(const MultiplexProgramSettings& value) { SetMultiplexProgramSettings(value); return *this;}
    inline UpdateMultiplexProgramRequest& WithMultiplexProgramSettings(MultiplexProgramSettings&& value) { SetMultiplexProgramSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name of the program to update.
     */
    inline const Aws::String& GetProgramName() const{ return m_programName; }
    inline bool ProgramNameHasBeenSet() const { return m_programNameHasBeenSet; }
    inline void SetProgramName(const Aws::String& value) { m_programNameHasBeenSet = true; m_programName = value; }
    inline void SetProgramName(Aws::String&& value) { m_programNameHasBeenSet = true; m_programName = std::move(value); }
    inline void SetProgramName(const char* value) { m_programNameHasBeenSet = true; m_programName.assign(value); }
    inline UpdateMultiplexProgramRequest& WithProgramName(const Aws::String& value) { SetProgramName(value); return *this;}
    inline UpdateMultiplexProgramRequest& WithProgramName(Aws::String&& value) { SetProgramName(std::move(value)); return *this;}
    inline UpdateMultiplexProgramRequest& WithProgramName(const char* value) { SetProgramName(value); return *this;}
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
