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
   * Settings to specify the rendering of motion graphics into the video
   * stream.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MotionGraphicsActivateScheduleActionSettings">AWS
   * API Reference</a></p>
   */
  class MotionGraphicsActivateScheduleActionSettings
  {
  public:
    AWS_MEDIALIVE_API MotionGraphicsActivateScheduleActionSettings() = default;
    AWS_MEDIALIVE_API MotionGraphicsActivateScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MotionGraphicsActivateScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Duration (in milliseconds) that motion graphics should render on to the video
     * stream. Leaving out this property or setting to 0 will result in rendering
     * continuing until a deactivate action is processed.
     */
    inline long long GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(long long value) { m_durationHasBeenSet = true; m_duration = value; }
    inline MotionGraphicsActivateScheduleActionSettings& WithDuration(long long value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * Key used to extract the password from EC2 Parameter store
     */
    inline const Aws::String& GetPasswordParam() const { return m_passwordParam; }
    inline bool PasswordParamHasBeenSet() const { return m_passwordParamHasBeenSet; }
    template<typename PasswordParamT = Aws::String>
    void SetPasswordParam(PasswordParamT&& value) { m_passwordParamHasBeenSet = true; m_passwordParam = std::forward<PasswordParamT>(value); }
    template<typename PasswordParamT = Aws::String>
    MotionGraphicsActivateScheduleActionSettings& WithPasswordParam(PasswordParamT&& value) { SetPasswordParam(std::forward<PasswordParamT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * URI of the HTML5 content to be rendered into the live stream.
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    MotionGraphicsActivateScheduleActionSettings& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Documentation update needed
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    MotionGraphicsActivateScheduleActionSettings& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}
  private:

    long long m_duration{0};
    bool m_durationHasBeenSet = false;

    Aws::String m_passwordParam;
    bool m_passwordParamHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
