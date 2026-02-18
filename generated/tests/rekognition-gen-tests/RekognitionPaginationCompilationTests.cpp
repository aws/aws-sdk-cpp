/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Rekognition pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/rekognition/RekognitionClientPagination.h>
#include <aws/rekognition/RekognitionPaginationBase.h>
#include <aws/rekognition/model/GetFaceSearchPaginationTraits.h>
#include <aws/rekognition/model/ListMediaAnalysisJobsPaginationTraits.h>
#include <aws/rekognition/model/ListProjectPoliciesPaginationTraits.h>
#include <aws/rekognition/model/ListCollectionsPaginationTraits.h>
#include <aws/rekognition/model/GetSegmentDetectionPaginationTraits.h>
#include <aws/rekognition/model/ListDatasetEntriesPaginationTraits.h>
#include <aws/rekognition/model/GetCelebrityRecognitionPaginationTraits.h>
#include <aws/rekognition/model/ListUsersPaginationTraits.h>
#include <aws/rekognition/model/DescribeProjectsPaginationTraits.h>
#include <aws/rekognition/model/ListDatasetLabelsPaginationTraits.h>
#include <aws/rekognition/model/DescribeProjectVersionsPaginationTraits.h>
#include <aws/rekognition/model/GetFaceDetectionPaginationTraits.h>
#include <aws/rekognition/model/GetLabelDetectionPaginationTraits.h>
#include <aws/rekognition/model/ListFacesPaginationTraits.h>
#include <aws/rekognition/model/GetPersonTrackingPaginationTraits.h>
#include <aws/rekognition/model/GetContentModerationPaginationTraits.h>
#include <aws/rekognition/model/GetTextDetectionPaginationTraits.h>
#include <aws/rekognition/model/ListStreamProcessorsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class RekognitionPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(RekognitionPaginationCompilationTest, RekognitionPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
