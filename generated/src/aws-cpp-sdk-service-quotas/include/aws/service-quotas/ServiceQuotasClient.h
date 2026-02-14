/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/service-quotas/ServiceQuotasPaginationBase.h>
#include <aws/service-quotas/ServiceQuotasServiceClientModel.h>
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>

namespace Aws {
namespace ServiceQuotas {
/**
 * <p>With Service Quotas, you can view and manage your quotas easily as your
 * Amazon Web Services workloads grow. Quotas, also referred to as limits, are the
 * maximum number of resources that you can create in your Amazon Web Services
 * account. For more information, see the <a
 * href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service
 * Quotas User Guide</a>.</p> <p>You need Amazon Web Services CLI version 2.13.20
 * or higher to view and manage resource-level quotas such as <code>Instances per
 * domain</code> for Amazon OpenSearch Service.</p>
 */
class AWS_SERVICEQUOTAS_API ServiceQuotasClient : public Aws::Client::AWSJsonClient,
                                                  public Aws::Client::ClientWithAsyncTemplateMethods<ServiceQuotasClient>,
                                                  public ServiceQuotasPaginationBase<ServiceQuotasClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef ServiceQuotasClientConfiguration ClientConfigurationType;
  typedef ServiceQuotasEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  ServiceQuotasClient(const Aws::ServiceQuotas::ServiceQuotasClientConfiguration& clientConfiguration =
                          Aws::ServiceQuotas::ServiceQuotasClientConfiguration(),
                      std::shared_ptr<ServiceQuotasEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  ServiceQuotasClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<ServiceQuotasEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::ServiceQuotas::ServiceQuotasClientConfiguration& clientConfiguration =
                          Aws::ServiceQuotas::ServiceQuotasClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  ServiceQuotasClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<ServiceQuotasEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::ServiceQuotas::ServiceQuotasClientConfiguration& clientConfiguration =
                          Aws::ServiceQuotas::ServiceQuotasClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  ServiceQuotasClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  ServiceQuotasClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

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
  virtual Model::AssociateServiceQuotaTemplateOutcome AssociateServiceQuotaTemplate(
      const Model::AssociateServiceQuotaTemplateRequest& request = {}) const;

  /**
   * A Callable wrapper for AssociateServiceQuotaTemplate that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename AssociateServiceQuotaTemplateRequestT = Model::AssociateServiceQuotaTemplateRequest>
  Model::AssociateServiceQuotaTemplateOutcomeCallable AssociateServiceQuotaTemplateCallable(
      const AssociateServiceQuotaTemplateRequestT& request = {}) const {
    return SubmitCallable(&ServiceQuotasClient::AssociateServiceQuotaTemplate, request);
  }

  /**
   * An Async wrapper for AssociateServiceQuotaTemplate that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename AssociateServiceQuotaTemplateRequestT = Model::AssociateServiceQuotaTemplateRequest>
  void AssociateServiceQuotaTemplateAsync(const AssociateServiceQuotaTemplateResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                          const AssociateServiceQuotaTemplateRequestT& request = {}) const {
    return SubmitAsync(&ServiceQuotasClient::AssociateServiceQuotaTemplate, request, handler, context);
  }

  /**
   * <p>Creates a Support case for an existing quota increase request. This call only
   * creates a Support case if the request has a <code>Pending</code> status.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/CreateSupportCase">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateSupportCaseOutcome CreateSupportCase(const Model::CreateSupportCaseRequest& request) const;

  /**
   * A Callable wrapper for CreateSupportCase that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateSupportCaseRequestT = Model::CreateSupportCaseRequest>
  Model::CreateSupportCaseOutcomeCallable CreateSupportCaseCallable(const CreateSupportCaseRequestT& request) const {
    return SubmitCallable(&ServiceQuotasClient::CreateSupportCase, request);
  }

  /**
   * An Async wrapper for CreateSupportCase that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateSupportCaseRequestT = Model::CreateSupportCaseRequest>
  void CreateSupportCaseAsync(const CreateSupportCaseRequestT& request, const CreateSupportCaseResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ServiceQuotasClient::CreateSupportCase, request, handler, context);
  }

  /**
   * <p>Deletes the quota increase request for the specified quota from your quota
   * request template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/DeleteServiceQuotaIncreaseRequestFromTemplate">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteServiceQuotaIncreaseRequestFromTemplateOutcome DeleteServiceQuotaIncreaseRequestFromTemplate(
      const Model::DeleteServiceQuotaIncreaseRequestFromTemplateRequest& request) const;

  /**
   * A Callable wrapper for DeleteServiceQuotaIncreaseRequestFromTemplate that returns a future to the operation so that it can be executed
   * in parallel to other requests.
   */
  template <typename DeleteServiceQuotaIncreaseRequestFromTemplateRequestT = Model::DeleteServiceQuotaIncreaseRequestFromTemplateRequest>
  Model::DeleteServiceQuotaIncreaseRequestFromTemplateOutcomeCallable DeleteServiceQuotaIncreaseRequestFromTemplateCallable(
      const DeleteServiceQuotaIncreaseRequestFromTemplateRequestT& request) const {
    return SubmitCallable(&ServiceQuotasClient::DeleteServiceQuotaIncreaseRequestFromTemplate, request);
  }

  /**
   * An Async wrapper for DeleteServiceQuotaIncreaseRequestFromTemplate that queues the request into a thread executor and triggers
   * associated callback when operation has finished.
   */
  template <typename DeleteServiceQuotaIncreaseRequestFromTemplateRequestT = Model::DeleteServiceQuotaIncreaseRequestFromTemplateRequest>
  void DeleteServiceQuotaIncreaseRequestFromTemplateAsync(
      const DeleteServiceQuotaIncreaseRequestFromTemplateRequestT& request,
      const DeleteServiceQuotaIncreaseRequestFromTemplateResponseReceivedHandler& handler,
      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
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
  virtual Model::DisassociateServiceQuotaTemplateOutcome DisassociateServiceQuotaTemplate(
      const Model::DisassociateServiceQuotaTemplateRequest& request = {}) const;

  /**
   * A Callable wrapper for DisassociateServiceQuotaTemplate that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename DisassociateServiceQuotaTemplateRequestT = Model::DisassociateServiceQuotaTemplateRequest>
  Model::DisassociateServiceQuotaTemplateOutcomeCallable DisassociateServiceQuotaTemplateCallable(
      const DisassociateServiceQuotaTemplateRequestT& request = {}) const {
    return SubmitCallable(&ServiceQuotasClient::DisassociateServiceQuotaTemplate, request);
  }

  /**
   * An Async wrapper for DisassociateServiceQuotaTemplate that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename DisassociateServiceQuotaTemplateRequestT = Model::DisassociateServiceQuotaTemplateRequest>
  void DisassociateServiceQuotaTemplateAsync(const DisassociateServiceQuotaTemplateResponseReceivedHandler& handler,
                                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                             const DisassociateServiceQuotaTemplateRequestT& request = {}) const {
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
   * A Callable wrapper for GetAWSDefaultServiceQuota that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetAWSDefaultServiceQuotaRequestT = Model::GetAWSDefaultServiceQuotaRequest>
  Model::GetAWSDefaultServiceQuotaOutcomeCallable GetAWSDefaultServiceQuotaCallable(
      const GetAWSDefaultServiceQuotaRequestT& request) const {
    return SubmitCallable(&ServiceQuotasClient::GetAWSDefaultServiceQuota, request);
  }

  /**
   * An Async wrapper for GetAWSDefaultServiceQuota that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetAWSDefaultServiceQuotaRequestT = Model::GetAWSDefaultServiceQuotaRequest>
  void GetAWSDefaultServiceQuotaAsync(const GetAWSDefaultServiceQuotaRequestT& request,
                                      const GetAWSDefaultServiceQuotaResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ServiceQuotasClient::GetAWSDefaultServiceQuota, request, handler, context);
  }

  /**
   * <p>Retrieves the status of the association for the quota request
   * template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetAssociationForServiceQuotaTemplate">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAssociationForServiceQuotaTemplateOutcome GetAssociationForServiceQuotaTemplate(
      const Model::GetAssociationForServiceQuotaTemplateRequest& request = {}) const;

  /**
   * A Callable wrapper for GetAssociationForServiceQuotaTemplate that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename GetAssociationForServiceQuotaTemplateRequestT = Model::GetAssociationForServiceQuotaTemplateRequest>
  Model::GetAssociationForServiceQuotaTemplateOutcomeCallable GetAssociationForServiceQuotaTemplateCallable(
      const GetAssociationForServiceQuotaTemplateRequestT& request = {}) const {
    return SubmitCallable(&ServiceQuotasClient::GetAssociationForServiceQuotaTemplate, request);
  }

  /**
   * An Async wrapper for GetAssociationForServiceQuotaTemplate that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename GetAssociationForServiceQuotaTemplateRequestT = Model::GetAssociationForServiceQuotaTemplateRequest>
  void GetAssociationForServiceQuotaTemplateAsync(const GetAssociationForServiceQuotaTemplateResponseReceivedHandler& handler,
                                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                                  const GetAssociationForServiceQuotaTemplateRequestT& request = {}) const {
    return SubmitAsync(&ServiceQuotasClient::GetAssociationForServiceQuotaTemplate, request, handler, context);
  }

  /**
   * <p>Retrieves information about your <a
   * href="https://docs.aws.amazon.com/servicequotas/latest/userguide/automatic-management.html">Service
   * Quotas Automatic Management</a> configuration. Automatic Management monitors
   * your Service Quotas utilization and notifies you before you run out of your
   * allocated quotas.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetAutoManagementConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAutoManagementConfigurationOutcome GetAutoManagementConfiguration(
      const Model::GetAutoManagementConfigurationRequest& request = {}) const;

  /**
   * A Callable wrapper for GetAutoManagementConfiguration that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetAutoManagementConfigurationRequestT = Model::GetAutoManagementConfigurationRequest>
  Model::GetAutoManagementConfigurationOutcomeCallable GetAutoManagementConfigurationCallable(
      const GetAutoManagementConfigurationRequestT& request = {}) const {
    return SubmitCallable(&ServiceQuotasClient::GetAutoManagementConfiguration, request);
  }

  /**
   * An Async wrapper for GetAutoManagementConfiguration that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename GetAutoManagementConfigurationRequestT = Model::GetAutoManagementConfigurationRequest>
  void GetAutoManagementConfigurationAsync(const GetAutoManagementConfigurationResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                           const GetAutoManagementConfigurationRequestT& request = {}) const {
    return SubmitAsync(&ServiceQuotasClient::GetAutoManagementConfiguration, request, handler, context);
  }

  /**
   * <p>Retrieves the quota utilization report for your Amazon Web Services account.
   * This operation returns paginated results showing your quota usage across all
   * Amazon Web Services services, sorted by utilization percentage in descending
   * order (highest utilization first).</p> <p>You must first initiate a report using
   * the <code>StartQuotaUtilizationReport</code> operation. The report generation
   * process is asynchronous and may take several seconds to complete. Poll this
   * operation periodically to check the status and retrieve results when the report
   * is ready.</p> <p>Each report contains up to 1,000 quota records per page. Use
   * the <code>NextToken</code> parameter to retrieve additional pages of results.
   * Reports are automatically deleted after 15 minutes.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetQuotaUtilizationReport">AWS
   * API Reference</a></p>
   */
  virtual Model::GetQuotaUtilizationReportOutcome GetQuotaUtilizationReport(const Model::GetQuotaUtilizationReportRequest& request) const;

  /**
   * A Callable wrapper for GetQuotaUtilizationReport that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetQuotaUtilizationReportRequestT = Model::GetQuotaUtilizationReportRequest>
  Model::GetQuotaUtilizationReportOutcomeCallable GetQuotaUtilizationReportCallable(
      const GetQuotaUtilizationReportRequestT& request) const {
    return SubmitCallable(&ServiceQuotasClient::GetQuotaUtilizationReport, request);
  }

  /**
   * An Async wrapper for GetQuotaUtilizationReport that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetQuotaUtilizationReportRequestT = Model::GetQuotaUtilizationReportRequest>
  void GetQuotaUtilizationReportAsync(const GetQuotaUtilizationReportRequestT& request,
                                      const GetQuotaUtilizationReportResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ServiceQuotasClient::GetQuotaUtilizationReport, request, handler, context);
  }

  /**
   * <p>Retrieves information about the specified quota increase
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetRequestedServiceQuotaChange">AWS
   * API Reference</a></p>
   */
  virtual Model::GetRequestedServiceQuotaChangeOutcome GetRequestedServiceQuotaChange(
      const Model::GetRequestedServiceQuotaChangeRequest& request) const;

  /**
   * A Callable wrapper for GetRequestedServiceQuotaChange that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetRequestedServiceQuotaChangeRequestT = Model::GetRequestedServiceQuotaChangeRequest>
  Model::GetRequestedServiceQuotaChangeOutcomeCallable GetRequestedServiceQuotaChangeCallable(
      const GetRequestedServiceQuotaChangeRequestT& request) const {
    return SubmitCallable(&ServiceQuotasClient::GetRequestedServiceQuotaChange, request);
  }

  /**
   * An Async wrapper for GetRequestedServiceQuotaChange that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename GetRequestedServiceQuotaChangeRequestT = Model::GetRequestedServiceQuotaChangeRequest>
  void GetRequestedServiceQuotaChangeAsync(const GetRequestedServiceQuotaChangeRequestT& request,
                                           const GetRequestedServiceQuotaChangeResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ServiceQuotasClient::GetRequestedServiceQuotaChange, request, handler, context);
  }

  /**
   * <p>Retrieves the applied quota value for the specified account-level or
   * resource-level quota. For some quotas, only the default values are available. If
   * the applied quota value is not available for a quota, the quota is not
   * retrieved.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetServiceQuota">AWS
   * API Reference</a></p>
   */
  virtual Model::GetServiceQuotaOutcome GetServiceQuota(const Model::GetServiceQuotaRequest& request) const;

  /**
   * A Callable wrapper for GetServiceQuota that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetServiceQuotaRequestT = Model::GetServiceQuotaRequest>
  Model::GetServiceQuotaOutcomeCallable GetServiceQuotaCallable(const GetServiceQuotaRequestT& request) const {
    return SubmitCallable(&ServiceQuotasClient::GetServiceQuota, request);
  }

  /**
   * An Async wrapper for GetServiceQuota that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetServiceQuotaRequestT = Model::GetServiceQuotaRequest>
  void GetServiceQuotaAsync(const GetServiceQuotaRequestT& request, const GetServiceQuotaResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ServiceQuotasClient::GetServiceQuota, request, handler, context);
  }

  /**
   * <p>Retrieves information about the specified quota increase request in your
   * quota request template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetServiceQuotaIncreaseRequestFromTemplate">AWS
   * API Reference</a></p>
   */
  virtual Model::GetServiceQuotaIncreaseRequestFromTemplateOutcome GetServiceQuotaIncreaseRequestFromTemplate(
      const Model::GetServiceQuotaIncreaseRequestFromTemplateRequest& request) const;

  /**
   * A Callable wrapper for GetServiceQuotaIncreaseRequestFromTemplate that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename GetServiceQuotaIncreaseRequestFromTemplateRequestT = Model::GetServiceQuotaIncreaseRequestFromTemplateRequest>
  Model::GetServiceQuotaIncreaseRequestFromTemplateOutcomeCallable GetServiceQuotaIncreaseRequestFromTemplateCallable(
      const GetServiceQuotaIncreaseRequestFromTemplateRequestT& request) const {
    return SubmitCallable(&ServiceQuotasClient::GetServiceQuotaIncreaseRequestFromTemplate, request);
  }

  /**
   * An Async wrapper for GetServiceQuotaIncreaseRequestFromTemplate that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename GetServiceQuotaIncreaseRequestFromTemplateRequestT = Model::GetServiceQuotaIncreaseRequestFromTemplateRequest>
  void GetServiceQuotaIncreaseRequestFromTemplateAsync(
      const GetServiceQuotaIncreaseRequestFromTemplateRequestT& request,
      const GetServiceQuotaIncreaseRequestFromTemplateResponseReceivedHandler& handler,
      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ServiceQuotasClient::GetServiceQuotaIncreaseRequestFromTemplate, request, handler, context);
  }

  /**
   * <p>Lists the default values for the quotas for the specified Amazon Web Services
   * service. A default value does not reflect any quota increases.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListAWSDefaultServiceQuotas">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAWSDefaultServiceQuotasOutcome ListAWSDefaultServiceQuotas(
      const Model::ListAWSDefaultServiceQuotasRequest& request) const;

  /**
   * A Callable wrapper for ListAWSDefaultServiceQuotas that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListAWSDefaultServiceQuotasRequestT = Model::ListAWSDefaultServiceQuotasRequest>
  Model::ListAWSDefaultServiceQuotasOutcomeCallable ListAWSDefaultServiceQuotasCallable(
      const ListAWSDefaultServiceQuotasRequestT& request) const {
    return SubmitCallable(&ServiceQuotasClient::ListAWSDefaultServiceQuotas, request);
  }

  /**
   * An Async wrapper for ListAWSDefaultServiceQuotas that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListAWSDefaultServiceQuotasRequestT = Model::ListAWSDefaultServiceQuotasRequest>
  void ListAWSDefaultServiceQuotasAsync(const ListAWSDefaultServiceQuotasRequestT& request,
                                        const ListAWSDefaultServiceQuotasResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ServiceQuotasClient::ListAWSDefaultServiceQuotas, request, handler, context);
  }

  /**
   * <p>Retrieves the quota increase requests for the specified Amazon Web Services
   * service. Filter responses to return quota requests at either the account level,
   * resource level, or all levels. Responses include any open or closed requests
   * within 90 days.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListRequestedServiceQuotaChangeHistory">AWS
   * API Reference</a></p>
   */
  virtual Model::ListRequestedServiceQuotaChangeHistoryOutcome ListRequestedServiceQuotaChangeHistory(
      const Model::ListRequestedServiceQuotaChangeHistoryRequest& request = {}) const;

  /**
   * A Callable wrapper for ListRequestedServiceQuotaChangeHistory that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename ListRequestedServiceQuotaChangeHistoryRequestT = Model::ListRequestedServiceQuotaChangeHistoryRequest>
  Model::ListRequestedServiceQuotaChangeHistoryOutcomeCallable ListRequestedServiceQuotaChangeHistoryCallable(
      const ListRequestedServiceQuotaChangeHistoryRequestT& request = {}) const {
    return SubmitCallable(&ServiceQuotasClient::ListRequestedServiceQuotaChangeHistory, request);
  }

  /**
   * An Async wrapper for ListRequestedServiceQuotaChangeHistory that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename ListRequestedServiceQuotaChangeHistoryRequestT = Model::ListRequestedServiceQuotaChangeHistoryRequest>
  void ListRequestedServiceQuotaChangeHistoryAsync(const ListRequestedServiceQuotaChangeHistoryResponseReceivedHandler& handler,
                                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                                   const ListRequestedServiceQuotaChangeHistoryRequestT& request = {}) const {
    return SubmitAsync(&ServiceQuotasClient::ListRequestedServiceQuotaChangeHistory, request, handler, context);
  }

  /**
   * <p>Retrieves the quota increase requests for the specified quota. Filter
   * responses to return quota requests at either the account level, resource level,
   * or all levels.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListRequestedServiceQuotaChangeHistoryByQuota">AWS
   * API Reference</a></p>
   */
  virtual Model::ListRequestedServiceQuotaChangeHistoryByQuotaOutcome ListRequestedServiceQuotaChangeHistoryByQuota(
      const Model::ListRequestedServiceQuotaChangeHistoryByQuotaRequest& request) const;

  /**
   * A Callable wrapper for ListRequestedServiceQuotaChangeHistoryByQuota that returns a future to the operation so that it can be executed
   * in parallel to other requests.
   */
  template <typename ListRequestedServiceQuotaChangeHistoryByQuotaRequestT = Model::ListRequestedServiceQuotaChangeHistoryByQuotaRequest>
  Model::ListRequestedServiceQuotaChangeHistoryByQuotaOutcomeCallable ListRequestedServiceQuotaChangeHistoryByQuotaCallable(
      const ListRequestedServiceQuotaChangeHistoryByQuotaRequestT& request) const {
    return SubmitCallable(&ServiceQuotasClient::ListRequestedServiceQuotaChangeHistoryByQuota, request);
  }

  /**
   * An Async wrapper for ListRequestedServiceQuotaChangeHistoryByQuota that queues the request into a thread executor and triggers
   * associated callback when operation has finished.
   */
  template <typename ListRequestedServiceQuotaChangeHistoryByQuotaRequestT = Model::ListRequestedServiceQuotaChangeHistoryByQuotaRequest>
  void ListRequestedServiceQuotaChangeHistoryByQuotaAsync(
      const ListRequestedServiceQuotaChangeHistoryByQuotaRequestT& request,
      const ListRequestedServiceQuotaChangeHistoryByQuotaResponseReceivedHandler& handler,
      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ServiceQuotasClient::ListRequestedServiceQuotaChangeHistoryByQuota, request, handler, context);
  }

  /**
   * <p>Lists the quota increase requests in the specified quota request
   * template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListServiceQuotaIncreaseRequestsInTemplate">AWS
   * API Reference</a></p>
   */
  virtual Model::ListServiceQuotaIncreaseRequestsInTemplateOutcome ListServiceQuotaIncreaseRequestsInTemplate(
      const Model::ListServiceQuotaIncreaseRequestsInTemplateRequest& request = {}) const;

  /**
   * A Callable wrapper for ListServiceQuotaIncreaseRequestsInTemplate that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename ListServiceQuotaIncreaseRequestsInTemplateRequestT = Model::ListServiceQuotaIncreaseRequestsInTemplateRequest>
  Model::ListServiceQuotaIncreaseRequestsInTemplateOutcomeCallable ListServiceQuotaIncreaseRequestsInTemplateCallable(
      const ListServiceQuotaIncreaseRequestsInTemplateRequestT& request = {}) const {
    return SubmitCallable(&ServiceQuotasClient::ListServiceQuotaIncreaseRequestsInTemplate, request);
  }

  /**
   * An Async wrapper for ListServiceQuotaIncreaseRequestsInTemplate that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename ListServiceQuotaIncreaseRequestsInTemplateRequestT = Model::ListServiceQuotaIncreaseRequestsInTemplateRequest>
  void ListServiceQuotaIncreaseRequestsInTemplateAsync(const ListServiceQuotaIncreaseRequestsInTemplateResponseReceivedHandler& handler,
                                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                                       const ListServiceQuotaIncreaseRequestsInTemplateRequestT& request = {}) const {
    return SubmitAsync(&ServiceQuotasClient::ListServiceQuotaIncreaseRequestsInTemplate, request, handler, context);
  }

  /**
   * <p>Lists the applied quota values for the specified Amazon Web Services service.
   * For some quotas, only the default values are available. If the applied quota
   * value is not available for a quota, the quota is not retrieved. Filter responses
   * to return applied quota values at either the account level, resource level, or
   * all levels.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListServiceQuotas">AWS
   * API Reference</a></p>
   */
  virtual Model::ListServiceQuotasOutcome ListServiceQuotas(const Model::ListServiceQuotasRequest& request) const;

  /**
   * A Callable wrapper for ListServiceQuotas that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListServiceQuotasRequestT = Model::ListServiceQuotasRequest>
  Model::ListServiceQuotasOutcomeCallable ListServiceQuotasCallable(const ListServiceQuotasRequestT& request) const {
    return SubmitCallable(&ServiceQuotasClient::ListServiceQuotas, request);
  }

  /**
   * An Async wrapper for ListServiceQuotas that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListServiceQuotasRequestT = Model::ListServiceQuotasRequest>
  void ListServiceQuotasAsync(const ListServiceQuotasRequestT& request, const ListServiceQuotasResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ServiceQuotasClient::ListServiceQuotas, request, handler, context);
  }

  /**
   * <p>Lists the names and codes for the Amazon Web Services services integrated
   * with Service Quotas.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListServices">AWS
   * API Reference</a></p>
   */
  virtual Model::ListServicesOutcome ListServices(const Model::ListServicesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListServices that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListServicesRequestT = Model::ListServicesRequest>
  Model::ListServicesOutcomeCallable ListServicesCallable(const ListServicesRequestT& request = {}) const {
    return SubmitCallable(&ServiceQuotasClient::ListServices, request);
  }

  /**
   * An Async wrapper for ListServices that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListServicesRequestT = Model::ListServicesRequest>
  void ListServicesAsync(const ListServicesResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                         const ListServicesRequestT& request = {}) const {
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
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&ServiceQuotasClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ServiceQuotasClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Adds a quota increase request to your quota request template.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/PutServiceQuotaIncreaseRequestIntoTemplate">AWS
   * API Reference</a></p>
   */
  virtual Model::PutServiceQuotaIncreaseRequestIntoTemplateOutcome PutServiceQuotaIncreaseRequestIntoTemplate(
      const Model::PutServiceQuotaIncreaseRequestIntoTemplateRequest& request) const;

  /**
   * A Callable wrapper for PutServiceQuotaIncreaseRequestIntoTemplate that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename PutServiceQuotaIncreaseRequestIntoTemplateRequestT = Model::PutServiceQuotaIncreaseRequestIntoTemplateRequest>
  Model::PutServiceQuotaIncreaseRequestIntoTemplateOutcomeCallable PutServiceQuotaIncreaseRequestIntoTemplateCallable(
      const PutServiceQuotaIncreaseRequestIntoTemplateRequestT& request) const {
    return SubmitCallable(&ServiceQuotasClient::PutServiceQuotaIncreaseRequestIntoTemplate, request);
  }

  /**
   * An Async wrapper for PutServiceQuotaIncreaseRequestIntoTemplate that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename PutServiceQuotaIncreaseRequestIntoTemplateRequestT = Model::PutServiceQuotaIncreaseRequestIntoTemplateRequest>
  void PutServiceQuotaIncreaseRequestIntoTemplateAsync(
      const PutServiceQuotaIncreaseRequestIntoTemplateRequestT& request,
      const PutServiceQuotaIncreaseRequestIntoTemplateResponseReceivedHandler& handler,
      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ServiceQuotasClient::PutServiceQuotaIncreaseRequestIntoTemplate, request, handler, context);
  }

  /**
   * <p>Submits a quota increase request for the specified quota at the account or
   * resource level.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/RequestServiceQuotaIncrease">AWS
   * API Reference</a></p>
   */
  virtual Model::RequestServiceQuotaIncreaseOutcome RequestServiceQuotaIncrease(
      const Model::RequestServiceQuotaIncreaseRequest& request) const;

  /**
   * A Callable wrapper for RequestServiceQuotaIncrease that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename RequestServiceQuotaIncreaseRequestT = Model::RequestServiceQuotaIncreaseRequest>
  Model::RequestServiceQuotaIncreaseOutcomeCallable RequestServiceQuotaIncreaseCallable(
      const RequestServiceQuotaIncreaseRequestT& request) const {
    return SubmitCallable(&ServiceQuotasClient::RequestServiceQuotaIncrease, request);
  }

  /**
   * An Async wrapper for RequestServiceQuotaIncrease that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename RequestServiceQuotaIncreaseRequestT = Model::RequestServiceQuotaIncreaseRequest>
  void RequestServiceQuotaIncreaseAsync(const RequestServiceQuotaIncreaseRequestT& request,
                                        const RequestServiceQuotaIncreaseResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ServiceQuotasClient::RequestServiceQuotaIncrease, request, handler, context);
  }

  /**
   * <p>Starts <a
   * href="https://docs.aws.amazon.com/servicequotas/latest/userguide/automatic-management.html">Service
   * Quotas Automatic Management</a> for an Amazon Web Services account, including
   * notification preferences and excluded quotas configurations. Automatic
   * Management monitors your Service Quotas utilization and notifies you before you
   * run out of your allocated quotas.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/StartAutoManagement">AWS
   * API Reference</a></p>
   */
  virtual Model::StartAutoManagementOutcome StartAutoManagement(const Model::StartAutoManagementRequest& request) const;

  /**
   * A Callable wrapper for StartAutoManagement that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StartAutoManagementRequestT = Model::StartAutoManagementRequest>
  Model::StartAutoManagementOutcomeCallable StartAutoManagementCallable(const StartAutoManagementRequestT& request) const {
    return SubmitCallable(&ServiceQuotasClient::StartAutoManagement, request);
  }

  /**
   * An Async wrapper for StartAutoManagement that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename StartAutoManagementRequestT = Model::StartAutoManagementRequest>
  void StartAutoManagementAsync(const StartAutoManagementRequestT& request, const StartAutoManagementResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ServiceQuotasClient::StartAutoManagement, request, handler, context);
  }

  /**
   * <p>Initiates the generation of a quota utilization report for your Amazon Web
   * Services account. This asynchronous operation analyzes your quota usage across
   * all Amazon Web Services services and returns a unique report identifier that you
   * can use to retrieve the results.</p> <p>The report generation process may take
   * several seconds to complete, depending on the number of quotas in your account.
   * Use the <code>GetQuotaUtilizationReport</code> operation to check the status and
   * retrieve the results when the report is ready.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/StartQuotaUtilizationReport">AWS
   * API Reference</a></p>
   */
  virtual Model::StartQuotaUtilizationReportOutcome StartQuotaUtilizationReport(
      const Model::StartQuotaUtilizationReportRequest& request = {}) const;

  /**
   * A Callable wrapper for StartQuotaUtilizationReport that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename StartQuotaUtilizationReportRequestT = Model::StartQuotaUtilizationReportRequest>
  Model::StartQuotaUtilizationReportOutcomeCallable StartQuotaUtilizationReportCallable(
      const StartQuotaUtilizationReportRequestT& request = {}) const {
    return SubmitCallable(&ServiceQuotasClient::StartQuotaUtilizationReport, request);
  }

  /**
   * An Async wrapper for StartQuotaUtilizationReport that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename StartQuotaUtilizationReportRequestT = Model::StartQuotaUtilizationReportRequest>
  void StartQuotaUtilizationReportAsync(const StartQuotaUtilizationReportResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                        const StartQuotaUtilizationReportRequestT& request = {}) const {
    return SubmitAsync(&ServiceQuotasClient::StartQuotaUtilizationReport, request, handler, context);
  }

  /**
   * <p>Stops <a
   * href="https://docs.aws.amazon.com/servicequotas/latest/userguide/automatic-management.html">Service
   * Quotas Automatic Management</a> for an Amazon Web Services account and removes
   * all associated configurations. Automatic Management monitors your Service Quotas
   * utilization and notifies you before you run out of your allocated
   * quotas.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/StopAutoManagement">AWS
   * API Reference</a></p>
   */
  virtual Model::StopAutoManagementOutcome StopAutoManagement(const Model::StopAutoManagementRequest& request = {}) const;

  /**
   * A Callable wrapper for StopAutoManagement that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StopAutoManagementRequestT = Model::StopAutoManagementRequest>
  Model::StopAutoManagementOutcomeCallable StopAutoManagementCallable(const StopAutoManagementRequestT& request = {}) const {
    return SubmitCallable(&ServiceQuotasClient::StopAutoManagement, request);
  }

  /**
   * An Async wrapper for StopAutoManagement that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename StopAutoManagementRequestT = Model::StopAutoManagementRequest>
  void StopAutoManagementAsync(const StopAutoManagementResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                               const StopAutoManagementRequestT& request = {}) const {
    return SubmitAsync(&ServiceQuotasClient::StopAutoManagement, request, handler, context);
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
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&ServiceQuotasClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
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
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&ServiceQuotasClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ServiceQuotasClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates your <a
   * href="https://docs.aws.amazon.com/servicequotas/latest/userguide/automatic-management.html">Service
   * Quotas Automatic Management</a> configuration, including notification
   * preferences and excluded quotas. Automatic Management monitors your Service
   * Quotas utilization and notifies you before you run out of your allocated
   * quotas.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/UpdateAutoManagement">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateAutoManagementOutcome UpdateAutoManagement(const Model::UpdateAutoManagementRequest& request = {}) const;

  /**
   * A Callable wrapper for UpdateAutoManagement that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateAutoManagementRequestT = Model::UpdateAutoManagementRequest>
  Model::UpdateAutoManagementOutcomeCallable UpdateAutoManagementCallable(const UpdateAutoManagementRequestT& request = {}) const {
    return SubmitCallable(&ServiceQuotasClient::UpdateAutoManagement, request);
  }

  /**
   * An Async wrapper for UpdateAutoManagement that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateAutoManagementRequestT = Model::UpdateAutoManagementRequest>
  void UpdateAutoManagementAsync(const UpdateAutoManagementResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                 const UpdateAutoManagementRequestT& request = {}) const {
    return SubmitAsync(&ServiceQuotasClient::UpdateAutoManagement, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<ServiceQuotasEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<ServiceQuotasClient>;
  void init(const ServiceQuotasClientConfiguration& clientConfiguration);

  ServiceQuotasClientConfiguration m_clientConfiguration;
  std::shared_ptr<ServiceQuotasEndpointProviderBase> m_endpointProvider;
};

}  // namespace ServiceQuotas
}  // namespace Aws
