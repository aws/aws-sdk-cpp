/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/S3ObjectOwner.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/S3Grant.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3AccessControlList">AWS
   * API Reference</a></p>
   */
  class S3AccessControlList
  {
  public:
    AWS_S3CONTROL_API S3AccessControlList() = default;
    AWS_S3CONTROL_API S3AccessControlList(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API S3AccessControlList& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p/>
     */
    inline const S3ObjectOwner& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = S3ObjectOwner>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = S3ObjectOwner>
    S3AccessControlList& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Vector<S3Grant>& GetGrants() const { return m_grants; }
    inline bool GrantsHasBeenSet() const { return m_grantsHasBeenSet; }
    template<typename GrantsT = Aws::Vector<S3Grant>>
    void SetGrants(GrantsT&& value) { m_grantsHasBeenSet = true; m_grants = std::forward<GrantsT>(value); }
    template<typename GrantsT = Aws::Vector<S3Grant>>
    S3AccessControlList& WithGrants(GrantsT&& value) { SetGrants(std::forward<GrantsT>(value)); return *this;}
    template<typename GrantsT = S3Grant>
    S3AccessControlList& AddGrants(GrantsT&& value) { m_grantsHasBeenSet = true; m_grants.emplace_back(std::forward<GrantsT>(value)); return *this; }
    ///@}
  private:

    S3ObjectOwner m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::Vector<S3Grant> m_grants;
    bool m_grantsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
