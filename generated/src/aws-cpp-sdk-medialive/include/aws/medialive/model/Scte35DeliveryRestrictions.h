/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/Scte35ArchiveAllowedFlag.h>
#include <aws/medialive/model/Scte35DeviceRestrictions.h>
#include <aws/medialive/model/Scte35NoRegionalBlackoutFlag.h>
#include <aws/medialive/model/Scte35WebDeliveryAllowedFlag.h>
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
   * Corresponds to SCTE-35 delivery_not_restricted_flag parameter. To declare
   * delivery restrictions, include this element and its four "restriction" flags. To
   * declare that there are no restrictions, omit this element.<p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Scte35DeliveryRestrictions">AWS
   * API Reference</a></p>
   */
  class Scte35DeliveryRestrictions
  {
  public:
    AWS_MEDIALIVE_API Scte35DeliveryRestrictions() = default;
    AWS_MEDIALIVE_API Scte35DeliveryRestrictions(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Scte35DeliveryRestrictions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Corresponds to SCTE-35 archive_allowed_flag.
     */
    inline Scte35ArchiveAllowedFlag GetArchiveAllowedFlag() const { return m_archiveAllowedFlag; }
    inline bool ArchiveAllowedFlagHasBeenSet() const { return m_archiveAllowedFlagHasBeenSet; }
    inline void SetArchiveAllowedFlag(Scte35ArchiveAllowedFlag value) { m_archiveAllowedFlagHasBeenSet = true; m_archiveAllowedFlag = value; }
    inline Scte35DeliveryRestrictions& WithArchiveAllowedFlag(Scte35ArchiveAllowedFlag value) { SetArchiveAllowedFlag(value); return *this;}
    ///@}

    ///@{
    /**
     * Corresponds to SCTE-35 device_restrictions parameter.
     */
    inline Scte35DeviceRestrictions GetDeviceRestrictions() const { return m_deviceRestrictions; }
    inline bool DeviceRestrictionsHasBeenSet() const { return m_deviceRestrictionsHasBeenSet; }
    inline void SetDeviceRestrictions(Scte35DeviceRestrictions value) { m_deviceRestrictionsHasBeenSet = true; m_deviceRestrictions = value; }
    inline Scte35DeliveryRestrictions& WithDeviceRestrictions(Scte35DeviceRestrictions value) { SetDeviceRestrictions(value); return *this;}
    ///@}

    ///@{
    /**
     * Corresponds to SCTE-35 no_regional_blackout_flag parameter.
     */
    inline Scte35NoRegionalBlackoutFlag GetNoRegionalBlackoutFlag() const { return m_noRegionalBlackoutFlag; }
    inline bool NoRegionalBlackoutFlagHasBeenSet() const { return m_noRegionalBlackoutFlagHasBeenSet; }
    inline void SetNoRegionalBlackoutFlag(Scte35NoRegionalBlackoutFlag value) { m_noRegionalBlackoutFlagHasBeenSet = true; m_noRegionalBlackoutFlag = value; }
    inline Scte35DeliveryRestrictions& WithNoRegionalBlackoutFlag(Scte35NoRegionalBlackoutFlag value) { SetNoRegionalBlackoutFlag(value); return *this;}
    ///@}

    ///@{
    /**
     * Corresponds to SCTE-35 web_delivery_allowed_flag parameter.
     */
    inline Scte35WebDeliveryAllowedFlag GetWebDeliveryAllowedFlag() const { return m_webDeliveryAllowedFlag; }
    inline bool WebDeliveryAllowedFlagHasBeenSet() const { return m_webDeliveryAllowedFlagHasBeenSet; }
    inline void SetWebDeliveryAllowedFlag(Scte35WebDeliveryAllowedFlag value) { m_webDeliveryAllowedFlagHasBeenSet = true; m_webDeliveryAllowedFlag = value; }
    inline Scte35DeliveryRestrictions& WithWebDeliveryAllowedFlag(Scte35WebDeliveryAllowedFlag value) { SetWebDeliveryAllowedFlag(value); return *this;}
    ///@}
  private:

    Scte35ArchiveAllowedFlag m_archiveAllowedFlag{Scte35ArchiveAllowedFlag::NOT_SET};
    bool m_archiveAllowedFlagHasBeenSet = false;

    Scte35DeviceRestrictions m_deviceRestrictions{Scte35DeviceRestrictions::NOT_SET};
    bool m_deviceRestrictionsHasBeenSet = false;

    Scte35NoRegionalBlackoutFlag m_noRegionalBlackoutFlag{Scte35NoRegionalBlackoutFlag::NOT_SET};
    bool m_noRegionalBlackoutFlagHasBeenSet = false;

    Scte35WebDeliveryAllowedFlag m_webDeliveryAllowedFlag{Scte35WebDeliveryAllowedFlag::NOT_SET};
    bool m_webDeliveryAllowedFlagHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
