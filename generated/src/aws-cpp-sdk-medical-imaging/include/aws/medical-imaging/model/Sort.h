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
    AWS_MEDICALIMAGING_API Sort();
    AWS_MEDICALIMAGING_API Sort(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Sort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The sort order for search criteria.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order for search criteria.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order for search criteria.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order for search criteria.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order for search criteria.</p>
     */
    inline Sort& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order for search criteria.</p>
     */
    inline Sort& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>The sort field for search criteria.</p>
     */
    inline const SortField& GetSortField() const{ return m_sortField; }

    /**
     * <p>The sort field for search criteria.</p>
     */
    inline bool SortFieldHasBeenSet() const { return m_sortFieldHasBeenSet; }

    /**
     * <p>The sort field for search criteria.</p>
     */
    inline void SetSortField(const SortField& value) { m_sortFieldHasBeenSet = true; m_sortField = value; }

    /**
     * <p>The sort field for search criteria.</p>
     */
    inline void SetSortField(SortField&& value) { m_sortFieldHasBeenSet = true; m_sortField = std::move(value); }

    /**
     * <p>The sort field for search criteria.</p>
     */
    inline Sort& WithSortField(const SortField& value) { SetSortField(value); return *this;}

    /**
     * <p>The sort field for search criteria.</p>
     */
    inline Sort& WithSortField(SortField&& value) { SetSortField(std::move(value)); return *this;}

  private:

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    SortField m_sortField;
    bool m_sortFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
