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
   * <p>Object that allows filtering on entity id of an AMI product.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/AmiProductEntityIdFilter">AWS
   * API Reference</a></p>
   */
  class AmiProductEntityIdFilter
  {
  public:
    AWS_MARKETPLACECATALOG_API AmiProductEntityIdFilter();
    AWS_MARKETPLACECATALOG_API AmiProductEntityIdFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API AmiProductEntityIdFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string array of unique entity id values to be filtered on.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValueList() const{ return m_valueList; }

    /**
     * <p>A string array of unique entity id values to be filtered on.</p>
     */
    inline bool ValueListHasBeenSet() const { return m_valueListHasBeenSet; }

    /**
     * <p>A string array of unique entity id values to be filtered on.</p>
     */
    inline void SetValueList(const Aws::Vector<Aws::String>& value) { m_valueListHasBeenSet = true; m_valueList = value; }

    /**
     * <p>A string array of unique entity id values to be filtered on.</p>
     */
    inline void SetValueList(Aws::Vector<Aws::String>&& value) { m_valueListHasBeenSet = true; m_valueList = std::move(value); }

    /**
     * <p>A string array of unique entity id values to be filtered on.</p>
     */
    inline AmiProductEntityIdFilter& WithValueList(const Aws::Vector<Aws::String>& value) { SetValueList(value); return *this;}

    /**
     * <p>A string array of unique entity id values to be filtered on.</p>
     */
    inline AmiProductEntityIdFilter& WithValueList(Aws::Vector<Aws::String>&& value) { SetValueList(std::move(value)); return *this;}

    /**
     * <p>A string array of unique entity id values to be filtered on.</p>
     */
    inline AmiProductEntityIdFilter& AddValueList(const Aws::String& value) { m_valueListHasBeenSet = true; m_valueList.push_back(value); return *this; }

    /**
     * <p>A string array of unique entity id values to be filtered on.</p>
     */
    inline AmiProductEntityIdFilter& AddValueList(Aws::String&& value) { m_valueListHasBeenSet = true; m_valueList.push_back(std::move(value)); return *this; }

    /**
     * <p>A string array of unique entity id values to be filtered on.</p>
     */
    inline AmiProductEntityIdFilter& AddValueList(const char* value) { m_valueListHasBeenSet = true; m_valueList.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_valueList;
    bool m_valueListHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
