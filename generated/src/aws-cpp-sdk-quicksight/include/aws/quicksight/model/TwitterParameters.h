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
    AWS_QUICKSIGHT_API TwitterParameters();
    AWS_QUICKSIGHT_API TwitterParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TwitterParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Twitter query string.</p>
     */
    inline const Aws::String& GetQuery() const{ return m_query; }

    /**
     * <p>Twitter query string.</p>
     */
    inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }

    /**
     * <p>Twitter query string.</p>
     */
    inline void SetQuery(const Aws::String& value) { m_queryHasBeenSet = true; m_query = value; }

    /**
     * <p>Twitter query string.</p>
     */
    inline void SetQuery(Aws::String&& value) { m_queryHasBeenSet = true; m_query = std::move(value); }

    /**
     * <p>Twitter query string.</p>
     */
    inline void SetQuery(const char* value) { m_queryHasBeenSet = true; m_query.assign(value); }

    /**
     * <p>Twitter query string.</p>
     */
    inline TwitterParameters& WithQuery(const Aws::String& value) { SetQuery(value); return *this;}

    /**
     * <p>Twitter query string.</p>
     */
    inline TwitterParameters& WithQuery(Aws::String&& value) { SetQuery(std::move(value)); return *this;}

    /**
     * <p>Twitter query string.</p>
     */
    inline TwitterParameters& WithQuery(const char* value) { SetQuery(value); return *this;}


    /**
     * <p>Maximum number of rows to query Twitter.</p>
     */
    inline int GetMaxRows() const{ return m_maxRows; }

    /**
     * <p>Maximum number of rows to query Twitter.</p>
     */
    inline bool MaxRowsHasBeenSet() const { return m_maxRowsHasBeenSet; }

    /**
     * <p>Maximum number of rows to query Twitter.</p>
     */
    inline void SetMaxRows(int value) { m_maxRowsHasBeenSet = true; m_maxRows = value; }

    /**
     * <p>Maximum number of rows to query Twitter.</p>
     */
    inline TwitterParameters& WithMaxRows(int value) { SetMaxRows(value); return *this;}

  private:

    Aws::String m_query;
    bool m_queryHasBeenSet = false;

    int m_maxRows;
    bool m_maxRowsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
