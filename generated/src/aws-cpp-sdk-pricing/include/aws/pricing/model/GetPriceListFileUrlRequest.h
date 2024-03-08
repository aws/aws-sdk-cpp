/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pricing/Pricing_EXPORTS.h>
#include <aws/pricing/PricingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Pricing
{
namespace Model
{

  /**
   */
  class GetPriceListFileUrlRequest : public PricingRequest
  {
  public:
    AWS_PRICING_API GetPriceListFileUrlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPriceListFileUrl"; }

    AWS_PRICING_API Aws::String SerializePayload() const override;

    AWS_PRICING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier that maps to where your Price List files are located.
     * <code>PriceListArn</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">ListPriceLists</a>
     * response. </p>
     */
    inline const Aws::String& GetPriceListArn() const{ return m_priceListArn; }

    /**
     * <p>The unique identifier that maps to where your Price List files are located.
     * <code>PriceListArn</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">ListPriceLists</a>
     * response. </p>
     */
    inline bool PriceListArnHasBeenSet() const { return m_priceListArnHasBeenSet; }

    /**
     * <p>The unique identifier that maps to where your Price List files are located.
     * <code>PriceListArn</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">ListPriceLists</a>
     * response. </p>
     */
    inline void SetPriceListArn(const Aws::String& value) { m_priceListArnHasBeenSet = true; m_priceListArn = value; }

    /**
     * <p>The unique identifier that maps to where your Price List files are located.
     * <code>PriceListArn</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">ListPriceLists</a>
     * response. </p>
     */
    inline void SetPriceListArn(Aws::String&& value) { m_priceListArnHasBeenSet = true; m_priceListArn = std::move(value); }

    /**
     * <p>The unique identifier that maps to where your Price List files are located.
     * <code>PriceListArn</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">ListPriceLists</a>
     * response. </p>
     */
    inline void SetPriceListArn(const char* value) { m_priceListArnHasBeenSet = true; m_priceListArn.assign(value); }

    /**
     * <p>The unique identifier that maps to where your Price List files are located.
     * <code>PriceListArn</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">ListPriceLists</a>
     * response. </p>
     */
    inline GetPriceListFileUrlRequest& WithPriceListArn(const Aws::String& value) { SetPriceListArn(value); return *this;}

    /**
     * <p>The unique identifier that maps to where your Price List files are located.
     * <code>PriceListArn</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">ListPriceLists</a>
     * response. </p>
     */
    inline GetPriceListFileUrlRequest& WithPriceListArn(Aws::String&& value) { SetPriceListArn(std::move(value)); return *this;}

    /**
     * <p>The unique identifier that maps to where your Price List files are located.
     * <code>PriceListArn</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">ListPriceLists</a>
     * response. </p>
     */
    inline GetPriceListFileUrlRequest& WithPriceListArn(const char* value) { SetPriceListArn(value); return *this;}


    /**
     * <p>The format that you want to retrieve your Price List files in. The
     * <code>FileFormat</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">ListPriceLists</a>
     * response. </p>
     */
    inline const Aws::String& GetFileFormat() const{ return m_fileFormat; }

    /**
     * <p>The format that you want to retrieve your Price List files in. The
     * <code>FileFormat</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">ListPriceLists</a>
     * response. </p>
     */
    inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }

    /**
     * <p>The format that you want to retrieve your Price List files in. The
     * <code>FileFormat</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">ListPriceLists</a>
     * response. </p>
     */
    inline void SetFileFormat(const Aws::String& value) { m_fileFormatHasBeenSet = true; m_fileFormat = value; }

    /**
     * <p>The format that you want to retrieve your Price List files in. The
     * <code>FileFormat</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">ListPriceLists</a>
     * response. </p>
     */
    inline void SetFileFormat(Aws::String&& value) { m_fileFormatHasBeenSet = true; m_fileFormat = std::move(value); }

    /**
     * <p>The format that you want to retrieve your Price List files in. The
     * <code>FileFormat</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">ListPriceLists</a>
     * response. </p>
     */
    inline void SetFileFormat(const char* value) { m_fileFormatHasBeenSet = true; m_fileFormat.assign(value); }

    /**
     * <p>The format that you want to retrieve your Price List files in. The
     * <code>FileFormat</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">ListPriceLists</a>
     * response. </p>
     */
    inline GetPriceListFileUrlRequest& WithFileFormat(const Aws::String& value) { SetFileFormat(value); return *this;}

    /**
     * <p>The format that you want to retrieve your Price List files in. The
     * <code>FileFormat</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">ListPriceLists</a>
     * response. </p>
     */
    inline GetPriceListFileUrlRequest& WithFileFormat(Aws::String&& value) { SetFileFormat(std::move(value)); return *this;}

    /**
     * <p>The format that you want to retrieve your Price List files in. The
     * <code>FileFormat</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">ListPriceLists</a>
     * response. </p>
     */
    inline GetPriceListFileUrlRequest& WithFileFormat(const char* value) { SetFileFormat(value); return *this;}

  private:

    Aws::String m_priceListArn;
    bool m_priceListArnHasBeenSet = false;

    Aws::String m_fileFormat;
    bool m_fileFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace Pricing
} // namespace Aws
