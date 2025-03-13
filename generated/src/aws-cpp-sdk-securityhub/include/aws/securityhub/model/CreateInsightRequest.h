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
  class CreateInsightRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API CreateInsightRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInsight"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the custom insight to create.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateInsightRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more attributes used to filter the findings included in the insight.
     * The insight only includes findings that match the criteria defined in the
     * filters.</p>
     */
    inline const AwsSecurityFindingFilters& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = AwsSecurityFindingFilters>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = AwsSecurityFindingFilters>
    CreateInsightRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute used to group the findings for the insight. The grouping
     * attribute identifies the type of item that the insight applies to. For example,
     * if an insight is grouped by resource identifier, then the insight produces a
     * list of resource identifiers.</p>
     */
    inline const Aws::String& GetGroupByAttribute() const { return m_groupByAttribute; }
    inline bool GroupByAttributeHasBeenSet() const { return m_groupByAttributeHasBeenSet; }
    template<typename GroupByAttributeT = Aws::String>
    void SetGroupByAttribute(GroupByAttributeT&& value) { m_groupByAttributeHasBeenSet = true; m_groupByAttribute = std::forward<GroupByAttributeT>(value); }
    template<typename GroupByAttributeT = Aws::String>
    CreateInsightRequest& WithGroupByAttribute(GroupByAttributeT&& value) { SetGroupByAttribute(std::forward<GroupByAttributeT>(value)); return *this;}
    ///@}
  private:

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
