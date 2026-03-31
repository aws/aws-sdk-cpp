/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/uxc/UxcPaginationBase.h>
#include <aws/uxc/UxcServiceClientModel.h>
#include <aws/uxc/UxcWaiter.h>
#include <aws/uxc/Uxc_EXPORTS.h>

namespace Aws {
namespace uxc {
/**
 * <p>This is the Amazon Web Services User Experience Customization (UXC) API
 * Reference. Amazon Web Services User Experience Customization (UXC) is a utility
 * that provides programmatic access to enable account administrators to customize
 * the visual appearance of the Amazon Web Services Management Console and manage
 * these settings at the account level.</p>  <p>The
 * <code>visibleServices</code> and <code>visibleRegions</code> settings control
 * only the appearance of services and Regions in the Amazon Web Services
 * Management Console. They do not restrict access through the CLI, SDKs, or other
 * APIs.</p>  <p>For more information about UXC features and console
 * procedures, see <a
 * href="https://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/getting-started-uxc.html">Getting
 * started with Amazon Web Services User Experience Customization</a>. For
 * information about required permissions, see <a
 * href="https://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/security_iam.html">Identity
 * and access management for Amazon Web Services Management Console</a>.</p>
 */
class AWS_UXC_API UxcClient : public Aws::Client::AWSJsonClient,
                              public Aws::Client::ClientWithAsyncTemplateMethods<UxcClient>,
                              public UxcPaginationBase<UxcClient>,
                              public UxcWaiter<UxcClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef UxcClientConfiguration ClientConfigurationType;
  typedef UxcEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  UxcClient(const Aws::uxc::UxcClientConfiguration& clientConfiguration = Aws::uxc::UxcClientConfiguration(),
            std::shared_ptr<UxcEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  UxcClient(const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<UxcEndpointProviderBase> endpointProvider = nullptr,
            const Aws::uxc::UxcClientConfiguration& clientConfiguration = Aws::uxc::UxcClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  UxcClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            std::shared_ptr<UxcEndpointProviderBase> endpointProvider = nullptr,
            const Aws::uxc::UxcClientConfiguration& clientConfiguration = Aws::uxc::UxcClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  UxcClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  UxcClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  UxcClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~UxcClient();

  /**
   * <p>Returns the current account customization settings, including account color,
   * visible services, and visible Regions. Settings that you have not configured
   * return their default values: visible Regions and visible services return `null`,
   * and account color returns `none`.</p>  <p>The <code>visibleServices</code>
   * and <code>visibleRegions</code> settings control only the appearance of services
   * and Regions in the Amazon Web Services Management Console. They do not restrict
   * access through the CLI, SDKs, or other APIs.</p> <p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/uxc-2024-07-01/GetAccountCustomizations">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAccountCustomizationsOutcome GetAccountCustomizations(const Model::GetAccountCustomizationsRequest& request = {}) const;

  /**
   * A Callable wrapper for GetAccountCustomizations that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetAccountCustomizationsRequestT = Model::GetAccountCustomizationsRequest>
  Model::GetAccountCustomizationsOutcomeCallable GetAccountCustomizationsCallable(
      const GetAccountCustomizationsRequestT& request = {}) const {
    return SubmitCallable(&UxcClient::GetAccountCustomizations, request);
  }

  /**
   * An Async wrapper for GetAccountCustomizations that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetAccountCustomizationsRequestT = Model::GetAccountCustomizationsRequest>
  void GetAccountCustomizationsAsync(const GetAccountCustomizationsResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                     const GetAccountCustomizationsRequestT& request = {}) const {
    return SubmitAsync(&UxcClient::GetAccountCustomizations, request, handler, context);
  }

  /**
   * <p>Returns a paginated list of Amazon Web Services service identifiers that you
   * can use as values for the <code>visibleServices</code> setting in <a
   * href="https://docs.aws.amazon.com/awsconsolehelpdocs/latest/APIReference/API_UpdateAccountCustomizations.html">UpdateAccountCustomizations</a>.
   * The available services vary by Amazon Web Services partition. Use pagination to
   * retrieve all results.</p>  <p>The <code>visibleServices</code> setting
   * controls only the appearance of services in the Amazon Web Services Management
   * Console. It does not restrict access through the CLI, SDKs, or other APIs.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/uxc-2024-07-01/ListServices">AWS
   * API Reference</a></p>
   */
  virtual Model::ListServicesOutcome ListServices(const Model::ListServicesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListServices that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListServicesRequestT = Model::ListServicesRequest>
  Model::ListServicesOutcomeCallable ListServicesCallable(const ListServicesRequestT& request = {}) const {
    return SubmitCallable(&UxcClient::ListServices, request);
  }

  /**
   * An Async wrapper for ListServices that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListServicesRequestT = Model::ListServicesRequest>
  void ListServicesAsync(const ListServicesResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                         const ListServicesRequestT& request = {}) const {
    return SubmitAsync(&UxcClient::ListServices, request, handler, context);
  }

  /**
   * <p>Updates one or more account customization settings. You can update account
   * color, visible services, and visible Regions in a single request. Only the
   * settings that you include in the request body are modified. Omitted settings
   * remain unchanged. To reset a setting to its default behavior, set the value to
   * <code>null</code> for visible Regions and visible services, or <code>none</code>
   * for account color. This operation is idempotent.</p>  <p>The
   * <code>visibleServices</code> and <code>visibleRegions</code> settings control
   * only the appearance of services and Regions in the Amazon Web Services
   * Management Console. They do not restrict access through the CLI, SDKs, or other
   * APIs.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/uxc-2024-07-01/UpdateAccountCustomizations">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateAccountCustomizationsOutcome UpdateAccountCustomizations(
      const Model::UpdateAccountCustomizationsRequest& request = {}) const;

  /**
   * A Callable wrapper for UpdateAccountCustomizations that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename UpdateAccountCustomizationsRequestT = Model::UpdateAccountCustomizationsRequest>
  Model::UpdateAccountCustomizationsOutcomeCallable UpdateAccountCustomizationsCallable(
      const UpdateAccountCustomizationsRequestT& request = {}) const {
    return SubmitCallable(&UxcClient::UpdateAccountCustomizations, request);
  }

  /**
   * An Async wrapper for UpdateAccountCustomizations that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateAccountCustomizationsRequestT = Model::UpdateAccountCustomizationsRequest>
  void UpdateAccountCustomizationsAsync(const UpdateAccountCustomizationsResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                        const UpdateAccountCustomizationsRequestT& request = {}) const {
    return SubmitAsync(&UxcClient::UpdateAccountCustomizations, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<UxcEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<UxcClient>;
  void init(const UxcClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, UxcError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  UxcClientConfiguration m_clientConfiguration;
  std::shared_ptr<UxcEndpointProviderBase> m_endpointProvider;
};

}  // namespace uxc
}  // namespace Aws
