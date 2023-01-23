/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalytics_EXPORTS.h>
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsRequest.h>
#include <aws/marketplacecommerceanalytics/model/DataSetType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace MarketplaceCommerceAnalytics
{
namespace Model
{

  /**
   * Container for the parameters to the GenerateDataSet operation.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplacecommerceanalytics-2015-07-01/GenerateDataSetRequest">AWS
   * API Reference</a></p>
   */
  class GenerateDataSetRequest : public MarketplaceCommerceAnalyticsRequest
  {
  public:
    AWS_MARKETPLACECOMMERCEANALYTICS_API GenerateDataSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateDataSet"; }

    AWS_MARKETPLACECOMMERCEANALYTICS_API Aws::String SerializePayload() const override;

    AWS_MARKETPLACECOMMERCEANALYTICS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The desired data set type.</p> <p> <ul> <li>
     * <strong>customer_subscriber_hourly_monthly_subscriptions</strong> <p>From
     * 2017-09-15 to present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>customer_subscriber_annual_subscriptions</strong> <p>From 2017-09-15 to
     * present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_usage_by_instance_type</strong> <p>From 2017-09-15 to
     * present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_fees</strong> <p>From 2017-09-15 to present: Available
     * daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_free_trial_conversions</strong> <p>From 2017-09-15 to
     * present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_new_instances</strong> <p>From 2017-09-15 to present:
     * Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_new_product_subscribers</strong> <p>From 2017-09-15 to
     * present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_canceled_product_subscribers</strong> <p>From 2017-09-15
     * to present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>monthly_revenue_billing_and_revenue_data</strong> <p>From 2017-09-15 to
     * present: Available monthly on the 15th day of the month by 24:00 UTC. Data
     * includes metered transactions (e.g. hourly) from one month prior.</p> </li> <li>
     * <strong>monthly_revenue_annual_subscriptions</strong> <p>From 2017-09-15 to
     * present: Available monthly on the 15th day of the month by 24:00 UTC. Data
     * includes up-front software charges (e.g. annual) from one month prior.</p> </li>
     * <li> <strong>monthly_revenue_field_demonstration_usage</strong> <p>From
     * 2018-03-15 to present: Available monthly on the 15th day of the month by 24:00
     * UTC.</p> </li> <li> <strong>monthly_revenue_flexible_payment_schedule</strong>
     * <p>From 2018-11-15 to present: Available monthly on the 15th day of the month by
     * 24:00 UTC.</p> </li> <li> <strong>disbursed_amount_by_product</strong> <p>From
     * 2017-09-15 to present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_instance_hours</strong> <p>From 2017-09-15 to
     * present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_customer_geo</strong> <p>From 2017-09-15 to present:
     * Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_age_of_uncollected_funds</strong> <p>From 2017-09-15
     * to present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_age_of_disbursed_funds</strong> <p>From 2017-09-15
     * to present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_age_of_past_due_funds</strong> <p>From 2018-04-07 to
     * present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_uncollected_funds_breakdown</strong> <p>From
     * 2019-10-04 to present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>sales_compensation_billed_revenue</strong> <p>From 2017-09-15 to
     * present: Available monthly on the 15th day of the month by 24:00 UTC. Data
     * includes metered transactions (e.g. hourly) from one month prior, and up-front
     * software charges (e.g. annual) from one month prior.</p> </li> <li>
     * <strong>us_sales_and_use_tax_records</strong> <p>From 2017-09-15 to present:
     * Available monthly on the 15th day of the month by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_product_with_uncollected_funds</strong> <p>This data
     * set is deprecated. Download related reports from AMMP instead!</p> </li> <li>
     * <strong>customer_profile_by_industry</strong> <p>This data set is deprecated.
     * Download related reports from AMMP instead!</p> </li> <li>
     * <strong>customer_profile_by_revenue</strong> <p>This data set is deprecated.
     * Download related reports from AMMP instead!</p> </li> <li>
     * <strong>customer_profile_by_geography</strong> <p>This data set is deprecated.
     * Download related reports from AMMP instead!</p> </li> </ul> </p>
     */
    inline const DataSetType& GetDataSetType() const{ return m_dataSetType; }

    /**
     * <p>The desired data set type.</p> <p> <ul> <li>
     * <strong>customer_subscriber_hourly_monthly_subscriptions</strong> <p>From
     * 2017-09-15 to present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>customer_subscriber_annual_subscriptions</strong> <p>From 2017-09-15 to
     * present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_usage_by_instance_type</strong> <p>From 2017-09-15 to
     * present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_fees</strong> <p>From 2017-09-15 to present: Available
     * daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_free_trial_conversions</strong> <p>From 2017-09-15 to
     * present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_new_instances</strong> <p>From 2017-09-15 to present:
     * Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_new_product_subscribers</strong> <p>From 2017-09-15 to
     * present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_canceled_product_subscribers</strong> <p>From 2017-09-15
     * to present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>monthly_revenue_billing_and_revenue_data</strong> <p>From 2017-09-15 to
     * present: Available monthly on the 15th day of the month by 24:00 UTC. Data
     * includes metered transactions (e.g. hourly) from one month prior.</p> </li> <li>
     * <strong>monthly_revenue_annual_subscriptions</strong> <p>From 2017-09-15 to
     * present: Available monthly on the 15th day of the month by 24:00 UTC. Data
     * includes up-front software charges (e.g. annual) from one month prior.</p> </li>
     * <li> <strong>monthly_revenue_field_demonstration_usage</strong> <p>From
     * 2018-03-15 to present: Available monthly on the 15th day of the month by 24:00
     * UTC.</p> </li> <li> <strong>monthly_revenue_flexible_payment_schedule</strong>
     * <p>From 2018-11-15 to present: Available monthly on the 15th day of the month by
     * 24:00 UTC.</p> </li> <li> <strong>disbursed_amount_by_product</strong> <p>From
     * 2017-09-15 to present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_instance_hours</strong> <p>From 2017-09-15 to
     * present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_customer_geo</strong> <p>From 2017-09-15 to present:
     * Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_age_of_uncollected_funds</strong> <p>From 2017-09-15
     * to present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_age_of_disbursed_funds</strong> <p>From 2017-09-15
     * to present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_age_of_past_due_funds</strong> <p>From 2018-04-07 to
     * present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_uncollected_funds_breakdown</strong> <p>From
     * 2019-10-04 to present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>sales_compensation_billed_revenue</strong> <p>From 2017-09-15 to
     * present: Available monthly on the 15th day of the month by 24:00 UTC. Data
     * includes metered transactions (e.g. hourly) from one month prior, and up-front
     * software charges (e.g. annual) from one month prior.</p> </li> <li>
     * <strong>us_sales_and_use_tax_records</strong> <p>From 2017-09-15 to present:
     * Available monthly on the 15th day of the month by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_product_with_uncollected_funds</strong> <p>This data
     * set is deprecated. Download related reports from AMMP instead!</p> </li> <li>
     * <strong>customer_profile_by_industry</strong> <p>This data set is deprecated.
     * Download related reports from AMMP instead!</p> </li> <li>
     * <strong>customer_profile_by_revenue</strong> <p>This data set is deprecated.
     * Download related reports from AMMP instead!</p> </li> <li>
     * <strong>customer_profile_by_geography</strong> <p>This data set is deprecated.
     * Download related reports from AMMP instead!</p> </li> </ul> </p>
     */
    inline bool DataSetTypeHasBeenSet() const { return m_dataSetTypeHasBeenSet; }

    /**
     * <p>The desired data set type.</p> <p> <ul> <li>
     * <strong>customer_subscriber_hourly_monthly_subscriptions</strong> <p>From
     * 2017-09-15 to present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>customer_subscriber_annual_subscriptions</strong> <p>From 2017-09-15 to
     * present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_usage_by_instance_type</strong> <p>From 2017-09-15 to
     * present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_fees</strong> <p>From 2017-09-15 to present: Available
     * daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_free_trial_conversions</strong> <p>From 2017-09-15 to
     * present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_new_instances</strong> <p>From 2017-09-15 to present:
     * Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_new_product_subscribers</strong> <p>From 2017-09-15 to
     * present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_canceled_product_subscribers</strong> <p>From 2017-09-15
     * to present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>monthly_revenue_billing_and_revenue_data</strong> <p>From 2017-09-15 to
     * present: Available monthly on the 15th day of the month by 24:00 UTC. Data
     * includes metered transactions (e.g. hourly) from one month prior.</p> </li> <li>
     * <strong>monthly_revenue_annual_subscriptions</strong> <p>From 2017-09-15 to
     * present: Available monthly on the 15th day of the month by 24:00 UTC. Data
     * includes up-front software charges (e.g. annual) from one month prior.</p> </li>
     * <li> <strong>monthly_revenue_field_demonstration_usage</strong> <p>From
     * 2018-03-15 to present: Available monthly on the 15th day of the month by 24:00
     * UTC.</p> </li> <li> <strong>monthly_revenue_flexible_payment_schedule</strong>
     * <p>From 2018-11-15 to present: Available monthly on the 15th day of the month by
     * 24:00 UTC.</p> </li> <li> <strong>disbursed_amount_by_product</strong> <p>From
     * 2017-09-15 to present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_instance_hours</strong> <p>From 2017-09-15 to
     * present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_customer_geo</strong> <p>From 2017-09-15 to present:
     * Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_age_of_uncollected_funds</strong> <p>From 2017-09-15
     * to present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_age_of_disbursed_funds</strong> <p>From 2017-09-15
     * to present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_age_of_past_due_funds</strong> <p>From 2018-04-07 to
     * present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_uncollected_funds_breakdown</strong> <p>From
     * 2019-10-04 to present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>sales_compensation_billed_revenue</strong> <p>From 2017-09-15 to
     * present: Available monthly on the 15th day of the month by 24:00 UTC. Data
     * includes metered transactions (e.g. hourly) from one month prior, and up-front
     * software charges (e.g. annual) from one month prior.</p> </li> <li>
     * <strong>us_sales_and_use_tax_records</strong> <p>From 2017-09-15 to present:
     * Available monthly on the 15th day of the month by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_product_with_uncollected_funds</strong> <p>This data
     * set is deprecated. Download related reports from AMMP instead!</p> </li> <li>
     * <strong>customer_profile_by_industry</strong> <p>This data set is deprecated.
     * Download related reports from AMMP instead!</p> </li> <li>
     * <strong>customer_profile_by_revenue</strong> <p>This data set is deprecated.
     * Download related reports from AMMP instead!</p> </li> <li>
     * <strong>customer_profile_by_geography</strong> <p>This data set is deprecated.
     * Download related reports from AMMP instead!</p> </li> </ul> </p>
     */
    inline void SetDataSetType(const DataSetType& value) { m_dataSetTypeHasBeenSet = true; m_dataSetType = value; }

    /**
     * <p>The desired data set type.</p> <p> <ul> <li>
     * <strong>customer_subscriber_hourly_monthly_subscriptions</strong> <p>From
     * 2017-09-15 to present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>customer_subscriber_annual_subscriptions</strong> <p>From 2017-09-15 to
     * present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_usage_by_instance_type</strong> <p>From 2017-09-15 to
     * present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_fees</strong> <p>From 2017-09-15 to present: Available
     * daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_free_trial_conversions</strong> <p>From 2017-09-15 to
     * present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_new_instances</strong> <p>From 2017-09-15 to present:
     * Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_new_product_subscribers</strong> <p>From 2017-09-15 to
     * present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_canceled_product_subscribers</strong> <p>From 2017-09-15
     * to present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>monthly_revenue_billing_and_revenue_data</strong> <p>From 2017-09-15 to
     * present: Available monthly on the 15th day of the month by 24:00 UTC. Data
     * includes metered transactions (e.g. hourly) from one month prior.</p> </li> <li>
     * <strong>monthly_revenue_annual_subscriptions</strong> <p>From 2017-09-15 to
     * present: Available monthly on the 15th day of the month by 24:00 UTC. Data
     * includes up-front software charges (e.g. annual) from one month prior.</p> </li>
     * <li> <strong>monthly_revenue_field_demonstration_usage</strong> <p>From
     * 2018-03-15 to present: Available monthly on the 15th day of the month by 24:00
     * UTC.</p> </li> <li> <strong>monthly_revenue_flexible_payment_schedule</strong>
     * <p>From 2018-11-15 to present: Available monthly on the 15th day of the month by
     * 24:00 UTC.</p> </li> <li> <strong>disbursed_amount_by_product</strong> <p>From
     * 2017-09-15 to present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_instance_hours</strong> <p>From 2017-09-15 to
     * present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_customer_geo</strong> <p>From 2017-09-15 to present:
     * Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_age_of_uncollected_funds</strong> <p>From 2017-09-15
     * to present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_age_of_disbursed_funds</strong> <p>From 2017-09-15
     * to present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_age_of_past_due_funds</strong> <p>From 2018-04-07 to
     * present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_uncollected_funds_breakdown</strong> <p>From
     * 2019-10-04 to present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>sales_compensation_billed_revenue</strong> <p>From 2017-09-15 to
     * present: Available monthly on the 15th day of the month by 24:00 UTC. Data
     * includes metered transactions (e.g. hourly) from one month prior, and up-front
     * software charges (e.g. annual) from one month prior.</p> </li> <li>
     * <strong>us_sales_and_use_tax_records</strong> <p>From 2017-09-15 to present:
     * Available monthly on the 15th day of the month by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_product_with_uncollected_funds</strong> <p>This data
     * set is deprecated. Download related reports from AMMP instead!</p> </li> <li>
     * <strong>customer_profile_by_industry</strong> <p>This data set is deprecated.
     * Download related reports from AMMP instead!</p> </li> <li>
     * <strong>customer_profile_by_revenue</strong> <p>This data set is deprecated.
     * Download related reports from AMMP instead!</p> </li> <li>
     * <strong>customer_profile_by_geography</strong> <p>This data set is deprecated.
     * Download related reports from AMMP instead!</p> </li> </ul> </p>
     */
    inline void SetDataSetType(DataSetType&& value) { m_dataSetTypeHasBeenSet = true; m_dataSetType = std::move(value); }

    /**
     * <p>The desired data set type.</p> <p> <ul> <li>
     * <strong>customer_subscriber_hourly_monthly_subscriptions</strong> <p>From
     * 2017-09-15 to present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>customer_subscriber_annual_subscriptions</strong> <p>From 2017-09-15 to
     * present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_usage_by_instance_type</strong> <p>From 2017-09-15 to
     * present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_fees</strong> <p>From 2017-09-15 to present: Available
     * daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_free_trial_conversions</strong> <p>From 2017-09-15 to
     * present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_new_instances</strong> <p>From 2017-09-15 to present:
     * Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_new_product_subscribers</strong> <p>From 2017-09-15 to
     * present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_canceled_product_subscribers</strong> <p>From 2017-09-15
     * to present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>monthly_revenue_billing_and_revenue_data</strong> <p>From 2017-09-15 to
     * present: Available monthly on the 15th day of the month by 24:00 UTC. Data
     * includes metered transactions (e.g. hourly) from one month prior.</p> </li> <li>
     * <strong>monthly_revenue_annual_subscriptions</strong> <p>From 2017-09-15 to
     * present: Available monthly on the 15th day of the month by 24:00 UTC. Data
     * includes up-front software charges (e.g. annual) from one month prior.</p> </li>
     * <li> <strong>monthly_revenue_field_demonstration_usage</strong> <p>From
     * 2018-03-15 to present: Available monthly on the 15th day of the month by 24:00
     * UTC.</p> </li> <li> <strong>monthly_revenue_flexible_payment_schedule</strong>
     * <p>From 2018-11-15 to present: Available monthly on the 15th day of the month by
     * 24:00 UTC.</p> </li> <li> <strong>disbursed_amount_by_product</strong> <p>From
     * 2017-09-15 to present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_instance_hours</strong> <p>From 2017-09-15 to
     * present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_customer_geo</strong> <p>From 2017-09-15 to present:
     * Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_age_of_uncollected_funds</strong> <p>From 2017-09-15
     * to present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_age_of_disbursed_funds</strong> <p>From 2017-09-15
     * to present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_age_of_past_due_funds</strong> <p>From 2018-04-07 to
     * present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_uncollected_funds_breakdown</strong> <p>From
     * 2019-10-04 to present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>sales_compensation_billed_revenue</strong> <p>From 2017-09-15 to
     * present: Available monthly on the 15th day of the month by 24:00 UTC. Data
     * includes metered transactions (e.g. hourly) from one month prior, and up-front
     * software charges (e.g. annual) from one month prior.</p> </li> <li>
     * <strong>us_sales_and_use_tax_records</strong> <p>From 2017-09-15 to present:
     * Available monthly on the 15th day of the month by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_product_with_uncollected_funds</strong> <p>This data
     * set is deprecated. Download related reports from AMMP instead!</p> </li> <li>
     * <strong>customer_profile_by_industry</strong> <p>This data set is deprecated.
     * Download related reports from AMMP instead!</p> </li> <li>
     * <strong>customer_profile_by_revenue</strong> <p>This data set is deprecated.
     * Download related reports from AMMP instead!</p> </li> <li>
     * <strong>customer_profile_by_geography</strong> <p>This data set is deprecated.
     * Download related reports from AMMP instead!</p> </li> </ul> </p>
     */
    inline GenerateDataSetRequest& WithDataSetType(const DataSetType& value) { SetDataSetType(value); return *this;}

    /**
     * <p>The desired data set type.</p> <p> <ul> <li>
     * <strong>customer_subscriber_hourly_monthly_subscriptions</strong> <p>From
     * 2017-09-15 to present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>customer_subscriber_annual_subscriptions</strong> <p>From 2017-09-15 to
     * present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_usage_by_instance_type</strong> <p>From 2017-09-15 to
     * present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_fees</strong> <p>From 2017-09-15 to present: Available
     * daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_free_trial_conversions</strong> <p>From 2017-09-15 to
     * present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_new_instances</strong> <p>From 2017-09-15 to present:
     * Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_new_product_subscribers</strong> <p>From 2017-09-15 to
     * present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>daily_business_canceled_product_subscribers</strong> <p>From 2017-09-15
     * to present: Available daily by 24:00 UTC.</p> </li> <li>
     * <strong>monthly_revenue_billing_and_revenue_data</strong> <p>From 2017-09-15 to
     * present: Available monthly on the 15th day of the month by 24:00 UTC. Data
     * includes metered transactions (e.g. hourly) from one month prior.</p> </li> <li>
     * <strong>monthly_revenue_annual_subscriptions</strong> <p>From 2017-09-15 to
     * present: Available monthly on the 15th day of the month by 24:00 UTC. Data
     * includes up-front software charges (e.g. annual) from one month prior.</p> </li>
     * <li> <strong>monthly_revenue_field_demonstration_usage</strong> <p>From
     * 2018-03-15 to present: Available monthly on the 15th day of the month by 24:00
     * UTC.</p> </li> <li> <strong>monthly_revenue_flexible_payment_schedule</strong>
     * <p>From 2018-11-15 to present: Available monthly on the 15th day of the month by
     * 24:00 UTC.</p> </li> <li> <strong>disbursed_amount_by_product</strong> <p>From
     * 2017-09-15 to present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_instance_hours</strong> <p>From 2017-09-15 to
     * present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_customer_geo</strong> <p>From 2017-09-15 to present:
     * Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_age_of_uncollected_funds</strong> <p>From 2017-09-15
     * to present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_age_of_disbursed_funds</strong> <p>From 2017-09-15
     * to present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_age_of_past_due_funds</strong> <p>From 2018-04-07 to
     * present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_uncollected_funds_breakdown</strong> <p>From
     * 2019-10-04 to present: Available every 30 days by 24:00 UTC.</p> </li> <li>
     * <strong>sales_compensation_billed_revenue</strong> <p>From 2017-09-15 to
     * present: Available monthly on the 15th day of the month by 24:00 UTC. Data
     * includes metered transactions (e.g. hourly) from one month prior, and up-front
     * software charges (e.g. annual) from one month prior.</p> </li> <li>
     * <strong>us_sales_and_use_tax_records</strong> <p>From 2017-09-15 to present:
     * Available monthly on the 15th day of the month by 24:00 UTC.</p> </li> <li>
     * <strong>disbursed_amount_by_product_with_uncollected_funds</strong> <p>This data
     * set is deprecated. Download related reports from AMMP instead!</p> </li> <li>
     * <strong>customer_profile_by_industry</strong> <p>This data set is deprecated.
     * Download related reports from AMMP instead!</p> </li> <li>
     * <strong>customer_profile_by_revenue</strong> <p>This data set is deprecated.
     * Download related reports from AMMP instead!</p> </li> <li>
     * <strong>customer_profile_by_geography</strong> <p>This data set is deprecated.
     * Download related reports from AMMP instead!</p> </li> </ul> </p>
     */
    inline GenerateDataSetRequest& WithDataSetType(DataSetType&& value) { SetDataSetType(std::move(value)); return *this;}


    /**
     * The date a data set was published. For daily data sets, provide a date with
     * day-level granularity for the desired day. For monthly data sets except those
     * with prefix disbursed_amount, provide a date with month-level granularity for
     * the desired month (the day value will be ignored). For data sets with prefix
     * disbursed_amount, provide a date with day-level granularity for the desired day.
     * For these data sets we will look backwards in time over the range of 31 days
     * until the first data set is found (the latest one).
     */
    inline const Aws::Utils::DateTime& GetDataSetPublicationDate() const{ return m_dataSetPublicationDate; }

    /**
     * The date a data set was published. For daily data sets, provide a date with
     * day-level granularity for the desired day. For monthly data sets except those
     * with prefix disbursed_amount, provide a date with month-level granularity for
     * the desired month (the day value will be ignored). For data sets with prefix
     * disbursed_amount, provide a date with day-level granularity for the desired day.
     * For these data sets we will look backwards in time over the range of 31 days
     * until the first data set is found (the latest one).
     */
    inline bool DataSetPublicationDateHasBeenSet() const { return m_dataSetPublicationDateHasBeenSet; }

    /**
     * The date a data set was published. For daily data sets, provide a date with
     * day-level granularity for the desired day. For monthly data sets except those
     * with prefix disbursed_amount, provide a date with month-level granularity for
     * the desired month (the day value will be ignored). For data sets with prefix
     * disbursed_amount, provide a date with day-level granularity for the desired day.
     * For these data sets we will look backwards in time over the range of 31 days
     * until the first data set is found (the latest one).
     */
    inline void SetDataSetPublicationDate(const Aws::Utils::DateTime& value) { m_dataSetPublicationDateHasBeenSet = true; m_dataSetPublicationDate = value; }

    /**
     * The date a data set was published. For daily data sets, provide a date with
     * day-level granularity for the desired day. For monthly data sets except those
     * with prefix disbursed_amount, provide a date with month-level granularity for
     * the desired month (the day value will be ignored). For data sets with prefix
     * disbursed_amount, provide a date with day-level granularity for the desired day.
     * For these data sets we will look backwards in time over the range of 31 days
     * until the first data set is found (the latest one).
     */
    inline void SetDataSetPublicationDate(Aws::Utils::DateTime&& value) { m_dataSetPublicationDateHasBeenSet = true; m_dataSetPublicationDate = std::move(value); }

    /**
     * The date a data set was published. For daily data sets, provide a date with
     * day-level granularity for the desired day. For monthly data sets except those
     * with prefix disbursed_amount, provide a date with month-level granularity for
     * the desired month (the day value will be ignored). For data sets with prefix
     * disbursed_amount, provide a date with day-level granularity for the desired day.
     * For these data sets we will look backwards in time over the range of 31 days
     * until the first data set is found (the latest one).
     */
    inline GenerateDataSetRequest& WithDataSetPublicationDate(const Aws::Utils::DateTime& value) { SetDataSetPublicationDate(value); return *this;}

    /**
     * The date a data set was published. For daily data sets, provide a date with
     * day-level granularity for the desired day. For monthly data sets except those
     * with prefix disbursed_amount, provide a date with month-level granularity for
     * the desired month (the day value will be ignored). For data sets with prefix
     * disbursed_amount, provide a date with day-level granularity for the desired day.
     * For these data sets we will look backwards in time over the range of 31 days
     * until the first data set is found (the latest one).
     */
    inline GenerateDataSetRequest& WithDataSetPublicationDate(Aws::Utils::DateTime&& value) { SetDataSetPublicationDate(std::move(value)); return *this;}


    /**
     * The Amazon Resource Name (ARN) of the Role with an attached permissions policy
     * to interact with the provided AWS services.
     */
    inline const Aws::String& GetRoleNameArn() const{ return m_roleNameArn; }

    /**
     * The Amazon Resource Name (ARN) of the Role with an attached permissions policy
     * to interact with the provided AWS services.
     */
    inline bool RoleNameArnHasBeenSet() const { return m_roleNameArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) of the Role with an attached permissions policy
     * to interact with the provided AWS services.
     */
    inline void SetRoleNameArn(const Aws::String& value) { m_roleNameArnHasBeenSet = true; m_roleNameArn = value; }

    /**
     * The Amazon Resource Name (ARN) of the Role with an attached permissions policy
     * to interact with the provided AWS services.
     */
    inline void SetRoleNameArn(Aws::String&& value) { m_roleNameArnHasBeenSet = true; m_roleNameArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the Role with an attached permissions policy
     * to interact with the provided AWS services.
     */
    inline void SetRoleNameArn(const char* value) { m_roleNameArnHasBeenSet = true; m_roleNameArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the Role with an attached permissions policy
     * to interact with the provided AWS services.
     */
    inline GenerateDataSetRequest& WithRoleNameArn(const Aws::String& value) { SetRoleNameArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the Role with an attached permissions policy
     * to interact with the provided AWS services.
     */
    inline GenerateDataSetRequest& WithRoleNameArn(Aws::String&& value) { SetRoleNameArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the Role with an attached permissions policy
     * to interact with the provided AWS services.
     */
    inline GenerateDataSetRequest& WithRoleNameArn(const char* value) { SetRoleNameArn(value); return *this;}


    /**
     * The name (friendly name, not ARN) of the destination S3 bucket.
     */
    inline const Aws::String& GetDestinationS3BucketName() const{ return m_destinationS3BucketName; }

    /**
     * The name (friendly name, not ARN) of the destination S3 bucket.
     */
    inline bool DestinationS3BucketNameHasBeenSet() const { return m_destinationS3BucketNameHasBeenSet; }

    /**
     * The name (friendly name, not ARN) of the destination S3 bucket.
     */
    inline void SetDestinationS3BucketName(const Aws::String& value) { m_destinationS3BucketNameHasBeenSet = true; m_destinationS3BucketName = value; }

    /**
     * The name (friendly name, not ARN) of the destination S3 bucket.
     */
    inline void SetDestinationS3BucketName(Aws::String&& value) { m_destinationS3BucketNameHasBeenSet = true; m_destinationS3BucketName = std::move(value); }

    /**
     * The name (friendly name, not ARN) of the destination S3 bucket.
     */
    inline void SetDestinationS3BucketName(const char* value) { m_destinationS3BucketNameHasBeenSet = true; m_destinationS3BucketName.assign(value); }

    /**
     * The name (friendly name, not ARN) of the destination S3 bucket.
     */
    inline GenerateDataSetRequest& WithDestinationS3BucketName(const Aws::String& value) { SetDestinationS3BucketName(value); return *this;}

    /**
     * The name (friendly name, not ARN) of the destination S3 bucket.
     */
    inline GenerateDataSetRequest& WithDestinationS3BucketName(Aws::String&& value) { SetDestinationS3BucketName(std::move(value)); return *this;}

    /**
     * The name (friendly name, not ARN) of the destination S3 bucket.
     */
    inline GenerateDataSetRequest& WithDestinationS3BucketName(const char* value) { SetDestinationS3BucketName(value); return *this;}


    /**
     * (Optional) The desired S3 prefix for the published data set, similar to a
     * directory path in standard file systems. For example, if given the bucket name
     * "mybucket" and the prefix "myprefix/mydatasets", the output file "outputfile"
     * would be published to "s3://mybucket/myprefix/mydatasets/outputfile". If the
     * prefix directory structure does not exist, it will be created. If no prefix is
     * provided, the data set will be published to the S3 bucket root.
     */
    inline const Aws::String& GetDestinationS3Prefix() const{ return m_destinationS3Prefix; }

    /**
     * (Optional) The desired S3 prefix for the published data set, similar to a
     * directory path in standard file systems. For example, if given the bucket name
     * "mybucket" and the prefix "myprefix/mydatasets", the output file "outputfile"
     * would be published to "s3://mybucket/myprefix/mydatasets/outputfile". If the
     * prefix directory structure does not exist, it will be created. If no prefix is
     * provided, the data set will be published to the S3 bucket root.
     */
    inline bool DestinationS3PrefixHasBeenSet() const { return m_destinationS3PrefixHasBeenSet; }

    /**
     * (Optional) The desired S3 prefix for the published data set, similar to a
     * directory path in standard file systems. For example, if given the bucket name
     * "mybucket" and the prefix "myprefix/mydatasets", the output file "outputfile"
     * would be published to "s3://mybucket/myprefix/mydatasets/outputfile". If the
     * prefix directory structure does not exist, it will be created. If no prefix is
     * provided, the data set will be published to the S3 bucket root.
     */
    inline void SetDestinationS3Prefix(const Aws::String& value) { m_destinationS3PrefixHasBeenSet = true; m_destinationS3Prefix = value; }

    /**
     * (Optional) The desired S3 prefix for the published data set, similar to a
     * directory path in standard file systems. For example, if given the bucket name
     * "mybucket" and the prefix "myprefix/mydatasets", the output file "outputfile"
     * would be published to "s3://mybucket/myprefix/mydatasets/outputfile". If the
     * prefix directory structure does not exist, it will be created. If no prefix is
     * provided, the data set will be published to the S3 bucket root.
     */
    inline void SetDestinationS3Prefix(Aws::String&& value) { m_destinationS3PrefixHasBeenSet = true; m_destinationS3Prefix = std::move(value); }

    /**
     * (Optional) The desired S3 prefix for the published data set, similar to a
     * directory path in standard file systems. For example, if given the bucket name
     * "mybucket" and the prefix "myprefix/mydatasets", the output file "outputfile"
     * would be published to "s3://mybucket/myprefix/mydatasets/outputfile". If the
     * prefix directory structure does not exist, it will be created. If no prefix is
     * provided, the data set will be published to the S3 bucket root.
     */
    inline void SetDestinationS3Prefix(const char* value) { m_destinationS3PrefixHasBeenSet = true; m_destinationS3Prefix.assign(value); }

    /**
     * (Optional) The desired S3 prefix for the published data set, similar to a
     * directory path in standard file systems. For example, if given the bucket name
     * "mybucket" and the prefix "myprefix/mydatasets", the output file "outputfile"
     * would be published to "s3://mybucket/myprefix/mydatasets/outputfile". If the
     * prefix directory structure does not exist, it will be created. If no prefix is
     * provided, the data set will be published to the S3 bucket root.
     */
    inline GenerateDataSetRequest& WithDestinationS3Prefix(const Aws::String& value) { SetDestinationS3Prefix(value); return *this;}

    /**
     * (Optional) The desired S3 prefix for the published data set, similar to a
     * directory path in standard file systems. For example, if given the bucket name
     * "mybucket" and the prefix "myprefix/mydatasets", the output file "outputfile"
     * would be published to "s3://mybucket/myprefix/mydatasets/outputfile". If the
     * prefix directory structure does not exist, it will be created. If no prefix is
     * provided, the data set will be published to the S3 bucket root.
     */
    inline GenerateDataSetRequest& WithDestinationS3Prefix(Aws::String&& value) { SetDestinationS3Prefix(std::move(value)); return *this;}

    /**
     * (Optional) The desired S3 prefix for the published data set, similar to a
     * directory path in standard file systems. For example, if given the bucket name
     * "mybucket" and the prefix "myprefix/mydatasets", the output file "outputfile"
     * would be published to "s3://mybucket/myprefix/mydatasets/outputfile". If the
     * prefix directory structure does not exist, it will be created. If no prefix is
     * provided, the data set will be published to the S3 bucket root.
     */
    inline GenerateDataSetRequest& WithDestinationS3Prefix(const char* value) { SetDestinationS3Prefix(value); return *this;}


    /**
     * Amazon Resource Name (ARN) for the SNS Topic that will be notified when the data
     * set has been published or if an error has occurred.
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }

    /**
     * Amazon Resource Name (ARN) for the SNS Topic that will be notified when the data
     * set has been published or if an error has occurred.
     */
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }

    /**
     * Amazon Resource Name (ARN) for the SNS Topic that will be notified when the data
     * set has been published or if an error has occurred.
     */
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }

    /**
     * Amazon Resource Name (ARN) for the SNS Topic that will be notified when the data
     * set has been published or if an error has occurred.
     */
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }

    /**
     * Amazon Resource Name (ARN) for the SNS Topic that will be notified when the data
     * set has been published or if an error has occurred.
     */
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }

    /**
     * Amazon Resource Name (ARN) for the SNS Topic that will be notified when the data
     * set has been published or if an error has occurred.
     */
    inline GenerateDataSetRequest& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}

    /**
     * Amazon Resource Name (ARN) for the SNS Topic that will be notified when the data
     * set has been published or if an error has occurred.
     */
    inline GenerateDataSetRequest& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}

    /**
     * Amazon Resource Name (ARN) for the SNS Topic that will be notified when the data
     * set has been published or if an error has occurred.
     */
    inline GenerateDataSetRequest& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}


    /**
     * (Optional) Key-value pairs which will be returned, unmodified, in the Amazon SNS
     * notification message and the data set metadata file. These key-value pairs can
     * be used to correlated responses with tracking information from other systems.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomerDefinedValues() const{ return m_customerDefinedValues; }

    /**
     * (Optional) Key-value pairs which will be returned, unmodified, in the Amazon SNS
     * notification message and the data set metadata file. These key-value pairs can
     * be used to correlated responses with tracking information from other systems.
     */
    inline bool CustomerDefinedValuesHasBeenSet() const { return m_customerDefinedValuesHasBeenSet; }

    /**
     * (Optional) Key-value pairs which will be returned, unmodified, in the Amazon SNS
     * notification message and the data set metadata file. These key-value pairs can
     * be used to correlated responses with tracking information from other systems.
     */
    inline void SetCustomerDefinedValues(const Aws::Map<Aws::String, Aws::String>& value) { m_customerDefinedValuesHasBeenSet = true; m_customerDefinedValues = value; }

    /**
     * (Optional) Key-value pairs which will be returned, unmodified, in the Amazon SNS
     * notification message and the data set metadata file. These key-value pairs can
     * be used to correlated responses with tracking information from other systems.
     */
    inline void SetCustomerDefinedValues(Aws::Map<Aws::String, Aws::String>&& value) { m_customerDefinedValuesHasBeenSet = true; m_customerDefinedValues = std::move(value); }

    /**
     * (Optional) Key-value pairs which will be returned, unmodified, in the Amazon SNS
     * notification message and the data set metadata file. These key-value pairs can
     * be used to correlated responses with tracking information from other systems.
     */
    inline GenerateDataSetRequest& WithCustomerDefinedValues(const Aws::Map<Aws::String, Aws::String>& value) { SetCustomerDefinedValues(value); return *this;}

    /**
     * (Optional) Key-value pairs which will be returned, unmodified, in the Amazon SNS
     * notification message and the data set metadata file. These key-value pairs can
     * be used to correlated responses with tracking information from other systems.
     */
    inline GenerateDataSetRequest& WithCustomerDefinedValues(Aws::Map<Aws::String, Aws::String>&& value) { SetCustomerDefinedValues(std::move(value)); return *this;}

    /**
     * (Optional) Key-value pairs which will be returned, unmodified, in the Amazon SNS
     * notification message and the data set metadata file. These key-value pairs can
     * be used to correlated responses with tracking information from other systems.
     */
    inline GenerateDataSetRequest& AddCustomerDefinedValues(const Aws::String& key, const Aws::String& value) { m_customerDefinedValuesHasBeenSet = true; m_customerDefinedValues.emplace(key, value); return *this; }

    /**
     * (Optional) Key-value pairs which will be returned, unmodified, in the Amazon SNS
     * notification message and the data set metadata file. These key-value pairs can
     * be used to correlated responses with tracking information from other systems.
     */
    inline GenerateDataSetRequest& AddCustomerDefinedValues(Aws::String&& key, const Aws::String& value) { m_customerDefinedValuesHasBeenSet = true; m_customerDefinedValues.emplace(std::move(key), value); return *this; }

    /**
     * (Optional) Key-value pairs which will be returned, unmodified, in the Amazon SNS
     * notification message and the data set metadata file. These key-value pairs can
     * be used to correlated responses with tracking information from other systems.
     */
    inline GenerateDataSetRequest& AddCustomerDefinedValues(const Aws::String& key, Aws::String&& value) { m_customerDefinedValuesHasBeenSet = true; m_customerDefinedValues.emplace(key, std::move(value)); return *this; }

    /**
     * (Optional) Key-value pairs which will be returned, unmodified, in the Amazon SNS
     * notification message and the data set metadata file. These key-value pairs can
     * be used to correlated responses with tracking information from other systems.
     */
    inline GenerateDataSetRequest& AddCustomerDefinedValues(Aws::String&& key, Aws::String&& value) { m_customerDefinedValuesHasBeenSet = true; m_customerDefinedValues.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * (Optional) Key-value pairs which will be returned, unmodified, in the Amazon SNS
     * notification message and the data set metadata file. These key-value pairs can
     * be used to correlated responses with tracking information from other systems.
     */
    inline GenerateDataSetRequest& AddCustomerDefinedValues(const char* key, Aws::String&& value) { m_customerDefinedValuesHasBeenSet = true; m_customerDefinedValues.emplace(key, std::move(value)); return *this; }

    /**
     * (Optional) Key-value pairs which will be returned, unmodified, in the Amazon SNS
     * notification message and the data set metadata file. These key-value pairs can
     * be used to correlated responses with tracking information from other systems.
     */
    inline GenerateDataSetRequest& AddCustomerDefinedValues(Aws::String&& key, const char* value) { m_customerDefinedValuesHasBeenSet = true; m_customerDefinedValues.emplace(std::move(key), value); return *this; }

    /**
     * (Optional) Key-value pairs which will be returned, unmodified, in the Amazon SNS
     * notification message and the data set metadata file. These key-value pairs can
     * be used to correlated responses with tracking information from other systems.
     */
    inline GenerateDataSetRequest& AddCustomerDefinedValues(const char* key, const char* value) { m_customerDefinedValuesHasBeenSet = true; m_customerDefinedValues.emplace(key, value); return *this; }

  private:

    DataSetType m_dataSetType;
    bool m_dataSetTypeHasBeenSet = false;

    Aws::Utils::DateTime m_dataSetPublicationDate;
    bool m_dataSetPublicationDateHasBeenSet = false;

    Aws::String m_roleNameArn;
    bool m_roleNameArnHasBeenSet = false;

    Aws::String m_destinationS3BucketName;
    bool m_destinationS3BucketNameHasBeenSet = false;

    Aws::String m_destinationS3Prefix;
    bool m_destinationS3PrefixHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customerDefinedValues;
    bool m_customerDefinedValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCommerceAnalytics
} // namespace Aws
