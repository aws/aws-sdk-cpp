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
    AWS_WELLARCHITECTED_API LensMetric();
    AWS_WELLARCHITECTED_API LensMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API LensMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The lens ARN.</p>
     */
    inline const Aws::String& GetLensArn() const{ return m_lensArn; }

    /**
     * <p>The lens ARN.</p>
     */
    inline bool LensArnHasBeenSet() const { return m_lensArnHasBeenSet; }

    /**
     * <p>The lens ARN.</p>
     */
    inline void SetLensArn(const Aws::String& value) { m_lensArnHasBeenSet = true; m_lensArn = value; }

    /**
     * <p>The lens ARN.</p>
     */
    inline void SetLensArn(Aws::String&& value) { m_lensArnHasBeenSet = true; m_lensArn = std::move(value); }

    /**
     * <p>The lens ARN.</p>
     */
    inline void SetLensArn(const char* value) { m_lensArnHasBeenSet = true; m_lensArn.assign(value); }

    /**
     * <p>The lens ARN.</p>
     */
    inline LensMetric& WithLensArn(const Aws::String& value) { SetLensArn(value); return *this;}

    /**
     * <p>The lens ARN.</p>
     */
    inline LensMetric& WithLensArn(Aws::String&& value) { SetLensArn(std::move(value)); return *this;}

    /**
     * <p>The lens ARN.</p>
     */
    inline LensMetric& WithLensArn(const char* value) { SetLensArn(value); return *this;}


    /**
     * <p>The metrics for the pillars in a lens.</p>
     */
    inline const Aws::Vector<PillarMetric>& GetPillars() const{ return m_pillars; }

    /**
     * <p>The metrics for the pillars in a lens.</p>
     */
    inline bool PillarsHasBeenSet() const { return m_pillarsHasBeenSet; }

    /**
     * <p>The metrics for the pillars in a lens.</p>
     */
    inline void SetPillars(const Aws::Vector<PillarMetric>& value) { m_pillarsHasBeenSet = true; m_pillars = value; }

    /**
     * <p>The metrics for the pillars in a lens.</p>
     */
    inline void SetPillars(Aws::Vector<PillarMetric>&& value) { m_pillarsHasBeenSet = true; m_pillars = std::move(value); }

    /**
     * <p>The metrics for the pillars in a lens.</p>
     */
    inline LensMetric& WithPillars(const Aws::Vector<PillarMetric>& value) { SetPillars(value); return *this;}

    /**
     * <p>The metrics for the pillars in a lens.</p>
     */
    inline LensMetric& WithPillars(Aws::Vector<PillarMetric>&& value) { SetPillars(std::move(value)); return *this;}

    /**
     * <p>The metrics for the pillars in a lens.</p>
     */
    inline LensMetric& AddPillars(const PillarMetric& value) { m_pillarsHasBeenSet = true; m_pillars.push_back(value); return *this; }

    /**
     * <p>The metrics for the pillars in a lens.</p>
     */
    inline LensMetric& AddPillars(PillarMetric&& value) { m_pillarsHasBeenSet = true; m_pillars.push_back(std::move(value)); return *this; }


    
    inline const Aws::Map<Risk, int>& GetRiskCounts() const{ return m_riskCounts; }

    
    inline bool RiskCountsHasBeenSet() const { return m_riskCountsHasBeenSet; }

    
    inline void SetRiskCounts(const Aws::Map<Risk, int>& value) { m_riskCountsHasBeenSet = true; m_riskCounts = value; }

    
    inline void SetRiskCounts(Aws::Map<Risk, int>&& value) { m_riskCountsHasBeenSet = true; m_riskCounts = std::move(value); }

    
    inline LensMetric& WithRiskCounts(const Aws::Map<Risk, int>& value) { SetRiskCounts(value); return *this;}

    
    inline LensMetric& WithRiskCounts(Aws::Map<Risk, int>&& value) { SetRiskCounts(std::move(value)); return *this;}

    
    inline LensMetric& AddRiskCounts(const Risk& key, int value) { m_riskCountsHasBeenSet = true; m_riskCounts.emplace(key, value); return *this; }

    
    inline LensMetric& AddRiskCounts(Risk&& key, int value) { m_riskCountsHasBeenSet = true; m_riskCounts.emplace(std::move(key), value); return *this; }

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
