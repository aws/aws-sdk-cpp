/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The pagination configuration for a table visual or boxplot.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PaginationConfiguration">AWS
   * API Reference</a></p>
   */
  class PaginationConfiguration
  {
  public:
    AWS_QUICKSIGHT_API PaginationConfiguration() = default;
    AWS_QUICKSIGHT_API PaginationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PaginationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates how many items render in one page.</p>
     */
    inline long long GetPageSize() const { return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(long long value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline PaginationConfiguration& WithPageSize(long long value) { SetPageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the page number.</p>
     */
    inline long long GetPageNumber() const { return m_pageNumber; }
    inline bool PageNumberHasBeenSet() const { return m_pageNumberHasBeenSet; }
    inline void SetPageNumber(long long value) { m_pageNumberHasBeenSet = true; m_pageNumber = value; }
    inline PaginationConfiguration& WithPageNumber(long long value) { SetPageNumber(value); return *this;}
    ///@}
  private:

    long long m_pageSize{0};
    bool m_pageSizeHasBeenSet = false;

    long long m_pageNumber{0};
    bool m_pageNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
