/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ssm/SSMErrors.h>
#include <aws/ssm/model/OpsItemRelatedItemAlreadyExistsException.h>
#include <aws/ssm/model/ResourcePolicyLimitExceededException.h>
#include <aws/ssm/model/ResourceDataSyncNotFoundException.h>
#include <aws/ssm/model/OpsItemAlreadyExistsException.h>
#include <aws/ssm/model/ResourcePolicyInvalidParameterException.h>
#include <aws/ssm/model/ItemSizeLimitExceededException.h>
#include <aws/ssm/model/UnsupportedInventoryItemContextException.h>
#include <aws/ssm/model/ResourceDataSyncAlreadyExistsException.h>
#include <aws/ssm/model/OpsItemLimitExceededException.h>
#include <aws/ssm/model/ItemContentMismatchException.h>
#include <aws/ssm/model/InvalidItemContentException.h>
#include <aws/ssm/model/OpsItemInvalidParameterException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SSM;
using namespace Aws::SSM::Model;

namespace Aws
{
namespace SSM
{
template<> AWS_SSM_API OpsItemRelatedItemAlreadyExistsException SSMError::GetModeledError()
{
  assert(this->GetErrorType() == SSMErrors::OPS_ITEM_RELATED_ITEM_ALREADY_EXISTS);
  return OpsItemRelatedItemAlreadyExistsException(this->GetJsonPayload().View());
}

template<> AWS_SSM_API ResourcePolicyLimitExceededException SSMError::GetModeledError()
{
  assert(this->GetErrorType() == SSMErrors::RESOURCE_POLICY_LIMIT_EXCEEDED);
  return ResourcePolicyLimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_SSM_API ResourceDataSyncNotFoundException SSMError::GetModeledError()
{
  assert(this->GetErrorType() == SSMErrors::RESOURCE_DATA_SYNC_NOT_FOUND);
  return ResourceDataSyncNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_SSM_API OpsItemAlreadyExistsException SSMError::GetModeledError()
{
  assert(this->GetErrorType() == SSMErrors::OPS_ITEM_ALREADY_EXISTS);
  return OpsItemAlreadyExistsException(this->GetJsonPayload().View());
}

template<> AWS_SSM_API ResourcePolicyInvalidParameterException SSMError::GetModeledError()
{
  assert(this->GetErrorType() == SSMErrors::RESOURCE_POLICY_INVALID_PARAMETER);
  return ResourcePolicyInvalidParameterException(this->GetJsonPayload().View());
}

template<> AWS_SSM_API ItemSizeLimitExceededException SSMError::GetModeledError()
{
  assert(this->GetErrorType() == SSMErrors::ITEM_SIZE_LIMIT_EXCEEDED);
  return ItemSizeLimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_SSM_API UnsupportedInventoryItemContextException SSMError::GetModeledError()
{
  assert(this->GetErrorType() == SSMErrors::UNSUPPORTED_INVENTORY_ITEM_CONTEXT);
  return UnsupportedInventoryItemContextException(this->GetJsonPayload().View());
}

template<> AWS_SSM_API ResourceDataSyncAlreadyExistsException SSMError::GetModeledError()
{
  assert(this->GetErrorType() == SSMErrors::RESOURCE_DATA_SYNC_ALREADY_EXISTS);
  return ResourceDataSyncAlreadyExistsException(this->GetJsonPayload().View());
}

template<> AWS_SSM_API OpsItemLimitExceededException SSMError::GetModeledError()
{
  assert(this->GetErrorType() == SSMErrors::OPS_ITEM_LIMIT_EXCEEDED);
  return OpsItemLimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_SSM_API ItemContentMismatchException SSMError::GetModeledError()
{
  assert(this->GetErrorType() == SSMErrors::ITEM_CONTENT_MISMATCH);
  return ItemContentMismatchException(this->GetJsonPayload().View());
}

template<> AWS_SSM_API InvalidItemContentException SSMError::GetModeledError()
{
  assert(this->GetErrorType() == SSMErrors::INVALID_ITEM_CONTENT);
  return InvalidItemContentException(this->GetJsonPayload().View());
}

template<> AWS_SSM_API OpsItemInvalidParameterException SSMError::GetModeledError()
{
  assert(this->GetErrorType() == SSMErrors::OPS_ITEM_INVALID_PARAMETER);
  return OpsItemInvalidParameterException(this->GetJsonPayload().View());
}

namespace SSMErrorMapper
{

static constexpr uint32_t INVALID_OUTPUT_LOCATION_HASH = ConstExprHashingUtils::HashString("InvalidOutputLocation");
static constexpr uint32_t RESOURCE_DATA_SYNC_COUNT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ResourceDataSyncCountExceededException");
static constexpr uint32_t PARAMETER_VERSION_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ParameterVersionNotFound");
static constexpr uint32_t INVALID_POLICY_TYPE_HASH = ConstExprHashingUtils::HashString("InvalidPolicyTypeException");
static constexpr uint32_t INVALID_AGGREGATOR_HASH = ConstExprHashingUtils::HashString("InvalidAggregatorException");
static constexpr uint32_t INVALID_INVENTORY_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidInventoryRequestException");
static constexpr uint32_t DUPLICATE_DOCUMENT_VERSION_NAME_HASH = ConstExprHashingUtils::HashString("DuplicateDocumentVersionName");
static constexpr uint32_t OPS_METADATA_INVALID_ARGUMENT_HASH = ConstExprHashingUtils::HashString("OpsMetadataInvalidArgumentException");
static constexpr uint32_t INVALID_TYPE_NAME_HASH = ConstExprHashingUtils::HashString("InvalidTypeNameException");
static constexpr uint32_t UNSUPPORTED_INVENTORY_SCHEMA_VERSION_HASH = ConstExprHashingUtils::HashString("UnsupportedInventorySchemaVersionException");
static constexpr uint32_t ASSOCIATION_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("AssociationDoesNotExist");
static constexpr uint32_t ASSOCIATION_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("AssociationLimitExceeded");
static constexpr uint32_t INVALID_OPTION_HASH = ConstExprHashingUtils::HashString("InvalidOptionException");
static constexpr uint32_t PARAMETER_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ParameterLimitExceeded");
static constexpr uint32_t SUB_TYPE_COUNT_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("SubTypeCountLimitExceededException");
static constexpr uint32_t ASSOCIATION_VERSION_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("AssociationVersionLimitExceeded");
static constexpr uint32_t INVALID_PERMISSION_TYPE_HASH = ConstExprHashingUtils::HashString("InvalidPermissionType");
static constexpr uint32_t INCOMPATIBLE_POLICY_HASH = ConstExprHashingUtils::HashString("IncompatiblePolicyException");
static constexpr uint32_t INVALID_ASSOCIATION_VERSION_HASH = ConstExprHashingUtils::HashString("InvalidAssociationVersion");
static constexpr uint32_t OPS_ITEM_RELATED_ITEM_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("OpsItemRelatedItemAlreadyExistsException");
static constexpr uint32_t PARAMETER_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ParameterNotFound");
static constexpr uint32_t INVALID_DOCUMENT_TYPE_HASH = ConstExprHashingUtils::HashString("InvalidDocumentType");
static constexpr uint32_t RESOURCE_POLICY_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ResourcePolicyLimitExceededException");
static constexpr uint32_t RESOURCE_POLICY_CONFLICT_HASH = ConstExprHashingUtils::HashString("ResourcePolicyConflictException");
static constexpr uint32_t PARAMETER_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ParameterAlreadyExists");
static constexpr uint32_t HIERARCHY_LEVEL_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("HierarchyLevelLimitExceededException");
static constexpr uint32_t DOCUMENT_VERSION_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("DocumentVersionLimitExceeded");
static constexpr uint32_t RESOURCE_DATA_SYNC_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ResourceDataSyncNotFoundException");
static constexpr uint32_t INVALID_FILTER_VALUE_HASH = ConstExprHashingUtils::HashString("InvalidFilterValue");
static constexpr uint32_t OPS_ITEM_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("OpsItemAlreadyExistsException");
static constexpr uint32_t INVALID_DELETE_INVENTORY_PARAMETERS_HASH = ConstExprHashingUtils::HashString("InvalidDeleteInventoryParametersException");
static constexpr uint32_t OPS_METADATA_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("OpsMetadataLimitExceededException");
static constexpr uint32_t FEATURE_NOT_AVAILABLE_HASH = ConstExprHashingUtils::HashString("FeatureNotAvailableException");
static constexpr uint32_t INVALID_PLUGIN_NAME_HASH = ConstExprHashingUtils::HashString("InvalidPluginName");
static constexpr uint32_t INVALID_DOCUMENT_HASH = ConstExprHashingUtils::HashString("InvalidDocument");
static constexpr uint32_t INVALID_AUTOMATION_SIGNAL_HASH = ConstExprHashingUtils::HashString("InvalidAutomationSignalException");
static constexpr uint32_t RESOURCE_POLICY_INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("ResourcePolicyInvalidParameterException");
static constexpr uint32_t AUTOMATION_DEFINITION_NOT_APPROVED_HASH = ConstExprHashingUtils::HashString("AutomationDefinitionNotApprovedException");
static constexpr uint32_t AUTOMATION_EXECUTION_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("AutomationExecutionNotFoundException");
static constexpr uint32_t INVALID_INVENTORY_ITEM_CONTEXT_HASH = ConstExprHashingUtils::HashString("InvalidInventoryItemContextException");
static constexpr uint32_t RESOURCE_IN_USE_HASH = ConstExprHashingUtils::HashString("ResourceInUseException");
static constexpr uint32_t ASSOCIATION_EXECUTION_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("AssociationExecutionDoesNotExist");
static constexpr uint32_t INVALID_RESOURCE_ID_HASH = ConstExprHashingUtils::HashString("InvalidResourceId");
static constexpr uint32_t INVALID_INSTANCE_ID_HASH = ConstExprHashingUtils::HashString("InvalidInstanceId");
static constexpr uint32_t ASSOCIATED_INSTANCES_HASH = ConstExprHashingUtils::HashString("AssociatedInstances");
static constexpr uint32_t OPS_METADATA_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("OpsMetadataAlreadyExistsException");
static constexpr uint32_t TARGET_IN_USE_HASH = ConstExprHashingUtils::HashString("TargetInUseException");
static constexpr uint32_t INVALID_KEY_ID_HASH = ConstExprHashingUtils::HashString("InvalidKeyId");
static constexpr uint32_t ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("AlreadyExistsException");
static constexpr uint32_t ITEM_SIZE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ItemSizeLimitExceededException");
static constexpr uint32_t OPS_METADATA_TOO_MANY_UPDATES_HASH = ConstExprHashingUtils::HashString("OpsMetadataTooManyUpdatesException");
static constexpr uint32_t PARAMETER_VERSION_LABEL_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ParameterVersionLabelLimitExceeded");
static constexpr uint32_t INVALID_RESOURCE_TYPE_HASH = ConstExprHashingUtils::HashString("InvalidResourceType");
static constexpr uint32_t OPS_ITEM_RELATED_ITEM_ASSOCIATION_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("OpsItemRelatedItemAssociationNotFoundException");
static constexpr uint32_t DOCUMENT_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("DocumentLimitExceeded");
static constexpr uint32_t ASSOCIATION_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("AssociationAlreadyExists");
static constexpr uint32_t INVALID_NEXT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidNextToken");
static constexpr uint32_t UNSUPPORTED_OPERATING_SYSTEM_HASH = ConstExprHashingUtils::HashString("UnsupportedOperatingSystem");
static constexpr uint32_t AUTOMATION_EXECUTION_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("AutomationExecutionLimitExceededException");
static constexpr uint32_t INVALID_DELETION_ID_HASH = ConstExprHashingUtils::HashString("InvalidDeletionIdException");
static constexpr uint32_t INVALID_TARGET_HASH = ConstExprHashingUtils::HashString("InvalidTarget");
static constexpr uint32_t INVALID_DOCUMENT_CONTENT_HASH = ConstExprHashingUtils::HashString("InvalidDocumentContent");
static constexpr uint32_t UNSUPPORTED_INVENTORY_ITEM_CONTEXT_HASH = ConstExprHashingUtils::HashString("UnsupportedInventoryItemContextException");
static constexpr uint32_t INVALID_POLICY_ATTRIBUTE_HASH = ConstExprHashingUtils::HashString("InvalidPolicyAttributeException");
static constexpr uint32_t AUTOMATION_DEFINITION_VERSION_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("AutomationDefinitionVersionNotFoundException");
static constexpr uint32_t COMPLIANCE_TYPE_COUNT_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ComplianceTypeCountLimitExceededException");
static constexpr uint32_t PARAMETER_MAX_VERSION_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ParameterMaxVersionLimitExceeded");
static constexpr uint32_t OPS_ITEM_ACCESS_DENIED_HASH = ConstExprHashingUtils::HashString("OpsItemAccessDeniedException");
static constexpr uint32_t AUTOMATION_STEP_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("AutomationStepNotFoundException");
static constexpr uint32_t RESOURCE_DATA_SYNC_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ResourceDataSyncAlreadyExistsException");
static constexpr uint32_t INVALID_RESULT_ATTRIBUTE_HASH = ConstExprHashingUtils::HashString("InvalidResultAttributeException");
static constexpr uint32_t UNSUPPORTED_FEATURE_REQUIRED_HASH = ConstExprHashingUtils::HashString("UnsupportedFeatureRequiredException");
static constexpr uint32_t STATUS_UNCHANGED_HASH = ConstExprHashingUtils::HashString("StatusUnchanged");
static constexpr uint32_t OPS_ITEM_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("OpsItemLimitExceededException");
static constexpr uint32_t DUPLICATE_INSTANCE_ID_HASH = ConstExprHashingUtils::HashString("DuplicateInstanceId");
static constexpr uint32_t DUPLICATE_DOCUMENT_CONTENT_HASH = ConstExprHashingUtils::HashString("DuplicateDocumentContent");
static constexpr uint32_t INVALID_OUTPUT_FOLDER_HASH = ConstExprHashingUtils::HashString("InvalidOutputFolder");
static constexpr uint32_t TOO_MANY_UPDATES_HASH = ConstExprHashingUtils::HashString("TooManyUpdates");
static constexpr uint32_t INVALID_DOCUMENT_SCHEMA_VERSION_HASH = ConstExprHashingUtils::HashString("InvalidDocumentSchemaVersion");
static constexpr uint32_t INVALID_AUTOMATION_STATUS_UPDATE_HASH = ConstExprHashingUtils::HashString("InvalidAutomationStatusUpdateException");
static constexpr uint32_t INVALID_AUTOMATION_EXECUTION_PARAMETERS_HASH = ConstExprHashingUtils::HashString("InvalidAutomationExecutionParametersException");
static constexpr uint32_t ITEM_CONTENT_MISMATCH_HASH = ConstExprHashingUtils::HashString("ItemContentMismatchException");
static constexpr uint32_t PARAMETER_PATTERN_MISMATCH_HASH = ConstExprHashingUtils::HashString("ParameterPatternMismatchException");
static constexpr uint32_t INVALID_INSTANCE_INFORMATION_FILTER_VALUE_HASH = ConstExprHashingUtils::HashString("InvalidInstanceInformationFilterValue");
static constexpr uint32_t INVALID_COMMAND_ID_HASH = ConstExprHashingUtils::HashString("InvalidCommandId");
static constexpr uint32_t INVALID_TARGET_MAPS_HASH = ConstExprHashingUtils::HashString("InvalidTargetMaps");
static constexpr uint32_t INVOCATION_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("InvocationDoesNotExist");
static constexpr uint32_t TOTAL_SIZE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("TotalSizeLimitExceededException");
static constexpr uint32_t AUTOMATION_DEFINITION_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("AutomationDefinitionNotFoundException");
static constexpr uint32_t CUSTOM_SCHEMA_COUNT_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("CustomSchemaCountLimitExceededException");
static constexpr uint32_t INVALID_ALLOWED_PATTERN_HASH = ConstExprHashingUtils::HashString("InvalidAllowedPatternException");
static constexpr uint32_t INVALID_ROLE_HASH = ConstExprHashingUtils::HashString("InvalidRole");
static constexpr uint32_t INVALID_PARAMETERS_HASH = ConstExprHashingUtils::HashString("InvalidParameters");
static constexpr uint32_t TOO_MANY_TAGS_HASH = ConstExprHashingUtils::HashString("TooManyTagsError");
static constexpr uint32_t RESOURCE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ResourceLimitExceededException");
static constexpr uint32_t INVALID_ACTIVATION_HASH = ConstExprHashingUtils::HashString("InvalidActivation");
static constexpr uint32_t RESOURCE_DATA_SYNC_INVALID_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("ResourceDataSyncInvalidConfigurationException");
static constexpr uint32_t INVALID_ASSOCIATION_HASH = ConstExprHashingUtils::HashString("InvalidAssociation");
static constexpr uint32_t HIERARCHY_TYPE_MISMATCH_HASH = ConstExprHashingUtils::HashString("HierarchyTypeMismatchException");
static constexpr uint32_t DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("DoesNotExistException");
static constexpr uint32_t INVALID_DOCUMENT_OPERATION_HASH = ConstExprHashingUtils::HashString("InvalidDocumentOperation");
static constexpr uint32_t OPS_METADATA_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("OpsMetadataNotFoundException");
static constexpr uint32_t OPS_ITEM_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("OpsItemNotFoundException");
static constexpr uint32_t INVALID_UPDATE_HASH = ConstExprHashingUtils::HashString("InvalidUpdate");
static constexpr uint32_t INVALID_FILTER_OPTION_HASH = ConstExprHashingUtils::HashString("InvalidFilterOption");
static constexpr uint32_t INVALID_ITEM_CONTENT_HASH = ConstExprHashingUtils::HashString("InvalidItemContentException");
static constexpr uint32_t TARGET_NOT_CONNECTED_HASH = ConstExprHashingUtils::HashString("TargetNotConnected");
static constexpr uint32_t DOCUMENT_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("DocumentAlreadyExists");
static constexpr uint32_t UNSUPPORTED_CALENDAR_HASH = ConstExprHashingUtils::HashString("UnsupportedCalendarException");
static constexpr uint32_t INVALID_DOCUMENT_VERSION_HASH = ConstExprHashingUtils::HashString("InvalidDocumentVersion");
static constexpr uint32_t INVALID_NOTIFICATION_CONFIG_HASH = ConstExprHashingUtils::HashString("InvalidNotificationConfig");
static constexpr uint32_t INVALID_TAG_HASH = ConstExprHashingUtils::HashString("InvalidTag");
static constexpr uint32_t INVALID_SCHEDULE_HASH = ConstExprHashingUtils::HashString("InvalidSchedule");
static constexpr uint32_t INVALID_ACTIVATION_ID_HASH = ConstExprHashingUtils::HashString("InvalidActivationId");
static constexpr uint32_t RESOURCE_DATA_SYNC_CONFLICT_HASH = ConstExprHashingUtils::HashString("ResourceDataSyncConflictException");
static constexpr uint32_t OPS_METADATA_KEY_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("OpsMetadataKeyLimitExceededException");
static constexpr uint32_t INVALID_FILTER_HASH = ConstExprHashingUtils::HashString("InvalidFilter");
static constexpr uint32_t OPS_ITEM_INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("OpsItemInvalidParameterException");
static constexpr uint32_t INVALID_INVENTORY_GROUP_HASH = ConstExprHashingUtils::HashString("InvalidInventoryGroupException");
static constexpr uint32_t POLICIES_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("PoliciesLimitExceededException");
static constexpr uint32_t UNSUPPORTED_PARAMETER_TYPE_HASH = ConstExprHashingUtils::HashString("UnsupportedParameterType");
static constexpr uint32_t MAX_DOCUMENT_SIZE_EXCEEDED_HASH = ConstExprHashingUtils::HashString("MaxDocumentSizeExceeded");
static constexpr uint32_t INVALID_FILTER_KEY_HASH = ConstExprHashingUtils::HashString("InvalidFilterKey");
static constexpr uint32_t IDEMPOTENT_PARAMETER_MISMATCH_HASH = ConstExprHashingUtils::HashString("IdempotentParameterMismatch");
static constexpr uint32_t UNSUPPORTED_PLATFORM_TYPE_HASH = ConstExprHashingUtils::HashString("UnsupportedPlatformType");
static constexpr uint32_t SERVICE_SETTING_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ServiceSettingNotFound");
static constexpr uint32_t DOCUMENT_PERMISSION_LIMIT_HASH = ConstExprHashingUtils::HashString("DocumentPermissionLimit");


/*
The if-else chains in this file are converted into a jump table by the compiler,
which allows constant time lookup. The chain has been broken into helper functions
because MSVC has a maximum of 122 chained if-else blocks.
*/

static bool GetErrorForNameHelper0(uint32_t hashCode, AWSError<CoreErrors>& error)
{
  if (hashCode == INVALID_OUTPUT_LOCATION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_OUTPUT_LOCATION), false);
    return true;
  }
  else if (hashCode == RESOURCE_DATA_SYNC_COUNT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::RESOURCE_DATA_SYNC_COUNT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == PARAMETER_VERSION_NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::PARAMETER_VERSION_NOT_FOUND), false);
    return true;
  }
  else if (hashCode == INVALID_POLICY_TYPE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_POLICY_TYPE), false);
    return true;
  }
  else if (hashCode == INVALID_AGGREGATOR_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_AGGREGATOR), false);
    return true;
  }
  else if (hashCode == INVALID_INVENTORY_REQUEST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_INVENTORY_REQUEST), false);
    return true;
  }
  else if (hashCode == DUPLICATE_DOCUMENT_VERSION_NAME_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::DUPLICATE_DOCUMENT_VERSION_NAME), false);
    return true;
  }
  else if (hashCode == OPS_METADATA_INVALID_ARGUMENT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_METADATA_INVALID_ARGUMENT), false);
    return true;
  }
  else if (hashCode == INVALID_TYPE_NAME_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_TYPE_NAME), false);
    return true;
  }
  else if (hashCode == UNSUPPORTED_INVENTORY_SCHEMA_VERSION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::UNSUPPORTED_INVENTORY_SCHEMA_VERSION), false);
    return true;
  }
  else if (hashCode == ASSOCIATION_DOES_NOT_EXIST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ASSOCIATION_DOES_NOT_EXIST), false);
    return true;
  }
  else if (hashCode == ASSOCIATION_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ASSOCIATION_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_OPTION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_OPTION), false);
    return true;
  }
  else if (hashCode == PARAMETER_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::PARAMETER_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == SUB_TYPE_COUNT_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::SUB_TYPE_COUNT_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == ASSOCIATION_VERSION_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ASSOCIATION_VERSION_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_PERMISSION_TYPE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_PERMISSION_TYPE), false);
    return true;
  }
  else if (hashCode == INCOMPATIBLE_POLICY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INCOMPATIBLE_POLICY), false);
    return true;
  }
  else if (hashCode == INVALID_ASSOCIATION_VERSION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_ASSOCIATION_VERSION), false);
    return true;
  }
  else if (hashCode == OPS_ITEM_RELATED_ITEM_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_ITEM_RELATED_ITEM_ALREADY_EXISTS), false);
    return true;
  }
  else if (hashCode == PARAMETER_NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::PARAMETER_NOT_FOUND), false);
    return true;
  }
  else if (hashCode == INVALID_DOCUMENT_TYPE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_DOCUMENT_TYPE), false);
    return true;
  }
  else if (hashCode == RESOURCE_POLICY_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::RESOURCE_POLICY_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == RESOURCE_POLICY_CONFLICT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::RESOURCE_POLICY_CONFLICT), false);
    return true;
  }
  else if (hashCode == PARAMETER_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::PARAMETER_ALREADY_EXISTS), false);
    return true;
  }
  else if (hashCode == HIERARCHY_LEVEL_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::HIERARCHY_LEVEL_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == DOCUMENT_VERSION_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::DOCUMENT_VERSION_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == RESOURCE_DATA_SYNC_NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::RESOURCE_DATA_SYNC_NOT_FOUND), false);
    return true;
  }
  else if (hashCode == INVALID_FILTER_VALUE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_FILTER_VALUE), false);
    return true;
  }
  else if (hashCode == OPS_ITEM_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_ITEM_ALREADY_EXISTS), false);
    return true;
  }
  else if (hashCode == INVALID_DELETE_INVENTORY_PARAMETERS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_DELETE_INVENTORY_PARAMETERS), false);
    return true;
  }
  else if (hashCode == OPS_METADATA_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_METADATA_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == FEATURE_NOT_AVAILABLE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::FEATURE_NOT_AVAILABLE), false);
    return true;
  }
  else if (hashCode == INVALID_PLUGIN_NAME_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_PLUGIN_NAME), false);
    return true;
  }
  else if (hashCode == INVALID_DOCUMENT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_DOCUMENT), false);
    return true;
  }
  else if (hashCode == INVALID_AUTOMATION_SIGNAL_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_AUTOMATION_SIGNAL), false);
    return true;
  }
  else if (hashCode == RESOURCE_POLICY_INVALID_PARAMETER_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::RESOURCE_POLICY_INVALID_PARAMETER), false);
    return true;
  }
  else if (hashCode == AUTOMATION_DEFINITION_NOT_APPROVED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::AUTOMATION_DEFINITION_NOT_APPROVED), false);
    return true;
  }
  else if (hashCode == AUTOMATION_EXECUTION_NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::AUTOMATION_EXECUTION_NOT_FOUND), false);
    return true;
  }
  else if (hashCode == INVALID_INVENTORY_ITEM_CONTEXT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_INVENTORY_ITEM_CONTEXT), false);
    return true;
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::RESOURCE_IN_USE), false);
    return true;
  }
  else if (hashCode == ASSOCIATION_EXECUTION_DOES_NOT_EXIST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ASSOCIATION_EXECUTION_DOES_NOT_EXIST), false);
    return true;
  }
  else if (hashCode == INVALID_RESOURCE_ID_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_RESOURCE_ID), false);
    return true;
  }
  else if (hashCode == INVALID_INSTANCE_ID_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_INSTANCE_ID), false);
    return true;
  }
  else if (hashCode == ASSOCIATED_INSTANCES_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ASSOCIATED_INSTANCES), false);
    return true;
  }
  else if (hashCode == OPS_METADATA_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_METADATA_ALREADY_EXISTS), false);
    return true;
  }
  else if (hashCode == TARGET_IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::TARGET_IN_USE), false);
    return true;
  }
  else if (hashCode == INVALID_KEY_ID_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_KEY_ID), false);
    return true;
  }
  else if (hashCode == ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ALREADY_EXISTS), false);
    return true;
  }
  else if (hashCode == ITEM_SIZE_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ITEM_SIZE_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == OPS_METADATA_TOO_MANY_UPDATES_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_METADATA_TOO_MANY_UPDATES), false);
    return true;
  }
  else if (hashCode == PARAMETER_VERSION_LABEL_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::PARAMETER_VERSION_LABEL_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_RESOURCE_TYPE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_RESOURCE_TYPE), false);
    return true;
  }
  else if (hashCode == OPS_ITEM_RELATED_ITEM_ASSOCIATION_NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_ITEM_RELATED_ITEM_ASSOCIATION_NOT_FOUND), false);
    return true;
  }
  else if (hashCode == DOCUMENT_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::DOCUMENT_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == ASSOCIATION_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ASSOCIATION_ALREADY_EXISTS), false);
    return true;
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_NEXT_TOKEN), false);
    return true;
  }
  else if (hashCode == UNSUPPORTED_OPERATING_SYSTEM_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::UNSUPPORTED_OPERATING_SYSTEM), false);
    return true;
  }
  else if (hashCode == AUTOMATION_EXECUTION_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::AUTOMATION_EXECUTION_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_DELETION_ID_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_DELETION_ID), false);
    return true;
  }
  else if (hashCode == INVALID_TARGET_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_TARGET), false);
    return true;
  }
  else if (hashCode == INVALID_DOCUMENT_CONTENT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_DOCUMENT_CONTENT), false);
    return true;
  }
  else if (hashCode == UNSUPPORTED_INVENTORY_ITEM_CONTEXT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::UNSUPPORTED_INVENTORY_ITEM_CONTEXT), false);
    return true;
  }
  else if (hashCode == INVALID_POLICY_ATTRIBUTE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_POLICY_ATTRIBUTE), false);
    return true;
  }
  else if (hashCode == AUTOMATION_DEFINITION_VERSION_NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::AUTOMATION_DEFINITION_VERSION_NOT_FOUND), false);
    return true;
  }
  else if (hashCode == COMPLIANCE_TYPE_COUNT_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::COMPLIANCE_TYPE_COUNT_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == PARAMETER_MAX_VERSION_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::PARAMETER_MAX_VERSION_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == OPS_ITEM_ACCESS_DENIED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_ITEM_ACCESS_DENIED), false);
    return true;
  }
  else if (hashCode == AUTOMATION_STEP_NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::AUTOMATION_STEP_NOT_FOUND), false);
    return true;
  }
  else if (hashCode == RESOURCE_DATA_SYNC_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::RESOURCE_DATA_SYNC_ALREADY_EXISTS), false);
    return true;
  }
  else if (hashCode == INVALID_RESULT_ATTRIBUTE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_RESULT_ATTRIBUTE), false);
    return true;
  }
  else if (hashCode == UNSUPPORTED_FEATURE_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::UNSUPPORTED_FEATURE_REQUIRED), false);
    return true;
  }
  else if (hashCode == STATUS_UNCHANGED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::STATUS_UNCHANGED), false);
    return true;
  }
  else if (hashCode == OPS_ITEM_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_ITEM_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == DUPLICATE_INSTANCE_ID_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::DUPLICATE_INSTANCE_ID), false);
    return true;
  }
  else if (hashCode == DUPLICATE_DOCUMENT_CONTENT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::DUPLICATE_DOCUMENT_CONTENT), false);
    return true;
  }
  else if (hashCode == INVALID_OUTPUT_FOLDER_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_OUTPUT_FOLDER), false);
    return true;
  }
  else if (hashCode == TOO_MANY_UPDATES_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::TOO_MANY_UPDATES), false);
    return true;
  }
  else if (hashCode == INVALID_DOCUMENT_SCHEMA_VERSION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_DOCUMENT_SCHEMA_VERSION), false);
    return true;
  }
  else if (hashCode == INVALID_AUTOMATION_STATUS_UPDATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_AUTOMATION_STATUS_UPDATE), false);
    return true;
  }
  else if (hashCode == INVALID_AUTOMATION_EXECUTION_PARAMETERS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_AUTOMATION_EXECUTION_PARAMETERS), false);
    return true;
  }
  else if (hashCode == ITEM_CONTENT_MISMATCH_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ITEM_CONTENT_MISMATCH), false);
    return true;
  }
  else if (hashCode == PARAMETER_PATTERN_MISMATCH_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::PARAMETER_PATTERN_MISMATCH), false);
    return true;
  }
  else if (hashCode == INVALID_INSTANCE_INFORMATION_FILTER_VALUE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_INSTANCE_INFORMATION_FILTER_VALUE), false);
    return true;
  }
  else if (hashCode == INVALID_COMMAND_ID_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_COMMAND_ID), false);
    return true;
  }
  else if (hashCode == INVALID_TARGET_MAPS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_TARGET_MAPS), false);
    return true;
  }
  else if (hashCode == INVOCATION_DOES_NOT_EXIST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVOCATION_DOES_NOT_EXIST), false);
    return true;
  }
  else if (hashCode == TOTAL_SIZE_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::TOTAL_SIZE_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == AUTOMATION_DEFINITION_NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::AUTOMATION_DEFINITION_NOT_FOUND), false);
    return true;
  }
  else if (hashCode == CUSTOM_SCHEMA_COUNT_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::CUSTOM_SCHEMA_COUNT_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_ALLOWED_PATTERN_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_ALLOWED_PATTERN), false);
    return true;
  }
  else if (hashCode == INVALID_ROLE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_ROLE), false);
    return true;
  }
  else if (hashCode == INVALID_PARAMETERS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_PARAMETERS), false);
    return true;
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::TOO_MANY_TAGS), false);
    return true;
  }
  else if (hashCode == RESOURCE_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::RESOURCE_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_ACTIVATION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_ACTIVATION), false);
    return true;
  }
  else if (hashCode == RESOURCE_DATA_SYNC_INVALID_CONFIGURATION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::RESOURCE_DATA_SYNC_INVALID_CONFIGURATION), false);
    return true;
  }
  else if (hashCode == INVALID_ASSOCIATION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_ASSOCIATION), false);
    return true;
  }
  else if (hashCode == HIERARCHY_TYPE_MISMATCH_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::HIERARCHY_TYPE_MISMATCH), false);
    return true;
  }
  else if (hashCode == DOES_NOT_EXIST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::DOES_NOT_EXIST), false);
    return true;
  }
  else if (hashCode == INVALID_DOCUMENT_OPERATION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_DOCUMENT_OPERATION), false);
    return true;
  }
  else if (hashCode == OPS_METADATA_NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_METADATA_NOT_FOUND), false);
    return true;
  }
  else if (hashCode == OPS_ITEM_NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_ITEM_NOT_FOUND), false);
    return true;
  }
  else if (hashCode == INVALID_UPDATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_UPDATE), false);
    return true;
  }
  else if (hashCode == INVALID_FILTER_OPTION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_FILTER_OPTION), false);
    return true;
  }
  else if (hashCode == INVALID_ITEM_CONTENT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_ITEM_CONTENT), false);
    return true;
  }
  else if (hashCode == TARGET_NOT_CONNECTED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::TARGET_NOT_CONNECTED), false);
    return true;
  }
  else if (hashCode == DOCUMENT_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::DOCUMENT_ALREADY_EXISTS), false);
    return true;
  }
  else if (hashCode == UNSUPPORTED_CALENDAR_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::UNSUPPORTED_CALENDAR), false);
    return true;
  }
  else if (hashCode == INVALID_DOCUMENT_VERSION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_DOCUMENT_VERSION), false);
    return true;
  }
  else if (hashCode == INVALID_NOTIFICATION_CONFIG_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_NOTIFICATION_CONFIG), false);
    return true;
  }
  else if (hashCode == INVALID_TAG_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_TAG), false);
    return true;
  }
  else if (hashCode == INVALID_SCHEDULE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_SCHEDULE), false);
    return true;
  }
  else if (hashCode == INVALID_ACTIVATION_ID_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_ACTIVATION_ID), false);
    return true;
  }
  else if (hashCode == RESOURCE_DATA_SYNC_CONFLICT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::RESOURCE_DATA_SYNC_CONFLICT), false);
    return true;
  }
  else if (hashCode == OPS_METADATA_KEY_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_METADATA_KEY_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_FILTER_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_FILTER), false);
    return true;
  }
  else if (hashCode == OPS_ITEM_INVALID_PARAMETER_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_ITEM_INVALID_PARAMETER), false);
    return true;
  }
  else if (hashCode == INVALID_INVENTORY_GROUP_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_INVENTORY_GROUP), false);
    return true;
  }
  else if (hashCode == POLICIES_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::POLICIES_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == UNSUPPORTED_PARAMETER_TYPE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::UNSUPPORTED_PARAMETER_TYPE), false);
    return true;
  }
  else if (hashCode == MAX_DOCUMENT_SIZE_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::MAX_DOCUMENT_SIZE_EXCEEDED), false);
    return true;
  }
  return false;
}

static bool GetErrorForNameHelper1(uint32_t hashCode, AWSError<CoreErrors>& error)
{
  if (hashCode == INVALID_FILTER_KEY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_FILTER_KEY), false);
    return true;
  }
  else if (hashCode == IDEMPOTENT_PARAMETER_MISMATCH_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::IDEMPOTENT_PARAMETER_MISMATCH), false);
    return true;
  }
  else if (hashCode == UNSUPPORTED_PLATFORM_TYPE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::UNSUPPORTED_PLATFORM_TYPE), false);
    return true;
  }
  else if (hashCode == SERVICE_SETTING_NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::SERVICE_SETTING_NOT_FOUND), false);
    return true;
  }
  else if (hashCode == DOCUMENT_PERMISSION_LIMIT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::DOCUMENT_PERMISSION_LIMIT), false);
    return true;
  }
  return false;
}

AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);
  AWSError<CoreErrors> error;
  if (GetErrorForNameHelper0(hashCode, error))
  {
    return error;
  }
  else if (GetErrorForNameHelper1(hashCode, error))
  {
    return error;
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SSMErrorMapper
} // namespace SSM
} // namespace Aws
