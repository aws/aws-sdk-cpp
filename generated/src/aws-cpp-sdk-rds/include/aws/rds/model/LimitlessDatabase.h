/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/rds/model/LimitlessDatabaseStatus.h>
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
   * <p>Contains details for Aurora Limitless Database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/LimitlessDatabase">AWS
   * API Reference</a></p>
   */
  class LimitlessDatabase
  {
  public:
    AWS_RDS_API LimitlessDatabase() = default;
    AWS_RDS_API LimitlessDatabase(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API LimitlessDatabase& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The status of Aurora Limitless Database.</p>
     */
    inline LimitlessDatabaseStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(LimitlessDatabaseStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline LimitlessDatabase& WithStatus(LimitlessDatabaseStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum required capacity for Aurora Limitless Database in Aurora
     * capacity units (ACUs).</p>
     */
    inline double GetMinRequiredACU() const { return m_minRequiredACU; }
    inline bool MinRequiredACUHasBeenSet() const { return m_minRequiredACUHasBeenSet; }
    inline void SetMinRequiredACU(double value) { m_minRequiredACUHasBeenSet = true; m_minRequiredACU = value; }
    inline LimitlessDatabase& WithMinRequiredACU(double value) { SetMinRequiredACU(value); return *this;}
    ///@}
  private:

    LimitlessDatabaseStatus m_status{LimitlessDatabaseStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    double m_minRequiredACU{0.0};
    bool m_minRequiredACUHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
