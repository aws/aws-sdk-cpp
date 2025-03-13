/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/ResolverQueryLogConfigStatus.h>
#include <aws/route53resolver/model/ShareStatus.h>
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
   * <p>In the response to a <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverQueryLogConfig.html">CreateResolverQueryLogConfig</a>,
   * <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_DeleteResolverQueryLogConfig.html">DeleteResolverQueryLogConfig</a>,
   * <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverQueryLogConfig.html">GetResolverQueryLogConfig</a>,
   * or <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverQueryLogConfigs.html">ListResolverQueryLogConfigs</a>
   * request, a complex type that contains settings for one query logging
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ResolverQueryLogConfig">AWS
   * API Reference</a></p>
   */
  class ResolverQueryLogConfig
  {
  public:
    AWS_ROUTE53RESOLVER_API ResolverQueryLogConfig() = default;
    AWS_ROUTE53RESOLVER_API ResolverQueryLogConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API ResolverQueryLogConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID for the query logging configuration.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ResolverQueryLogConfig& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID for the account that created the query
     * logging configuration. </p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    ResolverQueryLogConfig& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the specified query logging configuration. Valid values include
     * the following:</p> <ul> <li> <p> <code>CREATING</code>: Resolver is creating the
     * query logging configuration.</p> </li> <li> <p> <code>CREATED</code>: The query
     * logging configuration was successfully created. Resolver is logging queries that
     * originate in the specified VPC.</p> </li> <li> <p> <code>DELETING</code>:
     * Resolver is deleting this query logging configuration.</p> </li> <li> <p>
     * <code>FAILED</code>: Resolver can't deliver logs to the location that is
     * specified in the query logging configuration. Here are two common causes:</p>
     * <ul> <li> <p>The specified destination (for example, an Amazon S3 bucket) was
     * deleted.</p> </li> <li> <p>Permissions don't allow sending logs to the
     * destination.</p> </li> </ul> </li> </ul>
     */
    inline ResolverQueryLogConfigStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ResolverQueryLogConfigStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ResolverQueryLogConfig& WithStatus(ResolverQueryLogConfigStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An indication of whether the query logging configuration is shared with other
     * Amazon Web Services accounts, or was shared with the current account by another
     * Amazon Web Services account. Sharing is configured through Resource Access
     * Manager (RAM).</p>
     */
    inline ShareStatus GetShareStatus() const { return m_shareStatus; }
    inline bool ShareStatusHasBeenSet() const { return m_shareStatusHasBeenSet; }
    inline void SetShareStatus(ShareStatus value) { m_shareStatusHasBeenSet = true; m_shareStatus = value; }
    inline ResolverQueryLogConfig& WithShareStatus(ShareStatus value) { SetShareStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of VPCs that are associated with the query logging
     * configuration.</p>
     */
    inline int GetAssociationCount() const { return m_associationCount; }
    inline bool AssociationCountHasBeenSet() const { return m_associationCountHasBeenSet; }
    inline void SetAssociationCount(int value) { m_associationCountHasBeenSet = true; m_associationCount = value; }
    inline ResolverQueryLogConfig& WithAssociationCount(int value) { SetAssociationCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the query logging configuration.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ResolverQueryLogConfig& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the query logging configuration. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ResolverQueryLogConfig& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the resource that you want Resolver to send query logs: an Amazon
     * S3 bucket, a CloudWatch Logs log group, or a Kinesis Data Firehose delivery
     * stream.</p>
     */
    inline const Aws::String& GetDestinationArn() const { return m_destinationArn; }
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }
    template<typename DestinationArnT = Aws::String>
    void SetDestinationArn(DestinationArnT&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::forward<DestinationArnT>(value); }
    template<typename DestinationArnT = Aws::String>
    ResolverQueryLogConfig& WithDestinationArn(DestinationArnT&& value) { SetDestinationArn(std::forward<DestinationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique string that identifies the request that created the query logging
     * configuration. The <code>CreatorRequestId</code> allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const { return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    template<typename CreatorRequestIdT = Aws::String>
    void SetCreatorRequestId(CreatorRequestIdT&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::forward<CreatorRequestIdT>(value); }
    template<typename CreatorRequestIdT = Aws::String>
    ResolverQueryLogConfig& WithCreatorRequestId(CreatorRequestIdT&& value) { SetCreatorRequestId(std::forward<CreatorRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the query logging configuration was created, in Unix
     * time format and Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::String& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::String>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::String>
    ResolverQueryLogConfig& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    ResolverQueryLogConfigStatus m_status{ResolverQueryLogConfigStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ShareStatus m_shareStatus{ShareStatus::NOT_SET};
    bool m_shareStatusHasBeenSet = false;

    int m_associationCount{0};
    bool m_associationCountHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
