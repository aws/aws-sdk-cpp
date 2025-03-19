/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/snowball/model/LongTermPricingType.h>
#include <aws/snowball/model/SnowballType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>Each <code>LongTermPricingListEntry</code> object contains information about
   * a long-term pricing type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/LongTermPricingListEntry">AWS
   * API Reference</a></p>
   */
  class LongTermPricingListEntry
  {
  public:
    AWS_SNOWBALL_API LongTermPricingListEntry() = default;
    AWS_SNOWBALL_API LongTermPricingListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API LongTermPricingListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the long-term pricing type for the device.</p>
     */
    inline const Aws::String& GetLongTermPricingId() const { return m_longTermPricingId; }
    inline bool LongTermPricingIdHasBeenSet() const { return m_longTermPricingIdHasBeenSet; }
    template<typename LongTermPricingIdT = Aws::String>
    void SetLongTermPricingId(LongTermPricingIdT&& value) { m_longTermPricingIdHasBeenSet = true; m_longTermPricingId = std::forward<LongTermPricingIdT>(value); }
    template<typename LongTermPricingIdT = Aws::String>
    LongTermPricingListEntry& WithLongTermPricingId(LongTermPricingIdT&& value) { SetLongTermPricingId(std::forward<LongTermPricingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date the long-term pricing contract.</p>
     */
    inline const Aws::Utils::DateTime& GetLongTermPricingEndDate() const { return m_longTermPricingEndDate; }
    inline bool LongTermPricingEndDateHasBeenSet() const { return m_longTermPricingEndDateHasBeenSet; }
    template<typename LongTermPricingEndDateT = Aws::Utils::DateTime>
    void SetLongTermPricingEndDate(LongTermPricingEndDateT&& value) { m_longTermPricingEndDateHasBeenSet = true; m_longTermPricingEndDate = std::forward<LongTermPricingEndDateT>(value); }
    template<typename LongTermPricingEndDateT = Aws::Utils::DateTime>
    LongTermPricingListEntry& WithLongTermPricingEndDate(LongTermPricingEndDateT&& value) { SetLongTermPricingEndDate(std::forward<LongTermPricingEndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date of the long-term pricing contract.</p>
     */
    inline const Aws::Utils::DateTime& GetLongTermPricingStartDate() const { return m_longTermPricingStartDate; }
    inline bool LongTermPricingStartDateHasBeenSet() const { return m_longTermPricingStartDateHasBeenSet; }
    template<typename LongTermPricingStartDateT = Aws::Utils::DateTime>
    void SetLongTermPricingStartDate(LongTermPricingStartDateT&& value) { m_longTermPricingStartDateHasBeenSet = true; m_longTermPricingStartDate = std::forward<LongTermPricingStartDateT>(value); }
    template<typename LongTermPricingStartDateT = Aws::Utils::DateTime>
    LongTermPricingListEntry& WithLongTermPricingStartDate(LongTermPricingStartDateT&& value) { SetLongTermPricingStartDate(std::forward<LongTermPricingStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of long-term pricing that was selected for the device.</p>
     */
    inline LongTermPricingType GetLongTermPricingType() const { return m_longTermPricingType; }
    inline bool LongTermPricingTypeHasBeenSet() const { return m_longTermPricingTypeHasBeenSet; }
    inline void SetLongTermPricingType(LongTermPricingType value) { m_longTermPricingTypeHasBeenSet = true; m_longTermPricingType = value; }
    inline LongTermPricingListEntry& WithLongTermPricingType(LongTermPricingType value) { SetLongTermPricingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current active jobs on the device the long-term pricing type.</p>
     */
    inline const Aws::String& GetCurrentActiveJob() const { return m_currentActiveJob; }
    inline bool CurrentActiveJobHasBeenSet() const { return m_currentActiveJobHasBeenSet; }
    template<typename CurrentActiveJobT = Aws::String>
    void SetCurrentActiveJob(CurrentActiveJobT&& value) { m_currentActiveJobHasBeenSet = true; m_currentActiveJob = std::forward<CurrentActiveJobT>(value); }
    template<typename CurrentActiveJobT = Aws::String>
    LongTermPricingListEntry& WithCurrentActiveJob(CurrentActiveJobT&& value) { SetCurrentActiveJob(std::forward<CurrentActiveJobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new device that replaces a device that is ordered with long-term
     * pricing.</p>
     */
    inline const Aws::String& GetReplacementJob() const { return m_replacementJob; }
    inline bool ReplacementJobHasBeenSet() const { return m_replacementJobHasBeenSet; }
    template<typename ReplacementJobT = Aws::String>
    void SetReplacementJob(ReplacementJobT&& value) { m_replacementJobHasBeenSet = true; m_replacementJob = std::forward<ReplacementJobT>(value); }
    template<typename ReplacementJobT = Aws::String>
    LongTermPricingListEntry& WithReplacementJob(ReplacementJobT&& value) { SetReplacementJob(std::forward<ReplacementJobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to <code>true</code>, specifies that the current long-term pricing
     * type for the device should be automatically renewed before the long-term pricing
     * contract expires.</p>
     */
    inline bool GetIsLongTermPricingAutoRenew() const { return m_isLongTermPricingAutoRenew; }
    inline bool IsLongTermPricingAutoRenewHasBeenSet() const { return m_isLongTermPricingAutoRenewHasBeenSet; }
    inline void SetIsLongTermPricingAutoRenew(bool value) { m_isLongTermPricingAutoRenewHasBeenSet = true; m_isLongTermPricingAutoRenew = value; }
    inline LongTermPricingListEntry& WithIsLongTermPricingAutoRenew(bool value) { SetIsLongTermPricingAutoRenew(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the long-term pricing type.</p>
     */
    inline const Aws::String& GetLongTermPricingStatus() const { return m_longTermPricingStatus; }
    inline bool LongTermPricingStatusHasBeenSet() const { return m_longTermPricingStatusHasBeenSet; }
    template<typename LongTermPricingStatusT = Aws::String>
    void SetLongTermPricingStatus(LongTermPricingStatusT&& value) { m_longTermPricingStatusHasBeenSet = true; m_longTermPricingStatus = std::forward<LongTermPricingStatusT>(value); }
    template<typename LongTermPricingStatusT = Aws::String>
    LongTermPricingListEntry& WithLongTermPricingStatus(LongTermPricingStatusT&& value) { SetLongTermPricingStatus(std::forward<LongTermPricingStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Snow Family devices associated with this long-term pricing
     * job.</p>
     */
    inline SnowballType GetSnowballType() const { return m_snowballType; }
    inline bool SnowballTypeHasBeenSet() const { return m_snowballTypeHasBeenSet; }
    inline void SetSnowballType(SnowballType value) { m_snowballTypeHasBeenSet = true; m_snowballType = value; }
    inline LongTermPricingListEntry& WithSnowballType(SnowballType value) { SetSnowballType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the jobs that are associated with a long-term pricing type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobIds() const { return m_jobIds; }
    inline bool JobIdsHasBeenSet() const { return m_jobIdsHasBeenSet; }
    template<typename JobIdsT = Aws::Vector<Aws::String>>
    void SetJobIds(JobIdsT&& value) { m_jobIdsHasBeenSet = true; m_jobIds = std::forward<JobIdsT>(value); }
    template<typename JobIdsT = Aws::Vector<Aws::String>>
    LongTermPricingListEntry& WithJobIds(JobIdsT&& value) { SetJobIds(std::forward<JobIdsT>(value)); return *this;}
    template<typename JobIdsT = Aws::String>
    LongTermPricingListEntry& AddJobIds(JobIdsT&& value) { m_jobIdsHasBeenSet = true; m_jobIds.emplace_back(std::forward<JobIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_longTermPricingId;
    bool m_longTermPricingIdHasBeenSet = false;

    Aws::Utils::DateTime m_longTermPricingEndDate{};
    bool m_longTermPricingEndDateHasBeenSet = false;

    Aws::Utils::DateTime m_longTermPricingStartDate{};
    bool m_longTermPricingStartDateHasBeenSet = false;

    LongTermPricingType m_longTermPricingType{LongTermPricingType::NOT_SET};
    bool m_longTermPricingTypeHasBeenSet = false;

    Aws::String m_currentActiveJob;
    bool m_currentActiveJobHasBeenSet = false;

    Aws::String m_replacementJob;
    bool m_replacementJobHasBeenSet = false;

    bool m_isLongTermPricingAutoRenew{false};
    bool m_isLongTermPricingAutoRenewHasBeenSet = false;

    Aws::String m_longTermPricingStatus;
    bool m_longTermPricingStatusHasBeenSet = false;

    SnowballType m_snowballType{SnowballType::NOT_SET};
    bool m_snowballTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_jobIds;
    bool m_jobIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
