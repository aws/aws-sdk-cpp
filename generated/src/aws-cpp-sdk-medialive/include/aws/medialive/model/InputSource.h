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
   * The settings for a PULL type input.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputSource">AWS
   * API Reference</a></p>
   */
  class InputSource
  {
  public:
    AWS_MEDIALIVE_API InputSource() = default;
    AWS_MEDIALIVE_API InputSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The key used to extract the password from EC2 Parameter store.
     */
    inline const Aws::String& GetPasswordParam() const { return m_passwordParam; }
    inline bool PasswordParamHasBeenSet() const { return m_passwordParamHasBeenSet; }
    template<typename PasswordParamT = Aws::String>
    void SetPasswordParam(PasswordParamT&& value) { m_passwordParamHasBeenSet = true; m_passwordParam = std::forward<PasswordParamT>(value); }
    template<typename PasswordParamT = Aws::String>
    InputSource& WithPasswordParam(PasswordParamT&& value) { SetPasswordParam(std::forward<PasswordParamT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * This represents the customer's source URL where stream is
pulled from.
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    InputSource& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The username for the input source.
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    InputSource& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}
  private:

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
