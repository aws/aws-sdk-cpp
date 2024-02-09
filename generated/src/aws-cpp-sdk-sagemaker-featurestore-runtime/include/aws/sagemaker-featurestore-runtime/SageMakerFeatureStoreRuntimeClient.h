/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeServiceClientModel.h>

namespace Aws
{
namespace SageMakerFeatureStoreRuntime
{
  /**
   * <p>Contains all data plane API operations and data types for the Amazon
   * SageMaker Feature Store. Use this API to put, delete, and retrieve (get)
   * features from a feature store.</p> <p>Use the following operations to configure
   * your <code>OnlineStore</code> and <code>OfflineStore</code> features, and to
   * create and manage feature groups:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateFeatureGroup.html">CreateFeatureGroup</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DeleteFeatureGroup.html">DeleteFeatureGroup</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeFeatureGroup.html">DescribeFeatureGroup</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ListFeatureGroups.html">ListFeatureGroups</a>
   * </p> </li> </ul>
   */
  class AWS_SAGEMAKERFEATURESTORERUNTIME_API SageMakerFeatureStoreRuntimeClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SageMakerFeatureStoreRuntimeClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef SageMakerFeatureStoreRuntimeClientConfiguration ClientConfigurationType;
      typedef SageMakerFeatureStoreRuntimeEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerFeatureStoreRuntimeClient(const Aws::SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeClientConfiguration& clientConfiguration = Aws::SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeClientConfiguration(),
                                           std::shared_ptr<SageMakerFeatureStoreRuntimeEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerFeatureStoreRuntimeClient(const Aws::Auth::AWSCredentials& credentials,
                                           std::shared_ptr<SageMakerFeatureStoreRuntimeEndpointProviderBase> endpointProvider = nullptr,
                                           const Aws::SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeClientConfiguration& clientConfiguration = Aws::SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SageMakerFeatureStoreRuntimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<SageMakerFeatureStoreRuntimeEndpointProviderBase> endpointProvider = nullptr,
                                           const Aws::SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeClientConfiguration& clientConfiguration = Aws::SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerFeatureStoreRuntimeClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerFeatureStoreRuntimeClient(const Aws::Auth::AWSCredentials& credentials,
                                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SageMakerFeatureStoreRuntimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SageMakerFeatureStoreRuntimeClient();

        /**
         * <p>Retrieves a batch of <code>Records</code> from a
         * <code>FeatureGroup</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/BatchGetRecord">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetRecordOutcome BatchGetRecord(const Model::BatchGetRecordRequest& request) const;

        /**
         * A Callable wrapper for BatchGetRecord that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetRecordRequestT = Model::BatchGetRecordRequest>
        Model::BatchGetRecordOutcomeCallable BatchGetRecordCallable(const BatchGetRecordRequestT& request) const
        {
            return SubmitCallable(&SageMakerFeatureStoreRuntimeClient::BatchGetRecord, request);
        }

        /**
         * An Async wrapper for BatchGetRecord that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetRecordRequestT = Model::BatchGetRecordRequest>
        void BatchGetRecordAsync(const BatchGetRecordRequestT& request, const BatchGetRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerFeatureStoreRuntimeClient::BatchGetRecord, request, handler, context);
        }

        /**
         * <p>Deletes a <code>Record</code> from a <code>FeatureGroup</code> in the
         * <code>OnlineStore</code>. Feature Store supports both <code>SoftDelete</code>
         * and <code>HardDelete</code>. For <code>SoftDelete</code> (default), feature
         * columns are set to <code>null</code> and the record is no longer retrievable by
         * <code>GetRecord</code> or <code>BatchGetRecord</code>. For
         * <code>HardDelete</code>, the complete <code>Record</code> is removed from the
         * <code>OnlineStore</code>. In both cases, Feature Store appends the deleted
         * record marker to the <code>OfflineStore</code>. The deleted record marker is a
         * record with the same <code>RecordIdentifer</code> as the original, but with
         * <code>is_deleted</code> value set to <code>True</code>, <code>EventTime</code>
         * set to the delete input <code>EventTime</code>, and other feature values set to
         * <code>null</code>.</p> <p>Note that the <code>EventTime</code> specified in
         * <code>DeleteRecord</code> should be set later than the <code>EventTime</code> of
         * the existing record in the <code>OnlineStore</code> for that
         * <code>RecordIdentifer</code>. If it is not, the deletion does not occur:</p>
         * <ul> <li> <p>For <code>SoftDelete</code>, the existing (not deleted) record
         * remains in the <code>OnlineStore</code>, though the delete record marker is
         * still written to the <code>OfflineStore</code>.</p> </li> <li> <p>
         * <code>HardDelete</code> returns <code>EventTime</code>: <code>400
         * ValidationException</code> to indicate that the delete operation failed. No
         * delete record marker is written to the <code>OfflineStore</code>.</p> </li>
         * </ul> <p>When a record is deleted from the <code>OnlineStore</code>, the deleted
         * record marker is appended to the <code>OfflineStore</code>. If you have the
         * Iceberg table format enabled for your <code>OfflineStore</code>, you can remove
         * all history of a record from the <code>OfflineStore</code> using Amazon Athena
         * or Apache Spark. For information on how to hard delete a record from the
         * <code>OfflineStore</code> with the Iceberg table format enabled, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/feature-store-delete-records-offline-store.html#feature-store-delete-records-offline-store">Delete
         * records from the offline store</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/DeleteRecord">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRecordOutcome DeleteRecord(const Model::DeleteRecordRequest& request) const;

        /**
         * A Callable wrapper for DeleteRecord that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRecordRequestT = Model::DeleteRecordRequest>
        Model::DeleteRecordOutcomeCallable DeleteRecordCallable(const DeleteRecordRequestT& request) const
        {
            return SubmitCallable(&SageMakerFeatureStoreRuntimeClient::DeleteRecord, request);
        }

        /**
         * An Async wrapper for DeleteRecord that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRecordRequestT = Model::DeleteRecordRequest>
        void DeleteRecordAsync(const DeleteRecordRequestT& request, const DeleteRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerFeatureStoreRuntimeClient::DeleteRecord, request, handler, context);
        }

        /**
         * <p>Use for <code>OnlineStore</code> serving from a <code>FeatureStore</code>.
         * Only the latest records stored in the <code>OnlineStore</code> can be retrieved.
         * If no Record with <code>RecordIdentifierValue</code> is found, then an empty
         * result is returned. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/GetRecord">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecordOutcome GetRecord(const Model::GetRecordRequest& request) const;

        /**
         * A Callable wrapper for GetRecord that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRecordRequestT = Model::GetRecordRequest>
        Model::GetRecordOutcomeCallable GetRecordCallable(const GetRecordRequestT& request) const
        {
            return SubmitCallable(&SageMakerFeatureStoreRuntimeClient::GetRecord, request);
        }

        /**
         * An Async wrapper for GetRecord that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRecordRequestT = Model::GetRecordRequest>
        void GetRecordAsync(const GetRecordRequestT& request, const GetRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerFeatureStoreRuntimeClient::GetRecord, request, handler, context);
        }

        /**
         * <p>The <code>PutRecord</code> API is used to ingest a list of
         * <code>Records</code> into your feature group. </p> <p>If a new record’s
         * <code>EventTime</code> is greater, the new record is written to both the
         * <code>OnlineStore</code> and <code>OfflineStore</code>. Otherwise, the record is
         * a historic record and it is written only to the <code>OfflineStore</code>. </p>
         * <p>You can specify the ingestion to be applied to the <code>OnlineStore</code>,
         * <code>OfflineStore</code>, or both by using the <code>TargetStores</code>
         * request parameter. </p> <p>You can set the ingested record to expire at a given
         * time to live (TTL) duration after the record’s event time,
         * <code>ExpiresAt</code> = <code>EventTime</code> + <code>TtlDuration</code>, by
         * specifying the <code>TtlDuration</code> parameter. A record level
         * <code>TtlDuration</code> is set when specifying the <code>TtlDuration</code>
         * parameter using the <code>PutRecord</code> API call. If the input
         * <code>TtlDuration</code> is <code>null</code> or unspecified,
         * <code>TtlDuration</code> is set to the default feature group level
         * <code>TtlDuration</code>. A record level <code>TtlDuration</code> supersedes the
         * group level <code>TtlDuration</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/PutRecord">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRecordOutcome PutRecord(const Model::PutRecordRequest& request) const;

        /**
         * A Callable wrapper for PutRecord that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutRecordRequestT = Model::PutRecordRequest>
        Model::PutRecordOutcomeCallable PutRecordCallable(const PutRecordRequestT& request) const
        {
            return SubmitCallable(&SageMakerFeatureStoreRuntimeClient::PutRecord, request);
        }

        /**
         * An Async wrapper for PutRecord that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutRecordRequestT = Model::PutRecordRequest>
        void PutRecordAsync(const PutRecordRequestT& request, const PutRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerFeatureStoreRuntimeClient::PutRecord, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SageMakerFeatureStoreRuntimeEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SageMakerFeatureStoreRuntimeClient>;
      void init(const SageMakerFeatureStoreRuntimeClientConfiguration& clientConfiguration);

      SageMakerFeatureStoreRuntimeClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SageMakerFeatureStoreRuntimeEndpointProviderBase> m_endpointProvider;
  };

} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
