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
    AWS_NOTIFICATIONS_API AggregationSummary();
    AWS_NOTIFICATIONS_API AggregationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API AggregationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the number of events associated with the aggregation key.</p>
     */
    inline int GetEventCount() const{ return m_eventCount; }
    inline bool EventCountHasBeenSet() const { return m_eventCountHasBeenSet; }
    inline void SetEventCount(int value) { m_eventCountHasBeenSet = true; m_eventCount = value; }
    inline AggregationSummary& WithEventCount(int value) { SetEventCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the criteria or rules by which notifications have been grouped
     * together.</p>
     */
    inline const Aws::Vector<AggregationKey>& GetAggregatedBy() const{ return m_aggregatedBy; }
    inline bool AggregatedByHasBeenSet() const { return m_aggregatedByHasBeenSet; }
    inline void SetAggregatedBy(const Aws::Vector<AggregationKey>& value) { m_aggregatedByHasBeenSet = true; m_aggregatedBy = value; }
    inline void SetAggregatedBy(Aws::Vector<AggregationKey>&& value) { m_aggregatedByHasBeenSet = true; m_aggregatedBy = std::move(value); }
    inline AggregationSummary& WithAggregatedBy(const Aws::Vector<AggregationKey>& value) { SetAggregatedBy(value); return *this;}
    inline AggregationSummary& WithAggregatedBy(Aws::Vector<AggregationKey>&& value) { SetAggregatedBy(std::move(value)); return *this;}
    inline AggregationSummary& AddAggregatedBy(const AggregationKey& value) { m_aggregatedByHasBeenSet = true; m_aggregatedBy.push_back(value); return *this; }
    inline AggregationSummary& AddAggregatedBy(AggregationKey&& value) { m_aggregatedByHasBeenSet = true; m_aggregatedBy.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the Amazon Web Services accounts in the aggregation key.</p>
     */
    inline const SummarizationDimensionOverview& GetAggregatedAccounts() const{ return m_aggregatedAccounts; }
    inline bool AggregatedAccountsHasBeenSet() const { return m_aggregatedAccountsHasBeenSet; }
    inline void SetAggregatedAccounts(const SummarizationDimensionOverview& value) { m_aggregatedAccountsHasBeenSet = true; m_aggregatedAccounts = value; }
    inline void SetAggregatedAccounts(SummarizationDimensionOverview&& value) { m_aggregatedAccountsHasBeenSet = true; m_aggregatedAccounts = std::move(value); }
    inline AggregationSummary& WithAggregatedAccounts(const SummarizationDimensionOverview& value) { SetAggregatedAccounts(value); return *this;}
    inline AggregationSummary& WithAggregatedAccounts(SummarizationDimensionOverview&& value) { SetAggregatedAccounts(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the Amazon Web Services Regions in the aggregation key.</p>
     */
    inline const SummarizationDimensionOverview& GetAggregatedRegions() const{ return m_aggregatedRegions; }
    inline bool AggregatedRegionsHasBeenSet() const { return m_aggregatedRegionsHasBeenSet; }
    inline void SetAggregatedRegions(const SummarizationDimensionOverview& value) { m_aggregatedRegionsHasBeenSet = true; m_aggregatedRegions = value; }
    inline void SetAggregatedRegions(SummarizationDimensionOverview&& value) { m_aggregatedRegionsHasBeenSet = true; m_aggregatedRegions = std::move(value); }
    inline AggregationSummary& WithAggregatedRegions(const SummarizationDimensionOverview& value) { SetAggregatedRegions(value); return *this;}
    inline AggregationSummary& WithAggregatedRegions(SummarizationDimensionOverview&& value) { SetAggregatedRegions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the collection of organizational units that are involved in the
     * aggregation key.</p>
     */
    inline const SummarizationDimensionOverview& GetAggregatedOrganizationalUnits() const{ return m_aggregatedOrganizationalUnits; }
    inline bool AggregatedOrganizationalUnitsHasBeenSet() const { return m_aggregatedOrganizationalUnitsHasBeenSet; }
    inline void SetAggregatedOrganizationalUnits(const SummarizationDimensionOverview& value) { m_aggregatedOrganizationalUnitsHasBeenSet = true; m_aggregatedOrganizationalUnits = value; }
    inline void SetAggregatedOrganizationalUnits(SummarizationDimensionOverview&& value) { m_aggregatedOrganizationalUnitsHasBeenSet = true; m_aggregatedOrganizationalUnits = std::move(value); }
    inline AggregationSummary& WithAggregatedOrganizationalUnits(const SummarizationDimensionOverview& value) { SetAggregatedOrganizationalUnits(value); return *this;}
    inline AggregationSummary& WithAggregatedOrganizationalUnits(SummarizationDimensionOverview&& value) { SetAggregatedOrganizationalUnits(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of additional dimensions used to group and summarize data.</p>
     */
    inline const Aws::Vector<SummarizationDimensionOverview>& GetAdditionalSummarizationDimensions() const{ return m_additionalSummarizationDimensions; }
    inline bool AdditionalSummarizationDimensionsHasBeenSet() const { return m_additionalSummarizationDimensionsHasBeenSet; }
    inline void SetAdditionalSummarizationDimensions(const Aws::Vector<SummarizationDimensionOverview>& value) { m_additionalSummarizationDimensionsHasBeenSet = true; m_additionalSummarizationDimensions = value; }
    inline void SetAdditionalSummarizationDimensions(Aws::Vector<SummarizationDimensionOverview>&& value) { m_additionalSummarizationDimensionsHasBeenSet = true; m_additionalSummarizationDimensions = std::move(value); }
    inline AggregationSummary& WithAdditionalSummarizationDimensions(const Aws::Vector<SummarizationDimensionOverview>& value) { SetAdditionalSummarizationDimensions(value); return *this;}
    inline AggregationSummary& WithAdditionalSummarizationDimensions(Aws::Vector<SummarizationDimensionOverview>&& value) { SetAdditionalSummarizationDimensions(std::move(value)); return *this;}
    inline AggregationSummary& AddAdditionalSummarizationDimensions(const SummarizationDimensionOverview& value) { m_additionalSummarizationDimensionsHasBeenSet = true; m_additionalSummarizationDimensions.push_back(value); return *this; }
    inline AggregationSummary& AddAdditionalSummarizationDimensions(SummarizationDimensionOverview&& value) { m_additionalSummarizationDimensionsHasBeenSet = true; m_additionalSummarizationDimensions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    int m_eventCount;
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
