/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>An association between the network ACL and a subnet.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2NetworkAclAssociation">AWS
   * API Reference</a></p>
   */
  class AwsEc2NetworkAclAssociation
  {
  public:
    AWS_SECURITYHUB_API AwsEc2NetworkAclAssociation() = default;
    AWS_SECURITYHUB_API AwsEc2NetworkAclAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2NetworkAclAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the association between the network ACL and the subnet.</p>
     */
    inline const Aws::String& GetNetworkAclAssociationId() const { return m_networkAclAssociationId; }
    inline bool NetworkAclAssociationIdHasBeenSet() const { return m_networkAclAssociationIdHasBeenSet; }
    template<typename NetworkAclAssociationIdT = Aws::String>
    void SetNetworkAclAssociationId(NetworkAclAssociationIdT&& value) { m_networkAclAssociationIdHasBeenSet = true; m_networkAclAssociationId = std::forward<NetworkAclAssociationIdT>(value); }
    template<typename NetworkAclAssociationIdT = Aws::String>
    AwsEc2NetworkAclAssociation& WithNetworkAclAssociationId(NetworkAclAssociationIdT&& value) { SetNetworkAclAssociationId(std::forward<NetworkAclAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the network ACL.</p>
     */
    inline const Aws::String& GetNetworkAclId() const { return m_networkAclId; }
    inline bool NetworkAclIdHasBeenSet() const { return m_networkAclIdHasBeenSet; }
    template<typename NetworkAclIdT = Aws::String>
    void SetNetworkAclId(NetworkAclIdT&& value) { m_networkAclIdHasBeenSet = true; m_networkAclId = std::forward<NetworkAclIdT>(value); }
    template<typename NetworkAclIdT = Aws::String>
    AwsEc2NetworkAclAssociation& WithNetworkAclId(NetworkAclIdT&& value) { SetNetworkAclId(std::forward<NetworkAclIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subnet that is associated with the network ACL.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    AwsEc2NetworkAclAssociation& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_networkAclAssociationId;
    bool m_networkAclAssociationIdHasBeenSet = false;

    Aws::String m_networkAclId;
    bool m_networkAclIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
