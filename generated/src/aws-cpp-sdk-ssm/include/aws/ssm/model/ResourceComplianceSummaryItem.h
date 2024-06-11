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
    AWS_SSM_API ResourceComplianceSummaryItem();
    AWS_SSM_API ResourceComplianceSummaryItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ResourceComplianceSummaryItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The compliance type.</p>
     */
    inline const Aws::String& GetComplianceType() const{ return m_complianceType; }
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }
    inline void SetComplianceType(const Aws::String& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }
    inline void SetComplianceType(Aws::String&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }
    inline void SetComplianceType(const char* value) { m_complianceTypeHasBeenSet = true; m_complianceType.assign(value); }
    inline ResourceComplianceSummaryItem& WithComplianceType(const Aws::String& value) { SetComplianceType(value); return *this;}
    inline ResourceComplianceSummaryItem& WithComplianceType(Aws::String&& value) { SetComplianceType(std::move(value)); return *this;}
    inline ResourceComplianceSummaryItem& WithComplianceType(const char* value) { SetComplianceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline ResourceComplianceSummaryItem& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline ResourceComplianceSummaryItem& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline ResourceComplianceSummaryItem& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ID.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline ResourceComplianceSummaryItem& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline ResourceComplianceSummaryItem& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline ResourceComplianceSummaryItem& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compliance status for the resource.</p>
     */
    inline const ComplianceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ComplianceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ComplianceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ResourceComplianceSummaryItem& WithStatus(const ComplianceStatus& value) { SetStatus(value); return *this;}
    inline ResourceComplianceSummaryItem& WithStatus(ComplianceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The highest severity item found for the resource. The resource is compliant
     * for this item.</p>
     */
    inline const ComplianceSeverity& GetOverallSeverity() const{ return m_overallSeverity; }
    inline bool OverallSeverityHasBeenSet() const { return m_overallSeverityHasBeenSet; }
    inline void SetOverallSeverity(const ComplianceSeverity& value) { m_overallSeverityHasBeenSet = true; m_overallSeverity = value; }
    inline void SetOverallSeverity(ComplianceSeverity&& value) { m_overallSeverityHasBeenSet = true; m_overallSeverity = std::move(value); }
    inline ResourceComplianceSummaryItem& WithOverallSeverity(const ComplianceSeverity& value) { SetOverallSeverity(value); return *this;}
    inline ResourceComplianceSummaryItem& WithOverallSeverity(ComplianceSeverity&& value) { SetOverallSeverity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the execution.</p>
     */
    inline const ComplianceExecutionSummary& GetExecutionSummary() const{ return m_executionSummary; }
    inline bool ExecutionSummaryHasBeenSet() const { return m_executionSummaryHasBeenSet; }
    inline void SetExecutionSummary(const ComplianceExecutionSummary& value) { m_executionSummaryHasBeenSet = true; m_executionSummary = value; }
    inline void SetExecutionSummary(ComplianceExecutionSummary&& value) { m_executionSummaryHasBeenSet = true; m_executionSummary = std::move(value); }
    inline ResourceComplianceSummaryItem& WithExecutionSummary(const ComplianceExecutionSummary& value) { SetExecutionSummary(value); return *this;}
    inline ResourceComplianceSummaryItem& WithExecutionSummary(ComplianceExecutionSummary&& value) { SetExecutionSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of items that are compliant for the resource.</p>
     */
    inline const CompliantSummary& GetCompliantSummary() const{ return m_compliantSummary; }
    inline bool CompliantSummaryHasBeenSet() const { return m_compliantSummaryHasBeenSet; }
    inline void SetCompliantSummary(const CompliantSummary& value) { m_compliantSummaryHasBeenSet = true; m_compliantSummary = value; }
    inline void SetCompliantSummary(CompliantSummary&& value) { m_compliantSummaryHasBeenSet = true; m_compliantSummary = std::move(value); }
    inline ResourceComplianceSummaryItem& WithCompliantSummary(const CompliantSummary& value) { SetCompliantSummary(value); return *this;}
    inline ResourceComplianceSummaryItem& WithCompliantSummary(CompliantSummary&& value) { SetCompliantSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of items that aren't compliant for the resource.</p>
     */
    inline const NonCompliantSummary& GetNonCompliantSummary() const{ return m_nonCompliantSummary; }
    inline bool NonCompliantSummaryHasBeenSet() const { return m_nonCompliantSummaryHasBeenSet; }
    inline void SetNonCompliantSummary(const NonCompliantSummary& value) { m_nonCompliantSummaryHasBeenSet = true; m_nonCompliantSummary = value; }
    inline void SetNonCompliantSummary(NonCompliantSummary&& value) { m_nonCompliantSummaryHasBeenSet = true; m_nonCompliantSummary = std::move(value); }
    inline ResourceComplianceSummaryItem& WithNonCompliantSummary(const NonCompliantSummary& value) { SetNonCompliantSummary(value); return *this;}
    inline ResourceComplianceSummaryItem& WithNonCompliantSummary(NonCompliantSummary&& value) { SetNonCompliantSummary(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_complianceType;
    bool m_complianceTypeHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    ComplianceStatus m_status;
    bool m_statusHasBeenSet = false;

    ComplianceSeverity m_overallSeverity;
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
