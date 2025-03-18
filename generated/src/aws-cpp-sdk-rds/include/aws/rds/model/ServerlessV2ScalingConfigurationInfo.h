﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

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
   * <p>The scaling configuration for an Aurora Serverless v2 DB cluster.</p> <p>For
   * more information, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless-v2.html">Using
   * Amazon Aurora Serverless v2</a> in the <i>Amazon Aurora User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ServerlessV2ScalingConfigurationInfo">AWS
   * API Reference</a></p>
   */
  class ServerlessV2ScalingConfigurationInfo
  {
  public:
    AWS_RDS_API ServerlessV2ScalingConfigurationInfo() = default;
    AWS_RDS_API ServerlessV2ScalingConfigurationInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API ServerlessV2ScalingConfigurationInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The minimum number of Aurora capacity units (ACUs) for a DB instance in an
     * Aurora Serverless v2 cluster. You can specify ACU values in half-step
     * increments, such as 8, 8.5, 9, and so on. For Aurora versions that support the
     * Aurora Serverless v2 auto-pause feature, the smallest value that you can use is
     * 0. For versions that don't support Aurora Serverless v2 auto-pause, the smallest
     * value that you can use is 0.5. </p>
     */
    inline double GetMinCapacity() const { return m_minCapacity; }
    inline bool MinCapacityHasBeenSet() const { return m_minCapacityHasBeenSet; }
    inline void SetMinCapacity(double value) { m_minCapacityHasBeenSet = true; m_minCapacity = value; }
    inline ServerlessV2ScalingConfigurationInfo& WithMinCapacity(double value) { SetMinCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of Aurora capacity units (ACUs) for a DB instance in an
     * Aurora Serverless v2 cluster. You can specify ACU values in half-step
     * increments, such as 32, 32.5, 33, and so on. The largest value that you can use
     * is 256 for recent Aurora versions, or 128 for older versions.</p>
     */
    inline double GetMaxCapacity() const { return m_maxCapacity; }
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }
    inline void SetMaxCapacity(double value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }
    inline ServerlessV2ScalingConfigurationInfo& WithMaxCapacity(double value) { SetMaxCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of seconds an Aurora Serverless v2 DB instance must be idle
     * before Aurora attempts to automatically pause it. This property is only shown
     * when the minimum capacity for the cluster is set to 0 ACUs. Changing the minimum
     * capacity to a nonzero value removes this property. If you later change the
     * minimum capacity back to 0 ACUs, this property is reset to its default value
     * unless you specify it again. </p> <p>This value ranges between 300 seconds (five
     * minutes) and 86,400 seconds (one day). The default is 300 seconds.</p>
     */
    inline int GetSecondsUntilAutoPause() const { return m_secondsUntilAutoPause; }
    inline bool SecondsUntilAutoPauseHasBeenSet() const { return m_secondsUntilAutoPauseHasBeenSet; }
    inline void SetSecondsUntilAutoPause(int value) { m_secondsUntilAutoPauseHasBeenSet = true; m_secondsUntilAutoPause = value; }
    inline ServerlessV2ScalingConfigurationInfo& WithSecondsUntilAutoPause(int value) { SetSecondsUntilAutoPause(value); return *this;}
    ///@}
  private:

    double m_minCapacity{0.0};
    bool m_minCapacityHasBeenSet = false;

    double m_maxCapacity{0.0};
    bool m_maxCapacityHasBeenSet = false;

    int m_secondsUntilAutoPause{0};
    bool m_secondsUntilAutoPauseHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
