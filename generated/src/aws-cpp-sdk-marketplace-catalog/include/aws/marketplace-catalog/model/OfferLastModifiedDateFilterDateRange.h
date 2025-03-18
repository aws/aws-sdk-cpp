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
    AWS_MARKETPLACECATALOG_API OfferLastModifiedDateFilterDateRange() = default;
    AWS_MARKETPLACECATALOG_API OfferLastModifiedDateFilterDateRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API OfferLastModifiedDateFilterDateRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Allows filtering on the <code>LastModifiedDate</code> of an offer after a
     * date.</p>
     */
    inline const Aws::String& GetAfterValue() const { return m_afterValue; }
    inline bool AfterValueHasBeenSet() const { return m_afterValueHasBeenSet; }
    template<typename AfterValueT = Aws::String>
    void SetAfterValue(AfterValueT&& value) { m_afterValueHasBeenSet = true; m_afterValue = std::forward<AfterValueT>(value); }
    template<typename AfterValueT = Aws::String>
    OfferLastModifiedDateFilterDateRange& WithAfterValue(AfterValueT&& value) { SetAfterValue(std::forward<AfterValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>LastModifiedDate</code> of an offer before a
     * date.</p>
     */
    inline const Aws::String& GetBeforeValue() const { return m_beforeValue; }
    inline bool BeforeValueHasBeenSet() const { return m_beforeValueHasBeenSet; }
    template<typename BeforeValueT = Aws::String>
    void SetBeforeValue(BeforeValueT&& value) { m_beforeValueHasBeenSet = true; m_beforeValue = std::forward<BeforeValueT>(value); }
    template<typename BeforeValueT = Aws::String>
    OfferLastModifiedDateFilterDateRange& WithBeforeValue(BeforeValueT&& value) { SetBeforeValue(std::forward<BeforeValueT>(value)); return *this;}
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
