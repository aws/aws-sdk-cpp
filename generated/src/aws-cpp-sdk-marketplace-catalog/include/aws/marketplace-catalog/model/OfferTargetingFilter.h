/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/model/OfferTargetingString.h>
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
   * <p>Allows filtering on the <code>Targeting</code> of an offer.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/OfferTargetingFilter">AWS
   * API Reference</a></p>
   */
  class OfferTargetingFilter
  {
  public:
    AWS_MARKETPLACECATALOG_API OfferTargetingFilter();
    AWS_MARKETPLACECATALOG_API OfferTargetingFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API OfferTargetingFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Allows filtering on the <code>Targeting</code> of an offer with list
     * input.</p>
     */
    inline const Aws::Vector<OfferTargetingString>& GetValueList() const{ return m_valueList; }

    /**
     * <p>Allows filtering on the <code>Targeting</code> of an offer with list
     * input.</p>
     */
    inline bool ValueListHasBeenSet() const { return m_valueListHasBeenSet; }

    /**
     * <p>Allows filtering on the <code>Targeting</code> of an offer with list
     * input.</p>
     */
    inline void SetValueList(const Aws::Vector<OfferTargetingString>& value) { m_valueListHasBeenSet = true; m_valueList = value; }

    /**
     * <p>Allows filtering on the <code>Targeting</code> of an offer with list
     * input.</p>
     */
    inline void SetValueList(Aws::Vector<OfferTargetingString>&& value) { m_valueListHasBeenSet = true; m_valueList = std::move(value); }

    /**
     * <p>Allows filtering on the <code>Targeting</code> of an offer with list
     * input.</p>
     */
    inline OfferTargetingFilter& WithValueList(const Aws::Vector<OfferTargetingString>& value) { SetValueList(value); return *this;}

    /**
     * <p>Allows filtering on the <code>Targeting</code> of an offer with list
     * input.</p>
     */
    inline OfferTargetingFilter& WithValueList(Aws::Vector<OfferTargetingString>&& value) { SetValueList(std::move(value)); return *this;}

    /**
     * <p>Allows filtering on the <code>Targeting</code> of an offer with list
     * input.</p>
     */
    inline OfferTargetingFilter& AddValueList(const OfferTargetingString& value) { m_valueListHasBeenSet = true; m_valueList.push_back(value); return *this; }

    /**
     * <p>Allows filtering on the <code>Targeting</code> of an offer with list
     * input.</p>
     */
    inline OfferTargetingFilter& AddValueList(OfferTargetingString&& value) { m_valueListHasBeenSet = true; m_valueList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<OfferTargetingString> m_valueList;
    bool m_valueListHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
