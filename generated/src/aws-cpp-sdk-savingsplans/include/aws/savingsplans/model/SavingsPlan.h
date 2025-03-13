/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/savingsplans/model/SavingsPlanState.h>
#include <aws/savingsplans/model/SavingsPlanType.h>
#include <aws/savingsplans/model/SavingsPlanPaymentOption.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/savingsplans/model/CurrencyCode.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/savingsplans/model/SavingsPlanProductType.h>
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
namespace SavingsPlans
{
namespace Model
{

  /**
   * <p>Information about a Savings Plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/SavingsPlan">AWS
   * API Reference</a></p>
   */
  class SavingsPlan
  {
  public:
    AWS_SAVINGSPLANS_API SavingsPlan() = default;
    AWS_SAVINGSPLANS_API SavingsPlan(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAVINGSPLANS_API SavingsPlan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAVINGSPLANS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the offering.</p>
     */
    inline const Aws::String& GetOfferingId() const { return m_offeringId; }
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }
    template<typename OfferingIdT = Aws::String>
    void SetOfferingId(OfferingIdT&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::forward<OfferingIdT>(value); }
    template<typename OfferingIdT = Aws::String>
    SavingsPlan& WithOfferingId(OfferingIdT&& value) { SetOfferingId(std::forward<OfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline const Aws::String& GetSavingsPlanId() const { return m_savingsPlanId; }
    inline bool SavingsPlanIdHasBeenSet() const { return m_savingsPlanIdHasBeenSet; }
    template<typename SavingsPlanIdT = Aws::String>
    void SetSavingsPlanId(SavingsPlanIdT&& value) { m_savingsPlanIdHasBeenSet = true; m_savingsPlanId = std::forward<SavingsPlanIdT>(value); }
    template<typename SavingsPlanIdT = Aws::String>
    SavingsPlan& WithSavingsPlanId(SavingsPlanIdT&& value) { SetSavingsPlanId(std::forward<SavingsPlanIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Savings Plan.</p>
     */
    inline const Aws::String& GetSavingsPlanArn() const { return m_savingsPlanArn; }
    inline bool SavingsPlanArnHasBeenSet() const { return m_savingsPlanArnHasBeenSet; }
    template<typename SavingsPlanArnT = Aws::String>
    void SetSavingsPlanArn(SavingsPlanArnT&& value) { m_savingsPlanArnHasBeenSet = true; m_savingsPlanArn = std::forward<SavingsPlanArnT>(value); }
    template<typename SavingsPlanArnT = Aws::String>
    SavingsPlan& WithSavingsPlanArn(SavingsPlanArnT&& value) { SetSavingsPlanArn(std::forward<SavingsPlanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    SavingsPlan& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time.</p>
     */
    inline const Aws::String& GetStart() const { return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    template<typename StartT = Aws::String>
    void SetStart(StartT&& value) { m_startHasBeenSet = true; m_start = std::forward<StartT>(value); }
    template<typename StartT = Aws::String>
    SavingsPlan& WithStart(StartT&& value) { SetStart(std::forward<StartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time.</p>
     */
    inline const Aws::String& GetEnd() const { return m_end; }
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
    template<typename EndT = Aws::String>
    void SetEnd(EndT&& value) { m_endHasBeenSet = true; m_end = std::forward<EndT>(value); }
    template<typename EndT = Aws::String>
    SavingsPlan& WithEnd(EndT&& value) { SetEnd(std::forward<EndT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state.</p>
     */
    inline SavingsPlanState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(SavingsPlanState value) { m_stateHasBeenSet = true; m_state = value; }
    inline SavingsPlan& WithState(SavingsPlanState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    SavingsPlan& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 instance family.</p>
     */
    inline const Aws::String& GetEc2InstanceFamily() const { return m_ec2InstanceFamily; }
    inline bool Ec2InstanceFamilyHasBeenSet() const { return m_ec2InstanceFamilyHasBeenSet; }
    template<typename Ec2InstanceFamilyT = Aws::String>
    void SetEc2InstanceFamily(Ec2InstanceFamilyT&& value) { m_ec2InstanceFamilyHasBeenSet = true; m_ec2InstanceFamily = std::forward<Ec2InstanceFamilyT>(value); }
    template<typename Ec2InstanceFamilyT = Aws::String>
    SavingsPlan& WithEc2InstanceFamily(Ec2InstanceFamilyT&& value) { SetEc2InstanceFamily(std::forward<Ec2InstanceFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plan type.</p>
     */
    inline SavingsPlanType GetSavingsPlanType() const { return m_savingsPlanType; }
    inline bool SavingsPlanTypeHasBeenSet() const { return m_savingsPlanTypeHasBeenSet; }
    inline void SetSavingsPlanType(SavingsPlanType value) { m_savingsPlanTypeHasBeenSet = true; m_savingsPlanType = value; }
    inline SavingsPlan& WithSavingsPlanType(SavingsPlanType value) { SetSavingsPlanType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment option.</p>
     */
    inline SavingsPlanPaymentOption GetPaymentOption() const { return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(SavingsPlanPaymentOption value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline SavingsPlan& WithPaymentOption(SavingsPlanPaymentOption value) { SetPaymentOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product types.</p>
     */
    inline const Aws::Vector<SavingsPlanProductType>& GetProductTypes() const { return m_productTypes; }
    inline bool ProductTypesHasBeenSet() const { return m_productTypesHasBeenSet; }
    template<typename ProductTypesT = Aws::Vector<SavingsPlanProductType>>
    void SetProductTypes(ProductTypesT&& value) { m_productTypesHasBeenSet = true; m_productTypes = std::forward<ProductTypesT>(value); }
    template<typename ProductTypesT = Aws::Vector<SavingsPlanProductType>>
    SavingsPlan& WithProductTypes(ProductTypesT&& value) { SetProductTypes(std::forward<ProductTypesT>(value)); return *this;}
    inline SavingsPlan& AddProductTypes(SavingsPlanProductType value) { m_productTypesHasBeenSet = true; m_productTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The currency.</p>
     */
    inline CurrencyCode GetCurrency() const { return m_currency; }
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
    inline void SetCurrency(CurrencyCode value) { m_currencyHasBeenSet = true; m_currency = value; }
    inline SavingsPlan& WithCurrency(CurrencyCode value) { SetCurrency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hourly commitment amount in the specified currency.</p>
     */
    inline const Aws::String& GetCommitment() const { return m_commitment; }
    inline bool CommitmentHasBeenSet() const { return m_commitmentHasBeenSet; }
    template<typename CommitmentT = Aws::String>
    void SetCommitment(CommitmentT&& value) { m_commitmentHasBeenSet = true; m_commitment = std::forward<CommitmentT>(value); }
    template<typename CommitmentT = Aws::String>
    SavingsPlan& WithCommitment(CommitmentT&& value) { SetCommitment(std::forward<CommitmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The up-front payment amount.</p>
     */
    inline const Aws::String& GetUpfrontPaymentAmount() const { return m_upfrontPaymentAmount; }
    inline bool UpfrontPaymentAmountHasBeenSet() const { return m_upfrontPaymentAmountHasBeenSet; }
    template<typename UpfrontPaymentAmountT = Aws::String>
    void SetUpfrontPaymentAmount(UpfrontPaymentAmountT&& value) { m_upfrontPaymentAmountHasBeenSet = true; m_upfrontPaymentAmount = std::forward<UpfrontPaymentAmountT>(value); }
    template<typename UpfrontPaymentAmountT = Aws::String>
    SavingsPlan& WithUpfrontPaymentAmount(UpfrontPaymentAmountT&& value) { SetUpfrontPaymentAmount(std::forward<UpfrontPaymentAmountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recurring payment amount.</p>
     */
    inline const Aws::String& GetRecurringPaymentAmount() const { return m_recurringPaymentAmount; }
    inline bool RecurringPaymentAmountHasBeenSet() const { return m_recurringPaymentAmountHasBeenSet; }
    template<typename RecurringPaymentAmountT = Aws::String>
    void SetRecurringPaymentAmount(RecurringPaymentAmountT&& value) { m_recurringPaymentAmountHasBeenSet = true; m_recurringPaymentAmount = std::forward<RecurringPaymentAmountT>(value); }
    template<typename RecurringPaymentAmountT = Aws::String>
    SavingsPlan& WithRecurringPaymentAmount(RecurringPaymentAmountT&& value) { SetRecurringPaymentAmount(std::forward<RecurringPaymentAmountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the term, in seconds.</p>
     */
    inline long long GetTermDurationInSeconds() const { return m_termDurationInSeconds; }
    inline bool TermDurationInSecondsHasBeenSet() const { return m_termDurationInSecondsHasBeenSet; }
    inline void SetTermDurationInSeconds(long long value) { m_termDurationInSecondsHasBeenSet = true; m_termDurationInSeconds = value; }
    inline SavingsPlan& WithTermDurationInSeconds(long long value) { SetTermDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    SavingsPlan& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    SavingsPlan& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The time until when a return for the Savings Plan can be requested. If the
     * Savings Plan is not returnable, the field reflects the Savings Plan start
     * time.</p>
     */
    inline const Aws::String& GetReturnableUntil() const { return m_returnableUntil; }
    inline bool ReturnableUntilHasBeenSet() const { return m_returnableUntilHasBeenSet; }
    template<typename ReturnableUntilT = Aws::String>
    void SetReturnableUntil(ReturnableUntilT&& value) { m_returnableUntilHasBeenSet = true; m_returnableUntil = std::forward<ReturnableUntilT>(value); }
    template<typename ReturnableUntilT = Aws::String>
    SavingsPlan& WithReturnableUntil(ReturnableUntilT&& value) { SetReturnableUntil(std::forward<ReturnableUntilT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet = false;

    Aws::String m_savingsPlanId;
    bool m_savingsPlanIdHasBeenSet = false;

    Aws::String m_savingsPlanArn;
    bool m_savingsPlanArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_start;
    bool m_startHasBeenSet = false;

    Aws::String m_end;
    bool m_endHasBeenSet = false;

    SavingsPlanState m_state{SavingsPlanState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_ec2InstanceFamily;
    bool m_ec2InstanceFamilyHasBeenSet = false;

    SavingsPlanType m_savingsPlanType{SavingsPlanType::NOT_SET};
    bool m_savingsPlanTypeHasBeenSet = false;

    SavingsPlanPaymentOption m_paymentOption{SavingsPlanPaymentOption::NOT_SET};
    bool m_paymentOptionHasBeenSet = false;

    Aws::Vector<SavingsPlanProductType> m_productTypes;
    bool m_productTypesHasBeenSet = false;

    CurrencyCode m_currency{CurrencyCode::NOT_SET};
    bool m_currencyHasBeenSet = false;

    Aws::String m_commitment;
    bool m_commitmentHasBeenSet = false;

    Aws::String m_upfrontPaymentAmount;
    bool m_upfrontPaymentAmountHasBeenSet = false;

    Aws::String m_recurringPaymentAmount;
    bool m_recurringPaymentAmountHasBeenSet = false;

    long long m_termDurationInSeconds{0};
    bool m_termDurationInSecondsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_returnableUntil;
    bool m_returnableUntilHasBeenSet = false;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
