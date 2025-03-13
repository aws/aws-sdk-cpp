/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/InputLocation.h>
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
   * Static Key Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StaticKeySettings">AWS
   * API Reference</a></p>
   */
  class StaticKeySettings
  {
  public:
    AWS_MEDIALIVE_API StaticKeySettings() = default;
    AWS_MEDIALIVE_API StaticKeySettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API StaticKeySettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The URL of the license server used for protecting content.
     */
    inline const InputLocation& GetKeyProviderServer() const { return m_keyProviderServer; }
    inline bool KeyProviderServerHasBeenSet() const { return m_keyProviderServerHasBeenSet; }
    template<typename KeyProviderServerT = InputLocation>
    void SetKeyProviderServer(KeyProviderServerT&& value) { m_keyProviderServerHasBeenSet = true; m_keyProviderServer = std::forward<KeyProviderServerT>(value); }
    template<typename KeyProviderServerT = InputLocation>
    StaticKeySettings& WithKeyProviderServer(KeyProviderServerT&& value) { SetKeyProviderServer(std::forward<KeyProviderServerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Static key value as a 32 character hexadecimal string.
     */
    inline const Aws::String& GetStaticKeyValue() const { return m_staticKeyValue; }
    inline bool StaticKeyValueHasBeenSet() const { return m_staticKeyValueHasBeenSet; }
    template<typename StaticKeyValueT = Aws::String>
    void SetStaticKeyValue(StaticKeyValueT&& value) { m_staticKeyValueHasBeenSet = true; m_staticKeyValue = std::forward<StaticKeyValueT>(value); }
    template<typename StaticKeyValueT = Aws::String>
    StaticKeySettings& WithStaticKeyValue(StaticKeyValueT&& value) { SetStaticKeyValue(std::forward<StaticKeyValueT>(value)); return *this;}
    ///@}
  private:

    InputLocation m_keyProviderServer;
    bool m_keyProviderServerHasBeenSet = false;

    Aws::String m_staticKeyValue;
    bool m_staticKeyValueHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
