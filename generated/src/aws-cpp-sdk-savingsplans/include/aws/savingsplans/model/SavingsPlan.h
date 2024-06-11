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
    AWS_SAVINGSPLANS_API SavingsPlan();
    AWS_SAVINGSPLANS_API SavingsPlan(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAVINGSPLANS_API SavingsPlan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAVINGSPLANS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the offering.</p>
     */
    inline const Aws::String& GetOfferingId() const{ return m_offeringId; }
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }
    inline void SetOfferingId(const Aws::String& value) { m_offeringIdHasBeenSet = true; m_offeringId = value; }
    inline void SetOfferingId(Aws::String&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::move(value); }
    inline void SetOfferingId(const char* value) { m_offeringIdHasBeenSet = true; m_offeringId.assign(value); }
    inline SavingsPlan& WithOfferingId(const Aws::String& value) { SetOfferingId(value); return *this;}
    inline SavingsPlan& WithOfferingId(Aws::String&& value) { SetOfferingId(std::move(value)); return *this;}
    inline SavingsPlan& WithOfferingId(const char* value) { SetOfferingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline const Aws::String& GetSavingsPlanId() const{ return m_savingsPlanId; }
    inline bool SavingsPlanIdHasBeenSet() const { return m_savingsPlanIdHasBeenSet; }
    inline void SetSavingsPlanId(const Aws::String& value) { m_savingsPlanIdHasBeenSet = true; m_savingsPlanId = value; }
    inline void SetSavingsPlanId(Aws::String&& value) { m_savingsPlanIdHasBeenSet = true; m_savingsPlanId = std::move(value); }
    inline void SetSavingsPlanId(const char* value) { m_savingsPlanIdHasBeenSet = true; m_savingsPlanId.assign(value); }
    inline SavingsPlan& WithSavingsPlanId(const Aws::String& value) { SetSavingsPlanId(value); return *this;}
    inline SavingsPlan& WithSavingsPlanId(Aws::String&& value) { SetSavingsPlanId(std::move(value)); return *this;}
    inline SavingsPlan& WithSavingsPlanId(const char* value) { SetSavingsPlanId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Savings Plan.</p>
     */
    inline const Aws::String& GetSavingsPlanArn() const{ return m_savingsPlanArn; }
    inline bool SavingsPlanArnHasBeenSet() const { return m_savingsPlanArnHasBeenSet; }
    inline void SetSavingsPlanArn(const Aws::String& value) { m_savingsPlanArnHasBeenSet = true; m_savingsPlanArn = value; }
    inline void SetSavingsPlanArn(Aws::String&& value) { m_savingsPlanArnHasBeenSet = true; m_savingsPlanArn = std::move(value); }
    inline void SetSavingsPlanArn(const char* value) { m_savingsPlanArnHasBeenSet = true; m_savingsPlanArn.assign(value); }
    inline SavingsPlan& WithSavingsPlanArn(const Aws::String& value) { SetSavingsPlanArn(value); return *this;}
    inline SavingsPlan& WithSavingsPlanArn(Aws::String&& value) { SetSavingsPlanArn(std::move(value)); return *this;}
    inline SavingsPlan& WithSavingsPlanArn(const char* value) { SetSavingsPlanArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline SavingsPlan& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline SavingsPlan& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline SavingsPlan& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time.</p>
     */
    inline const Aws::String& GetStart() const{ return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    inline void SetStart(const Aws::String& value) { m_startHasBeenSet = true; m_start = value; }
    inline void SetStart(Aws::String&& value) { m_startHasBeenSet = true; m_start = std::move(value); }
    inline void SetStart(const char* value) { m_startHasBeenSet = true; m_start.assign(value); }
    inline SavingsPlan& WithStart(const Aws::String& value) { SetStart(value); return *this;}
    inline SavingsPlan& WithStart(Aws::String&& value) { SetStart(std::move(value)); return *this;}
    inline SavingsPlan& WithStart(const char* value) { SetStart(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time.</p>
     */
    inline const Aws::String& GetEnd() const{ return m_end; }
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
    inline void SetEnd(const Aws::String& value) { m_endHasBeenSet = true; m_end = value; }
    inline void SetEnd(Aws::String&& value) { m_endHasBeenSet = true; m_end = std::move(value); }
    inline void SetEnd(const char* value) { m_endHasBeenSet = true; m_end.assign(value); }
    inline SavingsPlan& WithEnd(const Aws::String& value) { SetEnd(value); return *this;}
    inline SavingsPlan& WithEnd(Aws::String&& value) { SetEnd(std::move(value)); return *this;}
    inline SavingsPlan& WithEnd(const char* value) { SetEnd(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state.</p>
     */
    inline const SavingsPlanState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const SavingsPlanState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(SavingsPlanState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline SavingsPlan& WithState(const SavingsPlanState& value) { SetState(value); return *this;}
    inline SavingsPlan& WithState(SavingsPlanState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline SavingsPlan& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline SavingsPlan& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline SavingsPlan& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 instance family.</p>
     */
    inline const Aws::String& GetEc2InstanceFamily() const{ return m_ec2InstanceFamily; }
    inline bool Ec2InstanceFamilyHasBeenSet() const { return m_ec2InstanceFamilyHasBeenSet; }
    inline void SetEc2InstanceFamily(const Aws::String& value) { m_ec2InstanceFamilyHasBeenSet = true; m_ec2InstanceFamily = value; }
    inline void SetEc2InstanceFamily(Aws::String&& value) { m_ec2InstanceFamilyHasBeenSet = true; m_ec2InstanceFamily = std::move(value); }
    inline void SetEc2InstanceFamily(const char* value) { m_ec2InstanceFamilyHasBeenSet = true; m_ec2InstanceFamily.assign(value); }
    inline SavingsPlan& WithEc2InstanceFamily(const Aws::String& value) { SetEc2InstanceFamily(value); return *this;}
    inline SavingsPlan& WithEc2InstanceFamily(Aws::String&& value) { SetEc2InstanceFamily(std::move(value)); return *this;}
    inline SavingsPlan& WithEc2InstanceFamily(const char* value) { SetEc2InstanceFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plan type.</p>
     */
    inline const SavingsPlanType& GetSavingsPlanType() const{ return m_savingsPlanType; }
    inline bool SavingsPlanTypeHasBeenSet() const { return m_savingsPlanTypeHasBeenSet; }
    inline void SetSavingsPlanType(const SavingsPlanType& value) { m_savingsPlanTypeHasBeenSet = true; m_savingsPlanType = value; }
    inline void SetSavingsPlanType(SavingsPlanType&& value) { m_savingsPlanTypeHasBeenSet = true; m_savingsPlanType = std::move(value); }
    inline SavingsPlan& WithSavingsPlanType(const SavingsPlanType& value) { SetSavingsPlanType(value); return *this;}
    inline SavingsPlan& WithSavingsPlanType(SavingsPlanType&& value) { SetSavingsPlanType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment option.</p>
     */
    inline const SavingsPlanPaymentOption& GetPaymentOption() const{ return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(const SavingsPlanPaymentOption& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline void SetPaymentOption(SavingsPlanPaymentOption&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }
    inline SavingsPlan& WithPaymentOption(const SavingsPlanPaymentOption& value) { SetPaymentOption(value); return *this;}
    inline SavingsPlan& WithPaymentOption(SavingsPlanPaymentOption&& value) { SetPaymentOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product types.</p>
     */
    inline const Aws::Vector<SavingsPlanProductType>& GetProductTypes() const{ return m_productTypes; }
    inline bool ProductTypesHasBeenSet() const { return m_productTypesHasBeenSet; }
    inline void SetProductTypes(const Aws::Vector<SavingsPlanProductType>& value) { m_productTypesHasBeenSet = true; m_productTypes = value; }
    inline void SetProductTypes(Aws::Vector<SavingsPlanProductType>&& value) { m_productTypesHasBeenSet = true; m_productTypes = std::move(value); }
    inline SavingsPlan& WithProductTypes(const Aws::Vector<SavingsPlanProductType>& value) { SetProductTypes(value); return *this;}
    inline SavingsPlan& WithProductTypes(Aws::Vector<SavingsPlanProductType>&& value) { SetProductTypes(std::move(value)); return *this;}
    inline SavingsPlan& AddProductTypes(const SavingsPlanProductType& value) { m_productTypesHasBeenSet = true; m_productTypes.push_back(value); return *this; }
    inline SavingsPlan& AddProductTypes(SavingsPlanProductType&& value) { m_productTypesHasBeenSet = true; m_productTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The currency.</p>
     */
    inline const CurrencyCode& GetCurrency() const{ return m_currency; }
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
    inline void SetCurrency(const CurrencyCode& value) { m_currencyHasBeenSet = true; m_currency = value; }
    inline void SetCurrency(CurrencyCode&& value) { m_currencyHasBeenSet = true; m_currency = std::move(value); }
    inline SavingsPlan& WithCurrency(const CurrencyCode& value) { SetCurrency(value); return *this;}
    inline SavingsPlan& WithCurrency(CurrencyCode&& value) { SetCurrency(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hourly commitment amount in the specified currency.</p>
     */
    inline const Aws::String& GetCommitment() const{ return m_commitment; }
    inline bool CommitmentHasBeenSet() const { return m_commitmentHasBeenSet; }
    inline void SetCommitment(const Aws::String& value) { m_commitmentHasBeenSet = true; m_commitment = value; }
    inline void SetCommitment(Aws::String&& value) { m_commitmentHasBeenSet = true; m_commitment = std::move(value); }
    inline void SetCommitment(const char* value) { m_commitmentHasBeenSet = true; m_commitment.assign(value); }
    inline SavingsPlan& WithCommitment(const Aws::String& value) { SetCommitment(value); return *this;}
    inline SavingsPlan& WithCommitment(Aws::String&& value) { SetCommitment(std::move(value)); return *this;}
    inline SavingsPlan& WithCommitment(const char* value) { SetCommitment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The up-front payment amount.</p>
     */
    inline const Aws::String& GetUpfrontPaymentAmount() const{ return m_upfrontPaymentAmount; }
    inline bool UpfrontPaymentAmountHasBeenSet() const { return m_upfrontPaymentAmountHasBeenSet; }
    inline void SetUpfrontPaymentAmount(const Aws::String& value) { m_upfrontPaymentAmountHasBeenSet = true; m_upfrontPaymentAmount = value; }
    inline void SetUpfrontPaymentAmount(Aws::String&& value) { m_upfrontPaymentAmountHasBeenSet = true; m_upfrontPaymentAmount = std::move(value); }
    inline void SetUpfrontPaymentAmount(const char* value) { m_upfrontPaymentAmountHasBeenSet = true; m_upfrontPaymentAmount.assign(value); }
    inline SavingsPlan& WithUpfrontPaymentAmount(const Aws::String& value) { SetUpfrontPaymentAmount(value); return *this;}
    inline SavingsPlan& WithUpfrontPaymentAmount(Aws::String&& value) { SetUpfrontPaymentAmount(std::move(value)); return *this;}
    inline SavingsPlan& WithUpfrontPaymentAmount(const char* value) { SetUpfrontPaymentAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recurring payment amount.</p>
     */
    inline const Aws::String& GetRecurringPaymentAmount() const{ return m_recurringPaymentAmount; }
    inline bool RecurringPaymentAmountHasBeenSet() const { return m_recurringPaymentAmountHasBeenSet; }
    inline void SetRecurringPaymentAmount(const Aws::String& value) { m_recurringPaymentAmountHasBeenSet = true; m_recurringPaymentAmount = value; }
    inline void SetRecurringPaymentAmount(Aws::String&& value) { m_recurringPaymentAmountHasBeenSet = true; m_recurringPaymentAmount = std::move(value); }
    inline void SetRecurringPaymentAmount(const char* value) { m_recurringPaymentAmountHasBeenSet = true; m_recurringPaymentAmount.assign(value); }
    inline SavingsPlan& WithRecurringPaymentAmount(const Aws::String& value) { SetRecurringPaymentAmount(value); return *this;}
    inline SavingsPlan& WithRecurringPaymentAmount(Aws::String&& value) { SetRecurringPaymentAmount(std::move(value)); return *this;}
    inline SavingsPlan& WithRecurringPaymentAmount(const char* value) { SetRecurringPaymentAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the term, in seconds.</p>
     */
    inline long long GetTermDurationInSeconds() const{ return m_termDurationInSeconds; }
    inline bool TermDurationInSecondsHasBeenSet() const { return m_termDurationInSecondsHasBeenSet; }
    inline void SetTermDurationInSeconds(long long value) { m_termDurationInSecondsHasBeenSet = true; m_termDurationInSeconds = value; }
    inline SavingsPlan& WithTermDurationInSeconds(long long value) { SetTermDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline SavingsPlan& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline SavingsPlan& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline SavingsPlan& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline SavingsPlan& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline SavingsPlan& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline SavingsPlan& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline SavingsPlan& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline SavingsPlan& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline SavingsPlan& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time until when a return for the Savings Plan can be requested. If the
     * Savings Plan is not returnable, the field reflects the Savings Plan start
     * time.</p>
     */
    inline const Aws::String& GetReturnableUntil() const{ return m_returnableUntil; }
    inline bool ReturnableUntilHasBeenSet() const { return m_returnableUntilHasBeenSet; }
    inline void SetReturnableUntil(const Aws::String& value) { m_returnableUntilHasBeenSet = true; m_returnableUntil = value; }
    inline void SetReturnableUntil(Aws::String&& value) { m_returnableUntilHasBeenSet = true; m_returnableUntil = std::move(value); }
    inline void SetReturnableUntil(const char* value) { m_returnableUntilHasBeenSet = true; m_returnableUntil.assign(value); }
    inline SavingsPlan& WithReturnableUntil(const Aws::String& value) { SetReturnableUntil(value); return *this;}
    inline SavingsPlan& WithReturnableUntil(Aws::String&& value) { SetReturnableUntil(std::move(value)); return *this;}
    inline SavingsPlan& WithReturnableUntil(const char* value) { SetReturnableUntil(value); return *this;}
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

    SavingsPlanState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_ec2InstanceFamily;
    bool m_ec2InstanceFamilyHasBeenSet = false;

    SavingsPlanType m_savingsPlanType;
    bool m_savingsPlanTypeHasBeenSet = false;

    SavingsPlanPaymentOption m_paymentOption;
    bool m_paymentOptionHasBeenSet = false;

    Aws::Vector<SavingsPlanProductType> m_productTypes;
    bool m_productTypesHasBeenSet = false;

    CurrencyCode m_currency;
    bool m_currencyHasBeenSet = false;

    Aws::String m_commitment;
    bool m_commitmentHasBeenSet = false;

    Aws::String m_upfrontPaymentAmount;
    bool m_upfrontPaymentAmountHasBeenSet = false;

    Aws::String m_recurringPaymentAmount;
    bool m_recurringPaymentAmountHasBeenSet = false;

    long long m_termDurationInSeconds;
    bool m_termDurationInSecondsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_returnableUntil;
    bool m_returnableUntilHasBeenSet = false;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
