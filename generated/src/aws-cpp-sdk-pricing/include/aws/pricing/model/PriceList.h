/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pricing/Pricing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Pricing
{
namespace Model
{

  /**
   * <p> <i> <b>This feature is in preview release and is subject to change. Your use
   * of Amazon Web Services Price List API is subject to the Beta Service
   * Participation terms of the <a
   * href="https://aws.amazon.com/service-terms/">Amazon Web Services Service
   * Terms</a> (Section 1.10).</b> </i> </p> <p>This is the type of price list
   * references that match your request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-2017-10-15/PriceList">AWS
   * API Reference</a></p>
   */
  class PriceList
  {
  public:
    AWS_PRICING_API PriceList();
    AWS_PRICING_API PriceList(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRICING_API PriceList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRICING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier that maps to where your Price List files are located.
     * <code>PriceListArn</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">
     * <code>ListPriceList</code> </a> response. </p>
     */
    inline const Aws::String& GetPriceListArn() const{ return m_priceListArn; }

    /**
     * <p>The unique identifier that maps to where your Price List files are located.
     * <code>PriceListArn</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">
     * <code>ListPriceList</code> </a> response. </p>
     */
    inline bool PriceListArnHasBeenSet() const { return m_priceListArnHasBeenSet; }

    /**
     * <p>The unique identifier that maps to where your Price List files are located.
     * <code>PriceListArn</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">
     * <code>ListPriceList</code> </a> response. </p>
     */
    inline void SetPriceListArn(const Aws::String& value) { m_priceListArnHasBeenSet = true; m_priceListArn = value; }

    /**
     * <p>The unique identifier that maps to where your Price List files are located.
     * <code>PriceListArn</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">
     * <code>ListPriceList</code> </a> response. </p>
     */
    inline void SetPriceListArn(Aws::String&& value) { m_priceListArnHasBeenSet = true; m_priceListArn = std::move(value); }

    /**
     * <p>The unique identifier that maps to where your Price List files are located.
     * <code>PriceListArn</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">
     * <code>ListPriceList</code> </a> response. </p>
     */
    inline void SetPriceListArn(const char* value) { m_priceListArnHasBeenSet = true; m_priceListArn.assign(value); }

    /**
     * <p>The unique identifier that maps to where your Price List files are located.
     * <code>PriceListArn</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">
     * <code>ListPriceList</code> </a> response. </p>
     */
    inline PriceList& WithPriceListArn(const Aws::String& value) { SetPriceListArn(value); return *this;}

    /**
     * <p>The unique identifier that maps to where your Price List files are located.
     * <code>PriceListArn</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">
     * <code>ListPriceList</code> </a> response. </p>
     */
    inline PriceList& WithPriceListArn(Aws::String&& value) { SetPriceListArn(std::move(value)); return *this;}

    /**
     * <p>The unique identifier that maps to where your Price List files are located.
     * <code>PriceListArn</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">
     * <code>ListPriceList</code> </a> response. </p>
     */
    inline PriceList& WithPriceListArn(const char* value) { SetPriceListArn(value); return *this;}


    /**
     * <p>This is used to filter the Price List by Amazon Web Services Region. For
     * example, to get the price list only for the <code>US East (N. Virginia)</code>
     * Region, use <code>us-east-1</code>. If nothing is specified, you retrieve price
     * lists for all applicable Regions. The available <code>RegionCode</code> list can
     * be retrieved from <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_GetAttributeValues.html">
     * <code>GetAttributeValues</code> </a> API. </p>
     */
    inline const Aws::String& GetRegionCode() const{ return m_regionCode; }

    /**
     * <p>This is used to filter the Price List by Amazon Web Services Region. For
     * example, to get the price list only for the <code>US East (N. Virginia)</code>
     * Region, use <code>us-east-1</code>. If nothing is specified, you retrieve price
     * lists for all applicable Regions. The available <code>RegionCode</code> list can
     * be retrieved from <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_GetAttributeValues.html">
     * <code>GetAttributeValues</code> </a> API. </p>
     */
    inline bool RegionCodeHasBeenSet() const { return m_regionCodeHasBeenSet; }

    /**
     * <p>This is used to filter the Price List by Amazon Web Services Region. For
     * example, to get the price list only for the <code>US East (N. Virginia)</code>
     * Region, use <code>us-east-1</code>. If nothing is specified, you retrieve price
     * lists for all applicable Regions. The available <code>RegionCode</code> list can
     * be retrieved from <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_GetAttributeValues.html">
     * <code>GetAttributeValues</code> </a> API. </p>
     */
    inline void SetRegionCode(const Aws::String& value) { m_regionCodeHasBeenSet = true; m_regionCode = value; }

    /**
     * <p>This is used to filter the Price List by Amazon Web Services Region. For
     * example, to get the price list only for the <code>US East (N. Virginia)</code>
     * Region, use <code>us-east-1</code>. If nothing is specified, you retrieve price
     * lists for all applicable Regions. The available <code>RegionCode</code> list can
     * be retrieved from <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_GetAttributeValues.html">
     * <code>GetAttributeValues</code> </a> API. </p>
     */
    inline void SetRegionCode(Aws::String&& value) { m_regionCodeHasBeenSet = true; m_regionCode = std::move(value); }

    /**
     * <p>This is used to filter the Price List by Amazon Web Services Region. For
     * example, to get the price list only for the <code>US East (N. Virginia)</code>
     * Region, use <code>us-east-1</code>. If nothing is specified, you retrieve price
     * lists for all applicable Regions. The available <code>RegionCode</code> list can
     * be retrieved from <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_GetAttributeValues.html">
     * <code>GetAttributeValues</code> </a> API. </p>
     */
    inline void SetRegionCode(const char* value) { m_regionCodeHasBeenSet = true; m_regionCode.assign(value); }

    /**
     * <p>This is used to filter the Price List by Amazon Web Services Region. For
     * example, to get the price list only for the <code>US East (N. Virginia)</code>
     * Region, use <code>us-east-1</code>. If nothing is specified, you retrieve price
     * lists for all applicable Regions. The available <code>RegionCode</code> list can
     * be retrieved from <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_GetAttributeValues.html">
     * <code>GetAttributeValues</code> </a> API. </p>
     */
    inline PriceList& WithRegionCode(const Aws::String& value) { SetRegionCode(value); return *this;}

    /**
     * <p>This is used to filter the Price List by Amazon Web Services Region. For
     * example, to get the price list only for the <code>US East (N. Virginia)</code>
     * Region, use <code>us-east-1</code>. If nothing is specified, you retrieve price
     * lists for all applicable Regions. The available <code>RegionCode</code> list can
     * be retrieved from <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_GetAttributeValues.html">
     * <code>GetAttributeValues</code> </a> API. </p>
     */
    inline PriceList& WithRegionCode(Aws::String&& value) { SetRegionCode(std::move(value)); return *this;}

    /**
     * <p>This is used to filter the Price List by Amazon Web Services Region. For
     * example, to get the price list only for the <code>US East (N. Virginia)</code>
     * Region, use <code>us-east-1</code>. If nothing is specified, you retrieve price
     * lists for all applicable Regions. The available <code>RegionCode</code> list can
     * be retrieved from <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_GetAttributeValues.html">
     * <code>GetAttributeValues</code> </a> API. </p>
     */
    inline PriceList& WithRegionCode(const char* value) { SetRegionCode(value); return *this;}


    /**
     * <p>The three alphabetical character ISO-4217 currency code the Price List files
     * are denominated in. </p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * <p>The three alphabetical character ISO-4217 currency code the Price List files
     * are denominated in. </p>
     */
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }

    /**
     * <p>The three alphabetical character ISO-4217 currency code the Price List files
     * are denominated in. </p>
     */
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }

    /**
     * <p>The three alphabetical character ISO-4217 currency code the Price List files
     * are denominated in. </p>
     */
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }

    /**
     * <p>The three alphabetical character ISO-4217 currency code the Price List files
     * are denominated in. </p>
     */
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }

    /**
     * <p>The three alphabetical character ISO-4217 currency code the Price List files
     * are denominated in. </p>
     */
    inline PriceList& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>The three alphabetical character ISO-4217 currency code the Price List files
     * are denominated in. </p>
     */
    inline PriceList& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}

    /**
     * <p>The three alphabetical character ISO-4217 currency code the Price List files
     * are denominated in. </p>
     */
    inline PriceList& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}


    /**
     * <p>The format you want to retrieve your Price List files. The
     * <code>FileFormat</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">
     * <code>ListPriceList</code> </a> response. </p>
     */
    inline const Aws::Vector<Aws::String>& GetFileFormats() const{ return m_fileFormats; }

    /**
     * <p>The format you want to retrieve your Price List files. The
     * <code>FileFormat</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">
     * <code>ListPriceList</code> </a> response. </p>
     */
    inline bool FileFormatsHasBeenSet() const { return m_fileFormatsHasBeenSet; }

    /**
     * <p>The format you want to retrieve your Price List files. The
     * <code>FileFormat</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">
     * <code>ListPriceList</code> </a> response. </p>
     */
    inline void SetFileFormats(const Aws::Vector<Aws::String>& value) { m_fileFormatsHasBeenSet = true; m_fileFormats = value; }

    /**
     * <p>The format you want to retrieve your Price List files. The
     * <code>FileFormat</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">
     * <code>ListPriceList</code> </a> response. </p>
     */
    inline void SetFileFormats(Aws::Vector<Aws::String>&& value) { m_fileFormatsHasBeenSet = true; m_fileFormats = std::move(value); }

    /**
     * <p>The format you want to retrieve your Price List files. The
     * <code>FileFormat</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">
     * <code>ListPriceList</code> </a> response. </p>
     */
    inline PriceList& WithFileFormats(const Aws::Vector<Aws::String>& value) { SetFileFormats(value); return *this;}

    /**
     * <p>The format you want to retrieve your Price List files. The
     * <code>FileFormat</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">
     * <code>ListPriceList</code> </a> response. </p>
     */
    inline PriceList& WithFileFormats(Aws::Vector<Aws::String>&& value) { SetFileFormats(std::move(value)); return *this;}

    /**
     * <p>The format you want to retrieve your Price List files. The
     * <code>FileFormat</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">
     * <code>ListPriceList</code> </a> response. </p>
     */
    inline PriceList& AddFileFormats(const Aws::String& value) { m_fileFormatsHasBeenSet = true; m_fileFormats.push_back(value); return *this; }

    /**
     * <p>The format you want to retrieve your Price List files. The
     * <code>FileFormat</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">
     * <code>ListPriceList</code> </a> response. </p>
     */
    inline PriceList& AddFileFormats(Aws::String&& value) { m_fileFormatsHasBeenSet = true; m_fileFormats.push_back(std::move(value)); return *this; }

    /**
     * <p>The format you want to retrieve your Price List files. The
     * <code>FileFormat</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">
     * <code>ListPriceList</code> </a> response. </p>
     */
    inline PriceList& AddFileFormats(const char* value) { m_fileFormatsHasBeenSet = true; m_fileFormats.push_back(value); return *this; }

  private:

    Aws::String m_priceListArn;
    bool m_priceListArnHasBeenSet = false;

    Aws::String m_regionCode;
    bool m_regionCodeHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    Aws::Vector<Aws::String> m_fileFormats;
    bool m_fileFormatsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pricing
} // namespace Aws
