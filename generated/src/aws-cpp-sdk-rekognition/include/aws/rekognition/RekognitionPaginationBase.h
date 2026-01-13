/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/rekognition/model/DescribeProjectVersionsPaginationTraits.h>
#include <aws/rekognition/model/DescribeProjectsPaginationTraits.h>
#include <aws/rekognition/model/GetCelebrityRecognitionPaginationTraits.h>
#include <aws/rekognition/model/GetContentModerationPaginationTraits.h>
#include <aws/rekognition/model/GetFaceDetectionPaginationTraits.h>
#include <aws/rekognition/model/GetFaceSearchPaginationTraits.h>
#include <aws/rekognition/model/GetLabelDetectionPaginationTraits.h>
#include <aws/rekognition/model/GetPersonTrackingPaginationTraits.h>
#include <aws/rekognition/model/GetSegmentDetectionPaginationTraits.h>
#include <aws/rekognition/model/GetTextDetectionPaginationTraits.h>
#include <aws/rekognition/model/ListCollectionsPaginationTraits.h>
#include <aws/rekognition/model/ListDatasetEntriesPaginationTraits.h>
#include <aws/rekognition/model/ListDatasetLabelsPaginationTraits.h>
#include <aws/rekognition/model/ListFacesPaginationTraits.h>
#include <aws/rekognition/model/ListMediaAnalysisJobsPaginationTraits.h>
#include <aws/rekognition/model/ListProjectPoliciesPaginationTraits.h>
#include <aws/rekognition/model/ListStreamProcessorsPaginationTraits.h>
#include <aws/rekognition/model/ListUsersPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Rekognition {

class RekognitionClient;

template <typename DerivedClient>
class RekognitionPaginationBase {
 public:
  /**
   * Create a paginator for DescribeProjects operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeProjectsRequest,
                                    Pagination::DescribeProjectsPaginationTraits<DerivedClient>>
  DescribeProjectsPaginator(const Model::DescribeProjectsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeProjectsRequest,
                                             Pagination::DescribeProjectsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for DescribeProjectVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeProjectVersionsRequest,
                                    Pagination::DescribeProjectVersionsPaginationTraits<DerivedClient>>
  DescribeProjectVersionsPaginator(const Model::DescribeProjectVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeProjectVersionsRequest,
                                             Pagination::DescribeProjectVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetCelebrityRecognition operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCelebrityRecognitionRequest,
                                    Pagination::GetCelebrityRecognitionPaginationTraits<DerivedClient>>
  GetCelebrityRecognitionPaginator(const Model::GetCelebrityRecognitionRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCelebrityRecognitionRequest,
                                             Pagination::GetCelebrityRecognitionPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetContentModeration operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetContentModerationRequest,
                                    Pagination::GetContentModerationPaginationTraits<DerivedClient>>
  GetContentModerationPaginator(const Model::GetContentModerationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetContentModerationRequest,
                                             Pagination::GetContentModerationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetFaceDetection operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetFaceDetectionRequest,
                                    Pagination::GetFaceDetectionPaginationTraits<DerivedClient>>
  GetFaceDetectionPaginator(const Model::GetFaceDetectionRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetFaceDetectionRequest,
                                             Pagination::GetFaceDetectionPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for GetFaceSearch operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetFaceSearchRequest, Pagination::GetFaceSearchPaginationTraits<DerivedClient>>
  GetFaceSearchPaginator(const Model::GetFaceSearchRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetFaceSearchRequest,
                                             Pagination::GetFaceSearchPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for GetLabelDetection operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetLabelDetectionRequest,
                                    Pagination::GetLabelDetectionPaginationTraits<DerivedClient>>
  GetLabelDetectionPaginator(const Model::GetLabelDetectionRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetLabelDetectionRequest,
                                             Pagination::GetLabelDetectionPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetPersonTracking operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetPersonTrackingRequest,
                                    Pagination::GetPersonTrackingPaginationTraits<DerivedClient>>
  GetPersonTrackingPaginator(const Model::GetPersonTrackingRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetPersonTrackingRequest,
                                             Pagination::GetPersonTrackingPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetSegmentDetection operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSegmentDetectionRequest,
                                    Pagination::GetSegmentDetectionPaginationTraits<DerivedClient>>
  GetSegmentDetectionPaginator(const Model::GetSegmentDetectionRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSegmentDetectionRequest,
                                             Pagination::GetSegmentDetectionPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetTextDetection operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTextDetectionRequest,
                                    Pagination::GetTextDetectionPaginationTraits<DerivedClient>>
  GetTextDetectionPaginator(const Model::GetTextDetectionRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTextDetectionRequest,
                                             Pagination::GetTextDetectionPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListCollections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollectionsRequest,
                                    Pagination::ListCollectionsPaginationTraits<DerivedClient>>
  ListCollectionsPaginator(const Model::ListCollectionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollectionsRequest,
                                             Pagination::ListCollectionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListDatasetEntries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetEntriesRequest,
                                    Pagination::ListDatasetEntriesPaginationTraits<DerivedClient>>
  ListDatasetEntriesPaginator(const Model::ListDatasetEntriesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetEntriesRequest,
                                             Pagination::ListDatasetEntriesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDatasetLabels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetLabelsRequest,
                                    Pagination::ListDatasetLabelsPaginationTraits<DerivedClient>>
  ListDatasetLabelsPaginator(const Model::ListDatasetLabelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetLabelsRequest,
                                             Pagination::ListDatasetLabelsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFacesRequest, Pagination::ListFacesPaginationTraits<DerivedClient>>
  ListFacesPaginator(const Model::ListFacesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFacesRequest, Pagination::ListFacesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMediaAnalysisJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMediaAnalysisJobsRequest,
                                    Pagination::ListMediaAnalysisJobsPaginationTraits<DerivedClient>>
  ListMediaAnalysisJobsPaginator(const Model::ListMediaAnalysisJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMediaAnalysisJobsRequest,
                                             Pagination::ListMediaAnalysisJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProjectPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProjectPoliciesRequest,
                                    Pagination::ListProjectPoliciesPaginationTraits<DerivedClient>>
  ListProjectPoliciesPaginator(const Model::ListProjectPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProjectPoliciesRequest,
                                             Pagination::ListProjectPoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListStreamProcessors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStreamProcessorsRequest,
                                    Pagination::ListStreamProcessorsPaginationTraits<DerivedClient>>
  ListStreamProcessorsPaginator(const Model::ListStreamProcessorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStreamProcessorsRequest,
                                             Pagination::ListStreamProcessorsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListUsers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUsersRequest, Pagination::ListUsersPaginationTraits<DerivedClient>>
  ListUsersPaginator(const Model::ListUsersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUsersRequest, Pagination::ListUsersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Rekognition
}  // namespace Aws
