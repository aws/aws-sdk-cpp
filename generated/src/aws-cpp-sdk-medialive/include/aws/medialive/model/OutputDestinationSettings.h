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
   * Placeholder documentation for OutputDestinationSettings<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/OutputDestinationSettings">AWS
   * API Reference</a></p>
   */
  class OutputDestinationSettings
  {
  public:
    AWS_MEDIALIVE_API OutputDestinationSettings();
    AWS_MEDIALIVE_API OutputDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API OutputDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * key used to extract the password from EC2 Parameter store
     */
    inline const Aws::String& GetPasswordParam() const{ return m_passwordParam; }
    inline bool PasswordParamHasBeenSet() const { return m_passwordParamHasBeenSet; }
    inline void SetPasswordParam(const Aws::String& value) { m_passwordParamHasBeenSet = true; m_passwordParam = value; }
    inline void SetPasswordParam(Aws::String&& value) { m_passwordParamHasBeenSet = true; m_passwordParam = std::move(value); }
    inline void SetPasswordParam(const char* value) { m_passwordParamHasBeenSet = true; m_passwordParam.assign(value); }
    inline OutputDestinationSettings& WithPasswordParam(const Aws::String& value) { SetPasswordParam(value); return *this;}
    inline OutputDestinationSettings& WithPasswordParam(Aws::String&& value) { SetPasswordParam(std::move(value)); return *this;}
    inline OutputDestinationSettings& WithPasswordParam(const char* value) { SetPasswordParam(value); return *this;}
    ///@}

    ///@{
    /**
     * Stream name for RTMP destinations (URLs of type rtmp://)
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }
    inline OutputDestinationSettings& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}
    inline OutputDestinationSettings& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}
    inline OutputDestinationSettings& WithStreamName(const char* value) { SetStreamName(value); return *this;}
    ///@}

    ///@{
    /**
     * A URL specifying a destination
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline OutputDestinationSettings& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline OutputDestinationSettings& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline OutputDestinationSettings& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * username for destination
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline OutputDestinationSettings& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline OutputDestinationSettings& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline OutputDestinationSettings& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}
  private:

    Aws::String m_passwordParam;
    bool m_passwordParamHasBeenSet = false;

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
