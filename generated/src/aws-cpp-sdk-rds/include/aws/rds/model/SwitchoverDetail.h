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
    AWS_RDS_API SwitchoverDetail() = default;
    AWS_RDS_API SwitchoverDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API SwitchoverDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a resource in the blue environment.</p>
     */
    inline const Aws::String& GetSourceMember() const { return m_sourceMember; }
    inline bool SourceMemberHasBeenSet() const { return m_sourceMemberHasBeenSet; }
    template<typename SourceMemberT = Aws::String>
    void SetSourceMember(SourceMemberT&& value) { m_sourceMemberHasBeenSet = true; m_sourceMember = std::forward<SourceMemberT>(value); }
    template<typename SourceMemberT = Aws::String>
    SwitchoverDetail& WithSourceMember(SourceMemberT&& value) { SetSourceMember(std::forward<SourceMemberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a resource in the green environment.</p>
     */
    inline const Aws::String& GetTargetMember() const { return m_targetMember; }
    inline bool TargetMemberHasBeenSet() const { return m_targetMemberHasBeenSet; }
    template<typename TargetMemberT = Aws::String>
    void SetTargetMember(TargetMemberT&& value) { m_targetMemberHasBeenSet = true; m_targetMember = std::forward<TargetMemberT>(value); }
    template<typename TargetMemberT = Aws::String>
    SwitchoverDetail& WithTargetMember(TargetMemberT&& value) { SetTargetMember(std::forward<TargetMemberT>(value)); return *this;}
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
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    SwitchoverDetail& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
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
