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
    AWS_MEDIALIVE_API Esam();
    AWS_MEDIALIVE_API Esam(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Esam& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Sent as acquisitionPointIdentity to identify the MediaLive channel to the POIS.
     */
    inline const Aws::String& GetAcquisitionPointId() const{ return m_acquisitionPointId; }
    inline bool AcquisitionPointIdHasBeenSet() const { return m_acquisitionPointIdHasBeenSet; }
    inline void SetAcquisitionPointId(const Aws::String& value) { m_acquisitionPointIdHasBeenSet = true; m_acquisitionPointId = value; }
    inline void SetAcquisitionPointId(Aws::String&& value) { m_acquisitionPointIdHasBeenSet = true; m_acquisitionPointId = std::move(value); }
    inline void SetAcquisitionPointId(const char* value) { m_acquisitionPointIdHasBeenSet = true; m_acquisitionPointId.assign(value); }
    inline Esam& WithAcquisitionPointId(const Aws::String& value) { SetAcquisitionPointId(value); return *this;}
    inline Esam& WithAcquisitionPointId(Aws::String&& value) { SetAcquisitionPointId(std::move(value)); return *this;}
    inline Esam& WithAcquisitionPointId(const char* value) { SetAcquisitionPointId(value); return *this;}
    ///@}

    ///@{
    /**
     * When specified, this offset (in milliseconds) is added to the input Ad Avail PTS
     * time. This only applies to embedded SCTE 104/35 messages and does not apply to
     * OOB messages.
     */
    inline int GetAdAvailOffset() const{ return m_adAvailOffset; }
    inline bool AdAvailOffsetHasBeenSet() const { return m_adAvailOffsetHasBeenSet; }
    inline void SetAdAvailOffset(int value) { m_adAvailOffsetHasBeenSet = true; m_adAvailOffset = value; }
    inline Esam& WithAdAvailOffset(int value) { SetAdAvailOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * Documentation update needed
     */
    inline const Aws::String& GetPasswordParam() const{ return m_passwordParam; }
    inline bool PasswordParamHasBeenSet() const { return m_passwordParamHasBeenSet; }
    inline void SetPasswordParam(const Aws::String& value) { m_passwordParamHasBeenSet = true; m_passwordParam = value; }
    inline void SetPasswordParam(Aws::String&& value) { m_passwordParamHasBeenSet = true; m_passwordParam = std::move(value); }
    inline void SetPasswordParam(const char* value) { m_passwordParamHasBeenSet = true; m_passwordParam.assign(value); }
    inline Esam& WithPasswordParam(const Aws::String& value) { SetPasswordParam(value); return *this;}
    inline Esam& WithPasswordParam(Aws::String&& value) { SetPasswordParam(std::move(value)); return *this;}
    inline Esam& WithPasswordParam(const char* value) { SetPasswordParam(value); return *this;}
    ///@}

    ///@{
    /**
     * The URL of the signal conditioner endpoint on the Placement Opportunity
     * Information System (POIS). MediaLive sends SignalProcessingEvents here when
     * SCTE-35 messages are read.
     */
    inline const Aws::String& GetPoisEndpoint() const{ return m_poisEndpoint; }
    inline bool PoisEndpointHasBeenSet() const { return m_poisEndpointHasBeenSet; }
    inline void SetPoisEndpoint(const Aws::String& value) { m_poisEndpointHasBeenSet = true; m_poisEndpoint = value; }
    inline void SetPoisEndpoint(Aws::String&& value) { m_poisEndpointHasBeenSet = true; m_poisEndpoint = std::move(value); }
    inline void SetPoisEndpoint(const char* value) { m_poisEndpointHasBeenSet = true; m_poisEndpoint.assign(value); }
    inline Esam& WithPoisEndpoint(const Aws::String& value) { SetPoisEndpoint(value); return *this;}
    inline Esam& WithPoisEndpoint(Aws::String&& value) { SetPoisEndpoint(std::move(value)); return *this;}
    inline Esam& WithPoisEndpoint(const char* value) { SetPoisEndpoint(value); return *this;}
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
    inline Esam& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline Esam& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline Esam& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional data sent as zoneIdentity to identify the MediaLive channel to the
     * POIS.
     */
    inline const Aws::String& GetZoneIdentity() const{ return m_zoneIdentity; }
    inline bool ZoneIdentityHasBeenSet() const { return m_zoneIdentityHasBeenSet; }
    inline void SetZoneIdentity(const Aws::String& value) { m_zoneIdentityHasBeenSet = true; m_zoneIdentity = value; }
    inline void SetZoneIdentity(Aws::String&& value) { m_zoneIdentityHasBeenSet = true; m_zoneIdentity = std::move(value); }
    inline void SetZoneIdentity(const char* value) { m_zoneIdentityHasBeenSet = true; m_zoneIdentity.assign(value); }
    inline Esam& WithZoneIdentity(const Aws::String& value) { SetZoneIdentity(value); return *this;}
    inline Esam& WithZoneIdentity(Aws::String&& value) { SetZoneIdentity(std::move(value)); return *this;}
    inline Esam& WithZoneIdentity(const char* value) { SetZoneIdentity(value); return *this;}
    ///@}
  private:

    Aws::String m_acquisitionPointId;
    bool m_acquisitionPointIdHasBeenSet = false;

    int m_adAvailOffset;
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
