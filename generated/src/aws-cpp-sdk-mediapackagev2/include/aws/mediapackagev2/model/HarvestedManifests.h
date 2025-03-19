/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackagev2/model/HarvestedHlsManifest.h>
#include <aws/mediapackagev2/model/HarvestedDashManifest.h>
#include <aws/mediapackagev2/model/HarvestedLowLatencyHlsManifest.h>
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
   * <p>A collection of harvested manifests of different types.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/HarvestedManifests">AWS
   * API Reference</a></p>
   */
  class HarvestedManifests
  {
  public:
    AWS_MEDIAPACKAGEV2_API HarvestedManifests() = default;
    AWS_MEDIAPACKAGEV2_API HarvestedManifests(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API HarvestedManifests& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of harvested HLS manifests.</p>
     */
    inline const Aws::Vector<HarvestedHlsManifest>& GetHlsManifests() const { return m_hlsManifests; }
    inline bool HlsManifestsHasBeenSet() const { return m_hlsManifestsHasBeenSet; }
    template<typename HlsManifestsT = Aws::Vector<HarvestedHlsManifest>>
    void SetHlsManifests(HlsManifestsT&& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests = std::forward<HlsManifestsT>(value); }
    template<typename HlsManifestsT = Aws::Vector<HarvestedHlsManifest>>
    HarvestedManifests& WithHlsManifests(HlsManifestsT&& value) { SetHlsManifests(std::forward<HlsManifestsT>(value)); return *this;}
    template<typename HlsManifestsT = HarvestedHlsManifest>
    HarvestedManifests& AddHlsManifests(HlsManifestsT&& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests.emplace_back(std::forward<HlsManifestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of harvested DASH manifests.</p>
     */
    inline const Aws::Vector<HarvestedDashManifest>& GetDashManifests() const { return m_dashManifests; }
    inline bool DashManifestsHasBeenSet() const { return m_dashManifestsHasBeenSet; }
    template<typename DashManifestsT = Aws::Vector<HarvestedDashManifest>>
    void SetDashManifests(DashManifestsT&& value) { m_dashManifestsHasBeenSet = true; m_dashManifests = std::forward<DashManifestsT>(value); }
    template<typename DashManifestsT = Aws::Vector<HarvestedDashManifest>>
    HarvestedManifests& WithDashManifests(DashManifestsT&& value) { SetDashManifests(std::forward<DashManifestsT>(value)); return *this;}
    template<typename DashManifestsT = HarvestedDashManifest>
    HarvestedManifests& AddDashManifests(DashManifestsT&& value) { m_dashManifestsHasBeenSet = true; m_dashManifests.emplace_back(std::forward<DashManifestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of harvested Low-Latency HLS manifests.</p>
     */
    inline const Aws::Vector<HarvestedLowLatencyHlsManifest>& GetLowLatencyHlsManifests() const { return m_lowLatencyHlsManifests; }
    inline bool LowLatencyHlsManifestsHasBeenSet() const { return m_lowLatencyHlsManifestsHasBeenSet; }
    template<typename LowLatencyHlsManifestsT = Aws::Vector<HarvestedLowLatencyHlsManifest>>
    void SetLowLatencyHlsManifests(LowLatencyHlsManifestsT&& value) { m_lowLatencyHlsManifestsHasBeenSet = true; m_lowLatencyHlsManifests = std::forward<LowLatencyHlsManifestsT>(value); }
    template<typename LowLatencyHlsManifestsT = Aws::Vector<HarvestedLowLatencyHlsManifest>>
    HarvestedManifests& WithLowLatencyHlsManifests(LowLatencyHlsManifestsT&& value) { SetLowLatencyHlsManifests(std::forward<LowLatencyHlsManifestsT>(value)); return *this;}
    template<typename LowLatencyHlsManifestsT = HarvestedLowLatencyHlsManifest>
    HarvestedManifests& AddLowLatencyHlsManifests(LowLatencyHlsManifestsT&& value) { m_lowLatencyHlsManifestsHasBeenSet = true; m_lowLatencyHlsManifests.emplace_back(std::forward<LowLatencyHlsManifestsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<HarvestedHlsManifest> m_hlsManifests;
    bool m_hlsManifestsHasBeenSet = false;

    Aws::Vector<HarvestedDashManifest> m_dashManifests;
    bool m_dashManifestsHasBeenSet = false;

    Aws::Vector<HarvestedLowLatencyHlsManifest> m_lowLatencyHlsManifests;
    bool m_lowLatencyHlsManifestsHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
