/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>An Identity and Access Management (IAM) role that can be used by the
   * associated Amazon Redshift cluster to access other Amazon Web Services
   * services.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ClusterIamRole">AWS
   * API Reference</a></p>
   */
  class ClusterIamRole
  {
  public:
    AWS_REDSHIFT_API ClusterIamRole() = default;
    AWS_REDSHIFT_API ClusterIamRole(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ClusterIamRole& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role, for example,
     * <code>arn:aws:iam::123456789012:role/RedshiftCopyUnload</code>. </p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    ClusterIamRole& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that describes the status of the IAM role's association with an
     * Amazon Redshift cluster.</p> <p>The following are possible statuses and
     * descriptions.</p> <ul> <li> <p> <code>in-sync</code>: The role is available for
     * use by the cluster.</p> </li> <li> <p> <code>adding</code>: The role is in the
     * process of being associated with the cluster.</p> </li> <li> <p>
     * <code>removing</code>: The role is in the process of being disassociated with
     * the cluster.</p> </li> </ul>
     */
    inline const Aws::String& GetApplyStatus() const { return m_applyStatus; }
    inline bool ApplyStatusHasBeenSet() const { return m_applyStatusHasBeenSet; }
    template<typename ApplyStatusT = Aws::String>
    void SetApplyStatus(ApplyStatusT&& value) { m_applyStatusHasBeenSet = true; m_applyStatus = std::forward<ApplyStatusT>(value); }
    template<typename ApplyStatusT = Aws::String>
    ClusterIamRole& WithApplyStatus(ApplyStatusT&& value) { SetApplyStatus(std::forward<ApplyStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::String m_applyStatus;
    bool m_applyStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
