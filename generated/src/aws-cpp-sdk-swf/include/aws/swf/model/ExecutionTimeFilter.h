/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace SWF
{
namespace Model
{

  /**
   * <p>Used to filter the workflow executions in visibility APIs by various
   * time-based rules. Each parameter, if specified, defines a rule that must be
   * satisfied by each returned query result. The parameter values are in the <a
   * href="https://en.wikipedia.org/wiki/Unix_time">Unix Time format</a>. For
   * example: <code>"oldestDate": 1325376070.</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ExecutionTimeFilter">AWS
   * API Reference</a></p>
   */
  class ExecutionTimeFilter
  {
  public:
    AWS_SWF_API ExecutionTimeFilter() = default;
    AWS_SWF_API ExecutionTimeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API ExecutionTimeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the oldest start or close date and time to return.</p>
     */
    inline const Aws::Utils::DateTime& GetOldestDate() const { return m_oldestDate; }
    inline bool OldestDateHasBeenSet() const { return m_oldestDateHasBeenSet; }
    template<typename OldestDateT = Aws::Utils::DateTime>
    void SetOldestDate(OldestDateT&& value) { m_oldestDateHasBeenSet = true; m_oldestDate = std::forward<OldestDateT>(value); }
    template<typename OldestDateT = Aws::Utils::DateTime>
    ExecutionTimeFilter& WithOldestDate(OldestDateT&& value) { SetOldestDate(std::forward<OldestDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the latest start or close date and time to return.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestDate() const { return m_latestDate; }
    inline bool LatestDateHasBeenSet() const { return m_latestDateHasBeenSet; }
    template<typename LatestDateT = Aws::Utils::DateTime>
    void SetLatestDate(LatestDateT&& value) { m_latestDateHasBeenSet = true; m_latestDate = std::forward<LatestDateT>(value); }
    template<typename LatestDateT = Aws::Utils::DateTime>
    ExecutionTimeFilter& WithLatestDate(LatestDateT&& value) { SetLatestDate(std::forward<LatestDateT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_oldestDate{};
    bool m_oldestDateHasBeenSet = false;

    Aws::Utils::DateTime m_latestDate{};
    bool m_latestDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
