/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterInstanceType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>Details about a specific instance type within a flexible instance group,
 * including the count and configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterInstanceTypeDetail">AWS
 * API Reference</a></p>
 */
class ClusterInstanceTypeDetail {
 public:
  AWS_SAGEMAKER_API ClusterInstanceTypeDetail() = default;
  AWS_SAGEMAKER_API ClusterInstanceTypeDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ClusterInstanceTypeDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The instance type.</p>
   */
  inline ClusterInstanceType GetInstanceType() const { return m_instanceType; }
  inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
  inline void SetInstanceType(ClusterInstanceType value) {
    m_instanceTypeHasBeenSet = true;
    m_instanceType = value;
  }
  inline ClusterInstanceTypeDetail& WithInstanceType(ClusterInstanceType value) {
    SetInstanceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of instances of this type currently running in the instance
   * group.</p>
   */
  inline int GetCurrentCount() const { return m_currentCount; }
  inline bool CurrentCountHasBeenSet() const { return m_currentCountHasBeenSet; }
  inline void SetCurrentCount(int value) {
    m_currentCountHasBeenSet = true;
    m_currentCount = value;
  }
  inline ClusterInstanceTypeDetail& WithCurrentCount(int value) {
    SetCurrentCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of threads per CPU core for this instance type.</p>
   */
  inline int GetThreadsPerCore() const { return m_threadsPerCore; }
  inline bool ThreadsPerCoreHasBeenSet() const { return m_threadsPerCoreHasBeenSet; }
  inline void SetThreadsPerCore(int value) {
    m_threadsPerCoreHasBeenSet = true;
    m_threadsPerCore = value;
  }
  inline ClusterInstanceTypeDetail& WithThreadsPerCore(int value) {
    SetThreadsPerCore(value);
    return *this;
  }
  ///@}
 private:
  ClusterInstanceType m_instanceType{ClusterInstanceType::NOT_SET};

  int m_currentCount{0};

  int m_threadsPerCore{0};
  bool m_instanceTypeHasBeenSet = false;
  bool m_currentCountHasBeenSet = false;
  bool m_threadsPerCoreHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
