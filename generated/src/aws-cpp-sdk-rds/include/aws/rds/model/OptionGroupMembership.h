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
   * <p>Provides information on the option groups the DB instance is a member
   * of.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/OptionGroupMembership">AWS
   * API Reference</a></p>
   */
  class OptionGroupMembership
  {
  public:
    AWS_RDS_API OptionGroupMembership();
    AWS_RDS_API OptionGroupMembership(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API OptionGroupMembership& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the option group that the instance belongs to.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>The name of the option group that the instance belongs to.</p>
     */
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }

    /**
     * <p>The name of the option group that the instance belongs to.</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>The name of the option group that the instance belongs to.</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p>The name of the option group that the instance belongs to.</p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>The name of the option group that the instance belongs to.</p>
     */
    inline OptionGroupMembership& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>The name of the option group that the instance belongs to.</p>
     */
    inline OptionGroupMembership& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the option group that the instance belongs to.</p>
     */
    inline OptionGroupMembership& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}


    /**
     * <p>The status of the DB instance's option group membership. Valid values are:
     * <code>in-sync</code>, <code>pending-apply</code>, <code>pending-removal</code>,
     * <code>pending-maintenance-apply</code>,
     * <code>pending-maintenance-removal</code>, <code>applying</code>,
     * <code>removing</code>, and <code>failed</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the DB instance's option group membership. Valid values are:
     * <code>in-sync</code>, <code>pending-apply</code>, <code>pending-removal</code>,
     * <code>pending-maintenance-apply</code>,
     * <code>pending-maintenance-removal</code>, <code>applying</code>,
     * <code>removing</code>, and <code>failed</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the DB instance's option group membership. Valid values are:
     * <code>in-sync</code>, <code>pending-apply</code>, <code>pending-removal</code>,
     * <code>pending-maintenance-apply</code>,
     * <code>pending-maintenance-removal</code>, <code>applying</code>,
     * <code>removing</code>, and <code>failed</code>.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the DB instance's option group membership. Valid values are:
     * <code>in-sync</code>, <code>pending-apply</code>, <code>pending-removal</code>,
     * <code>pending-maintenance-apply</code>,
     * <code>pending-maintenance-removal</code>, <code>applying</code>,
     * <code>removing</code>, and <code>failed</code>.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the DB instance's option group membership. Valid values are:
     * <code>in-sync</code>, <code>pending-apply</code>, <code>pending-removal</code>,
     * <code>pending-maintenance-apply</code>,
     * <code>pending-maintenance-removal</code>, <code>applying</code>,
     * <code>removing</code>, and <code>failed</code>.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the DB instance's option group membership. Valid values are:
     * <code>in-sync</code>, <code>pending-apply</code>, <code>pending-removal</code>,
     * <code>pending-maintenance-apply</code>,
     * <code>pending-maintenance-removal</code>, <code>applying</code>,
     * <code>removing</code>, and <code>failed</code>.</p>
     */
    inline OptionGroupMembership& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the DB instance's option group membership. Valid values are:
     * <code>in-sync</code>, <code>pending-apply</code>, <code>pending-removal</code>,
     * <code>pending-maintenance-apply</code>,
     * <code>pending-maintenance-removal</code>, <code>applying</code>,
     * <code>removing</code>, and <code>failed</code>.</p>
     */
    inline OptionGroupMembership& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the DB instance's option group membership. Valid values are:
     * <code>in-sync</code>, <code>pending-apply</code>, <code>pending-removal</code>,
     * <code>pending-maintenance-apply</code>,
     * <code>pending-maintenance-removal</code>, <code>applying</code>,
     * <code>removing</code>, and <code>failed</code>.</p>
     */
    inline OptionGroupMembership& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
