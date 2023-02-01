/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>

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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the status and settings of the voice channel for an
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/VoiceChannelRequest">AWS
   * API Reference</a></p>
   */
  class VoiceChannelRequest
  {
  public:
    AWS_PINPOINT_API VoiceChannelRequest();
    AWS_PINPOINT_API VoiceChannelRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API VoiceChannelRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether to enable the voice channel for the application.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether to enable the voice channel for the application.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether to enable the voice channel for the application.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether to enable the voice channel for the application.</p>
     */
    inline VoiceChannelRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
