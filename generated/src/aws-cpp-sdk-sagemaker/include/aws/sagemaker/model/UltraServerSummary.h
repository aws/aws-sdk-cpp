/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ReservedCapacityInstanceType.h>
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
   * <p>A summary of UltraServer resources and their current status.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UltraServerSummary">AWS
   * API Reference</a></p>
   */
  class UltraServerSummary
  {
  public:
    AWS_SAGEMAKER_API UltraServerSummary() = default;
    AWS_SAGEMAKER_API UltraServerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API UltraServerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of UltraServer, such as ml.u-p6e-gb200x72.</p>
     */
    inline const Aws::String& GetUltraServerType() const { return m_ultraServerType; }
    inline bool UltraServerTypeHasBeenSet() const { return m_ultraServerTypeHasBeenSet; }
    template<typename UltraServerTypeT = Aws::String>
    void SetUltraServerType(UltraServerTypeT&& value) { m_ultraServerTypeHasBeenSet = true; m_ultraServerType = std::forward<UltraServerTypeT>(value); }
    template<typename UltraServerTypeT = Aws::String>
    UltraServerSummary& WithUltraServerType(UltraServerTypeT&& value) { SetUltraServerType(std::forward<UltraServerTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instance type used in the UltraServer.</p>
     */
    inline ReservedCapacityInstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(ReservedCapacityInstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline UltraServerSummary& WithInstanceType(ReservedCapacityInstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of UltraServers of this type.</p>
     */
    inline int GetUltraServerCount() const { return m_ultraServerCount; }
    inline bool UltraServerCountHasBeenSet() const { return m_ultraServerCountHasBeenSet; }
    inline void SetUltraServerCount(int value) { m_ultraServerCountHasBeenSet = true; m_ultraServerCount = value; }
    inline UltraServerSummary& WithUltraServerCount(int value) { SetUltraServerCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of available spare instances in the UltraServers.</p>
     */
    inline int GetAvailableSpareInstanceCount() const { return m_availableSpareInstanceCount; }
    inline bool AvailableSpareInstanceCountHasBeenSet() const { return m_availableSpareInstanceCountHasBeenSet; }
    inline void SetAvailableSpareInstanceCount(int value) { m_availableSpareInstanceCountHasBeenSet = true; m_availableSpareInstanceCount = value; }
    inline UltraServerSummary& WithAvailableSpareInstanceCount(int value) { SetAvailableSpareInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of instances across all UltraServers of this type that are
     * currently in an unhealthy state.</p>
     */
    inline int GetUnhealthyInstanceCount() const { return m_unhealthyInstanceCount; }
    inline bool UnhealthyInstanceCountHasBeenSet() const { return m_unhealthyInstanceCountHasBeenSet; }
    inline void SetUnhealthyInstanceCount(int value) { m_unhealthyInstanceCountHasBeenSet = true; m_unhealthyInstanceCount = value; }
    inline UltraServerSummary& WithUnhealthyInstanceCount(int value) { SetUnhealthyInstanceCount(value); return *this;}
    ///@}
  private:

    Aws::String m_ultraServerType;
    bool m_ultraServerTypeHasBeenSet = false;

    ReservedCapacityInstanceType m_instanceType{ReservedCapacityInstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    int m_ultraServerCount{0};
    bool m_ultraServerCountHasBeenSet = false;

    int m_availableSpareInstanceCount{0};
    bool m_availableSpareInstanceCountHasBeenSet = false;

    int m_unhealthyInstanceCount{0};
    bool m_unhealthyInstanceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
