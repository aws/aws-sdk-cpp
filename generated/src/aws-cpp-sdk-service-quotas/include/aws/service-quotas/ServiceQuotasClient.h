/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/service-quotas/ServiceQuotasServiceClientModel.h>

namespace Aws
{
namespace ServiceQuotas
{
  /**
   * <p>With Service Quotas, you can view and manage your quotas easily as your
   * Amazon Web Services workloads grow. Quotas, also referred to as limits, are the
   * maximum number of resources that you can create in your Amazon Web Services
   * account. For more information, see the <a
   * href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service
   * Quotas User Guide</a>.</p>
   */
  class AWS_SERVICEQUOTAS_API ServiceQuotasClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ServiceQuotasClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ServiceQuotasClientConfiguration ClientConfigurationType;
      typedef ServiceQuotasEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServiceQuotasClient(const Aws::ServiceQuotas::ServiceQuotasClientConfiguration& clientConfiguration = Aws::ServiceQuotas::ServiceQuotasClientConfiguration(),
                            std::shared_ptr<ServiceQuotasEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServiceQuotasClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<ServiceQuotasEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::ServiceQuotas::ServiceQuotasClientConfiguration& clientConfiguration = Aws::ServiceQuotas::ServiceQuotasClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ServiceQuotasClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<ServiceQuotasEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::ServiceQuotas::ServiceQuotasClientConfiguration& clientConfiguration = Aws::ServiceQuotas::ServiceQuotasClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServiceQuotasClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServiceQuotasClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ServiceQuotasClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ServiceQuotasClient();

        /**
         * <p>Associates your quota request template with your organization. When a new
         * Amazon Web Services account is created in your organization, the quota increase
         * requests in the template are automatically applied to the account. You can add a
         * quota increase request for any adjustable quota to your template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/AssociateServiceQuotaTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateServiceQuotaTemplateOutcome AssociateServiceQuotaTemplate(const Model::AssociateServiceQuotaTemplateRequest& request) const;

        /**
         * A Callable wrapper for AssociateServiceQuotaTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateServiceQuotaTemplateRequestT = Model::AssociateServiceQuotaTemplateRequest>
        Model::AssociateServiceQuotaTemplateOutcomeCallable AssociateServiceQuotaTemplateCallable(const AssociateServiceQuotaTemplateRequestT& request) const
        {
            return SubmitCallable(&ServiceQuotasClient::AssociateServiceQuotaTemplate, request);
        }

        /**
         * An Async wrapper for AssociateServiceQuotaTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateServiceQuotaTemplateRequestT = Model::AssociateServiceQuotaTemplateRequest>
        void AssociateServiceQuotaTemplateAsync(const AssociateServiceQuotaTemplateRequestT& request, const AssociateServiceQuotaTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceQuotasClient::AssociateServiceQuotaTemplate, request, handler, context);
        }

        /**
         * <p>Deletes the quota increase request for the specified quota from your quota
         * request template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/DeleteServiceQuotaIncreaseRequestFromTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceQuotaIncreaseRequestFromTemplateOutcome DeleteServiceQuotaIncreaseRequestFromTemplate(const Model::DeleteServiceQuotaIncreaseRequestFromTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteServiceQuotaIncreaseRequestFromTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteServiceQuotaIncreaseRequestFromTemplateRequestT = Model::DeleteServiceQuotaIncreaseRequestFromTemplateRequest>
        Model::DeleteServiceQuotaIncreaseRequestFromTemplateOutcomeCallable DeleteServiceQuotaIncreaseRequestFromTemplateCallable(const DeleteServiceQuotaIncreaseRequestFromTemplateRequestT& request) const
        {
            return SubmitCallable(&ServiceQuotasClient::DeleteServiceQuotaIncreaseRequestFromTemplate, request);
        }

        /**
         * An Async wrapper for DeleteServiceQuotaIncreaseRequestFromTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteServiceQuotaIncreaseRequestFromTemplateRequestT = Model::DeleteServiceQuotaIncreaseRequestFromTemplateRequest>
        void DeleteServiceQuotaIncreaseRequestFromTemplateAsync(const DeleteServiceQuotaIncreaseRequestFromTemplateRequestT& request, const DeleteServiceQuotaIncreaseRequestFromTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceQuotasClient::DeleteServiceQuotaIncreaseRequestFromTemplate, request, handler, context);
        }

        /**
         * <p>Disables your quota request template. After a template is disabled, the quota
         * increase requests in the template are not applied to new Amazon Web Services
         * accounts in your organization. Disabling a quota request template does not apply
         * its quota increase requests.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/DisassociateServiceQuotaTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateServiceQuotaTemplateOutcome DisassociateServiceQuotaTemplate(const Model::DisassociateServiceQuotaTemplateRequest& request) const;

        /**
         * A Callable wrapper for DisassociateServiceQuotaTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateServiceQuotaTemplateRequestT = Model::DisassociateServiceQuotaTemplateRequest>
        Model::DisassociateServiceQuotaTemplateOutcomeCallable DisassociateServiceQuotaTemplateCallable(const DisassociateServiceQuotaTemplateRequestT& request) const
        {
            return SubmitCallable(&ServiceQuotasClient::DisassociateServiceQuotaTemplate, request);
        }

        /**
         * An Async wrapper for DisassociateServiceQuotaTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateServiceQuotaTemplateRequestT = Model::DisassociateServiceQuotaTemplateRequest>
        void DisassociateServiceQuotaTemplateAsync(const DisassociateServiceQuotaTemplateRequestT& request, const DisassociateServiceQuotaTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceQuotasClient::DisassociateServiceQuotaTemplate, request, handler, context);
        }

        /**
         * <p>Retrieves the default value for the specified quota. The default value does
         * not reflect any quota increases.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetAWSDefaultServiceQuota">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAWSDefaultServiceQuotaOutcome GetAWSDefaultServiceQuota(const Model::GetAWSDefaultServiceQuotaRequest& request) const;

        /**
         * A Callable wrapper for GetAWSDefaultServiceQuota that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAWSDefaultServiceQuotaRequestT = Model::GetAWSDefaultServiceQuotaRequest>
        Model::GetAWSDefaultServiceQuotaOutcomeCallable GetAWSDefaultServiceQuotaCallable(const GetAWSDefaultServiceQuotaRequestT& request) const
        {
            return SubmitCallable(&ServiceQuotasClient::GetAWSDefaultServiceQuota, request);
        }

        /**
         * An Async wrapper for GetAWSDefaultServiceQuota that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAWSDefaultServiceQuotaRequestT = Model::GetAWSDefaultServiceQuotaRequest>
        void GetAWSDefaultServiceQuotaAsync(const GetAWSDefaultServiceQuotaRequestT& request, const GetAWSDefaultServiceQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceQuotasClient::GetAWSDefaultServiceQuota, request, handler, context);
        }

        /**
         * <p>Retrieves the status of the association for the quota request
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetAssociationForServiceQuotaTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssociationForServiceQuotaTemplateOutcome GetAssociationForServiceQuotaTemplate(const Model::GetAssociationForServiceQuotaTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetAssociationForServiceQuotaTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAssociationForServiceQuotaTemplateRequestT = Model::GetAssociationForServiceQuotaTemplateRequest>
        Model::GetAssociationForServiceQuotaTemplateOutcomeCallable GetAssociationForServiceQuotaTemplateCallable(const GetAssociationForServiceQuotaTemplateRequestT& request) const
        {
            return SubmitCallable(&ServiceQuotasClient::GetAssociationForServiceQuotaTemplate, request);
        }

        /**
         * An Async wrapper for GetAssociationForServiceQuotaTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAssociationForServiceQuotaTemplateRequestT = Model::GetAssociationForServiceQuotaTemplateRequest>
        void GetAssociationForServiceQuotaTemplateAsync(const GetAssociationForServiceQuotaTemplateRequestT& request, const GetAssociationForServiceQuotaTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceQuotasClient::GetAssociationForServiceQuotaTemplate, request, handler, context);
        }

        /**
         * <p>Retrieves information about the specified quota increase
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetRequestedServiceQuotaChange">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRequestedServiceQuotaChangeOutcome GetRequestedServiceQuotaChange(const Model::GetRequestedServiceQuotaChangeRequest& request) const;

        /**
         * A Callable wrapper for GetRequestedServiceQuotaChange that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRequestedServiceQuotaChangeRequestT = Model::GetRequestedServiceQuotaChangeRequest>
        Model::GetRequestedServiceQuotaChangeOutcomeCallable GetRequestedServiceQuotaChangeCallable(const GetRequestedServiceQuotaChangeRequestT& request) const
        {
            return SubmitCallable(&ServiceQuotasClient::GetRequestedServiceQuotaChange, request);
        }

        /**
         * An Async wrapper for GetRequestedServiceQuotaChange that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRequestedServiceQuotaChangeRequestT = Model::GetRequestedServiceQuotaChangeRequest>
        void GetRequestedServiceQuotaChangeAsync(const GetRequestedServiceQuotaChangeRequestT& request, const GetRequestedServiceQuotaChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceQuotasClient::GetRequestedServiceQuotaChange, request, handler, context);
        }

        /**
         * <p>Retrieves the applied quota value for the specified quota. For some quotas,
         * only the default values are available. If the applied quota value is not
         * available for a quota, the quota is not retrieved.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetServiceQuota">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceQuotaOutcome GetServiceQuota(const Model::GetServiceQuotaRequest& request) const;

        /**
         * A Callable wrapper for GetServiceQuota that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetServiceQuotaRequestT = Model::GetServiceQuotaRequest>
        Model::GetServiceQuotaOutcomeCallable GetServiceQuotaCallable(const GetServiceQuotaRequestT& request) const
        {
            return SubmitCallable(&ServiceQuotasClient::GetServiceQuota, request);
        }

        /**
         * An Async wrapper for GetServiceQuota that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetServiceQuotaRequestT = Model::GetServiceQuotaRequest>
        void GetServiceQuotaAsync(const GetServiceQuotaRequestT& request, const GetServiceQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceQuotasClient::GetServiceQuota, request, handler, context);
        }

        /**
         * <p>Retrieves information about the specified quota increase request in your
         * quota request template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetServiceQuotaIncreaseRequestFromTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceQuotaIncreaseRequestFromTemplateOutcome GetServiceQuotaIncreaseRequestFromTemplate(const Model::GetServiceQuotaIncreaseRequestFromTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetServiceQuotaIncreaseRequestFromTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetServiceQuotaIncreaseRequestFromTemplateRequestT = Model::GetServiceQuotaIncreaseRequestFromTemplateRequest>
        Model::GetServiceQuotaIncreaseRequestFromTemplateOutcomeCallable GetServiceQuotaIncreaseRequestFromTemplateCallable(const GetServiceQuotaIncreaseRequestFromTemplateRequestT& request) const
        {
            return SubmitCallable(&ServiceQuotasClient::GetServiceQuotaIncreaseRequestFromTemplate, request);
        }

        /**
         * An Async wrapper for GetServiceQuotaIncreaseRequestFromTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetServiceQuotaIncreaseRequestFromTemplateRequestT = Model::GetServiceQuotaIncreaseRequestFromTemplateRequest>
        void GetServiceQuotaIncreaseRequestFromTemplateAsync(const GetServiceQuotaIncreaseRequestFromTemplateRequestT& request, const GetServiceQuotaIncreaseRequestFromTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceQuotasClient::GetServiceQuotaIncreaseRequestFromTemplate, request, handler, context);
        }

        /**
         * <p>Lists the default values for the quotas for the specified Amazon Web Service.
         * A default value does not reflect any quota increases.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListAWSDefaultServiceQuotas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAWSDefaultServiceQuotasOutcome ListAWSDefaultServiceQuotas(const Model::ListAWSDefaultServiceQuotasRequest& request) const;

        /**
         * A Callable wrapper for ListAWSDefaultServiceQuotas that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAWSDefaultServiceQuotasRequestT = Model::ListAWSDefaultServiceQuotasRequest>
        Model::ListAWSDefaultServiceQuotasOutcomeCallable ListAWSDefaultServiceQuotasCallable(const ListAWSDefaultServiceQuotasRequestT& request) const
        {
            return SubmitCallable(&ServiceQuotasClient::ListAWSDefaultServiceQuotas, request);
        }

        /**
         * An Async wrapper for ListAWSDefaultServiceQuotas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAWSDefaultServiceQuotasRequestT = Model::ListAWSDefaultServiceQuotasRequest>
        void ListAWSDefaultServiceQuotasAsync(const ListAWSDefaultServiceQuotasRequestT& request, const ListAWSDefaultServiceQuotasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceQuotasClient::ListAWSDefaultServiceQuotas, request, handler, context);
        }

        /**
         * <p>Retrieves the quota increase requests for the specified Amazon Web
         * Service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListRequestedServiceQuotaChangeHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRequestedServiceQuotaChangeHistoryOutcome ListRequestedServiceQuotaChangeHistory(const Model::ListRequestedServiceQuotaChangeHistoryRequest& request) const;

        /**
         * A Callable wrapper for ListRequestedServiceQuotaChangeHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRequestedServiceQuotaChangeHistoryRequestT = Model::ListRequestedServiceQuotaChangeHistoryRequest>
        Model::ListRequestedServiceQuotaChangeHistoryOutcomeCallable ListRequestedServiceQuotaChangeHistoryCallable(const ListRequestedServiceQuotaChangeHistoryRequestT& request) const
        {
            return SubmitCallable(&ServiceQuotasClient::ListRequestedServiceQuotaChangeHistory, request);
        }

        /**
         * An Async wrapper for ListRequestedServiceQuotaChangeHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRequestedServiceQuotaChangeHistoryRequestT = Model::ListRequestedServiceQuotaChangeHistoryRequest>
        void ListRequestedServiceQuotaChangeHistoryAsync(const ListRequestedServiceQuotaChangeHistoryRequestT& request, const ListRequestedServiceQuotaChangeHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceQuotasClient::ListRequestedServiceQuotaChangeHistory, request, handler, context);
        }

        /**
         * <p>Retrieves the quota increase requests for the specified quota.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListRequestedServiceQuotaChangeHistoryByQuota">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRequestedServiceQuotaChangeHistoryByQuotaOutcome ListRequestedServiceQuotaChangeHistoryByQuota(const Model::ListRequestedServiceQuotaChangeHistoryByQuotaRequest& request) const;

        /**
         * A Callable wrapper for ListRequestedServiceQuotaChangeHistoryByQuota that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRequestedServiceQuotaChangeHistoryByQuotaRequestT = Model::ListRequestedServiceQuotaChangeHistoryByQuotaRequest>
        Model::ListRequestedServiceQuotaChangeHistoryByQuotaOutcomeCallable ListRequestedServiceQuotaChangeHistoryByQuotaCallable(const ListRequestedServiceQuotaChangeHistoryByQuotaRequestT& request) const
        {
            return SubmitCallable(&ServiceQuotasClient::ListRequestedServiceQuotaChangeHistoryByQuota, request);
        }

        /**
         * An Async wrapper for ListRequestedServiceQuotaChangeHistoryByQuota that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRequestedServiceQuotaChangeHistoryByQuotaRequestT = Model::ListRequestedServiceQuotaChangeHistoryByQuotaRequest>
        void ListRequestedServiceQuotaChangeHistoryByQuotaAsync(const ListRequestedServiceQuotaChangeHistoryByQuotaRequestT& request, const ListRequestedServiceQuotaChangeHistoryByQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceQuotasClient::ListRequestedServiceQuotaChangeHistoryByQuota, request, handler, context);
        }

        /**
         * <p>Lists the quota increase requests in the specified quota request
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListServiceQuotaIncreaseRequestsInTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceQuotaIncreaseRequestsInTemplateOutcome ListServiceQuotaIncreaseRequestsInTemplate(const Model::ListServiceQuotaIncreaseRequestsInTemplateRequest& request) const;

        /**
         * A Callable wrapper for ListServiceQuotaIncreaseRequestsInTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListServiceQuotaIncreaseRequestsInTemplateRequestT = Model::ListServiceQuotaIncreaseRequestsInTemplateRequest>
        Model::ListServiceQuotaIncreaseRequestsInTemplateOutcomeCallable ListServiceQuotaIncreaseRequestsInTemplateCallable(const ListServiceQuotaIncreaseRequestsInTemplateRequestT& request) const
        {
            return SubmitCallable(&ServiceQuotasClient::ListServiceQuotaIncreaseRequestsInTemplate, request);
        }

        /**
         * An Async wrapper for ListServiceQuotaIncreaseRequestsInTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListServiceQuotaIncreaseRequestsInTemplateRequestT = Model::ListServiceQuotaIncreaseRequestsInTemplateRequest>
        void ListServiceQuotaIncreaseRequestsInTemplateAsync(const ListServiceQuotaIncreaseRequestsInTemplateRequestT& request, const ListServiceQuotaIncreaseRequestsInTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceQuotasClient::ListServiceQuotaIncreaseRequestsInTemplate, request, handler, context);
        }

        /**
         * <p>Lists the applied quota values for the specified Amazon Web Service. For some
         * quotas, only the default values are available. If the applied quota value is not
         * available for a quota, the quota is not retrieved.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListServiceQuotas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceQuotasOutcome ListServiceQuotas(const Model::ListServiceQuotasRequest& request) const;

        /**
         * A Callable wrapper for ListServiceQuotas that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListServiceQuotasRequestT = Model::ListServiceQuotasRequest>
        Model::ListServiceQuotasOutcomeCallable ListServiceQuotasCallable(const ListServiceQuotasRequestT& request) const
        {
            return SubmitCallable(&ServiceQuotasClient::ListServiceQuotas, request);
        }

        /**
         * An Async wrapper for ListServiceQuotas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListServiceQuotasRequestT = Model::ListServiceQuotasRequest>
        void ListServiceQuotasAsync(const ListServiceQuotasRequestT& request, const ListServiceQuotasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceQuotasClient::ListServiceQuotas, request, handler, context);
        }

        /**
         * <p>Lists the names and codes for the Amazon Web Services integrated with Service
         * Quotas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListServices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServicesOutcome ListServices(const Model::ListServicesRequest& request) const;

        /**
         * A Callable wrapper for ListServices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListServicesRequestT = Model::ListServicesRequest>
        Model::ListServicesOutcomeCallable ListServicesCallable(const ListServicesRequestT& request) const
        {
            return SubmitCallable(&ServiceQuotasClient::ListServices, request);
        }

        /**
         * An Async wrapper for ListServices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListServicesRequestT = Model::ListServicesRequest>
        void ListServicesAsync(const ListServicesRequestT& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceQuotasClient::ListServices, request, handler, context);
        }

        /**
         * <p>Returns a list of the tags assigned to the specified applied
         * quota.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ServiceQuotasClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceQuotasClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Adds a quota increase request to your quota request template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/PutServiceQuotaIncreaseRequestIntoTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::PutServiceQuotaIncreaseRequestIntoTemplateOutcome PutServiceQuotaIncreaseRequestIntoTemplate(const Model::PutServiceQuotaIncreaseRequestIntoTemplateRequest& request) const;

        /**
         * A Callable wrapper for PutServiceQuotaIncreaseRequestIntoTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutServiceQuotaIncreaseRequestIntoTemplateRequestT = Model::PutServiceQuotaIncreaseRequestIntoTemplateRequest>
        Model::PutServiceQuotaIncreaseRequestIntoTemplateOutcomeCallable PutServiceQuotaIncreaseRequestIntoTemplateCallable(const PutServiceQuotaIncreaseRequestIntoTemplateRequestT& request) const
        {
            return SubmitCallable(&ServiceQuotasClient::PutServiceQuotaIncreaseRequestIntoTemplate, request);
        }

        /**
         * An Async wrapper for PutServiceQuotaIncreaseRequestIntoTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutServiceQuotaIncreaseRequestIntoTemplateRequestT = Model::PutServiceQuotaIncreaseRequestIntoTemplateRequest>
        void PutServiceQuotaIncreaseRequestIntoTemplateAsync(const PutServiceQuotaIncreaseRequestIntoTemplateRequestT& request, const PutServiceQuotaIncreaseRequestIntoTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceQuotasClient::PutServiceQuotaIncreaseRequestIntoTemplate, request, handler, context);
        }

        /**
         * <p>Submits a quota increase request for the specified quota.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/RequestServiceQuotaIncrease">AWS
         * API Reference</a></p>
         */
        virtual Model::RequestServiceQuotaIncreaseOutcome RequestServiceQuotaIncrease(const Model::RequestServiceQuotaIncreaseRequest& request) const;

        /**
         * A Callable wrapper for RequestServiceQuotaIncrease that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RequestServiceQuotaIncreaseRequestT = Model::RequestServiceQuotaIncreaseRequest>
        Model::RequestServiceQuotaIncreaseOutcomeCallable RequestServiceQuotaIncreaseCallable(const RequestServiceQuotaIncreaseRequestT& request) const
        {
            return SubmitCallable(&ServiceQuotasClient::RequestServiceQuotaIncrease, request);
        }

        /**
         * An Async wrapper for RequestServiceQuotaIncrease that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RequestServiceQuotaIncreaseRequestT = Model::RequestServiceQuotaIncreaseRequest>
        void RequestServiceQuotaIncreaseAsync(const RequestServiceQuotaIncreaseRequestT& request, const RequestServiceQuotaIncreaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceQuotasClient::RequestServiceQuotaIncrease, request, handler, context);
        }

        /**
         * <p>Adds tags to the specified applied quota. You can include one or more tags to
         * add to the quota.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&ServiceQuotasClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceQuotasClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from the specified applied quota. You can specify one or more
         * tags to remove.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&ServiceQuotasClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceQuotasClient::UntagResource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ServiceQuotasEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ServiceQuotasClient>;
      void init(const ServiceQuotasClientConfiguration& clientConfiguration);

      ServiceQuotasClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ServiceQuotasEndpointProviderBase> m_endpointProvider;
  };

} // namespace ServiceQuotas
} // namespace Aws
