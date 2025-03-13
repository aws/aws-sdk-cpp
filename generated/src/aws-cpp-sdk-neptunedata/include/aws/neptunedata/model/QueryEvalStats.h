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
    AWS_NEPTUNEDATA_API QueryEvalStats() = default;
    AWS_NEPTUNEDATA_API QueryEvalStats(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API QueryEvalStats& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates how long the query waited, in milliseconds.</p>
     */
    inline int GetWaited() const { return m_waited; }
    inline bool WaitedHasBeenSet() const { return m_waitedHasBeenSet; }
    inline void SetWaited(int value) { m_waitedHasBeenSet = true; m_waited = value; }
    inline QueryEvalStats& WithWaited(int value) { SetWaited(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of milliseconds the query has been running so far.</p>
     */
    inline int GetElapsed() const { return m_elapsed; }
    inline bool ElapsedHasBeenSet() const { return m_elapsedHasBeenSet; }
    inline void SetElapsed(int value) { m_elapsedHasBeenSet = true; m_elapsed = value; }
    inline QueryEvalStats& WithElapsed(int value) { SetElapsed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>TRUE</code> if the query was cancelled, or FALSE otherwise.</p>
     */
    inline bool GetCancelled() const { return m_cancelled; }
    inline bool CancelledHasBeenSet() const { return m_cancelledHasBeenSet; }
    inline void SetCancelled(bool value) { m_cancelledHasBeenSet = true; m_cancelled = value; }
    inline QueryEvalStats& WithCancelled(bool value) { SetCancelled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of subqueries in this query.</p>
     */
    inline Aws::Utils::DocumentView GetSubqueries() const { return m_subqueries; }
    inline bool SubqueriesHasBeenSet() const { return m_subqueriesHasBeenSet; }
    template<typename SubqueriesT = Aws::Utils::Document>
    void SetSubqueries(SubqueriesT&& value) { m_subqueriesHasBeenSet = true; m_subqueries = std::forward<SubqueriesT>(value); }
    template<typename SubqueriesT = Aws::Utils::Document>
    QueryEvalStats& WithSubqueries(SubqueriesT&& value) { SetSubqueries(std::forward<SubqueriesT>(value)); return *this;}
    ///@}
  private:

    int m_waited{0};
    bool m_waitedHasBeenSet = false;

    int m_elapsed{0};
    bool m_elapsedHasBeenSet = false;

    bool m_cancelled{false};
    bool m_cancelledHasBeenSet = false;

    Aws::Utils::Document m_subqueries;
    bool m_subqueriesHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
