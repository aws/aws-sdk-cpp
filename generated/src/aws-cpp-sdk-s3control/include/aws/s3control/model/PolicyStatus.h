﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>

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
   * <p>Indicates whether this access point policy is public. For more information
   * about how Amazon S3 evaluates policies to determine whether they are public, see
   * <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html#access-control-block-public-access-policy-status">The
   * Meaning of "Public"</a> in the <i>Amazon S3 User Guide</i>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PolicyStatus">AWS
   * API Reference</a></p>
   */
  class PolicyStatus
  {
  public:
    AWS_S3CONTROL_API PolicyStatus() = default;
    AWS_S3CONTROL_API PolicyStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API PolicyStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p/>
     */
    inline bool GetIsPublic() const { return m_isPublic; }
    inline bool IsPublicHasBeenSet() const { return m_isPublicHasBeenSet; }
    inline void SetIsPublic(bool value) { m_isPublicHasBeenSet = true; m_isPublic = value; }
    inline PolicyStatus& WithIsPublic(bool value) { SetIsPublic(value); return *this;}
    ///@}
  private:

    bool m_isPublic{false};
    bool m_isPublicHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
