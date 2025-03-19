/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/model/DataReplicationInitiationStep.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Data replication initiation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DataReplicationInitiation">AWS
   * API Reference</a></p>
   */
  class DataReplicationInitiation
  {
  public:
    AWS_MGN_API DataReplicationInitiation() = default;
    AWS_MGN_API DataReplicationInitiation(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API DataReplicationInitiation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Request to query next data initiation date and time.</p>
     */
    inline const Aws::String& GetNextAttemptDateTime() const { return m_nextAttemptDateTime; }
    inline bool NextAttemptDateTimeHasBeenSet() const { return m_nextAttemptDateTimeHasBeenSet; }
    template<typename NextAttemptDateTimeT = Aws::String>
    void SetNextAttemptDateTime(NextAttemptDateTimeT&& value) { m_nextAttemptDateTimeHasBeenSet = true; m_nextAttemptDateTime = std::forward<NextAttemptDateTimeT>(value); }
    template<typename NextAttemptDateTimeT = Aws::String>
    DataReplicationInitiation& WithNextAttemptDateTime(NextAttemptDateTimeT&& value) { SetNextAttemptDateTime(std::forward<NextAttemptDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to query data initiation start date and time.</p>
     */
    inline const Aws::String& GetStartDateTime() const { return m_startDateTime; }
    inline bool StartDateTimeHasBeenSet() const { return m_startDateTimeHasBeenSet; }
    template<typename StartDateTimeT = Aws::String>
    void SetStartDateTime(StartDateTimeT&& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = std::forward<StartDateTimeT>(value); }
    template<typename StartDateTimeT = Aws::String>
    DataReplicationInitiation& WithStartDateTime(StartDateTimeT&& value) { SetStartDateTime(std::forward<StartDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to query data initiation steps.</p>
     */
    inline const Aws::Vector<DataReplicationInitiationStep>& GetSteps() const { return m_steps; }
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }
    template<typename StepsT = Aws::Vector<DataReplicationInitiationStep>>
    void SetSteps(StepsT&& value) { m_stepsHasBeenSet = true; m_steps = std::forward<StepsT>(value); }
    template<typename StepsT = Aws::Vector<DataReplicationInitiationStep>>
    DataReplicationInitiation& WithSteps(StepsT&& value) { SetSteps(std::forward<StepsT>(value)); return *this;}
    template<typename StepsT = DataReplicationInitiationStep>
    DataReplicationInitiation& AddSteps(StepsT&& value) { m_stepsHasBeenSet = true; m_steps.emplace_back(std::forward<StepsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_nextAttemptDateTime;
    bool m_nextAttemptDateTimeHasBeenSet = false;

    Aws::String m_startDateTime;
    bool m_startDateTimeHasBeenSet = false;

    Aws::Vector<DataReplicationInitiationStep> m_steps;
    bool m_stepsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
