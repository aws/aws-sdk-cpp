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
    AWS_SECURITYHUB_API AwsEc2RouteTableDetails() = default;
    AWS_SECURITYHUB_API AwsEc2RouteTableDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2RouteTableDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The associations between a route table and one or more subnets or a gateway.
     * </p>
     */
    inline const Aws::Vector<AssociationSetDetails>& GetAssociationSet() const { return m_associationSet; }
    inline bool AssociationSetHasBeenSet() const { return m_associationSetHasBeenSet; }
    template<typename AssociationSetT = Aws::Vector<AssociationSetDetails>>
    void SetAssociationSet(AssociationSetT&& value) { m_associationSetHasBeenSet = true; m_associationSet = std::forward<AssociationSetT>(value); }
    template<typename AssociationSetT = Aws::Vector<AssociationSetDetails>>
    AwsEc2RouteTableDetails& WithAssociationSet(AssociationSetT&& value) { SetAssociationSet(std::forward<AssociationSetT>(value)); return *this;}
    template<typename AssociationSetT = AssociationSetDetails>
    AwsEc2RouteTableDetails& AddAssociationSet(AssociationSetT&& value) { m_associationSetHasBeenSet = true; m_associationSet.emplace_back(std::forward<AssociationSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The ID of the Amazon Web Services account that owns the route table. </p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    AwsEc2RouteTableDetails& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes a virtual private gateway propagating route. </p>
     */
    inline const Aws::Vector<PropagatingVgwSetDetails>& GetPropagatingVgwSet() const { return m_propagatingVgwSet; }
    inline bool PropagatingVgwSetHasBeenSet() const { return m_propagatingVgwSetHasBeenSet; }
    template<typename PropagatingVgwSetT = Aws::Vector<PropagatingVgwSetDetails>>
    void SetPropagatingVgwSet(PropagatingVgwSetT&& value) { m_propagatingVgwSetHasBeenSet = true; m_propagatingVgwSet = std::forward<PropagatingVgwSetT>(value); }
    template<typename PropagatingVgwSetT = Aws::Vector<PropagatingVgwSetDetails>>
    AwsEc2RouteTableDetails& WithPropagatingVgwSet(PropagatingVgwSetT&& value) { SetPropagatingVgwSet(std::forward<PropagatingVgwSetT>(value)); return *this;}
    template<typename PropagatingVgwSetT = PropagatingVgwSetDetails>
    AwsEc2RouteTableDetails& AddPropagatingVgwSet(PropagatingVgwSetT&& value) { m_propagatingVgwSetHasBeenSet = true; m_propagatingVgwSet.emplace_back(std::forward<PropagatingVgwSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The ID of the route table. </p>
     */
    inline const Aws::String& GetRouteTableId() const { return m_routeTableId; }
    inline bool RouteTableIdHasBeenSet() const { return m_routeTableIdHasBeenSet; }
    template<typename RouteTableIdT = Aws::String>
    void SetRouteTableId(RouteTableIdT&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::forward<RouteTableIdT>(value); }
    template<typename RouteTableIdT = Aws::String>
    AwsEc2RouteTableDetails& WithRouteTableId(RouteTableIdT&& value) { SetRouteTableId(std::forward<RouteTableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The routes in the route table. </p>
     */
    inline const Aws::Vector<RouteSetDetails>& GetRouteSet() const { return m_routeSet; }
    inline bool RouteSetHasBeenSet() const { return m_routeSetHasBeenSet; }
    template<typename RouteSetT = Aws::Vector<RouteSetDetails>>
    void SetRouteSet(RouteSetT&& value) { m_routeSetHasBeenSet = true; m_routeSet = std::forward<RouteSetT>(value); }
    template<typename RouteSetT = Aws::Vector<RouteSetDetails>>
    AwsEc2RouteTableDetails& WithRouteSet(RouteSetT&& value) { SetRouteSet(std::forward<RouteSetT>(value)); return *this;}
    template<typename RouteSetT = RouteSetDetails>
    AwsEc2RouteTableDetails& AddRouteSet(RouteSetT&& value) { m_routeSetHasBeenSet = true; m_routeSet.emplace_back(std::forward<RouteSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The ID of the virtual private cloud (VPC). </p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    AwsEc2RouteTableDetails& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}
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
