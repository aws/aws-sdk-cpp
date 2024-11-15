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
    AWS_ROUTE53RESOLVER_API ResolverQueryLogConfigAssociation();
    AWS_ROUTE53RESOLVER_API ResolverQueryLogConfigAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API ResolverQueryLogConfigAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the query logging association.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ResolverQueryLogConfigAssociation& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ResolverQueryLogConfigAssociation& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ResolverQueryLogConfigAssociation& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the query logging configuration that a VPC is associated with.</p>
     */
    inline const Aws::String& GetResolverQueryLogConfigId() const{ return m_resolverQueryLogConfigId; }
    inline bool ResolverQueryLogConfigIdHasBeenSet() const { return m_resolverQueryLogConfigIdHasBeenSet; }
    inline void SetResolverQueryLogConfigId(const Aws::String& value) { m_resolverQueryLogConfigIdHasBeenSet = true; m_resolverQueryLogConfigId = value; }
    inline void SetResolverQueryLogConfigId(Aws::String&& value) { m_resolverQueryLogConfigIdHasBeenSet = true; m_resolverQueryLogConfigId = std::move(value); }
    inline void SetResolverQueryLogConfigId(const char* value) { m_resolverQueryLogConfigIdHasBeenSet = true; m_resolverQueryLogConfigId.assign(value); }
    inline ResolverQueryLogConfigAssociation& WithResolverQueryLogConfigId(const Aws::String& value) { SetResolverQueryLogConfigId(value); return *this;}
    inline ResolverQueryLogConfigAssociation& WithResolverQueryLogConfigId(Aws::String&& value) { SetResolverQueryLogConfigId(std::move(value)); return *this;}
    inline ResolverQueryLogConfigAssociation& WithResolverQueryLogConfigId(const char* value) { SetResolverQueryLogConfigId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon VPC that is associated with the query logging
     * configuration.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline ResolverQueryLogConfigAssociation& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline ResolverQueryLogConfigAssociation& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline ResolverQueryLogConfigAssociation& WithResourceId(const char* value) { SetResourceId(value); return *this;}
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
    inline const ResolverQueryLogConfigAssociationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ResolverQueryLogConfigAssociationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ResolverQueryLogConfigAssociationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ResolverQueryLogConfigAssociation& WithStatus(const ResolverQueryLogConfigAssociationStatus& value) { SetStatus(value); return *this;}
    inline ResolverQueryLogConfigAssociation& WithStatus(ResolverQueryLogConfigAssociationStatus&& value) { SetStatus(std::move(value)); return *this;}
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
    inline const ResolverQueryLogConfigAssociationError& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const ResolverQueryLogConfigAssociationError& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(ResolverQueryLogConfigAssociationError&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline ResolverQueryLogConfigAssociation& WithError(const ResolverQueryLogConfigAssociationError& value) { SetError(value); return *this;}
    inline ResolverQueryLogConfigAssociation& WithError(ResolverQueryLogConfigAssociationError&& value) { SetError(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains additional information about the error. If the value or
     * <code>Error</code> is null, the value of <code>ErrorMessage</code> also is
     * null.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline ResolverQueryLogConfigAssociation& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline ResolverQueryLogConfigAssociation& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline ResolverQueryLogConfigAssociation& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the VPC was associated with the query logging
     * configuration, in Unix time format and Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::String& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::String&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline void SetCreationTime(const char* value) { m_creationTimeHasBeenSet = true; m_creationTime.assign(value); }
    inline ResolverQueryLogConfigAssociation& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}
    inline ResolverQueryLogConfigAssociation& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}
    inline ResolverQueryLogConfigAssociation& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_resolverQueryLogConfigId;
    bool m_resolverQueryLogConfigIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    ResolverQueryLogConfigAssociationStatus m_status;
    bool m_statusHasBeenSet = false;

    ResolverQueryLogConfigAssociationError m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
