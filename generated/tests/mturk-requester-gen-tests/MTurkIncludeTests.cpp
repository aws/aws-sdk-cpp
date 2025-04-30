/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/mturk-requester/MTurkClient.h>
#include <aws/mturk-requester/MTurkEndpointProvider.h>
#include <aws/mturk-requester/MTurkEndpointRules.h>
#include <aws/mturk-requester/MTurkErrorMarshaller.h>
#include <aws/mturk-requester/MTurkErrors.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/mturk-requester/MTurkServiceClientModel.h>
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/model/AcceptQualificationRequestRequest.h>
#include <aws/mturk-requester/model/AcceptQualificationRequestResult.h>
#include <aws/mturk-requester/model/ApproveAssignmentRequest.h>
#include <aws/mturk-requester/model/ApproveAssignmentResult.h>
#include <aws/mturk-requester/model/Assignment.h>
#include <aws/mturk-requester/model/AssignmentStatus.h>
#include <aws/mturk-requester/model/AssociateQualificationWithWorkerRequest.h>
#include <aws/mturk-requester/model/AssociateQualificationWithWorkerResult.h>
#include <aws/mturk-requester/model/BonusPayment.h>
#include <aws/mturk-requester/model/Comparator.h>
#include <aws/mturk-requester/model/CreateAdditionalAssignmentsForHITRequest.h>
#include <aws/mturk-requester/model/CreateAdditionalAssignmentsForHITResult.h>
#include <aws/mturk-requester/model/CreateHITRequest.h>
#include <aws/mturk-requester/model/CreateHITResult.h>
#include <aws/mturk-requester/model/CreateHITTypeRequest.h>
#include <aws/mturk-requester/model/CreateHITTypeResult.h>
#include <aws/mturk-requester/model/CreateHITWithHITTypeRequest.h>
#include <aws/mturk-requester/model/CreateHITWithHITTypeResult.h>
#include <aws/mturk-requester/model/CreateQualificationTypeRequest.h>
#include <aws/mturk-requester/model/CreateQualificationTypeResult.h>
#include <aws/mturk-requester/model/CreateWorkerBlockRequest.h>
#include <aws/mturk-requester/model/CreateWorkerBlockResult.h>
#include <aws/mturk-requester/model/DeleteHITRequest.h>
#include <aws/mturk-requester/model/DeleteHITResult.h>
#include <aws/mturk-requester/model/DeleteQualificationTypeRequest.h>
#include <aws/mturk-requester/model/DeleteQualificationTypeResult.h>
#include <aws/mturk-requester/model/DeleteWorkerBlockRequest.h>
#include <aws/mturk-requester/model/DeleteWorkerBlockResult.h>
#include <aws/mturk-requester/model/DisassociateQualificationFromWorkerRequest.h>
#include <aws/mturk-requester/model/DisassociateQualificationFromWorkerResult.h>
#include <aws/mturk-requester/model/EventType.h>
#include <aws/mturk-requester/model/GetAccountBalanceRequest.h>
#include <aws/mturk-requester/model/GetAccountBalanceResult.h>
#include <aws/mturk-requester/model/GetAssignmentRequest.h>
#include <aws/mturk-requester/model/GetAssignmentResult.h>
#include <aws/mturk-requester/model/GetFileUploadURLRequest.h>
#include <aws/mturk-requester/model/GetFileUploadURLResult.h>
#include <aws/mturk-requester/model/GetHITRequest.h>
#include <aws/mturk-requester/model/GetHITResult.h>
#include <aws/mturk-requester/model/GetQualificationScoreRequest.h>
#include <aws/mturk-requester/model/GetQualificationScoreResult.h>
#include <aws/mturk-requester/model/GetQualificationTypeRequest.h>
#include <aws/mturk-requester/model/GetQualificationTypeResult.h>
#include <aws/mturk-requester/model/HIT.h>
#include <aws/mturk-requester/model/HITAccessActions.h>
#include <aws/mturk-requester/model/HITLayoutParameter.h>
#include <aws/mturk-requester/model/HITReviewStatus.h>
#include <aws/mturk-requester/model/HITStatus.h>
#include <aws/mturk-requester/model/ListAssignmentsForHITRequest.h>
#include <aws/mturk-requester/model/ListAssignmentsForHITResult.h>
#include <aws/mturk-requester/model/ListBonusPaymentsRequest.h>
#include <aws/mturk-requester/model/ListBonusPaymentsResult.h>
#include <aws/mturk-requester/model/ListHITsForQualificationTypeRequest.h>
#include <aws/mturk-requester/model/ListHITsForQualificationTypeResult.h>
#include <aws/mturk-requester/model/ListHITsRequest.h>
#include <aws/mturk-requester/model/ListHITsResult.h>
#include <aws/mturk-requester/model/ListQualificationRequestsRequest.h>
#include <aws/mturk-requester/model/ListQualificationRequestsResult.h>
#include <aws/mturk-requester/model/ListQualificationTypesRequest.h>
#include <aws/mturk-requester/model/ListQualificationTypesResult.h>
#include <aws/mturk-requester/model/ListReviewPolicyResultsForHITRequest.h>
#include <aws/mturk-requester/model/ListReviewPolicyResultsForHITResult.h>
#include <aws/mturk-requester/model/ListReviewableHITsRequest.h>
#include <aws/mturk-requester/model/ListReviewableHITsResult.h>
#include <aws/mturk-requester/model/ListWorkerBlocksRequest.h>
#include <aws/mturk-requester/model/ListWorkerBlocksResult.h>
#include <aws/mturk-requester/model/ListWorkersWithQualificationTypeRequest.h>
#include <aws/mturk-requester/model/ListWorkersWithQualificationTypeResult.h>
#include <aws/mturk-requester/model/Locale.h>
#include <aws/mturk-requester/model/NotificationSpecification.h>
#include <aws/mturk-requester/model/NotificationTransport.h>
#include <aws/mturk-requester/model/NotifyWorkersFailureCode.h>
#include <aws/mturk-requester/model/NotifyWorkersFailureStatus.h>
#include <aws/mturk-requester/model/NotifyWorkersRequest.h>
#include <aws/mturk-requester/model/NotifyWorkersResult.h>
#include <aws/mturk-requester/model/ParameterMapEntry.h>
#include <aws/mturk-requester/model/PolicyParameter.h>
#include <aws/mturk-requester/model/Qualification.h>
#include <aws/mturk-requester/model/QualificationRequest.h>
#include <aws/mturk-requester/model/QualificationRequirement.h>
#include <aws/mturk-requester/model/QualificationStatus.h>
#include <aws/mturk-requester/model/QualificationType.h>
#include <aws/mturk-requester/model/QualificationTypeStatus.h>
#include <aws/mturk-requester/model/RejectAssignmentRequest.h>
#include <aws/mturk-requester/model/RejectAssignmentResult.h>
#include <aws/mturk-requester/model/RejectQualificationRequestRequest.h>
#include <aws/mturk-requester/model/RejectQualificationRequestResult.h>
#include <aws/mturk-requester/model/RequestError.h>
#include <aws/mturk-requester/model/ReviewActionDetail.h>
#include <aws/mturk-requester/model/ReviewActionStatus.h>
#include <aws/mturk-requester/model/ReviewPolicy.h>
#include <aws/mturk-requester/model/ReviewPolicyLevel.h>
#include <aws/mturk-requester/model/ReviewReport.h>
#include <aws/mturk-requester/model/ReviewResultDetail.h>
#include <aws/mturk-requester/model/ReviewableHITStatus.h>
#include <aws/mturk-requester/model/SendBonusRequest.h>
#include <aws/mturk-requester/model/SendBonusResult.h>
#include <aws/mturk-requester/model/SendTestEventNotificationRequest.h>
#include <aws/mturk-requester/model/SendTestEventNotificationResult.h>
#include <aws/mturk-requester/model/ServiceFault.h>
#include <aws/mturk-requester/model/UpdateExpirationForHITRequest.h>
#include <aws/mturk-requester/model/UpdateExpirationForHITResult.h>
#include <aws/mturk-requester/model/UpdateHITReviewStatusRequest.h>
#include <aws/mturk-requester/model/UpdateHITReviewStatusResult.h>
#include <aws/mturk-requester/model/UpdateHITTypeOfHITRequest.h>
#include <aws/mturk-requester/model/UpdateHITTypeOfHITResult.h>
#include <aws/mturk-requester/model/UpdateNotificationSettingsRequest.h>
#include <aws/mturk-requester/model/UpdateNotificationSettingsResult.h>
#include <aws/mturk-requester/model/UpdateQualificationTypeRequest.h>
#include <aws/mturk-requester/model/UpdateQualificationTypeResult.h>
#include <aws/mturk-requester/model/WorkerBlock.h>

using MTurkIncludeTest = ::testing::Test;

TEST_F(MTurkIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::MTurk::MTurkClient>("MTurkIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
