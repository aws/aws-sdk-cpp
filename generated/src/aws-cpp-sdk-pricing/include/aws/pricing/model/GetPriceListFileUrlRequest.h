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
    AWS_PRICING_API GetPriceListFileUrlRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPriceListFileUrl"; }

    AWS_PRICING_API Aws::String SerializePayload() const override;

    AWS_PRICING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier that maps to where your Price List files are located.
     * <code>PriceListArn</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">ListPriceLists</a>
     * response. </p>
     */
    inline const Aws::String& GetPriceListArn() const { return m_priceListArn; }
    inline bool PriceListArnHasBeenSet() const { return m_priceListArnHasBeenSet; }
    template<typename PriceListArnT = Aws::String>
    void SetPriceListArn(PriceListArnT&& value) { m_priceListArnHasBeenSet = true; m_priceListArn = std::forward<PriceListArnT>(value); }
    template<typename PriceListArnT = Aws::String>
    GetPriceListFileUrlRequest& WithPriceListArn(PriceListArnT&& value) { SetPriceListArn(std::forward<PriceListArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format that you want to retrieve your Price List files in. The
     * <code>FileFormat</code> can be obtained from the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">ListPriceLists</a>
     * response. </p>
     */
    inline const Aws::String& GetFileFormat() const { return m_fileFormat; }
    inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }
    template<typename FileFormatT = Aws::String>
    void SetFileFormat(FileFormatT&& value) { m_fileFormatHasBeenSet = true; m_fileFormat = std::forward<FileFormatT>(value); }
    template<typename FileFormatT = Aws::String>
    GetPriceListFileUrlRequest& WithFileFormat(FileFormatT&& value) { SetFileFormat(std::forward<FileFormatT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_priceListArn;
    bool m_priceListArnHasBeenSet = false;

    Aws::String m_fileFormat;
    bool m_fileFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace Pricing
} // namespace Aws
