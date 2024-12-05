/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/DeliveryModel.h>
#include <aws/partnercentral-selling/model/ExpectedCustomerSpend.h>
#include <aws/partnercentral-selling/model/SalesActivity.h>
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
   * <p> Provides the project view of an opportunity resource shared through a
   * snapshot. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ProjectView">AWS
   * API Reference</a></p>
   */
  class ProjectView
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ProjectView();
    AWS_PARTNERCENTRALSELLING_API ProjectView(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API ProjectView& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies the proposed solution focus or type of workload for the project.
     * </p>
     */
    inline const Aws::String& GetCustomerUseCase() const{ return m_customerUseCase; }
    inline bool CustomerUseCaseHasBeenSet() const { return m_customerUseCaseHasBeenSet; }
    inline void SetCustomerUseCase(const Aws::String& value) { m_customerUseCaseHasBeenSet = true; m_customerUseCase = value; }
    inline void SetCustomerUseCase(Aws::String&& value) { m_customerUseCaseHasBeenSet = true; m_customerUseCase = std::move(value); }
    inline void SetCustomerUseCase(const char* value) { m_customerUseCaseHasBeenSet = true; m_customerUseCase.assign(value); }
    inline ProjectView& WithCustomerUseCase(const Aws::String& value) { SetCustomerUseCase(value); return *this;}
    inline ProjectView& WithCustomerUseCase(Aws::String&& value) { SetCustomerUseCase(std::move(value)); return *this;}
    inline ProjectView& WithCustomerUseCase(const char* value) { SetCustomerUseCase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the deployment or consumption model for the partner solution or
     * offering. This field indicates how the project's solution will be delivered or
     * implemented for the customer. </p>
     */
    inline const Aws::Vector<DeliveryModel>& GetDeliveryModels() const{ return m_deliveryModels; }
    inline bool DeliveryModelsHasBeenSet() const { return m_deliveryModelsHasBeenSet; }
    inline void SetDeliveryModels(const Aws::Vector<DeliveryModel>& value) { m_deliveryModelsHasBeenSet = true; m_deliveryModels = value; }
    inline void SetDeliveryModels(Aws::Vector<DeliveryModel>&& value) { m_deliveryModelsHasBeenSet = true; m_deliveryModels = std::move(value); }
    inline ProjectView& WithDeliveryModels(const Aws::Vector<DeliveryModel>& value) { SetDeliveryModels(value); return *this;}
    inline ProjectView& WithDeliveryModels(Aws::Vector<DeliveryModel>&& value) { SetDeliveryModels(std::move(value)); return *this;}
    inline ProjectView& AddDeliveryModels(const DeliveryModel& value) { m_deliveryModelsHasBeenSet = true; m_deliveryModels.push_back(value); return *this; }
    inline ProjectView& AddDeliveryModels(DeliveryModel&& value) { m_deliveryModelsHasBeenSet = true; m_deliveryModels.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Provides information about the anticipated customer spend related to this
     * project. This may include details such as amount, frequency, and currency of
     * expected expenditure. </p>
     */
    inline const Aws::Vector<ExpectedCustomerSpend>& GetExpectedCustomerSpend() const{ return m_expectedCustomerSpend; }
    inline bool ExpectedCustomerSpendHasBeenSet() const { return m_expectedCustomerSpendHasBeenSet; }
    inline void SetExpectedCustomerSpend(const Aws::Vector<ExpectedCustomerSpend>& value) { m_expectedCustomerSpendHasBeenSet = true; m_expectedCustomerSpend = value; }
    inline void SetExpectedCustomerSpend(Aws::Vector<ExpectedCustomerSpend>&& value) { m_expectedCustomerSpendHasBeenSet = true; m_expectedCustomerSpend = std::move(value); }
    inline ProjectView& WithExpectedCustomerSpend(const Aws::Vector<ExpectedCustomerSpend>& value) { SetExpectedCustomerSpend(value); return *this;}
    inline ProjectView& WithExpectedCustomerSpend(Aws::Vector<ExpectedCustomerSpend>&& value) { SetExpectedCustomerSpend(std::move(value)); return *this;}
    inline ProjectView& AddExpectedCustomerSpend(const ExpectedCustomerSpend& value) { m_expectedCustomerSpendHasBeenSet = true; m_expectedCustomerSpend.push_back(value); return *this; }
    inline ProjectView& AddExpectedCustomerSpend(ExpectedCustomerSpend&& value) { m_expectedCustomerSpendHasBeenSet = true; m_expectedCustomerSpend.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Offers a description of other solutions if the standard solutions do not
     * adequately cover the project's scope. </p>
     */
    inline const Aws::String& GetOtherSolutionDescription() const{ return m_otherSolutionDescription; }
    inline bool OtherSolutionDescriptionHasBeenSet() const { return m_otherSolutionDescriptionHasBeenSet; }
    inline void SetOtherSolutionDescription(const Aws::String& value) { m_otherSolutionDescriptionHasBeenSet = true; m_otherSolutionDescription = value; }
    inline void SetOtherSolutionDescription(Aws::String&& value) { m_otherSolutionDescriptionHasBeenSet = true; m_otherSolutionDescription = std::move(value); }
    inline void SetOtherSolutionDescription(const char* value) { m_otherSolutionDescriptionHasBeenSet = true; m_otherSolutionDescription.assign(value); }
    inline ProjectView& WithOtherSolutionDescription(const Aws::String& value) { SetOtherSolutionDescription(value); return *this;}
    inline ProjectView& WithOtherSolutionDescription(Aws::String&& value) { SetOtherSolutionDescription(std::move(value)); return *this;}
    inline ProjectView& WithOtherSolutionDescription(const char* value) { SetOtherSolutionDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Lists the pre-sales activities that have occurred with the end-customer
     * related to the opportunity. This field is conditionally mandatory when the
     * project is qualified for Co-Sell and helps drive assignment priority on the AWS
     * side. It provides insight into the engagement level with the customer. </p>
     */
    inline const Aws::Vector<SalesActivity>& GetSalesActivities() const{ return m_salesActivities; }
    inline bool SalesActivitiesHasBeenSet() const { return m_salesActivitiesHasBeenSet; }
    inline void SetSalesActivities(const Aws::Vector<SalesActivity>& value) { m_salesActivitiesHasBeenSet = true; m_salesActivities = value; }
    inline void SetSalesActivities(Aws::Vector<SalesActivity>&& value) { m_salesActivitiesHasBeenSet = true; m_salesActivities = std::move(value); }
    inline ProjectView& WithSalesActivities(const Aws::Vector<SalesActivity>& value) { SetSalesActivities(value); return *this;}
    inline ProjectView& WithSalesActivities(Aws::Vector<SalesActivity>&& value) { SetSalesActivities(std::move(value)); return *this;}
    inline ProjectView& AddSalesActivities(const SalesActivity& value) { m_salesActivitiesHasBeenSet = true; m_salesActivities.push_back(value); return *this; }
    inline ProjectView& AddSalesActivities(SalesActivity&& value) { m_salesActivitiesHasBeenSet = true; m_salesActivities.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_customerUseCase;
    bool m_customerUseCaseHasBeenSet = false;

    Aws::Vector<DeliveryModel> m_deliveryModels;
    bool m_deliveryModelsHasBeenSet = false;

    Aws::Vector<ExpectedCustomerSpend> m_expectedCustomerSpend;
    bool m_expectedCustomerSpendHasBeenSet = false;

    Aws::String m_otherSolutionDescription;
    bool m_otherSolutionDescriptionHasBeenSet = false;

    Aws::Vector<SalesActivity> m_salesActivities;
    bool m_salesActivitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
