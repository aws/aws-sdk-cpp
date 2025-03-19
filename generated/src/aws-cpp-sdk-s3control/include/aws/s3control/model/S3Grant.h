/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/S3Grantee.h>
#include <aws/s3control/model/S3Permission.h>
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
namespace S3Control
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3Grant">AWS
   * API Reference</a></p>
   */
  class S3Grant
  {
  public:
    AWS_S3CONTROL_API S3Grant() = default;
    AWS_S3CONTROL_API S3Grant(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API S3Grant& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p/>
     */
    inline const S3Grantee& GetGrantee() const { return m_grantee; }
    inline bool GranteeHasBeenSet() const { return m_granteeHasBeenSet; }
    template<typename GranteeT = S3Grantee>
    void SetGrantee(GranteeT&& value) { m_granteeHasBeenSet = true; m_grantee = std::forward<GranteeT>(value); }
    template<typename GranteeT = S3Grantee>
    S3Grant& WithGrantee(GranteeT&& value) { SetGrantee(std::forward<GranteeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline S3Permission GetPermission() const { return m_permission; }
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }
    inline void SetPermission(S3Permission value) { m_permissionHasBeenSet = true; m_permission = value; }
    inline S3Grant& WithPermission(S3Permission value) { SetPermission(value); return *this;}
    ///@}
  private:

    S3Grantee m_grantee;
    bool m_granteeHasBeenSet = false;

    S3Permission m_permission{S3Permission::NOT_SET};
    bool m_permissionHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
