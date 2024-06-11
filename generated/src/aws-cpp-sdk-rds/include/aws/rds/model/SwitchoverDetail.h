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
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/blue-green-deployments.html">Using
   * Amazon RDS Blue/Green Deployments for database updates</a> in the <i>Amazon
   * Aurora User Guide</i>.</p><p><h3>See Also:</h3>   <a
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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a resource in the blue environment.</p>
     */
    inline const Aws::String& GetSourceMember() const{ return m_sourceMember; }
    inline bool SourceMemberHasBeenSet() const { return m_sourceMemberHasBeenSet; }
    inline void SetSourceMember(const Aws::String& value) { m_sourceMemberHasBeenSet = true; m_sourceMember = value; }
    inline void SetSourceMember(Aws::String&& value) { m_sourceMemberHasBeenSet = true; m_sourceMember = std::move(value); }
    inline void SetSourceMember(const char* value) { m_sourceMemberHasBeenSet = true; m_sourceMember.assign(value); }
    inline SwitchoverDetail& WithSourceMember(const Aws::String& value) { SetSourceMember(value); return *this;}
    inline SwitchoverDetail& WithSourceMember(Aws::String&& value) { SetSourceMember(std::move(value)); return *this;}
    inline SwitchoverDetail& WithSourceMember(const char* value) { SetSourceMember(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a resource in the green environment.</p>
     */
    inline const Aws::String& GetTargetMember() const{ return m_targetMember; }
    inline bool TargetMemberHasBeenSet() const { return m_targetMemberHasBeenSet; }
    inline void SetTargetMember(const Aws::String& value) { m_targetMemberHasBeenSet = true; m_targetMember = value; }
    inline void SetTargetMember(Aws::String&& value) { m_targetMemberHasBeenSet = true; m_targetMember = std::move(value); }
    inline void SetTargetMember(const char* value) { m_targetMemberHasBeenSet = true; m_targetMember.assign(value); }
    inline SwitchoverDetail& WithTargetMember(const Aws::String& value) { SetTargetMember(value); return *this;}
    inline SwitchoverDetail& WithTargetMember(Aws::String&& value) { SetTargetMember(std::move(value)); return *this;}
    inline SwitchoverDetail& WithTargetMember(const char* value) { SetTargetMember(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The switchover status of a resource in a blue/green deployment.</p>
     * <p>Values:</p> <ul> <li> <p> <code>PROVISIONING</code> - The resource is being
     * prepared to switch over.</p> </li> <li> <p> <code>AVAILABLE</code> - The
     * resource is ready to switch over.</p> </li> <li> <p>
     * <code>SWITCHOVER_IN_PROGRESS</code> - The resource is being switched over.</p>
     * </li> <li> <p> <code>SWITCHOVER_COMPLETED</code> - The resource has been
     * switched over.</p> </li> <li> <p> <code>SWITCHOVER_FAILED</code> - The resource
     * attempted to switch over but failed.</p> </li> <li> <p>
     * <code>MISSING_SOURCE</code> - The source resource has been deleted.</p> </li>
     * <li> <p> <code>MISSING_TARGET</code> - The target resource has been deleted.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline SwitchoverDetail& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline SwitchoverDetail& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline SwitchoverDetail& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}
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
