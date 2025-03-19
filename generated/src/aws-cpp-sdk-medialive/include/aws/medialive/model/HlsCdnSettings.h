/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/HlsAkamaiSettings.h>
#include <aws/medialive/model/HlsBasicPutSettings.h>
#include <aws/medialive/model/HlsMediaStoreSettings.h>
#include <aws/medialive/model/HlsS3Settings.h>
#include <aws/medialive/model/HlsWebdavSettings.h>
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
   * Hls Cdn Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/HlsCdnSettings">AWS
   * API Reference</a></p>
   */
  class HlsCdnSettings
  {
  public:
    AWS_MEDIALIVE_API HlsCdnSettings() = default;
    AWS_MEDIALIVE_API HlsCdnSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API HlsCdnSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const HlsAkamaiSettings& GetHlsAkamaiSettings() const { return m_hlsAkamaiSettings; }
    inline bool HlsAkamaiSettingsHasBeenSet() const { return m_hlsAkamaiSettingsHasBeenSet; }
    template<typename HlsAkamaiSettingsT = HlsAkamaiSettings>
    void SetHlsAkamaiSettings(HlsAkamaiSettingsT&& value) { m_hlsAkamaiSettingsHasBeenSet = true; m_hlsAkamaiSettings = std::forward<HlsAkamaiSettingsT>(value); }
    template<typename HlsAkamaiSettingsT = HlsAkamaiSettings>
    HlsCdnSettings& WithHlsAkamaiSettings(HlsAkamaiSettingsT&& value) { SetHlsAkamaiSettings(std::forward<HlsAkamaiSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const HlsBasicPutSettings& GetHlsBasicPutSettings() const { return m_hlsBasicPutSettings; }
    inline bool HlsBasicPutSettingsHasBeenSet() const { return m_hlsBasicPutSettingsHasBeenSet; }
    template<typename HlsBasicPutSettingsT = HlsBasicPutSettings>
    void SetHlsBasicPutSettings(HlsBasicPutSettingsT&& value) { m_hlsBasicPutSettingsHasBeenSet = true; m_hlsBasicPutSettings = std::forward<HlsBasicPutSettingsT>(value); }
    template<typename HlsBasicPutSettingsT = HlsBasicPutSettings>
    HlsCdnSettings& WithHlsBasicPutSettings(HlsBasicPutSettingsT&& value) { SetHlsBasicPutSettings(std::forward<HlsBasicPutSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const HlsMediaStoreSettings& GetHlsMediaStoreSettings() const { return m_hlsMediaStoreSettings; }
    inline bool HlsMediaStoreSettingsHasBeenSet() const { return m_hlsMediaStoreSettingsHasBeenSet; }
    template<typename HlsMediaStoreSettingsT = HlsMediaStoreSettings>
    void SetHlsMediaStoreSettings(HlsMediaStoreSettingsT&& value) { m_hlsMediaStoreSettingsHasBeenSet = true; m_hlsMediaStoreSettings = std::forward<HlsMediaStoreSettingsT>(value); }
    template<typename HlsMediaStoreSettingsT = HlsMediaStoreSettings>
    HlsCdnSettings& WithHlsMediaStoreSettings(HlsMediaStoreSettingsT&& value) { SetHlsMediaStoreSettings(std::forward<HlsMediaStoreSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const HlsS3Settings& GetHlsS3Settings() const { return m_hlsS3Settings; }
    inline bool HlsS3SettingsHasBeenSet() const { return m_hlsS3SettingsHasBeenSet; }
    template<typename HlsS3SettingsT = HlsS3Settings>
    void SetHlsS3Settings(HlsS3SettingsT&& value) { m_hlsS3SettingsHasBeenSet = true; m_hlsS3Settings = std::forward<HlsS3SettingsT>(value); }
    template<typename HlsS3SettingsT = HlsS3Settings>
    HlsCdnSettings& WithHlsS3Settings(HlsS3SettingsT&& value) { SetHlsS3Settings(std::forward<HlsS3SettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const HlsWebdavSettings& GetHlsWebdavSettings() const { return m_hlsWebdavSettings; }
    inline bool HlsWebdavSettingsHasBeenSet() const { return m_hlsWebdavSettingsHasBeenSet; }
    template<typename HlsWebdavSettingsT = HlsWebdavSettings>
    void SetHlsWebdavSettings(HlsWebdavSettingsT&& value) { m_hlsWebdavSettingsHasBeenSet = true; m_hlsWebdavSettings = std::forward<HlsWebdavSettingsT>(value); }
    template<typename HlsWebdavSettingsT = HlsWebdavSettings>
    HlsCdnSettings& WithHlsWebdavSettings(HlsWebdavSettingsT&& value) { SetHlsWebdavSettings(std::forward<HlsWebdavSettingsT>(value)); return *this;}
    ///@}
  private:

    HlsAkamaiSettings m_hlsAkamaiSettings;
    bool m_hlsAkamaiSettingsHasBeenSet = false;

    HlsBasicPutSettings m_hlsBasicPutSettings;
    bool m_hlsBasicPutSettingsHasBeenSet = false;

    HlsMediaStoreSettings m_hlsMediaStoreSettings;
    bool m_hlsMediaStoreSettingsHasBeenSet = false;

    HlsS3Settings m_hlsS3Settings;
    bool m_hlsS3SettingsHasBeenSet = false;

    HlsWebdavSettings m_hlsWebdavSettings;
    bool m_hlsWebdavSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
