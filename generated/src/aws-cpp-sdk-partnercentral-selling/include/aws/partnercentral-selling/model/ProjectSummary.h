/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/DeliveryModel.h>
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
   * <p>An object that contains a <code>Project</code> object's subset of
   * fields.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ProjectSummary">AWS
   * API Reference</a></p>
   */
  class ProjectSummary
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ProjectSummary();
    AWS_PARTNERCENTRALSELLING_API ProjectSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API ProjectSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies your solution or service's deployment or consumption model in the
     * <code>Opportunity</code>'s context. You can select multiple options.</p>
     * <p>Options' descriptions from the <code>Delivery Model</code> field are:</p>
     * <ul> <li> <p>SaaS or PaaS: Your Amazon Web Services based solution deployed as
     * SaaS or PaaS in your Amazon Web Services environment.</p> </li> <li> <p>BYOL or
     * AMI: Your Amazon Web Services based solution deployed as BYOL or AMI in the end
     * customer's Amazon Web Services environment.</p> </li> <li> <p>Managed Services:
     * The end customer's Amazon Web Services business management (For example:
     * Consulting, design, implementation, billing support, cost optimization,
     * technical support).</p> </li> <li> <p>Professional Services: Offerings to help
     * enterprise end customers achieve specific business outcomes for enterprise cloud
     * adoption (For example: Advisory or transformation planning).</p> </li> <li>
     * <p>Resell: Amazon Web Services accounts and billing management for your
     * customers.</p> </li> <li> <p>Other: Delivery model not described above.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<DeliveryModel>& GetDeliveryModels() const{ return m_deliveryModels; }
    inline bool DeliveryModelsHasBeenSet() const { return m_deliveryModelsHasBeenSet; }
    inline void SetDeliveryModels(const Aws::Vector<DeliveryModel>& value) { m_deliveryModelsHasBeenSet = true; m_deliveryModels = value; }
    inline void SetDeliveryModels(Aws::Vector<DeliveryModel>&& value) { m_deliveryModelsHasBeenSet = true; m_deliveryModels = std::move(value); }
    inline ProjectSummary& WithDeliveryModels(const Aws::Vector<DeliveryModel>& value) { SetDeliveryModels(value); return *this;}
    inline ProjectSummary& WithDeliveryModels(Aws::Vector<DeliveryModel>&& value) { SetDeliveryModels(std::move(value)); return *this;}
    inline ProjectSummary& AddDeliveryModels(const DeliveryModel& value) { m_deliveryModelsHasBeenSet = true; m_deliveryModels.push_back(value); return *this; }
    inline ProjectSummary& AddDeliveryModels(DeliveryModel&& value) { m_deliveryModelsHasBeenSet = true; m_deliveryModels.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides a summary of the expected customer spend for the project, offering a
     * high-level view of the potential financial impact.</p>
     */
    inline const Aws::Vector<ExpectedCustomerSpend>& GetExpectedCustomerSpend() const{ return m_expectedCustomerSpend; }
    inline bool ExpectedCustomerSpendHasBeenSet() const { return m_expectedCustomerSpendHasBeenSet; }
    inline void SetExpectedCustomerSpend(const Aws::Vector<ExpectedCustomerSpend>& value) { m_expectedCustomerSpendHasBeenSet = true; m_expectedCustomerSpend = value; }
    inline void SetExpectedCustomerSpend(Aws::Vector<ExpectedCustomerSpend>&& value) { m_expectedCustomerSpendHasBeenSet = true; m_expectedCustomerSpend = std::move(value); }
    inline ProjectSummary& WithExpectedCustomerSpend(const Aws::Vector<ExpectedCustomerSpend>& value) { SetExpectedCustomerSpend(value); return *this;}
    inline ProjectSummary& WithExpectedCustomerSpend(Aws::Vector<ExpectedCustomerSpend>&& value) { SetExpectedCustomerSpend(std::move(value)); return *this;}
    inline ProjectSummary& AddExpectedCustomerSpend(const ExpectedCustomerSpend& value) { m_expectedCustomerSpendHasBeenSet = true; m_expectedCustomerSpend.push_back(value); return *this; }
    inline ProjectSummary& AddExpectedCustomerSpend(ExpectedCustomerSpend&& value) { m_expectedCustomerSpendHasBeenSet = true; m_expectedCustomerSpend.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DeliveryModel> m_deliveryModels;
    bool m_deliveryModelsHasBeenSet = false;

    Aws::Vector<ExpectedCustomerSpend> m_expectedCustomerSpend;
    bool m_expectedCustomerSpendHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
