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


    /**
     * <p>The ID of the offering.</p>
     */
    inline const Aws::String& GetOfferingId() const{ return m_offeringId; }

    /**
     * <p>The ID of the offering.</p>
     */
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }

    /**
     * <p>The ID of the offering.</p>
     */
    inline void SetOfferingId(const Aws::String& value) { m_offeringIdHasBeenSet = true; m_offeringId = value; }

    /**
     * <p>The ID of the offering.</p>
     */
    inline void SetOfferingId(Aws::String&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::move(value); }

    /**
     * <p>The ID of the offering.</p>
     */
    inline void SetOfferingId(const char* value) { m_offeringIdHasBeenSet = true; m_offeringId.assign(value); }

    /**
     * <p>The ID of the offering.</p>
     */
    inline SavingsPlan& WithOfferingId(const Aws::String& value) { SetOfferingId(value); return *this;}

    /**
     * <p>The ID of the offering.</p>
     */
    inline SavingsPlan& WithOfferingId(Aws::String&& value) { SetOfferingId(std::move(value)); return *this;}

    /**
     * <p>The ID of the offering.</p>
     */
    inline SavingsPlan& WithOfferingId(const char* value) { SetOfferingId(value); return *this;}


    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline const Aws::String& GetSavingsPlanId() const{ return m_savingsPlanId; }

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline bool SavingsPlanIdHasBeenSet() const { return m_savingsPlanIdHasBeenSet; }

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline void SetSavingsPlanId(const Aws::String& value) { m_savingsPlanIdHasBeenSet = true; m_savingsPlanId = value; }

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline void SetSavingsPlanId(Aws::String&& value) { m_savingsPlanIdHasBeenSet = true; m_savingsPlanId = std::move(value); }

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline void SetSavingsPlanId(const char* value) { m_savingsPlanIdHasBeenSet = true; m_savingsPlanId.assign(value); }

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline SavingsPlan& WithSavingsPlanId(const Aws::String& value) { SetSavingsPlanId(value); return *this;}

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline SavingsPlan& WithSavingsPlanId(Aws::String&& value) { SetSavingsPlanId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline SavingsPlan& WithSavingsPlanId(const char* value) { SetSavingsPlanId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Savings Plan.</p>
     */
    inline const Aws::String& GetSavingsPlanArn() const{ return m_savingsPlanArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Savings Plan.</p>
     */
    inline bool SavingsPlanArnHasBeenSet() const { return m_savingsPlanArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Savings Plan.</p>
     */
    inline void SetSavingsPlanArn(const Aws::String& value) { m_savingsPlanArnHasBeenSet = true; m_savingsPlanArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Savings Plan.</p>
     */
    inline void SetSavingsPlanArn(Aws::String&& value) { m_savingsPlanArnHasBeenSet = true; m_savingsPlanArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Savings Plan.</p>
     */
    inline void SetSavingsPlanArn(const char* value) { m_savingsPlanArnHasBeenSet = true; m_savingsPlanArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Savings Plan.</p>
     */
    inline SavingsPlan& WithSavingsPlanArn(const Aws::String& value) { SetSavingsPlanArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Savings Plan.</p>
     */
    inline SavingsPlan& WithSavingsPlanArn(Aws::String&& value) { SetSavingsPlanArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Savings Plan.</p>
     */
    inline SavingsPlan& WithSavingsPlanArn(const char* value) { SetSavingsPlanArn(value); return *this;}


    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description.</p>
     */
    inline SavingsPlan& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description.</p>
     */
    inline SavingsPlan& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description.</p>
     */
    inline SavingsPlan& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The start time.</p>
     */
    inline const Aws::String& GetStart() const{ return m_start; }

    /**
     * <p>The start time.</p>
     */
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }

    /**
     * <p>The start time.</p>
     */
    inline void SetStart(const Aws::String& value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * <p>The start time.</p>
     */
    inline void SetStart(Aws::String&& value) { m_startHasBeenSet = true; m_start = std::move(value); }

    /**
     * <p>The start time.</p>
     */
    inline void SetStart(const char* value) { m_startHasBeenSet = true; m_start.assign(value); }

    /**
     * <p>The start time.</p>
     */
    inline SavingsPlan& WithStart(const Aws::String& value) { SetStart(value); return *this;}

    /**
     * <p>The start time.</p>
     */
    inline SavingsPlan& WithStart(Aws::String&& value) { SetStart(std::move(value)); return *this;}

    /**
     * <p>The start time.</p>
     */
    inline SavingsPlan& WithStart(const char* value) { SetStart(value); return *this;}


    /**
     * <p>The end time.</p>
     */
    inline const Aws::String& GetEnd() const{ return m_end; }

    /**
     * <p>The end time.</p>
     */
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }

    /**
     * <p>The end time.</p>
     */
    inline void SetEnd(const Aws::String& value) { m_endHasBeenSet = true; m_end = value; }

    /**
     * <p>The end time.</p>
     */
    inline void SetEnd(Aws::String&& value) { m_endHasBeenSet = true; m_end = std::move(value); }

    /**
     * <p>The end time.</p>
     */
    inline void SetEnd(const char* value) { m_endHasBeenSet = true; m_end.assign(value); }

    /**
     * <p>The end time.</p>
     */
    inline SavingsPlan& WithEnd(const Aws::String& value) { SetEnd(value); return *this;}

    /**
     * <p>The end time.</p>
     */
    inline SavingsPlan& WithEnd(Aws::String&& value) { SetEnd(std::move(value)); return *this;}

    /**
     * <p>The end time.</p>
     */
    inline SavingsPlan& WithEnd(const char* value) { SetEnd(value); return *this;}


    /**
     * <p>The state.</p>
     */
    inline const SavingsPlanState& GetState() const{ return m_state; }

    /**
     * <p>The state.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state.</p>
     */
    inline void SetState(const SavingsPlanState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state.</p>
     */
    inline void SetState(SavingsPlanState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state.</p>
     */
    inline SavingsPlan& WithState(const SavingsPlanState& value) { SetState(value); return *this;}

    /**
     * <p>The state.</p>
     */
    inline SavingsPlan& WithState(SavingsPlanState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The AWS Region.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The AWS Region.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The AWS Region.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The AWS Region.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The AWS Region.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The AWS Region.</p>
     */
    inline SavingsPlan& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The AWS Region.</p>
     */
    inline SavingsPlan& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS Region.</p>
     */
    inline SavingsPlan& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The EC2 instance family.</p>
     */
    inline const Aws::String& GetEc2InstanceFamily() const{ return m_ec2InstanceFamily; }

    /**
     * <p>The EC2 instance family.</p>
     */
    inline bool Ec2InstanceFamilyHasBeenSet() const { return m_ec2InstanceFamilyHasBeenSet; }

    /**
     * <p>The EC2 instance family.</p>
     */
    inline void SetEc2InstanceFamily(const Aws::String& value) { m_ec2InstanceFamilyHasBeenSet = true; m_ec2InstanceFamily = value; }

    /**
     * <p>The EC2 instance family.</p>
     */
    inline void SetEc2InstanceFamily(Aws::String&& value) { m_ec2InstanceFamilyHasBeenSet = true; m_ec2InstanceFamily = std::move(value); }

    /**
     * <p>The EC2 instance family.</p>
     */
    inline void SetEc2InstanceFamily(const char* value) { m_ec2InstanceFamilyHasBeenSet = true; m_ec2InstanceFamily.assign(value); }

    /**
     * <p>The EC2 instance family.</p>
     */
    inline SavingsPlan& WithEc2InstanceFamily(const Aws::String& value) { SetEc2InstanceFamily(value); return *this;}

    /**
     * <p>The EC2 instance family.</p>
     */
    inline SavingsPlan& WithEc2InstanceFamily(Aws::String&& value) { SetEc2InstanceFamily(std::move(value)); return *this;}

    /**
     * <p>The EC2 instance family.</p>
     */
    inline SavingsPlan& WithEc2InstanceFamily(const char* value) { SetEc2InstanceFamily(value); return *this;}


    /**
     * <p>The plan type.</p>
     */
    inline const SavingsPlanType& GetSavingsPlanType() const{ return m_savingsPlanType; }

    /**
     * <p>The plan type.</p>
     */
    inline bool SavingsPlanTypeHasBeenSet() const { return m_savingsPlanTypeHasBeenSet; }

    /**
     * <p>The plan type.</p>
     */
    inline void SetSavingsPlanType(const SavingsPlanType& value) { m_savingsPlanTypeHasBeenSet = true; m_savingsPlanType = value; }

    /**
     * <p>The plan type.</p>
     */
    inline void SetSavingsPlanType(SavingsPlanType&& value) { m_savingsPlanTypeHasBeenSet = true; m_savingsPlanType = std::move(value); }

    /**
     * <p>The plan type.</p>
     */
    inline SavingsPlan& WithSavingsPlanType(const SavingsPlanType& value) { SetSavingsPlanType(value); return *this;}

    /**
     * <p>The plan type.</p>
     */
    inline SavingsPlan& WithSavingsPlanType(SavingsPlanType&& value) { SetSavingsPlanType(std::move(value)); return *this;}


    /**
     * <p>The payment option.</p>
     */
    inline const SavingsPlanPaymentOption& GetPaymentOption() const{ return m_paymentOption; }

    /**
     * <p>The payment option.</p>
     */
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }

    /**
     * <p>The payment option.</p>
     */
    inline void SetPaymentOption(const SavingsPlanPaymentOption& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }

    /**
     * <p>The payment option.</p>
     */
    inline void SetPaymentOption(SavingsPlanPaymentOption&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }

    /**
     * <p>The payment option.</p>
     */
    inline SavingsPlan& WithPaymentOption(const SavingsPlanPaymentOption& value) { SetPaymentOption(value); return *this;}

    /**
     * <p>The payment option.</p>
     */
    inline SavingsPlan& WithPaymentOption(SavingsPlanPaymentOption&& value) { SetPaymentOption(std::move(value)); return *this;}


    /**
     * <p>The product types.</p>
     */
    inline const Aws::Vector<SavingsPlanProductType>& GetProductTypes() const{ return m_productTypes; }

    /**
     * <p>The product types.</p>
     */
    inline bool ProductTypesHasBeenSet() const { return m_productTypesHasBeenSet; }

    /**
     * <p>The product types.</p>
     */
    inline void SetProductTypes(const Aws::Vector<SavingsPlanProductType>& value) { m_productTypesHasBeenSet = true; m_productTypes = value; }

    /**
     * <p>The product types.</p>
     */
    inline void SetProductTypes(Aws::Vector<SavingsPlanProductType>&& value) { m_productTypesHasBeenSet = true; m_productTypes = std::move(value); }

    /**
     * <p>The product types.</p>
     */
    inline SavingsPlan& WithProductTypes(const Aws::Vector<SavingsPlanProductType>& value) { SetProductTypes(value); return *this;}

    /**
     * <p>The product types.</p>
     */
    inline SavingsPlan& WithProductTypes(Aws::Vector<SavingsPlanProductType>&& value) { SetProductTypes(std::move(value)); return *this;}

    /**
     * <p>The product types.</p>
     */
    inline SavingsPlan& AddProductTypes(const SavingsPlanProductType& value) { m_productTypesHasBeenSet = true; m_productTypes.push_back(value); return *this; }

    /**
     * <p>The product types.</p>
     */
    inline SavingsPlan& AddProductTypes(SavingsPlanProductType&& value) { m_productTypesHasBeenSet = true; m_productTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The currency.</p>
     */
    inline const CurrencyCode& GetCurrency() const{ return m_currency; }

    /**
     * <p>The currency.</p>
     */
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }

    /**
     * <p>The currency.</p>
     */
    inline void SetCurrency(const CurrencyCode& value) { m_currencyHasBeenSet = true; m_currency = value; }

    /**
     * <p>The currency.</p>
     */
    inline void SetCurrency(CurrencyCode&& value) { m_currencyHasBeenSet = true; m_currency = std::move(value); }

    /**
     * <p>The currency.</p>
     */
    inline SavingsPlan& WithCurrency(const CurrencyCode& value) { SetCurrency(value); return *this;}

    /**
     * <p>The currency.</p>
     */
    inline SavingsPlan& WithCurrency(CurrencyCode&& value) { SetCurrency(std::move(value)); return *this;}


    /**
     * <p>The hourly commitment, in USD.</p>
     */
    inline const Aws::String& GetCommitment() const{ return m_commitment; }

    /**
     * <p>The hourly commitment, in USD.</p>
     */
    inline bool CommitmentHasBeenSet() const { return m_commitmentHasBeenSet; }

    /**
     * <p>The hourly commitment, in USD.</p>
     */
    inline void SetCommitment(const Aws::String& value) { m_commitmentHasBeenSet = true; m_commitment = value; }

    /**
     * <p>The hourly commitment, in USD.</p>
     */
    inline void SetCommitment(Aws::String&& value) { m_commitmentHasBeenSet = true; m_commitment = std::move(value); }

    /**
     * <p>The hourly commitment, in USD.</p>
     */
    inline void SetCommitment(const char* value) { m_commitmentHasBeenSet = true; m_commitment.assign(value); }

    /**
     * <p>The hourly commitment, in USD.</p>
     */
    inline SavingsPlan& WithCommitment(const Aws::String& value) { SetCommitment(value); return *this;}

    /**
     * <p>The hourly commitment, in USD.</p>
     */
    inline SavingsPlan& WithCommitment(Aws::String&& value) { SetCommitment(std::move(value)); return *this;}

    /**
     * <p>The hourly commitment, in USD.</p>
     */
    inline SavingsPlan& WithCommitment(const char* value) { SetCommitment(value); return *this;}


    /**
     * <p>The up-front payment amount.</p>
     */
    inline const Aws::String& GetUpfrontPaymentAmount() const{ return m_upfrontPaymentAmount; }

    /**
     * <p>The up-front payment amount.</p>
     */
    inline bool UpfrontPaymentAmountHasBeenSet() const { return m_upfrontPaymentAmountHasBeenSet; }

    /**
     * <p>The up-front payment amount.</p>
     */
    inline void SetUpfrontPaymentAmount(const Aws::String& value) { m_upfrontPaymentAmountHasBeenSet = true; m_upfrontPaymentAmount = value; }

    /**
     * <p>The up-front payment amount.</p>
     */
    inline void SetUpfrontPaymentAmount(Aws::String&& value) { m_upfrontPaymentAmountHasBeenSet = true; m_upfrontPaymentAmount = std::move(value); }

    /**
     * <p>The up-front payment amount.</p>
     */
    inline void SetUpfrontPaymentAmount(const char* value) { m_upfrontPaymentAmountHasBeenSet = true; m_upfrontPaymentAmount.assign(value); }

    /**
     * <p>The up-front payment amount.</p>
     */
    inline SavingsPlan& WithUpfrontPaymentAmount(const Aws::String& value) { SetUpfrontPaymentAmount(value); return *this;}

    /**
     * <p>The up-front payment amount.</p>
     */
    inline SavingsPlan& WithUpfrontPaymentAmount(Aws::String&& value) { SetUpfrontPaymentAmount(std::move(value)); return *this;}

    /**
     * <p>The up-front payment amount.</p>
     */
    inline SavingsPlan& WithUpfrontPaymentAmount(const char* value) { SetUpfrontPaymentAmount(value); return *this;}


    /**
     * <p>The recurring payment amount.</p>
     */
    inline const Aws::String& GetRecurringPaymentAmount() const{ return m_recurringPaymentAmount; }

    /**
     * <p>The recurring payment amount.</p>
     */
    inline bool RecurringPaymentAmountHasBeenSet() const { return m_recurringPaymentAmountHasBeenSet; }

    /**
     * <p>The recurring payment amount.</p>
     */
    inline void SetRecurringPaymentAmount(const Aws::String& value) { m_recurringPaymentAmountHasBeenSet = true; m_recurringPaymentAmount = value; }

    /**
     * <p>The recurring payment amount.</p>
     */
    inline void SetRecurringPaymentAmount(Aws::String&& value) { m_recurringPaymentAmountHasBeenSet = true; m_recurringPaymentAmount = std::move(value); }

    /**
     * <p>The recurring payment amount.</p>
     */
    inline void SetRecurringPaymentAmount(const char* value) { m_recurringPaymentAmountHasBeenSet = true; m_recurringPaymentAmount.assign(value); }

    /**
     * <p>The recurring payment amount.</p>
     */
    inline SavingsPlan& WithRecurringPaymentAmount(const Aws::String& value) { SetRecurringPaymentAmount(value); return *this;}

    /**
     * <p>The recurring payment amount.</p>
     */
    inline SavingsPlan& WithRecurringPaymentAmount(Aws::String&& value) { SetRecurringPaymentAmount(std::move(value)); return *this;}

    /**
     * <p>The recurring payment amount.</p>
     */
    inline SavingsPlan& WithRecurringPaymentAmount(const char* value) { SetRecurringPaymentAmount(value); return *this;}


    /**
     * <p>The duration of the term, in seconds.</p>
     */
    inline long long GetTermDurationInSeconds() const{ return m_termDurationInSeconds; }

    /**
     * <p>The duration of the term, in seconds.</p>
     */
    inline bool TermDurationInSecondsHasBeenSet() const { return m_termDurationInSecondsHasBeenSet; }

    /**
     * <p>The duration of the term, in seconds.</p>
     */
    inline void SetTermDurationInSeconds(long long value) { m_termDurationInSecondsHasBeenSet = true; m_termDurationInSeconds = value; }

    /**
     * <p>The duration of the term, in seconds.</p>
     */
    inline SavingsPlan& WithTermDurationInSeconds(long long value) { SetTermDurationInSeconds(value); return *this;}


    /**
     * <p>One or more tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>One or more tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>One or more tags.</p>
     */
    inline SavingsPlan& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more tags.</p>
     */
    inline SavingsPlan& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>One or more tags.</p>
     */
    inline SavingsPlan& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline SavingsPlan& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline SavingsPlan& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline SavingsPlan& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline SavingsPlan& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline SavingsPlan& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline SavingsPlan& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
