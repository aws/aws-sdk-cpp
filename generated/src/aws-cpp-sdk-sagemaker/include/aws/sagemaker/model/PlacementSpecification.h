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
   * <p>Specifies how instances should be placed on a specific
   * UltraServer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PlacementSpecification">AWS
   * API Reference</a></p>
   */
  class PlacementSpecification
  {
  public:
    AWS_SAGEMAKER_API PlacementSpecification() = default;
    AWS_SAGEMAKER_API PlacementSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API PlacementSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the UltraServer where instances should be
     * placed.</p>
     */
    inline const Aws::String& GetUltraServerId() const { return m_ultraServerId; }
    inline bool UltraServerIdHasBeenSet() const { return m_ultraServerIdHasBeenSet; }
    template<typename UltraServerIdT = Aws::String>
    void SetUltraServerId(UltraServerIdT&& value) { m_ultraServerIdHasBeenSet = true; m_ultraServerId = std::forward<UltraServerIdT>(value); }
    template<typename UltraServerIdT = Aws::String>
    PlacementSpecification& WithUltraServerId(UltraServerIdT&& value) { SetUltraServerId(std::forward<UltraServerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of ML compute instances required to be placed together on the same
     * UltraServer. Minimum value of 1.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline PlacementSpecification& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}
  private:

    Aws::String m_ultraServerId;
    bool m_ultraServerIdHasBeenSet = false;

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
