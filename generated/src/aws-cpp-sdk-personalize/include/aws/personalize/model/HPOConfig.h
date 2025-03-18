/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/HPOObjective.h>
#include <aws/personalize/model/HPOResourceConfig.h>
#include <aws/personalize/model/HyperParameterRanges.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Describes the properties for hyperparameter optimization (HPO).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/HPOConfig">AWS
   * API Reference</a></p>
   */
  class HPOConfig
  {
  public:
    AWS_PERSONALIZE_API HPOConfig() = default;
    AWS_PERSONALIZE_API HPOConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API HPOConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The metric to optimize during HPO.</p>  <p>Amazon Personalize doesn't
     * support configuring the <code>hpoObjective</code> at this time.</p> 
     */
    inline const HPOObjective& GetHpoObjective() const { return m_hpoObjective; }
    inline bool HpoObjectiveHasBeenSet() const { return m_hpoObjectiveHasBeenSet; }
    template<typename HpoObjectiveT = HPOObjective>
    void SetHpoObjective(HpoObjectiveT&& value) { m_hpoObjectiveHasBeenSet = true; m_hpoObjective = std::forward<HpoObjectiveT>(value); }
    template<typename HpoObjectiveT = HPOObjective>
    HPOConfig& WithHpoObjective(HpoObjectiveT&& value) { SetHpoObjective(std::forward<HpoObjectiveT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the resource configuration for HPO.</p>
     */
    inline const HPOResourceConfig& GetHpoResourceConfig() const { return m_hpoResourceConfig; }
    inline bool HpoResourceConfigHasBeenSet() const { return m_hpoResourceConfigHasBeenSet; }
    template<typename HpoResourceConfigT = HPOResourceConfig>
    void SetHpoResourceConfig(HpoResourceConfigT&& value) { m_hpoResourceConfigHasBeenSet = true; m_hpoResourceConfig = std::forward<HpoResourceConfigT>(value); }
    template<typename HpoResourceConfigT = HPOResourceConfig>
    HPOConfig& WithHpoResourceConfig(HpoResourceConfigT&& value) { SetHpoResourceConfig(std::forward<HpoResourceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hyperparameters and their allowable ranges.</p>
     */
    inline const HyperParameterRanges& GetAlgorithmHyperParameterRanges() const { return m_algorithmHyperParameterRanges; }
    inline bool AlgorithmHyperParameterRangesHasBeenSet() const { return m_algorithmHyperParameterRangesHasBeenSet; }
    template<typename AlgorithmHyperParameterRangesT = HyperParameterRanges>
    void SetAlgorithmHyperParameterRanges(AlgorithmHyperParameterRangesT&& value) { m_algorithmHyperParameterRangesHasBeenSet = true; m_algorithmHyperParameterRanges = std::forward<AlgorithmHyperParameterRangesT>(value); }
    template<typename AlgorithmHyperParameterRangesT = HyperParameterRanges>
    HPOConfig& WithAlgorithmHyperParameterRanges(AlgorithmHyperParameterRangesT&& value) { SetAlgorithmHyperParameterRanges(std::forward<AlgorithmHyperParameterRangesT>(value)); return *this;}
    ///@}
  private:

    HPOObjective m_hpoObjective;
    bool m_hpoObjectiveHasBeenSet = false;

    HPOResourceConfig m_hpoResourceConfig;
    bool m_hpoResourceConfigHasBeenSet = false;

    HyperParameterRanges m_algorithmHyperParameterRanges;
    bool m_algorithmHyperParameterRangesHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
