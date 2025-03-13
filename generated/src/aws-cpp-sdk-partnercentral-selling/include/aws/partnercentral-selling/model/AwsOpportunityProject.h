/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/ExpectedCustomerSpend.h>
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
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p>Captures details about the project associated with the opportunity, including
   * objectives, scope, and customer requirements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AwsOpportunityProject">AWS
   * API Reference</a></p>
   */
  class AwsOpportunityProject
  {
  public:
    AWS_PARTNERCENTRALSELLING_API AwsOpportunityProject() = default;
    AWS_PARTNERCENTRALSELLING_API AwsOpportunityProject(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API AwsOpportunityProject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the expected spending by the customer over the course of the
     * project. This value helps partners and AWS estimate the financial impact of the
     * opportunity. Use the <a href="https://calculator.aws/#/">AWS Pricing
     * Calculator</a> to create an estimate of the customer’s total spend. If only
     * annual recurring revenue (ARR) is available, distribute it across 12 months to
     * provide an average monthly value.</p>
     */
    inline const Aws::Vector<ExpectedCustomerSpend>& GetExpectedCustomerSpend() const { return m_expectedCustomerSpend; }
    inline bool ExpectedCustomerSpendHasBeenSet() const { return m_expectedCustomerSpendHasBeenSet; }
    template<typename ExpectedCustomerSpendT = Aws::Vector<ExpectedCustomerSpend>>
    void SetExpectedCustomerSpend(ExpectedCustomerSpendT&& value) { m_expectedCustomerSpendHasBeenSet = true; m_expectedCustomerSpend = std::forward<ExpectedCustomerSpendT>(value); }
    template<typename ExpectedCustomerSpendT = Aws::Vector<ExpectedCustomerSpend>>
    AwsOpportunityProject& WithExpectedCustomerSpend(ExpectedCustomerSpendT&& value) { SetExpectedCustomerSpend(std::forward<ExpectedCustomerSpendT>(value)); return *this;}
    template<typename ExpectedCustomerSpendT = ExpectedCustomerSpend>
    AwsOpportunityProject& AddExpectedCustomerSpend(ExpectedCustomerSpendT&& value) { m_expectedCustomerSpendHasBeenSet = true; m_expectedCustomerSpend.emplace_back(std::forward<ExpectedCustomerSpendT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ExpectedCustomerSpend> m_expectedCustomerSpend;
    bool m_expectedCustomerSpendHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
