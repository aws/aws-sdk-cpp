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
    AWS_SECURITYHUB_API CreateInsightRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInsight"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the custom insight to create.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the custom insight to create.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the custom insight to create.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the custom insight to create.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the custom insight to create.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the custom insight to create.</p>
     */
    inline CreateInsightRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the custom insight to create.</p>
     */
    inline CreateInsightRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom insight to create.</p>
     */
    inline CreateInsightRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>One or more attributes used to filter the findings included in the insight.
     * The insight only includes findings that match the criteria defined in the
     * filters.</p>
     */
    inline const AwsSecurityFindingFilters& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more attributes used to filter the findings included in the insight.
     * The insight only includes findings that match the criteria defined in the
     * filters.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more attributes used to filter the findings included in the insight.
     * The insight only includes findings that match the criteria defined in the
     * filters.</p>
     */
    inline void SetFilters(const AwsSecurityFindingFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more attributes used to filter the findings included in the insight.
     * The insight only includes findings that match the criteria defined in the
     * filters.</p>
     */
    inline void SetFilters(AwsSecurityFindingFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more attributes used to filter the findings included in the insight.
     * The insight only includes findings that match the criteria defined in the
     * filters.</p>
     */
    inline CreateInsightRequest& WithFilters(const AwsSecurityFindingFilters& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more attributes used to filter the findings included in the insight.
     * The insight only includes findings that match the criteria defined in the
     * filters.</p>
     */
    inline CreateInsightRequest& WithFilters(AwsSecurityFindingFilters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>The attribute used to group the findings for the insight. The grouping
     * attribute identifies the type of item that the insight applies to. For example,
     * if an insight is grouped by resource identifier, then the insight produces a
     * list of resource identifiers.</p>
     */
    inline const Aws::String& GetGroupByAttribute() const{ return m_groupByAttribute; }

    /**
     * <p>The attribute used to group the findings for the insight. The grouping
     * attribute identifies the type of item that the insight applies to. For example,
     * if an insight is grouped by resource identifier, then the insight produces a
     * list of resource identifiers.</p>
     */
    inline bool GroupByAttributeHasBeenSet() const { return m_groupByAttributeHasBeenSet; }

    /**
     * <p>The attribute used to group the findings for the insight. The grouping
     * attribute identifies the type of item that the insight applies to. For example,
     * if an insight is grouped by resource identifier, then the insight produces a
     * list of resource identifiers.</p>
     */
    inline void SetGroupByAttribute(const Aws::String& value) { m_groupByAttributeHasBeenSet = true; m_groupByAttribute = value; }

    /**
     * <p>The attribute used to group the findings for the insight. The grouping
     * attribute identifies the type of item that the insight applies to. For example,
     * if an insight is grouped by resource identifier, then the insight produces a
     * list of resource identifiers.</p>
     */
    inline void SetGroupByAttribute(Aws::String&& value) { m_groupByAttributeHasBeenSet = true; m_groupByAttribute = std::move(value); }

    /**
     * <p>The attribute used to group the findings for the insight. The grouping
     * attribute identifies the type of item that the insight applies to. For example,
     * if an insight is grouped by resource identifier, then the insight produces a
     * list of resource identifiers.</p>
     */
    inline void SetGroupByAttribute(const char* value) { m_groupByAttributeHasBeenSet = true; m_groupByAttribute.assign(value); }

    /**
     * <p>The attribute used to group the findings for the insight. The grouping
     * attribute identifies the type of item that the insight applies to. For example,
     * if an insight is grouped by resource identifier, then the insight produces a
     * list of resource identifiers.</p>
     */
    inline CreateInsightRequest& WithGroupByAttribute(const Aws::String& value) { SetGroupByAttribute(value); return *this;}

    /**
     * <p>The attribute used to group the findings for the insight. The grouping
     * attribute identifies the type of item that the insight applies to. For example,
     * if an insight is grouped by resource identifier, then the insight produces a
     * list of resource identifiers.</p>
     */
    inline CreateInsightRequest& WithGroupByAttribute(Aws::String&& value) { SetGroupByAttribute(std::move(value)); return *this;}

    /**
     * <p>The attribute used to group the findings for the insight. The grouping
     * attribute identifies the type of item that the insight applies to. For example,
     * if an insight is grouped by resource identifier, then the insight produces a
     * list of resource identifiers.</p>
     */
    inline CreateInsightRequest& WithGroupByAttribute(const char* value) { SetGroupByAttribute(value); return *this;}

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
