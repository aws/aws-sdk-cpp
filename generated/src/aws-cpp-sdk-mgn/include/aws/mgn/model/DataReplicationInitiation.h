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
    AWS_MGN_API DataReplicationInitiation();
    AWS_MGN_API DataReplicationInitiation(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API DataReplicationInitiation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Request to query next data initiation date and time.</p>
     */
    inline const Aws::String& GetNextAttemptDateTime() const{ return m_nextAttemptDateTime; }
    inline bool NextAttemptDateTimeHasBeenSet() const { return m_nextAttemptDateTimeHasBeenSet; }
    inline void SetNextAttemptDateTime(const Aws::String& value) { m_nextAttemptDateTimeHasBeenSet = true; m_nextAttemptDateTime = value; }
    inline void SetNextAttemptDateTime(Aws::String&& value) { m_nextAttemptDateTimeHasBeenSet = true; m_nextAttemptDateTime = std::move(value); }
    inline void SetNextAttemptDateTime(const char* value) { m_nextAttemptDateTimeHasBeenSet = true; m_nextAttemptDateTime.assign(value); }
    inline DataReplicationInitiation& WithNextAttemptDateTime(const Aws::String& value) { SetNextAttemptDateTime(value); return *this;}
    inline DataReplicationInitiation& WithNextAttemptDateTime(Aws::String&& value) { SetNextAttemptDateTime(std::move(value)); return *this;}
    inline DataReplicationInitiation& WithNextAttemptDateTime(const char* value) { SetNextAttemptDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to query data initiation start date and time.</p>
     */
    inline const Aws::String& GetStartDateTime() const{ return m_startDateTime; }
    inline bool StartDateTimeHasBeenSet() const { return m_startDateTimeHasBeenSet; }
    inline void SetStartDateTime(const Aws::String& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = value; }
    inline void SetStartDateTime(Aws::String&& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = std::move(value); }
    inline void SetStartDateTime(const char* value) { m_startDateTimeHasBeenSet = true; m_startDateTime.assign(value); }
    inline DataReplicationInitiation& WithStartDateTime(const Aws::String& value) { SetStartDateTime(value); return *this;}
    inline DataReplicationInitiation& WithStartDateTime(Aws::String&& value) { SetStartDateTime(std::move(value)); return *this;}
    inline DataReplicationInitiation& WithStartDateTime(const char* value) { SetStartDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to query data initiation steps.</p>
     */
    inline const Aws::Vector<DataReplicationInitiationStep>& GetSteps() const{ return m_steps; }
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }
    inline void SetSteps(const Aws::Vector<DataReplicationInitiationStep>& value) { m_stepsHasBeenSet = true; m_steps = value; }
    inline void SetSteps(Aws::Vector<DataReplicationInitiationStep>&& value) { m_stepsHasBeenSet = true; m_steps = std::move(value); }
    inline DataReplicationInitiation& WithSteps(const Aws::Vector<DataReplicationInitiationStep>& value) { SetSteps(value); return *this;}
    inline DataReplicationInitiation& WithSteps(Aws::Vector<DataReplicationInitiationStep>&& value) { SetSteps(std::move(value)); return *this;}
    inline DataReplicationInitiation& AddSteps(const DataReplicationInitiationStep& value) { m_stepsHasBeenSet = true; m_steps.push_back(value); return *this; }
    inline DataReplicationInitiation& AddSteps(DataReplicationInitiationStep&& value) { m_stepsHasBeenSet = true; m_steps.push_back(std::move(value)); return *this; }
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
