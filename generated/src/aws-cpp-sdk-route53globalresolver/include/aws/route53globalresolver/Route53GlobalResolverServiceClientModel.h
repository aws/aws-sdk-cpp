/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53globalresolver/Route53GlobalResolverEndpointProvider.h>
#include <aws/route53globalresolver/Route53GlobalResolverErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in Route53GlobalResolverClient header */
#include <aws/route53globalresolver/model/AssociateHostedZoneResult.h>
#include <aws/route53globalresolver/model/BatchCreateFirewallRuleSdkResult.h>
#include <aws/route53globalresolver/model/BatchDeleteFirewallRuleSdkResult.h>
#include <aws/route53globalresolver/model/BatchUpdateFirewallRuleSdkResult.h>
#include <aws/route53globalresolver/model/CreateAccessSourceResult.h>
#include <aws/route53globalresolver/model/CreateAccessTokenResult.h>
#include <aws/route53globalresolver/model/CreateDNSViewResult.h>
#include <aws/route53globalresolver/model/CreateFirewallDomainListResult.h>
#include <aws/route53globalresolver/model/CreateFirewallRuleResult.h>
#include <aws/route53globalresolver/model/CreateGlobalResolverResult.h>
#include <aws/route53globalresolver/model/DeleteAccessSourceResult.h>
#include <aws/route53globalresolver/model/DeleteAccessTokenResult.h>
#include <aws/route53globalresolver/model/DeleteDNSViewResult.h>
#include <aws/route53globalresolver/model/DeleteFirewallDomainListResult.h>
#include <aws/route53globalresolver/model/DeleteFirewallRuleResult.h>
#include <aws/route53globalresolver/model/DeleteGlobalResolverResult.h>
#include <aws/route53globalresolver/model/DisableDNSViewResult.h>
#include <aws/route53globalresolver/model/DisassociateHostedZoneResult.h>
#include <aws/route53globalresolver/model/EnableDNSViewResult.h>
#include <aws/route53globalresolver/model/GetAccessSourceResult.h>
#include <aws/route53globalresolver/model/GetAccessTokenResult.h>
#include <aws/route53globalresolver/model/GetDNSViewResult.h>
#include <aws/route53globalresolver/model/GetFirewallDomainListResult.h>
#include <aws/route53globalresolver/model/GetFirewallRuleResult.h>
#include <aws/route53globalresolver/model/GetGlobalResolverResult.h>
#include <aws/route53globalresolver/model/GetHostedZoneAssociationResult.h>
#include <aws/route53globalresolver/model/GetManagedFirewallDomainListResult.h>
#include <aws/route53globalresolver/model/ImportFirewallDomainsResult.h>
#include <aws/route53globalresolver/model/ListAccessSourcesRequest.h>
#include <aws/route53globalresolver/model/ListAccessSourcesResult.h>
#include <aws/route53globalresolver/model/ListAccessTokensResult.h>
#include <aws/route53globalresolver/model/ListDNSViewsResult.h>
#include <aws/route53globalresolver/model/ListFirewallDomainListsRequest.h>
#include <aws/route53globalresolver/model/ListFirewallDomainListsResult.h>
#include <aws/route53globalresolver/model/ListFirewallDomainsResult.h>
#include <aws/route53globalresolver/model/ListFirewallRulesResult.h>
#include <aws/route53globalresolver/model/ListGlobalResolversRequest.h>
#include <aws/route53globalresolver/model/ListGlobalResolversResult.h>
#include <aws/route53globalresolver/model/ListHostedZoneAssociationsResult.h>
#include <aws/route53globalresolver/model/ListManagedFirewallDomainListsResult.h>
#include <aws/route53globalresolver/model/ListTagsForResourceResult.h>
#include <aws/route53globalresolver/model/TagResourceResult.h>
#include <aws/route53globalresolver/model/UntagResourceResult.h>
#include <aws/route53globalresolver/model/UpdateAccessSourceResult.h>
#include <aws/route53globalresolver/model/UpdateAccessTokenResult.h>
#include <aws/route53globalresolver/model/UpdateDNSViewResult.h>
#include <aws/route53globalresolver/model/UpdateFirewallDomainsResult.h>
#include <aws/route53globalresolver/model/UpdateFirewallRuleResult.h>
#include <aws/route53globalresolver/model/UpdateGlobalResolverResult.h>
#include <aws/route53globalresolver/model/UpdateHostedZoneAssociationResult.h>
/* End of service model headers required in Route53GlobalResolverClient header */

namespace Aws {
namespace Http {
class HttpClient;
class HttpClientFactory;
}  // namespace Http

namespace Utils {
template <typename R, typename E>
class Outcome;

namespace Threading {
class Executor;
}  // namespace Threading
}  // namespace Utils

namespace Auth {
class AWSCredentials;
class AWSCredentialsProvider;
}  // namespace Auth

namespace Client {
class RetryStrategy;
}  // namespace Client

namespace Route53GlobalResolver {
using Route53GlobalResolverClientConfiguration = Aws::Client::GenericClientConfiguration;
using Route53GlobalResolverEndpointProviderBase = Aws::Route53GlobalResolver::Endpoint::Route53GlobalResolverEndpointProviderBase;
using Route53GlobalResolverEndpointProvider = Aws::Route53GlobalResolver::Endpoint::Route53GlobalResolverEndpointProvider;

namespace Model {
/* Service model forward declarations required in Route53GlobalResolverClient header */
class AssociateHostedZoneRequest;
class BatchCreateFirewallRuleRequest;
class BatchDeleteFirewallRuleRequest;
class BatchUpdateFirewallRuleRequest;
class CreateAccessSourceRequest;
class CreateAccessTokenRequest;
class CreateDNSViewRequest;
class CreateFirewallDomainListRequest;
class CreateFirewallRuleRequest;
class CreateGlobalResolverRequest;
class DeleteAccessSourceRequest;
class DeleteAccessTokenRequest;
class DeleteDNSViewRequest;
class DeleteFirewallDomainListRequest;
class DeleteFirewallRuleRequest;
class DeleteGlobalResolverRequest;
class DisableDNSViewRequest;
class DisassociateHostedZoneRequest;
class EnableDNSViewRequest;
class GetAccessSourceRequest;
class GetAccessTokenRequest;
class GetDNSViewRequest;
class GetFirewallDomainListRequest;
class GetFirewallRuleRequest;
class GetGlobalResolverRequest;
class GetHostedZoneAssociationRequest;
class GetManagedFirewallDomainListRequest;
class ImportFirewallDomainsRequest;
class ListAccessSourcesRequest;
class ListAccessTokensRequest;
class ListDNSViewsRequest;
class ListFirewallDomainListsRequest;
class ListFirewallDomainsRequest;
class ListFirewallRulesRequest;
class ListGlobalResolversRequest;
class ListHostedZoneAssociationsRequest;
class ListManagedFirewallDomainListsRequest;
class ListTagsForResourceRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateAccessSourceRequest;
class UpdateAccessTokenRequest;
class UpdateDNSViewRequest;
class UpdateFirewallDomainsRequest;
class UpdateFirewallRuleRequest;
class UpdateGlobalResolverRequest;
class UpdateHostedZoneAssociationRequest;
/* End of service model forward declarations required in Route53GlobalResolverClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<AssociateHostedZoneResult, Route53GlobalResolverError> AssociateHostedZoneOutcome;
typedef Aws::Utils::Outcome<BatchCreateFirewallRuleSdkResult, Route53GlobalResolverError> BatchCreateFirewallRuleOutcome;
typedef Aws::Utils::Outcome<BatchDeleteFirewallRuleSdkResult, Route53GlobalResolverError> BatchDeleteFirewallRuleOutcome;
typedef Aws::Utils::Outcome<BatchUpdateFirewallRuleSdkResult, Route53GlobalResolverError> BatchUpdateFirewallRuleOutcome;
typedef Aws::Utils::Outcome<CreateAccessSourceResult, Route53GlobalResolverError> CreateAccessSourceOutcome;
typedef Aws::Utils::Outcome<CreateAccessTokenResult, Route53GlobalResolverError> CreateAccessTokenOutcome;
typedef Aws::Utils::Outcome<CreateDNSViewResult, Route53GlobalResolverError> CreateDNSViewOutcome;
typedef Aws::Utils::Outcome<CreateFirewallDomainListResult, Route53GlobalResolverError> CreateFirewallDomainListOutcome;
typedef Aws::Utils::Outcome<CreateFirewallRuleResult, Route53GlobalResolverError> CreateFirewallRuleOutcome;
typedef Aws::Utils::Outcome<CreateGlobalResolverResult, Route53GlobalResolverError> CreateGlobalResolverOutcome;
typedef Aws::Utils::Outcome<DeleteAccessSourceResult, Route53GlobalResolverError> DeleteAccessSourceOutcome;
typedef Aws::Utils::Outcome<DeleteAccessTokenResult, Route53GlobalResolverError> DeleteAccessTokenOutcome;
typedef Aws::Utils::Outcome<DeleteDNSViewResult, Route53GlobalResolverError> DeleteDNSViewOutcome;
typedef Aws::Utils::Outcome<DeleteFirewallDomainListResult, Route53GlobalResolverError> DeleteFirewallDomainListOutcome;
typedef Aws::Utils::Outcome<DeleteFirewallRuleResult, Route53GlobalResolverError> DeleteFirewallRuleOutcome;
typedef Aws::Utils::Outcome<DeleteGlobalResolverResult, Route53GlobalResolverError> DeleteGlobalResolverOutcome;
typedef Aws::Utils::Outcome<DisableDNSViewResult, Route53GlobalResolverError> DisableDNSViewOutcome;
typedef Aws::Utils::Outcome<DisassociateHostedZoneResult, Route53GlobalResolverError> DisassociateHostedZoneOutcome;
typedef Aws::Utils::Outcome<EnableDNSViewResult, Route53GlobalResolverError> EnableDNSViewOutcome;
typedef Aws::Utils::Outcome<GetAccessSourceResult, Route53GlobalResolverError> GetAccessSourceOutcome;
typedef Aws::Utils::Outcome<GetAccessTokenResult, Route53GlobalResolverError> GetAccessTokenOutcome;
typedef Aws::Utils::Outcome<GetDNSViewResult, Route53GlobalResolverError> GetDNSViewOutcome;
typedef Aws::Utils::Outcome<GetFirewallDomainListResult, Route53GlobalResolverError> GetFirewallDomainListOutcome;
typedef Aws::Utils::Outcome<GetFirewallRuleResult, Route53GlobalResolverError> GetFirewallRuleOutcome;
typedef Aws::Utils::Outcome<GetGlobalResolverResult, Route53GlobalResolverError> GetGlobalResolverOutcome;
typedef Aws::Utils::Outcome<GetHostedZoneAssociationResult, Route53GlobalResolverError> GetHostedZoneAssociationOutcome;
typedef Aws::Utils::Outcome<GetManagedFirewallDomainListResult, Route53GlobalResolverError> GetManagedFirewallDomainListOutcome;
typedef Aws::Utils::Outcome<ImportFirewallDomainsResult, Route53GlobalResolverError> ImportFirewallDomainsOutcome;
typedef Aws::Utils::Outcome<ListAccessSourcesResult, Route53GlobalResolverError> ListAccessSourcesOutcome;
typedef Aws::Utils::Outcome<ListAccessTokensResult, Route53GlobalResolverError> ListAccessTokensOutcome;
typedef Aws::Utils::Outcome<ListDNSViewsResult, Route53GlobalResolverError> ListDNSViewsOutcome;
typedef Aws::Utils::Outcome<ListFirewallDomainListsResult, Route53GlobalResolverError> ListFirewallDomainListsOutcome;
typedef Aws::Utils::Outcome<ListFirewallDomainsResult, Route53GlobalResolverError> ListFirewallDomainsOutcome;
typedef Aws::Utils::Outcome<ListFirewallRulesResult, Route53GlobalResolverError> ListFirewallRulesOutcome;
typedef Aws::Utils::Outcome<ListGlobalResolversResult, Route53GlobalResolverError> ListGlobalResolversOutcome;
typedef Aws::Utils::Outcome<ListHostedZoneAssociationsResult, Route53GlobalResolverError> ListHostedZoneAssociationsOutcome;
typedef Aws::Utils::Outcome<ListManagedFirewallDomainListsResult, Route53GlobalResolverError> ListManagedFirewallDomainListsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, Route53GlobalResolverError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, Route53GlobalResolverError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, Route53GlobalResolverError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateAccessSourceResult, Route53GlobalResolverError> UpdateAccessSourceOutcome;
typedef Aws::Utils::Outcome<UpdateAccessTokenResult, Route53GlobalResolverError> UpdateAccessTokenOutcome;
typedef Aws::Utils::Outcome<UpdateDNSViewResult, Route53GlobalResolverError> UpdateDNSViewOutcome;
typedef Aws::Utils::Outcome<UpdateFirewallDomainsResult, Route53GlobalResolverError> UpdateFirewallDomainsOutcome;
typedef Aws::Utils::Outcome<UpdateFirewallRuleResult, Route53GlobalResolverError> UpdateFirewallRuleOutcome;
typedef Aws::Utils::Outcome<UpdateGlobalResolverResult, Route53GlobalResolverError> UpdateGlobalResolverOutcome;
typedef Aws::Utils::Outcome<UpdateHostedZoneAssociationResult, Route53GlobalResolverError> UpdateHostedZoneAssociationOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<AssociateHostedZoneOutcome> AssociateHostedZoneOutcomeCallable;
typedef std::future<BatchCreateFirewallRuleOutcome> BatchCreateFirewallRuleOutcomeCallable;
typedef std::future<BatchDeleteFirewallRuleOutcome> BatchDeleteFirewallRuleOutcomeCallable;
typedef std::future<BatchUpdateFirewallRuleOutcome> BatchUpdateFirewallRuleOutcomeCallable;
typedef std::future<CreateAccessSourceOutcome> CreateAccessSourceOutcomeCallable;
typedef std::future<CreateAccessTokenOutcome> CreateAccessTokenOutcomeCallable;
typedef std::future<CreateDNSViewOutcome> CreateDNSViewOutcomeCallable;
typedef std::future<CreateFirewallDomainListOutcome> CreateFirewallDomainListOutcomeCallable;
typedef std::future<CreateFirewallRuleOutcome> CreateFirewallRuleOutcomeCallable;
typedef std::future<CreateGlobalResolverOutcome> CreateGlobalResolverOutcomeCallable;
typedef std::future<DeleteAccessSourceOutcome> DeleteAccessSourceOutcomeCallable;
typedef std::future<DeleteAccessTokenOutcome> DeleteAccessTokenOutcomeCallable;
typedef std::future<DeleteDNSViewOutcome> DeleteDNSViewOutcomeCallable;
typedef std::future<DeleteFirewallDomainListOutcome> DeleteFirewallDomainListOutcomeCallable;
typedef std::future<DeleteFirewallRuleOutcome> DeleteFirewallRuleOutcomeCallable;
typedef std::future<DeleteGlobalResolverOutcome> DeleteGlobalResolverOutcomeCallable;
typedef std::future<DisableDNSViewOutcome> DisableDNSViewOutcomeCallable;
typedef std::future<DisassociateHostedZoneOutcome> DisassociateHostedZoneOutcomeCallable;
typedef std::future<EnableDNSViewOutcome> EnableDNSViewOutcomeCallable;
typedef std::future<GetAccessSourceOutcome> GetAccessSourceOutcomeCallable;
typedef std::future<GetAccessTokenOutcome> GetAccessTokenOutcomeCallable;
typedef std::future<GetDNSViewOutcome> GetDNSViewOutcomeCallable;
typedef std::future<GetFirewallDomainListOutcome> GetFirewallDomainListOutcomeCallable;
typedef std::future<GetFirewallRuleOutcome> GetFirewallRuleOutcomeCallable;
typedef std::future<GetGlobalResolverOutcome> GetGlobalResolverOutcomeCallable;
typedef std::future<GetHostedZoneAssociationOutcome> GetHostedZoneAssociationOutcomeCallable;
typedef std::future<GetManagedFirewallDomainListOutcome> GetManagedFirewallDomainListOutcomeCallable;
typedef std::future<ImportFirewallDomainsOutcome> ImportFirewallDomainsOutcomeCallable;
typedef std::future<ListAccessSourcesOutcome> ListAccessSourcesOutcomeCallable;
typedef std::future<ListAccessTokensOutcome> ListAccessTokensOutcomeCallable;
typedef std::future<ListDNSViewsOutcome> ListDNSViewsOutcomeCallable;
typedef std::future<ListFirewallDomainListsOutcome> ListFirewallDomainListsOutcomeCallable;
typedef std::future<ListFirewallDomainsOutcome> ListFirewallDomainsOutcomeCallable;
typedef std::future<ListFirewallRulesOutcome> ListFirewallRulesOutcomeCallable;
typedef std::future<ListGlobalResolversOutcome> ListGlobalResolversOutcomeCallable;
typedef std::future<ListHostedZoneAssociationsOutcome> ListHostedZoneAssociationsOutcomeCallable;
typedef std::future<ListManagedFirewallDomainListsOutcome> ListManagedFirewallDomainListsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateAccessSourceOutcome> UpdateAccessSourceOutcomeCallable;
typedef std::future<UpdateAccessTokenOutcome> UpdateAccessTokenOutcomeCallable;
typedef std::future<UpdateDNSViewOutcome> UpdateDNSViewOutcomeCallable;
typedef std::future<UpdateFirewallDomainsOutcome> UpdateFirewallDomainsOutcomeCallable;
typedef std::future<UpdateFirewallRuleOutcome> UpdateFirewallRuleOutcomeCallable;
typedef std::future<UpdateGlobalResolverOutcome> UpdateGlobalResolverOutcomeCallable;
typedef std::future<UpdateHostedZoneAssociationOutcome> UpdateHostedZoneAssociationOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class Route53GlobalResolverClient;

/* Service model async handlers definitions */
typedef std::function<void(const Route53GlobalResolverClient*, const Model::AssociateHostedZoneRequest&,
                           const Model::AssociateHostedZoneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AssociateHostedZoneResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::BatchCreateFirewallRuleRequest&,
                           const Model::BatchCreateFirewallRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchCreateFirewallRuleResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::BatchDeleteFirewallRuleRequest&,
                           const Model::BatchDeleteFirewallRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchDeleteFirewallRuleResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::BatchUpdateFirewallRuleRequest&,
                           const Model::BatchUpdateFirewallRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchUpdateFirewallRuleResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::CreateAccessSourceRequest&,
                           const Model::CreateAccessSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateAccessSourceResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::CreateAccessTokenRequest&,
                           const Model::CreateAccessTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateAccessTokenResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::CreateDNSViewRequest&, const Model::CreateDNSViewOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateDNSViewResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::CreateFirewallDomainListRequest&,
                           const Model::CreateFirewallDomainListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateFirewallDomainListResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::CreateFirewallRuleRequest&,
                           const Model::CreateFirewallRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateFirewallRuleResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::CreateGlobalResolverRequest&,
                           const Model::CreateGlobalResolverOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateGlobalResolverResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::DeleteAccessSourceRequest&,
                           const Model::DeleteAccessSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteAccessSourceResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::DeleteAccessTokenRequest&,
                           const Model::DeleteAccessTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteAccessTokenResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::DeleteDNSViewRequest&, const Model::DeleteDNSViewOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteDNSViewResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::DeleteFirewallDomainListRequest&,
                           const Model::DeleteFirewallDomainListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteFirewallDomainListResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::DeleteFirewallRuleRequest&,
                           const Model::DeleteFirewallRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteFirewallRuleResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::DeleteGlobalResolverRequest&,
                           const Model::DeleteGlobalResolverOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteGlobalResolverResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::DisableDNSViewRequest&, const Model::DisableDNSViewOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DisableDNSViewResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::DisassociateHostedZoneRequest&,
                           const Model::DisassociateHostedZoneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DisassociateHostedZoneResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::EnableDNSViewRequest&, const Model::EnableDNSViewOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    EnableDNSViewResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::GetAccessSourceRequest&, const Model::GetAccessSourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAccessSourceResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::GetAccessTokenRequest&, const Model::GetAccessTokenOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAccessTokenResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::GetDNSViewRequest&, const Model::GetDNSViewOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetDNSViewResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::GetFirewallDomainListRequest&,
                           const Model::GetFirewallDomainListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetFirewallDomainListResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::GetFirewallRuleRequest&, const Model::GetFirewallRuleOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetFirewallRuleResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::GetGlobalResolverRequest&,
                           const Model::GetGlobalResolverOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetGlobalResolverResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::GetHostedZoneAssociationRequest&,
                           const Model::GetHostedZoneAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetHostedZoneAssociationResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::GetManagedFirewallDomainListRequest&,
                           const Model::GetManagedFirewallDomainListOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetManagedFirewallDomainListResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::ImportFirewallDomainsRequest&,
                           const Model::ImportFirewallDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ImportFirewallDomainsResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::ListAccessSourcesRequest&,
                           const Model::ListAccessSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAccessSourcesResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::ListAccessTokensRequest&, const Model::ListAccessTokensOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAccessTokensResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::ListDNSViewsRequest&, const Model::ListDNSViewsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListDNSViewsResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::ListFirewallDomainListsRequest&,
                           const Model::ListFirewallDomainListsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListFirewallDomainListsResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::ListFirewallDomainsRequest&,
                           const Model::ListFirewallDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListFirewallDomainsResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::ListFirewallRulesRequest&,
                           const Model::ListFirewallRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListFirewallRulesResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::ListGlobalResolversRequest&,
                           const Model::ListGlobalResolversOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListGlobalResolversResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::ListHostedZoneAssociationsRequest&,
                           const Model::ListHostedZoneAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListHostedZoneAssociationsResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::ListManagedFirewallDomainListsRequest&,
                           const Model::ListManagedFirewallDomainListsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListManagedFirewallDomainListsResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::ListTagsForResourceRequest&,
                           const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::UpdateAccessSourceRequest&,
                           const Model::UpdateAccessSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateAccessSourceResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::UpdateAccessTokenRequest&,
                           const Model::UpdateAccessTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateAccessTokenResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::UpdateDNSViewRequest&, const Model::UpdateDNSViewOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateDNSViewResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::UpdateFirewallDomainsRequest&,
                           const Model::UpdateFirewallDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateFirewallDomainsResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::UpdateFirewallRuleRequest&,
                           const Model::UpdateFirewallRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateFirewallRuleResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::UpdateGlobalResolverRequest&,
                           const Model::UpdateGlobalResolverOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateGlobalResolverResponseReceivedHandler;
typedef std::function<void(const Route53GlobalResolverClient*, const Model::UpdateHostedZoneAssociationRequest&,
                           const Model::UpdateHostedZoneAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateHostedZoneAssociationResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace Route53GlobalResolver
}  // namespace Aws
