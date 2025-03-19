/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/model/AttackVolumeStatistics.h>
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
namespace Shield
{
namespace Model
{

  /**
   * <p>Information about the volume of attacks during the time period, included in
   * an <a>AttackStatisticsDataItem</a>. If the accompanying <code>AttackCount</code>
   * in the statistics object is zero, this setting might be empty.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/AttackVolume">AWS
   * API Reference</a></p>
   */
  class AttackVolume
  {
  public:
    AWS_SHIELD_API AttackVolume() = default;
    AWS_SHIELD_API AttackVolume(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API AttackVolume& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A statistics object that uses bits per second as the unit. This is included
     * for network level attacks. </p>
     */
    inline const AttackVolumeStatistics& GetBitsPerSecond() const { return m_bitsPerSecond; }
    inline bool BitsPerSecondHasBeenSet() const { return m_bitsPerSecondHasBeenSet; }
    template<typename BitsPerSecondT = AttackVolumeStatistics>
    void SetBitsPerSecond(BitsPerSecondT&& value) { m_bitsPerSecondHasBeenSet = true; m_bitsPerSecond = std::forward<BitsPerSecondT>(value); }
    template<typename BitsPerSecondT = AttackVolumeStatistics>
    AttackVolume& WithBitsPerSecond(BitsPerSecondT&& value) { SetBitsPerSecond(std::forward<BitsPerSecondT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A statistics object that uses packets per second as the unit. This is
     * included for network level attacks. </p>
     */
    inline const AttackVolumeStatistics& GetPacketsPerSecond() const { return m_packetsPerSecond; }
    inline bool PacketsPerSecondHasBeenSet() const { return m_packetsPerSecondHasBeenSet; }
    template<typename PacketsPerSecondT = AttackVolumeStatistics>
    void SetPacketsPerSecond(PacketsPerSecondT&& value) { m_packetsPerSecondHasBeenSet = true; m_packetsPerSecond = std::forward<PacketsPerSecondT>(value); }
    template<typename PacketsPerSecondT = AttackVolumeStatistics>
    AttackVolume& WithPacketsPerSecond(PacketsPerSecondT&& value) { SetPacketsPerSecond(std::forward<PacketsPerSecondT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A statistics object that uses requests per second as the unit. This is
     * included for application level attacks, and is only available for accounts that
     * are subscribed to Shield Advanced.</p>
     */
    inline const AttackVolumeStatistics& GetRequestsPerSecond() const { return m_requestsPerSecond; }
    inline bool RequestsPerSecondHasBeenSet() const { return m_requestsPerSecondHasBeenSet; }
    template<typename RequestsPerSecondT = AttackVolumeStatistics>
    void SetRequestsPerSecond(RequestsPerSecondT&& value) { m_requestsPerSecondHasBeenSet = true; m_requestsPerSecond = std::forward<RequestsPerSecondT>(value); }
    template<typename RequestsPerSecondT = AttackVolumeStatistics>
    AttackVolume& WithRequestsPerSecond(RequestsPerSecondT&& value) { SetRequestsPerSecond(std::forward<RequestsPerSecondT>(value)); return *this;}
    ///@}
  private:

    AttackVolumeStatistics m_bitsPerSecond;
    bool m_bitsPerSecondHasBeenSet = false;

    AttackVolumeStatistics m_packetsPerSecond;
    bool m_packetsPerSecondHasBeenSet = false;

    AttackVolumeStatistics m_requestsPerSecond;
    bool m_requestsPerSecondHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
