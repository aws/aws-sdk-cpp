/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/Document.h>
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
namespace neptunedata
{
namespace Model
{

  /**
   * <p>Structure to capture query statistics such as how many queries are running,
   * accepted or waiting and their details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/QueryEvalStats">AWS
   * API Reference</a></p>
   */
  class QueryEvalStats
  {
  public:
    AWS_NEPTUNEDATA_API QueryEvalStats();
    AWS_NEPTUNEDATA_API QueryEvalStats(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API QueryEvalStats& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates how long the query waited, in milliseconds.</p>
     */
    inline int GetWaited() const{ return m_waited; }

    /**
     * <p>Indicates how long the query waited, in milliseconds.</p>
     */
    inline bool WaitedHasBeenSet() const { return m_waitedHasBeenSet; }

    /**
     * <p>Indicates how long the query waited, in milliseconds.</p>
     */
    inline void SetWaited(int value) { m_waitedHasBeenSet = true; m_waited = value; }

    /**
     * <p>Indicates how long the query waited, in milliseconds.</p>
     */
    inline QueryEvalStats& WithWaited(int value) { SetWaited(value); return *this;}


    /**
     * <p>The number of milliseconds the query has been running so far.</p>
     */
    inline int GetElapsed() const{ return m_elapsed; }

    /**
     * <p>The number of milliseconds the query has been running so far.</p>
     */
    inline bool ElapsedHasBeenSet() const { return m_elapsedHasBeenSet; }

    /**
     * <p>The number of milliseconds the query has been running so far.</p>
     */
    inline void SetElapsed(int value) { m_elapsedHasBeenSet = true; m_elapsed = value; }

    /**
     * <p>The number of milliseconds the query has been running so far.</p>
     */
    inline QueryEvalStats& WithElapsed(int value) { SetElapsed(value); return *this;}


    /**
     * <p>Set to <code>TRUE</code> if the query was cancelled, or FALSE otherwise.</p>
     */
    inline bool GetCancelled() const{ return m_cancelled; }

    /**
     * <p>Set to <code>TRUE</code> if the query was cancelled, or FALSE otherwise.</p>
     */
    inline bool CancelledHasBeenSet() const { return m_cancelledHasBeenSet; }

    /**
     * <p>Set to <code>TRUE</code> if the query was cancelled, or FALSE otherwise.</p>
     */
    inline void SetCancelled(bool value) { m_cancelledHasBeenSet = true; m_cancelled = value; }

    /**
     * <p>Set to <code>TRUE</code> if the query was cancelled, or FALSE otherwise.</p>
     */
    inline QueryEvalStats& WithCancelled(bool value) { SetCancelled(value); return *this;}


    /**
     * <p>The number of subqueries in this query.</p>
     */
    inline Aws::Utils::DocumentView GetSubqueries() const{ return m_subqueries; }

    /**
     * <p>The number of subqueries in this query.</p>
     */
    inline bool SubqueriesHasBeenSet() const { return m_subqueriesHasBeenSet; }

    /**
     * <p>The number of subqueries in this query.</p>
     */
    inline void SetSubqueries(const Aws::Utils::Document& value) { m_subqueriesHasBeenSet = true; m_subqueries = value; }

    /**
     * <p>The number of subqueries in this query.</p>
     */
    inline void SetSubqueries(Aws::Utils::Document&& value) { m_subqueriesHasBeenSet = true; m_subqueries = std::move(value); }

    /**
     * <p>The number of subqueries in this query.</p>
     */
    inline QueryEvalStats& WithSubqueries(const Aws::Utils::Document& value) { SetSubqueries(value); return *this;}

    /**
     * <p>The number of subqueries in this query.</p>
     */
    inline QueryEvalStats& WithSubqueries(Aws::Utils::Document&& value) { SetSubqueries(std::move(value)); return *this;}

  private:

    int m_waited;
    bool m_waitedHasBeenSet = false;

    int m_elapsed;
    bool m_elapsedHasBeenSet = false;

    bool m_cancelled;
    bool m_cancelledHasBeenSet = false;

    Aws::Utils::Document m_subqueries;
    bool m_subqueriesHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
