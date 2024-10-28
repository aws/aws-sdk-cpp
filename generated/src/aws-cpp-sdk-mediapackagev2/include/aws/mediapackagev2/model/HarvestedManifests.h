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
    AWS_MEDIAPACKAGEV2_API HarvestedManifests();
    AWS_MEDIAPACKAGEV2_API HarvestedManifests(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API HarvestedManifests& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of harvested HLS manifests.</p>
     */
    inline const Aws::Vector<HarvestedHlsManifest>& GetHlsManifests() const{ return m_hlsManifests; }
    inline bool HlsManifestsHasBeenSet() const { return m_hlsManifestsHasBeenSet; }
    inline void SetHlsManifests(const Aws::Vector<HarvestedHlsManifest>& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests = value; }
    inline void SetHlsManifests(Aws::Vector<HarvestedHlsManifest>&& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests = std::move(value); }
    inline HarvestedManifests& WithHlsManifests(const Aws::Vector<HarvestedHlsManifest>& value) { SetHlsManifests(value); return *this;}
    inline HarvestedManifests& WithHlsManifests(Aws::Vector<HarvestedHlsManifest>&& value) { SetHlsManifests(std::move(value)); return *this;}
    inline HarvestedManifests& AddHlsManifests(const HarvestedHlsManifest& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests.push_back(value); return *this; }
    inline HarvestedManifests& AddHlsManifests(HarvestedHlsManifest&& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of harvested DASH manifests.</p>
     */
    inline const Aws::Vector<HarvestedDashManifest>& GetDashManifests() const{ return m_dashManifests; }
    inline bool DashManifestsHasBeenSet() const { return m_dashManifestsHasBeenSet; }
    inline void SetDashManifests(const Aws::Vector<HarvestedDashManifest>& value) { m_dashManifestsHasBeenSet = true; m_dashManifests = value; }
    inline void SetDashManifests(Aws::Vector<HarvestedDashManifest>&& value) { m_dashManifestsHasBeenSet = true; m_dashManifests = std::move(value); }
    inline HarvestedManifests& WithDashManifests(const Aws::Vector<HarvestedDashManifest>& value) { SetDashManifests(value); return *this;}
    inline HarvestedManifests& WithDashManifests(Aws::Vector<HarvestedDashManifest>&& value) { SetDashManifests(std::move(value)); return *this;}
    inline HarvestedManifests& AddDashManifests(const HarvestedDashManifest& value) { m_dashManifestsHasBeenSet = true; m_dashManifests.push_back(value); return *this; }
    inline HarvestedManifests& AddDashManifests(HarvestedDashManifest&& value) { m_dashManifestsHasBeenSet = true; m_dashManifests.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of harvested Low-Latency HLS manifests.</p>
     */
    inline const Aws::Vector<HarvestedLowLatencyHlsManifest>& GetLowLatencyHlsManifests() const{ return m_lowLatencyHlsManifests; }
    inline bool LowLatencyHlsManifestsHasBeenSet() const { return m_lowLatencyHlsManifestsHasBeenSet; }
    inline void SetLowLatencyHlsManifests(const Aws::Vector<HarvestedLowLatencyHlsManifest>& value) { m_lowLatencyHlsManifestsHasBeenSet = true; m_lowLatencyHlsManifests = value; }
    inline void SetLowLatencyHlsManifests(Aws::Vector<HarvestedLowLatencyHlsManifest>&& value) { m_lowLatencyHlsManifestsHasBeenSet = true; m_lowLatencyHlsManifests = std::move(value); }
    inline HarvestedManifests& WithLowLatencyHlsManifests(const Aws::Vector<HarvestedLowLatencyHlsManifest>& value) { SetLowLatencyHlsManifests(value); return *this;}
    inline HarvestedManifests& WithLowLatencyHlsManifests(Aws::Vector<HarvestedLowLatencyHlsManifest>&& value) { SetLowLatencyHlsManifests(std::move(value)); return *this;}
    inline HarvestedManifests& AddLowLatencyHlsManifests(const HarvestedLowLatencyHlsManifest& value) { m_lowLatencyHlsManifestsHasBeenSet = true; m_lowLatencyHlsManifests.push_back(value); return *this; }
    inline HarvestedManifests& AddLowLatencyHlsManifests(HarvestedLowLatencyHlsManifest&& value) { m_lowLatencyHlsManifestsHasBeenSet = true; m_lowLatencyHlsManifests.push_back(std::move(value)); return *this; }
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
