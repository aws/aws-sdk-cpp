/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/wellarchitected/model/PillarMetric.h>
#include <aws/wellarchitected/model/Risk.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>A metric for a particular lens in a workload.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/LensMetric">AWS
   * API Reference</a></p>
   */
  class LensMetric
  {
  public:
    AWS_WELLARCHITECTED_API LensMetric() = default;
    AWS_WELLARCHITECTED_API LensMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API LensMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The lens ARN.</p>
     */
    inline const Aws::String& GetLensArn() const { return m_lensArn; }
    inline bool LensArnHasBeenSet() const { return m_lensArnHasBeenSet; }
    template<typename LensArnT = Aws::String>
    void SetLensArn(LensArnT&& value) { m_lensArnHasBeenSet = true; m_lensArn = std::forward<LensArnT>(value); }
    template<typename LensArnT = Aws::String>
    LensMetric& WithLensArn(LensArnT&& value) { SetLensArn(std::forward<LensArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metrics for the pillars in a lens.</p>
     */
    inline const Aws::Vector<PillarMetric>& GetPillars() const { return m_pillars; }
    inline bool PillarsHasBeenSet() const { return m_pillarsHasBeenSet; }
    template<typename PillarsT = Aws::Vector<PillarMetric>>
    void SetPillars(PillarsT&& value) { m_pillarsHasBeenSet = true; m_pillars = std::forward<PillarsT>(value); }
    template<typename PillarsT = Aws::Vector<PillarMetric>>
    LensMetric& WithPillars(PillarsT&& value) { SetPillars(std::forward<PillarsT>(value)); return *this;}
    template<typename PillarsT = PillarMetric>
    LensMetric& AddPillars(PillarsT&& value) { m_pillarsHasBeenSet = true; m_pillars.emplace_back(std::forward<PillarsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Risk, int>& GetRiskCounts() const { return m_riskCounts; }
    inline bool RiskCountsHasBeenSet() const { return m_riskCountsHasBeenSet; }
    template<typename RiskCountsT = Aws::Map<Risk, int>>
    void SetRiskCounts(RiskCountsT&& value) { m_riskCountsHasBeenSet = true; m_riskCounts = std::forward<RiskCountsT>(value); }
    template<typename RiskCountsT = Aws::Map<Risk, int>>
    LensMetric& WithRiskCounts(RiskCountsT&& value) { SetRiskCounts(std::forward<RiskCountsT>(value)); return *this;}
    inline LensMetric& AddRiskCounts(Risk key, int value) {
      m_riskCountsHasBeenSet = true; m_riskCounts.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_lensArn;
    bool m_lensArnHasBeenSet = false;

    Aws::Vector<PillarMetric> m_pillars;
    bool m_pillarsHasBeenSet = false;

    Aws::Map<Risk, int> m_riskCounts;
    bool m_riskCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
