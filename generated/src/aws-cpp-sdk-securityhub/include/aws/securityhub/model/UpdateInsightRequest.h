/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsSecurityFindingFilters.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class UpdateInsightRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API UpdateInsightRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInsight"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the insight that you want to update.</p>
     */
    inline const Aws::String& GetInsightArn() const { return m_insightArn; }
    inline bool InsightArnHasBeenSet() const { return m_insightArnHasBeenSet; }
    template<typename InsightArnT = Aws::String>
    void SetInsightArn(InsightArnT&& value) { m_insightArnHasBeenSet = true; m_insightArn = std::forward<InsightArnT>(value); }
    template<typename InsightArnT = Aws::String>
    UpdateInsightRequest& WithInsightArn(InsightArnT&& value) { SetInsightArn(std::forward<InsightArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated name for the insight.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateInsightRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated filters that define this insight.</p>
     */
    inline const AwsSecurityFindingFilters& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = AwsSecurityFindingFilters>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = AwsSecurityFindingFilters>
    UpdateInsightRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated <code>GroupBy</code> attribute that defines this insight.</p>
     */
    inline const Aws::String& GetGroupByAttribute() const { return m_groupByAttribute; }
    inline bool GroupByAttributeHasBeenSet() const { return m_groupByAttributeHasBeenSet; }
    template<typename GroupByAttributeT = Aws::String>
    void SetGroupByAttribute(GroupByAttributeT&& value) { m_groupByAttributeHasBeenSet = true; m_groupByAttribute = std::forward<GroupByAttributeT>(value); }
    template<typename GroupByAttributeT = Aws::String>
    UpdateInsightRequest& WithGroupByAttribute(GroupByAttributeT&& value) { SetGroupByAttribute(std::forward<GroupByAttributeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_insightArn;
    bool m_insightArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AwsSecurityFindingFilters m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_groupByAttribute;
    bool m_groupByAttributeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
