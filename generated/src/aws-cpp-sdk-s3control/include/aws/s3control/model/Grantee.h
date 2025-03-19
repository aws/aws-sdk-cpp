/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/GranteeType.h>
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
namespace S3Control
{
namespace Model
{

  /**
   * <p>The user, group, or role to which you are granting access. You can grant
   * access to an IAM user or role. If you have added your corporate directory to
   * Amazon Web Services IAM Identity Center and associated your Identity Center
   * instance with your S3 Access Grants instance, the grantee can also be a
   * corporate directory user or group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/Grantee">AWS
   * API Reference</a></p>
   */
  class Grantee
  {
  public:
    AWS_S3CONTROL_API Grantee() = default;
    AWS_S3CONTROL_API Grantee(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API Grantee& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The type of the grantee to which access has been granted. It can be one of
     * the following values:</p> <ul> <li> <p> <code>IAM</code> - An IAM user or
     * role.</p> </li> <li> <p> <code>DIRECTORY_USER</code> - Your corporate directory
     * user. You can use this option if you have added your corporate identity
     * directory to IAM Identity Center and associated the IAM Identity Center instance
     * with your S3 Access Grants instance.</p> </li> <li> <p>
     * <code>DIRECTORY_GROUP</code> - Your corporate directory group. You can use this
     * option if you have added your corporate identity directory to IAM Identity
     * Center and associated the IAM Identity Center instance with your S3 Access
     * Grants instance.</p> </li> </ul>
     */
    inline GranteeType GetGranteeType() const { return m_granteeType; }
    inline bool GranteeTypeHasBeenSet() const { return m_granteeTypeHasBeenSet; }
    inline void SetGranteeType(GranteeType value) { m_granteeTypeHasBeenSet = true; m_granteeType = value; }
    inline Grantee& WithGranteeType(GranteeType value) { SetGranteeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the <code>Grantee</code>. If the grantee type is
     * <code>IAM</code>, the identifier is the IAM Amazon Resource Name (ARN) of the
     * user or role. If the grantee type is a directory user or group, the identifier
     * is 128-bit universally unique identifier (UUID) in the format
     * <code>a1b2c3d4-5678-90ab-cdef-EXAMPLE11111</code>. You can obtain this UUID from
     * your Amazon Web Services IAM Identity Center instance.</p>
     */
    inline const Aws::String& GetGranteeIdentifier() const { return m_granteeIdentifier; }
    inline bool GranteeIdentifierHasBeenSet() const { return m_granteeIdentifierHasBeenSet; }
    template<typename GranteeIdentifierT = Aws::String>
    void SetGranteeIdentifier(GranteeIdentifierT&& value) { m_granteeIdentifierHasBeenSet = true; m_granteeIdentifier = std::forward<GranteeIdentifierT>(value); }
    template<typename GranteeIdentifierT = Aws::String>
    Grantee& WithGranteeIdentifier(GranteeIdentifierT&& value) { SetGranteeIdentifier(std::forward<GranteeIdentifierT>(value)); return *this;}
    ///@}
  private:

    GranteeType m_granteeType{GranteeType::NOT_SET};
    bool m_granteeTypeHasBeenSet = false;

    Aws::String m_granteeIdentifier;
    bool m_granteeIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
