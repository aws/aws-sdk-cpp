/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_PARTNERCENTRALSELLING_API ProjectView() = default;
    AWS_PARTNERCENTRALSELLING_API ProjectView(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API ProjectView& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Describes the deployment or consumption model for the partner solution or
     * offering. This field indicates how the project's solution will be delivered or
     * implemented for the customer. </p>
     */
    inline const Aws::Vector<DeliveryModel>& GetDeliveryModels() const { return m_deliveryModels; }
    inline bool DeliveryModelsHasBeenSet() const { return m_deliveryModelsHasBeenSet; }
    template<typename DeliveryModelsT = Aws::Vector<DeliveryModel>>
    void SetDeliveryModels(DeliveryModelsT&& value) { m_deliveryModelsHasBeenSet = true; m_deliveryModels = std::forward<DeliveryModelsT>(value); }
    template<typename DeliveryModelsT = Aws::Vector<DeliveryModel>>
    ProjectView& WithDeliveryModels(DeliveryModelsT&& value) { SetDeliveryModels(std::forward<DeliveryModelsT>(value)); return *this;}
    inline ProjectView& AddDeliveryModels(DeliveryModel value) { m_deliveryModelsHasBeenSet = true; m_deliveryModels.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Provides information about the anticipated customer spend related to this
     * project. This may include details such as amount, frequency, and currency of
     * expected expenditure. </p>
     */
    inline const Aws::Vector<ExpectedCustomerSpend>& GetExpectedCustomerSpend() const { return m_expectedCustomerSpend; }
    inline bool ExpectedCustomerSpendHasBeenSet() const { return m_expectedCustomerSpendHasBeenSet; }
    template<typename ExpectedCustomerSpendT = Aws::Vector<ExpectedCustomerSpend>>
    void SetExpectedCustomerSpend(ExpectedCustomerSpendT&& value) { m_expectedCustomerSpendHasBeenSet = true; m_expectedCustomerSpend = std::forward<ExpectedCustomerSpendT>(value); }
    template<typename ExpectedCustomerSpendT = Aws::Vector<ExpectedCustomerSpend>>
    ProjectView& WithExpectedCustomerSpend(ExpectedCustomerSpendT&& value) { SetExpectedCustomerSpend(std::forward<ExpectedCustomerSpendT>(value)); return *this;}
    template<typename ExpectedCustomerSpendT = ExpectedCustomerSpend>
    ProjectView& AddExpectedCustomerSpend(ExpectedCustomerSpendT&& value) { m_expectedCustomerSpendHasBeenSet = true; m_expectedCustomerSpend.emplace_back(std::forward<ExpectedCustomerSpendT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specifies the proposed solution focus or type of workload for the project.
     * </p>
     */
    inline const Aws::String& GetCustomerUseCase() const { return m_customerUseCase; }
    inline bool CustomerUseCaseHasBeenSet() const { return m_customerUseCaseHasBeenSet; }
    template<typename CustomerUseCaseT = Aws::String>
    void SetCustomerUseCase(CustomerUseCaseT&& value) { m_customerUseCaseHasBeenSet = true; m_customerUseCase = std::forward<CustomerUseCaseT>(value); }
    template<typename CustomerUseCaseT = Aws::String>
    ProjectView& WithCustomerUseCase(CustomerUseCaseT&& value) { SetCustomerUseCase(std::forward<CustomerUseCaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Lists the pre-sales activities that have occurred with the end-customer
     * related to the opportunity. This field is conditionally mandatory when the
     * project is qualified for Co-Sell and helps drive assignment priority on the AWS
     * side. It provides insight into the engagement level with the customer. </p>
     */
    inline const Aws::Vector<SalesActivity>& GetSalesActivities() const { return m_salesActivities; }
    inline bool SalesActivitiesHasBeenSet() const { return m_salesActivitiesHasBeenSet; }
    template<typename SalesActivitiesT = Aws::Vector<SalesActivity>>
    void SetSalesActivities(SalesActivitiesT&& value) { m_salesActivitiesHasBeenSet = true; m_salesActivities = std::forward<SalesActivitiesT>(value); }
    template<typename SalesActivitiesT = Aws::Vector<SalesActivity>>
    ProjectView& WithSalesActivities(SalesActivitiesT&& value) { SetSalesActivities(std::forward<SalesActivitiesT>(value)); return *this;}
    inline ProjectView& AddSalesActivities(SalesActivity value) { m_salesActivitiesHasBeenSet = true; m_salesActivities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Offers a description of other solutions if the standard solutions do not
     * adequately cover the project's scope. </p>
     */
    inline const Aws::String& GetOtherSolutionDescription() const { return m_otherSolutionDescription; }
    inline bool OtherSolutionDescriptionHasBeenSet() const { return m_otherSolutionDescriptionHasBeenSet; }
    template<typename OtherSolutionDescriptionT = Aws::String>
    void SetOtherSolutionDescription(OtherSolutionDescriptionT&& value) { m_otherSolutionDescriptionHasBeenSet = true; m_otherSolutionDescription = std::forward<OtherSolutionDescriptionT>(value); }
    template<typename OtherSolutionDescriptionT = Aws::String>
    ProjectView& WithOtherSolutionDescription(OtherSolutionDescriptionT&& value) { SetOtherSolutionDescription(std::forward<OtherSolutionDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DeliveryModel> m_deliveryModels;
    bool m_deliveryModelsHasBeenSet = false;

    Aws::Vector<ExpectedCustomerSpend> m_expectedCustomerSpend;
    bool m_expectedCustomerSpendHasBeenSet = false;

    Aws::String m_customerUseCase;
    bool m_customerUseCaseHasBeenSet = false;

    Aws::Vector<SalesActivity> m_salesActivities;
    bool m_salesActivitiesHasBeenSet = false;

    Aws::String m_otherSolutionDescription;
    bool m_otherSolutionDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
