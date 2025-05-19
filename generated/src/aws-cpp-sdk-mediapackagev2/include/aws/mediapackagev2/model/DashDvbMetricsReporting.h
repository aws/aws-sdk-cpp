/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>For use with DVB-DASH profiles only. The settings for error reporting from
   * the playback device that you want Elemental MediaPackage to pass through to the
   * manifest.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/DashDvbMetricsReporting">AWS
   * API Reference</a></p>
   */
  class DashDvbMetricsReporting
  {
  public:
    AWS_MEDIAPACKAGEV2_API DashDvbMetricsReporting() = default;
    AWS_MEDIAPACKAGEV2_API DashDvbMetricsReporting(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API DashDvbMetricsReporting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL where playback devices send error reports.</p>
     */
    inline const Aws::String& GetReportingUrl() const { return m_reportingUrl; }
    inline bool ReportingUrlHasBeenSet() const { return m_reportingUrlHasBeenSet; }
    template<typename ReportingUrlT = Aws::String>
    void SetReportingUrl(ReportingUrlT&& value) { m_reportingUrlHasBeenSet = true; m_reportingUrl = std::forward<ReportingUrlT>(value); }
    template<typename ReportingUrlT = Aws::String>
    DashDvbMetricsReporting& WithReportingUrl(ReportingUrlT&& value) { SetReportingUrl(std::forward<ReportingUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of playback devices per 1000 that will send error reports to the
     * reporting URL. This represents the probability that a playback device will be a
     * reporting player for this session.</p>
     */
    inline int GetProbability() const { return m_probability; }
    inline bool ProbabilityHasBeenSet() const { return m_probabilityHasBeenSet; }
    inline void SetProbability(int value) { m_probabilityHasBeenSet = true; m_probability = value; }
    inline DashDvbMetricsReporting& WithProbability(int value) { SetProbability(value); return *this;}
    ///@}
  private:

    Aws::String m_reportingUrl;
    bool m_reportingUrlHasBeenSet = false;

    int m_probability{0};
    bool m_probabilityHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
