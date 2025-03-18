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
   * Esam<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Esam">AWS API
   * Reference</a></p>
   */
  class Esam
  {
  public:
    AWS_MEDIALIVE_API Esam() = default;
    AWS_MEDIALIVE_API Esam(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Esam& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Sent as acquisitionPointIdentity to identify the MediaLive channel to the POIS.
     */
    inline const Aws::String& GetAcquisitionPointId() const { return m_acquisitionPointId; }
    inline bool AcquisitionPointIdHasBeenSet() const { return m_acquisitionPointIdHasBeenSet; }
    template<typename AcquisitionPointIdT = Aws::String>
    void SetAcquisitionPointId(AcquisitionPointIdT&& value) { m_acquisitionPointIdHasBeenSet = true; m_acquisitionPointId = std::forward<AcquisitionPointIdT>(value); }
    template<typename AcquisitionPointIdT = Aws::String>
    Esam& WithAcquisitionPointId(AcquisitionPointIdT&& value) { SetAcquisitionPointId(std::forward<AcquisitionPointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * When specified, this offset (in milliseconds) is added to the input Ad Avail PTS
     * time. This only applies to embedded SCTE 104/35 messages and does not apply to
     * OOB messages.
     */
    inline int GetAdAvailOffset() const { return m_adAvailOffset; }
    inline bool AdAvailOffsetHasBeenSet() const { return m_adAvailOffsetHasBeenSet; }
    inline void SetAdAvailOffset(int value) { m_adAvailOffsetHasBeenSet = true; m_adAvailOffset = value; }
    inline Esam& WithAdAvailOffset(int value) { SetAdAvailOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * Documentation update needed
     */
    inline const Aws::String& GetPasswordParam() const { return m_passwordParam; }
    inline bool PasswordParamHasBeenSet() const { return m_passwordParamHasBeenSet; }
    template<typename PasswordParamT = Aws::String>
    void SetPasswordParam(PasswordParamT&& value) { m_passwordParamHasBeenSet = true; m_passwordParam = std::forward<PasswordParamT>(value); }
    template<typename PasswordParamT = Aws::String>
    Esam& WithPasswordParam(PasswordParamT&& value) { SetPasswordParam(std::forward<PasswordParamT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The URL of the signal conditioner endpoint on the Placement Opportunity
     * Information System (POIS). MediaLive sends SignalProcessingEvents here when
     * SCTE-35 messages are read.
     */
    inline const Aws::String& GetPoisEndpoint() const { return m_poisEndpoint; }
    inline bool PoisEndpointHasBeenSet() const { return m_poisEndpointHasBeenSet; }
    template<typename PoisEndpointT = Aws::String>
    void SetPoisEndpoint(PoisEndpointT&& value) { m_poisEndpointHasBeenSet = true; m_poisEndpoint = std::forward<PoisEndpointT>(value); }
    template<typename PoisEndpointT = Aws::String>
    Esam& WithPoisEndpoint(PoisEndpointT&& value) { SetPoisEndpoint(std::forward<PoisEndpointT>(value)); return *this;}
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
    Esam& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional data sent as zoneIdentity to identify the MediaLive channel to the
     * POIS.
     */
    inline const Aws::String& GetZoneIdentity() const { return m_zoneIdentity; }
    inline bool ZoneIdentityHasBeenSet() const { return m_zoneIdentityHasBeenSet; }
    template<typename ZoneIdentityT = Aws::String>
    void SetZoneIdentity(ZoneIdentityT&& value) { m_zoneIdentityHasBeenSet = true; m_zoneIdentity = std::forward<ZoneIdentityT>(value); }
    template<typename ZoneIdentityT = Aws::String>
    Esam& WithZoneIdentity(ZoneIdentityT&& value) { SetZoneIdentity(std::forward<ZoneIdentityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_acquisitionPointId;
    bool m_acquisitionPointIdHasBeenSet = false;

    int m_adAvailOffset{0};
    bool m_adAvailOffsetHasBeenSet = false;

    Aws::String m_passwordParam;
    bool m_passwordParamHasBeenSet = false;

    Aws::String m_poisEndpoint;
    bool m_poisEndpointHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_zoneIdentity;
    bool m_zoneIdentityHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
