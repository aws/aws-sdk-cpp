/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

  /**
   */
  class DeleteProgramRequest : public MediaTailorRequest
  {
  public:
    AWS_MEDIATAILOR_API DeleteProgramRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteProgram"; }

    AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the channel.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The name of the channel.</p>
     */
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline DeleteProgramRequest& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline DeleteProgramRequest& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline DeleteProgramRequest& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>The name of the program.</p>
     */
    inline const Aws::String& GetProgramName() const{ return m_programName; }

    /**
     * <p>The name of the program.</p>
     */
    inline bool ProgramNameHasBeenSet() const { return m_programNameHasBeenSet; }

    /**
     * <p>The name of the program.</p>
     */
    inline void SetProgramName(const Aws::String& value) { m_programNameHasBeenSet = true; m_programName = value; }

    /**
     * <p>The name of the program.</p>
     */
    inline void SetProgramName(Aws::String&& value) { m_programNameHasBeenSet = true; m_programName = std::move(value); }

    /**
     * <p>The name of the program.</p>
     */
    inline void SetProgramName(const char* value) { m_programNameHasBeenSet = true; m_programName.assign(value); }

    /**
     * <p>The name of the program.</p>
     */
    inline DeleteProgramRequest& WithProgramName(const Aws::String& value) { SetProgramName(value); return *this;}

    /**
     * <p>The name of the program.</p>
     */
    inline DeleteProgramRequest& WithProgramName(Aws::String&& value) { SetProgramName(std::move(value)); return *this;}

    /**
     * <p>The name of the program.</p>
     */
    inline DeleteProgramRequest& WithProgramName(const char* value) { SetProgramName(value); return *this;}

  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_programName;
    bool m_programNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
