/**
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
   * <p>Allows filtering on the <code>OfferExtendedStatus</code> of a
   * ResaleAuthorization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ResaleAuthorizationOfferExtendedStatusFilter">AWS
   * API Reference</a></p>
   */
  class ResaleAuthorizationOfferExtendedStatusFilter
  {
  public:
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationOfferExtendedStatusFilter();
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationOfferExtendedStatusFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationOfferExtendedStatusFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Allows filtering on the <code>OfferExtendedStatus</code> of a
     * ResaleAuthorization with list input.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValueList() const{ return m_valueList; }

    /**
     * <p>Allows filtering on the <code>OfferExtendedStatus</code> of a
     * ResaleAuthorization with list input.</p>
     */
    inline bool ValueListHasBeenSet() const { return m_valueListHasBeenSet; }

    /**
     * <p>Allows filtering on the <code>OfferExtendedStatus</code> of a
     * ResaleAuthorization with list input.</p>
     */
    inline void SetValueList(const Aws::Vector<Aws::String>& value) { m_valueListHasBeenSet = true; m_valueList = value; }

    /**
     * <p>Allows filtering on the <code>OfferExtendedStatus</code> of a
     * ResaleAuthorization with list input.</p>
     */
    inline void SetValueList(Aws::Vector<Aws::String>&& value) { m_valueListHasBeenSet = true; m_valueList = std::move(value); }

    /**
     * <p>Allows filtering on the <code>OfferExtendedStatus</code> of a
     * ResaleAuthorization with list input.</p>
     */
    inline ResaleAuthorizationOfferExtendedStatusFilter& WithValueList(const Aws::Vector<Aws::String>& value) { SetValueList(value); return *this;}

    /**
     * <p>Allows filtering on the <code>OfferExtendedStatus</code> of a
     * ResaleAuthorization with list input.</p>
     */
    inline ResaleAuthorizationOfferExtendedStatusFilter& WithValueList(Aws::Vector<Aws::String>&& value) { SetValueList(std::move(value)); return *this;}

    /**
     * <p>Allows filtering on the <code>OfferExtendedStatus</code> of a
     * ResaleAuthorization with list input.</p>
     */
    inline ResaleAuthorizationOfferExtendedStatusFilter& AddValueList(const Aws::String& value) { m_valueListHasBeenSet = true; m_valueList.push_back(value); return *this; }

    /**
     * <p>Allows filtering on the <code>OfferExtendedStatus</code> of a
     * ResaleAuthorization with list input.</p>
     */
    inline ResaleAuthorizationOfferExtendedStatusFilter& AddValueList(Aws::String&& value) { m_valueListHasBeenSet = true; m_valueList.push_back(std::move(value)); return *this; }

    /**
     * <p>Allows filtering on the <code>OfferExtendedStatus</code> of a
     * ResaleAuthorization with list input.</p>
     */
    inline ResaleAuthorizationOfferExtendedStatusFilter& AddValueList(const char* value) { m_valueListHasBeenSet = true; m_valueList.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_valueList;
    bool m_valueListHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
