/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/textract/TextractClient.h>
#include <aws/textract/TextractEndpointProvider.h>
#include <aws/textract/TextractEndpointRules.h>
#include <aws/textract/TextractErrorMarshaller.h>
#include <aws/textract/TextractErrors.h>
#include <aws/textract/TextractRequest.h>
#include <aws/textract/TextractServiceClientModel.h>
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/Adapter.h>
#include <aws/textract/model/AdapterOverview.h>
#include <aws/textract/model/AdapterVersionDatasetConfig.h>
#include <aws/textract/model/AdapterVersionEvaluationMetric.h>
#include <aws/textract/model/AdapterVersionOverview.h>
#include <aws/textract/model/AdapterVersionStatus.h>
#include <aws/textract/model/AdaptersConfig.h>
#include <aws/textract/model/AnalyzeDocumentRequest.h>
#include <aws/textract/model/AnalyzeDocumentResult.h>
#include <aws/textract/model/AnalyzeExpenseRequest.h>
#include <aws/textract/model/AnalyzeExpenseResult.h>
#include <aws/textract/model/AnalyzeIDDetections.h>
#include <aws/textract/model/AnalyzeIDRequest.h>
#include <aws/textract/model/AnalyzeIDResult.h>
#include <aws/textract/model/AutoUpdate.h>
#include <aws/textract/model/Block.h>
#include <aws/textract/model/BlockType.h>
#include <aws/textract/model/BoundingBox.h>
#include <aws/textract/model/ContentClassifier.h>
#include <aws/textract/model/CreateAdapterRequest.h>
#include <aws/textract/model/CreateAdapterResult.h>
#include <aws/textract/model/CreateAdapterVersionRequest.h>
#include <aws/textract/model/CreateAdapterVersionResult.h>
#include <aws/textract/model/DeleteAdapterRequest.h>
#include <aws/textract/model/DeleteAdapterResult.h>
#include <aws/textract/model/DeleteAdapterVersionRequest.h>
#include <aws/textract/model/DeleteAdapterVersionResult.h>
#include <aws/textract/model/DetectDocumentTextRequest.h>
#include <aws/textract/model/DetectDocumentTextResult.h>
#include <aws/textract/model/DetectedSignature.h>
#include <aws/textract/model/Document.h>
#include <aws/textract/model/DocumentGroup.h>
#include <aws/textract/model/DocumentLocation.h>
#include <aws/textract/model/DocumentMetadata.h>
#include <aws/textract/model/EntityType.h>
#include <aws/textract/model/EvaluationMetric.h>
#include <aws/textract/model/ExpenseCurrency.h>
#include <aws/textract/model/ExpenseDetection.h>
#include <aws/textract/model/ExpenseDocument.h>
#include <aws/textract/model/ExpenseField.h>
#include <aws/textract/model/ExpenseGroupProperty.h>
#include <aws/textract/model/ExpenseType.h>
#include <aws/textract/model/Extraction.h>
#include <aws/textract/model/FeatureType.h>
#include <aws/textract/model/Geometry.h>
#include <aws/textract/model/GetAdapterRequest.h>
#include <aws/textract/model/GetAdapterResult.h>
#include <aws/textract/model/GetAdapterVersionRequest.h>
#include <aws/textract/model/GetAdapterVersionResult.h>
#include <aws/textract/model/GetDocumentAnalysisRequest.h>
#include <aws/textract/model/GetDocumentAnalysisResult.h>
#include <aws/textract/model/GetDocumentTextDetectionRequest.h>
#include <aws/textract/model/GetDocumentTextDetectionResult.h>
#include <aws/textract/model/GetExpenseAnalysisRequest.h>
#include <aws/textract/model/GetExpenseAnalysisResult.h>
#include <aws/textract/model/GetLendingAnalysisRequest.h>
#include <aws/textract/model/GetLendingAnalysisResult.h>
#include <aws/textract/model/GetLendingAnalysisSummaryRequest.h>
#include <aws/textract/model/GetLendingAnalysisSummaryResult.h>
#include <aws/textract/model/HumanLoopActivationOutput.h>
#include <aws/textract/model/HumanLoopConfig.h>
#include <aws/textract/model/HumanLoopDataAttributes.h>
#include <aws/textract/model/HumanLoopQuotaExceededException.h>
#include <aws/textract/model/IdentityDocument.h>
#include <aws/textract/model/IdentityDocumentField.h>
#include <aws/textract/model/JobStatus.h>
#include <aws/textract/model/LendingDetection.h>
#include <aws/textract/model/LendingDocument.h>
#include <aws/textract/model/LendingField.h>
#include <aws/textract/model/LendingResult.h>
#include <aws/textract/model/LendingSummary.h>
#include <aws/textract/model/LineItemFields.h>
#include <aws/textract/model/LineItemGroup.h>
#include <aws/textract/model/ListAdapterVersionsRequest.h>
#include <aws/textract/model/ListAdapterVersionsResult.h>
#include <aws/textract/model/ListAdaptersRequest.h>
#include <aws/textract/model/ListAdaptersResult.h>
#include <aws/textract/model/ListTagsForResourceRequest.h>
#include <aws/textract/model/ListTagsForResourceResult.h>
#include <aws/textract/model/NormalizedValue.h>
#include <aws/textract/model/NotificationChannel.h>
#include <aws/textract/model/OutputConfig.h>
#include <aws/textract/model/PageClassification.h>
#include <aws/textract/model/Point.h>
#include <aws/textract/model/Prediction.h>
#include <aws/textract/model/QueriesConfig.h>
#include <aws/textract/model/Query.h>
#include <aws/textract/model/Relationship.h>
#include <aws/textract/model/RelationshipType.h>
#include <aws/textract/model/S3Object.h>
#include <aws/textract/model/SelectionStatus.h>
#include <aws/textract/model/SignatureDetection.h>
#include <aws/textract/model/SplitDocument.h>
#include <aws/textract/model/StartDocumentAnalysisRequest.h>
#include <aws/textract/model/StartDocumentAnalysisResult.h>
#include <aws/textract/model/StartDocumentTextDetectionRequest.h>
#include <aws/textract/model/StartDocumentTextDetectionResult.h>
#include <aws/textract/model/StartExpenseAnalysisRequest.h>
#include <aws/textract/model/StartExpenseAnalysisResult.h>
#include <aws/textract/model/StartLendingAnalysisRequest.h>
#include <aws/textract/model/StartLendingAnalysisResult.h>
#include <aws/textract/model/TagResourceRequest.h>
#include <aws/textract/model/TagResourceResult.h>
#include <aws/textract/model/TextType.h>
#include <aws/textract/model/UndetectedSignature.h>
#include <aws/textract/model/UntagResourceRequest.h>
#include <aws/textract/model/UntagResourceResult.h>
#include <aws/textract/model/UpdateAdapterRequest.h>
#include <aws/textract/model/UpdateAdapterResult.h>
#include <aws/textract/model/ValueType.h>
#include <aws/textract/model/Warning.h>

using TextractIncludeTest = ::testing::Test;

TEST_F(TextractIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Textract::TextractClient>("TextractIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
