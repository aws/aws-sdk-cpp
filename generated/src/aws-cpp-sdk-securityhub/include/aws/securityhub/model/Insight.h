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
    AWS_SECURITYHUB_API Insight();
    AWS_SECURITYHUB_API Insight(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Insight& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of a Security Hub insight.</p>
     */
    inline const Aws::String& GetInsightArn() const{ return m_insightArn; }
    inline bool InsightArnHasBeenSet() const { return m_insightArnHasBeenSet; }
    inline void SetInsightArn(const Aws::String& value) { m_insightArnHasBeenSet = true; m_insightArn = value; }
    inline void SetInsightArn(Aws::String&& value) { m_insightArnHasBeenSet = true; m_insightArn = std::move(value); }
    inline void SetInsightArn(const char* value) { m_insightArnHasBeenSet = true; m_insightArn.assign(value); }
    inline Insight& WithInsightArn(const Aws::String& value) { SetInsightArn(value); return *this;}
    inline Insight& WithInsightArn(Aws::String&& value) { SetInsightArn(std::move(value)); return *this;}
    inline Insight& WithInsightArn(const char* value) { SetInsightArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a Security Hub insight.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Insight& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Insight& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Insight& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more attributes used to filter the findings included in the insight.
     * You can filter by up to ten finding attributes. For each attribute, you can
     * provide up to 20 filter values. The insight only includes findings that match
     * the criteria defined in the filters.</p>
     */
    inline const AwsSecurityFindingFilters& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const AwsSecurityFindingFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(AwsSecurityFindingFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline Insight& WithFilters(const AwsSecurityFindingFilters& value) { SetFilters(value); return *this;}
    inline Insight& WithFilters(AwsSecurityFindingFilters&& value) { SetFilters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The grouping attribute for the insight's findings. Indicates how to group the
     * matching findings, and identifies the type of item that the insight applies to.
     * For example, if an insight is grouped by resource identifier, then the insight
     * produces a list of resource identifiers.</p>
     */
    inline const Aws::String& GetGroupByAttribute() const{ return m_groupByAttribute; }
    inline bool GroupByAttributeHasBeenSet() const { return m_groupByAttributeHasBeenSet; }
    inline void SetGroupByAttribute(const Aws::String& value) { m_groupByAttributeHasBeenSet = true; m_groupByAttribute = value; }
    inline void SetGroupByAttribute(Aws::String&& value) { m_groupByAttributeHasBeenSet = true; m_groupByAttribute = std::move(value); }
    inline void SetGroupByAttribute(const char* value) { m_groupByAttributeHasBeenSet = true; m_groupByAttribute.assign(value); }
    inline Insight& WithGroupByAttribute(const Aws::String& value) { SetGroupByAttribute(value); return *this;}
    inline Insight& WithGroupByAttribute(Aws::String&& value) { SetGroupByAttribute(std::move(value)); return *this;}
    inline Insight& WithGroupByAttribute(const char* value) { SetGroupByAttribute(value); return *this;}
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
