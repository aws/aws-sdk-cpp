/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medical-imaging/model/Sort.h>
#include <aws/medical-imaging/model/SearchFilter.h>
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
   * <p>The search criteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/SearchCriteria">AWS
   * API Reference</a></p>
   */
  class SearchCriteria
  {
  public:
    AWS_MEDICALIMAGING_API SearchCriteria();
    AWS_MEDICALIMAGING_API SearchCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API SearchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The filters for the search criteria.</p>
     */
    inline const Aws::Vector<SearchFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<SearchFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<SearchFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline SearchCriteria& WithFilters(const Aws::Vector<SearchFilter>& value) { SetFilters(value); return *this;}
    inline SearchCriteria& WithFilters(Aws::Vector<SearchFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline SearchCriteria& AddFilters(const SearchFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline SearchCriteria& AddFilters(SearchFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The sort input for search criteria.</p>
     */
    inline const Sort& GetSort() const{ return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    inline void SetSort(const Sort& value) { m_sortHasBeenSet = true; m_sort = value; }
    inline void SetSort(Sort&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }
    inline SearchCriteria& WithSort(const Sort& value) { SetSort(value); return *this;}
    inline SearchCriteria& WithSort(Sort&& value) { SetSort(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SearchFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Sort m_sort;
    bool m_sortHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
