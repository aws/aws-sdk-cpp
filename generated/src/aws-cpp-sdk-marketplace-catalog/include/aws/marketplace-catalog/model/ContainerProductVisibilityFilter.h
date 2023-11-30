/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/model/ContainerProductVisibilityString.h>
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
   * <p>Object that allows filtering on the visibility of the product in the AWS
   * Marketplace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ContainerProductVisibilityFilter">AWS
   * API Reference</a></p>
   */
  class ContainerProductVisibilityFilter
  {
  public:
    AWS_MARKETPLACECATALOG_API ContainerProductVisibilityFilter();
    AWS_MARKETPLACECATALOG_API ContainerProductVisibilityFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API ContainerProductVisibilityFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string array of unique visibility values to be filtered on.</p>
     */
    inline const Aws::Vector<ContainerProductVisibilityString>& GetValueList() const{ return m_valueList; }

    /**
     * <p>A string array of unique visibility values to be filtered on.</p>
     */
    inline bool ValueListHasBeenSet() const { return m_valueListHasBeenSet; }

    /**
     * <p>A string array of unique visibility values to be filtered on.</p>
     */
    inline void SetValueList(const Aws::Vector<ContainerProductVisibilityString>& value) { m_valueListHasBeenSet = true; m_valueList = value; }

    /**
     * <p>A string array of unique visibility values to be filtered on.</p>
     */
    inline void SetValueList(Aws::Vector<ContainerProductVisibilityString>&& value) { m_valueListHasBeenSet = true; m_valueList = std::move(value); }

    /**
     * <p>A string array of unique visibility values to be filtered on.</p>
     */
    inline ContainerProductVisibilityFilter& WithValueList(const Aws::Vector<ContainerProductVisibilityString>& value) { SetValueList(value); return *this;}

    /**
     * <p>A string array of unique visibility values to be filtered on.</p>
     */
    inline ContainerProductVisibilityFilter& WithValueList(Aws::Vector<ContainerProductVisibilityString>&& value) { SetValueList(std::move(value)); return *this;}

    /**
     * <p>A string array of unique visibility values to be filtered on.</p>
     */
    inline ContainerProductVisibilityFilter& AddValueList(const ContainerProductVisibilityString& value) { m_valueListHasBeenSet = true; m_valueList.push_back(value); return *this; }

    /**
     * <p>A string array of unique visibility values to be filtered on.</p>
     */
    inline ContainerProductVisibilityFilter& AddValueList(ContainerProductVisibilityString&& value) { m_valueListHasBeenSet = true; m_valueList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ContainerProductVisibilityString> m_valueList;
    bool m_valueListHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
