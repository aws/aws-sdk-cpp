/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/model/DataProductVisibilityString.h>
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
   * <p>Object that contains summarized information about a data
   * product.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/DataProductSummary">AWS
   * API Reference</a></p>
   */
  class DataProductSummary
  {
  public:
    AWS_MARKETPLACECATALOG_API DataProductSummary();
    AWS_MARKETPLACECATALOG_API DataProductSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API DataProductSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The title of the data product.</p>
     */
    inline const Aws::String& GetProductTitle() const{ return m_productTitle; }

    /**
     * <p>The title of the data product.</p>
     */
    inline bool ProductTitleHasBeenSet() const { return m_productTitleHasBeenSet; }

    /**
     * <p>The title of the data product.</p>
     */
    inline void SetProductTitle(const Aws::String& value) { m_productTitleHasBeenSet = true; m_productTitle = value; }

    /**
     * <p>The title of the data product.</p>
     */
    inline void SetProductTitle(Aws::String&& value) { m_productTitleHasBeenSet = true; m_productTitle = std::move(value); }

    /**
     * <p>The title of the data product.</p>
     */
    inline void SetProductTitle(const char* value) { m_productTitleHasBeenSet = true; m_productTitle.assign(value); }

    /**
     * <p>The title of the data product.</p>
     */
    inline DataProductSummary& WithProductTitle(const Aws::String& value) { SetProductTitle(value); return *this;}

    /**
     * <p>The title of the data product.</p>
     */
    inline DataProductSummary& WithProductTitle(Aws::String&& value) { SetProductTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the data product.</p>
     */
    inline DataProductSummary& WithProductTitle(const char* value) { SetProductTitle(value); return *this;}


    /**
     * <p>The lifecycle of the data product.</p>
     */
    inline const DataProductVisibilityString& GetVisibility() const{ return m_visibility; }

    /**
     * <p>The lifecycle of the data product.</p>
     */
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }

    /**
     * <p>The lifecycle of the data product.</p>
     */
    inline void SetVisibility(const DataProductVisibilityString& value) { m_visibilityHasBeenSet = true; m_visibility = value; }

    /**
     * <p>The lifecycle of the data product.</p>
     */
    inline void SetVisibility(DataProductVisibilityString&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }

    /**
     * <p>The lifecycle of the data product.</p>
     */
    inline DataProductSummary& WithVisibility(const DataProductVisibilityString& value) { SetVisibility(value); return *this;}

    /**
     * <p>The lifecycle of the data product.</p>
     */
    inline DataProductSummary& WithVisibility(DataProductVisibilityString&& value) { SetVisibility(std::move(value)); return *this;}

  private:

    Aws::String m_productTitle;
    bool m_productTitleHasBeenSet = false;

    DataProductVisibilityString m_visibility;
    bool m_visibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
