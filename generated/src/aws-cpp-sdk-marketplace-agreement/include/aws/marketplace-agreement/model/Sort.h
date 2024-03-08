/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/model/SortOrder.h>
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
namespace AgreementService
{
namespace Model
{

  /**
   * <p>An object that contains the <code>SortBy</code> and <code>SortOrder</code>
   * attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/Sort">AWS
   * API Reference</a></p>
   */
  class Sort
  {
  public:
    AWS_AGREEMENTSERVICE_API Sort();
    AWS_AGREEMENTSERVICE_API Sort(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Sort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attribute on which the data is grouped, which can be by
     * <code>StartTime</code> and <code>EndTime</code>. The default value is
     * <code>EndTime</code>.</p>
     */
    inline const Aws::String& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The attribute on which the data is grouped, which can be by
     * <code>StartTime</code> and <code>EndTime</code>. The default value is
     * <code>EndTime</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The attribute on which the data is grouped, which can be by
     * <code>StartTime</code> and <code>EndTime</code>. The default value is
     * <code>EndTime</code>.</p>
     */
    inline void SetSortBy(const Aws::String& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The attribute on which the data is grouped, which can be by
     * <code>StartTime</code> and <code>EndTime</code>. The default value is
     * <code>EndTime</code>.</p>
     */
    inline void SetSortBy(Aws::String&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The attribute on which the data is grouped, which can be by
     * <code>StartTime</code> and <code>EndTime</code>. The default value is
     * <code>EndTime</code>.</p>
     */
    inline void SetSortBy(const char* value) { m_sortByHasBeenSet = true; m_sortBy.assign(value); }

    /**
     * <p>The attribute on which the data is grouped, which can be by
     * <code>StartTime</code> and <code>EndTime</code>. The default value is
     * <code>EndTime</code>.</p>
     */
    inline Sort& WithSortBy(const Aws::String& value) { SetSortBy(value); return *this;}

    /**
     * <p>The attribute on which the data is grouped, which can be by
     * <code>StartTime</code> and <code>EndTime</code>. The default value is
     * <code>EndTime</code>.</p>
     */
    inline Sort& WithSortBy(Aws::String&& value) { SetSortBy(std::move(value)); return *this;}

    /**
     * <p>The attribute on which the data is grouped, which can be by
     * <code>StartTime</code> and <code>EndTime</code>. The default value is
     * <code>EndTime</code>.</p>
     */
    inline Sort& WithSortBy(const char* value) { SetSortBy(value); return *this;}


    /**
     * <p>The sorting order, which can be <code>ASCENDING</code> or
     * <code>DESCENDING</code>. The default value is <code>DESCENDING</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sorting order, which can be <code>ASCENDING</code> or
     * <code>DESCENDING</code>. The default value is <code>DESCENDING</code>.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sorting order, which can be <code>ASCENDING</code> or
     * <code>DESCENDING</code>. The default value is <code>DESCENDING</code>.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sorting order, which can be <code>ASCENDING</code> or
     * <code>DESCENDING</code>. The default value is <code>DESCENDING</code>.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sorting order, which can be <code>ASCENDING</code> or
     * <code>DESCENDING</code>. The default value is <code>DESCENDING</code>.</p>
     */
    inline Sort& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sorting order, which can be <code>ASCENDING</code> or
     * <code>DESCENDING</code>. The default value is <code>DESCENDING</code>.</p>
     */
    inline Sort& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::String m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
