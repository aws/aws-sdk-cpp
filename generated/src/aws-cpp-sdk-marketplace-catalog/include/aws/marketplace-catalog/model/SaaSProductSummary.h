/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/model/SaaSProductVisibilityString.h>
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
namespace MarketplaceCatalog
{
namespace Model
{

  /**
   * <p>Object that contains summarized information about a SaaS
   * product.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/SaaSProductSummary">AWS
   * API Reference</a></p>
   */
  class SaaSProductSummary
  {
  public:
    AWS_MARKETPLACECATALOG_API SaaSProductSummary() = default;
    AWS_MARKETPLACECATALOG_API SaaSProductSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API SaaSProductSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title of the SaaS product.</p>
     */
    inline const Aws::String& GetProductTitle() const { return m_productTitle; }
    inline bool ProductTitleHasBeenSet() const { return m_productTitleHasBeenSet; }
    template<typename ProductTitleT = Aws::String>
    void SetProductTitle(ProductTitleT&& value) { m_productTitleHasBeenSet = true; m_productTitle = std::forward<ProductTitleT>(value); }
    template<typename ProductTitleT = Aws::String>
    SaaSProductSummary& WithProductTitle(ProductTitleT&& value) { SetProductTitle(std::forward<ProductTitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle of the SaaS product.</p>
     */
    inline SaaSProductVisibilityString GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(SaaSProductVisibilityString value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline SaaSProductSummary& WithVisibility(SaaSProductVisibilityString value) { SetVisibility(value); return *this;}
    ///@}
  private:

    Aws::String m_productTitle;
    bool m_productTitleHasBeenSet = false;

    SaaSProductVisibilityString m_visibility{SaaSProductVisibilityString::NOT_SET};
    bool m_visibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
