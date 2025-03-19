/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Describes a work team of a vendor that does the labelling job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SubscribedWorkteam">AWS
   * API Reference</a></p>
   */
  class SubscribedWorkteam
  {
  public:
    AWS_SAGEMAKER_API SubscribedWorkteam() = default;
    AWS_SAGEMAKER_API SubscribedWorkteam(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SubscribedWorkteam& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the vendor that you have subscribed.</p>
     */
    inline const Aws::String& GetWorkteamArn() const { return m_workteamArn; }
    inline bool WorkteamArnHasBeenSet() const { return m_workteamArnHasBeenSet; }
    template<typename WorkteamArnT = Aws::String>
    void SetWorkteamArn(WorkteamArnT&& value) { m_workteamArnHasBeenSet = true; m_workteamArn = std::forward<WorkteamArnT>(value); }
    template<typename WorkteamArnT = Aws::String>
    SubscribedWorkteam& WithWorkteamArn(WorkteamArnT&& value) { SetWorkteamArn(std::forward<WorkteamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the service provided by the vendor in the Amazon
     * Marketplace.</p>
     */
    inline const Aws::String& GetMarketplaceTitle() const { return m_marketplaceTitle; }
    inline bool MarketplaceTitleHasBeenSet() const { return m_marketplaceTitleHasBeenSet; }
    template<typename MarketplaceTitleT = Aws::String>
    void SetMarketplaceTitle(MarketplaceTitleT&& value) { m_marketplaceTitleHasBeenSet = true; m_marketplaceTitle = std::forward<MarketplaceTitleT>(value); }
    template<typename MarketplaceTitleT = Aws::String>
    SubscribedWorkteam& WithMarketplaceTitle(MarketplaceTitleT&& value) { SetMarketplaceTitle(std::forward<MarketplaceTitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the vendor in the Amazon Marketplace.</p>
     */
    inline const Aws::String& GetSellerName() const { return m_sellerName; }
    inline bool SellerNameHasBeenSet() const { return m_sellerNameHasBeenSet; }
    template<typename SellerNameT = Aws::String>
    void SetSellerName(SellerNameT&& value) { m_sellerNameHasBeenSet = true; m_sellerName = std::forward<SellerNameT>(value); }
    template<typename SellerNameT = Aws::String>
    SubscribedWorkteam& WithSellerName(SellerNameT&& value) { SetSellerName(std::forward<SellerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the vendor from the Amazon Marketplace.</p>
     */
    inline const Aws::String& GetMarketplaceDescription() const { return m_marketplaceDescription; }
    inline bool MarketplaceDescriptionHasBeenSet() const { return m_marketplaceDescriptionHasBeenSet; }
    template<typename MarketplaceDescriptionT = Aws::String>
    void SetMarketplaceDescription(MarketplaceDescriptionT&& value) { m_marketplaceDescriptionHasBeenSet = true; m_marketplaceDescription = std::forward<MarketplaceDescriptionT>(value); }
    template<typename MarketplaceDescriptionT = Aws::String>
    SubscribedWorkteam& WithMarketplaceDescription(MarketplaceDescriptionT&& value) { SetMarketplaceDescription(std::forward<MarketplaceDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Marketplace product listing ID.</p>
     */
    inline const Aws::String& GetListingId() const { return m_listingId; }
    inline bool ListingIdHasBeenSet() const { return m_listingIdHasBeenSet; }
    template<typename ListingIdT = Aws::String>
    void SetListingId(ListingIdT&& value) { m_listingIdHasBeenSet = true; m_listingId = std::forward<ListingIdT>(value); }
    template<typename ListingIdT = Aws::String>
    SubscribedWorkteam& WithListingId(ListingIdT&& value) { SetListingId(std::forward<ListingIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workteamArn;
    bool m_workteamArnHasBeenSet = false;

    Aws::String m_marketplaceTitle;
    bool m_marketplaceTitleHasBeenSet = false;

    Aws::String m_sellerName;
    bool m_sellerNameHasBeenSet = false;

    Aws::String m_marketplaceDescription;
    bool m_marketplaceDescriptionHasBeenSet = false;

    Aws::String m_listingId;
    bool m_listingIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
