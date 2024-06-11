﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Allows filtering on the <code>ManufacturerLegalName</code> of a
   * ResaleAuthorization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ResaleAuthorizationManufacturerLegalNameFilter">AWS
   * API Reference</a></p>
   */
  class ResaleAuthorizationManufacturerLegalNameFilter
  {
  public:
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationManufacturerLegalNameFilter();
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationManufacturerLegalNameFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationManufacturerLegalNameFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Allows filtering on the <code>ManufacturerLegalName</code> of a
     * ResaleAuthorization with list input.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValueList() const{ return m_valueList; }
    inline bool ValueListHasBeenSet() const { return m_valueListHasBeenSet; }
    inline void SetValueList(const Aws::Vector<Aws::String>& value) { m_valueListHasBeenSet = true; m_valueList = value; }
    inline void SetValueList(Aws::Vector<Aws::String>&& value) { m_valueListHasBeenSet = true; m_valueList = std::move(value); }
    inline ResaleAuthorizationManufacturerLegalNameFilter& WithValueList(const Aws::Vector<Aws::String>& value) { SetValueList(value); return *this;}
    inline ResaleAuthorizationManufacturerLegalNameFilter& WithValueList(Aws::Vector<Aws::String>&& value) { SetValueList(std::move(value)); return *this;}
    inline ResaleAuthorizationManufacturerLegalNameFilter& AddValueList(const Aws::String& value) { m_valueListHasBeenSet = true; m_valueList.push_back(value); return *this; }
    inline ResaleAuthorizationManufacturerLegalNameFilter& AddValueList(Aws::String&& value) { m_valueListHasBeenSet = true; m_valueList.push_back(std::move(value)); return *this; }
    inline ResaleAuthorizationManufacturerLegalNameFilter& AddValueList(const char* value) { m_valueListHasBeenSet = true; m_valueList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>ManufacturerLegalName</code> of a
     * ResaleAuthorization with wild card input.</p>
     */
    inline const Aws::String& GetWildCardValue() const{ return m_wildCardValue; }
    inline bool WildCardValueHasBeenSet() const { return m_wildCardValueHasBeenSet; }
    inline void SetWildCardValue(const Aws::String& value) { m_wildCardValueHasBeenSet = true; m_wildCardValue = value; }
    inline void SetWildCardValue(Aws::String&& value) { m_wildCardValueHasBeenSet = true; m_wildCardValue = std::move(value); }
    inline void SetWildCardValue(const char* value) { m_wildCardValueHasBeenSet = true; m_wildCardValue.assign(value); }
    inline ResaleAuthorizationManufacturerLegalNameFilter& WithWildCardValue(const Aws::String& value) { SetWildCardValue(value); return *this;}
    inline ResaleAuthorizationManufacturerLegalNameFilter& WithWildCardValue(Aws::String&& value) { SetWildCardValue(std::move(value)); return *this;}
    inline ResaleAuthorizationManufacturerLegalNameFilter& WithWildCardValue(const char* value) { SetWildCardValue(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_valueList;
    bool m_valueListHasBeenSet = false;

    Aws::String m_wildCardValue;
    bool m_wildCardValueHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
