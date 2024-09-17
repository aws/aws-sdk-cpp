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
    AWS_PERSONALIZE_API HPOConfig();
    AWS_PERSONALIZE_API HPOConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API HPOConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The metric to optimize during HPO.</p>  <p>Amazon Personalize doesn't
     * support configuring the <code>hpoObjective</code> at this time.</p> 
     */
    inline const HPOObjective& GetHpoObjective() const{ return m_hpoObjective; }
    inline bool HpoObjectiveHasBeenSet() const { return m_hpoObjectiveHasBeenSet; }
    inline void SetHpoObjective(const HPOObjective& value) { m_hpoObjectiveHasBeenSet = true; m_hpoObjective = value; }
    inline void SetHpoObjective(HPOObjective&& value) { m_hpoObjectiveHasBeenSet = true; m_hpoObjective = std::move(value); }
    inline HPOConfig& WithHpoObjective(const HPOObjective& value) { SetHpoObjective(value); return *this;}
    inline HPOConfig& WithHpoObjective(HPOObjective&& value) { SetHpoObjective(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the resource configuration for HPO.</p>
     */
    inline const HPOResourceConfig& GetHpoResourceConfig() const{ return m_hpoResourceConfig; }
    inline bool HpoResourceConfigHasBeenSet() const { return m_hpoResourceConfigHasBeenSet; }
    inline void SetHpoResourceConfig(const HPOResourceConfig& value) { m_hpoResourceConfigHasBeenSet = true; m_hpoResourceConfig = value; }
    inline void SetHpoResourceConfig(HPOResourceConfig&& value) { m_hpoResourceConfigHasBeenSet = true; m_hpoResourceConfig = std::move(value); }
    inline HPOConfig& WithHpoResourceConfig(const HPOResourceConfig& value) { SetHpoResourceConfig(value); return *this;}
    inline HPOConfig& WithHpoResourceConfig(HPOResourceConfig&& value) { SetHpoResourceConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hyperparameters and their allowable ranges.</p>
     */
    inline const HyperParameterRanges& GetAlgorithmHyperParameterRanges() const{ return m_algorithmHyperParameterRanges; }
    inline bool AlgorithmHyperParameterRangesHasBeenSet() const { return m_algorithmHyperParameterRangesHasBeenSet; }
    inline void SetAlgorithmHyperParameterRanges(const HyperParameterRanges& value) { m_algorithmHyperParameterRangesHasBeenSet = true; m_algorithmHyperParameterRanges = value; }
    inline void SetAlgorithmHyperParameterRanges(HyperParameterRanges&& value) { m_algorithmHyperParameterRangesHasBeenSet = true; m_algorithmHyperParameterRanges = std::move(value); }
    inline HPOConfig& WithAlgorithmHyperParameterRanges(const HyperParameterRanges& value) { SetAlgorithmHyperParameterRanges(value); return *this;}
    inline HPOConfig& WithAlgorithmHyperParameterRanges(HyperParameterRanges&& value) { SetAlgorithmHyperParameterRanges(std::move(value)); return *this;}
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
