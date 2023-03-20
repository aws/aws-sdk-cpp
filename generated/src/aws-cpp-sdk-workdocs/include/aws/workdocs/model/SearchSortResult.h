/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/model/OrderByFieldType.h>
#include <aws/workdocs/model/SortOrder.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>The result of the sort operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/SearchSortResult">AWS
   * API Reference</a></p>
   */
  class SearchSortResult
  {
  public:
    AWS_WORKDOCS_API SearchSortResult();
    AWS_WORKDOCS_API SearchSortResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API SearchSortResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Sort search results based on this field name.</p>
     */
    inline const OrderByFieldType& GetField() const{ return m_field; }

    /**
     * <p>Sort search results based on this field name.</p>
     */
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }

    /**
     * <p>Sort search results based on this field name.</p>
     */
    inline void SetField(const OrderByFieldType& value) { m_fieldHasBeenSet = true; m_field = value; }

    /**
     * <p>Sort search results based on this field name.</p>
     */
    inline void SetField(OrderByFieldType&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }

    /**
     * <p>Sort search results based on this field name.</p>
     */
    inline SearchSortResult& WithField(const OrderByFieldType& value) { SetField(value); return *this;}

    /**
     * <p>Sort search results based on this field name.</p>
     */
    inline SearchSortResult& WithField(OrderByFieldType&& value) { SetField(std::move(value)); return *this;}


    /**
     * <p>Sort direction.</p>
     */
    inline const SortOrder& GetOrder() const{ return m_order; }

    /**
     * <p>Sort direction.</p>
     */
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }

    /**
     * <p>Sort direction.</p>
     */
    inline void SetOrder(const SortOrder& value) { m_orderHasBeenSet = true; m_order = value; }

    /**
     * <p>Sort direction.</p>
     */
    inline void SetOrder(SortOrder&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }

    /**
     * <p>Sort direction.</p>
     */
    inline SearchSortResult& WithOrder(const SortOrder& value) { SetOrder(value); return *this;}

    /**
     * <p>Sort direction.</p>
     */
    inline SearchSortResult& WithOrder(SortOrder&& value) { SetOrder(std::move(value)); return *this;}

  private:

    OrderByFieldType m_field;
    bool m_fieldHasBeenSet = false;

    SortOrder m_order;
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
