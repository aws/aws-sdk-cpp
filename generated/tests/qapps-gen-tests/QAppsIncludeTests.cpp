/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/qapps/QAppsClient.h>
#include <aws/qapps/QAppsEndpointProvider.h>
#include <aws/qapps/QAppsEndpointRules.h>
#include <aws/qapps/QAppsErrorMarshaller.h>
#include <aws/qapps/QAppsErrors.h>
#include <aws/qapps/QAppsRequest.h>
#include <aws/qapps/QAppsServiceClientModel.h>
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/qapps/model/AppDefinition.h>
#include <aws/qapps/model/AppDefinitionInput.h>
#include <aws/qapps/model/AppRequiredCapability.h>
#include <aws/qapps/model/AppStatus.h>
#include <aws/qapps/model/AssociateLibraryItemReviewRequest.h>
#include <aws/qapps/model/AssociateQAppWithUserRequest.h>
#include <aws/qapps/model/AttributeFilter.h>
#include <aws/qapps/model/BatchCreateCategoryInputCategory.h>
#include <aws/qapps/model/BatchCreateCategoryRequest.h>
#include <aws/qapps/model/BatchDeleteCategoryRequest.h>
#include <aws/qapps/model/BatchUpdateCategoryRequest.h>
#include <aws/qapps/model/Card.h>
#include <aws/qapps/model/CardInput.h>
#include <aws/qapps/model/CardOutputSource.h>
#include <aws/qapps/model/CardStatus.h>
#include <aws/qapps/model/CardType.h>
#include <aws/qapps/model/CardValue.h>
#include <aws/qapps/model/Category.h>
#include <aws/qapps/model/CategoryInput.h>
#include <aws/qapps/model/ConflictException.h>
#include <aws/qapps/model/ContentTooLargeException.h>
#include <aws/qapps/model/ConversationMessage.h>
#include <aws/qapps/model/CreateLibraryItemRequest.h>
#include <aws/qapps/model/CreateLibraryItemResult.h>
#include <aws/qapps/model/CreatePresignedUrlRequest.h>
#include <aws/qapps/model/CreatePresignedUrlResult.h>
#include <aws/qapps/model/CreateQAppRequest.h>
#include <aws/qapps/model/CreateQAppResult.h>
#include <aws/qapps/model/DeleteLibraryItemRequest.h>
#include <aws/qapps/model/DeleteQAppRequest.h>
#include <aws/qapps/model/DescribeQAppPermissionsRequest.h>
#include <aws/qapps/model/DescribeQAppPermissionsResult.h>
#include <aws/qapps/model/DisassociateLibraryItemReviewRequest.h>
#include <aws/qapps/model/DisassociateQAppFromUserRequest.h>
#include <aws/qapps/model/DocumentAttribute.h>
#include <aws/qapps/model/DocumentAttributeValue.h>
#include <aws/qapps/model/DocumentScope.h>
#include <aws/qapps/model/ExecutionStatus.h>
#include <aws/qapps/model/ExportQAppSessionDataRequest.h>
#include <aws/qapps/model/ExportQAppSessionDataResult.h>
#include <aws/qapps/model/FileUploadCard.h>
#include <aws/qapps/model/FileUploadCardInput.h>
#include <aws/qapps/model/FormInputCard.h>
#include <aws/qapps/model/FormInputCardInput.h>
#include <aws/qapps/model/FormInputCardMetadata.h>
#include <aws/qapps/model/GetLibraryItemRequest.h>
#include <aws/qapps/model/GetLibraryItemResult.h>
#include <aws/qapps/model/GetQAppRequest.h>
#include <aws/qapps/model/GetQAppResult.h>
#include <aws/qapps/model/GetQAppSessionMetadataRequest.h>
#include <aws/qapps/model/GetQAppSessionMetadataResult.h>
#include <aws/qapps/model/GetQAppSessionRequest.h>
#include <aws/qapps/model/GetQAppSessionResult.h>
#include <aws/qapps/model/ImportDocumentRequest.h>
#include <aws/qapps/model/ImportDocumentResult.h>
#include <aws/qapps/model/InputCardComputeMode.h>
#include <aws/qapps/model/InternalServerException.h>
#include <aws/qapps/model/LibraryItemMember.h>
#include <aws/qapps/model/LibraryItemStatus.h>
#include <aws/qapps/model/ListCategoriesRequest.h>
#include <aws/qapps/model/ListCategoriesResult.h>
#include <aws/qapps/model/ListLibraryItemsRequest.h>
#include <aws/qapps/model/ListLibraryItemsResult.h>
#include <aws/qapps/model/ListQAppSessionDataRequest.h>
#include <aws/qapps/model/ListQAppSessionDataResult.h>
#include <aws/qapps/model/ListQAppsRequest.h>
#include <aws/qapps/model/ListQAppsResult.h>
#include <aws/qapps/model/ListTagsForResourceRequest.h>
#include <aws/qapps/model/ListTagsForResourceResult.h>
#include <aws/qapps/model/PermissionInput.h>
#include <aws/qapps/model/PermissionInputActionEnum.h>
#include <aws/qapps/model/PermissionOutput.h>
#include <aws/qapps/model/PermissionOutputActionEnum.h>
#include <aws/qapps/model/PluginType.h>
#include <aws/qapps/model/PredictAppDefinition.h>
#include <aws/qapps/model/PredictQAppInputOptions.h>
#include <aws/qapps/model/PredictQAppRequest.h>
#include <aws/qapps/model/PredictQAppResult.h>
#include <aws/qapps/model/PrincipalOutput.h>
#include <aws/qapps/model/PrincipalOutputUserTypeEnum.h>
#include <aws/qapps/model/QAppSessionData.h>
#include <aws/qapps/model/QPluginCard.h>
#include <aws/qapps/model/QPluginCardInput.h>
#include <aws/qapps/model/QQueryCard.h>
#include <aws/qapps/model/QQueryCardInput.h>
#include <aws/qapps/model/ResourceNotFoundException.h>
#include <aws/qapps/model/Sender.h>
#include <aws/qapps/model/ServiceQuotaExceededException.h>
#include <aws/qapps/model/SessionSharingConfiguration.h>
#include <aws/qapps/model/StartQAppSessionRequest.h>
#include <aws/qapps/model/StartQAppSessionResult.h>
#include <aws/qapps/model/StopQAppSessionRequest.h>
#include <aws/qapps/model/Submission.h>
#include <aws/qapps/model/SubmissionMutation.h>
#include <aws/qapps/model/SubmissionMutationKind.h>
#include <aws/qapps/model/TagResourceRequest.h>
#include <aws/qapps/model/TagResourceResult.h>
#include <aws/qapps/model/TextInputCard.h>
#include <aws/qapps/model/TextInputCardInput.h>
#include <aws/qapps/model/ThrottlingException.h>
#include <aws/qapps/model/UntagResourceRequest.h>
#include <aws/qapps/model/UntagResourceResult.h>
#include <aws/qapps/model/UpdateLibraryItemMetadataRequest.h>
#include <aws/qapps/model/UpdateLibraryItemRequest.h>
#include <aws/qapps/model/UpdateLibraryItemResult.h>
#include <aws/qapps/model/UpdateQAppPermissionsRequest.h>
#include <aws/qapps/model/UpdateQAppPermissionsResult.h>
#include <aws/qapps/model/UpdateQAppRequest.h>
#include <aws/qapps/model/UpdateQAppResult.h>
#include <aws/qapps/model/UpdateQAppSessionMetadataRequest.h>
#include <aws/qapps/model/UpdateQAppSessionMetadataResult.h>
#include <aws/qapps/model/UpdateQAppSessionRequest.h>
#include <aws/qapps/model/UpdateQAppSessionResult.h>
#include <aws/qapps/model/User.h>
#include <aws/qapps/model/UserAppItem.h>

using QAppsIncludeTest = ::testing::Test;

TEST_F(QAppsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::QApps::QAppsClient>("QAppsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
