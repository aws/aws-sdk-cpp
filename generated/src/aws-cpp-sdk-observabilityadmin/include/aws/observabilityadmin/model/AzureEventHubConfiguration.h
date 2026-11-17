/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/AzureEventHubTier.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p>Configuration of the Azure Event Hubs that the setup creates to deliver
 * resource logs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/AzureEventHubConfiguration">AWS
 * API Reference</a></p>
 */
class AzureEventHubConfiguration {
 public:
  AWS_OBSERVABILITYADMIN_API AzureEventHubConfiguration() = default;
  AWS_OBSERVABILITYADMIN_API AzureEventHubConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API AzureEventHubConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Event Hubs namespace tier.</p>
   */
  inline AzureEventHubTier GetTier() const { return m_tier; }
  inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
  inline void SetTier(AzureEventHubTier value) {
    m_tierHasBeenSet = true;
    m_tier = value;
  }
  inline AzureEventHubConfiguration& WithTier(AzureEventHubTier value) {
    SetTier(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of partitions in each Event Hub. The Standard tier allows 1–32
   * partitions and the Premium tier allows 1–100. On the Standard tier, you can't
   * change this value after the setup creates the Event Hub.</p>
   */
  inline int GetPartitionCount() const { return m_partitionCount; }
  inline bool PartitionCountHasBeenSet() const { return m_partitionCountHasBeenSet; }
  inline void SetPartitionCount(int value) {
    m_partitionCountHasBeenSet = true;
    m_partitionCount = value;
  }
  inline AzureEventHubConfiguration& WithPartitionCount(int value) {
    SetPartitionCount(value);
    return *this;
  }
  ///@}
 private:
  AzureEventHubTier m_tier{AzureEventHubTier::NOT_SET};

  int m_partitionCount{0};
  bool m_tierHasBeenSet = false;
  bool m_partitionCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
