/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/cloudformation/CloudFormationClient.h>
#include <aws/cloudformation/CloudFormationEndpointProvider.h>
#include <aws/cloudformation/CloudFormationEndpointRules.h>
#include <aws/cloudformation/CloudFormationErrorMarshaller.h>
#include <aws/cloudformation/CloudFormationErrors.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/cloudformation/CloudFormationServiceClientModel.h>
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/AccountFilterType.h>
#include <aws/cloudformation/model/AccountGateResult.h>
#include <aws/cloudformation/model/AccountGateStatus.h>
#include <aws/cloudformation/model/AccountLimit.h>
#include <aws/cloudformation/model/ActivateOrganizationsAccessRequest.h>
#include <aws/cloudformation/model/ActivateOrganizationsAccessResult.h>
#include <aws/cloudformation/model/ActivateTypeRequest.h>
#include <aws/cloudformation/model/ActivateTypeResult.h>
#include <aws/cloudformation/model/AttributeChangeType.h>
#include <aws/cloudformation/model/AutoDeployment.h>
#include <aws/cloudformation/model/BatchDescribeTypeConfigurationsError.h>
#include <aws/cloudformation/model/BatchDescribeTypeConfigurationsRequest.h>
#include <aws/cloudformation/model/BatchDescribeTypeConfigurationsResult.h>
#include <aws/cloudformation/model/CallAs.h>
#include <aws/cloudformation/model/CancelUpdateStackRequest.h>
#include <aws/cloudformation/model/Capability.h>
#include <aws/cloudformation/model/Category.h>
#include <aws/cloudformation/model/Change.h>
#include <aws/cloudformation/model/ChangeAction.h>
#include <aws/cloudformation/model/ChangeSetHook.h>
#include <aws/cloudformation/model/ChangeSetHookResourceTargetDetails.h>
#include <aws/cloudformation/model/ChangeSetHookTargetDetails.h>
#include <aws/cloudformation/model/ChangeSetHooksStatus.h>
#include <aws/cloudformation/model/ChangeSetStatus.h>
#include <aws/cloudformation/model/ChangeSetSummary.h>
#include <aws/cloudformation/model/ChangeSetType.h>
#include <aws/cloudformation/model/ChangeSource.h>
#include <aws/cloudformation/model/ChangeType.h>
#include <aws/cloudformation/model/ConcurrencyMode.h>
#include <aws/cloudformation/model/ContinueUpdateRollbackRequest.h>
#include <aws/cloudformation/model/ContinueUpdateRollbackResult.h>
#include <aws/cloudformation/model/CreateChangeSetRequest.h>
#include <aws/cloudformation/model/CreateChangeSetResult.h>
#include <aws/cloudformation/model/CreateGeneratedTemplateRequest.h>
#include <aws/cloudformation/model/CreateGeneratedTemplateResult.h>
#include <aws/cloudformation/model/CreateStackInstancesRequest.h>
#include <aws/cloudformation/model/CreateStackInstancesResult.h>
#include <aws/cloudformation/model/CreateStackRefactorRequest.h>
#include <aws/cloudformation/model/CreateStackRefactorResult.h>
#include <aws/cloudformation/model/CreateStackRequest.h>
#include <aws/cloudformation/model/CreateStackResult.h>
#include <aws/cloudformation/model/CreateStackSetRequest.h>
#include <aws/cloudformation/model/CreateStackSetResult.h>
#include <aws/cloudformation/model/DeactivateOrganizationsAccessRequest.h>
#include <aws/cloudformation/model/DeactivateOrganizationsAccessResult.h>
#include <aws/cloudformation/model/DeactivateTypeRequest.h>
#include <aws/cloudformation/model/DeactivateTypeResult.h>
#include <aws/cloudformation/model/DeleteChangeSetRequest.h>
#include <aws/cloudformation/model/DeleteChangeSetResult.h>
#include <aws/cloudformation/model/DeleteGeneratedTemplateRequest.h>
#include <aws/cloudformation/model/DeleteStackInstancesRequest.h>
#include <aws/cloudformation/model/DeleteStackInstancesResult.h>
#include <aws/cloudformation/model/DeleteStackRequest.h>
#include <aws/cloudformation/model/DeleteStackSetRequest.h>
#include <aws/cloudformation/model/DeleteStackSetResult.h>
#include <aws/cloudformation/model/DeletionMode.h>
#include <aws/cloudformation/model/DeploymentTargets.h>
#include <aws/cloudformation/model/DeprecatedStatus.h>
#include <aws/cloudformation/model/DeregisterTypeRequest.h>
#include <aws/cloudformation/model/DeregisterTypeResult.h>
#include <aws/cloudformation/model/DescribeAccountLimitsRequest.h>
#include <aws/cloudformation/model/DescribeAccountLimitsResult.h>
#include <aws/cloudformation/model/DescribeChangeSetHooksRequest.h>
#include <aws/cloudformation/model/DescribeChangeSetHooksResult.h>
#include <aws/cloudformation/model/DescribeChangeSetRequest.h>
#include <aws/cloudformation/model/DescribeChangeSetResult.h>
#include <aws/cloudformation/model/DescribeGeneratedTemplateRequest.h>
#include <aws/cloudformation/model/DescribeGeneratedTemplateResult.h>
#include <aws/cloudformation/model/DescribeOrganizationsAccessRequest.h>
#include <aws/cloudformation/model/DescribeOrganizationsAccessResult.h>
#include <aws/cloudformation/model/DescribePublisherRequest.h>
#include <aws/cloudformation/model/DescribePublisherResult.h>
#include <aws/cloudformation/model/DescribeResourceScanRequest.h>
#include <aws/cloudformation/model/DescribeResourceScanResult.h>
#include <aws/cloudformation/model/DescribeStackDriftDetectionStatusRequest.h>
#include <aws/cloudformation/model/DescribeStackDriftDetectionStatusResult.h>
#include <aws/cloudformation/model/DescribeStackEventsRequest.h>
#include <aws/cloudformation/model/DescribeStackEventsResult.h>
#include <aws/cloudformation/model/DescribeStackInstanceRequest.h>
#include <aws/cloudformation/model/DescribeStackInstanceResult.h>
#include <aws/cloudformation/model/DescribeStackRefactorRequest.h>
#include <aws/cloudformation/model/DescribeStackRefactorResult.h>
#include <aws/cloudformation/model/DescribeStackResourceDriftsRequest.h>
#include <aws/cloudformation/model/DescribeStackResourceDriftsResult.h>
#include <aws/cloudformation/model/DescribeStackResourceRequest.h>
#include <aws/cloudformation/model/DescribeStackResourceResult.h>
#include <aws/cloudformation/model/DescribeStackResourcesRequest.h>
#include <aws/cloudformation/model/DescribeStackResourcesResult.h>
#include <aws/cloudformation/model/DescribeStackSetOperationRequest.h>
#include <aws/cloudformation/model/DescribeStackSetOperationResult.h>
#include <aws/cloudformation/model/DescribeStackSetRequest.h>
#include <aws/cloudformation/model/DescribeStackSetResult.h>
#include <aws/cloudformation/model/DescribeStacksRequest.h>
#include <aws/cloudformation/model/DescribeStacksResult.h>
#include <aws/cloudformation/model/DescribeTypeRegistrationRequest.h>
#include <aws/cloudformation/model/DescribeTypeRegistrationResult.h>
#include <aws/cloudformation/model/DescribeTypeRequest.h>
#include <aws/cloudformation/model/DescribeTypeResult.h>
#include <aws/cloudformation/model/DetailedStatus.h>
#include <aws/cloudformation/model/DetectStackDriftRequest.h>
#include <aws/cloudformation/model/DetectStackDriftResult.h>
#include <aws/cloudformation/model/DetectStackResourceDriftRequest.h>
#include <aws/cloudformation/model/DetectStackResourceDriftResult.h>
#include <aws/cloudformation/model/DetectStackSetDriftRequest.h>
#include <aws/cloudformation/model/DetectStackSetDriftResult.h>
#include <aws/cloudformation/model/DifferenceType.h>
#include <aws/cloudformation/model/EstimateTemplateCostRequest.h>
#include <aws/cloudformation/model/EstimateTemplateCostResult.h>
#include <aws/cloudformation/model/EvaluationType.h>
#include <aws/cloudformation/model/ExecuteChangeSetRequest.h>
#include <aws/cloudformation/model/ExecuteChangeSetResult.h>
#include <aws/cloudformation/model/ExecuteStackRefactorRequest.h>
#include <aws/cloudformation/model/ExecutionStatus.h>
#include <aws/cloudformation/model/Export.h>
#include <aws/cloudformation/model/GeneratedTemplateDeletionPolicy.h>
#include <aws/cloudformation/model/GeneratedTemplateResourceStatus.h>
#include <aws/cloudformation/model/GeneratedTemplateStatus.h>
#include <aws/cloudformation/model/GeneratedTemplateUpdateReplacePolicy.h>
#include <aws/cloudformation/model/GetGeneratedTemplateRequest.h>
#include <aws/cloudformation/model/GetGeneratedTemplateResult.h>
#include <aws/cloudformation/model/GetStackPolicyRequest.h>
#include <aws/cloudformation/model/GetStackPolicyResult.h>
#include <aws/cloudformation/model/GetTemplateRequest.h>
#include <aws/cloudformation/model/GetTemplateResult.h>
#include <aws/cloudformation/model/GetTemplateSummaryRequest.h>
#include <aws/cloudformation/model/GetTemplateSummaryResult.h>
#include <aws/cloudformation/model/HandlerErrorCode.h>
#include <aws/cloudformation/model/HookFailureMode.h>
#include <aws/cloudformation/model/HookInvocationPoint.h>
#include <aws/cloudformation/model/HookResultSummary.h>
#include <aws/cloudformation/model/HookStatus.h>
#include <aws/cloudformation/model/HookTargetType.h>
#include <aws/cloudformation/model/IdentityProvider.h>
#include <aws/cloudformation/model/ImportStacksToStackSetRequest.h>
#include <aws/cloudformation/model/ImportStacksToStackSetResult.h>
#include <aws/cloudformation/model/ListChangeSetsRequest.h>
#include <aws/cloudformation/model/ListChangeSetsResult.h>
#include <aws/cloudformation/model/ListExportsRequest.h>
#include <aws/cloudformation/model/ListExportsResult.h>
#include <aws/cloudformation/model/ListGeneratedTemplatesRequest.h>
#include <aws/cloudformation/model/ListGeneratedTemplatesResult.h>
#include <aws/cloudformation/model/ListHookResultsRequest.h>
#include <aws/cloudformation/model/ListHookResultsResult.h>
#include <aws/cloudformation/model/ListHookResultsTargetType.h>
#include <aws/cloudformation/model/ListImportsRequest.h>
#include <aws/cloudformation/model/ListImportsResult.h>
#include <aws/cloudformation/model/ListResourceScanRelatedResourcesRequest.h>
#include <aws/cloudformation/model/ListResourceScanRelatedResourcesResult.h>
#include <aws/cloudformation/model/ListResourceScanResourcesRequest.h>
#include <aws/cloudformation/model/ListResourceScanResourcesResult.h>
#include <aws/cloudformation/model/ListResourceScansRequest.h>
#include <aws/cloudformation/model/ListResourceScansResult.h>
#include <aws/cloudformation/model/ListStackInstanceResourceDriftsRequest.h>
#include <aws/cloudformation/model/ListStackInstanceResourceDriftsResult.h>
#include <aws/cloudformation/model/ListStackInstancesRequest.h>
#include <aws/cloudformation/model/ListStackInstancesResult.h>
#include <aws/cloudformation/model/ListStackRefactorActionsRequest.h>
#include <aws/cloudformation/model/ListStackRefactorActionsResult.h>
#include <aws/cloudformation/model/ListStackRefactorsRequest.h>
#include <aws/cloudformation/model/ListStackRefactorsResult.h>
#include <aws/cloudformation/model/ListStackResourcesRequest.h>
#include <aws/cloudformation/model/ListStackResourcesResult.h>
#include <aws/cloudformation/model/ListStackSetAutoDeploymentTargetsRequest.h>
#include <aws/cloudformation/model/ListStackSetAutoDeploymentTargetsResult.h>
#include <aws/cloudformation/model/ListStackSetOperationResultsRequest.h>
#include <aws/cloudformation/model/ListStackSetOperationResultsResult.h>
#include <aws/cloudformation/model/ListStackSetOperationsRequest.h>
#include <aws/cloudformation/model/ListStackSetOperationsResult.h>
#include <aws/cloudformation/model/ListStackSetsRequest.h>
#include <aws/cloudformation/model/ListStackSetsResult.h>
#include <aws/cloudformation/model/ListStacksRequest.h>
#include <aws/cloudformation/model/ListStacksResult.h>
#include <aws/cloudformation/model/ListTypeRegistrationsRequest.h>
#include <aws/cloudformation/model/ListTypeRegistrationsResult.h>
#include <aws/cloudformation/model/ListTypeVersionsRequest.h>
#include <aws/cloudformation/model/ListTypeVersionsResult.h>
#include <aws/cloudformation/model/ListTypesRequest.h>
#include <aws/cloudformation/model/ListTypesResult.h>
#include <aws/cloudformation/model/LoggingConfig.h>
#include <aws/cloudformation/model/ManagedExecution.h>
#include <aws/cloudformation/model/ModuleInfo.h>
#include <aws/cloudformation/model/OnFailure.h>
#include <aws/cloudformation/model/OnStackFailure.h>
#include <aws/cloudformation/model/OperationResultFilter.h>
#include <aws/cloudformation/model/OperationResultFilterName.h>
#include <aws/cloudformation/model/OperationStatus.h>
#include <aws/cloudformation/model/OrganizationStatus.h>
#include <aws/cloudformation/model/Output.h>
#include <aws/cloudformation/model/Parameter.h>
#include <aws/cloudformation/model/ParameterConstraints.h>
#include <aws/cloudformation/model/ParameterDeclaration.h>
#include <aws/cloudformation/model/PermissionModels.h>
#include <aws/cloudformation/model/PhysicalResourceIdContextKeyValuePair.h>
#include <aws/cloudformation/model/PolicyAction.h>
#include <aws/cloudformation/model/PropertyDifference.h>
#include <aws/cloudformation/model/ProvisioningType.h>
#include <aws/cloudformation/model/PublishTypeRequest.h>
#include <aws/cloudformation/model/PublishTypeResult.h>
#include <aws/cloudformation/model/PublisherStatus.h>
#include <aws/cloudformation/model/RecordHandlerProgressRequest.h>
#include <aws/cloudformation/model/RecordHandlerProgressResult.h>
#include <aws/cloudformation/model/RegionConcurrencyType.h>
#include <aws/cloudformation/model/RegisterPublisherRequest.h>
#include <aws/cloudformation/model/RegisterPublisherResult.h>
#include <aws/cloudformation/model/RegisterTypeRequest.h>
#include <aws/cloudformation/model/RegisterTypeResult.h>
#include <aws/cloudformation/model/RegistrationStatus.h>
#include <aws/cloudformation/model/RegistryType.h>
#include <aws/cloudformation/model/Replacement.h>
#include <aws/cloudformation/model/RequiredActivatedType.h>
#include <aws/cloudformation/model/RequiresRecreation.h>
#include <aws/cloudformation/model/ResourceAttribute.h>
#include <aws/cloudformation/model/ResourceChange.h>
#include <aws/cloudformation/model/ResourceChangeDetail.h>
#include <aws/cloudformation/model/ResourceDefinition.h>
#include <aws/cloudformation/model/ResourceDetail.h>
#include <aws/cloudformation/model/ResourceIdentifierSummary.h>
#include <aws/cloudformation/model/ResourceLocation.h>
#include <aws/cloudformation/model/ResourceMapping.h>
#include <aws/cloudformation/model/ResourceScanStatus.h>
#include <aws/cloudformation/model/ResourceScanSummary.h>
#include <aws/cloudformation/model/ResourceSignalStatus.h>
#include <aws/cloudformation/model/ResourceStatus.h>
#include <aws/cloudformation/model/ResourceTargetDefinition.h>
#include <aws/cloudformation/model/ResourceToImport.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/RollbackConfiguration.h>
#include <aws/cloudformation/model/RollbackStackRequest.h>
#include <aws/cloudformation/model/RollbackStackResult.h>
#include <aws/cloudformation/model/RollbackTrigger.h>
#include <aws/cloudformation/model/ScanFilter.h>
#include <aws/cloudformation/model/ScanType.h>
#include <aws/cloudformation/model/ScannedResource.h>
#include <aws/cloudformation/model/ScannedResourceIdentifier.h>
#include <aws/cloudformation/model/SetStackPolicyRequest.h>
#include <aws/cloudformation/model/SetTypeConfigurationRequest.h>
#include <aws/cloudformation/model/SetTypeConfigurationResult.h>
#include <aws/cloudformation/model/SetTypeDefaultVersionRequest.h>
#include <aws/cloudformation/model/SetTypeDefaultVersionResult.h>
#include <aws/cloudformation/model/SignalResourceRequest.h>
#include <aws/cloudformation/model/Stack.h>
#include <aws/cloudformation/model/StackDefinition.h>
#include <aws/cloudformation/model/StackDriftDetectionStatus.h>
#include <aws/cloudformation/model/StackDriftInformation.h>
#include <aws/cloudformation/model/StackDriftInformationSummary.h>
#include <aws/cloudformation/model/StackDriftStatus.h>
#include <aws/cloudformation/model/StackEvent.h>
#include <aws/cloudformation/model/StackInstance.h>
#include <aws/cloudformation/model/StackInstanceComprehensiveStatus.h>
#include <aws/cloudformation/model/StackInstanceDetailedStatus.h>
#include <aws/cloudformation/model/StackInstanceFilter.h>
#include <aws/cloudformation/model/StackInstanceFilterName.h>
#include <aws/cloudformation/model/StackInstanceResourceDriftsSummary.h>
#include <aws/cloudformation/model/StackInstanceStatus.h>
#include <aws/cloudformation/model/StackInstanceSummary.h>
#include <aws/cloudformation/model/StackRefactorAction.h>
#include <aws/cloudformation/model/StackRefactorActionEntity.h>
#include <aws/cloudformation/model/StackRefactorActionType.h>
#include <aws/cloudformation/model/StackRefactorDetection.h>
#include <aws/cloudformation/model/StackRefactorExecutionStatus.h>
#include <aws/cloudformation/model/StackRefactorStatus.h>
#include <aws/cloudformation/model/StackRefactorSummary.h>
#include <aws/cloudformation/model/StackResource.h>
#include <aws/cloudformation/model/StackResourceDetail.h>
#include <aws/cloudformation/model/StackResourceDrift.h>
#include <aws/cloudformation/model/StackResourceDriftInformation.h>
#include <aws/cloudformation/model/StackResourceDriftInformationSummary.h>
#include <aws/cloudformation/model/StackResourceDriftStatus.h>
#include <aws/cloudformation/model/StackResourceSummary.h>
#include <aws/cloudformation/model/StackSet.h>
#include <aws/cloudformation/model/StackSetAutoDeploymentTargetSummary.h>
#include <aws/cloudformation/model/StackSetDriftDetectionDetails.h>
#include <aws/cloudformation/model/StackSetDriftDetectionStatus.h>
#include <aws/cloudformation/model/StackSetDriftStatus.h>
#include <aws/cloudformation/model/StackSetOperation.h>
#include <aws/cloudformation/model/StackSetOperationAction.h>
#include <aws/cloudformation/model/StackSetOperationPreferences.h>
#include <aws/cloudformation/model/StackSetOperationResultStatus.h>
#include <aws/cloudformation/model/StackSetOperationResultSummary.h>
#include <aws/cloudformation/model/StackSetOperationStatus.h>
#include <aws/cloudformation/model/StackSetOperationStatusDetails.h>
#include <aws/cloudformation/model/StackSetOperationSummary.h>
#include <aws/cloudformation/model/StackSetStatus.h>
#include <aws/cloudformation/model/StackSetSummary.h>
#include <aws/cloudformation/model/StackStatus.h>
#include <aws/cloudformation/model/StackSummary.h>
#include <aws/cloudformation/model/StartResourceScanRequest.h>
#include <aws/cloudformation/model/StartResourceScanResult.h>
#include <aws/cloudformation/model/StopStackSetOperationRequest.h>
#include <aws/cloudformation/model/StopStackSetOperationResult.h>
#include <aws/cloudformation/model/Tag.h>
#include <aws/cloudformation/model/TemplateConfiguration.h>
#include <aws/cloudformation/model/TemplateFormat.h>
#include <aws/cloudformation/model/TemplateParameter.h>
#include <aws/cloudformation/model/TemplateProgress.h>
#include <aws/cloudformation/model/TemplateStage.h>
#include <aws/cloudformation/model/TemplateSummary.h>
#include <aws/cloudformation/model/TemplateSummaryConfig.h>
#include <aws/cloudformation/model/TestTypeRequest.h>
#include <aws/cloudformation/model/TestTypeResult.h>
#include <aws/cloudformation/model/ThirdPartyType.h>
#include <aws/cloudformation/model/TypeConfigurationDetails.h>
#include <aws/cloudformation/model/TypeConfigurationIdentifier.h>
#include <aws/cloudformation/model/TypeFilters.h>
#include <aws/cloudformation/model/TypeSummary.h>
#include <aws/cloudformation/model/TypeTestsStatus.h>
#include <aws/cloudformation/model/TypeVersionSummary.h>
#include <aws/cloudformation/model/UpdateGeneratedTemplateRequest.h>
#include <aws/cloudformation/model/UpdateGeneratedTemplateResult.h>
#include <aws/cloudformation/model/UpdateStackInstancesRequest.h>
#include <aws/cloudformation/model/UpdateStackInstancesResult.h>
#include <aws/cloudformation/model/UpdateStackRequest.h>
#include <aws/cloudformation/model/UpdateStackResult.h>
#include <aws/cloudformation/model/UpdateStackSetRequest.h>
#include <aws/cloudformation/model/UpdateStackSetResult.h>
#include <aws/cloudformation/model/UpdateTerminationProtectionRequest.h>
#include <aws/cloudformation/model/UpdateTerminationProtectionResult.h>
#include <aws/cloudformation/model/ValidateTemplateRequest.h>
#include <aws/cloudformation/model/ValidateTemplateResult.h>
#include <aws/cloudformation/model/VersionBump.h>
#include <aws/cloudformation/model/Visibility.h>
#include <aws/cloudformation/model/WarningDetail.h>
#include <aws/cloudformation/model/WarningProperty.h>
#include <aws/cloudformation/model/WarningType.h>
#include <aws/cloudformation/model/Warnings.h>

using CloudFormationIncludeTest = ::testing::Test;

TEST_F(CloudFormationIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::CloudFormation::CloudFormationClient>("CloudFormationIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
