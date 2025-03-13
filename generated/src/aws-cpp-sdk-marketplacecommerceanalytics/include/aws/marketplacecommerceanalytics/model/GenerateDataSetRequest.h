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
    AWS_MARKETPLACECOMMERCEANALYTICS_API GenerateDataSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateDataSet"; }

    AWS_MARKETPLACECOMMERCEANALYTICS_API Aws::String SerializePayload() const override;

    AWS_MARKETPLACECOMMERCEANALYTICS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
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
    inline DataSetType GetDataSetType() const { return m_dataSetType; }
    inline bool DataSetTypeHasBeenSet() const { return m_dataSetTypeHasBeenSet; }
    inline void SetDataSetType(DataSetType value) { m_dataSetTypeHasBeenSet = true; m_dataSetType = value; }
    inline GenerateDataSetRequest& WithDataSetType(DataSetType value) { SetDataSetType(value); return *this;}
    ///@}

    ///@{
    /**
     * The date a data set was published. For daily data sets, provide a date with
     * day-level granularity for the desired day. For monthly data sets except those
     * with prefix disbursed_amount, provide a date with month-level granularity for
     * the desired month (the day value will be ignored). For data sets with prefix
     * disbursed_amount, provide a date with day-level granularity for the desired day.
     * For these data sets we will look backwards in time over the range of 31 days
     * until the first data set is found (the latest one).
     */
    inline const Aws::Utils::DateTime& GetDataSetPublicationDate() const { return m_dataSetPublicationDate; }
    inline bool DataSetPublicationDateHasBeenSet() const { return m_dataSetPublicationDateHasBeenSet; }
    template<typename DataSetPublicationDateT = Aws::Utils::DateTime>
    void SetDataSetPublicationDate(DataSetPublicationDateT&& value) { m_dataSetPublicationDateHasBeenSet = true; m_dataSetPublicationDate = std::forward<DataSetPublicationDateT>(value); }
    template<typename DataSetPublicationDateT = Aws::Utils::DateTime>
    GenerateDataSetRequest& WithDataSetPublicationDate(DataSetPublicationDateT&& value) { SetDataSetPublicationDate(std::forward<DataSetPublicationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The Amazon Resource Name (ARN) of the Role with an attached permissions policy
     * to interact with the provided AWS services.
     */
    inline const Aws::String& GetRoleNameArn() const { return m_roleNameArn; }
    inline bool RoleNameArnHasBeenSet() const { return m_roleNameArnHasBeenSet; }
    template<typename RoleNameArnT = Aws::String>
    void SetRoleNameArn(RoleNameArnT&& value) { m_roleNameArnHasBeenSet = true; m_roleNameArn = std::forward<RoleNameArnT>(value); }
    template<typename RoleNameArnT = Aws::String>
    GenerateDataSetRequest& WithRoleNameArn(RoleNameArnT&& value) { SetRoleNameArn(std::forward<RoleNameArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name (friendly name, not ARN) of the destination S3 bucket.
     */
    inline const Aws::String& GetDestinationS3BucketName() const { return m_destinationS3BucketName; }
    inline bool DestinationS3BucketNameHasBeenSet() const { return m_destinationS3BucketNameHasBeenSet; }
    template<typename DestinationS3BucketNameT = Aws::String>
    void SetDestinationS3BucketName(DestinationS3BucketNameT&& value) { m_destinationS3BucketNameHasBeenSet = true; m_destinationS3BucketName = std::forward<DestinationS3BucketNameT>(value); }
    template<typename DestinationS3BucketNameT = Aws::String>
    GenerateDataSetRequest& WithDestinationS3BucketName(DestinationS3BucketNameT&& value) { SetDestinationS3BucketName(std::forward<DestinationS3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * (Optional) The desired S3 prefix for the published data set, similar to a
     * directory path in standard file systems. For example, if given the bucket name
     * "mybucket" and the prefix "myprefix/mydatasets", the output file "outputfile"
     * would be published to "s3://mybucket/myprefix/mydatasets/outputfile". If the
     * prefix directory structure does not exist, it will be created. If no prefix is
     * provided, the data set will be published to the S3 bucket root.
     */
    inline const Aws::String& GetDestinationS3Prefix() const { return m_destinationS3Prefix; }
    inline bool DestinationS3PrefixHasBeenSet() const { return m_destinationS3PrefixHasBeenSet; }
    template<typename DestinationS3PrefixT = Aws::String>
    void SetDestinationS3Prefix(DestinationS3PrefixT&& value) { m_destinationS3PrefixHasBeenSet = true; m_destinationS3Prefix = std::forward<DestinationS3PrefixT>(value); }
    template<typename DestinationS3PrefixT = Aws::String>
    GenerateDataSetRequest& WithDestinationS3Prefix(DestinationS3PrefixT&& value) { SetDestinationS3Prefix(std::forward<DestinationS3PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Amazon Resource Name (ARN) for the SNS Topic that will be notified when the data
     * set has been published or if an error has occurred.
     */
    inline const Aws::String& GetSnsTopicArn() const { return m_snsTopicArn; }
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }
    template<typename SnsTopicArnT = Aws::String>
    void SetSnsTopicArn(SnsTopicArnT&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::forward<SnsTopicArnT>(value); }
    template<typename SnsTopicArnT = Aws::String>
    GenerateDataSetRequest& WithSnsTopicArn(SnsTopicArnT&& value) { SetSnsTopicArn(std::forward<SnsTopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * (Optional) Key-value pairs which will be returned, unmodified, in the Amazon SNS
     * notification message and the data set metadata file. These key-value pairs can
     * be used to correlated responses with tracking information from other systems.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomerDefinedValues() const { return m_customerDefinedValues; }
    inline bool CustomerDefinedValuesHasBeenSet() const { return m_customerDefinedValuesHasBeenSet; }
    template<typename CustomerDefinedValuesT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomerDefinedValues(CustomerDefinedValuesT&& value) { m_customerDefinedValuesHasBeenSet = true; m_customerDefinedValues = std::forward<CustomerDefinedValuesT>(value); }
    template<typename CustomerDefinedValuesT = Aws::Map<Aws::String, Aws::String>>
    GenerateDataSetRequest& WithCustomerDefinedValues(CustomerDefinedValuesT&& value) { SetCustomerDefinedValues(std::forward<CustomerDefinedValuesT>(value)); return *this;}
    template<typename CustomerDefinedValuesKeyT = Aws::String, typename CustomerDefinedValuesValueT = Aws::String>
    GenerateDataSetRequest& AddCustomerDefinedValues(CustomerDefinedValuesKeyT&& key, CustomerDefinedValuesValueT&& value) {
      m_customerDefinedValuesHasBeenSet = true; m_customerDefinedValues.emplace(std::forward<CustomerDefinedValuesKeyT>(key), std::forward<CustomerDefinedValuesValueT>(value)); return *this;
    }
    ///@}
  private:

    DataSetType m_dataSetType{DataSetType::NOT_SET};
    bool m_dataSetTypeHasBeenSet = false;

    Aws::Utils::DateTime m_dataSetPublicationDate{};
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
