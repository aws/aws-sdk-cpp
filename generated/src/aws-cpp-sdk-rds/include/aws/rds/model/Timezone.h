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
   * <p>A time zone associated with a <code>DBInstance</code> or a
   * <code>DBSnapshot</code>. This data type is an element in the response to the
   * <code>DescribeDBInstances</code>, the <code>DescribeDBSnapshots</code>, and the
   * <code>DescribeDBEngineVersions</code> actions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/Timezone">AWS API
   * Reference</a></p>
   */
  class Timezone
  {
  public:
    AWS_RDS_API Timezone();
    AWS_RDS_API Timezone(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API Timezone& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the time zone.</p>
     */
    inline const Aws::String& GetTimezoneName() const{ return m_timezoneName; }

    /**
     * <p>The name of the time zone.</p>
     */
    inline bool TimezoneNameHasBeenSet() const { return m_timezoneNameHasBeenSet; }

    /**
     * <p>The name of the time zone.</p>
     */
    inline void SetTimezoneName(const Aws::String& value) { m_timezoneNameHasBeenSet = true; m_timezoneName = value; }

    /**
     * <p>The name of the time zone.</p>
     */
    inline void SetTimezoneName(Aws::String&& value) { m_timezoneNameHasBeenSet = true; m_timezoneName = std::move(value); }

    /**
     * <p>The name of the time zone.</p>
     */
    inline void SetTimezoneName(const char* value) { m_timezoneNameHasBeenSet = true; m_timezoneName.assign(value); }

    /**
     * <p>The name of the time zone.</p>
     */
    inline Timezone& WithTimezoneName(const Aws::String& value) { SetTimezoneName(value); return *this;}

    /**
     * <p>The name of the time zone.</p>
     */
    inline Timezone& WithTimezoneName(Aws::String&& value) { SetTimezoneName(std::move(value)); return *this;}

    /**
     * <p>The name of the time zone.</p>
     */
    inline Timezone& WithTimezoneName(const char* value) { SetTimezoneName(value); return *this;}

  private:

    Aws::String m_timezoneName;
    bool m_timezoneNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
