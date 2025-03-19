/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-contacts/model/Target.h>
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
namespace SSMContacts
{
namespace Model
{

  /**
   * <p>A set amount of time that an escalation plan or engagement plan engages the
   * specified contacts or contact methods.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/Stage">AWS
   * API Reference</a></p>
   */
  class Stage
  {
  public:
    AWS_SSMCONTACTS_API Stage() = default;
    AWS_SSMCONTACTS_API Stage(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Stage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time to wait until beginning the next stage. The duration can only be set
     * to 0 if a target is specified.</p>
     */
    inline int GetDurationInMinutes() const { return m_durationInMinutes; }
    inline bool DurationInMinutesHasBeenSet() const { return m_durationInMinutesHasBeenSet; }
    inline void SetDurationInMinutes(int value) { m_durationInMinutesHasBeenSet = true; m_durationInMinutes = value; }
    inline Stage& WithDurationInMinutes(int value) { SetDurationInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contacts or contact methods that the escalation plan or engagement plan
     * is engaging.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Vector<Target>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Vector<Target>>
    Stage& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsT = Target>
    Stage& AddTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets.emplace_back(std::forward<TargetsT>(value)); return *this; }
    ///@}
  private:

    int m_durationInMinutes{0};
    bool m_durationInMinutesHasBeenSet = false;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
