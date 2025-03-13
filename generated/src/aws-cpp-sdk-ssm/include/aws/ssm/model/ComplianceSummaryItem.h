/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A summary of compliance information by compliance type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ComplianceSummaryItem">AWS
   * API Reference</a></p>
   */
  class ComplianceSummaryItem
  {
  public:
    AWS_SSM_API ComplianceSummaryItem() = default;
    AWS_SSM_API ComplianceSummaryItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ComplianceSummaryItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of compliance item. For example, the compliance type can be
     * Association, Patch, or Custom:string.</p>
     */
    inline const Aws::String& GetComplianceType() const { return m_complianceType; }
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }
    template<typename ComplianceTypeT = Aws::String>
    void SetComplianceType(ComplianceTypeT&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::forward<ComplianceTypeT>(value); }
    template<typename ComplianceTypeT = Aws::String>
    ComplianceSummaryItem& WithComplianceType(ComplianceTypeT&& value) { SetComplianceType(std::forward<ComplianceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of COMPLIANT items for the specified compliance type.</p>
     */
    inline const CompliantSummary& GetCompliantSummary() const { return m_compliantSummary; }
    inline bool CompliantSummaryHasBeenSet() const { return m_compliantSummaryHasBeenSet; }
    template<typename CompliantSummaryT = CompliantSummary>
    void SetCompliantSummary(CompliantSummaryT&& value) { m_compliantSummaryHasBeenSet = true; m_compliantSummary = std::forward<CompliantSummaryT>(value); }
    template<typename CompliantSummaryT = CompliantSummary>
    ComplianceSummaryItem& WithCompliantSummary(CompliantSummaryT&& value) { SetCompliantSummary(std::forward<CompliantSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of NON_COMPLIANT items for the specified compliance type.</p>
     */
    inline const NonCompliantSummary& GetNonCompliantSummary() const { return m_nonCompliantSummary; }
    inline bool NonCompliantSummaryHasBeenSet() const { return m_nonCompliantSummaryHasBeenSet; }
    template<typename NonCompliantSummaryT = NonCompliantSummary>
    void SetNonCompliantSummary(NonCompliantSummaryT&& value) { m_nonCompliantSummaryHasBeenSet = true; m_nonCompliantSummary = std::forward<NonCompliantSummaryT>(value); }
    template<typename NonCompliantSummaryT = NonCompliantSummary>
    ComplianceSummaryItem& WithNonCompliantSummary(NonCompliantSummaryT&& value) { SetNonCompliantSummary(std::forward<NonCompliantSummaryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_complianceType;
    bool m_complianceTypeHasBeenSet = false;

    CompliantSummary m_compliantSummary;
    bool m_compliantSummaryHasBeenSet = false;

    NonCompliantSummary m_nonCompliantSummary;
    bool m_nonCompliantSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
