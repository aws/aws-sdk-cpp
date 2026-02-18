/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/rekognition/RekognitionClient.h>
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

namespace Aws {
namespace Rekognition {

using DescribeProjectsPaginator = Aws::Utils::Pagination::Paginator<RekognitionClient, Model::DescribeProjectsRequest,
                                                                    Pagination::DescribeProjectsPaginationTraits<RekognitionClient>>;
using DescribeProjectVersionsPaginator =
    Aws::Utils::Pagination::Paginator<RekognitionClient, Model::DescribeProjectVersionsRequest,
                                      Pagination::DescribeProjectVersionsPaginationTraits<RekognitionClient>>;
using GetCelebrityRecognitionPaginator =
    Aws::Utils::Pagination::Paginator<RekognitionClient, Model::GetCelebrityRecognitionRequest,
                                      Pagination::GetCelebrityRecognitionPaginationTraits<RekognitionClient>>;
using GetContentModerationPaginator =
    Aws::Utils::Pagination::Paginator<RekognitionClient, Model::GetContentModerationRequest,
                                      Pagination::GetContentModerationPaginationTraits<RekognitionClient>>;
using GetFaceDetectionPaginator = Aws::Utils::Pagination::Paginator<RekognitionClient, Model::GetFaceDetectionRequest,
                                                                    Pagination::GetFaceDetectionPaginationTraits<RekognitionClient>>;
using GetFaceSearchPaginator = Aws::Utils::Pagination::Paginator<RekognitionClient, Model::GetFaceSearchRequest,
                                                                 Pagination::GetFaceSearchPaginationTraits<RekognitionClient>>;
using GetLabelDetectionPaginator = Aws::Utils::Pagination::Paginator<RekognitionClient, Model::GetLabelDetectionRequest,
                                                                     Pagination::GetLabelDetectionPaginationTraits<RekognitionClient>>;
using GetPersonTrackingPaginator = Aws::Utils::Pagination::Paginator<RekognitionClient, Model::GetPersonTrackingRequest,
                                                                     Pagination::GetPersonTrackingPaginationTraits<RekognitionClient>>;
using GetSegmentDetectionPaginator = Aws::Utils::Pagination::Paginator<RekognitionClient, Model::GetSegmentDetectionRequest,
                                                                       Pagination::GetSegmentDetectionPaginationTraits<RekognitionClient>>;
using GetTextDetectionPaginator = Aws::Utils::Pagination::Paginator<RekognitionClient, Model::GetTextDetectionRequest,
                                                                    Pagination::GetTextDetectionPaginationTraits<RekognitionClient>>;
using ListCollectionsPaginator = Aws::Utils::Pagination::Paginator<RekognitionClient, Model::ListCollectionsRequest,
                                                                   Pagination::ListCollectionsPaginationTraits<RekognitionClient>>;
using ListDatasetEntriesPaginator = Aws::Utils::Pagination::Paginator<RekognitionClient, Model::ListDatasetEntriesRequest,
                                                                      Pagination::ListDatasetEntriesPaginationTraits<RekognitionClient>>;
using ListDatasetLabelsPaginator = Aws::Utils::Pagination::Paginator<RekognitionClient, Model::ListDatasetLabelsRequest,
                                                                     Pagination::ListDatasetLabelsPaginationTraits<RekognitionClient>>;
using ListFacesPaginator =
    Aws::Utils::Pagination::Paginator<RekognitionClient, Model::ListFacesRequest, Pagination::ListFacesPaginationTraits<RekognitionClient>>;
using ListMediaAnalysisJobsPaginator =
    Aws::Utils::Pagination::Paginator<RekognitionClient, Model::ListMediaAnalysisJobsRequest,
                                      Pagination::ListMediaAnalysisJobsPaginationTraits<RekognitionClient>>;
using ListProjectPoliciesPaginator = Aws::Utils::Pagination::Paginator<RekognitionClient, Model::ListProjectPoliciesRequest,
                                                                       Pagination::ListProjectPoliciesPaginationTraits<RekognitionClient>>;
using ListStreamProcessorsPaginator =
    Aws::Utils::Pagination::Paginator<RekognitionClient, Model::ListStreamProcessorsRequest,
                                      Pagination::ListStreamProcessorsPaginationTraits<RekognitionClient>>;
using ListUsersPaginator =
    Aws::Utils::Pagination::Paginator<RekognitionClient, Model::ListUsersRequest, Pagination::ListUsersPaginationTraits<RekognitionClient>>;

}  // namespace Rekognition
}  // namespace Aws
