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
    AWS_MARKETPLACECATALOG_API SaaSProductSummary();
    AWS_MARKETPLACECATALOG_API SaaSProductSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API SaaSProductSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The title of the SaaS product.</p>
     */
    inline const Aws::String& GetProductTitle() const{ return m_productTitle; }

    /**
     * <p>The title of the SaaS product.</p>
     */
    inline bool ProductTitleHasBeenSet() const { return m_productTitleHasBeenSet; }

    /**
     * <p>The title of the SaaS product.</p>
     */
    inline void SetProductTitle(const Aws::String& value) { m_productTitleHasBeenSet = true; m_productTitle = value; }

    /**
     * <p>The title of the SaaS product.</p>
     */
    inline void SetProductTitle(Aws::String&& value) { m_productTitleHasBeenSet = true; m_productTitle = std::move(value); }

    /**
     * <p>The title of the SaaS product.</p>
     */
    inline void SetProductTitle(const char* value) { m_productTitleHasBeenSet = true; m_productTitle.assign(value); }

    /**
     * <p>The title of the SaaS product.</p>
     */
    inline SaaSProductSummary& WithProductTitle(const Aws::String& value) { SetProductTitle(value); return *this;}

    /**
     * <p>The title of the SaaS product.</p>
     */
    inline SaaSProductSummary& WithProductTitle(Aws::String&& value) { SetProductTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the SaaS product.</p>
     */
    inline SaaSProductSummary& WithProductTitle(const char* value) { SetProductTitle(value); return *this;}


    /**
     * <p>The lifecycle of the SaaS product.</p>
     */
    inline const SaaSProductVisibilityString& GetVisibility() const{ return m_visibility; }

    /**
     * <p>The lifecycle of the SaaS product.</p>
     */
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }

    /**
     * <p>The lifecycle of the SaaS product.</p>
     */
    inline void SetVisibility(const SaaSProductVisibilityString& value) { m_visibilityHasBeenSet = true; m_visibility = value; }

    /**
     * <p>The lifecycle of the SaaS product.</p>
     */
    inline void SetVisibility(SaaSProductVisibilityString&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }

    /**
     * <p>The lifecycle of the SaaS product.</p>
     */
    inline SaaSProductSummary& WithVisibility(const SaaSProductVisibilityString& value) { SetVisibility(value); return *this;}

    /**
     * <p>The lifecycle of the SaaS product.</p>
     */
    inline SaaSProductSummary& WithVisibility(SaaSProductVisibilityString&& value) { SetVisibility(std::move(value)); return *this;}

  private:

    Aws::String m_productTitle;
    bool m_productTitleHasBeenSet = false;

    SaaSProductVisibilityString m_visibility;
    bool m_visibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
