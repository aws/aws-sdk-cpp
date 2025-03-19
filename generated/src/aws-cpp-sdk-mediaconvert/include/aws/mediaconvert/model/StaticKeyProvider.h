/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Use these settings to set up encryption with a static key provider.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/StaticKeyProvider">AWS
   * API Reference</a></p>
   */
  class StaticKeyProvider
  {
  public:
    AWS_MEDIACONVERT_API StaticKeyProvider() = default;
    AWS_MEDIACONVERT_API StaticKeyProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API StaticKeyProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Relates to DRM implementation. Sets the value of the KEYFORMAT attribute. Must
     * be 'identity' or a reverse DNS string. May be omitted to indicate an implicit
     * value of 'identity'.
     */
    inline const Aws::String& GetKeyFormat() const { return m_keyFormat; }
    inline bool KeyFormatHasBeenSet() const { return m_keyFormatHasBeenSet; }
    template<typename KeyFormatT = Aws::String>
    void SetKeyFormat(KeyFormatT&& value) { m_keyFormatHasBeenSet = true; m_keyFormat = std::forward<KeyFormatT>(value); }
    template<typename KeyFormatT = Aws::String>
    StaticKeyProvider& WithKeyFormat(KeyFormatT&& value) { SetKeyFormat(std::forward<KeyFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Relates to DRM implementation. Either a single positive integer version value or
     * a slash delimited list of version values (1/2/3).
     */
    inline const Aws::String& GetKeyFormatVersions() const { return m_keyFormatVersions; }
    inline bool KeyFormatVersionsHasBeenSet() const { return m_keyFormatVersionsHasBeenSet; }
    template<typename KeyFormatVersionsT = Aws::String>
    void SetKeyFormatVersions(KeyFormatVersionsT&& value) { m_keyFormatVersionsHasBeenSet = true; m_keyFormatVersions = std::forward<KeyFormatVersionsT>(value); }
    template<typename KeyFormatVersionsT = Aws::String>
    StaticKeyProvider& WithKeyFormatVersions(KeyFormatVersionsT&& value) { SetKeyFormatVersions(std::forward<KeyFormatVersionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Relates to DRM implementation. Use a 32-character hexidecimal string to specify
     * Key Value.
     */
    inline const Aws::String& GetStaticKeyValue() const { return m_staticKeyValue; }
    inline bool StaticKeyValueHasBeenSet() const { return m_staticKeyValueHasBeenSet; }
    template<typename StaticKeyValueT = Aws::String>
    void SetStaticKeyValue(StaticKeyValueT&& value) { m_staticKeyValueHasBeenSet = true; m_staticKeyValue = std::forward<StaticKeyValueT>(value); }
    template<typename StaticKeyValueT = Aws::String>
    StaticKeyProvider& WithStaticKeyValue(StaticKeyValueT&& value) { SetStaticKeyValue(std::forward<StaticKeyValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Relates to DRM implementation. The location of the license server used for
     * protecting content.
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    StaticKeyProvider& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyFormat;
    bool m_keyFormatHasBeenSet = false;

    Aws::String m_keyFormatVersions;
    bool m_keyFormatVersionsHasBeenSet = false;

    Aws::String m_staticKeyValue;
    bool m_staticKeyValueHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
