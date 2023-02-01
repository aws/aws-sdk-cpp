/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Earliest and latest time an instance can be restored to:</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreWindow">AWS
   * API Reference</a></p>
   */
  class RestoreWindow
  {
  public:
    AWS_RDS_API RestoreWindow();
    AWS_RDS_API RestoreWindow(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API RestoreWindow& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The earliest time you can restore an instance to.</p>
     */
    inline const Aws::Utils::DateTime& GetEarliestTime() const{ return m_earliestTime; }

    /**
     * <p>The earliest time you can restore an instance to.</p>
     */
    inline bool EarliestTimeHasBeenSet() const { return m_earliestTimeHasBeenSet; }

    /**
     * <p>The earliest time you can restore an instance to.</p>
     */
    inline void SetEarliestTime(const Aws::Utils::DateTime& value) { m_earliestTimeHasBeenSet = true; m_earliestTime = value; }

    /**
     * <p>The earliest time you can restore an instance to.</p>
     */
    inline void SetEarliestTime(Aws::Utils::DateTime&& value) { m_earliestTimeHasBeenSet = true; m_earliestTime = std::move(value); }

    /**
     * <p>The earliest time you can restore an instance to.</p>
     */
    inline RestoreWindow& WithEarliestTime(const Aws::Utils::DateTime& value) { SetEarliestTime(value); return *this;}

    /**
     * <p>The earliest time you can restore an instance to.</p>
     */
    inline RestoreWindow& WithEarliestTime(Aws::Utils::DateTime&& value) { SetEarliestTime(std::move(value)); return *this;}


    /**
     * <p>The latest time you can restore an instance to.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestTime() const{ return m_latestTime; }

    /**
     * <p>The latest time you can restore an instance to.</p>
     */
    inline bool LatestTimeHasBeenSet() const { return m_latestTimeHasBeenSet; }

    /**
     * <p>The latest time you can restore an instance to.</p>
     */
    inline void SetLatestTime(const Aws::Utils::DateTime& value) { m_latestTimeHasBeenSet = true; m_latestTime = value; }

    /**
     * <p>The latest time you can restore an instance to.</p>
     */
    inline void SetLatestTime(Aws::Utils::DateTime&& value) { m_latestTimeHasBeenSet = true; m_latestTime = std::move(value); }

    /**
     * <p>The latest time you can restore an instance to.</p>
     */
    inline RestoreWindow& WithLatestTime(const Aws::Utils::DateTime& value) { SetLatestTime(value); return *this;}

    /**
     * <p>The latest time you can restore an instance to.</p>
     */
    inline RestoreWindow& WithLatestTime(Aws::Utils::DateTime&& value) { SetLatestTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_earliestTime;
    bool m_earliestTimeHasBeenSet = false;

    Aws::Utils::DateTime m_latestTime;
    bool m_latestTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
