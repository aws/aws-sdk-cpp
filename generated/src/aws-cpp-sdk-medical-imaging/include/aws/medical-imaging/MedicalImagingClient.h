/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medical-imaging/MedicalImagingServiceClientModel.h>

namespace Aws
{
namespace MedicalImaging
{
  /**
   * <p>This is the <i>AWS HealthImaging API Reference</i>. AWS HealthImaging is a
   * HIPAA-eligible service that helps health care providers and their medical
   * imaging ISV partners store, transform, and apply machine learning to medical
   * images. For an introduction to the service, see the <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/devguide/what-is.html">
   * <i>AWS HealthImaging Developer Guide</i> </a>.</p>  <p>We recommend using
   * one of the AWS Software Development Kits (SDKs) for your programming language,
   * as they take care of request authentication, serialization, and connection
   * management. For more information, see <a
   * href="http://aws.amazon.com/developer/tools">Tools to build on AWS</a>.</p>
   * <p>For information about using HealthImaging API actions in one of the
   * language-specific AWS SDKs, refer to the <i>See Also</i> link at the end of each
   * section that describes an API action or data type.</p>  <p>The following
   * sections list AWS HealthImaging API actions categorized according to
   * functionality. Links are provided to actions within this Reference, along with
   * links back to corresponding sections in the <i>AWS HealthImaging Developer
   * Guide</i> where you can view console procedures and CLI/SDK code examples.</p>
   * <p class="title"> <b>Data store actions</b> </p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/APIReference/API_CreateDatastore.html">CreateDatastore</a>
   * – See <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/devguide/create-data-store.html">Creating
   * a data store</a>.</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/APIReference/API_GetDatastore.html">GetDatastore</a>
   * – See <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/devguide/get-data-store.html">Getting
   * data store properties</a>.</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/APIReference/API_ListDatastores.html">ListDatastores</a>
   * – See <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/devguide/list-data-stores.html">Listing
   * data stores</a>.</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/APIReference/API_DeleteDatastore.html">DeleteDatastore</a>
   * – See <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/devguide/delete-data-store.html">Deleting
   * a data store</a>.</p> </li> </ul> <p class="title"> <b>Import job actions</b>
   * </p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/APIReference/API_StartDICOMImportJob.html">StartDICOMImportJob</a>
   * – See <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/devguide/start-dicom-import-job.html">Starting
   * an import job</a>.</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/APIReference/API_GetDICOMImportJob.html">GetDICOMImportJob</a>
   * – See <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/devguide/get-dicom-import-job.html">Getting
   * import job properties</a>.</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/APIReference/API_ListDICOMImportJobs.html">ListDICOMImportJobs</a>
   * – See <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/devguide/list-dicom-import-jobs.html">Listing
   * import jobs</a>.</p> </li> </ul> <p class="title"> <b>Image set access
   * actions</b> </p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/APIReference/API_SearchImageSets.html">SearchImageSets</a>
   * – See <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/devguide/search-image-sets.html">Searching
   * image sets</a>.</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/APIReference/API_GetImageSet.html">GetImageSet</a>
   * – See <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/devguide/get-image-set-properties.html">Getting
   * image set properties</a>.</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/APIReference/API_GetImageSetMetadata.html">GetImageSetMetadata</a>
   * – See <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/devguide/get-image-set-metadata.html">Getting
   * image set metadata</a>.</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/APIReference/API_GetImageFrame.html">GetImageFrame</a>
   * – See <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/devguide/get-image-frame.html">Getting
   * image set pixel data</a>.</p> </li> </ul> <p class="title"> <b>Image set
   * modification actions</b> </p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/APIReference/API_ListImageSetVersions.html">ListImageSetVersions</a>
   * – See <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/devguide/list-image-set-versions.html">Listing
   * image set versions</a>.</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/APIReference/API_UpdateImageSetMetadata.html">UpdateImageSetMetadata</a>
   * – See <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/devguide/update-image-set-metadata.html">Updating
   * image set metadata</a>.</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/APIReference/API_CopyImageSet.html">CopyImageSet</a>
   * – See <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/devguide/copy-image-set.html">Copying
   * an image set</a>.</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/APIReference/API_DeleteImageSet.html">DeleteImageSet</a>
   * – See <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/devguide/delete-image-set.html">Deleting
   * an image set</a>.</p> </li> </ul> <p class="title"> <b>Tagging actions</b> </p>
   * <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/APIReference/API_TagResource.html">TagResource</a>
   * – See <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/devguide/tag-list-untag-data-store.html">Tagging
   * a data store</a> and <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/devguide/tag-list-untag-image-set.html">Tagging
   * an image set</a>.</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/APIReference/API_ListTagsForResource.html">ListTagsForResource</a>
   * – See <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/devguide/tag-list-untag-data-store.html">Tagging
   * a data store</a> and <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/devguide/tag-list-untag-image-set.html">Tagging
   * an image set</a>.</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/APIReference/API_UntagResource.html">UntagResource</a>
   * – See <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/devguide/tag-list-untag-data-store.html">Tagging
   * a data store</a> and <a
   * href="https://docs.aws.amazon.com/healthimaging/latest/devguide/tag-list-untag-image-set.html">Tagging
   * an image set</a>.</p> </li> </ul>
   */
  class AWS_MEDICALIMAGING_API MedicalImagingClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MedicalImagingClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef MedicalImagingClientConfiguration ClientConfigurationType;
      typedef MedicalImagingEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MedicalImagingClient(const Aws::MedicalImaging::MedicalImagingClientConfiguration& clientConfiguration = Aws::MedicalImaging::MedicalImagingClientConfiguration(),
                             std::shared_ptr<MedicalImagingEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MedicalImagingClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<MedicalImagingEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::MedicalImaging::MedicalImagingClientConfiguration& clientConfiguration = Aws::MedicalImaging::MedicalImagingClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MedicalImagingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<MedicalImagingEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::MedicalImaging::MedicalImagingClientConfiguration& clientConfiguration = Aws::MedicalImaging::MedicalImagingClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MedicalImagingClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MedicalImagingClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MedicalImagingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MedicalImagingClient();

        /**
         * <p>Copy an image set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/CopyImageSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyImageSetOutcome CopyImageSet(const Model::CopyImageSetRequest& request) const;

        /**
         * A Callable wrapper for CopyImageSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CopyImageSetRequestT = Model::CopyImageSetRequest>
        Model::CopyImageSetOutcomeCallable CopyImageSetCallable(const CopyImageSetRequestT& request) const
        {
            return SubmitCallable(&MedicalImagingClient::CopyImageSet, request);
        }

        /**
         * An Async wrapper for CopyImageSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CopyImageSetRequestT = Model::CopyImageSetRequest>
        void CopyImageSetAsync(const CopyImageSetRequestT& request, const CopyImageSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MedicalImagingClient::CopyImageSet, request, handler, context);
        }

        /**
         * <p>Create a data store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/CreateDatastore">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatastoreOutcome CreateDatastore(const Model::CreateDatastoreRequest& request) const;

        /**
         * A Callable wrapper for CreateDatastore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDatastoreRequestT = Model::CreateDatastoreRequest>
        Model::CreateDatastoreOutcomeCallable CreateDatastoreCallable(const CreateDatastoreRequestT& request) const
        {
            return SubmitCallable(&MedicalImagingClient::CreateDatastore, request);
        }

        /**
         * An Async wrapper for CreateDatastore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDatastoreRequestT = Model::CreateDatastoreRequest>
        void CreateDatastoreAsync(const CreateDatastoreRequestT& request, const CreateDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MedicalImagingClient::CreateDatastore, request, handler, context);
        }

        /**
         * <p>Delete a data store.</p>  <p>Before a data store can be deleted, you
         * must first delete all image sets within it.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/DeleteDatastore">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatastoreOutcome DeleteDatastore(const Model::DeleteDatastoreRequest& request) const;

        /**
         * A Callable wrapper for DeleteDatastore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDatastoreRequestT = Model::DeleteDatastoreRequest>
        Model::DeleteDatastoreOutcomeCallable DeleteDatastoreCallable(const DeleteDatastoreRequestT& request) const
        {
            return SubmitCallable(&MedicalImagingClient::DeleteDatastore, request);
        }

        /**
         * An Async wrapper for DeleteDatastore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDatastoreRequestT = Model::DeleteDatastoreRequest>
        void DeleteDatastoreAsync(const DeleteDatastoreRequestT& request, const DeleteDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MedicalImagingClient::DeleteDatastore, request, handler, context);
        }

        /**
         * <p>Delete an image set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/DeleteImageSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImageSetOutcome DeleteImageSet(const Model::DeleteImageSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteImageSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteImageSetRequestT = Model::DeleteImageSetRequest>
        Model::DeleteImageSetOutcomeCallable DeleteImageSetCallable(const DeleteImageSetRequestT& request) const
        {
            return SubmitCallable(&MedicalImagingClient::DeleteImageSet, request);
        }

        /**
         * An Async wrapper for DeleteImageSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteImageSetRequestT = Model::DeleteImageSetRequest>
        void DeleteImageSetAsync(const DeleteImageSetRequestT& request, const DeleteImageSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MedicalImagingClient::DeleteImageSet, request, handler, context);
        }

        /**
         * <p>Get the import job properties to learn more about the job or job
         * progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/GetDICOMImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDICOMImportJobOutcome GetDICOMImportJob(const Model::GetDICOMImportJobRequest& request) const;

        /**
         * A Callable wrapper for GetDICOMImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDICOMImportJobRequestT = Model::GetDICOMImportJobRequest>
        Model::GetDICOMImportJobOutcomeCallable GetDICOMImportJobCallable(const GetDICOMImportJobRequestT& request) const
        {
            return SubmitCallable(&MedicalImagingClient::GetDICOMImportJob, request);
        }

        /**
         * An Async wrapper for GetDICOMImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDICOMImportJobRequestT = Model::GetDICOMImportJobRequest>
        void GetDICOMImportJobAsync(const GetDICOMImportJobRequestT& request, const GetDICOMImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MedicalImagingClient::GetDICOMImportJob, request, handler, context);
        }

        /**
         * <p>Get data store properties.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/GetDatastore">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDatastoreOutcome GetDatastore(const Model::GetDatastoreRequest& request) const;

        /**
         * A Callable wrapper for GetDatastore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDatastoreRequestT = Model::GetDatastoreRequest>
        Model::GetDatastoreOutcomeCallable GetDatastoreCallable(const GetDatastoreRequestT& request) const
        {
            return SubmitCallable(&MedicalImagingClient::GetDatastore, request);
        }

        /**
         * An Async wrapper for GetDatastore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDatastoreRequestT = Model::GetDatastoreRequest>
        void GetDatastoreAsync(const GetDatastoreRequestT& request, const GetDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MedicalImagingClient::GetDatastore, request, handler, context);
        }

        /**
         * <p>Get an image frame (pixel data) for an image set.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/GetImageFrame">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImageFrameOutcome GetImageFrame(const Model::GetImageFrameRequest& request) const;

        /**
         * A Callable wrapper for GetImageFrame that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetImageFrameRequestT = Model::GetImageFrameRequest>
        Model::GetImageFrameOutcomeCallable GetImageFrameCallable(const GetImageFrameRequestT& request) const
        {
            return SubmitCallable(&MedicalImagingClient::GetImageFrame, request);
        }

        /**
         * An Async wrapper for GetImageFrame that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetImageFrameRequestT = Model::GetImageFrameRequest>
        void GetImageFrameAsync(const GetImageFrameRequestT& request, const GetImageFrameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MedicalImagingClient::GetImageFrame, request, handler, context);
        }

        /**
         * <p>Get image set properties.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/GetImageSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImageSetOutcome GetImageSet(const Model::GetImageSetRequest& request) const;

        /**
         * A Callable wrapper for GetImageSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetImageSetRequestT = Model::GetImageSetRequest>
        Model::GetImageSetOutcomeCallable GetImageSetCallable(const GetImageSetRequestT& request) const
        {
            return SubmitCallable(&MedicalImagingClient::GetImageSet, request);
        }

        /**
         * An Async wrapper for GetImageSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetImageSetRequestT = Model::GetImageSetRequest>
        void GetImageSetAsync(const GetImageSetRequestT& request, const GetImageSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MedicalImagingClient::GetImageSet, request, handler, context);
        }

        /**
         * <p>Get metadata attributes for an image set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/GetImageSetMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImageSetMetadataOutcome GetImageSetMetadata(const Model::GetImageSetMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetImageSetMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetImageSetMetadataRequestT = Model::GetImageSetMetadataRequest>
        Model::GetImageSetMetadataOutcomeCallable GetImageSetMetadataCallable(const GetImageSetMetadataRequestT& request) const
        {
            return SubmitCallable(&MedicalImagingClient::GetImageSetMetadata, request);
        }

        /**
         * An Async wrapper for GetImageSetMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetImageSetMetadataRequestT = Model::GetImageSetMetadataRequest>
        void GetImageSetMetadataAsync(const GetImageSetMetadataRequestT& request, const GetImageSetMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MedicalImagingClient::GetImageSetMetadata, request, handler, context);
        }

        /**
         * <p>List import jobs created for a specific data store.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/ListDICOMImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDICOMImportJobsOutcome ListDICOMImportJobs(const Model::ListDICOMImportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListDICOMImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDICOMImportJobsRequestT = Model::ListDICOMImportJobsRequest>
        Model::ListDICOMImportJobsOutcomeCallable ListDICOMImportJobsCallable(const ListDICOMImportJobsRequestT& request) const
        {
            return SubmitCallable(&MedicalImagingClient::ListDICOMImportJobs, request);
        }

        /**
         * An Async wrapper for ListDICOMImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDICOMImportJobsRequestT = Model::ListDICOMImportJobsRequest>
        void ListDICOMImportJobsAsync(const ListDICOMImportJobsRequestT& request, const ListDICOMImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MedicalImagingClient::ListDICOMImportJobs, request, handler, context);
        }

        /**
         * <p>List data stores.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/ListDatastores">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatastoresOutcome ListDatastores(const Model::ListDatastoresRequest& request) const;

        /**
         * A Callable wrapper for ListDatastores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDatastoresRequestT = Model::ListDatastoresRequest>
        Model::ListDatastoresOutcomeCallable ListDatastoresCallable(const ListDatastoresRequestT& request) const
        {
            return SubmitCallable(&MedicalImagingClient::ListDatastores, request);
        }

        /**
         * An Async wrapper for ListDatastores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDatastoresRequestT = Model::ListDatastoresRequest>
        void ListDatastoresAsync(const ListDatastoresRequestT& request, const ListDatastoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MedicalImagingClient::ListDatastores, request, handler, context);
        }

        /**
         * <p>List image set versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/ListImageSetVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImageSetVersionsOutcome ListImageSetVersions(const Model::ListImageSetVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListImageSetVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListImageSetVersionsRequestT = Model::ListImageSetVersionsRequest>
        Model::ListImageSetVersionsOutcomeCallable ListImageSetVersionsCallable(const ListImageSetVersionsRequestT& request) const
        {
            return SubmitCallable(&MedicalImagingClient::ListImageSetVersions, request);
        }

        /**
         * An Async wrapper for ListImageSetVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListImageSetVersionsRequestT = Model::ListImageSetVersionsRequest>
        void ListImageSetVersionsAsync(const ListImageSetVersionsRequestT& request, const ListImageSetVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MedicalImagingClient::ListImageSetVersions, request, handler, context);
        }

        /**
         * <p>Lists all tags associated with a medical imaging resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&MedicalImagingClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MedicalImagingClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Search image sets based on defined input attributes.</p>  <p>
         * <code>SearchImageSets</code> accepts a single search query parameter and returns
         * a paginated response of all image sets that have the matching criteria. All
         * range queries must be input as <code>(lowerBound, upperBound)</code>.</p> <p>
         * <code>SearchImageSets</code> uses the <code>updatedAt</code> field for sorting
         * in decreasing order from latest to oldest.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/SearchImageSets">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchImageSetsOutcome SearchImageSets(const Model::SearchImageSetsRequest& request) const;

        /**
         * A Callable wrapper for SearchImageSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchImageSetsRequestT = Model::SearchImageSetsRequest>
        Model::SearchImageSetsOutcomeCallable SearchImageSetsCallable(const SearchImageSetsRequestT& request) const
        {
            return SubmitCallable(&MedicalImagingClient::SearchImageSets, request);
        }

        /**
         * An Async wrapper for SearchImageSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchImageSetsRequestT = Model::SearchImageSetsRequest>
        void SearchImageSetsAsync(const SearchImageSetsRequestT& request, const SearchImageSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MedicalImagingClient::SearchImageSets, request, handler, context);
        }

        /**
         * <p>Start importing bulk data into an <code>ACTIVE</code> data store. The import
         * job imports DICOM P10 files found in the S3 prefix specified by the
         * <code>inputS3Uri</code> parameter. The import job stores processing results in
         * the file specified by the <code>outputS3Uri</code> parameter.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/StartDICOMImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDICOMImportJobOutcome StartDICOMImportJob(const Model::StartDICOMImportJobRequest& request) const;

        /**
         * A Callable wrapper for StartDICOMImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartDICOMImportJobRequestT = Model::StartDICOMImportJobRequest>
        Model::StartDICOMImportJobOutcomeCallable StartDICOMImportJobCallable(const StartDICOMImportJobRequestT& request) const
        {
            return SubmitCallable(&MedicalImagingClient::StartDICOMImportJob, request);
        }

        /**
         * An Async wrapper for StartDICOMImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDICOMImportJobRequestT = Model::StartDICOMImportJobRequest>
        void StartDICOMImportJobAsync(const StartDICOMImportJobRequestT& request, const StartDICOMImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MedicalImagingClient::StartDICOMImportJob, request, handler, context);
        }

        /**
         * <p>Adds a user-specifed key and value tag to a medical imaging
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&MedicalImagingClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MedicalImagingClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from a medical imaging resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&MedicalImagingClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MedicalImagingClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Update image set metadata attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/UpdateImageSetMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateImageSetMetadataOutcome UpdateImageSetMetadata(const Model::UpdateImageSetMetadataRequest& request) const;

        /**
         * A Callable wrapper for UpdateImageSetMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateImageSetMetadataRequestT = Model::UpdateImageSetMetadataRequest>
        Model::UpdateImageSetMetadataOutcomeCallable UpdateImageSetMetadataCallable(const UpdateImageSetMetadataRequestT& request) const
        {
            return SubmitCallable(&MedicalImagingClient::UpdateImageSetMetadata, request);
        }

        /**
         * An Async wrapper for UpdateImageSetMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateImageSetMetadataRequestT = Model::UpdateImageSetMetadataRequest>
        void UpdateImageSetMetadataAsync(const UpdateImageSetMetadataRequestT& request, const UpdateImageSetMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MedicalImagingClient::UpdateImageSetMetadata, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MedicalImagingEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MedicalImagingClient>;
      void init(const MedicalImagingClientConfiguration& clientConfiguration);

      MedicalImagingClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MedicalImagingEndpointProviderBase> m_endpointProvider;
  };

} // namespace MedicalImaging
} // namespace Aws
