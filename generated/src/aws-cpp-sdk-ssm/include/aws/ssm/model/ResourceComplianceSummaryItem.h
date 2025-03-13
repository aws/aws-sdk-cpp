/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ComplianceStatus.h>
#include <aws/ssm/model/ComplianceSeverity.h>
#include <aws/ssm/model/ComplianceExecutionSummary.h>
#include <aws/ssm/model/CompliantSummary.h>
#include <aws/ssm/model/NonCompliantSummary.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Compliance summary information for a specific resource. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResourceComplianceSummaryItem">AWS
   * API Reference</a></p>
   */
  class ResourceComplianceSummaryItem
  {
  public:
    AWS_SSM_API ResourceComplianceSummaryItem() = default;
    AWS_SSM_API ResourceComplianceSummaryItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ResourceComplianceSummaryItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The compliance type.</p>
     */
    inline const Aws::String& GetComplianceType() const { return m_complianceType; }
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }
    template<typename ComplianceTypeT = Aws::String>
    void SetComplianceType(ComplianceTypeT&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::forward<ComplianceTypeT>(value); }
    template<typename ComplianceTypeT = Aws::String>
    ResourceComplianceSummaryItem& WithComplianceType(ComplianceTypeT&& value) { SetComplianceType(std::forward<ComplianceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ResourceComplianceSummaryItem& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ID.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    ResourceComplianceSummaryItem& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compliance status for the resource.</p>
     */
    inline ComplianceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ComplianceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ResourceComplianceSummaryItem& WithStatus(ComplianceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The highest severity item found for the resource. The resource is compliant
     * for this item.</p>
     */
    inline ComplianceSeverity GetOverallSeverity() const { return m_overallSeverity; }
    inline bool OverallSeverityHasBeenSet() const { return m_overallSeverityHasBeenSet; }
    inline void SetOverallSeverity(ComplianceSeverity value) { m_overallSeverityHasBeenSet = true; m_overallSeverity = value; }
    inline ResourceComplianceSummaryItem& WithOverallSeverity(ComplianceSeverity value) { SetOverallSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the execution.</p>
     */
    inline const ComplianceExecutionSummary& GetExecutionSummary() const { return m_executionSummary; }
    inline bool ExecutionSummaryHasBeenSet() const { return m_executionSummaryHasBeenSet; }
    template<typename ExecutionSummaryT = ComplianceExecutionSummary>
    void SetExecutionSummary(ExecutionSummaryT&& value) { m_executionSummaryHasBeenSet = true; m_executionSummary = std::forward<ExecutionSummaryT>(value); }
    template<typename ExecutionSummaryT = ComplianceExecutionSummary>
    ResourceComplianceSummaryItem& WithExecutionSummary(ExecutionSummaryT&& value) { SetExecutionSummary(std::forward<ExecutionSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of items that are compliant for the resource.</p>
     */
    inline const CompliantSummary& GetCompliantSummary() const { return m_compliantSummary; }
    inline bool CompliantSummaryHasBeenSet() const { return m_compliantSummaryHasBeenSet; }
    template<typename CompliantSummaryT = CompliantSummary>
    void SetCompliantSummary(CompliantSummaryT&& value) { m_compliantSummaryHasBeenSet = true; m_compliantSummary = std::forward<CompliantSummaryT>(value); }
    template<typename CompliantSummaryT = CompliantSummary>
    ResourceComplianceSummaryItem& WithCompliantSummary(CompliantSummaryT&& value) { SetCompliantSummary(std::forward<CompliantSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of items that aren't compliant for the resource.</p>
     */
    inline const NonCompliantSummary& GetNonCompliantSummary() const { return m_nonCompliantSummary; }
    inline bool NonCompliantSummaryHasBeenSet() const { return m_nonCompliantSummaryHasBeenSet; }
    template<typename NonCompliantSummaryT = NonCompliantSummary>
    void SetNonCompliantSummary(NonCompliantSummaryT&& value) { m_nonCompliantSummaryHasBeenSet = true; m_nonCompliantSummary = std::forward<NonCompliantSummaryT>(value); }
    template<typename NonCompliantSummaryT = NonCompliantSummary>
    ResourceComplianceSummaryItem& WithNonCompliantSummary(NonCompliantSummaryT&& value) { SetNonCompliantSummary(std::forward<NonCompliantSummaryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_complianceType;
    bool m_complianceTypeHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    ComplianceStatus m_status{ComplianceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ComplianceSeverity m_overallSeverity{ComplianceSeverity::NOT_SET};
    bool m_overallSeverityHasBeenSet = false;

    ComplianceExecutionSummary m_executionSummary;
    bool m_executionSummaryHasBeenSet = false;

    CompliantSummary m_compliantSummary;
    bool m_compliantSummaryHasBeenSet = false;

    NonCompliantSummary m_nonCompliantSummary;
    bool m_nonCompliantSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
