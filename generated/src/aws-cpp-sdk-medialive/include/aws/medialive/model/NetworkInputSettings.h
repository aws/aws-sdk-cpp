/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/HlsInputSettings.h>
#include <aws/medialive/model/NetworkInputServerValidation.h>
#include <aws/medialive/model/MulticastInputSettings.h>
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
   * Network source to transcode. Must be accessible to the Elemental Live node that
   * is running the live event through a network connection.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/NetworkInputSettings">AWS
   * API Reference</a></p>
   */
  class NetworkInputSettings
  {
  public:
    AWS_MEDIALIVE_API NetworkInputSettings() = default;
    AWS_MEDIALIVE_API NetworkInputSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API NetworkInputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specifies HLS input settings when the uri is for a HLS manifest.
     */
    inline const HlsInputSettings& GetHlsInputSettings() const { return m_hlsInputSettings; }
    inline bool HlsInputSettingsHasBeenSet() const { return m_hlsInputSettingsHasBeenSet; }
    template<typename HlsInputSettingsT = HlsInputSettings>
    void SetHlsInputSettings(HlsInputSettingsT&& value) { m_hlsInputSettingsHasBeenSet = true; m_hlsInputSettings = std::forward<HlsInputSettingsT>(value); }
    template<typename HlsInputSettingsT = HlsInputSettings>
    NetworkInputSettings& WithHlsInputSettings(HlsInputSettingsT&& value) { SetHlsInputSettings(std::forward<HlsInputSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Check HTTPS server certificates. When set to checkCryptographyOnly, cryptography
     * in the certificate will be checked, but not the server's name. Certain
     * subdomains (notably S3 buckets that use dots in the bucket name) do not strictly
     * match the corresponding certificate's wildcard pattern and would otherwise cause
     * the event to error. This setting is ignored for protocols that do not use https.
     */
    inline NetworkInputServerValidation GetServerValidation() const { return m_serverValidation; }
    inline bool ServerValidationHasBeenSet() const { return m_serverValidationHasBeenSet; }
    inline void SetServerValidation(NetworkInputServerValidation value) { m_serverValidationHasBeenSet = true; m_serverValidation = value; }
    inline NetworkInputSettings& WithServerValidation(NetworkInputServerValidation value) { SetServerValidation(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies multicast input settings when the uri is for a multicast event.
     */
    inline const MulticastInputSettings& GetMulticastInputSettings() const { return m_multicastInputSettings; }
    inline bool MulticastInputSettingsHasBeenSet() const { return m_multicastInputSettingsHasBeenSet; }
    template<typename MulticastInputSettingsT = MulticastInputSettings>
    void SetMulticastInputSettings(MulticastInputSettingsT&& value) { m_multicastInputSettingsHasBeenSet = true; m_multicastInputSettings = std::forward<MulticastInputSettingsT>(value); }
    template<typename MulticastInputSettingsT = MulticastInputSettings>
    NetworkInputSettings& WithMulticastInputSettings(MulticastInputSettingsT&& value) { SetMulticastInputSettings(std::forward<MulticastInputSettingsT>(value)); return *this;}
    ///@}
  private:

    HlsInputSettings m_hlsInputSettings;
    bool m_hlsInputSettingsHasBeenSet = false;

    NetworkInputServerValidation m_serverValidation{NetworkInputServerValidation::NOT_SET};
    bool m_serverValidationHasBeenSet = false;

    MulticastInputSettings m_multicastInputSettings;
    bool m_multicastInputSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
