/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/medical-imaging/MedicalImagingClient.h>
#include <aws/medical-imaging/MedicalImagingEndpointProvider.h>
#include <aws/medical-imaging/MedicalImagingEndpointRules.h>
#include <aws/medical-imaging/MedicalImagingErrorMarshaller.h>
#include <aws/medical-imaging/MedicalImagingErrors.h>
#include <aws/medical-imaging/MedicalImagingRequest.h>
#include <aws/medical-imaging/MedicalImagingServiceClientModel.h>
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/medical-imaging/model/CopyDestinationImageSet.h>
#include <aws/medical-imaging/model/CopyDestinationImageSetProperties.h>
#include <aws/medical-imaging/model/CopyImageSetInformation.h>
#include <aws/medical-imaging/model/CopyImageSetRequest.h>
#include <aws/medical-imaging/model/CopyImageSetResult.h>
#include <aws/medical-imaging/model/CopySourceImageSetInformation.h>
#include <aws/medical-imaging/model/CopySourceImageSetProperties.h>
#include <aws/medical-imaging/model/CreateDatastoreRequest.h>
#include <aws/medical-imaging/model/CreateDatastoreResult.h>
#include <aws/medical-imaging/model/DICOMImportJobProperties.h>
#include <aws/medical-imaging/model/DICOMImportJobSummary.h>
#include <aws/medical-imaging/model/DICOMStudyDateAndTime.h>
#include <aws/medical-imaging/model/DICOMTags.h>
#include <aws/medical-imaging/model/DICOMUpdates.h>
#include <aws/medical-imaging/model/DatastoreProperties.h>
#include <aws/medical-imaging/model/DatastoreStatus.h>
#include <aws/medical-imaging/model/DatastoreSummary.h>
#include <aws/medical-imaging/model/DeleteDatastoreRequest.h>
#include <aws/medical-imaging/model/DeleteDatastoreResult.h>
#include <aws/medical-imaging/model/DeleteImageSetRequest.h>
#include <aws/medical-imaging/model/DeleteImageSetResult.h>
#include <aws/medical-imaging/model/GetDICOMImportJobRequest.h>
#include <aws/medical-imaging/model/GetDICOMImportJobResult.h>
#include <aws/medical-imaging/model/GetDatastoreRequest.h>
#include <aws/medical-imaging/model/GetDatastoreResult.h>
#include <aws/medical-imaging/model/GetImageFrameRequest.h>
#include <aws/medical-imaging/model/GetImageFrameResult.h>
#include <aws/medical-imaging/model/GetImageSetMetadataRequest.h>
#include <aws/medical-imaging/model/GetImageSetMetadataResult.h>
#include <aws/medical-imaging/model/GetImageSetRequest.h>
#include <aws/medical-imaging/model/GetImageSetResult.h>
#include <aws/medical-imaging/model/ImageFrameInformation.h>
#include <aws/medical-imaging/model/ImageSetProperties.h>
#include <aws/medical-imaging/model/ImageSetState.h>
#include <aws/medical-imaging/model/ImageSetWorkflowStatus.h>
#include <aws/medical-imaging/model/ImageSetsMetadataSummary.h>
#include <aws/medical-imaging/model/JobStatus.h>
#include <aws/medical-imaging/model/ListDICOMImportJobsRequest.h>
#include <aws/medical-imaging/model/ListDICOMImportJobsResult.h>
#include <aws/medical-imaging/model/ListDatastoresRequest.h>
#include <aws/medical-imaging/model/ListDatastoresResult.h>
#include <aws/medical-imaging/model/ListImageSetVersionsRequest.h>
#include <aws/medical-imaging/model/ListImageSetVersionsResult.h>
#include <aws/medical-imaging/model/ListTagsForResourceRequest.h>
#include <aws/medical-imaging/model/ListTagsForResourceResult.h>
#include <aws/medical-imaging/model/MetadataCopies.h>
#include <aws/medical-imaging/model/MetadataUpdates.h>
#include <aws/medical-imaging/model/Operator.h>
#include <aws/medical-imaging/model/Overrides.h>
#include <aws/medical-imaging/model/SearchByAttributeValue.h>
#include <aws/medical-imaging/model/SearchCriteria.h>
#include <aws/medical-imaging/model/SearchFilter.h>
#include <aws/medical-imaging/model/SearchImageSetsRequest.h>
#include <aws/medical-imaging/model/SearchImageSetsResult.h>
#include <aws/medical-imaging/model/Sort.h>
#include <aws/medical-imaging/model/SortField.h>
#include <aws/medical-imaging/model/SortOrder.h>
#include <aws/medical-imaging/model/StartDICOMImportJobRequest.h>
#include <aws/medical-imaging/model/StartDICOMImportJobResult.h>
#include <aws/medical-imaging/model/TagResourceRequest.h>
#include <aws/medical-imaging/model/TagResourceResult.h>
#include <aws/medical-imaging/model/UntagResourceRequest.h>
#include <aws/medical-imaging/model/UntagResourceResult.h>
#include <aws/medical-imaging/model/UpdateImageSetMetadataRequest.h>
#include <aws/medical-imaging/model/UpdateImageSetMetadataResult.h>

using MedicalImagingIncludeTest = ::testing::Test;

TEST_F(MedicalImagingIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::MedicalImaging::MedicalImagingClient>("MedicalImagingIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
