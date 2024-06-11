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
    AWS_SECURITYHUB_API UpdateInsightRequest();

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
    inline const Aws::String& GetInsightArn() const{ return m_insightArn; }
    inline bool InsightArnHasBeenSet() const { return m_insightArnHasBeenSet; }
    inline void SetInsightArn(const Aws::String& value) { m_insightArnHasBeenSet = true; m_insightArn = value; }
    inline void SetInsightArn(Aws::String&& value) { m_insightArnHasBeenSet = true; m_insightArn = std::move(value); }
    inline void SetInsightArn(const char* value) { m_insightArnHasBeenSet = true; m_insightArn.assign(value); }
    inline UpdateInsightRequest& WithInsightArn(const Aws::String& value) { SetInsightArn(value); return *this;}
    inline UpdateInsightRequest& WithInsightArn(Aws::String&& value) { SetInsightArn(std::move(value)); return *this;}
    inline UpdateInsightRequest& WithInsightArn(const char* value) { SetInsightArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated name for the insight.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateInsightRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateInsightRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateInsightRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated filters that define this insight.</p>
     */
    inline const AwsSecurityFindingFilters& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const AwsSecurityFindingFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(AwsSecurityFindingFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline UpdateInsightRequest& WithFilters(const AwsSecurityFindingFilters& value) { SetFilters(value); return *this;}
    inline UpdateInsightRequest& WithFilters(AwsSecurityFindingFilters&& value) { SetFilters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated <code>GroupBy</code> attribute that defines this insight.</p>
     */
    inline const Aws::String& GetGroupByAttribute() const{ return m_groupByAttribute; }
    inline bool GroupByAttributeHasBeenSet() const { return m_groupByAttributeHasBeenSet; }
    inline void SetGroupByAttribute(const Aws::String& value) { m_groupByAttributeHasBeenSet = true; m_groupByAttribute = value; }
    inline void SetGroupByAttribute(Aws::String&& value) { m_groupByAttributeHasBeenSet = true; m_groupByAttribute = std::move(value); }
    inline void SetGroupByAttribute(const char* value) { m_groupByAttributeHasBeenSet = true; m_groupByAttribute.assign(value); }
    inline UpdateInsightRequest& WithGroupByAttribute(const Aws::String& value) { SetGroupByAttribute(value); return *this;}
    inline UpdateInsightRequest& WithGroupByAttribute(Aws::String&& value) { SetGroupByAttribute(std::move(value)); return *this;}
    inline UpdateInsightRequest& WithGroupByAttribute(const char* value) { SetGroupByAttribute(value); return *this;}
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
