/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/VolumeStatistics.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/DomainIspPlacement.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that contains information about email that was sent from the
   * selected domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/OverallVolume">AWS
   * API Reference</a></p>
   */
  class OverallVolume
  {
  public:
    AWS_SESV2_API OverallVolume() = default;
    AWS_SESV2_API OverallVolume(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API OverallVolume& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that contains information about the numbers of messages that
     * arrived in recipients' inboxes and junk mail folders.</p>
     */
    inline const VolumeStatistics& GetVolumeStatistics() const { return m_volumeStatistics; }
    inline bool VolumeStatisticsHasBeenSet() const { return m_volumeStatisticsHasBeenSet; }
    template<typename VolumeStatisticsT = VolumeStatistics>
    void SetVolumeStatistics(VolumeStatisticsT&& value) { m_volumeStatisticsHasBeenSet = true; m_volumeStatistics = std::forward<VolumeStatisticsT>(value); }
    template<typename VolumeStatisticsT = VolumeStatistics>
    OverallVolume& WithVolumeStatistics(VolumeStatisticsT&& value) { SetVolumeStatistics(std::forward<VolumeStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of emails that were sent from the domain that were read by
     * their recipients.</p>
     */
    inline double GetReadRatePercent() const { return m_readRatePercent; }
    inline bool ReadRatePercentHasBeenSet() const { return m_readRatePercentHasBeenSet; }
    inline void SetReadRatePercent(double value) { m_readRatePercentHasBeenSet = true; m_readRatePercent = value; }
    inline OverallVolume& WithReadRatePercent(double value) { SetReadRatePercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains inbox and junk mail placement metrics for individual
     * email providers.</p>
     */
    inline const Aws::Vector<DomainIspPlacement>& GetDomainIspPlacements() const { return m_domainIspPlacements; }
    inline bool DomainIspPlacementsHasBeenSet() const { return m_domainIspPlacementsHasBeenSet; }
    template<typename DomainIspPlacementsT = Aws::Vector<DomainIspPlacement>>
    void SetDomainIspPlacements(DomainIspPlacementsT&& value) { m_domainIspPlacementsHasBeenSet = true; m_domainIspPlacements = std::forward<DomainIspPlacementsT>(value); }
    template<typename DomainIspPlacementsT = Aws::Vector<DomainIspPlacement>>
    OverallVolume& WithDomainIspPlacements(DomainIspPlacementsT&& value) { SetDomainIspPlacements(std::forward<DomainIspPlacementsT>(value)); return *this;}
    template<typename DomainIspPlacementsT = DomainIspPlacement>
    OverallVolume& AddDomainIspPlacements(DomainIspPlacementsT&& value) { m_domainIspPlacementsHasBeenSet = true; m_domainIspPlacements.emplace_back(std::forward<DomainIspPlacementsT>(value)); return *this; }
    ///@}
  private:

    VolumeStatistics m_volumeStatistics;
    bool m_volumeStatisticsHasBeenSet = false;

    double m_readRatePercent{0.0};
    bool m_readRatePercentHasBeenSet = false;

    Aws::Vector<DomainIspPlacement> m_domainIspPlacements;
    bool m_domainIspPlacementsHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
