/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/notifications/model/SummarizationDimensionOverview.h>
#include <aws/notifications/model/AggregationKey.h>
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
namespace Notifications
{
namespace Model
{

  /**
   * <p>Provides additional information about the aggregation key.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/AggregationSummary">AWS
   * API Reference</a></p>
   */
  class AggregationSummary
  {
  public:
    AWS_NOTIFICATIONS_API AggregationSummary() = default;
    AWS_NOTIFICATIONS_API AggregationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API AggregationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the number of events associated with the aggregation key.</p>
     */
    inline int GetEventCount() const { return m_eventCount; }
    inline bool EventCountHasBeenSet() const { return m_eventCountHasBeenSet; }
    inline void SetEventCount(int value) { m_eventCountHasBeenSet = true; m_eventCount = value; }
    inline AggregationSummary& WithEventCount(int value) { SetEventCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the criteria or rules by which notifications have been grouped
     * together.</p>
     */
    inline const Aws::Vector<AggregationKey>& GetAggregatedBy() const { return m_aggregatedBy; }
    inline bool AggregatedByHasBeenSet() const { return m_aggregatedByHasBeenSet; }
    template<typename AggregatedByT = Aws::Vector<AggregationKey>>
    void SetAggregatedBy(AggregatedByT&& value) { m_aggregatedByHasBeenSet = true; m_aggregatedBy = std::forward<AggregatedByT>(value); }
    template<typename AggregatedByT = Aws::Vector<AggregationKey>>
    AggregationSummary& WithAggregatedBy(AggregatedByT&& value) { SetAggregatedBy(std::forward<AggregatedByT>(value)); return *this;}
    template<typename AggregatedByT = AggregationKey>
    AggregationSummary& AddAggregatedBy(AggregatedByT&& value) { m_aggregatedByHasBeenSet = true; m_aggregatedBy.emplace_back(std::forward<AggregatedByT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the Amazon Web Services accounts in the aggregation key.</p>
     */
    inline const SummarizationDimensionOverview& GetAggregatedAccounts() const { return m_aggregatedAccounts; }
    inline bool AggregatedAccountsHasBeenSet() const { return m_aggregatedAccountsHasBeenSet; }
    template<typename AggregatedAccountsT = SummarizationDimensionOverview>
    void SetAggregatedAccounts(AggregatedAccountsT&& value) { m_aggregatedAccountsHasBeenSet = true; m_aggregatedAccounts = std::forward<AggregatedAccountsT>(value); }
    template<typename AggregatedAccountsT = SummarizationDimensionOverview>
    AggregationSummary& WithAggregatedAccounts(AggregatedAccountsT&& value) { SetAggregatedAccounts(std::forward<AggregatedAccountsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the Amazon Web Services Regions in the aggregation key.</p>
     */
    inline const SummarizationDimensionOverview& GetAggregatedRegions() const { return m_aggregatedRegions; }
    inline bool AggregatedRegionsHasBeenSet() const { return m_aggregatedRegionsHasBeenSet; }
    template<typename AggregatedRegionsT = SummarizationDimensionOverview>
    void SetAggregatedRegions(AggregatedRegionsT&& value) { m_aggregatedRegionsHasBeenSet = true; m_aggregatedRegions = std::forward<AggregatedRegionsT>(value); }
    template<typename AggregatedRegionsT = SummarizationDimensionOverview>
    AggregationSummary& WithAggregatedRegions(AggregatedRegionsT&& value) { SetAggregatedRegions(std::forward<AggregatedRegionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the collection of organizational units that are involved in the
     * aggregation key.</p>
     */
    inline const SummarizationDimensionOverview& GetAggregatedOrganizationalUnits() const { return m_aggregatedOrganizationalUnits; }
    inline bool AggregatedOrganizationalUnitsHasBeenSet() const { return m_aggregatedOrganizationalUnitsHasBeenSet; }
    template<typename AggregatedOrganizationalUnitsT = SummarizationDimensionOverview>
    void SetAggregatedOrganizationalUnits(AggregatedOrganizationalUnitsT&& value) { m_aggregatedOrganizationalUnitsHasBeenSet = true; m_aggregatedOrganizationalUnits = std::forward<AggregatedOrganizationalUnitsT>(value); }
    template<typename AggregatedOrganizationalUnitsT = SummarizationDimensionOverview>
    AggregationSummary& WithAggregatedOrganizationalUnits(AggregatedOrganizationalUnitsT&& value) { SetAggregatedOrganizationalUnits(std::forward<AggregatedOrganizationalUnitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of additional dimensions used to group and summarize data.</p>
     */
    inline const Aws::Vector<SummarizationDimensionOverview>& GetAdditionalSummarizationDimensions() const { return m_additionalSummarizationDimensions; }
    inline bool AdditionalSummarizationDimensionsHasBeenSet() const { return m_additionalSummarizationDimensionsHasBeenSet; }
    template<typename AdditionalSummarizationDimensionsT = Aws::Vector<SummarizationDimensionOverview>>
    void SetAdditionalSummarizationDimensions(AdditionalSummarizationDimensionsT&& value) { m_additionalSummarizationDimensionsHasBeenSet = true; m_additionalSummarizationDimensions = std::forward<AdditionalSummarizationDimensionsT>(value); }
    template<typename AdditionalSummarizationDimensionsT = Aws::Vector<SummarizationDimensionOverview>>
    AggregationSummary& WithAdditionalSummarizationDimensions(AdditionalSummarizationDimensionsT&& value) { SetAdditionalSummarizationDimensions(std::forward<AdditionalSummarizationDimensionsT>(value)); return *this;}
    template<typename AdditionalSummarizationDimensionsT = SummarizationDimensionOverview>
    AggregationSummary& AddAdditionalSummarizationDimensions(AdditionalSummarizationDimensionsT&& value) { m_additionalSummarizationDimensionsHasBeenSet = true; m_additionalSummarizationDimensions.emplace_back(std::forward<AdditionalSummarizationDimensionsT>(value)); return *this; }
    ///@}
  private:

    int m_eventCount{0};
    bool m_eventCountHasBeenSet = false;

    Aws::Vector<AggregationKey> m_aggregatedBy;
    bool m_aggregatedByHasBeenSet = false;

    SummarizationDimensionOverview m_aggregatedAccounts;
    bool m_aggregatedAccountsHasBeenSet = false;

    SummarizationDimensionOverview m_aggregatedRegions;
    bool m_aggregatedRegionsHasBeenSet = false;

    SummarizationDimensionOverview m_aggregatedOrganizationalUnits;
    bool m_aggregatedOrganizationalUnitsHasBeenSet = false;

    Aws::Vector<SummarizationDimensionOverview> m_additionalSummarizationDimensions;
    bool m_additionalSummarizationDimensionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
