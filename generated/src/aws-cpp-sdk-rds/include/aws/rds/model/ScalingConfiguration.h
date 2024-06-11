﻿/**
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
   * <p>Contains the scaling configuration of an Aurora Serverless v1 DB cluster.</p>
   * <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.html">Using
   * Amazon Aurora Serverless v1</a> in the <i>Amazon Aurora User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ScalingConfiguration">AWS
   * API Reference</a></p>
   */
  class ScalingConfiguration
  {
  public:
    AWS_RDS_API ScalingConfiguration();
    AWS_RDS_API ScalingConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API ScalingConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The minimum capacity for an Aurora DB cluster in <code>serverless</code> DB
     * engine mode.</p> <p>For Aurora MySQL, valid capacity values are <code>1</code>,
     * <code>2</code>, <code>4</code>, <code>8</code>, <code>16</code>,
     * <code>32</code>, <code>64</code>, <code>128</code>, and <code>256</code>.</p>
     * <p>For Aurora PostgreSQL, valid capacity values are <code>2</code>,
     * <code>4</code>, <code>8</code>, <code>16</code>, <code>32</code>,
     * <code>64</code>, <code>192</code>, and <code>384</code>.</p> <p>The minimum
     * capacity must be less than or equal to the maximum capacity.</p>
     */
    inline int GetMinCapacity() const{ return m_minCapacity; }
    inline bool MinCapacityHasBeenSet() const { return m_minCapacityHasBeenSet; }
    inline void SetMinCapacity(int value) { m_minCapacityHasBeenSet = true; m_minCapacity = value; }
    inline ScalingConfiguration& WithMinCapacity(int value) { SetMinCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum capacity for an Aurora DB cluster in <code>serverless</code> DB
     * engine mode.</p> <p>For Aurora MySQL, valid capacity values are <code>1</code>,
     * <code>2</code>, <code>4</code>, <code>8</code>, <code>16</code>,
     * <code>32</code>, <code>64</code>, <code>128</code>, and <code>256</code>.</p>
     * <p>For Aurora PostgreSQL, valid capacity values are <code>2</code>,
     * <code>4</code>, <code>8</code>, <code>16</code>, <code>32</code>,
     * <code>64</code>, <code>192</code>, and <code>384</code>.</p> <p>The maximum
     * capacity must be greater than or equal to the minimum capacity.</p>
     */
    inline int GetMaxCapacity() const{ return m_maxCapacity; }
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }
    inline void SetMaxCapacity(int value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }
    inline ScalingConfiguration& WithMaxCapacity(int value) { SetMaxCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to allow or disallow automatic pause for an Aurora DB
     * cluster in <code>serverless</code> DB engine mode. A DB cluster can be paused
     * only when it's idle (it has no connections).</p>  <p>If a DB cluster is
     * paused for more than seven days, the DB cluster might be backed up with a
     * snapshot. In this case, the DB cluster is restored when there is a request to
     * connect to it.</p> 
     */
    inline bool GetAutoPause() const{ return m_autoPause; }
    inline bool AutoPauseHasBeenSet() const { return m_autoPauseHasBeenSet; }
    inline void SetAutoPause(bool value) { m_autoPauseHasBeenSet = true; m_autoPause = value; }
    inline ScalingConfiguration& WithAutoPause(bool value) { SetAutoPause(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds, before an Aurora DB cluster in <code>serverless</code>
     * mode is paused.</p> <p>Specify a value between 300 and 86,400 seconds.</p>
     */
    inline int GetSecondsUntilAutoPause() const{ return m_secondsUntilAutoPause; }
    inline bool SecondsUntilAutoPauseHasBeenSet() const { return m_secondsUntilAutoPauseHasBeenSet; }
    inline void SetSecondsUntilAutoPause(int value) { m_secondsUntilAutoPauseHasBeenSet = true; m_secondsUntilAutoPause = value; }
    inline ScalingConfiguration& WithSecondsUntilAutoPause(int value) { SetSecondsUntilAutoPause(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to take when the timeout is reached, either
     * <code>ForceApplyCapacityChange</code> or
     * <code>RollbackCapacityChange</code>.</p> <p>
     * <code>ForceApplyCapacityChange</code> sets the capacity to the specified value
     * as soon as possible.</p> <p> <code>RollbackCapacityChange</code>, the default,
     * ignores the capacity change if a scaling point isn't found in the timeout
     * period.</p>  <p>If you specify <code>ForceApplyCapacityChange</code>,
     * connections that prevent Aurora Serverless v1 from finding a scaling point might
     * be dropped.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.how-it-works.html#aurora-serverless.how-it-works.auto-scaling">
     * Autoscaling for Aurora Serverless v1</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetTimeoutAction() const{ return m_timeoutAction; }
    inline bool TimeoutActionHasBeenSet() const { return m_timeoutActionHasBeenSet; }
    inline void SetTimeoutAction(const Aws::String& value) { m_timeoutActionHasBeenSet = true; m_timeoutAction = value; }
    inline void SetTimeoutAction(Aws::String&& value) { m_timeoutActionHasBeenSet = true; m_timeoutAction = std::move(value); }
    inline void SetTimeoutAction(const char* value) { m_timeoutActionHasBeenSet = true; m_timeoutAction.assign(value); }
    inline ScalingConfiguration& WithTimeoutAction(const Aws::String& value) { SetTimeoutAction(value); return *this;}
    inline ScalingConfiguration& WithTimeoutAction(Aws::String&& value) { SetTimeoutAction(std::move(value)); return *this;}
    inline ScalingConfiguration& WithTimeoutAction(const char* value) { SetTimeoutAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in seconds, that Aurora Serverless v1 tries to find a
     * scaling point to perform seamless scaling before enforcing the timeout action.
     * The default is 300.</p> <p>Specify a value between 60 and 600 seconds.</p>
     */
    inline int GetSecondsBeforeTimeout() const{ return m_secondsBeforeTimeout; }
    inline bool SecondsBeforeTimeoutHasBeenSet() const { return m_secondsBeforeTimeoutHasBeenSet; }
    inline void SetSecondsBeforeTimeout(int value) { m_secondsBeforeTimeoutHasBeenSet = true; m_secondsBeforeTimeout = value; }
    inline ScalingConfiguration& WithSecondsBeforeTimeout(int value) { SetSecondsBeforeTimeout(value); return *this;}
    ///@}
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
