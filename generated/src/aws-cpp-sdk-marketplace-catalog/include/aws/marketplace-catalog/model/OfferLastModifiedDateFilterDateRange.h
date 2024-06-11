/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
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
namespace MarketplaceCatalog
{
namespace Model
{

  /**
   * <p>Allows filtering on the <code>LastModifiedDate</code> of an offer with date
   * range as input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/OfferLastModifiedDateFilterDateRange">AWS
   * API Reference</a></p>
   */
  class OfferLastModifiedDateFilterDateRange
  {
  public:
    AWS_MARKETPLACECATALOG_API OfferLastModifiedDateFilterDateRange();
    AWS_MARKETPLACECATALOG_API OfferLastModifiedDateFilterDateRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API OfferLastModifiedDateFilterDateRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Allows filtering on the <code>LastModifiedDate</code> of an offer after a
     * date.</p>
     */
    inline const Aws::String& GetAfterValue() const{ return m_afterValue; }
    inline bool AfterValueHasBeenSet() const { return m_afterValueHasBeenSet; }
    inline void SetAfterValue(const Aws::String& value) { m_afterValueHasBeenSet = true; m_afterValue = value; }
    inline void SetAfterValue(Aws::String&& value) { m_afterValueHasBeenSet = true; m_afterValue = std::move(value); }
    inline void SetAfterValue(const char* value) { m_afterValueHasBeenSet = true; m_afterValue.assign(value); }
    inline OfferLastModifiedDateFilterDateRange& WithAfterValue(const Aws::String& value) { SetAfterValue(value); return *this;}
    inline OfferLastModifiedDateFilterDateRange& WithAfterValue(Aws::String&& value) { SetAfterValue(std::move(value)); return *this;}
    inline OfferLastModifiedDateFilterDateRange& WithAfterValue(const char* value) { SetAfterValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>LastModifiedDate</code> of an offer before a
     * date.</p>
     */
    inline const Aws::String& GetBeforeValue() const{ return m_beforeValue; }
    inline bool BeforeValueHasBeenSet() const { return m_beforeValueHasBeenSet; }
    inline void SetBeforeValue(const Aws::String& value) { m_beforeValueHasBeenSet = true; m_beforeValue = value; }
    inline void SetBeforeValue(Aws::String&& value) { m_beforeValueHasBeenSet = true; m_beforeValue = std::move(value); }
    inline void SetBeforeValue(const char* value) { m_beforeValueHasBeenSet = true; m_beforeValue.assign(value); }
    inline OfferLastModifiedDateFilterDateRange& WithBeforeValue(const Aws::String& value) { SetBeforeValue(value); return *this;}
    inline OfferLastModifiedDateFilterDateRange& WithBeforeValue(Aws::String&& value) { SetBeforeValue(std::move(value)); return *this;}
    inline OfferLastModifiedDateFilterDateRange& WithBeforeValue(const char* value) { SetBeforeValue(value); return *this;}
    ///@}
  private:

    Aws::String m_afterValue;
    bool m_afterValueHasBeenSet = false;

    Aws::String m_beforeValue;
    bool m_beforeValueHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
