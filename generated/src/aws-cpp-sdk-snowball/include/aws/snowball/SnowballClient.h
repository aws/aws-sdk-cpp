/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/snowball/SnowballServiceClientModel.h>

namespace Aws
{
namespace Snowball
{
  /**
   * <p>The Amazon Web Services Snow Family provides a petabyte-scale data transport
   * solution that uses secure devices to transfer large amounts of data between your
   * on-premises data centers and Amazon Simple Storage Service (Amazon S3). The Snow
   * Family commands described here provide access to the same functionality that is
   * available in the Amazon Web Services Snow Family Management Console, which
   * enables you to create and manage jobs for a Snow Family device. To transfer data
   * locally with a Snow Family device, you'll need to use the Snowball Edge client
   * or the Amazon S3 API Interface for Snowball or OpsHub for Snow Family. For more
   * information, see the <a
   * href="https://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
   * Guide</a>.</p>
   */
  class AWS_SNOWBALL_API SnowballClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SnowballClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef SnowballClientConfiguration ClientConfigurationType;
      typedef SnowballEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SnowballClient(const Aws::Snowball::SnowballClientConfiguration& clientConfiguration = Aws::Snowball::SnowballClientConfiguration(),
                       std::shared_ptr<SnowballEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SnowballClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<SnowballEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::Snowball::SnowballClientConfiguration& clientConfiguration = Aws::Snowball::SnowballClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SnowballClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<SnowballEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::Snowball::SnowballClientConfiguration& clientConfiguration = Aws::Snowball::SnowballClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SnowballClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SnowballClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SnowballClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SnowballClient();

        /**
         * <p>Cancels a cluster job. You can only cancel a cluster job while it's in the
         * <code>AwaitingQuorum</code> status. You'll have at least an hour after creating
         * a cluster job to cancel it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/CancelCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelClusterOutcome CancelCluster(const Model::CancelClusterRequest& request) const;

        /**
         * A Callable wrapper for CancelCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelClusterRequestT = Model::CancelClusterRequest>
        Model::CancelClusterOutcomeCallable CancelClusterCallable(const CancelClusterRequestT& request) const
        {
            return SubmitCallable(&SnowballClient::CancelCluster, request);
        }

        /**
         * An Async wrapper for CancelCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelClusterRequestT = Model::CancelClusterRequest>
        void CancelClusterAsync(const CancelClusterRequestT& request, const CancelClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SnowballClient::CancelCluster, request, handler, context);
        }

        /**
         * <p>Cancels the specified job. You can only cancel a job before its
         * <code>JobState</code> value changes to <code>PreparingAppliance</code>.
         * Requesting the <code>ListJobs</code> or <code>DescribeJob</code> action returns
         * a job's <code>JobState</code> as part of the response element data
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/CancelJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelJobOutcome CancelJob(const Model::CancelJobRequest& request) const;

        /**
         * A Callable wrapper for CancelJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelJobRequestT = Model::CancelJobRequest>
        Model::CancelJobOutcomeCallable CancelJobCallable(const CancelJobRequestT& request) const
        {
            return SubmitCallable(&SnowballClient::CancelJob, request);
        }

        /**
         * An Async wrapper for CancelJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelJobRequestT = Model::CancelJobRequest>
        void CancelJobAsync(const CancelJobRequestT& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SnowballClient::CancelJob, request, handler, context);
        }

        /**
         * <p>Creates an address for a Snow device to be shipped to. In most regions,
         * addresses are validated at the time of creation. The address you provide must be
         * located within the serviceable area of your region. If the address is invalid or
         * unsupported, then an exception is thrown. If providing an address as a JSON file
         * through the <code>cli-input-json</code> option, include the full file path. For
         * example, <code>--cli-input-json file://create-address.json</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/CreateAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAddressOutcome CreateAddress(const Model::CreateAddressRequest& request) const;

        /**
         * A Callable wrapper for CreateAddress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAddressRequestT = Model::CreateAddressRequest>
        Model::CreateAddressOutcomeCallable CreateAddressCallable(const CreateAddressRequestT& request) const
        {
            return SubmitCallable(&SnowballClient::CreateAddress, request);
        }

        /**
         * An Async wrapper for CreateAddress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAddressRequestT = Model::CreateAddressRequest>
        void CreateAddressAsync(const CreateAddressRequestT& request, const CreateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SnowballClient::CreateAddress, request, handler, context);
        }

        /**
         * <p>Creates an empty cluster. Each cluster supports five nodes. You use the
         * <a>CreateJob</a> action separately to create the jobs for each of these nodes.
         * The cluster does not ship until these five node jobs have been
         * created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/CreateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request) const;

        /**
         * A Callable wrapper for CreateCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateClusterRequestT = Model::CreateClusterRequest>
        Model::CreateClusterOutcomeCallable CreateClusterCallable(const CreateClusterRequestT& request) const
        {
            return SubmitCallable(&SnowballClient::CreateCluster, request);
        }

        /**
         * An Async wrapper for CreateCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateClusterRequestT = Model::CreateClusterRequest>
        void CreateClusterAsync(const CreateClusterRequestT& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SnowballClient::CreateCluster, request, handler, context);
        }

        /**
         * <p>Creates a job to import or export data between Amazon S3 and your on-premises
         * data center. Your Amazon Web Services account must have the right trust policies
         * and permissions in place to create a job for a Snow device. If you're creating a
         * job for a node in a cluster, you only need to provide the <code>clusterId</code>
         * value; the other job attributes are inherited from the cluster. </p> 
         * <p>Only the Snowball; Edge device type is supported when ordering clustered
         * jobs.</p> <p>The device capacity is optional.</p> <p>Availability of device
         * types differ by Amazon Web Services Region. For more information about Region
         * availability, see <a
         * href="https://aws.amazon.com/about-aws/global-infrastructure/regional-product-services/?p=ngi&amp;loc=4">Amazon
         * Web Services Regional Services</a>.</p>  <p/> <p class="title"> <b>Snow
         * Family devices and their capacities.</b> </p> <ul> <li> <p>Device type:
         * <b>SNC1_SSD</b> </p> <ul> <li> <p>Capacity: T14</p> </li> <li> <p>Description:
         * Snowcone </p> </li> </ul> <p/> </li> <li> <p>Device type: <b>SNC1_HDD</b> </p>
         * <ul> <li> <p>Capacity: T8</p> </li> <li> <p>Description: Snowcone </p> </li>
         * </ul> <p/> </li> <li> <p>Device type: <b>EDGE_S</b> </p> <ul> <li> <p>Capacity:
         * T98</p> </li> <li> <p>Description: Snowball Edge Storage Optimized for data
         * transfer only </p> </li> </ul> <p/> </li> <li> <p>Device type: <b>EDGE_CG</b>
         * </p> <ul> <li> <p>Capacity: T42</p> </li> <li> <p>Description: Snowball Edge
         * Compute Optimized with GPU</p> </li> </ul> <p/> </li> <li> <p>Device type:
         * <b>EDGE_C</b> </p> <ul> <li> <p>Capacity: T42</p> </li> <li> <p>Description:
         * Snowball Edge Compute Optimized without GPU</p> </li> </ul> <p/> </li> <li>
         * <p>Device type: <b>EDGE</b> </p> <ul> <li> <p>Capacity: T100</p> </li> <li>
         * <p>Description: Snowball Edge Storage Optimized with EC2 Compute</p> </li> </ul>
         *  <p>This device is replaced with T98.</p>  <p/> </li> <li>
         * <p>Device type: <b>STANDARD</b> </p> <ul> <li> <p>Capacity: T50</p> </li> <li>
         * <p>Description: Original Snowball device</p>  <p>This device is only
         * available in the Ningxia, Beijing, and Singapore Amazon Web Services Region </p>
         *  </li> </ul> <p/> </li> <li> <p>Device type: <b>STANDARD</b> </p> <ul>
         * <li> <p>Capacity: T80</p> </li> <li> <p>Description: Original Snowball
         * device</p>  <p>This device is only available in the Ningxia, Beijing, and
         * Singapore Amazon Web Services Region. </p>  </li> </ul> <p/> </li> <li>
         * <p>Snow Family device type: <b>RACK_5U_C</b> </p> <ul> <li> <p>Capacity: T13
         * </p> </li> <li> <p>Description: Snowblade.</p> </li> </ul> </li> <li> <p>Device
         * type: <b>V3_5S</b> </p> <ul> <li> <p>Capacity: T240</p> </li> <li>
         * <p>Description: Snowball Edge Storage Optimized 210TB</p> </li> </ul> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/CreateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJobOutcome CreateJob(const Model::CreateJobRequest& request) const;

        /**
         * A Callable wrapper for CreateJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateJobRequestT = Model::CreateJobRequest>
        Model::CreateJobOutcomeCallable CreateJobCallable(const CreateJobRequestT& request) const
        {
            return SubmitCallable(&SnowballClient::CreateJob, request);
        }

        /**
         * An Async wrapper for CreateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateJobRequestT = Model::CreateJobRequest>
        void CreateJobAsync(const CreateJobRequestT& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SnowballClient::CreateJob, request, handler, context);
        }

        /**
         * <p>Creates a job with the long-term usage option for a device. The long-term
         * usage is a 1-year or 3-year long-term pricing type for the device. You are
         * billed upfront, and Amazon Web Services provides discounts for long-term
         * pricing. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/CreateLongTermPricing">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLongTermPricingOutcome CreateLongTermPricing(const Model::CreateLongTermPricingRequest& request) const;

        /**
         * A Callable wrapper for CreateLongTermPricing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLongTermPricingRequestT = Model::CreateLongTermPricingRequest>
        Model::CreateLongTermPricingOutcomeCallable CreateLongTermPricingCallable(const CreateLongTermPricingRequestT& request) const
        {
            return SubmitCallable(&SnowballClient::CreateLongTermPricing, request);
        }

        /**
         * An Async wrapper for CreateLongTermPricing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLongTermPricingRequestT = Model::CreateLongTermPricingRequest>
        void CreateLongTermPricingAsync(const CreateLongTermPricingRequestT& request, const CreateLongTermPricingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SnowballClient::CreateLongTermPricing, request, handler, context);
        }

        /**
         * <p>Creates a shipping label that will be used to return the Snow device to
         * Amazon Web Services.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/CreateReturnShippingLabel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReturnShippingLabelOutcome CreateReturnShippingLabel(const Model::CreateReturnShippingLabelRequest& request) const;

        /**
         * A Callable wrapper for CreateReturnShippingLabel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateReturnShippingLabelRequestT = Model::CreateReturnShippingLabelRequest>
        Model::CreateReturnShippingLabelOutcomeCallable CreateReturnShippingLabelCallable(const CreateReturnShippingLabelRequestT& request) const
        {
            return SubmitCallable(&SnowballClient::CreateReturnShippingLabel, request);
        }

        /**
         * An Async wrapper for CreateReturnShippingLabel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateReturnShippingLabelRequestT = Model::CreateReturnShippingLabelRequest>
        void CreateReturnShippingLabelAsync(const CreateReturnShippingLabelRequestT& request, const CreateReturnShippingLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SnowballClient::CreateReturnShippingLabel, request, handler, context);
        }

        /**
         * <p>Takes an <code>AddressId</code> and returns specific details about that
         * address in the form of an <code>Address</code> object.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/DescribeAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAddressOutcome DescribeAddress(const Model::DescribeAddressRequest& request) const;

        /**
         * A Callable wrapper for DescribeAddress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAddressRequestT = Model::DescribeAddressRequest>
        Model::DescribeAddressOutcomeCallable DescribeAddressCallable(const DescribeAddressRequestT& request) const
        {
            return SubmitCallable(&SnowballClient::DescribeAddress, request);
        }

        /**
         * An Async wrapper for DescribeAddress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAddressRequestT = Model::DescribeAddressRequest>
        void DescribeAddressAsync(const DescribeAddressRequestT& request, const DescribeAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SnowballClient::DescribeAddress, request, handler, context);
        }

        /**
         * <p>Returns a specified number of <code>ADDRESS</code> objects. Calling this API
         * in one of the US regions will return addresses from the list of all addresses
         * associated with this account in all US regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/DescribeAddresses">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAddressesOutcome DescribeAddresses(const Model::DescribeAddressesRequest& request) const;

        /**
         * A Callable wrapper for DescribeAddresses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAddressesRequestT = Model::DescribeAddressesRequest>
        Model::DescribeAddressesOutcomeCallable DescribeAddressesCallable(const DescribeAddressesRequestT& request) const
        {
            return SubmitCallable(&SnowballClient::DescribeAddresses, request);
        }

        /**
         * An Async wrapper for DescribeAddresses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAddressesRequestT = Model::DescribeAddressesRequest>
        void DescribeAddressesAsync(const DescribeAddressesRequestT& request, const DescribeAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SnowballClient::DescribeAddresses, request, handler, context);
        }

        /**
         * <p>Returns information about a specific cluster including shipping information,
         * cluster status, and other important metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/DescribeCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClusterOutcome DescribeCluster(const Model::DescribeClusterRequest& request) const;

        /**
         * A Callable wrapper for DescribeCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeClusterRequestT = Model::DescribeClusterRequest>
        Model::DescribeClusterOutcomeCallable DescribeClusterCallable(const DescribeClusterRequestT& request) const
        {
            return SubmitCallable(&SnowballClient::DescribeCluster, request);
        }

        /**
         * An Async wrapper for DescribeCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeClusterRequestT = Model::DescribeClusterRequest>
        void DescribeClusterAsync(const DescribeClusterRequestT& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SnowballClient::DescribeCluster, request, handler, context);
        }

        /**
         * <p>Returns information about a specific job including shipping information, job
         * status, and other important metadata. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/DescribeJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobOutcome DescribeJob(const Model::DescribeJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeJobRequestT = Model::DescribeJobRequest>
        Model::DescribeJobOutcomeCallable DescribeJobCallable(const DescribeJobRequestT& request) const
        {
            return SubmitCallable(&SnowballClient::DescribeJob, request);
        }

        /**
         * An Async wrapper for DescribeJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeJobRequestT = Model::DescribeJobRequest>
        void DescribeJobAsync(const DescribeJobRequestT& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SnowballClient::DescribeJob, request, handler, context);
        }

        /**
         * <p>Information on the shipping label of a Snow device that is being returned to
         * Amazon Web Services.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/DescribeReturnShippingLabel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReturnShippingLabelOutcome DescribeReturnShippingLabel(const Model::DescribeReturnShippingLabelRequest& request) const;

        /**
         * A Callable wrapper for DescribeReturnShippingLabel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeReturnShippingLabelRequestT = Model::DescribeReturnShippingLabelRequest>
        Model::DescribeReturnShippingLabelOutcomeCallable DescribeReturnShippingLabelCallable(const DescribeReturnShippingLabelRequestT& request) const
        {
            return SubmitCallable(&SnowballClient::DescribeReturnShippingLabel, request);
        }

        /**
         * An Async wrapper for DescribeReturnShippingLabel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReturnShippingLabelRequestT = Model::DescribeReturnShippingLabelRequest>
        void DescribeReturnShippingLabelAsync(const DescribeReturnShippingLabelRequestT& request, const DescribeReturnShippingLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SnowballClient::DescribeReturnShippingLabel, request, handler, context);
        }

        /**
         * <p>Returns a link to an Amazon S3 presigned URL for the manifest file associated
         * with the specified <code>JobId</code> value. You can access the manifest file
         * for up to 60 minutes after this request has been made. To access the manifest
         * file after 60 minutes have passed, you'll have to make another call to the
         * <code>GetJobManifest</code> action.</p> <p>The manifest is an encrypted file
         * that you can download after your job enters the <code>WithCustomer</code>
         * status. This is the only valid status for calling this API as the manifest and
         * <code>UnlockCode</code> code value are used for securing your device and should
         * only be used when you have the device. The manifest is decrypted by using the
         * <code>UnlockCode</code> code value, when you pass both values to the Snow device
         * through the Snowball client when the client is started for the first time. </p>
         * <p>As a best practice, we recommend that you don't save a copy of an
         * <code>UnlockCode</code> value in the same location as the manifest file for that
         * job. Saving these separately helps prevent unauthorized parties from gaining
         * access to the Snow device associated with that job.</p> <p>The credentials of a
         * given job, including its manifest file and unlock code, expire 360 days after
         * the job is created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/GetJobManifest">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobManifestOutcome GetJobManifest(const Model::GetJobManifestRequest& request) const;

        /**
         * A Callable wrapper for GetJobManifest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetJobManifestRequestT = Model::GetJobManifestRequest>
        Model::GetJobManifestOutcomeCallable GetJobManifestCallable(const GetJobManifestRequestT& request) const
        {
            return SubmitCallable(&SnowballClient::GetJobManifest, request);
        }

        /**
         * An Async wrapper for GetJobManifest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetJobManifestRequestT = Model::GetJobManifestRequest>
        void GetJobManifestAsync(const GetJobManifestRequestT& request, const GetJobManifestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SnowballClient::GetJobManifest, request, handler, context);
        }

        /**
         * <p>Returns the <code>UnlockCode</code> code value for the specified job. A
         * particular <code>UnlockCode</code> value can be accessed for up to 360 days
         * after the associated job has been created.</p> <p>The <code>UnlockCode</code>
         * value is a 29-character code with 25 alphanumeric characters and 4 hyphens. This
         * code is used to decrypt the manifest file when it is passed along with the
         * manifest to the Snow device through the Snowball client when the client is
         * started for the first time. The only valid status for calling this API is
         * <code>WithCustomer</code> as the manifest and <code>Unlock</code> code values
         * are used for securing your device and should only be used when you have the
         * device.</p> <p>As a best practice, we recommend that you don't save a copy of
         * the <code>UnlockCode</code> in the same location as the manifest file for that
         * job. Saving these separately helps prevent unauthorized parties from gaining
         * access to the Snow device associated with that job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/GetJobUnlockCode">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobUnlockCodeOutcome GetJobUnlockCode(const Model::GetJobUnlockCodeRequest& request) const;

        /**
         * A Callable wrapper for GetJobUnlockCode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetJobUnlockCodeRequestT = Model::GetJobUnlockCodeRequest>
        Model::GetJobUnlockCodeOutcomeCallable GetJobUnlockCodeCallable(const GetJobUnlockCodeRequestT& request) const
        {
            return SubmitCallable(&SnowballClient::GetJobUnlockCode, request);
        }

        /**
         * An Async wrapper for GetJobUnlockCode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetJobUnlockCodeRequestT = Model::GetJobUnlockCodeRequest>
        void GetJobUnlockCodeAsync(const GetJobUnlockCodeRequestT& request, const GetJobUnlockCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SnowballClient::GetJobUnlockCode, request, handler, context);
        }

        /**
         * <p>Returns information about the Snow Family service limit for your account, and
         * also the number of Snow devices your account has in use.</p> <p>The default
         * service limit for the number of Snow devices that you can have at one time is 1.
         * If you want to increase your service limit, contact Amazon Web Services
         * Support.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/GetSnowballUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSnowballUsageOutcome GetSnowballUsage(const Model::GetSnowballUsageRequest& request) const;

        /**
         * A Callable wrapper for GetSnowballUsage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSnowballUsageRequestT = Model::GetSnowballUsageRequest>
        Model::GetSnowballUsageOutcomeCallable GetSnowballUsageCallable(const GetSnowballUsageRequestT& request) const
        {
            return SubmitCallable(&SnowballClient::GetSnowballUsage, request);
        }

        /**
         * An Async wrapper for GetSnowballUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSnowballUsageRequestT = Model::GetSnowballUsageRequest>
        void GetSnowballUsageAsync(const GetSnowballUsageRequestT& request, const GetSnowballUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SnowballClient::GetSnowballUsage, request, handler, context);
        }

        /**
         * <p>Returns an Amazon S3 presigned URL for an update file associated with a
         * specified <code>JobId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/GetSoftwareUpdates">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSoftwareUpdatesOutcome GetSoftwareUpdates(const Model::GetSoftwareUpdatesRequest& request) const;

        /**
         * A Callable wrapper for GetSoftwareUpdates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSoftwareUpdatesRequestT = Model::GetSoftwareUpdatesRequest>
        Model::GetSoftwareUpdatesOutcomeCallable GetSoftwareUpdatesCallable(const GetSoftwareUpdatesRequestT& request) const
        {
            return SubmitCallable(&SnowballClient::GetSoftwareUpdates, request);
        }

        /**
         * An Async wrapper for GetSoftwareUpdates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSoftwareUpdatesRequestT = Model::GetSoftwareUpdatesRequest>
        void GetSoftwareUpdatesAsync(const GetSoftwareUpdatesRequestT& request, const GetSoftwareUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SnowballClient::GetSoftwareUpdates, request, handler, context);
        }

        /**
         * <p>Returns an array of <code>JobListEntry</code> objects of the specified
         * length. Each <code>JobListEntry</code> object is for a job in the specified
         * cluster and contains a job's state, a job's ID, and other
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ListClusterJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClusterJobsOutcome ListClusterJobs(const Model::ListClusterJobsRequest& request) const;

        /**
         * A Callable wrapper for ListClusterJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListClusterJobsRequestT = Model::ListClusterJobsRequest>
        Model::ListClusterJobsOutcomeCallable ListClusterJobsCallable(const ListClusterJobsRequestT& request) const
        {
            return SubmitCallable(&SnowballClient::ListClusterJobs, request);
        }

        /**
         * An Async wrapper for ListClusterJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListClusterJobsRequestT = Model::ListClusterJobsRequest>
        void ListClusterJobsAsync(const ListClusterJobsRequestT& request, const ListClusterJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SnowballClient::ListClusterJobs, request, handler, context);
        }

        /**
         * <p>Returns an array of <code>ClusterListEntry</code> objects of the specified
         * length. Each <code>ClusterListEntry</code> object contains a cluster's state, a
         * cluster's ID, and other important status information.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ListClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClustersOutcome ListClusters(const Model::ListClustersRequest& request) const;

        /**
         * A Callable wrapper for ListClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListClustersRequestT = Model::ListClustersRequest>
        Model::ListClustersOutcomeCallable ListClustersCallable(const ListClustersRequestT& request) const
        {
            return SubmitCallable(&SnowballClient::ListClusters, request);
        }

        /**
         * An Async wrapper for ListClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListClustersRequestT = Model::ListClustersRequest>
        void ListClustersAsync(const ListClustersRequestT& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SnowballClient::ListClusters, request, handler, context);
        }

        /**
         * <p>This action returns a list of the different Amazon EC2-compatible Amazon
         * Machine Images (AMIs) that are owned by your Amazon Web Services accountthat
         * would be supported for use on a Snow device. Currently, supported AMIs are based
         * on the Amazon Linux-2, Ubuntu 20.04 LTS - Focal, or Ubuntu 22.04 LTS - Jammy
         * images, available on the Amazon Web Services Marketplace. Ubuntu 16.04 LTS -
         * Xenial (HVM) images are no longer supported in the Market, but still supported
         * for use on devices through Amazon EC2 VM Import/Export and running locally in
         * AMIs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ListCompatibleImages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCompatibleImagesOutcome ListCompatibleImages(const Model::ListCompatibleImagesRequest& request) const;

        /**
         * A Callable wrapper for ListCompatibleImages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCompatibleImagesRequestT = Model::ListCompatibleImagesRequest>
        Model::ListCompatibleImagesOutcomeCallable ListCompatibleImagesCallable(const ListCompatibleImagesRequestT& request) const
        {
            return SubmitCallable(&SnowballClient::ListCompatibleImages, request);
        }

        /**
         * An Async wrapper for ListCompatibleImages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCompatibleImagesRequestT = Model::ListCompatibleImagesRequest>
        void ListCompatibleImagesAsync(const ListCompatibleImagesRequestT& request, const ListCompatibleImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SnowballClient::ListCompatibleImages, request, handler, context);
        }

        /**
         * <p>Returns an array of <code>JobListEntry</code> objects of the specified
         * length. Each <code>JobListEntry</code> object contains a job's state, a job's
         * ID, and a value that indicates whether the job is a job part, in the case of
         * export jobs. Calling this API action in one of the US regions will return jobs
         * from the list of all jobs associated with this account in all US
         * regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ListJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;

        /**
         * A Callable wrapper for ListJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListJobsRequestT = Model::ListJobsRequest>
        Model::ListJobsOutcomeCallable ListJobsCallable(const ListJobsRequestT& request) const
        {
            return SubmitCallable(&SnowballClient::ListJobs, request);
        }

        /**
         * An Async wrapper for ListJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListJobsRequestT = Model::ListJobsRequest>
        void ListJobsAsync(const ListJobsRequestT& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SnowballClient::ListJobs, request, handler, context);
        }

        /**
         * <p>Lists all long-term pricing types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ListLongTermPricing">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLongTermPricingOutcome ListLongTermPricing(const Model::ListLongTermPricingRequest& request) const;

        /**
         * A Callable wrapper for ListLongTermPricing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLongTermPricingRequestT = Model::ListLongTermPricingRequest>
        Model::ListLongTermPricingOutcomeCallable ListLongTermPricingCallable(const ListLongTermPricingRequestT& request) const
        {
            return SubmitCallable(&SnowballClient::ListLongTermPricing, request);
        }

        /**
         * An Async wrapper for ListLongTermPricing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLongTermPricingRequestT = Model::ListLongTermPricingRequest>
        void ListLongTermPricingAsync(const ListLongTermPricingRequestT& request, const ListLongTermPricingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SnowballClient::ListLongTermPricing, request, handler, context);
        }

        /**
         * <p>A list of locations from which the customer can choose to pickup a
         * device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ListPickupLocations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPickupLocationsOutcome ListPickupLocations(const Model::ListPickupLocationsRequest& request) const;

        /**
         * A Callable wrapper for ListPickupLocations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPickupLocationsRequestT = Model::ListPickupLocationsRequest>
        Model::ListPickupLocationsOutcomeCallable ListPickupLocationsCallable(const ListPickupLocationsRequestT& request) const
        {
            return SubmitCallable(&SnowballClient::ListPickupLocations, request);
        }

        /**
         * An Async wrapper for ListPickupLocations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPickupLocationsRequestT = Model::ListPickupLocationsRequest>
        void ListPickupLocationsAsync(const ListPickupLocationsRequestT& request, const ListPickupLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SnowballClient::ListPickupLocations, request, handler, context);
        }

        /**
         * <p>Lists all supported versions for Snow on-device services. Returns an array of
         * <code>ServiceVersion</code> object containing the supported versions for a
         * particular service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ListServiceVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceVersionsOutcome ListServiceVersions(const Model::ListServiceVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListServiceVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListServiceVersionsRequestT = Model::ListServiceVersionsRequest>
        Model::ListServiceVersionsOutcomeCallable ListServiceVersionsCallable(const ListServiceVersionsRequestT& request) const
        {
            return SubmitCallable(&SnowballClient::ListServiceVersions, request);
        }

        /**
         * An Async wrapper for ListServiceVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListServiceVersionsRequestT = Model::ListServiceVersionsRequest>
        void ListServiceVersionsAsync(const ListServiceVersionsRequestT& request, const ListServiceVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SnowballClient::ListServiceVersions, request, handler, context);
        }

        /**
         * <p>While a cluster's <code>ClusterState</code> value is in the
         * <code>AwaitingQuorum</code> state, you can update some of the information
         * associated with a cluster. Once the cluster changes to a different job state,
         * usually 60 minutes after the cluster being created, this action is no longer
         * available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/UpdateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClusterOutcome UpdateCluster(const Model::UpdateClusterRequest& request) const;

        /**
         * A Callable wrapper for UpdateCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateClusterRequestT = Model::UpdateClusterRequest>
        Model::UpdateClusterOutcomeCallable UpdateClusterCallable(const UpdateClusterRequestT& request) const
        {
            return SubmitCallable(&SnowballClient::UpdateCluster, request);
        }

        /**
         * An Async wrapper for UpdateCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateClusterRequestT = Model::UpdateClusterRequest>
        void UpdateClusterAsync(const UpdateClusterRequestT& request, const UpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SnowballClient::UpdateCluster, request, handler, context);
        }

        /**
         * <p>While a job's <code>JobState</code> value is <code>New</code>, you can update
         * some of the information associated with a job. Once the job changes to a
         * different job state, usually within 60 minutes of the job being created, this
         * action is no longer available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/UpdateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateJobOutcome UpdateJob(const Model::UpdateJobRequest& request) const;

        /**
         * A Callable wrapper for UpdateJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateJobRequestT = Model::UpdateJobRequest>
        Model::UpdateJobOutcomeCallable UpdateJobCallable(const UpdateJobRequestT& request) const
        {
            return SubmitCallable(&SnowballClient::UpdateJob, request);
        }

        /**
         * An Async wrapper for UpdateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateJobRequestT = Model::UpdateJobRequest>
        void UpdateJobAsync(const UpdateJobRequestT& request, const UpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SnowballClient::UpdateJob, request, handler, context);
        }

        /**
         * <p>Updates the state when a shipment state changes to a different
         * state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/UpdateJobShipmentState">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateJobShipmentStateOutcome UpdateJobShipmentState(const Model::UpdateJobShipmentStateRequest& request) const;

        /**
         * A Callable wrapper for UpdateJobShipmentState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateJobShipmentStateRequestT = Model::UpdateJobShipmentStateRequest>
        Model::UpdateJobShipmentStateOutcomeCallable UpdateJobShipmentStateCallable(const UpdateJobShipmentStateRequestT& request) const
        {
            return SubmitCallable(&SnowballClient::UpdateJobShipmentState, request);
        }

        /**
         * An Async wrapper for UpdateJobShipmentState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateJobShipmentStateRequestT = Model::UpdateJobShipmentStateRequest>
        void UpdateJobShipmentStateAsync(const UpdateJobShipmentStateRequestT& request, const UpdateJobShipmentStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SnowballClient::UpdateJobShipmentState, request, handler, context);
        }

        /**
         * <p>Updates the long-term pricing type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/UpdateLongTermPricing">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLongTermPricingOutcome UpdateLongTermPricing(const Model::UpdateLongTermPricingRequest& request) const;

        /**
         * A Callable wrapper for UpdateLongTermPricing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLongTermPricingRequestT = Model::UpdateLongTermPricingRequest>
        Model::UpdateLongTermPricingOutcomeCallable UpdateLongTermPricingCallable(const UpdateLongTermPricingRequestT& request) const
        {
            return SubmitCallable(&SnowballClient::UpdateLongTermPricing, request);
        }

        /**
         * An Async wrapper for UpdateLongTermPricing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLongTermPricingRequestT = Model::UpdateLongTermPricingRequest>
        void UpdateLongTermPricingAsync(const UpdateLongTermPricingRequestT& request, const UpdateLongTermPricingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SnowballClient::UpdateLongTermPricing, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SnowballEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SnowballClient>;
      void init(const SnowballClientConfiguration& clientConfiguration);

      SnowballClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SnowballEndpointProviderBase> m_endpointProvider;
  };

} // namespace Snowball
} // namespace Aws
