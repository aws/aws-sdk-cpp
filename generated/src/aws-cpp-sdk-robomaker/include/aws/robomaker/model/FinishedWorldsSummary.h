/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/FailureSummary.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Information about worlds that finished.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/FinishedWorldsSummary">AWS
   * API Reference</a></p>
   */
  class FinishedWorldsSummary
  {
  public:
    AWS_ROBOMAKER_API FinishedWorldsSummary() = default;
    AWS_ROBOMAKER_API FinishedWorldsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API FinishedWorldsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of finished worlds.</p>
     */
    inline int GetFinishedCount() const { return m_finishedCount; }
    inline bool FinishedCountHasBeenSet() const { return m_finishedCountHasBeenSet; }
    inline void SetFinishedCount(int value) { m_finishedCountHasBeenSet = true; m_finishedCount = value; }
    inline FinishedWorldsSummary& WithFinishedCount(int value) { SetFinishedCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of worlds that succeeded.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSucceededWorlds() const { return m_succeededWorlds; }
    inline bool SucceededWorldsHasBeenSet() const { return m_succeededWorldsHasBeenSet; }
    template<typename SucceededWorldsT = Aws::Vector<Aws::String>>
    void SetSucceededWorlds(SucceededWorldsT&& value) { m_succeededWorldsHasBeenSet = true; m_succeededWorlds = std::forward<SucceededWorldsT>(value); }
    template<typename SucceededWorldsT = Aws::Vector<Aws::String>>
    FinishedWorldsSummary& WithSucceededWorlds(SucceededWorldsT&& value) { SetSucceededWorlds(std::forward<SucceededWorldsT>(value)); return *this;}
    template<typename SucceededWorldsT = Aws::String>
    FinishedWorldsSummary& AddSucceededWorlds(SucceededWorldsT&& value) { m_succeededWorldsHasBeenSet = true; m_succeededWorlds.emplace_back(std::forward<SucceededWorldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about worlds that failed.</p>
     */
    inline const FailureSummary& GetFailureSummary() const { return m_failureSummary; }
    inline bool FailureSummaryHasBeenSet() const { return m_failureSummaryHasBeenSet; }
    template<typename FailureSummaryT = FailureSummary>
    void SetFailureSummary(FailureSummaryT&& value) { m_failureSummaryHasBeenSet = true; m_failureSummary = std::forward<FailureSummaryT>(value); }
    template<typename FailureSummaryT = FailureSummary>
    FinishedWorldsSummary& WithFailureSummary(FailureSummaryT&& value) { SetFailureSummary(std::forward<FailureSummaryT>(value)); return *this;}
    ///@}
  private:

    int m_finishedCount{0};
    bool m_finishedCountHasBeenSet = false;

    Aws::Vector<Aws::String> m_succeededWorlds;
    bool m_succeededWorldsHasBeenSet = false;

    FailureSummary m_failureSummary;
    bool m_failureSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
