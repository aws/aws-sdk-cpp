/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/S3AccessControlList.h>
#include <aws/s3control/model/S3CannedAccessControlList.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3AccessControlPolicy">AWS
   * API Reference</a></p>
   */
  class S3AccessControlPolicy
  {
  public:
    AWS_S3CONTROL_API S3AccessControlPolicy() = default;
    AWS_S3CONTROL_API S3AccessControlPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API S3AccessControlPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p/>
     */
    inline const S3AccessControlList& GetAccessControlList() const { return m_accessControlList; }
    inline bool AccessControlListHasBeenSet() const { return m_accessControlListHasBeenSet; }
    template<typename AccessControlListT = S3AccessControlList>
    void SetAccessControlList(AccessControlListT&& value) { m_accessControlListHasBeenSet = true; m_accessControlList = std::forward<AccessControlListT>(value); }
    template<typename AccessControlListT = S3AccessControlList>
    S3AccessControlPolicy& WithAccessControlList(AccessControlListT&& value) { SetAccessControlList(std::forward<AccessControlListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline S3CannedAccessControlList GetCannedAccessControlList() const { return m_cannedAccessControlList; }
    inline bool CannedAccessControlListHasBeenSet() const { return m_cannedAccessControlListHasBeenSet; }
    inline void SetCannedAccessControlList(S3CannedAccessControlList value) { m_cannedAccessControlListHasBeenSet = true; m_cannedAccessControlList = value; }
    inline S3AccessControlPolicy& WithCannedAccessControlList(S3CannedAccessControlList value) { SetCannedAccessControlList(value); return *this;}
    ///@}
  private:

    S3AccessControlList m_accessControlList;
    bool m_accessControlListHasBeenSet = false;

    S3CannedAccessControlList m_cannedAccessControlList{S3CannedAccessControlList::NOT_SET};
    bool m_cannedAccessControlListHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
