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
   * <p>Object that contains date range of the last modified date to be filtered on.
   * You can optionally provide a <code>BeforeValue</code> and/or
   * <code>AfterValue</code>. Both are inclusive.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ContainerProductLastModifiedDateFilterDateRange">AWS
   * API Reference</a></p>
   */
  class ContainerProductLastModifiedDateFilterDateRange
  {
  public:
    AWS_MARKETPLACECATALOG_API ContainerProductLastModifiedDateFilterDateRange() = default;
    AWS_MARKETPLACECATALOG_API ContainerProductLastModifiedDateFilterDateRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API ContainerProductLastModifiedDateFilterDateRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Date after which the container product was last modified.</p>
     */
    inline const Aws::String& GetAfterValue() const { return m_afterValue; }
    inline bool AfterValueHasBeenSet() const { return m_afterValueHasBeenSet; }
    template<typename AfterValueT = Aws::String>
    void SetAfterValue(AfterValueT&& value) { m_afterValueHasBeenSet = true; m_afterValue = std::forward<AfterValueT>(value); }
    template<typename AfterValueT = Aws::String>
    ContainerProductLastModifiedDateFilterDateRange& WithAfterValue(AfterValueT&& value) { SetAfterValue(std::forward<AfterValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date before which the container product was last modified.</p>
     */
    inline const Aws::String& GetBeforeValue() const { return m_beforeValue; }
    inline bool BeforeValueHasBeenSet() const { return m_beforeValueHasBeenSet; }
    template<typename BeforeValueT = Aws::String>
    void SetBeforeValue(BeforeValueT&& value) { m_beforeValueHasBeenSet = true; m_beforeValue = std::forward<BeforeValueT>(value); }
    template<typename BeforeValueT = Aws::String>
    ContainerProductLastModifiedDateFilterDateRange& WithBeforeValue(BeforeValueT&& value) { SetBeforeValue(std::forward<BeforeValueT>(value)); return *this;}
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
