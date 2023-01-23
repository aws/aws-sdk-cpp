/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/ReservationAutomaticRenewal.h>
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
   * The Renewal settings for Reservations<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/RenewalSettings">AWS
   * API Reference</a></p>
   */
  class RenewalSettings
  {
  public:
    AWS_MEDIALIVE_API RenewalSettings();
    AWS_MEDIALIVE_API RenewalSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API RenewalSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Automatic renewal status for the reservation
     */
    inline const ReservationAutomaticRenewal& GetAutomaticRenewal() const{ return m_automaticRenewal; }

    /**
     * Automatic renewal status for the reservation
     */
    inline bool AutomaticRenewalHasBeenSet() const { return m_automaticRenewalHasBeenSet; }

    /**
     * Automatic renewal status for the reservation
     */
    inline void SetAutomaticRenewal(const ReservationAutomaticRenewal& value) { m_automaticRenewalHasBeenSet = true; m_automaticRenewal = value; }

    /**
     * Automatic renewal status for the reservation
     */
    inline void SetAutomaticRenewal(ReservationAutomaticRenewal&& value) { m_automaticRenewalHasBeenSet = true; m_automaticRenewal = std::move(value); }

    /**
     * Automatic renewal status for the reservation
     */
    inline RenewalSettings& WithAutomaticRenewal(const ReservationAutomaticRenewal& value) { SetAutomaticRenewal(value); return *this;}

    /**
     * Automatic renewal status for the reservation
     */
    inline RenewalSettings& WithAutomaticRenewal(ReservationAutomaticRenewal&& value) { SetAutomaticRenewal(std::move(value)); return *this;}


    /**
     * Count for the reservation renewal
     */
    inline int GetRenewalCount() const{ return m_renewalCount; }

    /**
     * Count for the reservation renewal
     */
    inline bool RenewalCountHasBeenSet() const { return m_renewalCountHasBeenSet; }

    /**
     * Count for the reservation renewal
     */
    inline void SetRenewalCount(int value) { m_renewalCountHasBeenSet = true; m_renewalCount = value; }

    /**
     * Count for the reservation renewal
     */
    inline RenewalSettings& WithRenewalCount(int value) { SetRenewalCount(value); return *this;}

  private:

    ReservationAutomaticRenewal m_automaticRenewal;
    bool m_automaticRenewalHasBeenSet = false;

    int m_renewalCount;
    bool m_renewalCountHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
