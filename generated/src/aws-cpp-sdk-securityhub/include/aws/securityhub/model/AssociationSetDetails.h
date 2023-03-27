/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AssociationStateDetails.h>
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
   * <p> The associations between a route table and one or more subnets or a gateway.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AssociationSetDetails">AWS
   * API Reference</a></p>
   */
  class AssociationSetDetails
  {
  public:
    AWS_SECURITYHUB_API AssociationSetDetails();
    AWS_SECURITYHUB_API AssociationSetDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AssociationSetDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The state of the association between a route table and a subnet or gateway.
     * </p>
     */
    inline const AssociationStateDetails& GetAssociationState() const{ return m_associationState; }

    /**
     * <p> The state of the association between a route table and a subnet or gateway.
     * </p>
     */
    inline bool AssociationStateHasBeenSet() const { return m_associationStateHasBeenSet; }

    /**
     * <p> The state of the association between a route table and a subnet or gateway.
     * </p>
     */
    inline void SetAssociationState(const AssociationStateDetails& value) { m_associationStateHasBeenSet = true; m_associationState = value; }

    /**
     * <p> The state of the association between a route table and a subnet or gateway.
     * </p>
     */
    inline void SetAssociationState(AssociationStateDetails&& value) { m_associationStateHasBeenSet = true; m_associationState = std::move(value); }

    /**
     * <p> The state of the association between a route table and a subnet or gateway.
     * </p>
     */
    inline AssociationSetDetails& WithAssociationState(const AssociationStateDetails& value) { SetAssociationState(value); return *this;}

    /**
     * <p> The state of the association between a route table and a subnet or gateway.
     * </p>
     */
    inline AssociationSetDetails& WithAssociationState(AssociationStateDetails&& value) { SetAssociationState(std::move(value)); return *this;}


    /**
     * <p> The ID of the internet gateway or virtual private gateway. </p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }

    /**
     * <p> The ID of the internet gateway or virtual private gateway. </p>
     */
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }

    /**
     * <p> The ID of the internet gateway or virtual private gateway. </p>
     */
    inline void SetGatewayId(const Aws::String& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }

    /**
     * <p> The ID of the internet gateway or virtual private gateway. </p>
     */
    inline void SetGatewayId(Aws::String&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::move(value); }

    /**
     * <p> The ID of the internet gateway or virtual private gateway. </p>
     */
    inline void SetGatewayId(const char* value) { m_gatewayIdHasBeenSet = true; m_gatewayId.assign(value); }

    /**
     * <p> The ID of the internet gateway or virtual private gateway. </p>
     */
    inline AssociationSetDetails& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}

    /**
     * <p> The ID of the internet gateway or virtual private gateway. </p>
     */
    inline AssociationSetDetails& WithGatewayId(Aws::String&& value) { SetGatewayId(std::move(value)); return *this;}

    /**
     * <p> The ID of the internet gateway or virtual private gateway. </p>
     */
    inline AssociationSetDetails& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}


    /**
     * <p> Indicates whether this is the main route table. </p>
     */
    inline bool GetMain() const{ return m_main; }

    /**
     * <p> Indicates whether this is the main route table. </p>
     */
    inline bool MainHasBeenSet() const { return m_mainHasBeenSet; }

    /**
     * <p> Indicates whether this is the main route table. </p>
     */
    inline void SetMain(bool value) { m_mainHasBeenSet = true; m_main = value; }

    /**
     * <p> Indicates whether this is the main route table. </p>
     */
    inline AssociationSetDetails& WithMain(bool value) { SetMain(value); return *this;}


    /**
     * <p> The ID of the association. </p>
     */
    inline const Aws::String& GetRouteTableAssociationId() const{ return m_routeTableAssociationId; }

    /**
     * <p> The ID of the association. </p>
     */
    inline bool RouteTableAssociationIdHasBeenSet() const { return m_routeTableAssociationIdHasBeenSet; }

    /**
     * <p> The ID of the association. </p>
     */
    inline void SetRouteTableAssociationId(const Aws::String& value) { m_routeTableAssociationIdHasBeenSet = true; m_routeTableAssociationId = value; }

    /**
     * <p> The ID of the association. </p>
     */
    inline void SetRouteTableAssociationId(Aws::String&& value) { m_routeTableAssociationIdHasBeenSet = true; m_routeTableAssociationId = std::move(value); }

    /**
     * <p> The ID of the association. </p>
     */
    inline void SetRouteTableAssociationId(const char* value) { m_routeTableAssociationIdHasBeenSet = true; m_routeTableAssociationId.assign(value); }

    /**
     * <p> The ID of the association. </p>
     */
    inline AssociationSetDetails& WithRouteTableAssociationId(const Aws::String& value) { SetRouteTableAssociationId(value); return *this;}

    /**
     * <p> The ID of the association. </p>
     */
    inline AssociationSetDetails& WithRouteTableAssociationId(Aws::String&& value) { SetRouteTableAssociationId(std::move(value)); return *this;}

    /**
     * <p> The ID of the association. </p>
     */
    inline AssociationSetDetails& WithRouteTableAssociationId(const char* value) { SetRouteTableAssociationId(value); return *this;}


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
    inline AssociationSetDetails& WithRouteTableId(const Aws::String& value) { SetRouteTableId(value); return *this;}

    /**
     * <p> The ID of the route table. </p>
     */
    inline AssociationSetDetails& WithRouteTableId(Aws::String&& value) { SetRouteTableId(std::move(value)); return *this;}

    /**
     * <p> The ID of the route table. </p>
     */
    inline AssociationSetDetails& WithRouteTableId(const char* value) { SetRouteTableId(value); return *this;}


    /**
     * <p> The ID of the subnet. A subnet ID is not returned for an implicit
     * association. </p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p> The ID of the subnet. A subnet ID is not returned for an implicit
     * association. </p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p> The ID of the subnet. A subnet ID is not returned for an implicit
     * association. </p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p> The ID of the subnet. A subnet ID is not returned for an implicit
     * association. </p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p> The ID of the subnet. A subnet ID is not returned for an implicit
     * association. </p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p> The ID of the subnet. A subnet ID is not returned for an implicit
     * association. </p>
     */
    inline AssociationSetDetails& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p> The ID of the subnet. A subnet ID is not returned for an implicit
     * association. </p>
     */
    inline AssociationSetDetails& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p> The ID of the subnet. A subnet ID is not returned for an implicit
     * association. </p>
     */
    inline AssociationSetDetails& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}

  private:

    AssociationStateDetails m_associationState;
    bool m_associationStateHasBeenSet = false;

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;

    bool m_main;
    bool m_mainHasBeenSet = false;

    Aws::String m_routeTableAssociationId;
    bool m_routeTableAssociationIdHasBeenSet = false;

    Aws::String m_routeTableId;
    bool m_routeTableIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
