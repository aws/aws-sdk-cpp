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
   * <p>Specifies any Aurora Serverless v2 properties or limits that differ between
   * Aurora engine versions and platform versions. You can test the values of this
   * attribute when deciding which Aurora version to use in a new or upgraded DB
   * cluster. You can also retrieve the version of an existing DB cluster and check
   * whether that version supports certain Aurora Serverless v2 features before you
   * attempt to use those features. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ServerlessV2FeaturesSupport">AWS
   * API Reference</a></p>
   */
  class ServerlessV2FeaturesSupport
  {
  public:
    AWS_RDS_API ServerlessV2FeaturesSupport() = default;
    AWS_RDS_API ServerlessV2FeaturesSupport(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API ServerlessV2FeaturesSupport& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>If the minimum capacity is 0 ACUs, the engine version or platform version
     * supports the automatic pause/resume feature of Aurora Serverless v2.</p>
     */
    inline double GetMinCapacity() const { return m_minCapacity; }
    inline bool MinCapacityHasBeenSet() const { return m_minCapacityHasBeenSet; }
    inline void SetMinCapacity(double value) { m_minCapacityHasBeenSet = true; m_minCapacity = value; }
    inline ServerlessV2FeaturesSupport& WithMinCapacity(double value) { SetMinCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the upper Aurora Serverless v2 capacity limit for a particular
     * engine version or platform version. Depending on the engine version, the maximum
     * capacity for an Aurora Serverless v2 cluster might be <code>256</code> or
     * <code>128</code>. </p>
     */
    inline double GetMaxCapacity() const { return m_maxCapacity; }
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }
    inline void SetMaxCapacity(double value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }
    inline ServerlessV2FeaturesSupport& WithMaxCapacity(double value) { SetMaxCapacity(value); return *this;}
    ///@}
  private:

    double m_minCapacity{0.0};
    bool m_minCapacityHasBeenSet = false;

    double m_maxCapacity{0.0};
    bool m_maxCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
