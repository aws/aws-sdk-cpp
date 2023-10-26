/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pricing/Pricing_EXPORTS.h>
#include <aws/pricing/PricingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Pricing
{
namespace Model
{

  /**
   */
  class ListPriceListsRequest : public PricingRequest
  {
  public:
    AWS_PRICING_API ListPriceListsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPriceLists"; }

    AWS_PRICING_API Aws::String SerializePayload() const override;

    AWS_PRICING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The service code or the Savings Plan service code for the attributes that you
     * want to retrieve. For example, to get the list of applicable Amazon EC2 price
     * lists, use <code>AmazonEC2</code>. For a full list of service codes containing
     * On-Demand and Reserved Instance (RI) pricing, use the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_DescribeServices.html#awscostmanagement-pricing_DescribeServices-request-FormatVersion">DescribeServices</a>
     * API.</p> <p>To retrieve the Reserved Instance and Compute Savings Plan price
     * lists, use <code>ComputeSavingsPlans</code>. </p> <p>To retrieve Machine
     * Learning Savings Plans price lists, use
     * <code>MachineLearningSavingsPlans</code>. </p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }

    /**
     * <p>The service code or the Savings Plan service code for the attributes that you
     * want to retrieve. For example, to get the list of applicable Amazon EC2 price
     * lists, use <code>AmazonEC2</code>. For a full list of service codes containing
     * On-Demand and Reserved Instance (RI) pricing, use the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_DescribeServices.html#awscostmanagement-pricing_DescribeServices-request-FormatVersion">DescribeServices</a>
     * API.</p> <p>To retrieve the Reserved Instance and Compute Savings Plan price
     * lists, use <code>ComputeSavingsPlans</code>. </p> <p>To retrieve Machine
     * Learning Savings Plans price lists, use
     * <code>MachineLearningSavingsPlans</code>. </p>
     */
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }

    /**
     * <p>The service code or the Savings Plan service code for the attributes that you
     * want to retrieve. For example, to get the list of applicable Amazon EC2 price
     * lists, use <code>AmazonEC2</code>. For a full list of service codes containing
     * On-Demand and Reserved Instance (RI) pricing, use the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_DescribeServices.html#awscostmanagement-pricing_DescribeServices-request-FormatVersion">DescribeServices</a>
     * API.</p> <p>To retrieve the Reserved Instance and Compute Savings Plan price
     * lists, use <code>ComputeSavingsPlans</code>. </p> <p>To retrieve Machine
     * Learning Savings Plans price lists, use
     * <code>MachineLearningSavingsPlans</code>. </p>
     */
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }

    /**
     * <p>The service code or the Savings Plan service code for the attributes that you
     * want to retrieve. For example, to get the list of applicable Amazon EC2 price
     * lists, use <code>AmazonEC2</code>. For a full list of service codes containing
     * On-Demand and Reserved Instance (RI) pricing, use the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_DescribeServices.html#awscostmanagement-pricing_DescribeServices-request-FormatVersion">DescribeServices</a>
     * API.</p> <p>To retrieve the Reserved Instance and Compute Savings Plan price
     * lists, use <code>ComputeSavingsPlans</code>. </p> <p>To retrieve Machine
     * Learning Savings Plans price lists, use
     * <code>MachineLearningSavingsPlans</code>. </p>
     */
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }

    /**
     * <p>The service code or the Savings Plan service code for the attributes that you
     * want to retrieve. For example, to get the list of applicable Amazon EC2 price
     * lists, use <code>AmazonEC2</code>. For a full list of service codes containing
     * On-Demand and Reserved Instance (RI) pricing, use the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_DescribeServices.html#awscostmanagement-pricing_DescribeServices-request-FormatVersion">DescribeServices</a>
     * API.</p> <p>To retrieve the Reserved Instance and Compute Savings Plan price
     * lists, use <code>ComputeSavingsPlans</code>. </p> <p>To retrieve Machine
     * Learning Savings Plans price lists, use
     * <code>MachineLearningSavingsPlans</code>. </p>
     */
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }

    /**
     * <p>The service code or the Savings Plan service code for the attributes that you
     * want to retrieve. For example, to get the list of applicable Amazon EC2 price
     * lists, use <code>AmazonEC2</code>. For a full list of service codes containing
     * On-Demand and Reserved Instance (RI) pricing, use the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_DescribeServices.html#awscostmanagement-pricing_DescribeServices-request-FormatVersion">DescribeServices</a>
     * API.</p> <p>To retrieve the Reserved Instance and Compute Savings Plan price
     * lists, use <code>ComputeSavingsPlans</code>. </p> <p>To retrieve Machine
     * Learning Savings Plans price lists, use
     * <code>MachineLearningSavingsPlans</code>. </p>
     */
    inline ListPriceListsRequest& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}

    /**
     * <p>The service code or the Savings Plan service code for the attributes that you
     * want to retrieve. For example, to get the list of applicable Amazon EC2 price
     * lists, use <code>AmazonEC2</code>. For a full list of service codes containing
     * On-Demand and Reserved Instance (RI) pricing, use the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_DescribeServices.html#awscostmanagement-pricing_DescribeServices-request-FormatVersion">DescribeServices</a>
     * API.</p> <p>To retrieve the Reserved Instance and Compute Savings Plan price
     * lists, use <code>ComputeSavingsPlans</code>. </p> <p>To retrieve Machine
     * Learning Savings Plans price lists, use
     * <code>MachineLearningSavingsPlans</code>. </p>
     */
    inline ListPriceListsRequest& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}

    /**
     * <p>The service code or the Savings Plan service code for the attributes that you
     * want to retrieve. For example, to get the list of applicable Amazon EC2 price
     * lists, use <code>AmazonEC2</code>. For a full list of service codes containing
     * On-Demand and Reserved Instance (RI) pricing, use the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_DescribeServices.html#awscostmanagement-pricing_DescribeServices-request-FormatVersion">DescribeServices</a>
     * API.</p> <p>To retrieve the Reserved Instance and Compute Savings Plan price
     * lists, use <code>ComputeSavingsPlans</code>. </p> <p>To retrieve Machine
     * Learning Savings Plans price lists, use
     * <code>MachineLearningSavingsPlans</code>. </p>
     */
    inline ListPriceListsRequest& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}


    /**
     * <p>The date that the Price List file prices are effective from. </p>
     */
    inline const Aws::Utils::DateTime& GetEffectiveDate() const{ return m_effectiveDate; }

    /**
     * <p>The date that the Price List file prices are effective from. </p>
     */
    inline bool EffectiveDateHasBeenSet() const { return m_effectiveDateHasBeenSet; }

    /**
     * <p>The date that the Price List file prices are effective from. </p>
     */
    inline void SetEffectiveDate(const Aws::Utils::DateTime& value) { m_effectiveDateHasBeenSet = true; m_effectiveDate = value; }

    /**
     * <p>The date that the Price List file prices are effective from. </p>
     */
    inline void SetEffectiveDate(Aws::Utils::DateTime&& value) { m_effectiveDateHasBeenSet = true; m_effectiveDate = std::move(value); }

    /**
     * <p>The date that the Price List file prices are effective from. </p>
     */
    inline ListPriceListsRequest& WithEffectiveDate(const Aws::Utils::DateTime& value) { SetEffectiveDate(value); return *this;}

    /**
     * <p>The date that the Price List file prices are effective from. </p>
     */
    inline ListPriceListsRequest& WithEffectiveDate(Aws::Utils::DateTime&& value) { SetEffectiveDate(std::move(value)); return *this;}


    /**
     * <p>This is used to filter the Price List by Amazon Web Services Region. For
     * example, to get the price list only for the <code>US East (N. Virginia)</code>
     * Region, use <code>us-east-1</code>. If nothing is specified, you retrieve price
     * lists for all applicable Regions. The available <code>RegionCode</code> list can
     * be retrieved from <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_GetAttributeValues.html">GetAttributeValues</a>
     * API.</p>
     */
    inline const Aws::String& GetRegionCode() const{ return m_regionCode; }

    /**
     * <p>This is used to filter the Price List by Amazon Web Services Region. For
     * example, to get the price list only for the <code>US East (N. Virginia)</code>
     * Region, use <code>us-east-1</code>. If nothing is specified, you retrieve price
     * lists for all applicable Regions. The available <code>RegionCode</code> list can
     * be retrieved from <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_GetAttributeValues.html">GetAttributeValues</a>
     * API.</p>
     */
    inline bool RegionCodeHasBeenSet() const { return m_regionCodeHasBeenSet; }

    /**
     * <p>This is used to filter the Price List by Amazon Web Services Region. For
     * example, to get the price list only for the <code>US East (N. Virginia)</code>
     * Region, use <code>us-east-1</code>. If nothing is specified, you retrieve price
     * lists for all applicable Regions. The available <code>RegionCode</code> list can
     * be retrieved from <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_GetAttributeValues.html">GetAttributeValues</a>
     * API.</p>
     */
    inline void SetRegionCode(const Aws::String& value) { m_regionCodeHasBeenSet = true; m_regionCode = value; }

    /**
     * <p>This is used to filter the Price List by Amazon Web Services Region. For
     * example, to get the price list only for the <code>US East (N. Virginia)</code>
     * Region, use <code>us-east-1</code>. If nothing is specified, you retrieve price
     * lists for all applicable Regions. The available <code>RegionCode</code> list can
     * be retrieved from <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_GetAttributeValues.html">GetAttributeValues</a>
     * API.</p>
     */
    inline void SetRegionCode(Aws::String&& value) { m_regionCodeHasBeenSet = true; m_regionCode = std::move(value); }

    /**
     * <p>This is used to filter the Price List by Amazon Web Services Region. For
     * example, to get the price list only for the <code>US East (N. Virginia)</code>
     * Region, use <code>us-east-1</code>. If nothing is specified, you retrieve price
     * lists for all applicable Regions. The available <code>RegionCode</code> list can
     * be retrieved from <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_GetAttributeValues.html">GetAttributeValues</a>
     * API.</p>
     */
    inline void SetRegionCode(const char* value) { m_regionCodeHasBeenSet = true; m_regionCode.assign(value); }

    /**
     * <p>This is used to filter the Price List by Amazon Web Services Region. For
     * example, to get the price list only for the <code>US East (N. Virginia)</code>
     * Region, use <code>us-east-1</code>. If nothing is specified, you retrieve price
     * lists for all applicable Regions. The available <code>RegionCode</code> list can
     * be retrieved from <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_GetAttributeValues.html">GetAttributeValues</a>
     * API.</p>
     */
    inline ListPriceListsRequest& WithRegionCode(const Aws::String& value) { SetRegionCode(value); return *this;}

    /**
     * <p>This is used to filter the Price List by Amazon Web Services Region. For
     * example, to get the price list only for the <code>US East (N. Virginia)</code>
     * Region, use <code>us-east-1</code>. If nothing is specified, you retrieve price
     * lists for all applicable Regions. The available <code>RegionCode</code> list can
     * be retrieved from <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_GetAttributeValues.html">GetAttributeValues</a>
     * API.</p>
     */
    inline ListPriceListsRequest& WithRegionCode(Aws::String&& value) { SetRegionCode(std::move(value)); return *this;}

    /**
     * <p>This is used to filter the Price List by Amazon Web Services Region. For
     * example, to get the price list only for the <code>US East (N. Virginia)</code>
     * Region, use <code>us-east-1</code>. If nothing is specified, you retrieve price
     * lists for all applicable Regions. The available <code>RegionCode</code> list can
     * be retrieved from <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_GetAttributeValues.html">GetAttributeValues</a>
     * API.</p>
     */
    inline ListPriceListsRequest& WithRegionCode(const char* value) { SetRegionCode(value); return *this;}


    /**
     * <p>The three alphabetical character ISO-4217 currency code that the Price List
     * files are denominated in. </p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * <p>The three alphabetical character ISO-4217 currency code that the Price List
     * files are denominated in. </p>
     */
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }

    /**
     * <p>The three alphabetical character ISO-4217 currency code that the Price List
     * files are denominated in. </p>
     */
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }

    /**
     * <p>The three alphabetical character ISO-4217 currency code that the Price List
     * files are denominated in. </p>
     */
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }

    /**
     * <p>The three alphabetical character ISO-4217 currency code that the Price List
     * files are denominated in. </p>
     */
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }

    /**
     * <p>The three alphabetical character ISO-4217 currency code that the Price List
     * files are denominated in. </p>
     */
    inline ListPriceListsRequest& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>The three alphabetical character ISO-4217 currency code that the Price List
     * files are denominated in. </p>
     */
    inline ListPriceListsRequest& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}

    /**
     * <p>The three alphabetical character ISO-4217 currency code that the Price List
     * files are denominated in. </p>
     */
    inline ListPriceListsRequest& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}


    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve. </p>
     */
    inline ListPriceListsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve. </p>
     */
    inline ListPriceListsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve. </p>
     */
    inline ListPriceListsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in the response. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in the response. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in the response. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in the response. </p>
     */
    inline ListPriceListsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;

    Aws::Utils::DateTime m_effectiveDate;
    bool m_effectiveDateHasBeenSet = false;

    Aws::String m_regionCode;
    bool m_regionCodeHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pricing
} // namespace Aws
