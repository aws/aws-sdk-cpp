/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The parameters for Twitter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TwitterParameters">AWS
   * API Reference</a></p>
   */
  class TwitterParameters
  {
  public:
    AWS_QUICKSIGHT_API TwitterParameters() = default;
    AWS_QUICKSIGHT_API TwitterParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TwitterParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Twitter query string.</p>
     */
    inline const Aws::String& GetQuery() const { return m_query; }
    inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }
    template<typename QueryT = Aws::String>
    void SetQuery(QueryT&& value) { m_queryHasBeenSet = true; m_query = std::forward<QueryT>(value); }
    template<typename QueryT = Aws::String>
    TwitterParameters& WithQuery(QueryT&& value) { SetQuery(std::forward<QueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of rows to query Twitter.</p>
     */
    inline int GetMaxRows() const { return m_maxRows; }
    inline bool MaxRowsHasBeenSet() const { return m_maxRowsHasBeenSet; }
    inline void SetMaxRows(int value) { m_maxRowsHasBeenSet = true; m_maxRows = value; }
    inline TwitterParameters& WithMaxRows(int value) { SetMaxRows(value); return *this;}
    ///@}
  private:

    Aws::String m_query;
    bool m_queryHasBeenSet = false;

    int m_maxRows{0};
    bool m_maxRowsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
