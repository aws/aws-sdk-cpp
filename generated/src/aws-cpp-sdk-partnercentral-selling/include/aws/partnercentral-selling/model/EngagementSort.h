﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/EngagementSortName.h>
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
   * <p>Specifies the sorting parameters for listing Engagements.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/EngagementSort">AWS
   * API Reference</a></p>
   */
  class EngagementSort
  {
  public:
    AWS_PARTNERCENTRALSELLING_API EngagementSort();
    AWS_PARTNERCENTRALSELLING_API EngagementSort(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API EngagementSort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field by which to sort the results.</p>
     */
    inline const EngagementSortName& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const EngagementSortName& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(EngagementSortName&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline EngagementSort& WithSortBy(const EngagementSortName& value) { SetSortBy(value); return *this;}
    inline EngagementSort& WithSortBy(EngagementSortName&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order in which to sort the results.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline EngagementSort& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}
    inline EngagementSort& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}
  private:

    EngagementSortName m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
