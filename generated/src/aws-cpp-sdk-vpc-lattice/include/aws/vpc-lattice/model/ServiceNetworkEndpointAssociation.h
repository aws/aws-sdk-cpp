/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace VPCLattice
{
namespace Model
{

  /**
   * <p>Describes the association between a service network and a VPC
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/ServiceNetworkEndpointAssociation">AWS
   * API Reference</a></p>
   */
  class ServiceNetworkEndpointAssociation
  {
  public:
    AWS_VPCLATTICE_API ServiceNetworkEndpointAssociation();
    AWS_VPCLATTICE_API ServiceNetworkEndpointAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API ServiceNetworkEndpointAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time that the association was created, in ISO-8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ServiceNetworkEndpointAssociation& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ServiceNetworkEndpointAssociation& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ServiceNetworkEndpointAssociation& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ServiceNetworkEndpointAssociation& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ServiceNetworkEndpointAssociation& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkArn() const{ return m_serviceNetworkArn; }
    inline bool ServiceNetworkArnHasBeenSet() const { return m_serviceNetworkArnHasBeenSet; }
    inline void SetServiceNetworkArn(const Aws::String& value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn = value; }
    inline void SetServiceNetworkArn(Aws::String&& value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn = std::move(value); }
    inline void SetServiceNetworkArn(const char* value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn.assign(value); }
    inline ServiceNetworkEndpointAssociation& WithServiceNetworkArn(const Aws::String& value) { SetServiceNetworkArn(value); return *this;}
    inline ServiceNetworkEndpointAssociation& WithServiceNetworkArn(Aws::String&& value) { SetServiceNetworkArn(std::move(value)); return *this;}
    inline ServiceNetworkEndpointAssociation& WithServiceNetworkArn(const char* value) { SetServiceNetworkArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the association.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline ServiceNetworkEndpointAssociation& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline ServiceNetworkEndpointAssociation& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline ServiceNetworkEndpointAssociation& WithState(const char* value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC endpoint associated with the service network.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }
    inline ServiceNetworkEndpointAssociation& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}
    inline ServiceNetworkEndpointAssociation& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}
    inline ServiceNetworkEndpointAssociation& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the VPC endpoint associated with the service network.</p>
     */
    inline const Aws::String& GetVpcEndpointOwnerId() const{ return m_vpcEndpointOwnerId; }
    inline bool VpcEndpointOwnerIdHasBeenSet() const { return m_vpcEndpointOwnerIdHasBeenSet; }
    inline void SetVpcEndpointOwnerId(const Aws::String& value) { m_vpcEndpointOwnerIdHasBeenSet = true; m_vpcEndpointOwnerId = value; }
    inline void SetVpcEndpointOwnerId(Aws::String&& value) { m_vpcEndpointOwnerIdHasBeenSet = true; m_vpcEndpointOwnerId = std::move(value); }
    inline void SetVpcEndpointOwnerId(const char* value) { m_vpcEndpointOwnerIdHasBeenSet = true; m_vpcEndpointOwnerId.assign(value); }
    inline ServiceNetworkEndpointAssociation& WithVpcEndpointOwnerId(const Aws::String& value) { SetVpcEndpointOwnerId(value); return *this;}
    inline ServiceNetworkEndpointAssociation& WithVpcEndpointOwnerId(Aws::String&& value) { SetVpcEndpointOwnerId(std::move(value)); return *this;}
    inline ServiceNetworkEndpointAssociation& WithVpcEndpointOwnerId(const char* value) { SetVpcEndpointOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC for the association.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline ServiceNetworkEndpointAssociation& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline ServiceNetworkEndpointAssociation& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline ServiceNetworkEndpointAssociation& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_serviceNetworkArn;
    bool m_serviceNetworkArnHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;

    Aws::String m_vpcEndpointOwnerId;
    bool m_vpcEndpointOwnerIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
