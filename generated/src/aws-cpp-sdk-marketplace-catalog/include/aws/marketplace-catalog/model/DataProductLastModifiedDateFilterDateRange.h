﻿/**
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/DataProductLastModifiedDateFilterDateRange">AWS
   * API Reference</a></p>
   */
  class DataProductLastModifiedDateFilterDateRange
  {
  public:
    AWS_MARKETPLACECATALOG_API DataProductLastModifiedDateFilterDateRange();
    AWS_MARKETPLACECATALOG_API DataProductLastModifiedDateFilterDateRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API DataProductLastModifiedDateFilterDateRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Date after which the data product was last modified.</p>
     */
    inline const Aws::String& GetAfterValue() const{ return m_afterValue; }
    inline bool AfterValueHasBeenSet() const { return m_afterValueHasBeenSet; }
    inline void SetAfterValue(const Aws::String& value) { m_afterValueHasBeenSet = true; m_afterValue = value; }
    inline void SetAfterValue(Aws::String&& value) { m_afterValueHasBeenSet = true; m_afterValue = std::move(value); }
    inline void SetAfterValue(const char* value) { m_afterValueHasBeenSet = true; m_afterValue.assign(value); }
    inline DataProductLastModifiedDateFilterDateRange& WithAfterValue(const Aws::String& value) { SetAfterValue(value); return *this;}
    inline DataProductLastModifiedDateFilterDateRange& WithAfterValue(Aws::String&& value) { SetAfterValue(std::move(value)); return *this;}
    inline DataProductLastModifiedDateFilterDateRange& WithAfterValue(const char* value) { SetAfterValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date before which the data product was last modified.</p>
     */
    inline const Aws::String& GetBeforeValue() const{ return m_beforeValue; }
    inline bool BeforeValueHasBeenSet() const { return m_beforeValueHasBeenSet; }
    inline void SetBeforeValue(const Aws::String& value) { m_beforeValueHasBeenSet = true; m_beforeValue = value; }
    inline void SetBeforeValue(Aws::String&& value) { m_beforeValueHasBeenSet = true; m_beforeValue = std::move(value); }
    inline void SetBeforeValue(const char* value) { m_beforeValueHasBeenSet = true; m_beforeValue.assign(value); }
    inline DataProductLastModifiedDateFilterDateRange& WithBeforeValue(const Aws::String& value) { SetBeforeValue(value); return *this;}
    inline DataProductLastModifiedDateFilterDateRange& WithBeforeValue(Aws::String&& value) { SetBeforeValue(std::move(value)); return *this;}
    inline DataProductLastModifiedDateFilterDateRange& WithBeforeValue(const char* value) { SetBeforeValue(value); return *this;}
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
