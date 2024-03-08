/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/model/AmiProductVisibilityString.h>
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
   * <p>Object that contains summarized information about an AMI
   * product.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/AmiProductSummary">AWS
   * API Reference</a></p>
   */
  class AmiProductSummary
  {
  public:
    AWS_MARKETPLACECATALOG_API AmiProductSummary();
    AWS_MARKETPLACECATALOG_API AmiProductSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API AmiProductSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The title of the AMI product.</p>
     */
    inline const Aws::String& GetProductTitle() const{ return m_productTitle; }

    /**
     * <p>The title of the AMI product.</p>
     */
    inline bool ProductTitleHasBeenSet() const { return m_productTitleHasBeenSet; }

    /**
     * <p>The title of the AMI product.</p>
     */
    inline void SetProductTitle(const Aws::String& value) { m_productTitleHasBeenSet = true; m_productTitle = value; }

    /**
     * <p>The title of the AMI product.</p>
     */
    inline void SetProductTitle(Aws::String&& value) { m_productTitleHasBeenSet = true; m_productTitle = std::move(value); }

    /**
     * <p>The title of the AMI product.</p>
     */
    inline void SetProductTitle(const char* value) { m_productTitleHasBeenSet = true; m_productTitle.assign(value); }

    /**
     * <p>The title of the AMI product.</p>
     */
    inline AmiProductSummary& WithProductTitle(const Aws::String& value) { SetProductTitle(value); return *this;}

    /**
     * <p>The title of the AMI product.</p>
     */
    inline AmiProductSummary& WithProductTitle(Aws::String&& value) { SetProductTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the AMI product.</p>
     */
    inline AmiProductSummary& WithProductTitle(const char* value) { SetProductTitle(value); return *this;}


    /**
     * <p>The lifecycle of the AMI product.</p>
     */
    inline const AmiProductVisibilityString& GetVisibility() const{ return m_visibility; }

    /**
     * <p>The lifecycle of the AMI product.</p>
     */
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }

    /**
     * <p>The lifecycle of the AMI product.</p>
     */
    inline void SetVisibility(const AmiProductVisibilityString& value) { m_visibilityHasBeenSet = true; m_visibility = value; }

    /**
     * <p>The lifecycle of the AMI product.</p>
     */
    inline void SetVisibility(AmiProductVisibilityString&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }

    /**
     * <p>The lifecycle of the AMI product.</p>
     */
    inline AmiProductSummary& WithVisibility(const AmiProductVisibilityString& value) { SetVisibility(value); return *this;}

    /**
     * <p>The lifecycle of the AMI product.</p>
     */
    inline AmiProductSummary& WithVisibility(AmiProductVisibilityString&& value) { SetVisibility(std::move(value)); return *this;}

  private:

    Aws::String m_productTitle;
    bool m_productTitleHasBeenSet = false;

    AmiProductVisibilityString m_visibility;
    bool m_visibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
