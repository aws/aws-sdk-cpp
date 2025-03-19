/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/TrustedAdvisorIntegrationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/DefinitionType.h>
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
   * <p>Discovery configuration associated to the workload.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/WorkloadDiscoveryConfig">AWS
   * API Reference</a></p>
   */
  class WorkloadDiscoveryConfig
  {
  public:
    AWS_WELLARCHITECTED_API WorkloadDiscoveryConfig() = default;
    AWS_WELLARCHITECTED_API WorkloadDiscoveryConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API WorkloadDiscoveryConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Discovery integration status in respect to Trusted Advisor for the
     * workload.</p>
     */
    inline TrustedAdvisorIntegrationStatus GetTrustedAdvisorIntegrationStatus() const { return m_trustedAdvisorIntegrationStatus; }
    inline bool TrustedAdvisorIntegrationStatusHasBeenSet() const { return m_trustedAdvisorIntegrationStatusHasBeenSet; }
    inline void SetTrustedAdvisorIntegrationStatus(TrustedAdvisorIntegrationStatus value) { m_trustedAdvisorIntegrationStatusHasBeenSet = true; m_trustedAdvisorIntegrationStatus = value; }
    inline WorkloadDiscoveryConfig& WithTrustedAdvisorIntegrationStatus(TrustedAdvisorIntegrationStatus value) { SetTrustedAdvisorIntegrationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode to use for identifying resources associated with the workload.</p>
     * <p>You can specify <code>WORKLOAD_METADATA</code>, <code>APP_REGISTRY</code>, or
     * both.</p>
     */
    inline const Aws::Vector<DefinitionType>& GetWorkloadResourceDefinition() const { return m_workloadResourceDefinition; }
    inline bool WorkloadResourceDefinitionHasBeenSet() const { return m_workloadResourceDefinitionHasBeenSet; }
    template<typename WorkloadResourceDefinitionT = Aws::Vector<DefinitionType>>
    void SetWorkloadResourceDefinition(WorkloadResourceDefinitionT&& value) { m_workloadResourceDefinitionHasBeenSet = true; m_workloadResourceDefinition = std::forward<WorkloadResourceDefinitionT>(value); }
    template<typename WorkloadResourceDefinitionT = Aws::Vector<DefinitionType>>
    WorkloadDiscoveryConfig& WithWorkloadResourceDefinition(WorkloadResourceDefinitionT&& value) { SetWorkloadResourceDefinition(std::forward<WorkloadResourceDefinitionT>(value)); return *this;}
    inline WorkloadDiscoveryConfig& AddWorkloadResourceDefinition(DefinitionType value) { m_workloadResourceDefinitionHasBeenSet = true; m_workloadResourceDefinition.push_back(value); return *this; }
    ///@}
  private:

    TrustedAdvisorIntegrationStatus m_trustedAdvisorIntegrationStatus{TrustedAdvisorIntegrationStatus::NOT_SET};
    bool m_trustedAdvisorIntegrationStatusHasBeenSet = false;

    Aws::Vector<DefinitionType> m_workloadResourceDefinition;
    bool m_workloadResourceDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
