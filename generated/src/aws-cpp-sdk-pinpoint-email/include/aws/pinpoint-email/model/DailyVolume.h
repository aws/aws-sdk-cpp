/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pinpoint-email/model/VolumeStatistics.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-email/model/DomainIspPlacement.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>An object that contains information about the volume of email sent on each
   * day of the analysis period.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/DailyVolume">AWS
   * API Reference</a></p>
   */
  class DailyVolume
  {
  public:
    AWS_PINPOINTEMAIL_API DailyVolume();
    AWS_PINPOINTEMAIL_API DailyVolume(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API DailyVolume& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date that the DailyVolume metrics apply to, in Unix time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }

    /**
     * <p>The date that the DailyVolume metrics apply to, in Unix time.</p>
     */
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }

    /**
     * <p>The date that the DailyVolume metrics apply to, in Unix time.</p>
     */
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDateHasBeenSet = true; m_startDate = value; }

    /**
     * <p>The date that the DailyVolume metrics apply to, in Unix time.</p>
     */
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }

    /**
     * <p>The date that the DailyVolume metrics apply to, in Unix time.</p>
     */
    inline DailyVolume& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}

    /**
     * <p>The date that the DailyVolume metrics apply to, in Unix time.</p>
     */
    inline DailyVolume& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}


    /**
     * <p>An object that contains inbox placement metrics for a specific day in the
     * analysis period.</p>
     */
    inline const VolumeStatistics& GetVolumeStatistics() const{ return m_volumeStatistics; }

    /**
     * <p>An object that contains inbox placement metrics for a specific day in the
     * analysis period.</p>
     */
    inline bool VolumeStatisticsHasBeenSet() const { return m_volumeStatisticsHasBeenSet; }

    /**
     * <p>An object that contains inbox placement metrics for a specific day in the
     * analysis period.</p>
     */
    inline void SetVolumeStatistics(const VolumeStatistics& value) { m_volumeStatisticsHasBeenSet = true; m_volumeStatistics = value; }

    /**
     * <p>An object that contains inbox placement metrics for a specific day in the
     * analysis period.</p>
     */
    inline void SetVolumeStatistics(VolumeStatistics&& value) { m_volumeStatisticsHasBeenSet = true; m_volumeStatistics = std::move(value); }

    /**
     * <p>An object that contains inbox placement metrics for a specific day in the
     * analysis period.</p>
     */
    inline DailyVolume& WithVolumeStatistics(const VolumeStatistics& value) { SetVolumeStatistics(value); return *this;}

    /**
     * <p>An object that contains inbox placement metrics for a specific day in the
     * analysis period.</p>
     */
    inline DailyVolume& WithVolumeStatistics(VolumeStatistics&& value) { SetVolumeStatistics(std::move(value)); return *this;}


    /**
     * <p>An object that contains inbox placement metrics for a specified day in the
     * analysis period, broken out by the recipient's email provider.</p>
     */
    inline const Aws::Vector<DomainIspPlacement>& GetDomainIspPlacements() const{ return m_domainIspPlacements; }

    /**
     * <p>An object that contains inbox placement metrics for a specified day in the
     * analysis period, broken out by the recipient's email provider.</p>
     */
    inline bool DomainIspPlacementsHasBeenSet() const { return m_domainIspPlacementsHasBeenSet; }

    /**
     * <p>An object that contains inbox placement metrics for a specified day in the
     * analysis period, broken out by the recipient's email provider.</p>
     */
    inline void SetDomainIspPlacements(const Aws::Vector<DomainIspPlacement>& value) { m_domainIspPlacementsHasBeenSet = true; m_domainIspPlacements = value; }

    /**
     * <p>An object that contains inbox placement metrics for a specified day in the
     * analysis period, broken out by the recipient's email provider.</p>
     */
    inline void SetDomainIspPlacements(Aws::Vector<DomainIspPlacement>&& value) { m_domainIspPlacementsHasBeenSet = true; m_domainIspPlacements = std::move(value); }

    /**
     * <p>An object that contains inbox placement metrics for a specified day in the
     * analysis period, broken out by the recipient's email provider.</p>
     */
    inline DailyVolume& WithDomainIspPlacements(const Aws::Vector<DomainIspPlacement>& value) { SetDomainIspPlacements(value); return *this;}

    /**
     * <p>An object that contains inbox placement metrics for a specified day in the
     * analysis period, broken out by the recipient's email provider.</p>
     */
    inline DailyVolume& WithDomainIspPlacements(Aws::Vector<DomainIspPlacement>&& value) { SetDomainIspPlacements(std::move(value)); return *this;}

    /**
     * <p>An object that contains inbox placement metrics for a specified day in the
     * analysis period, broken out by the recipient's email provider.</p>
     */
    inline DailyVolume& AddDomainIspPlacements(const DomainIspPlacement& value) { m_domainIspPlacementsHasBeenSet = true; m_domainIspPlacements.push_back(value); return *this; }

    /**
     * <p>An object that contains inbox placement metrics for a specified day in the
     * analysis period, broken out by the recipient's email provider.</p>
     */
    inline DailyVolume& AddDomainIspPlacements(DomainIspPlacement&& value) { m_domainIspPlacementsHasBeenSet = true; m_domainIspPlacements.push_back(std::move(value)); return *this; }

  private:

    Aws::Utils::DateTime m_startDate;
    bool m_startDateHasBeenSet = false;

    VolumeStatistics m_volumeStatistics;
    bool m_volumeStatisticsHasBeenSet = false;

    Aws::Vector<DomainIspPlacement> m_domainIspPlacements;
    bool m_domainIspPlacementsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
