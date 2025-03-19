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
    AWS_MEDIALIVE_API RenewalSettings() = default;
    AWS_MEDIALIVE_API RenewalSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API RenewalSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Automatic renewal status for the reservation
     */
    inline ReservationAutomaticRenewal GetAutomaticRenewal() const { return m_automaticRenewal; }
    inline bool AutomaticRenewalHasBeenSet() const { return m_automaticRenewalHasBeenSet; }
    inline void SetAutomaticRenewal(ReservationAutomaticRenewal value) { m_automaticRenewalHasBeenSet = true; m_automaticRenewal = value; }
    inline RenewalSettings& WithAutomaticRenewal(ReservationAutomaticRenewal value) { SetAutomaticRenewal(value); return *this;}
    ///@}

    ///@{
    /**
     * Count for the reservation renewal
     */
    inline int GetRenewalCount() const { return m_renewalCount; }
    inline bool RenewalCountHasBeenSet() const { return m_renewalCountHasBeenSet; }
    inline void SetRenewalCount(int value) { m_renewalCountHasBeenSet = true; m_renewalCount = value; }
    inline RenewalSettings& WithRenewalCount(int value) { SetRenewalCount(value); return *this;}
    ///@}
  private:

    ReservationAutomaticRenewal m_automaticRenewal{ReservationAutomaticRenewal::NOT_SET};
    bool m_automaticRenewalHasBeenSet = false;

    int m_renewalCount{0};
    bool m_renewalCountHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
