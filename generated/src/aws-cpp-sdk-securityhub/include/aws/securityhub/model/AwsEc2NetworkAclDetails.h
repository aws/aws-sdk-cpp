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
    AWS_SECURITYHUB_API AwsEc2NetworkAclDetails();
    AWS_SECURITYHUB_API AwsEc2NetworkAclDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2NetworkAclDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether this is the default network ACL for the VPC.</p>
     */
    inline bool GetIsDefault() const{ return m_isDefault; }
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }
    inline AwsEc2NetworkAclDetails& WithIsDefault(bool value) { SetIsDefault(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the network ACL.</p>
     */
    inline const Aws::String& GetNetworkAclId() const{ return m_networkAclId; }
    inline bool NetworkAclIdHasBeenSet() const { return m_networkAclIdHasBeenSet; }
    inline void SetNetworkAclId(const Aws::String& value) { m_networkAclIdHasBeenSet = true; m_networkAclId = value; }
    inline void SetNetworkAclId(Aws::String&& value) { m_networkAclIdHasBeenSet = true; m_networkAclId = std::move(value); }
    inline void SetNetworkAclId(const char* value) { m_networkAclIdHasBeenSet = true; m_networkAclId.assign(value); }
    inline AwsEc2NetworkAclDetails& WithNetworkAclId(const Aws::String& value) { SetNetworkAclId(value); return *this;}
    inline AwsEc2NetworkAclDetails& WithNetworkAclId(Aws::String&& value) { SetNetworkAclId(std::move(value)); return *this;}
    inline AwsEc2NetworkAclDetails& WithNetworkAclId(const char* value) { SetNetworkAclId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Web Services account that owns the network
     * ACL.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline AwsEc2NetworkAclDetails& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline AwsEc2NetworkAclDetails& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline AwsEc2NetworkAclDetails& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the VPC for the network ACL.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline AwsEc2NetworkAclDetails& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline AwsEc2NetworkAclDetails& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline AwsEc2NetworkAclDetails& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Associations between the network ACL and subnets.</p>
     */
    inline const Aws::Vector<AwsEc2NetworkAclAssociation>& GetAssociations() const{ return m_associations; }
    inline bool AssociationsHasBeenSet() const { return m_associationsHasBeenSet; }
    inline void SetAssociations(const Aws::Vector<AwsEc2NetworkAclAssociation>& value) { m_associationsHasBeenSet = true; m_associations = value; }
    inline void SetAssociations(Aws::Vector<AwsEc2NetworkAclAssociation>&& value) { m_associationsHasBeenSet = true; m_associations = std::move(value); }
    inline AwsEc2NetworkAclDetails& WithAssociations(const Aws::Vector<AwsEc2NetworkAclAssociation>& value) { SetAssociations(value); return *this;}
    inline AwsEc2NetworkAclDetails& WithAssociations(Aws::Vector<AwsEc2NetworkAclAssociation>&& value) { SetAssociations(std::move(value)); return *this;}
    inline AwsEc2NetworkAclDetails& AddAssociations(const AwsEc2NetworkAclAssociation& value) { m_associationsHasBeenSet = true; m_associations.push_back(value); return *this; }
    inline AwsEc2NetworkAclDetails& AddAssociations(AwsEc2NetworkAclAssociation&& value) { m_associationsHasBeenSet = true; m_associations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The set of rules in the network ACL.</p>
     */
    inline const Aws::Vector<AwsEc2NetworkAclEntry>& GetEntries() const{ return m_entries; }
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
    inline void SetEntries(const Aws::Vector<AwsEc2NetworkAclEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }
    inline void SetEntries(Aws::Vector<AwsEc2NetworkAclEntry>&& value) { m_entriesHasBeenSet = true; m_entries = std::move(value); }
    inline AwsEc2NetworkAclDetails& WithEntries(const Aws::Vector<AwsEc2NetworkAclEntry>& value) { SetEntries(value); return *this;}
    inline AwsEc2NetworkAclDetails& WithEntries(Aws::Vector<AwsEc2NetworkAclEntry>&& value) { SetEntries(std::move(value)); return *this;}
    inline AwsEc2NetworkAclDetails& AddEntries(const AwsEc2NetworkAclEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }
    inline AwsEc2NetworkAclDetails& AddEntries(AwsEc2NetworkAclEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(std::move(value)); return *this; }
    ///@}
  private:

    bool m_isDefault;
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
