/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AssociationSetDetails.h>
#include <aws/securityhub/model/PropagatingVgwSetDetails.h>
#include <aws/securityhub/model/RouteSetDetails.h>
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
   * <p> Provides details about a route table for the specified VPC. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2RouteTableDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2RouteTableDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2RouteTableDetails();
    AWS_SECURITYHUB_API AwsEc2RouteTableDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2RouteTableDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The associations between a route table and one or more subnets or a gateway.
     * </p>
     */
    inline const Aws::Vector<AssociationSetDetails>& GetAssociationSet() const{ return m_associationSet; }

    /**
     * <p> The associations between a route table and one or more subnets or a gateway.
     * </p>
     */
    inline bool AssociationSetHasBeenSet() const { return m_associationSetHasBeenSet; }

    /**
     * <p> The associations between a route table and one or more subnets or a gateway.
     * </p>
     */
    inline void SetAssociationSet(const Aws::Vector<AssociationSetDetails>& value) { m_associationSetHasBeenSet = true; m_associationSet = value; }

    /**
     * <p> The associations between a route table and one or more subnets or a gateway.
     * </p>
     */
    inline void SetAssociationSet(Aws::Vector<AssociationSetDetails>&& value) { m_associationSetHasBeenSet = true; m_associationSet = std::move(value); }

    /**
     * <p> The associations between a route table and one or more subnets or a gateway.
     * </p>
     */
    inline AwsEc2RouteTableDetails& WithAssociationSet(const Aws::Vector<AssociationSetDetails>& value) { SetAssociationSet(value); return *this;}

    /**
     * <p> The associations between a route table and one or more subnets or a gateway.
     * </p>
     */
    inline AwsEc2RouteTableDetails& WithAssociationSet(Aws::Vector<AssociationSetDetails>&& value) { SetAssociationSet(std::move(value)); return *this;}

    /**
     * <p> The associations between a route table and one or more subnets or a gateway.
     * </p>
     */
    inline AwsEc2RouteTableDetails& AddAssociationSet(const AssociationSetDetails& value) { m_associationSetHasBeenSet = true; m_associationSet.push_back(value); return *this; }

    /**
     * <p> The associations between a route table and one or more subnets or a gateway.
     * </p>
     */
    inline AwsEc2RouteTableDetails& AddAssociationSet(AssociationSetDetails&& value) { m_associationSetHasBeenSet = true; m_associationSet.push_back(std::move(value)); return *this; }


    /**
     * <p> The ID of the Amazon Web Services account that owns the route table. </p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p> The ID of the Amazon Web Services account that owns the route table. </p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p> The ID of the Amazon Web Services account that owns the route table. </p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p> The ID of the Amazon Web Services account that owns the route table. </p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p> The ID of the Amazon Web Services account that owns the route table. </p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p> The ID of the Amazon Web Services account that owns the route table. </p>
     */
    inline AwsEc2RouteTableDetails& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p> The ID of the Amazon Web Services account that owns the route table. </p>
     */
    inline AwsEc2RouteTableDetails& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p> The ID of the Amazon Web Services account that owns the route table. </p>
     */
    inline AwsEc2RouteTableDetails& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p> Describes a virtual private gateway propagating route. </p>
     */
    inline const Aws::Vector<PropagatingVgwSetDetails>& GetPropagatingVgwSet() const{ return m_propagatingVgwSet; }

    /**
     * <p> Describes a virtual private gateway propagating route. </p>
     */
    inline bool PropagatingVgwSetHasBeenSet() const { return m_propagatingVgwSetHasBeenSet; }

    /**
     * <p> Describes a virtual private gateway propagating route. </p>
     */
    inline void SetPropagatingVgwSet(const Aws::Vector<PropagatingVgwSetDetails>& value) { m_propagatingVgwSetHasBeenSet = true; m_propagatingVgwSet = value; }

    /**
     * <p> Describes a virtual private gateway propagating route. </p>
     */
    inline void SetPropagatingVgwSet(Aws::Vector<PropagatingVgwSetDetails>&& value) { m_propagatingVgwSetHasBeenSet = true; m_propagatingVgwSet = std::move(value); }

    /**
     * <p> Describes a virtual private gateway propagating route. </p>
     */
    inline AwsEc2RouteTableDetails& WithPropagatingVgwSet(const Aws::Vector<PropagatingVgwSetDetails>& value) { SetPropagatingVgwSet(value); return *this;}

    /**
     * <p> Describes a virtual private gateway propagating route. </p>
     */
    inline AwsEc2RouteTableDetails& WithPropagatingVgwSet(Aws::Vector<PropagatingVgwSetDetails>&& value) { SetPropagatingVgwSet(std::move(value)); return *this;}

    /**
     * <p> Describes a virtual private gateway propagating route. </p>
     */
    inline AwsEc2RouteTableDetails& AddPropagatingVgwSet(const PropagatingVgwSetDetails& value) { m_propagatingVgwSetHasBeenSet = true; m_propagatingVgwSet.push_back(value); return *this; }

    /**
     * <p> Describes a virtual private gateway propagating route. </p>
     */
    inline AwsEc2RouteTableDetails& AddPropagatingVgwSet(PropagatingVgwSetDetails&& value) { m_propagatingVgwSetHasBeenSet = true; m_propagatingVgwSet.push_back(std::move(value)); return *this; }


    /**
     * <p> The ID of the route table. </p>
     */
    inline const Aws::String& GetRouteTableId() const{ return m_routeTableId; }

    /**
     * <p> The ID of the route table. </p>
     */
    inline bool RouteTableIdHasBeenSet() const { return m_routeTableIdHasBeenSet; }

    /**
     * <p> The ID of the route table. </p>
     */
    inline void SetRouteTableId(const Aws::String& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = value; }

    /**
     * <p> The ID of the route table. </p>
     */
    inline void SetRouteTableId(Aws::String&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::move(value); }

    /**
     * <p> The ID of the route table. </p>
     */
    inline void SetRouteTableId(const char* value) { m_routeTableIdHasBeenSet = true; m_routeTableId.assign(value); }

    /**
     * <p> The ID of the route table. </p>
     */
    inline AwsEc2RouteTableDetails& WithRouteTableId(const Aws::String& value) { SetRouteTableId(value); return *this;}

    /**
     * <p> The ID of the route table. </p>
     */
    inline AwsEc2RouteTableDetails& WithRouteTableId(Aws::String&& value) { SetRouteTableId(std::move(value)); return *this;}

    /**
     * <p> The ID of the route table. </p>
     */
    inline AwsEc2RouteTableDetails& WithRouteTableId(const char* value) { SetRouteTableId(value); return *this;}


    /**
     * <p> The routes in the route table. </p>
     */
    inline const Aws::Vector<RouteSetDetails>& GetRouteSet() const{ return m_routeSet; }

    /**
     * <p> The routes in the route table. </p>
     */
    inline bool RouteSetHasBeenSet() const { return m_routeSetHasBeenSet; }

    /**
     * <p> The routes in the route table. </p>
     */
    inline void SetRouteSet(const Aws::Vector<RouteSetDetails>& value) { m_routeSetHasBeenSet = true; m_routeSet = value; }

    /**
     * <p> The routes in the route table. </p>
     */
    inline void SetRouteSet(Aws::Vector<RouteSetDetails>&& value) { m_routeSetHasBeenSet = true; m_routeSet = std::move(value); }

    /**
     * <p> The routes in the route table. </p>
     */
    inline AwsEc2RouteTableDetails& WithRouteSet(const Aws::Vector<RouteSetDetails>& value) { SetRouteSet(value); return *this;}

    /**
     * <p> The routes in the route table. </p>
     */
    inline AwsEc2RouteTableDetails& WithRouteSet(Aws::Vector<RouteSetDetails>&& value) { SetRouteSet(std::move(value)); return *this;}

    /**
     * <p> The routes in the route table. </p>
     */
    inline AwsEc2RouteTableDetails& AddRouteSet(const RouteSetDetails& value) { m_routeSetHasBeenSet = true; m_routeSet.push_back(value); return *this; }

    /**
     * <p> The routes in the route table. </p>
     */
    inline AwsEc2RouteTableDetails& AddRouteSet(RouteSetDetails&& value) { m_routeSetHasBeenSet = true; m_routeSet.push_back(std::move(value)); return *this; }


    /**
     * <p> The ID of the virtual private cloud (VPC). </p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p> The ID of the virtual private cloud (VPC). </p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p> The ID of the virtual private cloud (VPC). </p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p> The ID of the virtual private cloud (VPC). </p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p> The ID of the virtual private cloud (VPC). </p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p> The ID of the virtual private cloud (VPC). </p>
     */
    inline AwsEc2RouteTableDetails& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p> The ID of the virtual private cloud (VPC). </p>
     */
    inline AwsEc2RouteTableDetails& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p> The ID of the virtual private cloud (VPC). </p>
     */
    inline AwsEc2RouteTableDetails& WithVpcId(const char* value) { SetVpcId(value); return *this;}

  private:

    Aws::Vector<AssociationSetDetails> m_associationSet;
    bool m_associationSetHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::Vector<PropagatingVgwSetDetails> m_propagatingVgwSet;
    bool m_propagatingVgwSetHasBeenSet = false;

    Aws::String m_routeTableId;
    bool m_routeTableIdHasBeenSet = false;

    Aws::Vector<RouteSetDetails> m_routeSet;
    bool m_routeSetHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
