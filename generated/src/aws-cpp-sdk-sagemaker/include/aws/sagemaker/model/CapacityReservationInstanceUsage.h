/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CapacityReservationResourceUsage.h>

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
 * <p>The instances from a SageMaker Capacity Reservation that one account
 * uses.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CapacityReservationInstanceUsage">AWS
 * API Reference</a></p>
 */
class CapacityReservationInstanceUsage {
 public:
  AWS_SAGEMAKER_API CapacityReservationInstanceUsage() = default;
  AWS_SAGEMAKER_API CapacityReservationInstanceUsage(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API CapacityReservationInstanceUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that uses the instances.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  CapacityReservationInstanceUsage& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of instances that the account uses, across all resource types.</p>
   */
  inline int GetInUseInstanceCount() const { return m_inUseInstanceCount; }
  inline bool InUseInstanceCountHasBeenSet() const { return m_inUseInstanceCountHasBeenSet; }
  inline void SetInUseInstanceCount(int value) {
    m_inUseInstanceCountHasBeenSet = true;
    m_inUseInstanceCount = value;
  }
  inline CapacityReservationInstanceUsage& WithInUseInstanceCount(int value) {
    SetInUseInstanceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instance usage for each resource type that has instances in use in the
   * account.</p>
   */
  inline const Aws::Vector<CapacityReservationResourceUsage>& GetResourcesUsage() const { return m_resourcesUsage; }
  inline bool ResourcesUsageHasBeenSet() const { return m_resourcesUsageHasBeenSet; }
  template <typename ResourcesUsageT = Aws::Vector<CapacityReservationResourceUsage>>
  void SetResourcesUsage(ResourcesUsageT&& value) {
    m_resourcesUsageHasBeenSet = true;
    m_resourcesUsage = std::forward<ResourcesUsageT>(value);
  }
  template <typename ResourcesUsageT = Aws::Vector<CapacityReservationResourceUsage>>
  CapacityReservationInstanceUsage& WithResourcesUsage(ResourcesUsageT&& value) {
    SetResourcesUsage(std::forward<ResourcesUsageT>(value));
    return *this;
  }
  template <typename ResourcesUsageT = CapacityReservationResourceUsage>
  CapacityReservationInstanceUsage& AddResourcesUsage(ResourcesUsageT&& value) {
    m_resourcesUsageHasBeenSet = true;
    m_resourcesUsage.emplace_back(std::forward<ResourcesUsageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  int m_inUseInstanceCount{0};

  Aws::Vector<CapacityReservationResourceUsage> m_resourcesUsage;
  bool m_accountIdHasBeenSet = false;
  bool m_inUseInstanceCountHasBeenSet = false;
  bool m_resourcesUsageHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
