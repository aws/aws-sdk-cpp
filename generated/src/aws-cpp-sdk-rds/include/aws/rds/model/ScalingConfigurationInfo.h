/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>Shows the scaling configuration for an Aurora DB cluster in
   * <code>serverless</code> DB engine mode.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.html">Using
   * Amazon Aurora Serverless v1</a> in the <i>Amazon Aurora User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ScalingConfigurationInfo">AWS
   * API Reference</a></p>
   */
  class ScalingConfigurationInfo
  {
  public:
    AWS_RDS_API ScalingConfigurationInfo();
    AWS_RDS_API ScalingConfigurationInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API ScalingConfigurationInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The minimum capacity for an Aurora DB cluster in <code>serverless</code> DB
     * engine mode.</p>
     */
    inline int GetMinCapacity() const{ return m_minCapacity; }

    /**
     * <p>The minimum capacity for an Aurora DB cluster in <code>serverless</code> DB
     * engine mode.</p>
     */
    inline bool MinCapacityHasBeenSet() const { return m_minCapacityHasBeenSet; }

    /**
     * <p>The minimum capacity for an Aurora DB cluster in <code>serverless</code> DB
     * engine mode.</p>
     */
    inline void SetMinCapacity(int value) { m_minCapacityHasBeenSet = true; m_minCapacity = value; }

    /**
     * <p>The minimum capacity for an Aurora DB cluster in <code>serverless</code> DB
     * engine mode.</p>
     */
    inline ScalingConfigurationInfo& WithMinCapacity(int value) { SetMinCapacity(value); return *this;}


    /**
     * <p>The maximum capacity for an Aurora DB cluster in <code>serverless</code> DB
     * engine mode.</p>
     */
    inline int GetMaxCapacity() const{ return m_maxCapacity; }

    /**
     * <p>The maximum capacity for an Aurora DB cluster in <code>serverless</code> DB
     * engine mode.</p>
     */
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }

    /**
     * <p>The maximum capacity for an Aurora DB cluster in <code>serverless</code> DB
     * engine mode.</p>
     */
    inline void SetMaxCapacity(int value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }

    /**
     * <p>The maximum capacity for an Aurora DB cluster in <code>serverless</code> DB
     * engine mode.</p>
     */
    inline ScalingConfigurationInfo& WithMaxCapacity(int value) { SetMaxCapacity(value); return *this;}


    /**
     * <p>A value that indicates whether automatic pause is allowed for the Aurora DB
     * cluster in <code>serverless</code> DB engine mode.</p> <p>When the value is set
     * to false for an Aurora Serverless v1 DB cluster, the DB cluster automatically
     * resumes.</p>
     */
    inline bool GetAutoPause() const{ return m_autoPause; }

    /**
     * <p>A value that indicates whether automatic pause is allowed for the Aurora DB
     * cluster in <code>serverless</code> DB engine mode.</p> <p>When the value is set
     * to false for an Aurora Serverless v1 DB cluster, the DB cluster automatically
     * resumes.</p>
     */
    inline bool AutoPauseHasBeenSet() const { return m_autoPauseHasBeenSet; }

    /**
     * <p>A value that indicates whether automatic pause is allowed for the Aurora DB
     * cluster in <code>serverless</code> DB engine mode.</p> <p>When the value is set
     * to false for an Aurora Serverless v1 DB cluster, the DB cluster automatically
     * resumes.</p>
     */
    inline void SetAutoPause(bool value) { m_autoPauseHasBeenSet = true; m_autoPause = value; }

    /**
     * <p>A value that indicates whether automatic pause is allowed for the Aurora DB
     * cluster in <code>serverless</code> DB engine mode.</p> <p>When the value is set
     * to false for an Aurora Serverless v1 DB cluster, the DB cluster automatically
     * resumes.</p>
     */
    inline ScalingConfigurationInfo& WithAutoPause(bool value) { SetAutoPause(value); return *this;}


    /**
     * <p>The remaining amount of time, in seconds, before the Aurora DB cluster in
     * <code>serverless</code> mode is paused. A DB cluster can be paused only when
     * it's idle (it has no connections).</p>
     */
    inline int GetSecondsUntilAutoPause() const{ return m_secondsUntilAutoPause; }

    /**
     * <p>The remaining amount of time, in seconds, before the Aurora DB cluster in
     * <code>serverless</code> mode is paused. A DB cluster can be paused only when
     * it's idle (it has no connections).</p>
     */
    inline bool SecondsUntilAutoPauseHasBeenSet() const { return m_secondsUntilAutoPauseHasBeenSet; }

    /**
     * <p>The remaining amount of time, in seconds, before the Aurora DB cluster in
     * <code>serverless</code> mode is paused. A DB cluster can be paused only when
     * it's idle (it has no connections).</p>
     */
    inline void SetSecondsUntilAutoPause(int value) { m_secondsUntilAutoPauseHasBeenSet = true; m_secondsUntilAutoPause = value; }

    /**
     * <p>The remaining amount of time, in seconds, before the Aurora DB cluster in
     * <code>serverless</code> mode is paused. A DB cluster can be paused only when
     * it's idle (it has no connections).</p>
     */
    inline ScalingConfigurationInfo& WithSecondsUntilAutoPause(int value) { SetSecondsUntilAutoPause(value); return *this;}


    /**
     * <p>The action that occurs when Aurora times out while attempting to change the
     * capacity of an Aurora Serverless v1 cluster. The value is either
     * <code>ForceApplyCapacityChange</code> or
     * <code>RollbackCapacityChange</code>.</p> <p>
     * <code>ForceApplyCapacityChange</code>, the default, sets the capacity to the
     * specified value as soon as possible.</p> <p> <code>RollbackCapacityChange</code>
     * ignores the capacity change if a scaling point isn't found in the timeout
     * period.</p>
     */
    inline const Aws::String& GetTimeoutAction() const{ return m_timeoutAction; }

    /**
     * <p>The action that occurs when Aurora times out while attempting to change the
     * capacity of an Aurora Serverless v1 cluster. The value is either
     * <code>ForceApplyCapacityChange</code> or
     * <code>RollbackCapacityChange</code>.</p> <p>
     * <code>ForceApplyCapacityChange</code>, the default, sets the capacity to the
     * specified value as soon as possible.</p> <p> <code>RollbackCapacityChange</code>
     * ignores the capacity change if a scaling point isn't found in the timeout
     * period.</p>
     */
    inline bool TimeoutActionHasBeenSet() const { return m_timeoutActionHasBeenSet; }

    /**
     * <p>The action that occurs when Aurora times out while attempting to change the
     * capacity of an Aurora Serverless v1 cluster. The value is either
     * <code>ForceApplyCapacityChange</code> or
     * <code>RollbackCapacityChange</code>.</p> <p>
     * <code>ForceApplyCapacityChange</code>, the default, sets the capacity to the
     * specified value as soon as possible.</p> <p> <code>RollbackCapacityChange</code>
     * ignores the capacity change if a scaling point isn't found in the timeout
     * period.</p>
     */
    inline void SetTimeoutAction(const Aws::String& value) { m_timeoutActionHasBeenSet = true; m_timeoutAction = value; }

    /**
     * <p>The action that occurs when Aurora times out while attempting to change the
     * capacity of an Aurora Serverless v1 cluster. The value is either
     * <code>ForceApplyCapacityChange</code> or
     * <code>RollbackCapacityChange</code>.</p> <p>
     * <code>ForceApplyCapacityChange</code>, the default, sets the capacity to the
     * specified value as soon as possible.</p> <p> <code>RollbackCapacityChange</code>
     * ignores the capacity change if a scaling point isn't found in the timeout
     * period.</p>
     */
    inline void SetTimeoutAction(Aws::String&& value) { m_timeoutActionHasBeenSet = true; m_timeoutAction = std::move(value); }

    /**
     * <p>The action that occurs when Aurora times out while attempting to change the
     * capacity of an Aurora Serverless v1 cluster. The value is either
     * <code>ForceApplyCapacityChange</code> or
     * <code>RollbackCapacityChange</code>.</p> <p>
     * <code>ForceApplyCapacityChange</code>, the default, sets the capacity to the
     * specified value as soon as possible.</p> <p> <code>RollbackCapacityChange</code>
     * ignores the capacity change if a scaling point isn't found in the timeout
     * period.</p>
     */
    inline void SetTimeoutAction(const char* value) { m_timeoutActionHasBeenSet = true; m_timeoutAction.assign(value); }

    /**
     * <p>The action that occurs when Aurora times out while attempting to change the
     * capacity of an Aurora Serverless v1 cluster. The value is either
     * <code>ForceApplyCapacityChange</code> or
     * <code>RollbackCapacityChange</code>.</p> <p>
     * <code>ForceApplyCapacityChange</code>, the default, sets the capacity to the
     * specified value as soon as possible.</p> <p> <code>RollbackCapacityChange</code>
     * ignores the capacity change if a scaling point isn't found in the timeout
     * period.</p>
     */
    inline ScalingConfigurationInfo& WithTimeoutAction(const Aws::String& value) { SetTimeoutAction(value); return *this;}

    /**
     * <p>The action that occurs when Aurora times out while attempting to change the
     * capacity of an Aurora Serverless v1 cluster. The value is either
     * <code>ForceApplyCapacityChange</code> or
     * <code>RollbackCapacityChange</code>.</p> <p>
     * <code>ForceApplyCapacityChange</code>, the default, sets the capacity to the
     * specified value as soon as possible.</p> <p> <code>RollbackCapacityChange</code>
     * ignores the capacity change if a scaling point isn't found in the timeout
     * period.</p>
     */
    inline ScalingConfigurationInfo& WithTimeoutAction(Aws::String&& value) { SetTimeoutAction(std::move(value)); return *this;}

    /**
     * <p>The action that occurs when Aurora times out while attempting to change the
     * capacity of an Aurora Serverless v1 cluster. The value is either
     * <code>ForceApplyCapacityChange</code> or
     * <code>RollbackCapacityChange</code>.</p> <p>
     * <code>ForceApplyCapacityChange</code>, the default, sets the capacity to the
     * specified value as soon as possible.</p> <p> <code>RollbackCapacityChange</code>
     * ignores the capacity change if a scaling point isn't found in the timeout
     * period.</p>
     */
    inline ScalingConfigurationInfo& WithTimeoutAction(const char* value) { SetTimeoutAction(value); return *this;}


    /**
     * <p>The number of seconds before scaling times out. What happens when an
     * attempted scaling action times out is determined by the
     * <code>TimeoutAction</code> setting.</p>
     */
    inline int GetSecondsBeforeTimeout() const{ return m_secondsBeforeTimeout; }

    /**
     * <p>The number of seconds before scaling times out. What happens when an
     * attempted scaling action times out is determined by the
     * <code>TimeoutAction</code> setting.</p>
     */
    inline bool SecondsBeforeTimeoutHasBeenSet() const { return m_secondsBeforeTimeoutHasBeenSet; }

    /**
     * <p>The number of seconds before scaling times out. What happens when an
     * attempted scaling action times out is determined by the
     * <code>TimeoutAction</code> setting.</p>
     */
    inline void SetSecondsBeforeTimeout(int value) { m_secondsBeforeTimeoutHasBeenSet = true; m_secondsBeforeTimeout = value; }

    /**
     * <p>The number of seconds before scaling times out. What happens when an
     * attempted scaling action times out is determined by the
     * <code>TimeoutAction</code> setting.</p>
     */
    inline ScalingConfigurationInfo& WithSecondsBeforeTimeout(int value) { SetSecondsBeforeTimeout(value); return *this;}

  private:

    int m_minCapacity;
    bool m_minCapacityHasBeenSet = false;

    int m_maxCapacity;
    bool m_maxCapacityHasBeenSet = false;

    bool m_autoPause;
    bool m_autoPauseHasBeenSet = false;

    int m_secondsUntilAutoPause;
    bool m_secondsUntilAutoPauseHasBeenSet = false;

    Aws::String m_timeoutAction;
    bool m_timeoutActionHasBeenSet = false;

    int m_secondsBeforeTimeout;
    bool m_secondsBeforeTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
