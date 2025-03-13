/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsEc2NetworkAclAssociation.h>
#include <aws/securityhub/model/AwsEc2NetworkAclEntry.h>
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
   * <p>Contains details about an Amazon EC2 network access control list
   * (ACL).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2NetworkAclDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2NetworkAclDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2NetworkAclDetails() = default;
    AWS_SECURITYHUB_API AwsEc2NetworkAclDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2NetworkAclDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether this is the default network ACL for the VPC.</p>
     */
    inline bool GetIsDefault() const { return m_isDefault; }
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }
    inline AwsEc2NetworkAclDetails& WithIsDefault(bool value) { SetIsDefault(value); return *this;}
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
    AwsEc2NetworkAclDetails& WithNetworkAclId(NetworkAclIdT&& value) { SetNetworkAclId(std::forward<NetworkAclIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Web Services account that owns the network
     * ACL.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    AwsEc2NetworkAclDetails& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the VPC for the network ACL.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    AwsEc2NetworkAclDetails& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Associations between the network ACL and subnets.</p>
     */
    inline const Aws::Vector<AwsEc2NetworkAclAssociation>& GetAssociations() const { return m_associations; }
    inline bool AssociationsHasBeenSet() const { return m_associationsHasBeenSet; }
    template<typename AssociationsT = Aws::Vector<AwsEc2NetworkAclAssociation>>
    void SetAssociations(AssociationsT&& value) { m_associationsHasBeenSet = true; m_associations = std::forward<AssociationsT>(value); }
    template<typename AssociationsT = Aws::Vector<AwsEc2NetworkAclAssociation>>
    AwsEc2NetworkAclDetails& WithAssociations(AssociationsT&& value) { SetAssociations(std::forward<AssociationsT>(value)); return *this;}
    template<typename AssociationsT = AwsEc2NetworkAclAssociation>
    AwsEc2NetworkAclDetails& AddAssociations(AssociationsT&& value) { m_associationsHasBeenSet = true; m_associations.emplace_back(std::forward<AssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The set of rules in the network ACL.</p>
     */
    inline const Aws::Vector<AwsEc2NetworkAclEntry>& GetEntries() const { return m_entries; }
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
    template<typename EntriesT = Aws::Vector<AwsEc2NetworkAclEntry>>
    void SetEntries(EntriesT&& value) { m_entriesHasBeenSet = true; m_entries = std::forward<EntriesT>(value); }
    template<typename EntriesT = Aws::Vector<AwsEc2NetworkAclEntry>>
    AwsEc2NetworkAclDetails& WithEntries(EntriesT&& value) { SetEntries(std::forward<EntriesT>(value)); return *this;}
    template<typename EntriesT = AwsEc2NetworkAclEntry>
    AwsEc2NetworkAclDetails& AddEntries(EntriesT&& value) { m_entriesHasBeenSet = true; m_entries.emplace_back(std::forward<EntriesT>(value)); return *this; }
    ///@}
  private:

    bool m_isDefault{false};
    bool m_isDefaultHasBeenSet = false;

    Aws::String m_networkAclId;
    bool m_networkAclIdHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<AwsEc2NetworkAclAssociation> m_associations;
    bool m_associationsHasBeenSet = false;

    Aws::Vector<AwsEc2NetworkAclEntry> m_entries;
    bool m_entriesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
