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
   * <p>Contains the details about a blue/green deployment.</p> <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/blue-green-deployments.html">Using
   * Amazon RDS Blue/Green Deployments for database updates</a> in the <i>Amazon RDS
   * User Guide</i> and <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/blue-green-deployments.html">
   * Using Amazon RDS Blue/Green Deployments for database updates</a> in the
   * <i>Amazon Aurora User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/SwitchoverDetail">AWS
   * API Reference</a></p>
   */
  class SwitchoverDetail
  {
  public:
    AWS_RDS_API SwitchoverDetail();
    AWS_RDS_API SwitchoverDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API SwitchoverDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) of a resource in the blue environment.</p>
     */
    inline const Aws::String& GetSourceMember() const{ return m_sourceMember; }

    /**
     * <p>The Amazon Resource Name (ARN) of a resource in the blue environment.</p>
     */
    inline bool SourceMemberHasBeenSet() const { return m_sourceMemberHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a resource in the blue environment.</p>
     */
    inline void SetSourceMember(const Aws::String& value) { m_sourceMemberHasBeenSet = true; m_sourceMember = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a resource in the blue environment.</p>
     */
    inline void SetSourceMember(Aws::String&& value) { m_sourceMemberHasBeenSet = true; m_sourceMember = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a resource in the blue environment.</p>
     */
    inline void SetSourceMember(const char* value) { m_sourceMemberHasBeenSet = true; m_sourceMember.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a resource in the blue environment.</p>
     */
    inline SwitchoverDetail& WithSourceMember(const Aws::String& value) { SetSourceMember(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a resource in the blue environment.</p>
     */
    inline SwitchoverDetail& WithSourceMember(Aws::String&& value) { SetSourceMember(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a resource in the blue environment.</p>
     */
    inline SwitchoverDetail& WithSourceMember(const char* value) { SetSourceMember(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a resource in the green environment.</p>
     */
    inline const Aws::String& GetTargetMember() const{ return m_targetMember; }

    /**
     * <p>The Amazon Resource Name (ARN) of a resource in the green environment.</p>
     */
    inline bool TargetMemberHasBeenSet() const { return m_targetMemberHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a resource in the green environment.</p>
     */
    inline void SetTargetMember(const Aws::String& value) { m_targetMemberHasBeenSet = true; m_targetMember = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a resource in the green environment.</p>
     */
    inline void SetTargetMember(Aws::String&& value) { m_targetMemberHasBeenSet = true; m_targetMember = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a resource in the green environment.</p>
     */
    inline void SetTargetMember(const char* value) { m_targetMemberHasBeenSet = true; m_targetMember.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a resource in the green environment.</p>
     */
    inline SwitchoverDetail& WithTargetMember(const Aws::String& value) { SetTargetMember(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a resource in the green environment.</p>
     */
    inline SwitchoverDetail& WithTargetMember(Aws::String&& value) { SetTargetMember(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a resource in the green environment.</p>
     */
    inline SwitchoverDetail& WithTargetMember(const char* value) { SetTargetMember(value); return *this;}


    /**
     * <p>The switchover status of a resource in a blue/green deployment.</p>
     * <p>Values:</p> <ul> <li> <p> <code>preparing-for-switchover</code> - The
     * resource is being prepared to switch over.</p> </li> <li> <p>
     * <code>ready-for-switchover</code> - The resource is ready to switch over.</p>
     * </li> <li> <p> <code>switchover-in-progress</code> - The resource is being
     * switched over.</p> </li> <li> <p> <code>switchover-completed</code> - The
     * resource has been switched over.</p> </li> <li> <p>
     * <code>switchover-failed</code> - The resource attempted to switch over but
     * failed.</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The switchover status of a resource in a blue/green deployment.</p>
     * <p>Values:</p> <ul> <li> <p> <code>preparing-for-switchover</code> - The
     * resource is being prepared to switch over.</p> </li> <li> <p>
     * <code>ready-for-switchover</code> - The resource is ready to switch over.</p>
     * </li> <li> <p> <code>switchover-in-progress</code> - The resource is being
     * switched over.</p> </li> <li> <p> <code>switchover-completed</code> - The
     * resource has been switched over.</p> </li> <li> <p>
     * <code>switchover-failed</code> - The resource attempted to switch over but
     * failed.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The switchover status of a resource in a blue/green deployment.</p>
     * <p>Values:</p> <ul> <li> <p> <code>preparing-for-switchover</code> - The
     * resource is being prepared to switch over.</p> </li> <li> <p>
     * <code>ready-for-switchover</code> - The resource is ready to switch over.</p>
     * </li> <li> <p> <code>switchover-in-progress</code> - The resource is being
     * switched over.</p> </li> <li> <p> <code>switchover-completed</code> - The
     * resource has been switched over.</p> </li> <li> <p>
     * <code>switchover-failed</code> - The resource attempted to switch over but
     * failed.</p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The switchover status of a resource in a blue/green deployment.</p>
     * <p>Values:</p> <ul> <li> <p> <code>preparing-for-switchover</code> - The
     * resource is being prepared to switch over.</p> </li> <li> <p>
     * <code>ready-for-switchover</code> - The resource is ready to switch over.</p>
     * </li> <li> <p> <code>switchover-in-progress</code> - The resource is being
     * switched over.</p> </li> <li> <p> <code>switchover-completed</code> - The
     * resource has been switched over.</p> </li> <li> <p>
     * <code>switchover-failed</code> - The resource attempted to switch over but
     * failed.</p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The switchover status of a resource in a blue/green deployment.</p>
     * <p>Values:</p> <ul> <li> <p> <code>preparing-for-switchover</code> - The
     * resource is being prepared to switch over.</p> </li> <li> <p>
     * <code>ready-for-switchover</code> - The resource is ready to switch over.</p>
     * </li> <li> <p> <code>switchover-in-progress</code> - The resource is being
     * switched over.</p> </li> <li> <p> <code>switchover-completed</code> - The
     * resource has been switched over.</p> </li> <li> <p>
     * <code>switchover-failed</code> - The resource attempted to switch over but
     * failed.</p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The switchover status of a resource in a blue/green deployment.</p>
     * <p>Values:</p> <ul> <li> <p> <code>preparing-for-switchover</code> - The
     * resource is being prepared to switch over.</p> </li> <li> <p>
     * <code>ready-for-switchover</code> - The resource is ready to switch over.</p>
     * </li> <li> <p> <code>switchover-in-progress</code> - The resource is being
     * switched over.</p> </li> <li> <p> <code>switchover-completed</code> - The
     * resource has been switched over.</p> </li> <li> <p>
     * <code>switchover-failed</code> - The resource attempted to switch over but
     * failed.</p> </li> </ul>
     */
    inline SwitchoverDetail& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The switchover status of a resource in a blue/green deployment.</p>
     * <p>Values:</p> <ul> <li> <p> <code>preparing-for-switchover</code> - The
     * resource is being prepared to switch over.</p> </li> <li> <p>
     * <code>ready-for-switchover</code> - The resource is ready to switch over.</p>
     * </li> <li> <p> <code>switchover-in-progress</code> - The resource is being
     * switched over.</p> </li> <li> <p> <code>switchover-completed</code> - The
     * resource has been switched over.</p> </li> <li> <p>
     * <code>switchover-failed</code> - The resource attempted to switch over but
     * failed.</p> </li> </ul>
     */
    inline SwitchoverDetail& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The switchover status of a resource in a blue/green deployment.</p>
     * <p>Values:</p> <ul> <li> <p> <code>preparing-for-switchover</code> - The
     * resource is being prepared to switch over.</p> </li> <li> <p>
     * <code>ready-for-switchover</code> - The resource is ready to switch over.</p>
     * </li> <li> <p> <code>switchover-in-progress</code> - The resource is being
     * switched over.</p> </li> <li> <p> <code>switchover-completed</code> - The
     * resource has been switched over.</p> </li> <li> <p>
     * <code>switchover-failed</code> - The resource attempted to switch over but
     * failed.</p> </li> </ul>
     */
    inline SwitchoverDetail& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_sourceMember;
    bool m_sourceMemberHasBeenSet = false;

    Aws::String m_targetMember;
    bool m_targetMemberHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
