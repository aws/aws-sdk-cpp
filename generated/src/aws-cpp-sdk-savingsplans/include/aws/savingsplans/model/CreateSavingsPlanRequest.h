/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/savingsplans/SavingsPlansRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SavingsPlans
{
namespace Model
{

  /**
   */
  class CreateSavingsPlanRequest : public SavingsPlansRequest
  {
  public:
    AWS_SAVINGSPLANS_API CreateSavingsPlanRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSavingsPlan"; }

    AWS_SAVINGSPLANS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the offering.</p>
     */
    inline const Aws::String& GetSavingsPlanOfferingId() const { return m_savingsPlanOfferingId; }
    inline bool SavingsPlanOfferingIdHasBeenSet() const { return m_savingsPlanOfferingIdHasBeenSet; }
    template<typename SavingsPlanOfferingIdT = Aws::String>
    void SetSavingsPlanOfferingId(SavingsPlanOfferingIdT&& value) { m_savingsPlanOfferingIdHasBeenSet = true; m_savingsPlanOfferingId = std::forward<SavingsPlanOfferingIdT>(value); }
    template<typename SavingsPlanOfferingIdT = Aws::String>
    CreateSavingsPlanRequest& WithSavingsPlanOfferingId(SavingsPlanOfferingIdT&& value) { SetSavingsPlanOfferingId(std::forward<SavingsPlanOfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hourly commitment, in the same currency of the
     * <code>savingsPlanOfferingId</code>. This is a value between 0.001 and 1 million.
     * You cannot specify more than five digits after the decimal point.</p>
     */
    inline const Aws::String& GetCommitment() const { return m_commitment; }
    inline bool CommitmentHasBeenSet() const { return m_commitmentHasBeenSet; }
    template<typename CommitmentT = Aws::String>
    void SetCommitment(CommitmentT&& value) { m_commitmentHasBeenSet = true; m_commitment = std::forward<CommitmentT>(value); }
    template<typename CommitmentT = Aws::String>
    CreateSavingsPlanRequest& WithCommitment(CommitmentT&& value) { SetCommitment(std::forward<CommitmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The up-front payment amount. This is a whole number between 50 and 99 percent
     * of the total value of the Savings Plan. This parameter is only supported if the
     * payment option is <code>Partial Upfront</code>.</p>
     */
    inline const Aws::String& GetUpfrontPaymentAmount() const { return m_upfrontPaymentAmount; }
    inline bool UpfrontPaymentAmountHasBeenSet() const { return m_upfrontPaymentAmountHasBeenSet; }
    template<typename UpfrontPaymentAmountT = Aws::String>
    void SetUpfrontPaymentAmount(UpfrontPaymentAmountT&& value) { m_upfrontPaymentAmountHasBeenSet = true; m_upfrontPaymentAmount = std::forward<UpfrontPaymentAmountT>(value); }
    template<typename UpfrontPaymentAmountT = Aws::String>
    CreateSavingsPlanRequest& WithUpfrontPaymentAmount(UpfrontPaymentAmountT&& value) { SetUpfrontPaymentAmount(std::forward<UpfrontPaymentAmountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The purchase time of the Savings Plan in UTC format
     * (YYYY-MM-DDTHH:MM:SSZ).</p>
     */
    inline const Aws::Utils::DateTime& GetPurchaseTime() const { return m_purchaseTime; }
    inline bool PurchaseTimeHasBeenSet() const { return m_purchaseTimeHasBeenSet; }
    template<typename PurchaseTimeT = Aws::Utils::DateTime>
    void SetPurchaseTime(PurchaseTimeT&& value) { m_purchaseTimeHasBeenSet = true; m_purchaseTime = std::forward<PurchaseTimeT>(value); }
    template<typename PurchaseTimeT = Aws::Utils::DateTime>
    CreateSavingsPlanRequest& WithPurchaseTime(PurchaseTimeT&& value) { SetPurchaseTime(std::forward<PurchaseTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateSavingsPlanRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
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
    CreateSavingsPlanRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateSavingsPlanRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_savingsPlanOfferingId;
    bool m_savingsPlanOfferingIdHasBeenSet = false;

    Aws::String m_commitment;
    bool m_commitmentHasBeenSet = false;

    Aws::String m_upfrontPaymentAmount;
    bool m_upfrontPaymentAmountHasBeenSet = false;

    Aws::Utils::DateTime m_purchaseTime{};
    bool m_purchaseTimeHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
