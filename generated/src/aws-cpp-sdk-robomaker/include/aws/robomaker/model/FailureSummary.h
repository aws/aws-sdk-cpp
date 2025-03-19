/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/WorldFailure.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Information about worlds that failed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/FailureSummary">AWS
   * API Reference</a></p>
   */
  class FailureSummary
  {
  public:
    AWS_ROBOMAKER_API FailureSummary() = default;
    AWS_ROBOMAKER_API FailureSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API FailureSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of failures.</p>
     */
    inline int GetTotalFailureCount() const { return m_totalFailureCount; }
    inline bool TotalFailureCountHasBeenSet() const { return m_totalFailureCountHasBeenSet; }
    inline void SetTotalFailureCount(int value) { m_totalFailureCountHasBeenSet = true; m_totalFailureCount = value; }
    inline FailureSummary& WithTotalFailureCount(int value) { SetTotalFailureCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The worlds that failed.</p>
     */
    inline const Aws::Vector<WorldFailure>& GetFailures() const { return m_failures; }
    inline bool FailuresHasBeenSet() const { return m_failuresHasBeenSet; }
    template<typename FailuresT = Aws::Vector<WorldFailure>>
    void SetFailures(FailuresT&& value) { m_failuresHasBeenSet = true; m_failures = std::forward<FailuresT>(value); }
    template<typename FailuresT = Aws::Vector<WorldFailure>>
    FailureSummary& WithFailures(FailuresT&& value) { SetFailures(std::forward<FailuresT>(value)); return *this;}
    template<typename FailuresT = WorldFailure>
    FailureSummary& AddFailures(FailuresT&& value) { m_failuresHasBeenSet = true; m_failures.emplace_back(std::forward<FailuresT>(value)); return *this; }
    ///@}
  private:

    int m_totalFailureCount{0};
    bool m_totalFailureCountHasBeenSet = false;

    Aws::Vector<WorldFailure> m_failures;
    bool m_failuresHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
