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
   * <p>The scaling configuration for an Aurora DB cluster in <code>serverless</code>
   * DB engine mode.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.html">Using
   * Amazon Aurora Serverless v1</a> in the <i>Amazon Aurora User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ScalingConfigurationInfo">AWS
   * API Reference</a></p>
   */
  class ScalingConfigurationInfo
  {
  public:
    AWS_RDS_API ScalingConfigurationInfo() = default;
    AWS_RDS_API ScalingConfigurationInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API ScalingConfigurationInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The minimum capacity for an Aurora DB cluster in <code>serverless</code> DB
     * engine mode.</p>
     */
    inline int GetMinCapacity() const { return m_minCapacity; }
    inline bool MinCapacityHasBeenSet() const { return m_minCapacityHasBeenSet; }
    inline void SetMinCapacity(int value) { m_minCapacityHasBeenSet = true; m_minCapacity = value; }
    inline ScalingConfigurationInfo& WithMinCapacity(int value) { SetMinCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum capacity for an Aurora DB cluster in <code>serverless</code> DB
     * engine mode.</p>
     */
    inline int GetMaxCapacity() const { return m_maxCapacity; }
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }
    inline void SetMaxCapacity(int value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }
    inline ScalingConfigurationInfo& WithMaxCapacity(int value) { SetMaxCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether automatic pause is allowed for the Aurora DB cluster in
     * <code>serverless</code> DB engine mode.</p> <p>When the value is set to false
     * for an Aurora Serverless v1 DB cluster, the DB cluster automatically
     * resumes.</p>
     */
    inline bool GetAutoPause() const { return m_autoPause; }
    inline bool AutoPauseHasBeenSet() const { return m_autoPauseHasBeenSet; }
    inline void SetAutoPause(bool value) { m_autoPauseHasBeenSet = true; m_autoPause = value; }
    inline ScalingConfigurationInfo& WithAutoPause(bool value) { SetAutoPause(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The remaining amount of time, in seconds, before the Aurora DB cluster in
     * <code>serverless</code> mode is paused. A DB cluster can be paused only when
     * it's idle (it has no connections).</p>
     */
    inline int GetSecondsUntilAutoPause() const { return m_secondsUntilAutoPause; }
    inline bool SecondsUntilAutoPauseHasBeenSet() const { return m_secondsUntilAutoPauseHasBeenSet; }
    inline void SetSecondsUntilAutoPause(int value) { m_secondsUntilAutoPauseHasBeenSet = true; m_secondsUntilAutoPause = value; }
    inline ScalingConfigurationInfo& WithSecondsUntilAutoPause(int value) { SetSecondsUntilAutoPause(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetTimeoutAction() const { return m_timeoutAction; }
    inline bool TimeoutActionHasBeenSet() const { return m_timeoutActionHasBeenSet; }
    template<typename TimeoutActionT = Aws::String>
    void SetTimeoutAction(TimeoutActionT&& value) { m_timeoutActionHasBeenSet = true; m_timeoutAction = std::forward<TimeoutActionT>(value); }
    template<typename TimeoutActionT = Aws::String>
    ScalingConfigurationInfo& WithTimeoutAction(TimeoutActionT&& value) { SetTimeoutAction(std::forward<TimeoutActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds before scaling times out. What happens when an
     * attempted scaling action times out is determined by the
     * <code>TimeoutAction</code> setting.</p>
     */
    inline int GetSecondsBeforeTimeout() const { return m_secondsBeforeTimeout; }
    inline bool SecondsBeforeTimeoutHasBeenSet() const { return m_secondsBeforeTimeoutHasBeenSet; }
    inline void SetSecondsBeforeTimeout(int value) { m_secondsBeforeTimeoutHasBeenSet = true; m_secondsBeforeTimeout = value; }
    inline ScalingConfigurationInfo& WithSecondsBeforeTimeout(int value) { SetSecondsBeforeTimeout(value); return *this;}
    ///@}
  private:

    int m_minCapacity{0};
    bool m_minCapacityHasBeenSet = false;

    int m_maxCapacity{0};
    bool m_maxCapacityHasBeenSet = false;

    bool m_autoPause{false};
    bool m_autoPauseHasBeenSet = false;

    int m_secondsUntilAutoPause{0};
    bool m_secondsUntilAutoPauseHasBeenSet = false;

    Aws::String m_timeoutAction;
    bool m_timeoutActionHasBeenSet = false;

    int m_secondsBeforeTimeout{0};
    bool m_secondsBeforeTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
