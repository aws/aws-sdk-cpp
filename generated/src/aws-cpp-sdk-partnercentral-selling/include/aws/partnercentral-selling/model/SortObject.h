/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/SortBy.h>
#include <aws/partnercentral-selling/model/SortOrder.h>
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
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p> Defines the sorting parameters for listing resource snapshot jobs. This
   * structure allows you to specify the field to sort by and the order of sorting.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/SortObject">AWS
   * API Reference</a></p>
   */
  class SortObject
  {
  public:
    AWS_PARTNERCENTRALSELLING_API SortObject() = default;
    AWS_PARTNERCENTRALSELLING_API SortObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API SortObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies the field by which to sort the resource snapshot jobs. </p>
     */
    inline SortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(SortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline SortObject& WithSortBy(SortBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Determines the order in which the sorted results are presented. </p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline SortObject& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}
  private:

    SortBy m_sortBy{SortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
