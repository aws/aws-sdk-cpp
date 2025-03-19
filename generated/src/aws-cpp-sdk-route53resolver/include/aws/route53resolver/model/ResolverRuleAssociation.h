/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/ResolverRuleAssociationStatus.h>
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
namespace Route53Resolver
{
namespace Model
{

  /**
   * <p>In the response to an <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_AssociateResolverRule.html">AssociateResolverRule</a>,
   * <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_DisassociateResolverRule.html">DisassociateResolverRule</a>,
   * or <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRuleAssociations.html">ListResolverRuleAssociations</a>
   * request, provides information about an association between a Resolver rule and a
   * VPC. The association determines which DNS queries that originate in the VPC are
   * forwarded to your network. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ResolverRuleAssociation">AWS
   * API Reference</a></p>
   */
  class ResolverRuleAssociation
  {
  public:
    AWS_ROUTE53RESOLVER_API ResolverRuleAssociation() = default;
    AWS_ROUTE53RESOLVER_API ResolverRuleAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API ResolverRuleAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the association between a Resolver rule and a VPC. Resolver assigns
     * this value when you submit an <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_AssociateResolverRule.html">AssociateResolverRule</a>
     * request.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ResolverRuleAssociation& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Resolver rule that you associated with the VPC that is
     * specified by <code>VPCId</code>.</p>
     */
    inline const Aws::String& GetResolverRuleId() const { return m_resolverRuleId; }
    inline bool ResolverRuleIdHasBeenSet() const { return m_resolverRuleIdHasBeenSet; }
    template<typename ResolverRuleIdT = Aws::String>
    void SetResolverRuleId(ResolverRuleIdT&& value) { m_resolverRuleIdHasBeenSet = true; m_resolverRuleId = std::forward<ResolverRuleIdT>(value); }
    template<typename ResolverRuleIdT = Aws::String>
    ResolverRuleAssociation& WithResolverRuleId(ResolverRuleIdT&& value) { SetResolverRuleId(std::forward<ResolverRuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an association between a Resolver rule and a VPC.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ResolverRuleAssociation& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC that you associated the Resolver rule with.</p>
     */
    inline const Aws::String& GetVPCId() const { return m_vPCId; }
    inline bool VPCIdHasBeenSet() const { return m_vPCIdHasBeenSet; }
    template<typename VPCIdT = Aws::String>
    void SetVPCId(VPCIdT&& value) { m_vPCIdHasBeenSet = true; m_vPCId = std::forward<VPCIdT>(value); }
    template<typename VPCIdT = Aws::String>
    ResolverRuleAssociation& WithVPCId(VPCIdT&& value) { SetVPCId(std::forward<VPCIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A code that specifies the current status of the association between a
     * Resolver rule and a VPC.</p>
     */
    inline ResolverRuleAssociationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ResolverRuleAssociationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ResolverRuleAssociation& WithStatus(ResolverRuleAssociationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed description of the status of the association between a Resolver
     * rule and a VPC.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ResolverRuleAssociation& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_resolverRuleId;
    bool m_resolverRuleIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_vPCId;
    bool m_vPCIdHasBeenSet = false;

    ResolverRuleAssociationStatus m_status{ResolverRuleAssociationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
