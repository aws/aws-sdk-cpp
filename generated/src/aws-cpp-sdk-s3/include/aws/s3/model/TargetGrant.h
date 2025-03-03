/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/Grantee.h>
#include <aws/s3/model/BucketLogsPermission.h>
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
namespace S3
{
namespace Model
{

  /**
   * <p>Container for granting information.</p> <p>Buckets that use the bucket owner
   * enforced setting for Object Ownership don't support target grants. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/enable-server-access-logging.html#grant-log-delivery-permissions-general">Permissions
   * server access log delivery</a> in the <i>Amazon S3 User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/TargetGrant">AWS API
   * Reference</a></p>
   */
  class TargetGrant
  {
  public:
    AWS_S3_API TargetGrant() = default;
    AWS_S3_API TargetGrant(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API TargetGrant& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Container for the person being granted permissions.</p>
     */
    inline const Grantee& GetGrantee() const { return m_grantee; }
    inline bool GranteeHasBeenSet() const { return m_granteeHasBeenSet; }
    template<typename GranteeT = Grantee>
    void SetGrantee(GranteeT&& value) { m_granteeHasBeenSet = true; m_grantee = std::forward<GranteeT>(value); }
    template<typename GranteeT = Grantee>
    TargetGrant& WithGrantee(GranteeT&& value) { SetGrantee(std::forward<GranteeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Logging permissions assigned to the grantee for the bucket.</p>
     */
    inline BucketLogsPermission GetPermission() const { return m_permission; }
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }
    inline void SetPermission(BucketLogsPermission value) { m_permissionHasBeenSet = true; m_permission = value; }
    inline TargetGrant& WithPermission(BucketLogsPermission value) { SetPermission(value); return *this;}
    ///@}
  private:

    Grantee m_grantee;
    bool m_granteeHasBeenSet = false;

    BucketLogsPermission m_permission{BucketLogsPermission::NOT_SET};
    bool m_permissionHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
