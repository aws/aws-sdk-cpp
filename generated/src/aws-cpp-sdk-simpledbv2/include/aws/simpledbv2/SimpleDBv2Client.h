/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/simpledbv2/SimpleDBv2PaginationBase.h>
#include <aws/simpledbv2/SimpleDBv2ServiceClientModel.h>
#include <aws/simpledbv2/SimpleDBv2_EXPORTS.h>

namespace Aws {
namespace SimpleDBv2 {
/**
 * <p>Amazon SimpleDB is a web service providing the core database functions of
 * data indexing and querying in the cloud. By offloading the time and effort
 * associated with building and operating a web-scale database, SimpleDB provides
 * developers the freedom to focus on application development.</p> <pre><code> A
 * traditional, clustered relational database requires a sizable upfront capital
 * outlay, is complex to design, and often requires extensive and repetitive
 * database administration. Amazon SimpleDB is dramatically simpler, requiring no
 * schema, automatically indexing your data and providing a simple API for storage
 * and access. This approach eliminates the administrative burden of data modeling,
 * index maintenance, and performance tuning. Developers gain access to this
 * functionality within Amazon's proven computing environment, are able to scale
 * instantly, and pay only for what they use. </code></pre>
 */
class AWS_SIMPLEDBV2_API SimpleDBv2Client : public Aws::Client::AWSJsonClient,
                                            public Aws::Client::ClientWithAsyncTemplateMethods<SimpleDBv2Client>,
                                            public SimpleDBv2PaginationBase<SimpleDBv2Client> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef SimpleDBv2ClientConfiguration ClientConfigurationType;
  typedef SimpleDBv2EndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  SimpleDBv2Client(
      const Aws::SimpleDBv2::SimpleDBv2ClientConfiguration& clientConfiguration = Aws::SimpleDBv2::SimpleDBv2ClientConfiguration(),
      std::shared_ptr<SimpleDBv2EndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  SimpleDBv2Client(
      const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<SimpleDBv2EndpointProviderBase> endpointProvider = nullptr,
      const Aws::SimpleDBv2::SimpleDBv2ClientConfiguration& clientConfiguration = Aws::SimpleDBv2::SimpleDBv2ClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  SimpleDBv2Client(
      const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
      std::shared_ptr<SimpleDBv2EndpointProviderBase> endpointProvider = nullptr,
      const Aws::SimpleDBv2::SimpleDBv2ClientConfiguration& clientConfiguration = Aws::SimpleDBv2::SimpleDBv2ClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  SimpleDBv2Client(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  SimpleDBv2Client(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  SimpleDBv2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                   const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~SimpleDBv2Client();

  /**
   * <p>Returns information for an existing domain export.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/simpledbv2-2025-09-26/GetExport">AWS
   * API Reference</a></p>
   */
  virtual Model::GetExportOutcome GetExport(const Model::GetExportRequest& request) const;

  /**
   * A Callable wrapper for GetExport that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetExportRequestT = Model::GetExportRequest>
  Model::GetExportOutcomeCallable GetExportCallable(const GetExportRequestT& request) const {
    return SubmitCallable(&SimpleDBv2Client::GetExport, request);
  }

  /**
   * An Async wrapper for GetExport that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetExportRequestT = Model::GetExportRequest>
  void GetExportAsync(const GetExportRequestT& request, const GetExportResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SimpleDBv2Client::GetExport, request, handler, context);
  }

  /**
   * <p>Lists all exports that were created. The results are paginated and can be
   * filtered by domain name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/simpledbv2-2025-09-26/ListExports">AWS
   * API Reference</a></p>
   */
  virtual Model::ListExportsOutcome ListExports(const Model::ListExportsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListExports that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListExportsRequestT = Model::ListExportsRequest>
  Model::ListExportsOutcomeCallable ListExportsCallable(const ListExportsRequestT& request = {}) const {
    return SubmitCallable(&SimpleDBv2Client::ListExports, request);
  }

  /**
   * An Async wrapper for ListExports that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListExportsRequestT = Model::ListExportsRequest>
  void ListExportsAsync(const ListExportsResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                        const ListExportsRequestT& request = {}) const {
    return SubmitAsync(&SimpleDBv2Client::ListExports, request, handler, context);
  }

  /**
   * <p>Initiates the export of a SimpleDB domain to an S3 bucket.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/simpledbv2-2025-09-26/StartDomainExport">AWS
   * API Reference</a></p>
   */
  virtual Model::StartDomainExportOutcome StartDomainExport(const Model::StartDomainExportRequest& request) const;

  /**
   * A Callable wrapper for StartDomainExport that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StartDomainExportRequestT = Model::StartDomainExportRequest>
  Model::StartDomainExportOutcomeCallable StartDomainExportCallable(const StartDomainExportRequestT& request) const {
    return SubmitCallable(&SimpleDBv2Client::StartDomainExport, request);
  }

  /**
   * An Async wrapper for StartDomainExport that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename StartDomainExportRequestT = Model::StartDomainExportRequest>
  void StartDomainExportAsync(const StartDomainExportRequestT& request, const StartDomainExportResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SimpleDBv2Client::StartDomainExport, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<SimpleDBv2EndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<SimpleDBv2Client>;
  void init(const SimpleDBv2ClientConfiguration& clientConfiguration);

  SimpleDBv2ClientConfiguration m_clientConfiguration;
  std::shared_ptr<SimpleDBv2EndpointProviderBase> m_endpointProvider;
};

}  // namespace SimpleDBv2
}  // namespace Aws
