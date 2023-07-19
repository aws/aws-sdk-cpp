/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/medical-imaging/MedicalImagingErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/medical-imaging/MedicalImagingEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MedicalImagingClient header */
#include <aws/medical-imaging/model/CopyImageSetResult.h>
#include <aws/medical-imaging/model/CreateDatastoreResult.h>
#include <aws/medical-imaging/model/DeleteDatastoreResult.h>
#include <aws/medical-imaging/model/DeleteImageSetResult.h>
#include <aws/medical-imaging/model/GetDICOMImportJobResult.h>
#include <aws/medical-imaging/model/GetDatastoreResult.h>
#include <aws/medical-imaging/model/GetImageFrameResult.h>
#include <aws/medical-imaging/model/GetImageSetResult.h>
#include <aws/medical-imaging/model/GetImageSetMetadataResult.h>
#include <aws/medical-imaging/model/ListDICOMImportJobsResult.h>
#include <aws/medical-imaging/model/ListDatastoresResult.h>
#include <aws/medical-imaging/model/ListImageSetVersionsResult.h>
#include <aws/medical-imaging/model/ListTagsForResourceResult.h>
#include <aws/medical-imaging/model/SearchImageSetsResult.h>
#include <aws/medical-imaging/model/StartDICOMImportJobResult.h>
#include <aws/medical-imaging/model/TagResourceResult.h>
#include <aws/medical-imaging/model/UntagResourceResult.h>
#include <aws/medical-imaging/model/UpdateImageSetMetadataResult.h>
/* End of service model headers required in MedicalImagingClient header */

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

  namespace MedicalImaging
  {
    using MedicalImagingClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using MedicalImagingEndpointProviderBase = Aws::MedicalImaging::Endpoint::MedicalImagingEndpointProviderBase;
    using MedicalImagingEndpointProvider = Aws::MedicalImaging::Endpoint::MedicalImagingEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MedicalImagingClient header */
      class CopyImageSetRequest;
      class CreateDatastoreRequest;
      class DeleteDatastoreRequest;
      class DeleteImageSetRequest;
      class GetDICOMImportJobRequest;
      class GetDatastoreRequest;
      class GetImageFrameRequest;
      class GetImageSetRequest;
      class GetImageSetMetadataRequest;
      class ListDICOMImportJobsRequest;
      class ListDatastoresRequest;
      class ListImageSetVersionsRequest;
      class ListTagsForResourceRequest;
      class SearchImageSetsRequest;
      class StartDICOMImportJobRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateImageSetMetadataRequest;
      /* End of service model forward declarations required in MedicalImagingClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CopyImageSetResult, MedicalImagingError> CopyImageSetOutcome;
      typedef Aws::Utils::Outcome<CreateDatastoreResult, MedicalImagingError> CreateDatastoreOutcome;
      typedef Aws::Utils::Outcome<DeleteDatastoreResult, MedicalImagingError> DeleteDatastoreOutcome;
      typedef Aws::Utils::Outcome<DeleteImageSetResult, MedicalImagingError> DeleteImageSetOutcome;
      typedef Aws::Utils::Outcome<GetDICOMImportJobResult, MedicalImagingError> GetDICOMImportJobOutcome;
      typedef Aws::Utils::Outcome<GetDatastoreResult, MedicalImagingError> GetDatastoreOutcome;
      typedef Aws::Utils::Outcome<GetImageFrameResult, MedicalImagingError> GetImageFrameOutcome;
      typedef Aws::Utils::Outcome<GetImageSetResult, MedicalImagingError> GetImageSetOutcome;
      typedef Aws::Utils::Outcome<GetImageSetMetadataResult, MedicalImagingError> GetImageSetMetadataOutcome;
      typedef Aws::Utils::Outcome<ListDICOMImportJobsResult, MedicalImagingError> ListDICOMImportJobsOutcome;
      typedef Aws::Utils::Outcome<ListDatastoresResult, MedicalImagingError> ListDatastoresOutcome;
      typedef Aws::Utils::Outcome<ListImageSetVersionsResult, MedicalImagingError> ListImageSetVersionsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, MedicalImagingError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<SearchImageSetsResult, MedicalImagingError> SearchImageSetsOutcome;
      typedef Aws::Utils::Outcome<StartDICOMImportJobResult, MedicalImagingError> StartDICOMImportJobOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, MedicalImagingError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, MedicalImagingError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateImageSetMetadataResult, MedicalImagingError> UpdateImageSetMetadataOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CopyImageSetOutcome> CopyImageSetOutcomeCallable;
      typedef std::future<CreateDatastoreOutcome> CreateDatastoreOutcomeCallable;
      typedef std::future<DeleteDatastoreOutcome> DeleteDatastoreOutcomeCallable;
      typedef std::future<DeleteImageSetOutcome> DeleteImageSetOutcomeCallable;
      typedef std::future<GetDICOMImportJobOutcome> GetDICOMImportJobOutcomeCallable;
      typedef std::future<GetDatastoreOutcome> GetDatastoreOutcomeCallable;
      typedef std::future<GetImageFrameOutcome> GetImageFrameOutcomeCallable;
      typedef std::future<GetImageSetOutcome> GetImageSetOutcomeCallable;
      typedef std::future<GetImageSetMetadataOutcome> GetImageSetMetadataOutcomeCallable;
      typedef std::future<ListDICOMImportJobsOutcome> ListDICOMImportJobsOutcomeCallable;
      typedef std::future<ListDatastoresOutcome> ListDatastoresOutcomeCallable;
      typedef std::future<ListImageSetVersionsOutcome> ListImageSetVersionsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<SearchImageSetsOutcome> SearchImageSetsOutcomeCallable;
      typedef std::future<StartDICOMImportJobOutcome> StartDICOMImportJobOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateImageSetMetadataOutcome> UpdateImageSetMetadataOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MedicalImagingClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MedicalImagingClient*, const Model::CopyImageSetRequest&, const Model::CopyImageSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyImageSetResponseReceivedHandler;
    typedef std::function<void(const MedicalImagingClient*, const Model::CreateDatastoreRequest&, const Model::CreateDatastoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatastoreResponseReceivedHandler;
    typedef std::function<void(const MedicalImagingClient*, const Model::DeleteDatastoreRequest&, const Model::DeleteDatastoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatastoreResponseReceivedHandler;
    typedef std::function<void(const MedicalImagingClient*, const Model::DeleteImageSetRequest&, const Model::DeleteImageSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteImageSetResponseReceivedHandler;
    typedef std::function<void(const MedicalImagingClient*, const Model::GetDICOMImportJobRequest&, const Model::GetDICOMImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDICOMImportJobResponseReceivedHandler;
    typedef std::function<void(const MedicalImagingClient*, const Model::GetDatastoreRequest&, const Model::GetDatastoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDatastoreResponseReceivedHandler;
    typedef std::function<void(const MedicalImagingClient*, const Model::GetImageFrameRequest&, Model::GetImageFrameOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImageFrameResponseReceivedHandler;
    typedef std::function<void(const MedicalImagingClient*, const Model::GetImageSetRequest&, const Model::GetImageSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImageSetResponseReceivedHandler;
    typedef std::function<void(const MedicalImagingClient*, const Model::GetImageSetMetadataRequest&, Model::GetImageSetMetadataOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImageSetMetadataResponseReceivedHandler;
    typedef std::function<void(const MedicalImagingClient*, const Model::ListDICOMImportJobsRequest&, const Model::ListDICOMImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDICOMImportJobsResponseReceivedHandler;
    typedef std::function<void(const MedicalImagingClient*, const Model::ListDatastoresRequest&, const Model::ListDatastoresOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatastoresResponseReceivedHandler;
    typedef std::function<void(const MedicalImagingClient*, const Model::ListImageSetVersionsRequest&, const Model::ListImageSetVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImageSetVersionsResponseReceivedHandler;
    typedef std::function<void(const MedicalImagingClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const MedicalImagingClient*, const Model::SearchImageSetsRequest&, const Model::SearchImageSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchImageSetsResponseReceivedHandler;
    typedef std::function<void(const MedicalImagingClient*, const Model::StartDICOMImportJobRequest&, const Model::StartDICOMImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDICOMImportJobResponseReceivedHandler;
    typedef std::function<void(const MedicalImagingClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const MedicalImagingClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const MedicalImagingClient*, const Model::UpdateImageSetMetadataRequest&, const Model::UpdateImageSetMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateImageSetMetadataResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MedicalImaging
} // namespace Aws
