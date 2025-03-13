/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/ResolverQueryLogConfigAssociationStatus.h>
#include <aws/route53resolver/model/ResolverQueryLogConfigAssociationError.h>
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
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_AssociateResolverQueryLogConfig.html">AssociateResolverQueryLogConfig</a>,
   * <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_DisassociateResolverQueryLogConfig.html">DisassociateResolverQueryLogConfig</a>,
   * <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverQueryLogConfigAssociation.html">GetResolverQueryLogConfigAssociation</a>,
   * or <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverQueryLogConfigAssociations.html">ListResolverQueryLogConfigAssociations</a>,
   * request, a complex type that contains settings for a specified association
   * between an Amazon VPC and a query logging configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ResolverQueryLogConfigAssociation">AWS
   * API Reference</a></p>
   */
  class ResolverQueryLogConfigAssociation
  {
  public:
    AWS_ROUTE53RESOLVER_API ResolverQueryLogConfigAssociation() = default;
    AWS_ROUTE53RESOLVER_API ResolverQueryLogConfigAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API ResolverQueryLogConfigAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the query logging association.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ResolverQueryLogConfigAssociation& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the query logging configuration that a VPC is associated with.</p>
     */
    inline const Aws::String& GetResolverQueryLogConfigId() const { return m_resolverQueryLogConfigId; }
    inline bool ResolverQueryLogConfigIdHasBeenSet() const { return m_resolverQueryLogConfigIdHasBeenSet; }
    template<typename ResolverQueryLogConfigIdT = Aws::String>
    void SetResolverQueryLogConfigId(ResolverQueryLogConfigIdT&& value) { m_resolverQueryLogConfigIdHasBeenSet = true; m_resolverQueryLogConfigId = std::forward<ResolverQueryLogConfigIdT>(value); }
    template<typename ResolverQueryLogConfigIdT = Aws::String>
    ResolverQueryLogConfigAssociation& WithResolverQueryLogConfigId(ResolverQueryLogConfigIdT&& value) { SetResolverQueryLogConfigId(std::forward<ResolverQueryLogConfigIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon VPC that is associated with the query logging
     * configuration.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    ResolverQueryLogConfigAssociation& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the specified query logging association. Valid values include
     * the following:</p> <ul> <li> <p> <code>CREATING</code>: Resolver is creating an
     * association between an Amazon VPC and a query logging configuration.</p> </li>
     * <li> <p> <code>ACTIVE</code>: The association between an Amazon VPC and a query
     * logging configuration was successfully created. Resolver is logging queries that
     * originate in the specified VPC.</p> </li> <li> <p> <code>DELETING</code>:
     * Resolver is deleting this query logging association.</p> </li> <li> <p>
     * <code>FAILED</code>: Resolver either couldn't create or couldn't delete the
     * query logging association.</p> </li> </ul>
     */
    inline ResolverQueryLogConfigAssociationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ResolverQueryLogConfigAssociationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ResolverQueryLogConfigAssociation& WithStatus(ResolverQueryLogConfigAssociationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the value of <code>Status</code> is <code>FAILED</code>, the value of
     * <code>Error</code> indicates the cause:</p> <ul> <li> <p>
     * <code>DESTINATION_NOT_FOUND</code>: The specified destination (for example, an
     * Amazon S3 bucket) was deleted.</p> </li> <li> <p> <code>ACCESS_DENIED</code>:
     * Permissions don't allow sending logs to the destination.</p> </li> </ul> <p>If
     * the value of <code>Status</code> is a value other than <code>FAILED</code>,
     * <code>Error</code> is null. </p>
     */
    inline ResolverQueryLogConfigAssociationError GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(ResolverQueryLogConfigAssociationError value) { m_errorHasBeenSet = true; m_error = value; }
    inline ResolverQueryLogConfigAssociation& WithError(ResolverQueryLogConfigAssociationError value) { SetError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains additional information about the error. If the value or
     * <code>Error</code> is null, the value of <code>ErrorMessage</code> also is
     * null.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    ResolverQueryLogConfigAssociation& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the VPC was associated with the query logging
     * configuration, in Unix time format and Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::String& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::String>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::String>
    ResolverQueryLogConfigAssociation& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_resolverQueryLogConfigId;
    bool m_resolverQueryLogConfigIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    ResolverQueryLogConfigAssociationStatus m_status{ResolverQueryLogConfigAssociationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ResolverQueryLogConfigAssociationError m_error{ResolverQueryLogConfigAssociationError::NOT_SET};
    bool m_errorHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
