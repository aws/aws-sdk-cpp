/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/medical-imaging/model/SortOrder.h>
#include <aws/medical-imaging/model/SortField.h>
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
namespace MedicalImaging
{
namespace Model
{

  /**
   * <p>Sort search results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/Sort">AWS
   * API Reference</a></p>
   */
  class Sort
  {
  public:
    AWS_MEDICALIMAGING_API Sort() = default;
    AWS_MEDICALIMAGING_API Sort(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Sort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sort order for search criteria.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline Sort& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort field for search criteria.</p>
     */
    inline SortField GetSortField() const { return m_sortField; }
    inline bool SortFieldHasBeenSet() const { return m_sortFieldHasBeenSet; }
    inline void SetSortField(SortField value) { m_sortFieldHasBeenSet = true; m_sortField = value; }
    inline Sort& WithSortField(SortField value) { SetSortField(value); return *this;}
    ///@}
  private:

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    SortField m_sortField{SortField::NOT_SET};
    bool m_sortFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
