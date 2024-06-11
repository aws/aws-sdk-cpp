﻿/**
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
   * Input Location<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputLocation">AWS
   * API Reference</a></p>
   */
  class InputLocation
  {
  public:
    AWS_MEDIALIVE_API InputLocation();
    AWS_MEDIALIVE_API InputLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline InputLocation& WithPasswordParam(const Aws::String& value) { SetPasswordParam(value); return *this;}
    inline InputLocation& WithPasswordParam(Aws::String&& value) { SetPasswordParam(std::move(value)); return *this;}
    inline InputLocation& WithPasswordParam(const char* value) { SetPasswordParam(value); return *this;}
    ///@}

    ///@{
    /**
     * Uniform Resource Identifier - This should be a path to a file accessible to the
     * Live system (eg. a http:// URI) depending on the output type. For example, a
     * RTMP destination should have a uri simliar to: "rtmp://fmsserver/live".
     */
    inline const Aws::String& GetUri() const{ return m_uri; }
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }
    inline InputLocation& WithUri(const Aws::String& value) { SetUri(value); return *this;}
    inline InputLocation& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}
    inline InputLocation& WithUri(const char* value) { SetUri(value); return *this;}
    ///@}

    ///@{
    /**
     * Documentation update needed
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline InputLocation& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline InputLocation& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline InputLocation& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}
  private:

    Aws::String m_passwordParam;
    bool m_passwordParamHasBeenSet = false;

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
