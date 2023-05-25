/**
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
   * <p>Shows the scaling configuration for an Aurora Serverless v2 DB cluster.</p>
   * <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless-v2.html">Using
   * Amazon Aurora Serverless v2</a> in the <i>Amazon Aurora User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ServerlessV2ScalingConfigurationInfo">AWS
   * API Reference</a></p>
   */
  class ServerlessV2ScalingConfigurationInfo
  {
  public:
    AWS_RDS_API ServerlessV2ScalingConfigurationInfo();
    AWS_RDS_API ServerlessV2ScalingConfigurationInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API ServerlessV2ScalingConfigurationInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The minimum number of Aurora capacity units (ACUs) for a DB instance in an
     * Aurora Serverless v2 cluster. You can specify ACU values in half-step
     * increments, such as 8, 8.5, 9, and so on. The smallest value that you can use is
     * 0.5.</p>
     */
    inline double GetMinCapacity() const{ return m_minCapacity; }

    /**
     * <p>The minimum number of Aurora capacity units (ACUs) for a DB instance in an
     * Aurora Serverless v2 cluster. You can specify ACU values in half-step
     * increments, such as 8, 8.5, 9, and so on. The smallest value that you can use is
     * 0.5.</p>
     */
    inline bool MinCapacityHasBeenSet() const { return m_minCapacityHasBeenSet; }

    /**
     * <p>The minimum number of Aurora capacity units (ACUs) for a DB instance in an
     * Aurora Serverless v2 cluster. You can specify ACU values in half-step
     * increments, such as 8, 8.5, 9, and so on. The smallest value that you can use is
     * 0.5.</p>
     */
    inline void SetMinCapacity(double value) { m_minCapacityHasBeenSet = true; m_minCapacity = value; }

    /**
     * <p>The minimum number of Aurora capacity units (ACUs) for a DB instance in an
     * Aurora Serverless v2 cluster. You can specify ACU values in half-step
     * increments, such as 8, 8.5, 9, and so on. The smallest value that you can use is
     * 0.5.</p>
     */
    inline ServerlessV2ScalingConfigurationInfo& WithMinCapacity(double value) { SetMinCapacity(value); return *this;}


    /**
     * <p>The maximum number of Aurora capacity units (ACUs) for a DB instance in an
     * Aurora Serverless v2 cluster. You can specify ACU values in half-step
     * increments, such as 40, 40.5, 41, and so on. The largest value that you can use
     * is 128.</p>
     */
    inline double GetMaxCapacity() const{ return m_maxCapacity; }

    /**
     * <p>The maximum number of Aurora capacity units (ACUs) for a DB instance in an
     * Aurora Serverless v2 cluster. You can specify ACU values in half-step
     * increments, such as 40, 40.5, 41, and so on. The largest value that you can use
     * is 128.</p>
     */
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }

    /**
     * <p>The maximum number of Aurora capacity units (ACUs) for a DB instance in an
     * Aurora Serverless v2 cluster. You can specify ACU values in half-step
     * increments, such as 40, 40.5, 41, and so on. The largest value that you can use
     * is 128.</p>
     */
    inline void SetMaxCapacity(double value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }

    /**
     * <p>The maximum number of Aurora capacity units (ACUs) for a DB instance in an
     * Aurora Serverless v2 cluster. You can specify ACU values in half-step
     * increments, such as 40, 40.5, 41, and so on. The largest value that you can use
     * is 128.</p>
     */
    inline ServerlessV2ScalingConfigurationInfo& WithMaxCapacity(double value) { SetMaxCapacity(value); return *this;}

  private:

    double m_minCapacity;
    bool m_minCapacityHasBeenSet = false;

    double m_maxCapacity;
    bool m_maxCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
