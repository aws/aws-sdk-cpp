/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/proton/ProtonErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/proton/ProtonEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ProtonClient header */
#include <aws/proton/model/AcceptEnvironmentAccountConnectionResult.h>
#include <aws/proton/model/CancelComponentDeploymentResult.h>
#include <aws/proton/model/CancelEnvironmentDeploymentResult.h>
#include <aws/proton/model/CancelServiceInstanceDeploymentResult.h>
#include <aws/proton/model/CancelServicePipelineDeploymentResult.h>
#include <aws/proton/model/CreateComponentResult.h>
#include <aws/proton/model/CreateEnvironmentResult.h>
#include <aws/proton/model/CreateEnvironmentAccountConnectionResult.h>
#include <aws/proton/model/CreateEnvironmentTemplateResult.h>
#include <aws/proton/model/CreateEnvironmentTemplateVersionResult.h>
#include <aws/proton/model/CreateRepositoryResult.h>
#include <aws/proton/model/CreateServiceResult.h>
#include <aws/proton/model/CreateServiceTemplateResult.h>
#include <aws/proton/model/CreateServiceTemplateVersionResult.h>
#include <aws/proton/model/CreateTemplateSyncConfigResult.h>
#include <aws/proton/model/DeleteComponentResult.h>
#include <aws/proton/model/DeleteEnvironmentResult.h>
#include <aws/proton/model/DeleteEnvironmentAccountConnectionResult.h>
#include <aws/proton/model/DeleteEnvironmentTemplateResult.h>
#include <aws/proton/model/DeleteEnvironmentTemplateVersionResult.h>
#include <aws/proton/model/DeleteRepositoryResult.h>
#include <aws/proton/model/DeleteServiceResult.h>
#include <aws/proton/model/DeleteServiceTemplateResult.h>
#include <aws/proton/model/DeleteServiceTemplateVersionResult.h>
#include <aws/proton/model/DeleteTemplateSyncConfigResult.h>
#include <aws/proton/model/GetAccountSettingsResult.h>
#include <aws/proton/model/GetComponentResult.h>
#include <aws/proton/model/GetEnvironmentResult.h>
#include <aws/proton/model/GetEnvironmentAccountConnectionResult.h>
#include <aws/proton/model/GetEnvironmentTemplateResult.h>
#include <aws/proton/model/GetEnvironmentTemplateVersionResult.h>
#include <aws/proton/model/GetRepositoryResult.h>
#include <aws/proton/model/GetRepositorySyncStatusResult.h>
#include <aws/proton/model/GetServiceResult.h>
#include <aws/proton/model/GetServiceInstanceResult.h>
#include <aws/proton/model/GetServiceTemplateResult.h>
#include <aws/proton/model/GetServiceTemplateVersionResult.h>
#include <aws/proton/model/GetTemplateSyncConfigResult.h>
#include <aws/proton/model/GetTemplateSyncStatusResult.h>
#include <aws/proton/model/ListComponentOutputsResult.h>
#include <aws/proton/model/ListComponentProvisionedResourcesResult.h>
#include <aws/proton/model/ListComponentsResult.h>
#include <aws/proton/model/ListEnvironmentAccountConnectionsResult.h>
#include <aws/proton/model/ListEnvironmentOutputsResult.h>
#include <aws/proton/model/ListEnvironmentProvisionedResourcesResult.h>
#include <aws/proton/model/ListEnvironmentTemplateVersionsResult.h>
#include <aws/proton/model/ListEnvironmentTemplatesResult.h>
#include <aws/proton/model/ListEnvironmentsResult.h>
#include <aws/proton/model/ListRepositoriesResult.h>
#include <aws/proton/model/ListRepositorySyncDefinitionsResult.h>
#include <aws/proton/model/ListServiceInstanceOutputsResult.h>
#include <aws/proton/model/ListServiceInstanceProvisionedResourcesResult.h>
#include <aws/proton/model/ListServiceInstancesResult.h>
#include <aws/proton/model/ListServicePipelineOutputsResult.h>
#include <aws/proton/model/ListServicePipelineProvisionedResourcesResult.h>
#include <aws/proton/model/ListServiceTemplateVersionsResult.h>
#include <aws/proton/model/ListServiceTemplatesResult.h>
#include <aws/proton/model/ListServicesResult.h>
#include <aws/proton/model/ListTagsForResourceResult.h>
#include <aws/proton/model/NotifyResourceDeploymentStatusChangeResult.h>
#include <aws/proton/model/RejectEnvironmentAccountConnectionResult.h>
#include <aws/proton/model/TagResourceResult.h>
#include <aws/proton/model/UntagResourceResult.h>
#include <aws/proton/model/UpdateAccountSettingsResult.h>
#include <aws/proton/model/UpdateComponentResult.h>
#include <aws/proton/model/UpdateEnvironmentResult.h>
#include <aws/proton/model/UpdateEnvironmentAccountConnectionResult.h>
#include <aws/proton/model/UpdateEnvironmentTemplateResult.h>
#include <aws/proton/model/UpdateEnvironmentTemplateVersionResult.h>
#include <aws/proton/model/UpdateServiceResult.h>
#include <aws/proton/model/UpdateServiceInstanceResult.h>
#include <aws/proton/model/UpdateServicePipelineResult.h>
#include <aws/proton/model/UpdateServiceTemplateResult.h>
#include <aws/proton/model/UpdateServiceTemplateVersionResult.h>
#include <aws/proton/model/UpdateTemplateSyncConfigResult.h>
/* End of service model headers required in ProtonClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace Proton
  {
    using ProtonClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ProtonEndpointProviderBase = Aws::Proton::Endpoint::ProtonEndpointProviderBase;
    using ProtonEndpointProvider = Aws::Proton::Endpoint::ProtonEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ProtonClient header */
      class AcceptEnvironmentAccountConnectionRequest;
      class CancelComponentDeploymentRequest;
      class CancelEnvironmentDeploymentRequest;
      class CancelServiceInstanceDeploymentRequest;
      class CancelServicePipelineDeploymentRequest;
      class CreateComponentRequest;
      class CreateEnvironmentRequest;
      class CreateEnvironmentAccountConnectionRequest;
      class CreateEnvironmentTemplateRequest;
      class CreateEnvironmentTemplateVersionRequest;
      class CreateRepositoryRequest;
      class CreateServiceRequest;
      class CreateServiceTemplateRequest;
      class CreateServiceTemplateVersionRequest;
      class CreateTemplateSyncConfigRequest;
      class DeleteComponentRequest;
      class DeleteEnvironmentRequest;
      class DeleteEnvironmentAccountConnectionRequest;
      class DeleteEnvironmentTemplateRequest;
      class DeleteEnvironmentTemplateVersionRequest;
      class DeleteRepositoryRequest;
      class DeleteServiceRequest;
      class DeleteServiceTemplateRequest;
      class DeleteServiceTemplateVersionRequest;
      class DeleteTemplateSyncConfigRequest;
      class GetAccountSettingsRequest;
      class GetComponentRequest;
      class GetEnvironmentRequest;
      class GetEnvironmentAccountConnectionRequest;
      class GetEnvironmentTemplateRequest;
      class GetEnvironmentTemplateVersionRequest;
      class GetRepositoryRequest;
      class GetRepositorySyncStatusRequest;
      class GetServiceRequest;
      class GetServiceInstanceRequest;
      class GetServiceTemplateRequest;
      class GetServiceTemplateVersionRequest;
      class GetTemplateSyncConfigRequest;
      class GetTemplateSyncStatusRequest;
      class ListComponentOutputsRequest;
      class ListComponentProvisionedResourcesRequest;
      class ListComponentsRequest;
      class ListEnvironmentAccountConnectionsRequest;
      class ListEnvironmentOutputsRequest;
      class ListEnvironmentProvisionedResourcesRequest;
      class ListEnvironmentTemplateVersionsRequest;
      class ListEnvironmentTemplatesRequest;
      class ListEnvironmentsRequest;
      class ListRepositoriesRequest;
      class ListRepositorySyncDefinitionsRequest;
      class ListServiceInstanceOutputsRequest;
      class ListServiceInstanceProvisionedResourcesRequest;
      class ListServiceInstancesRequest;
      class ListServicePipelineOutputsRequest;
      class ListServicePipelineProvisionedResourcesRequest;
      class ListServiceTemplateVersionsRequest;
      class ListServiceTemplatesRequest;
      class ListServicesRequest;
      class ListTagsForResourceRequest;
      class NotifyResourceDeploymentStatusChangeRequest;
      class RejectEnvironmentAccountConnectionRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAccountSettingsRequest;
      class UpdateComponentRequest;
      class UpdateEnvironmentRequest;
      class UpdateEnvironmentAccountConnectionRequest;
      class UpdateEnvironmentTemplateRequest;
      class UpdateEnvironmentTemplateVersionRequest;
      class UpdateServiceRequest;
      class UpdateServiceInstanceRequest;
      class UpdateServicePipelineRequest;
      class UpdateServiceTemplateRequest;
      class UpdateServiceTemplateVersionRequest;
      class UpdateTemplateSyncConfigRequest;
      /* End of service model forward declarations required in ProtonClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AcceptEnvironmentAccountConnectionResult, ProtonError> AcceptEnvironmentAccountConnectionOutcome;
      typedef Aws::Utils::Outcome<CancelComponentDeploymentResult, ProtonError> CancelComponentDeploymentOutcome;
      typedef Aws::Utils::Outcome<CancelEnvironmentDeploymentResult, ProtonError> CancelEnvironmentDeploymentOutcome;
      typedef Aws::Utils::Outcome<CancelServiceInstanceDeploymentResult, ProtonError> CancelServiceInstanceDeploymentOutcome;
      typedef Aws::Utils::Outcome<CancelServicePipelineDeploymentResult, ProtonError> CancelServicePipelineDeploymentOutcome;
      typedef Aws::Utils::Outcome<CreateComponentResult, ProtonError> CreateComponentOutcome;
      typedef Aws::Utils::Outcome<CreateEnvironmentResult, ProtonError> CreateEnvironmentOutcome;
      typedef Aws::Utils::Outcome<CreateEnvironmentAccountConnectionResult, ProtonError> CreateEnvironmentAccountConnectionOutcome;
      typedef Aws::Utils::Outcome<CreateEnvironmentTemplateResult, ProtonError> CreateEnvironmentTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateEnvironmentTemplateVersionResult, ProtonError> CreateEnvironmentTemplateVersionOutcome;
      typedef Aws::Utils::Outcome<CreateRepositoryResult, ProtonError> CreateRepositoryOutcome;
      typedef Aws::Utils::Outcome<CreateServiceResult, ProtonError> CreateServiceOutcome;
      typedef Aws::Utils::Outcome<CreateServiceTemplateResult, ProtonError> CreateServiceTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateServiceTemplateVersionResult, ProtonError> CreateServiceTemplateVersionOutcome;
      typedef Aws::Utils::Outcome<CreateTemplateSyncConfigResult, ProtonError> CreateTemplateSyncConfigOutcome;
      typedef Aws::Utils::Outcome<DeleteComponentResult, ProtonError> DeleteComponentOutcome;
      typedef Aws::Utils::Outcome<DeleteEnvironmentResult, ProtonError> DeleteEnvironmentOutcome;
      typedef Aws::Utils::Outcome<DeleteEnvironmentAccountConnectionResult, ProtonError> DeleteEnvironmentAccountConnectionOutcome;
      typedef Aws::Utils::Outcome<DeleteEnvironmentTemplateResult, ProtonError> DeleteEnvironmentTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteEnvironmentTemplateVersionResult, ProtonError> DeleteEnvironmentTemplateVersionOutcome;
      typedef Aws::Utils::Outcome<DeleteRepositoryResult, ProtonError> DeleteRepositoryOutcome;
      typedef Aws::Utils::Outcome<DeleteServiceResult, ProtonError> DeleteServiceOutcome;
      typedef Aws::Utils::Outcome<DeleteServiceTemplateResult, ProtonError> DeleteServiceTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteServiceTemplateVersionResult, ProtonError> DeleteServiceTemplateVersionOutcome;
      typedef Aws::Utils::Outcome<DeleteTemplateSyncConfigResult, ProtonError> DeleteTemplateSyncConfigOutcome;
      typedef Aws::Utils::Outcome<GetAccountSettingsResult, ProtonError> GetAccountSettingsOutcome;
      typedef Aws::Utils::Outcome<GetComponentResult, ProtonError> GetComponentOutcome;
      typedef Aws::Utils::Outcome<GetEnvironmentResult, ProtonError> GetEnvironmentOutcome;
      typedef Aws::Utils::Outcome<GetEnvironmentAccountConnectionResult, ProtonError> GetEnvironmentAccountConnectionOutcome;
      typedef Aws::Utils::Outcome<GetEnvironmentTemplateResult, ProtonError> GetEnvironmentTemplateOutcome;
      typedef Aws::Utils::Outcome<GetEnvironmentTemplateVersionResult, ProtonError> GetEnvironmentTemplateVersionOutcome;
      typedef Aws::Utils::Outcome<GetRepositoryResult, ProtonError> GetRepositoryOutcome;
      typedef Aws::Utils::Outcome<GetRepositorySyncStatusResult, ProtonError> GetRepositorySyncStatusOutcome;
      typedef Aws::Utils::Outcome<GetServiceResult, ProtonError> GetServiceOutcome;
      typedef Aws::Utils::Outcome<GetServiceInstanceResult, ProtonError> GetServiceInstanceOutcome;
      typedef Aws::Utils::Outcome<GetServiceTemplateResult, ProtonError> GetServiceTemplateOutcome;
      typedef Aws::Utils::Outcome<GetServiceTemplateVersionResult, ProtonError> GetServiceTemplateVersionOutcome;
      typedef Aws::Utils::Outcome<GetTemplateSyncConfigResult, ProtonError> GetTemplateSyncConfigOutcome;
      typedef Aws::Utils::Outcome<GetTemplateSyncStatusResult, ProtonError> GetTemplateSyncStatusOutcome;
      typedef Aws::Utils::Outcome<ListComponentOutputsResult, ProtonError> ListComponentOutputsOutcome;
      typedef Aws::Utils::Outcome<ListComponentProvisionedResourcesResult, ProtonError> ListComponentProvisionedResourcesOutcome;
      typedef Aws::Utils::Outcome<ListComponentsResult, ProtonError> ListComponentsOutcome;
      typedef Aws::Utils::Outcome<ListEnvironmentAccountConnectionsResult, ProtonError> ListEnvironmentAccountConnectionsOutcome;
      typedef Aws::Utils::Outcome<ListEnvironmentOutputsResult, ProtonError> ListEnvironmentOutputsOutcome;
      typedef Aws::Utils::Outcome<ListEnvironmentProvisionedResourcesResult, ProtonError> ListEnvironmentProvisionedResourcesOutcome;
      typedef Aws::Utils::Outcome<ListEnvironmentTemplateVersionsResult, ProtonError> ListEnvironmentTemplateVersionsOutcome;
      typedef Aws::Utils::Outcome<ListEnvironmentTemplatesResult, ProtonError> ListEnvironmentTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListEnvironmentsResult, ProtonError> ListEnvironmentsOutcome;
      typedef Aws::Utils::Outcome<ListRepositoriesResult, ProtonError> ListRepositoriesOutcome;
      typedef Aws::Utils::Outcome<ListRepositorySyncDefinitionsResult, ProtonError> ListRepositorySyncDefinitionsOutcome;
      typedef Aws::Utils::Outcome<ListServiceInstanceOutputsResult, ProtonError> ListServiceInstanceOutputsOutcome;
      typedef Aws::Utils::Outcome<ListServiceInstanceProvisionedResourcesResult, ProtonError> ListServiceInstanceProvisionedResourcesOutcome;
      typedef Aws::Utils::Outcome<ListServiceInstancesResult, ProtonError> ListServiceInstancesOutcome;
      typedef Aws::Utils::Outcome<ListServicePipelineOutputsResult, ProtonError> ListServicePipelineOutputsOutcome;
      typedef Aws::Utils::Outcome<ListServicePipelineProvisionedResourcesResult, ProtonError> ListServicePipelineProvisionedResourcesOutcome;
      typedef Aws::Utils::Outcome<ListServiceTemplateVersionsResult, ProtonError> ListServiceTemplateVersionsOutcome;
      typedef Aws::Utils::Outcome<ListServiceTemplatesResult, ProtonError> ListServiceTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListServicesResult, ProtonError> ListServicesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ProtonError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<NotifyResourceDeploymentStatusChangeResult, ProtonError> NotifyResourceDeploymentStatusChangeOutcome;
      typedef Aws::Utils::Outcome<RejectEnvironmentAccountConnectionResult, ProtonError> RejectEnvironmentAccountConnectionOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, ProtonError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, ProtonError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAccountSettingsResult, ProtonError> UpdateAccountSettingsOutcome;
      typedef Aws::Utils::Outcome<UpdateComponentResult, ProtonError> UpdateComponentOutcome;
      typedef Aws::Utils::Outcome<UpdateEnvironmentResult, ProtonError> UpdateEnvironmentOutcome;
      typedef Aws::Utils::Outcome<UpdateEnvironmentAccountConnectionResult, ProtonError> UpdateEnvironmentAccountConnectionOutcome;
      typedef Aws::Utils::Outcome<UpdateEnvironmentTemplateResult, ProtonError> UpdateEnvironmentTemplateOutcome;
      typedef Aws::Utils::Outcome<UpdateEnvironmentTemplateVersionResult, ProtonError> UpdateEnvironmentTemplateVersionOutcome;
      typedef Aws::Utils::Outcome<UpdateServiceResult, ProtonError> UpdateServiceOutcome;
      typedef Aws::Utils::Outcome<UpdateServiceInstanceResult, ProtonError> UpdateServiceInstanceOutcome;
      typedef Aws::Utils::Outcome<UpdateServicePipelineResult, ProtonError> UpdateServicePipelineOutcome;
      typedef Aws::Utils::Outcome<UpdateServiceTemplateResult, ProtonError> UpdateServiceTemplateOutcome;
      typedef Aws::Utils::Outcome<UpdateServiceTemplateVersionResult, ProtonError> UpdateServiceTemplateVersionOutcome;
      typedef Aws::Utils::Outcome<UpdateTemplateSyncConfigResult, ProtonError> UpdateTemplateSyncConfigOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptEnvironmentAccountConnectionOutcome> AcceptEnvironmentAccountConnectionOutcomeCallable;
      typedef std::future<CancelComponentDeploymentOutcome> CancelComponentDeploymentOutcomeCallable;
      typedef std::future<CancelEnvironmentDeploymentOutcome> CancelEnvironmentDeploymentOutcomeCallable;
      typedef std::future<CancelServiceInstanceDeploymentOutcome> CancelServiceInstanceDeploymentOutcomeCallable;
      typedef std::future<CancelServicePipelineDeploymentOutcome> CancelServicePipelineDeploymentOutcomeCallable;
      typedef std::future<CreateComponentOutcome> CreateComponentOutcomeCallable;
      typedef std::future<CreateEnvironmentOutcome> CreateEnvironmentOutcomeCallable;
      typedef std::future<CreateEnvironmentAccountConnectionOutcome> CreateEnvironmentAccountConnectionOutcomeCallable;
      typedef std::future<CreateEnvironmentTemplateOutcome> CreateEnvironmentTemplateOutcomeCallable;
      typedef std::future<CreateEnvironmentTemplateVersionOutcome> CreateEnvironmentTemplateVersionOutcomeCallable;
      typedef std::future<CreateRepositoryOutcome> CreateRepositoryOutcomeCallable;
      typedef std::future<CreateServiceOutcome> CreateServiceOutcomeCallable;
      typedef std::future<CreateServiceTemplateOutcome> CreateServiceTemplateOutcomeCallable;
      typedef std::future<CreateServiceTemplateVersionOutcome> CreateServiceTemplateVersionOutcomeCallable;
      typedef std::future<CreateTemplateSyncConfigOutcome> CreateTemplateSyncConfigOutcomeCallable;
      typedef std::future<DeleteComponentOutcome> DeleteComponentOutcomeCallable;
      typedef std::future<DeleteEnvironmentOutcome> DeleteEnvironmentOutcomeCallable;
      typedef std::future<DeleteEnvironmentAccountConnectionOutcome> DeleteEnvironmentAccountConnectionOutcomeCallable;
      typedef std::future<DeleteEnvironmentTemplateOutcome> DeleteEnvironmentTemplateOutcomeCallable;
      typedef std::future<DeleteEnvironmentTemplateVersionOutcome> DeleteEnvironmentTemplateVersionOutcomeCallable;
      typedef std::future<DeleteRepositoryOutcome> DeleteRepositoryOutcomeCallable;
      typedef std::future<DeleteServiceOutcome> DeleteServiceOutcomeCallable;
      typedef std::future<DeleteServiceTemplateOutcome> DeleteServiceTemplateOutcomeCallable;
      typedef std::future<DeleteServiceTemplateVersionOutcome> DeleteServiceTemplateVersionOutcomeCallable;
      typedef std::future<DeleteTemplateSyncConfigOutcome> DeleteTemplateSyncConfigOutcomeCallable;
      typedef std::future<GetAccountSettingsOutcome> GetAccountSettingsOutcomeCallable;
      typedef std::future<GetComponentOutcome> GetComponentOutcomeCallable;
      typedef std::future<GetEnvironmentOutcome> GetEnvironmentOutcomeCallable;
      typedef std::future<GetEnvironmentAccountConnectionOutcome> GetEnvironmentAccountConnectionOutcomeCallable;
      typedef std::future<GetEnvironmentTemplateOutcome> GetEnvironmentTemplateOutcomeCallable;
      typedef std::future<GetEnvironmentTemplateVersionOutcome> GetEnvironmentTemplateVersionOutcomeCallable;
      typedef std::future<GetRepositoryOutcome> GetRepositoryOutcomeCallable;
      typedef std::future<GetRepositorySyncStatusOutcome> GetRepositorySyncStatusOutcomeCallable;
      typedef std::future<GetServiceOutcome> GetServiceOutcomeCallable;
      typedef std::future<GetServiceInstanceOutcome> GetServiceInstanceOutcomeCallable;
      typedef std::future<GetServiceTemplateOutcome> GetServiceTemplateOutcomeCallable;
      typedef std::future<GetServiceTemplateVersionOutcome> GetServiceTemplateVersionOutcomeCallable;
      typedef std::future<GetTemplateSyncConfigOutcome> GetTemplateSyncConfigOutcomeCallable;
      typedef std::future<GetTemplateSyncStatusOutcome> GetTemplateSyncStatusOutcomeCallable;
      typedef std::future<ListComponentOutputsOutcome> ListComponentOutputsOutcomeCallable;
      typedef std::future<ListComponentProvisionedResourcesOutcome> ListComponentProvisionedResourcesOutcomeCallable;
      typedef std::future<ListComponentsOutcome> ListComponentsOutcomeCallable;
      typedef std::future<ListEnvironmentAccountConnectionsOutcome> ListEnvironmentAccountConnectionsOutcomeCallable;
      typedef std::future<ListEnvironmentOutputsOutcome> ListEnvironmentOutputsOutcomeCallable;
      typedef std::future<ListEnvironmentProvisionedResourcesOutcome> ListEnvironmentProvisionedResourcesOutcomeCallable;
      typedef std::future<ListEnvironmentTemplateVersionsOutcome> ListEnvironmentTemplateVersionsOutcomeCallable;
      typedef std::future<ListEnvironmentTemplatesOutcome> ListEnvironmentTemplatesOutcomeCallable;
      typedef std::future<ListEnvironmentsOutcome> ListEnvironmentsOutcomeCallable;
      typedef std::future<ListRepositoriesOutcome> ListRepositoriesOutcomeCallable;
      typedef std::future<ListRepositorySyncDefinitionsOutcome> ListRepositorySyncDefinitionsOutcomeCallable;
      typedef std::future<ListServiceInstanceOutputsOutcome> ListServiceInstanceOutputsOutcomeCallable;
      typedef std::future<ListServiceInstanceProvisionedResourcesOutcome> ListServiceInstanceProvisionedResourcesOutcomeCallable;
      typedef std::future<ListServiceInstancesOutcome> ListServiceInstancesOutcomeCallable;
      typedef std::future<ListServicePipelineOutputsOutcome> ListServicePipelineOutputsOutcomeCallable;
      typedef std::future<ListServicePipelineProvisionedResourcesOutcome> ListServicePipelineProvisionedResourcesOutcomeCallable;
      typedef std::future<ListServiceTemplateVersionsOutcome> ListServiceTemplateVersionsOutcomeCallable;
      typedef std::future<ListServiceTemplatesOutcome> ListServiceTemplatesOutcomeCallable;
      typedef std::future<ListServicesOutcome> ListServicesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<NotifyResourceDeploymentStatusChangeOutcome> NotifyResourceDeploymentStatusChangeOutcomeCallable;
      typedef std::future<RejectEnvironmentAccountConnectionOutcome> RejectEnvironmentAccountConnectionOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAccountSettingsOutcome> UpdateAccountSettingsOutcomeCallable;
      typedef std::future<UpdateComponentOutcome> UpdateComponentOutcomeCallable;
      typedef std::future<UpdateEnvironmentOutcome> UpdateEnvironmentOutcomeCallable;
      typedef std::future<UpdateEnvironmentAccountConnectionOutcome> UpdateEnvironmentAccountConnectionOutcomeCallable;
      typedef std::future<UpdateEnvironmentTemplateOutcome> UpdateEnvironmentTemplateOutcomeCallable;
      typedef std::future<UpdateEnvironmentTemplateVersionOutcome> UpdateEnvironmentTemplateVersionOutcomeCallable;
      typedef std::future<UpdateServiceOutcome> UpdateServiceOutcomeCallable;
      typedef std::future<UpdateServiceInstanceOutcome> UpdateServiceInstanceOutcomeCallable;
      typedef std::future<UpdateServicePipelineOutcome> UpdateServicePipelineOutcomeCallable;
      typedef std::future<UpdateServiceTemplateOutcome> UpdateServiceTemplateOutcomeCallable;
      typedef std::future<UpdateServiceTemplateVersionOutcome> UpdateServiceTemplateVersionOutcomeCallable;
      typedef std::future<UpdateTemplateSyncConfigOutcome> UpdateTemplateSyncConfigOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ProtonClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ProtonClient*, const Model::AcceptEnvironmentAccountConnectionRequest&, const Model::AcceptEnvironmentAccountConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptEnvironmentAccountConnectionResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::CancelComponentDeploymentRequest&, const Model::CancelComponentDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelComponentDeploymentResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::CancelEnvironmentDeploymentRequest&, const Model::CancelEnvironmentDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelEnvironmentDeploymentResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::CancelServiceInstanceDeploymentRequest&, const Model::CancelServiceInstanceDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelServiceInstanceDeploymentResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::CancelServicePipelineDeploymentRequest&, const Model::CancelServicePipelineDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelServicePipelineDeploymentResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::CreateComponentRequest&, const Model::CreateComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateComponentResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::CreateEnvironmentRequest&, const Model::CreateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEnvironmentResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::CreateEnvironmentAccountConnectionRequest&, const Model::CreateEnvironmentAccountConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEnvironmentAccountConnectionResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::CreateEnvironmentTemplateRequest&, const Model::CreateEnvironmentTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEnvironmentTemplateResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::CreateEnvironmentTemplateVersionRequest&, const Model::CreateEnvironmentTemplateVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEnvironmentTemplateVersionResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::CreateRepositoryRequest&, const Model::CreateRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRepositoryResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::CreateServiceRequest&, const Model::CreateServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServiceResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::CreateServiceTemplateRequest&, const Model::CreateServiceTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServiceTemplateResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::CreateServiceTemplateVersionRequest&, const Model::CreateServiceTemplateVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServiceTemplateVersionResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::CreateTemplateSyncConfigRequest&, const Model::CreateTemplateSyncConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTemplateSyncConfigResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::DeleteComponentRequest&, const Model::DeleteComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteComponentResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::DeleteEnvironmentRequest&, const Model::DeleteEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::DeleteEnvironmentAccountConnectionRequest&, const Model::DeleteEnvironmentAccountConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentAccountConnectionResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::DeleteEnvironmentTemplateRequest&, const Model::DeleteEnvironmentTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentTemplateResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::DeleteEnvironmentTemplateVersionRequest&, const Model::DeleteEnvironmentTemplateVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentTemplateVersionResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::DeleteRepositoryRequest&, const Model::DeleteRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRepositoryResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::DeleteServiceRequest&, const Model::DeleteServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServiceResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::DeleteServiceTemplateRequest&, const Model::DeleteServiceTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServiceTemplateResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::DeleteServiceTemplateVersionRequest&, const Model::DeleteServiceTemplateVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServiceTemplateVersionResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::DeleteTemplateSyncConfigRequest&, const Model::DeleteTemplateSyncConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTemplateSyncConfigResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::GetAccountSettingsRequest&, const Model::GetAccountSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountSettingsResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::GetComponentRequest&, const Model::GetComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComponentResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::GetEnvironmentRequest&, const Model::GetEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnvironmentResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::GetEnvironmentAccountConnectionRequest&, const Model::GetEnvironmentAccountConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnvironmentAccountConnectionResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::GetEnvironmentTemplateRequest&, const Model::GetEnvironmentTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnvironmentTemplateResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::GetEnvironmentTemplateVersionRequest&, const Model::GetEnvironmentTemplateVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnvironmentTemplateVersionResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::GetRepositoryRequest&, const Model::GetRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRepositoryResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::GetRepositorySyncStatusRequest&, const Model::GetRepositorySyncStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRepositorySyncStatusResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::GetServiceRequest&, const Model::GetServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::GetServiceInstanceRequest&, const Model::GetServiceInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceInstanceResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::GetServiceTemplateRequest&, const Model::GetServiceTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceTemplateResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::GetServiceTemplateVersionRequest&, const Model::GetServiceTemplateVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceTemplateVersionResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::GetTemplateSyncConfigRequest&, const Model::GetTemplateSyncConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTemplateSyncConfigResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::GetTemplateSyncStatusRequest&, const Model::GetTemplateSyncStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTemplateSyncStatusResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::ListComponentOutputsRequest&, const Model::ListComponentOutputsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListComponentOutputsResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::ListComponentProvisionedResourcesRequest&, const Model::ListComponentProvisionedResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListComponentProvisionedResourcesResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::ListComponentsRequest&, const Model::ListComponentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListComponentsResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::ListEnvironmentAccountConnectionsRequest&, const Model::ListEnvironmentAccountConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentAccountConnectionsResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::ListEnvironmentOutputsRequest&, const Model::ListEnvironmentOutputsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentOutputsResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::ListEnvironmentProvisionedResourcesRequest&, const Model::ListEnvironmentProvisionedResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentProvisionedResourcesResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::ListEnvironmentTemplateVersionsRequest&, const Model::ListEnvironmentTemplateVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentTemplateVersionsResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::ListEnvironmentTemplatesRequest&, const Model::ListEnvironmentTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentTemplatesResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::ListEnvironmentsRequest&, const Model::ListEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::ListRepositoriesRequest&, const Model::ListRepositoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRepositoriesResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::ListRepositorySyncDefinitionsRequest&, const Model::ListRepositorySyncDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRepositorySyncDefinitionsResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::ListServiceInstanceOutputsRequest&, const Model::ListServiceInstanceOutputsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServiceInstanceOutputsResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::ListServiceInstanceProvisionedResourcesRequest&, const Model::ListServiceInstanceProvisionedResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServiceInstanceProvisionedResourcesResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::ListServiceInstancesRequest&, const Model::ListServiceInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServiceInstancesResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::ListServicePipelineOutputsRequest&, const Model::ListServicePipelineOutputsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServicePipelineOutputsResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::ListServicePipelineProvisionedResourcesRequest&, const Model::ListServicePipelineProvisionedResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServicePipelineProvisionedResourcesResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::ListServiceTemplateVersionsRequest&, const Model::ListServiceTemplateVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServiceTemplateVersionsResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::ListServiceTemplatesRequest&, const Model::ListServiceTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServiceTemplatesResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::ListServicesRequest&, const Model::ListServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServicesResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::NotifyResourceDeploymentStatusChangeRequest&, const Model::NotifyResourceDeploymentStatusChangeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > NotifyResourceDeploymentStatusChangeResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::RejectEnvironmentAccountConnectionRequest&, const Model::RejectEnvironmentAccountConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectEnvironmentAccountConnectionResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::UpdateAccountSettingsRequest&, const Model::UpdateAccountSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccountSettingsResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::UpdateComponentRequest&, const Model::UpdateComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateComponentResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::UpdateEnvironmentRequest&, const Model::UpdateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnvironmentResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::UpdateEnvironmentAccountConnectionRequest&, const Model::UpdateEnvironmentAccountConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnvironmentAccountConnectionResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::UpdateEnvironmentTemplateRequest&, const Model::UpdateEnvironmentTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnvironmentTemplateResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::UpdateEnvironmentTemplateVersionRequest&, const Model::UpdateEnvironmentTemplateVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnvironmentTemplateVersionResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::UpdateServiceRequest&, const Model::UpdateServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::UpdateServiceInstanceRequest&, const Model::UpdateServiceInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceInstanceResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::UpdateServicePipelineRequest&, const Model::UpdateServicePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServicePipelineResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::UpdateServiceTemplateRequest&, const Model::UpdateServiceTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceTemplateResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::UpdateServiceTemplateVersionRequest&, const Model::UpdateServiceTemplateVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceTemplateVersionResponseReceivedHandler;
    typedef std::function<void(const ProtonClient*, const Model::UpdateTemplateSyncConfigRequest&, const Model::UpdateTemplateSyncConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTemplateSyncConfigResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Proton
} // namespace Aws
