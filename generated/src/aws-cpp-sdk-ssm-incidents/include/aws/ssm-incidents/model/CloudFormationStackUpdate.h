/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Information about an CloudFormation stack creation or update that occurred
   * around the time of an incident and could be a potential cause of the
   * incident.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/CloudFormationStackUpdate">AWS
   * API Reference</a></p>
   */
  class CloudFormationStackUpdate
  {
  public:
    AWS_SSMINCIDENTS_API CloudFormationStackUpdate() = default;
    AWS_SSMINCIDENTS_API CloudFormationStackUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API CloudFormationStackUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp for when the CloudFormation stack creation or update ended. Not
     * reported for deployments that are still in progress.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    CloudFormationStackUpdate& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the CloudFormation stack involved in the
     * update.</p>
     */
    inline const Aws::String& GetStackArn() const { return m_stackArn; }
    inline bool StackArnHasBeenSet() const { return m_stackArnHasBeenSet; }
    template<typename StackArnT = Aws::String>
    void SetStackArn(StackArnT&& value) { m_stackArnHasBeenSet = true; m_stackArn = std::forward<StackArnT>(value); }
    template<typename StackArnT = Aws::String>
    CloudFormationStackUpdate& WithStackArn(StackArnT&& value) { SetStackArn(std::forward<StackArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the CloudFormation stack creation or update began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    CloudFormationStackUpdate& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_stackArn;
    bool m_stackArnHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
