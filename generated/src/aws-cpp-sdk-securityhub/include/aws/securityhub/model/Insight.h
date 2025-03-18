/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsSecurityFindingFilters.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Contains information about a Security Hub insight.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Insight">AWS
   * API Reference</a></p>
   */
  class Insight
  {
  public:
    AWS_SECURITYHUB_API Insight() = default;
    AWS_SECURITYHUB_API Insight(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Insight& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of a Security Hub insight.</p>
     */
    inline const Aws::String& GetInsightArn() const { return m_insightArn; }
    inline bool InsightArnHasBeenSet() const { return m_insightArnHasBeenSet; }
    template<typename InsightArnT = Aws::String>
    void SetInsightArn(InsightArnT&& value) { m_insightArnHasBeenSet = true; m_insightArn = std::forward<InsightArnT>(value); }
    template<typename InsightArnT = Aws::String>
    Insight& WithInsightArn(InsightArnT&& value) { SetInsightArn(std::forward<InsightArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a Security Hub insight.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Insight& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more attributes used to filter the findings included in the insight.
     * You can filter by up to ten finding attributes. For each attribute, you can
     * provide up to 20 filter values. The insight only includes findings that match
     * the criteria defined in the filters.</p>
     */
    inline const AwsSecurityFindingFilters& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = AwsSecurityFindingFilters>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = AwsSecurityFindingFilters>
    Insight& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The grouping attribute for the insight's findings. Indicates how to group the
     * matching findings, and identifies the type of item that the insight applies to.
     * For example, if an insight is grouped by resource identifier, then the insight
     * produces a list of resource identifiers.</p>
     */
    inline const Aws::String& GetGroupByAttribute() const { return m_groupByAttribute; }
    inline bool GroupByAttributeHasBeenSet() const { return m_groupByAttributeHasBeenSet; }
    template<typename GroupByAttributeT = Aws::String>
    void SetGroupByAttribute(GroupByAttributeT&& value) { m_groupByAttributeHasBeenSet = true; m_groupByAttribute = std::forward<GroupByAttributeT>(value); }
    template<typename GroupByAttributeT = Aws::String>
    Insight& WithGroupByAttribute(GroupByAttributeT&& value) { SetGroupByAttribute(std::forward<GroupByAttributeT>(value)); return *this;}
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
