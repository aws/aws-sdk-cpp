﻿/**
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
    AWS_MEDIALIVE_API CreateMultiplexProgramRequest();

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
    inline const Aws::String& GetMultiplexId() const{ return m_multiplexId; }
    inline bool MultiplexIdHasBeenSet() const { return m_multiplexIdHasBeenSet; }
    inline void SetMultiplexId(const Aws::String& value) { m_multiplexIdHasBeenSet = true; m_multiplexId = value; }
    inline void SetMultiplexId(Aws::String&& value) { m_multiplexIdHasBeenSet = true; m_multiplexId = std::move(value); }
    inline void SetMultiplexId(const char* value) { m_multiplexIdHasBeenSet = true; m_multiplexId.assign(value); }
    inline CreateMultiplexProgramRequest& WithMultiplexId(const Aws::String& value) { SetMultiplexId(value); return *this;}
    inline CreateMultiplexProgramRequest& WithMultiplexId(Aws::String&& value) { SetMultiplexId(std::move(value)); return *this;}
    inline CreateMultiplexProgramRequest& WithMultiplexId(const char* value) { SetMultiplexId(value); return *this;}
    ///@}

    ///@{
    /**
     * The settings for this multiplex program.
     */
    inline const MultiplexProgramSettings& GetMultiplexProgramSettings() const{ return m_multiplexProgramSettings; }
    inline bool MultiplexProgramSettingsHasBeenSet() const { return m_multiplexProgramSettingsHasBeenSet; }
    inline void SetMultiplexProgramSettings(const MultiplexProgramSettings& value) { m_multiplexProgramSettingsHasBeenSet = true; m_multiplexProgramSettings = value; }
    inline void SetMultiplexProgramSettings(MultiplexProgramSettings&& value) { m_multiplexProgramSettingsHasBeenSet = true; m_multiplexProgramSettings = std::move(value); }
    inline CreateMultiplexProgramRequest& WithMultiplexProgramSettings(const MultiplexProgramSettings& value) { SetMultiplexProgramSettings(value); return *this;}
    inline CreateMultiplexProgramRequest& WithMultiplexProgramSettings(MultiplexProgramSettings&& value) { SetMultiplexProgramSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Name of multiplex program.
     */
    inline const Aws::String& GetProgramName() const{ return m_programName; }
    inline bool ProgramNameHasBeenSet() const { return m_programNameHasBeenSet; }
    inline void SetProgramName(const Aws::String& value) { m_programNameHasBeenSet = true; m_programName = value; }
    inline void SetProgramName(Aws::String&& value) { m_programNameHasBeenSet = true; m_programName = std::move(value); }
    inline void SetProgramName(const char* value) { m_programNameHasBeenSet = true; m_programName.assign(value); }
    inline CreateMultiplexProgramRequest& WithProgramName(const Aws::String& value) { SetProgramName(value); return *this;}
    inline CreateMultiplexProgramRequest& WithProgramName(Aws::String&& value) { SetProgramName(std::move(value)); return *this;}
    inline CreateMultiplexProgramRequest& WithProgramName(const char* value) { SetProgramName(value); return *this;}
    ///@}

    ///@{
    /**
     * Unique request ID. This prevents retries from creating multiple
resources.
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline CreateMultiplexProgramRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateMultiplexProgramRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateMultiplexProgramRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_multiplexId;
    bool m_multiplexIdHasBeenSet = false;

    MultiplexProgramSettings m_multiplexProgramSettings;
    bool m_multiplexProgramSettingsHasBeenSet = false;

    Aws::String m_programName;
    bool m_programNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
