/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The target entity to allocate compute resources to.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ComputeQuotaTarget">AWS
   * API Reference</a></p>
   */
  class ComputeQuotaTarget
  {
  public:
    AWS_SAGEMAKER_API ComputeQuotaTarget() = default;
    AWS_SAGEMAKER_API ComputeQuotaTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ComputeQuotaTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the team to allocate compute resources to.</p>
     */
    inline const Aws::String& GetTeamName() const { return m_teamName; }
    inline bool TeamNameHasBeenSet() const { return m_teamNameHasBeenSet; }
    template<typename TeamNameT = Aws::String>
    void SetTeamName(TeamNameT&& value) { m_teamNameHasBeenSet = true; m_teamName = std::forward<TeamNameT>(value); }
    template<typename TeamNameT = Aws::String>
    ComputeQuotaTarget& WithTeamName(TeamNameT&& value) { SetTeamName(std::forward<TeamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Assigned entity fair-share weight. Idle compute will be shared across
     * entities based on these assigned weights. This weight is only used when
     * <code>FairShare</code> is enabled.</p> <p>A weight of 0 is the lowest priority
     * and 100 is the highest. Weight 0 is the default.</p>
     */
    inline int GetFairShareWeight() const { return m_fairShareWeight; }
    inline bool FairShareWeightHasBeenSet() const { return m_fairShareWeightHasBeenSet; }
    inline void SetFairShareWeight(int value) { m_fairShareWeightHasBeenSet = true; m_fairShareWeight = value; }
    inline ComputeQuotaTarget& WithFairShareWeight(int value) { SetFairShareWeight(value); return *this;}
    ///@}
  private:

    Aws::String m_teamName;
    bool m_teamNameHasBeenSet = false;

    int m_fairShareWeight{0};
    bool m_fairShareWeightHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
