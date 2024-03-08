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
    AWS_RDS_API LimitlessDatabase();
    AWS_RDS_API LimitlessDatabase(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API LimitlessDatabase& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The status of Aurora Limitless Database.</p>
     */
    inline const LimitlessDatabaseStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of Aurora Limitless Database.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of Aurora Limitless Database.</p>
     */
    inline void SetStatus(const LimitlessDatabaseStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of Aurora Limitless Database.</p>
     */
    inline void SetStatus(LimitlessDatabaseStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of Aurora Limitless Database.</p>
     */
    inline LimitlessDatabase& WithStatus(const LimitlessDatabaseStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of Aurora Limitless Database.</p>
     */
    inline LimitlessDatabase& WithStatus(LimitlessDatabaseStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The minimum required capacity for Aurora Limitless Database in Aurora
     * capacity units (ACUs).</p>
     */
    inline double GetMinRequiredACU() const{ return m_minRequiredACU; }

    /**
     * <p>The minimum required capacity for Aurora Limitless Database in Aurora
     * capacity units (ACUs).</p>
     */
    inline bool MinRequiredACUHasBeenSet() const { return m_minRequiredACUHasBeenSet; }

    /**
     * <p>The minimum required capacity for Aurora Limitless Database in Aurora
     * capacity units (ACUs).</p>
     */
    inline void SetMinRequiredACU(double value) { m_minRequiredACUHasBeenSet = true; m_minRequiredACU = value; }

    /**
     * <p>The minimum required capacity for Aurora Limitless Database in Aurora
     * capacity units (ACUs).</p>
     */
    inline LimitlessDatabase& WithMinRequiredACU(double value) { SetMinRequiredACU(value); return *this;}

  private:

    LimitlessDatabaseStatus m_status;
    bool m_statusHasBeenSet = false;

    double m_minRequiredACU;
    bool m_minRequiredACUHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
