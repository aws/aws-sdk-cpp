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
    AWS_SSMCONTACTS_API Stage();
    AWS_SSMCONTACTS_API Stage(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Stage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time to wait until beginning the next stage. The duration can only be set
     * to 0 if a target is specified.</p>
     */
    inline int GetDurationInMinutes() const{ return m_durationInMinutes; }

    /**
     * <p>The time to wait until beginning the next stage. The duration can only be set
     * to 0 if a target is specified.</p>
     */
    inline bool DurationInMinutesHasBeenSet() const { return m_durationInMinutesHasBeenSet; }

    /**
     * <p>The time to wait until beginning the next stage. The duration can only be set
     * to 0 if a target is specified.</p>
     */
    inline void SetDurationInMinutes(int value) { m_durationInMinutesHasBeenSet = true; m_durationInMinutes = value; }

    /**
     * <p>The time to wait until beginning the next stage. The duration can only be set
     * to 0 if a target is specified.</p>
     */
    inline Stage& WithDurationInMinutes(int value) { SetDurationInMinutes(value); return *this;}


    /**
     * <p>The contacts or contact methods that the escalation plan or engagement plan
     * is engaging.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <p>The contacts or contact methods that the escalation plan or engagement plan
     * is engaging.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The contacts or contact methods that the escalation plan or engagement plan
     * is engaging.</p>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The contacts or contact methods that the escalation plan or engagement plan
     * is engaging.</p>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The contacts or contact methods that the escalation plan or engagement plan
     * is engaging.</p>
     */
    inline Stage& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>The contacts or contact methods that the escalation plan or engagement plan
     * is engaging.</p>
     */
    inline Stage& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The contacts or contact methods that the escalation plan or engagement plan
     * is engaging.</p>
     */
    inline Stage& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The contacts or contact methods that the escalation plan or engagement plan
     * is engaging.</p>
     */
    inline Stage& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }

  private:

    int m_durationInMinutes;
    bool m_durationInMinutesHasBeenSet = false;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
