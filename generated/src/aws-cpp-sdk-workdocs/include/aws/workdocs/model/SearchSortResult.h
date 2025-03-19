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
    AWS_WORKDOCS_API SearchSortResult() = default;
    AWS_WORKDOCS_API SearchSortResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API SearchSortResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Sort search results based on this field name.</p>
     */
    inline OrderByFieldType GetField() const { return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    inline void SetField(OrderByFieldType value) { m_fieldHasBeenSet = true; m_field = value; }
    inline SearchSortResult& WithField(OrderByFieldType value) { SetField(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sort direction.</p>
     */
    inline SortOrder GetOrder() const { return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(SortOrder value) { m_orderHasBeenSet = true; m_order = value; }
    inline SearchSortResult& WithOrder(SortOrder value) { SetOrder(value); return *this;}
    ///@}
  private:

    OrderByFieldType m_field{OrderByFieldType::NOT_SET};
    bool m_fieldHasBeenSet = false;

    SortOrder m_order{SortOrder::NOT_SET};
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
