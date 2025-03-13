/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/CustomMessageActivity.h>
#include <aws/pinpoint/model/ConditionalSplitActivity.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/EmailMessageActivity.h>
#include <aws/pinpoint/model/HoldoutActivity.h>
#include <aws/pinpoint/model/MultiConditionalSplitActivity.h>
#include <aws/pinpoint/model/PushMessageActivity.h>
#include <aws/pinpoint/model/RandomSplitActivity.h>
#include <aws/pinpoint/model/SMSMessageActivity.h>
#include <aws/pinpoint/model/WaitActivity.h>
#include <aws/pinpoint/model/ContactCenterActivity.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the configuration and other settings for an activity in a
   * journey.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/Activity">AWS
   * API Reference</a></p>
   */
  class Activity
  {
  public:
    AWS_PINPOINT_API Activity() = default;
    AWS_PINPOINT_API Activity(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Activity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The settings for a custom message activity. This type of activity calls an
     * AWS Lambda function or web hook that sends messages to participants.</p>
     */
    inline const CustomMessageActivity& GetCUSTOM() const { return m_cUSTOM; }
    inline bool CUSTOMHasBeenSet() const { return m_cUSTOMHasBeenSet; }
    template<typename CUSTOMT = CustomMessageActivity>
    void SetCUSTOM(CUSTOMT&& value) { m_cUSTOMHasBeenSet = true; m_cUSTOM = std::forward<CUSTOMT>(value); }
    template<typename CUSTOMT = CustomMessageActivity>
    Activity& WithCUSTOM(CUSTOMT&& value) { SetCUSTOM(std::forward<CUSTOMT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for a yes/no split activity. This type of activity sends
     * participants down one of two paths in a journey, based on conditions that you
     * specify.</p>
     */
    inline const ConditionalSplitActivity& GetConditionalSplit() const { return m_conditionalSplit; }
    inline bool ConditionalSplitHasBeenSet() const { return m_conditionalSplitHasBeenSet; }
    template<typename ConditionalSplitT = ConditionalSplitActivity>
    void SetConditionalSplit(ConditionalSplitT&& value) { m_conditionalSplitHasBeenSet = true; m_conditionalSplit = std::forward<ConditionalSplitT>(value); }
    template<typename ConditionalSplitT = ConditionalSplitActivity>
    Activity& WithConditionalSplit(ConditionalSplitT&& value) { SetConditionalSplit(std::forward<ConditionalSplitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom description of the activity.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Activity& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for an email activity. This type of activity sends an email
     * message to participants.</p>
     */
    inline const EmailMessageActivity& GetEMAIL() const { return m_eMAIL; }
    inline bool EMAILHasBeenSet() const { return m_eMAILHasBeenSet; }
    template<typename EMAILT = EmailMessageActivity>
    void SetEMAIL(EMAILT&& value) { m_eMAILHasBeenSet = true; m_eMAIL = std::forward<EMAILT>(value); }
    template<typename EMAILT = EmailMessageActivity>
    Activity& WithEMAIL(EMAILT&& value) { SetEMAIL(std::forward<EMAILT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for a holdout activity. This type of activity stops a journey
     * for a specified percentage of participants.</p>
     */
    inline const HoldoutActivity& GetHoldout() const { return m_holdout; }
    inline bool HoldoutHasBeenSet() const { return m_holdoutHasBeenSet; }
    template<typename HoldoutT = HoldoutActivity>
    void SetHoldout(HoldoutT&& value) { m_holdoutHasBeenSet = true; m_holdout = std::forward<HoldoutT>(value); }
    template<typename HoldoutT = HoldoutActivity>
    Activity& WithHoldout(HoldoutT&& value) { SetHoldout(std::forward<HoldoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for a multivariate split activity. This type of activity sends
     * participants down one of as many as five paths (including a default <i>Else</i>
     * path) in a journey, based on conditions that you specify.</p>
     */
    inline const MultiConditionalSplitActivity& GetMultiCondition() const { return m_multiCondition; }
    inline bool MultiConditionHasBeenSet() const { return m_multiConditionHasBeenSet; }
    template<typename MultiConditionT = MultiConditionalSplitActivity>
    void SetMultiCondition(MultiConditionT&& value) { m_multiConditionHasBeenSet = true; m_multiCondition = std::forward<MultiConditionT>(value); }
    template<typename MultiConditionT = MultiConditionalSplitActivity>
    Activity& WithMultiCondition(MultiConditionT&& value) { SetMultiCondition(std::forward<MultiConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for a push notification activity. This type of activity sends a
     * push notification to participants.</p>
     */
    inline const PushMessageActivity& GetPUSH() const { return m_pUSH; }
    inline bool PUSHHasBeenSet() const { return m_pUSHHasBeenSet; }
    template<typename PUSHT = PushMessageActivity>
    void SetPUSH(PUSHT&& value) { m_pUSHHasBeenSet = true; m_pUSH = std::forward<PUSHT>(value); }
    template<typename PUSHT = PushMessageActivity>
    Activity& WithPUSH(PUSHT&& value) { SetPUSH(std::forward<PUSHT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for a random split activity. This type of activity randomly
     * sends specified percentages of participants down one of as many as five paths in
     * a journey, based on conditions that you specify.</p>
     */
    inline const RandomSplitActivity& GetRandomSplit() const { return m_randomSplit; }
    inline bool RandomSplitHasBeenSet() const { return m_randomSplitHasBeenSet; }
    template<typename RandomSplitT = RandomSplitActivity>
    void SetRandomSplit(RandomSplitT&& value) { m_randomSplitHasBeenSet = true; m_randomSplit = std::forward<RandomSplitT>(value); }
    template<typename RandomSplitT = RandomSplitActivity>
    Activity& WithRandomSplit(RandomSplitT&& value) { SetRandomSplit(std::forward<RandomSplitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for an SMS activity. This type of activity sends a text message
     * to participants.</p>
     */
    inline const SMSMessageActivity& GetSMS() const { return m_sMS; }
    inline bool SMSHasBeenSet() const { return m_sMSHasBeenSet; }
    template<typename SMST = SMSMessageActivity>
    void SetSMS(SMST&& value) { m_sMSHasBeenSet = true; m_sMS = std::forward<SMST>(value); }
    template<typename SMST = SMSMessageActivity>
    Activity& WithSMS(SMST&& value) { SetSMS(std::forward<SMST>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for a wait activity. This type of activity waits for a certain
     * amount of time or until a specific date and time before moving participants to
     * the next activity in a journey.</p>
     */
    inline const WaitActivity& GetWait() const { return m_wait; }
    inline bool WaitHasBeenSet() const { return m_waitHasBeenSet; }
    template<typename WaitT = WaitActivity>
    void SetWait(WaitT&& value) { m_waitHasBeenSet = true; m_wait = std::forward<WaitT>(value); }
    template<typename WaitT = WaitActivity>
    Activity& WithWait(WaitT&& value) { SetWait(std::forward<WaitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for a connect activity. This type of activity initiates a
     * contact center call to participants.</p>
     */
    inline const ContactCenterActivity& GetContactCenter() const { return m_contactCenter; }
    inline bool ContactCenterHasBeenSet() const { return m_contactCenterHasBeenSet; }
    template<typename ContactCenterT = ContactCenterActivity>
    void SetContactCenter(ContactCenterT&& value) { m_contactCenterHasBeenSet = true; m_contactCenter = std::forward<ContactCenterT>(value); }
    template<typename ContactCenterT = ContactCenterActivity>
    Activity& WithContactCenter(ContactCenterT&& value) { SetContactCenter(std::forward<ContactCenterT>(value)); return *this;}
    ///@}
  private:

    CustomMessageActivity m_cUSTOM;
    bool m_cUSTOMHasBeenSet = false;

    ConditionalSplitActivity m_conditionalSplit;
    bool m_conditionalSplitHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    EmailMessageActivity m_eMAIL;
    bool m_eMAILHasBeenSet = false;

    HoldoutActivity m_holdout;
    bool m_holdoutHasBeenSet = false;

    MultiConditionalSplitActivity m_multiCondition;
    bool m_multiConditionHasBeenSet = false;

    PushMessageActivity m_pUSH;
    bool m_pUSHHasBeenSet = false;

    RandomSplitActivity m_randomSplit;
    bool m_randomSplitHasBeenSet = false;

    SMSMessageActivity m_sMS;
    bool m_sMSHasBeenSet = false;

    WaitActivity m_wait;
    bool m_waitHasBeenSet = false;

    ContactCenterActivity m_contactCenter;
    bool m_contactCenterHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
