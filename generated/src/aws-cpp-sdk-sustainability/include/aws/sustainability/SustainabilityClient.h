/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sustainability/SustainabilityPaginationBase.h>
#include <aws/sustainability/SustainabilityServiceClientModel.h>
#include <aws/sustainability/SustainabilityWaiter.h>
#include <aws/sustainability/Sustainability_EXPORTS.h>

namespace Aws {
namespace Sustainability {
/**
 * <p>The AWS Sustainability service provides programmatic access to estimated
 * carbon emissions data for your Amazon Web Services usage. Use the AWS
 * Sustainability service to retrieve, analyze, and track the carbon footprint of
 * your cloud infrastructure over time. </p> <p>With the AWS Sustainability
 * service, you can:</p> <ul> <li> <p>Retrieve estimated carbon emissions for your
 * Amazon Web Services usage across different time periods </p> </li> <li> <p>Group
 * emissions data by dimensions such as account, region, and service</p> </li> <li>
 * <p>Filter emissions data to focus on specific accounts, regions, or services</p>
 * </li> <li> <p>Access multiple emissions calculation methodologies including
 * Location-based Method (LBM) and Market-based Method (MBM) </p> </li> <li>
 * <p>Aggregate emissions data at various time granularities including monthly,
 * quarterly, and yearly periods </p> </li> </ul> <p> The API supports pagination
 * for efficient data retrieval and provides dimension values to help you
 * understand the available grouping and filtering options for your account. </p>
 * <p> All emissions values are calculated using methodologies aligned with the
 * Greenhouse Gas (GHG) Protocol and are provided in metric tons of carbon
 * dioxide-equivalent (MTCO2e). </p>
 */
class AWS_SUSTAINABILITY_API SustainabilityClient : public Aws::Client::AWSJsonClient,
                                                    public Aws::Client::ClientWithAsyncTemplateMethods<SustainabilityClient>,
                                                    public SustainabilityPaginationBase<SustainabilityClient>,
                                                    public SustainabilityWaiter<SustainabilityClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef SustainabilityClientConfiguration ClientConfigurationType;
  typedef SustainabilityEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  SustainabilityClient(const Aws::Sustainability::SustainabilityClientConfiguration& clientConfiguration =
                           Aws::Sustainability::SustainabilityClientConfiguration(),
                       std::shared_ptr<SustainabilityEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  SustainabilityClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<SustainabilityEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::Sustainability::SustainabilityClientConfiguration& clientConfiguration =
                           Aws::Sustainability::SustainabilityClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  SustainabilityClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<SustainabilityEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::Sustainability::SustainabilityClientConfiguration& clientConfiguration =
                           Aws::Sustainability::SustainabilityClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  SustainabilityClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  SustainabilityClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  SustainabilityClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~SustainabilityClient();

  /**
   * <p>Returns estimated carbon emission values based on customer grouping and
   * filtering parameters. We recommend using pagination to ensure that the operation
   * returns quickly and successfully. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sustainability-2018-05-10/GetEstimatedCarbonEmissions">AWS
   * API Reference</a></p>
   */
  virtual Model::GetEstimatedCarbonEmissionsOutcome GetEstimatedCarbonEmissions(
      const Model::GetEstimatedCarbonEmissionsRequest& request) const;

  /**
   * A Callable wrapper for GetEstimatedCarbonEmissions that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetEstimatedCarbonEmissionsRequestT = Model::GetEstimatedCarbonEmissionsRequest>
  Model::GetEstimatedCarbonEmissionsOutcomeCallable GetEstimatedCarbonEmissionsCallable(
      const GetEstimatedCarbonEmissionsRequestT& request) const {
    return SubmitCallable(&SustainabilityClient::GetEstimatedCarbonEmissions, request);
  }

  /**
   * An Async wrapper for GetEstimatedCarbonEmissions that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetEstimatedCarbonEmissionsRequestT = Model::GetEstimatedCarbonEmissionsRequest>
  void GetEstimatedCarbonEmissionsAsync(const GetEstimatedCarbonEmissionsRequestT& request,
                                        const GetEstimatedCarbonEmissionsResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SustainabilityClient::GetEstimatedCarbonEmissions, request, handler, context);
  }

  /**
   * <p>Returns the possible dimension values available for a customer's account. We
   * recommend using pagination to ensure that the operation returns quickly and
   * successfully. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sustainability-2018-05-10/GetEstimatedCarbonEmissionsDimensionValues">AWS
   * API Reference</a></p>
   */
  virtual Model::GetEstimatedCarbonEmissionsDimensionValuesOutcome GetEstimatedCarbonEmissionsDimensionValues(
      const Model::GetEstimatedCarbonEmissionsDimensionValuesRequest& request) const;

  /**
   * A Callable wrapper for GetEstimatedCarbonEmissionsDimensionValues that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename GetEstimatedCarbonEmissionsDimensionValuesRequestT = Model::GetEstimatedCarbonEmissionsDimensionValuesRequest>
  Model::GetEstimatedCarbonEmissionsDimensionValuesOutcomeCallable GetEstimatedCarbonEmissionsDimensionValuesCallable(
      const GetEstimatedCarbonEmissionsDimensionValuesRequestT& request) const {
    return SubmitCallable(&SustainabilityClient::GetEstimatedCarbonEmissionsDimensionValues, request);
  }

  /**
   * An Async wrapper for GetEstimatedCarbonEmissionsDimensionValues that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename GetEstimatedCarbonEmissionsDimensionValuesRequestT = Model::GetEstimatedCarbonEmissionsDimensionValuesRequest>
  void GetEstimatedCarbonEmissionsDimensionValuesAsync(
      const GetEstimatedCarbonEmissionsDimensionValuesRequestT& request,
      const GetEstimatedCarbonEmissionsDimensionValuesResponseReceivedHandler& handler,
      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SustainabilityClient::GetEstimatedCarbonEmissionsDimensionValues, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<SustainabilityEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<SustainabilityClient>;
  void init(const SustainabilityClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, SustainabilityError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  SustainabilityClientConfiguration m_clientConfiguration;
  std::shared_ptr<SustainabilityEndpointProviderBase> m_endpointProvider;
};

}  // namespace Sustainability
}  // namespace Aws
