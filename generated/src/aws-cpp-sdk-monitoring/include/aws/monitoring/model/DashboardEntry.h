/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>Represents a specific dashboard.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DashboardEntry">AWS
   * API Reference</a></p>
   */
  class DashboardEntry
  {
  public:
    AWS_CLOUDWATCH_API DashboardEntry();
    AWS_CLOUDWATCH_API DashboardEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API DashboardEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the dashboard.</p>
     */
    inline const Aws::String& GetDashboardName() const{ return m_dashboardName; }
    inline bool DashboardNameHasBeenSet() const { return m_dashboardNameHasBeenSet; }
    inline void SetDashboardName(const Aws::String& value) { m_dashboardNameHasBeenSet = true; m_dashboardName = value; }
    inline void SetDashboardName(Aws::String&& value) { m_dashboardNameHasBeenSet = true; m_dashboardName = std::move(value); }
    inline void SetDashboardName(const char* value) { m_dashboardNameHasBeenSet = true; m_dashboardName.assign(value); }
    inline DashboardEntry& WithDashboardName(const Aws::String& value) { SetDashboardName(value); return *this;}
    inline DashboardEntry& WithDashboardName(Aws::String&& value) { SetDashboardName(std::move(value)); return *this;}
    inline DashboardEntry& WithDashboardName(const char* value) { SetDashboardName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dashboard.</p>
     */
    inline const Aws::String& GetDashboardArn() const{ return m_dashboardArn; }
    inline bool DashboardArnHasBeenSet() const { return m_dashboardArnHasBeenSet; }
    inline void SetDashboardArn(const Aws::String& value) { m_dashboardArnHasBeenSet = true; m_dashboardArn = value; }
    inline void SetDashboardArn(Aws::String&& value) { m_dashboardArnHasBeenSet = true; m_dashboardArn = std::move(value); }
    inline void SetDashboardArn(const char* value) { m_dashboardArnHasBeenSet = true; m_dashboardArn.assign(value); }
    inline DashboardEntry& WithDashboardArn(const Aws::String& value) { SetDashboardArn(value); return *this;}
    inline DashboardEntry& WithDashboardArn(Aws::String&& value) { SetDashboardArn(std::move(value)); return *this;}
    inline DashboardEntry& WithDashboardArn(const char* value) { SetDashboardArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp of when the dashboard was last modified, either by an API call
     * or through the console. This number is expressed as the number of milliseconds
     * since Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }
    inline DashboardEntry& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}
    inline DashboardEntry& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the dashboard, in bytes.</p>
     */
    inline long long GetSize() const{ return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }
    inline DashboardEntry& WithSize(long long value) { SetSize(value); return *this;}
    ///@}
  private:

    Aws::String m_dashboardName;
    bool m_dashboardNameHasBeenSet = false;

    Aws::String m_dashboardArn;
    bool m_dashboardArnHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified;
    bool m_lastModifiedHasBeenSet = false;

    long long m_size;
    bool m_sizeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
