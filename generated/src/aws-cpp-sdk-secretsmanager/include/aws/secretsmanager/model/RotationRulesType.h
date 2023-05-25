/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
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
namespace SecretsManager
{
namespace Model
{

  /**
   * <p>A structure that defines the rotation configuration for the
   * secret.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/RotationRulesType">AWS
   * API Reference</a></p>
   */
  class RotationRulesType
  {
  public:
    AWS_SECRETSMANAGER_API RotationRulesType();
    AWS_SECRETSMANAGER_API RotationRulesType(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECRETSMANAGER_API RotationRulesType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECRETSMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of days between rotations of the secret. You can use this value to
     * check that your secret meets your compliance guidelines for how often secrets
     * must be rotated. If you use this field to set the rotation schedule, Secrets
     * Manager calculates the next rotation date based on the previous rotation.
     * Manually updating the secret value by calling <code>PutSecretValue</code> or
     * <code>UpdateSecret</code> is considered a valid rotation.</p> <p>In
     * <code>DescribeSecret</code> and <code>ListSecrets</code>, this value is
     * calculated from the rotation schedule after every successful rotation. In
     * <code>RotateSecret</code>, you can set the rotation schedule in
     * <code>RotationRules</code> with <code>AutomaticallyAfterDays</code> or
     * <code>ScheduleExpression</code>, but not both. To set a rotation schedule in
     * hours, use <code>ScheduleExpression</code>.</p>
     */
    inline long long GetAutomaticallyAfterDays() const{ return m_automaticallyAfterDays; }

    /**
     * <p>The number of days between rotations of the secret. You can use this value to
     * check that your secret meets your compliance guidelines for how often secrets
     * must be rotated. If you use this field to set the rotation schedule, Secrets
     * Manager calculates the next rotation date based on the previous rotation.
     * Manually updating the secret value by calling <code>PutSecretValue</code> or
     * <code>UpdateSecret</code> is considered a valid rotation.</p> <p>In
     * <code>DescribeSecret</code> and <code>ListSecrets</code>, this value is
     * calculated from the rotation schedule after every successful rotation. In
     * <code>RotateSecret</code>, you can set the rotation schedule in
     * <code>RotationRules</code> with <code>AutomaticallyAfterDays</code> or
     * <code>ScheduleExpression</code>, but not both. To set a rotation schedule in
     * hours, use <code>ScheduleExpression</code>.</p>
     */
    inline bool AutomaticallyAfterDaysHasBeenSet() const { return m_automaticallyAfterDaysHasBeenSet; }

    /**
     * <p>The number of days between rotations of the secret. You can use this value to
     * check that your secret meets your compliance guidelines for how often secrets
     * must be rotated. If you use this field to set the rotation schedule, Secrets
     * Manager calculates the next rotation date based on the previous rotation.
     * Manually updating the secret value by calling <code>PutSecretValue</code> or
     * <code>UpdateSecret</code> is considered a valid rotation.</p> <p>In
     * <code>DescribeSecret</code> and <code>ListSecrets</code>, this value is
     * calculated from the rotation schedule after every successful rotation. In
     * <code>RotateSecret</code>, you can set the rotation schedule in
     * <code>RotationRules</code> with <code>AutomaticallyAfterDays</code> or
     * <code>ScheduleExpression</code>, but not both. To set a rotation schedule in
     * hours, use <code>ScheduleExpression</code>.</p>
     */
    inline void SetAutomaticallyAfterDays(long long value) { m_automaticallyAfterDaysHasBeenSet = true; m_automaticallyAfterDays = value; }

    /**
     * <p>The number of days between rotations of the secret. You can use this value to
     * check that your secret meets your compliance guidelines for how often secrets
     * must be rotated. If you use this field to set the rotation schedule, Secrets
     * Manager calculates the next rotation date based on the previous rotation.
     * Manually updating the secret value by calling <code>PutSecretValue</code> or
     * <code>UpdateSecret</code> is considered a valid rotation.</p> <p>In
     * <code>DescribeSecret</code> and <code>ListSecrets</code>, this value is
     * calculated from the rotation schedule after every successful rotation. In
     * <code>RotateSecret</code>, you can set the rotation schedule in
     * <code>RotationRules</code> with <code>AutomaticallyAfterDays</code> or
     * <code>ScheduleExpression</code>, but not both. To set a rotation schedule in
     * hours, use <code>ScheduleExpression</code>.</p>
     */
    inline RotationRulesType& WithAutomaticallyAfterDays(long long value) { SetAutomaticallyAfterDays(value); return *this;}


    /**
     * <p>The length of the rotation window in hours, for example <code>3h</code> for a
     * three hour window. Secrets Manager rotates your secret at any time during this
     * window. The window must not extend into the next rotation window or the next UTC
     * day. The window starts according to the <code>ScheduleExpression</code>. If you
     * don't specify a <code>Duration</code>, for a <code>ScheduleExpression</code> in
     * hours, the window automatically closes after one hour. For a
     * <code>ScheduleExpression</code> in days, the window automatically closes at the
     * end of the UTC day. For more information, including examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a> in the <i>Secrets Manager Users
     * Guide</i>.</p>
     */
    inline const Aws::String& GetDuration() const{ return m_duration; }

    /**
     * <p>The length of the rotation window in hours, for example <code>3h</code> for a
     * three hour window. Secrets Manager rotates your secret at any time during this
     * window. The window must not extend into the next rotation window or the next UTC
     * day. The window starts according to the <code>ScheduleExpression</code>. If you
     * don't specify a <code>Duration</code>, for a <code>ScheduleExpression</code> in
     * hours, the window automatically closes after one hour. For a
     * <code>ScheduleExpression</code> in days, the window automatically closes at the
     * end of the UTC day. For more information, including examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a> in the <i>Secrets Manager Users
     * Guide</i>.</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>The length of the rotation window in hours, for example <code>3h</code> for a
     * three hour window. Secrets Manager rotates your secret at any time during this
     * window. The window must not extend into the next rotation window or the next UTC
     * day. The window starts according to the <code>ScheduleExpression</code>. If you
     * don't specify a <code>Duration</code>, for a <code>ScheduleExpression</code> in
     * hours, the window automatically closes after one hour. For a
     * <code>ScheduleExpression</code> in days, the window automatically closes at the
     * end of the UTC day. For more information, including examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a> in the <i>Secrets Manager Users
     * Guide</i>.</p>
     */
    inline void SetDuration(const Aws::String& value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The length of the rotation window in hours, for example <code>3h</code> for a
     * three hour window. Secrets Manager rotates your secret at any time during this
     * window. The window must not extend into the next rotation window or the next UTC
     * day. The window starts according to the <code>ScheduleExpression</code>. If you
     * don't specify a <code>Duration</code>, for a <code>ScheduleExpression</code> in
     * hours, the window automatically closes after one hour. For a
     * <code>ScheduleExpression</code> in days, the window automatically closes at the
     * end of the UTC day. For more information, including examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a> in the <i>Secrets Manager Users
     * Guide</i>.</p>
     */
    inline void SetDuration(Aws::String&& value) { m_durationHasBeenSet = true; m_duration = std::move(value); }

    /**
     * <p>The length of the rotation window in hours, for example <code>3h</code> for a
     * three hour window. Secrets Manager rotates your secret at any time during this
     * window. The window must not extend into the next rotation window or the next UTC
     * day. The window starts according to the <code>ScheduleExpression</code>. If you
     * don't specify a <code>Duration</code>, for a <code>ScheduleExpression</code> in
     * hours, the window automatically closes after one hour. For a
     * <code>ScheduleExpression</code> in days, the window automatically closes at the
     * end of the UTC day. For more information, including examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a> in the <i>Secrets Manager Users
     * Guide</i>.</p>
     */
    inline void SetDuration(const char* value) { m_durationHasBeenSet = true; m_duration.assign(value); }

    /**
     * <p>The length of the rotation window in hours, for example <code>3h</code> for a
     * three hour window. Secrets Manager rotates your secret at any time during this
     * window. The window must not extend into the next rotation window or the next UTC
     * day. The window starts according to the <code>ScheduleExpression</code>. If you
     * don't specify a <code>Duration</code>, for a <code>ScheduleExpression</code> in
     * hours, the window automatically closes after one hour. For a
     * <code>ScheduleExpression</code> in days, the window automatically closes at the
     * end of the UTC day. For more information, including examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a> in the <i>Secrets Manager Users
     * Guide</i>.</p>
     */
    inline RotationRulesType& WithDuration(const Aws::String& value) { SetDuration(value); return *this;}

    /**
     * <p>The length of the rotation window in hours, for example <code>3h</code> for a
     * three hour window. Secrets Manager rotates your secret at any time during this
     * window. The window must not extend into the next rotation window or the next UTC
     * day. The window starts according to the <code>ScheduleExpression</code>. If you
     * don't specify a <code>Duration</code>, for a <code>ScheduleExpression</code> in
     * hours, the window automatically closes after one hour. For a
     * <code>ScheduleExpression</code> in days, the window automatically closes at the
     * end of the UTC day. For more information, including examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a> in the <i>Secrets Manager Users
     * Guide</i>.</p>
     */
    inline RotationRulesType& WithDuration(Aws::String&& value) { SetDuration(std::move(value)); return *this;}

    /**
     * <p>The length of the rotation window in hours, for example <code>3h</code> for a
     * three hour window. Secrets Manager rotates your secret at any time during this
     * window. The window must not extend into the next rotation window or the next UTC
     * day. The window starts according to the <code>ScheduleExpression</code>. If you
     * don't specify a <code>Duration</code>, for a <code>ScheduleExpression</code> in
     * hours, the window automatically closes after one hour. For a
     * <code>ScheduleExpression</code> in days, the window automatically closes at the
     * end of the UTC day. For more information, including examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a> in the <i>Secrets Manager Users
     * Guide</i>.</p>
     */
    inline RotationRulesType& WithDuration(const char* value) { SetDuration(value); return *this;}


    /**
     * <p>A <code>cron()</code> or <code>rate()</code> expression that defines the
     * schedule for rotating your secret. Secrets Manager rotation schedules use UTC
     * time zone. Secrets Manager rotates your secret any time during a rotation
     * window.</p> <p>Secrets Manager <code>rate()</code> expressions represent the
     * interval in hours or days that you want to rotate your secret, for example
     * <code>rate(12 hours)</code> or <code>rate(10 days)</code>. You can rotate a
     * secret as often as every four hours. If you use a <code>rate()</code>
     * expression, the rotation window starts at midnight. For a rate in hours, the
     * default rotation window closes after one hour. For a rate in days, the default
     * rotation window closes at the end of the day. You can set the
     * <code>Duration</code> to change the rotation window. The rotation window must
     * not extend into the next UTC day or into the next rotation window.</p> <p>You
     * can use a <code>cron()</code> expression to create a rotation schedule that is
     * more detailed than a rotation interval. For more information, including
     * examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a> in the <i>Secrets Manager Users
     * Guide</i>. For a cron expression that represents a schedule in hours, the
     * default rotation window closes after one hour. For a cron expression that
     * represents a schedule in days, the default rotation window closes at the end of
     * the day. You can set the <code>Duration</code> to change the rotation window.
     * The rotation window must not extend into the next UTC day or into the next
     * rotation window.</p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <p>A <code>cron()</code> or <code>rate()</code> expression that defines the
     * schedule for rotating your secret. Secrets Manager rotation schedules use UTC
     * time zone. Secrets Manager rotates your secret any time during a rotation
     * window.</p> <p>Secrets Manager <code>rate()</code> expressions represent the
     * interval in hours or days that you want to rotate your secret, for example
     * <code>rate(12 hours)</code> or <code>rate(10 days)</code>. You can rotate a
     * secret as often as every four hours. If you use a <code>rate()</code>
     * expression, the rotation window starts at midnight. For a rate in hours, the
     * default rotation window closes after one hour. For a rate in days, the default
     * rotation window closes at the end of the day. You can set the
     * <code>Duration</code> to change the rotation window. The rotation window must
     * not extend into the next UTC day or into the next rotation window.</p> <p>You
     * can use a <code>cron()</code> expression to create a rotation schedule that is
     * more detailed than a rotation interval. For more information, including
     * examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a> in the <i>Secrets Manager Users
     * Guide</i>. For a cron expression that represents a schedule in hours, the
     * default rotation window closes after one hour. For a cron expression that
     * represents a schedule in days, the default rotation window closes at the end of
     * the day. You can set the <code>Duration</code> to change the rotation window.
     * The rotation window must not extend into the next UTC day or into the next
     * rotation window.</p>
     */
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }

    /**
     * <p>A <code>cron()</code> or <code>rate()</code> expression that defines the
     * schedule for rotating your secret. Secrets Manager rotation schedules use UTC
     * time zone. Secrets Manager rotates your secret any time during a rotation
     * window.</p> <p>Secrets Manager <code>rate()</code> expressions represent the
     * interval in hours or days that you want to rotate your secret, for example
     * <code>rate(12 hours)</code> or <code>rate(10 days)</code>. You can rotate a
     * secret as often as every four hours. If you use a <code>rate()</code>
     * expression, the rotation window starts at midnight. For a rate in hours, the
     * default rotation window closes after one hour. For a rate in days, the default
     * rotation window closes at the end of the day. You can set the
     * <code>Duration</code> to change the rotation window. The rotation window must
     * not extend into the next UTC day or into the next rotation window.</p> <p>You
     * can use a <code>cron()</code> expression to create a rotation schedule that is
     * more detailed than a rotation interval. For more information, including
     * examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a> in the <i>Secrets Manager Users
     * Guide</i>. For a cron expression that represents a schedule in hours, the
     * default rotation window closes after one hour. For a cron expression that
     * represents a schedule in days, the default rotation window closes at the end of
     * the day. You can set the <code>Duration</code> to change the rotation window.
     * The rotation window must not extend into the next UTC day or into the next
     * rotation window.</p>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <p>A <code>cron()</code> or <code>rate()</code> expression that defines the
     * schedule for rotating your secret. Secrets Manager rotation schedules use UTC
     * time zone. Secrets Manager rotates your secret any time during a rotation
     * window.</p> <p>Secrets Manager <code>rate()</code> expressions represent the
     * interval in hours or days that you want to rotate your secret, for example
     * <code>rate(12 hours)</code> or <code>rate(10 days)</code>. You can rotate a
     * secret as often as every four hours. If you use a <code>rate()</code>
     * expression, the rotation window starts at midnight. For a rate in hours, the
     * default rotation window closes after one hour. For a rate in days, the default
     * rotation window closes at the end of the day. You can set the
     * <code>Duration</code> to change the rotation window. The rotation window must
     * not extend into the next UTC day or into the next rotation window.</p> <p>You
     * can use a <code>cron()</code> expression to create a rotation schedule that is
     * more detailed than a rotation interval. For more information, including
     * examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a> in the <i>Secrets Manager Users
     * Guide</i>. For a cron expression that represents a schedule in hours, the
     * default rotation window closes after one hour. For a cron expression that
     * represents a schedule in days, the default rotation window closes at the end of
     * the day. You can set the <code>Duration</code> to change the rotation window.
     * The rotation window must not extend into the next UTC day or into the next
     * rotation window.</p>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }

    /**
     * <p>A <code>cron()</code> or <code>rate()</code> expression that defines the
     * schedule for rotating your secret. Secrets Manager rotation schedules use UTC
     * time zone. Secrets Manager rotates your secret any time during a rotation
     * window.</p> <p>Secrets Manager <code>rate()</code> expressions represent the
     * interval in hours or days that you want to rotate your secret, for example
     * <code>rate(12 hours)</code> or <code>rate(10 days)</code>. You can rotate a
     * secret as often as every four hours. If you use a <code>rate()</code>
     * expression, the rotation window starts at midnight. For a rate in hours, the
     * default rotation window closes after one hour. For a rate in days, the default
     * rotation window closes at the end of the day. You can set the
     * <code>Duration</code> to change the rotation window. The rotation window must
     * not extend into the next UTC day or into the next rotation window.</p> <p>You
     * can use a <code>cron()</code> expression to create a rotation schedule that is
     * more detailed than a rotation interval. For more information, including
     * examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a> in the <i>Secrets Manager Users
     * Guide</i>. For a cron expression that represents a schedule in hours, the
     * default rotation window closes after one hour. For a cron expression that
     * represents a schedule in days, the default rotation window closes at the end of
     * the day. You can set the <code>Duration</code> to change the rotation window.
     * The rotation window must not extend into the next UTC day or into the next
     * rotation window.</p>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }

    /**
     * <p>A <code>cron()</code> or <code>rate()</code> expression that defines the
     * schedule for rotating your secret. Secrets Manager rotation schedules use UTC
     * time zone. Secrets Manager rotates your secret any time during a rotation
     * window.</p> <p>Secrets Manager <code>rate()</code> expressions represent the
     * interval in hours or days that you want to rotate your secret, for example
     * <code>rate(12 hours)</code> or <code>rate(10 days)</code>. You can rotate a
     * secret as often as every four hours. If you use a <code>rate()</code>
     * expression, the rotation window starts at midnight. For a rate in hours, the
     * default rotation window closes after one hour. For a rate in days, the default
     * rotation window closes at the end of the day. You can set the
     * <code>Duration</code> to change the rotation window. The rotation window must
     * not extend into the next UTC day or into the next rotation window.</p> <p>You
     * can use a <code>cron()</code> expression to create a rotation schedule that is
     * more detailed than a rotation interval. For more information, including
     * examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a> in the <i>Secrets Manager Users
     * Guide</i>. For a cron expression that represents a schedule in hours, the
     * default rotation window closes after one hour. For a cron expression that
     * represents a schedule in days, the default rotation window closes at the end of
     * the day. You can set the <code>Duration</code> to change the rotation window.
     * The rotation window must not extend into the next UTC day or into the next
     * rotation window.</p>
     */
    inline RotationRulesType& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>A <code>cron()</code> or <code>rate()</code> expression that defines the
     * schedule for rotating your secret. Secrets Manager rotation schedules use UTC
     * time zone. Secrets Manager rotates your secret any time during a rotation
     * window.</p> <p>Secrets Manager <code>rate()</code> expressions represent the
     * interval in hours or days that you want to rotate your secret, for example
     * <code>rate(12 hours)</code> or <code>rate(10 days)</code>. You can rotate a
     * secret as often as every four hours. If you use a <code>rate()</code>
     * expression, the rotation window starts at midnight. For a rate in hours, the
     * default rotation window closes after one hour. For a rate in days, the default
     * rotation window closes at the end of the day. You can set the
     * <code>Duration</code> to change the rotation window. The rotation window must
     * not extend into the next UTC day or into the next rotation window.</p> <p>You
     * can use a <code>cron()</code> expression to create a rotation schedule that is
     * more detailed than a rotation interval. For more information, including
     * examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a> in the <i>Secrets Manager Users
     * Guide</i>. For a cron expression that represents a schedule in hours, the
     * default rotation window closes after one hour. For a cron expression that
     * represents a schedule in days, the default rotation window closes at the end of
     * the day. You can set the <code>Duration</code> to change the rotation window.
     * The rotation window must not extend into the next UTC day or into the next
     * rotation window.</p>
     */
    inline RotationRulesType& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}

    /**
     * <p>A <code>cron()</code> or <code>rate()</code> expression that defines the
     * schedule for rotating your secret. Secrets Manager rotation schedules use UTC
     * time zone. Secrets Manager rotates your secret any time during a rotation
     * window.</p> <p>Secrets Manager <code>rate()</code> expressions represent the
     * interval in hours or days that you want to rotate your secret, for example
     * <code>rate(12 hours)</code> or <code>rate(10 days)</code>. You can rotate a
     * secret as often as every four hours. If you use a <code>rate()</code>
     * expression, the rotation window starts at midnight. For a rate in hours, the
     * default rotation window closes after one hour. For a rate in days, the default
     * rotation window closes at the end of the day. You can set the
     * <code>Duration</code> to change the rotation window. The rotation window must
     * not extend into the next UTC day or into the next rotation window.</p> <p>You
     * can use a <code>cron()</code> expression to create a rotation schedule that is
     * more detailed than a rotation interval. For more information, including
     * examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a> in the <i>Secrets Manager Users
     * Guide</i>. For a cron expression that represents a schedule in hours, the
     * default rotation window closes after one hour. For a cron expression that
     * represents a schedule in days, the default rotation window closes at the end of
     * the day. You can set the <code>Duration</code> to change the rotation window.
     * The rotation window must not extend into the next UTC day or into the next
     * rotation window.</p>
     */
    inline RotationRulesType& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}

  private:

    long long m_automaticallyAfterDays;
    bool m_automaticallyAfterDaysHasBeenSet = false;

    Aws::String m_duration;
    bool m_durationHasBeenSet = false;

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
