/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>An object that contains information about the volume of email sent on each
   * day of the analysis period.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DailyVolume">AWS
   * API Reference</a></p>
   */
  class DailyVolume
  {
  public:
    AWS_SESV2_API DailyVolume() = default;
    AWS_SESV2_API DailyVolume(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API DailyVolume& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date that the DailyVolume metrics apply to, in Unix time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    template<typename StartDateT = Aws::Utils::DateTime>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::Utils::DateTime>
    DailyVolume& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains inbox placement metrics for a specific day in the
     * analysis period.</p>
     */
    inline const VolumeStatistics& GetVolumeStatistics() const { return m_volumeStatistics; }
    inline bool VolumeStatisticsHasBeenSet() const { return m_volumeStatisticsHasBeenSet; }
    template<typename VolumeStatisticsT = VolumeStatistics>
    void SetVolumeStatistics(VolumeStatisticsT&& value) { m_volumeStatisticsHasBeenSet = true; m_volumeStatistics = std::forward<VolumeStatisticsT>(value); }
    template<typename VolumeStatisticsT = VolumeStatistics>
    DailyVolume& WithVolumeStatistics(VolumeStatisticsT&& value) { SetVolumeStatistics(std::forward<VolumeStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains inbox placement metrics for a specified day in the
     * analysis period, broken out by the recipient's email provider.</p>
     */
    inline const Aws::Vector<DomainIspPlacement>& GetDomainIspPlacements() const { return m_domainIspPlacements; }
    inline bool DomainIspPlacementsHasBeenSet() const { return m_domainIspPlacementsHasBeenSet; }
    template<typename DomainIspPlacementsT = Aws::Vector<DomainIspPlacement>>
    void SetDomainIspPlacements(DomainIspPlacementsT&& value) { m_domainIspPlacementsHasBeenSet = true; m_domainIspPlacements = std::forward<DomainIspPlacementsT>(value); }
    template<typename DomainIspPlacementsT = Aws::Vector<DomainIspPlacement>>
    DailyVolume& WithDomainIspPlacements(DomainIspPlacementsT&& value) { SetDomainIspPlacements(std::forward<DomainIspPlacementsT>(value)); return *this;}
    template<typename DomainIspPlacementsT = DomainIspPlacement>
    DailyVolume& AddDomainIspPlacements(DomainIspPlacementsT&& value) { m_domainIspPlacementsHasBeenSet = true; m_domainIspPlacements.emplace_back(std::forward<DomainIspPlacementsT>(value)); return *this; }
    ///@}
  private:

    Aws::Utils::DateTime m_startDate{};
    bool m_startDateHasBeenSet = false;

    VolumeStatistics m_volumeStatistics;
    bool m_volumeStatisticsHasBeenSet = false;

    Aws::Vector<DomainIspPlacement> m_domainIspPlacements;
    bool m_domainIspPlacementsHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
