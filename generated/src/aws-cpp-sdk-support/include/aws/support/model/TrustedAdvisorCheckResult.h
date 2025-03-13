/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/support/model/TrustedAdvisorResourcesSummary.h>
#include <aws/support/model/TrustedAdvisorCategorySpecificSummary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/support/model/TrustedAdvisorResourceDetail.h>
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
namespace Support
{
namespace Model
{

  /**
   * <p>The results of a Trusted Advisor check returned by
   * <a>DescribeTrustedAdvisorCheckResult</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/TrustedAdvisorCheckResult">AWS
   * API Reference</a></p>
   */
  class TrustedAdvisorCheckResult
  {
  public:
    AWS_SUPPORT_API TrustedAdvisorCheckResult() = default;
    AWS_SUPPORT_API TrustedAdvisorCheckResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API TrustedAdvisorCheckResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline const Aws::String& GetCheckId() const { return m_checkId; }
    inline bool CheckIdHasBeenSet() const { return m_checkIdHasBeenSet; }
    template<typename CheckIdT = Aws::String>
    void SetCheckId(CheckIdT&& value) { m_checkIdHasBeenSet = true; m_checkId = std::forward<CheckIdT>(value); }
    template<typename CheckIdT = Aws::String>
    TrustedAdvisorCheckResult& WithCheckId(CheckIdT&& value) { SetCheckId(std::forward<CheckIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the last refresh of the check.</p>
     */
    inline const Aws::String& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::String>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::String>
    TrustedAdvisorCheckResult& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alert status of the check: "ok" (green), "warning" (yellow), "error"
     * (red), or "not_available".</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    TrustedAdvisorCheckResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TrustedAdvisorResourcesSummary& GetResourcesSummary() const { return m_resourcesSummary; }
    inline bool ResourcesSummaryHasBeenSet() const { return m_resourcesSummaryHasBeenSet; }
    template<typename ResourcesSummaryT = TrustedAdvisorResourcesSummary>
    void SetResourcesSummary(ResourcesSummaryT&& value) { m_resourcesSummaryHasBeenSet = true; m_resourcesSummary = std::forward<ResourcesSummaryT>(value); }
    template<typename ResourcesSummaryT = TrustedAdvisorResourcesSummary>
    TrustedAdvisorCheckResult& WithResourcesSummary(ResourcesSummaryT&& value) { SetResourcesSummary(std::forward<ResourcesSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary information that relates to the category of the check. Cost
     * Optimizing is the only category that is currently supported.</p>
     */
    inline const TrustedAdvisorCategorySpecificSummary& GetCategorySpecificSummary() const { return m_categorySpecificSummary; }
    inline bool CategorySpecificSummaryHasBeenSet() const { return m_categorySpecificSummaryHasBeenSet; }
    template<typename CategorySpecificSummaryT = TrustedAdvisorCategorySpecificSummary>
    void SetCategorySpecificSummary(CategorySpecificSummaryT&& value) { m_categorySpecificSummaryHasBeenSet = true; m_categorySpecificSummary = std::forward<CategorySpecificSummaryT>(value); }
    template<typename CategorySpecificSummaryT = TrustedAdvisorCategorySpecificSummary>
    TrustedAdvisorCheckResult& WithCategorySpecificSummary(CategorySpecificSummaryT&& value) { SetCategorySpecificSummary(std::forward<CategorySpecificSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details about each resource listed in the check result.</p>
     */
    inline const Aws::Vector<TrustedAdvisorResourceDetail>& GetFlaggedResources() const { return m_flaggedResources; }
    inline bool FlaggedResourcesHasBeenSet() const { return m_flaggedResourcesHasBeenSet; }
    template<typename FlaggedResourcesT = Aws::Vector<TrustedAdvisorResourceDetail>>
    void SetFlaggedResources(FlaggedResourcesT&& value) { m_flaggedResourcesHasBeenSet = true; m_flaggedResources = std::forward<FlaggedResourcesT>(value); }
    template<typename FlaggedResourcesT = Aws::Vector<TrustedAdvisorResourceDetail>>
    TrustedAdvisorCheckResult& WithFlaggedResources(FlaggedResourcesT&& value) { SetFlaggedResources(std::forward<FlaggedResourcesT>(value)); return *this;}
    template<typename FlaggedResourcesT = TrustedAdvisorResourceDetail>
    TrustedAdvisorCheckResult& AddFlaggedResources(FlaggedResourcesT&& value) { m_flaggedResourcesHasBeenSet = true; m_flaggedResources.emplace_back(std::forward<FlaggedResourcesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_checkId;
    bool m_checkIdHasBeenSet = false;

    Aws::String m_timestamp;
    bool m_timestampHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    TrustedAdvisorResourcesSummary m_resourcesSummary;
    bool m_resourcesSummaryHasBeenSet = false;

    TrustedAdvisorCategorySpecificSummary m_categorySpecificSummary;
    bool m_categorySpecificSummaryHasBeenSet = false;

    Aws::Vector<TrustedAdvisorResourceDetail> m_flaggedResources;
    bool m_flaggedResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
