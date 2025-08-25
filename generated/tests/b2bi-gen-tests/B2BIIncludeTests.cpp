/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/b2bi/B2BIClient.h>
#include <aws/b2bi/B2BIEndpointProvider.h>
#include <aws/b2bi/B2BIEndpointRules.h>
#include <aws/b2bi/B2BIErrorMarshaller.h>
#include <aws/b2bi/B2BIErrors.h>
#include <aws/b2bi/B2BIRequest.h>
#include <aws/b2bi/B2BIServiceClientModel.h>
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/model/AdvancedOptions.h>
#include <aws/b2bi/model/CapabilityConfiguration.h>
#include <aws/b2bi/model/CapabilityDirection.h>
#include <aws/b2bi/model/CapabilityOptions.h>
#include <aws/b2bi/model/CapabilitySummary.h>
#include <aws/b2bi/model/CapabilityType.h>
#include <aws/b2bi/model/ConversionSource.h>
#include <aws/b2bi/model/ConversionSourceFormat.h>
#include <aws/b2bi/model/ConversionTarget.h>
#include <aws/b2bi/model/ConversionTargetFormat.h>
#include <aws/b2bi/model/ConversionTargetFormatDetails.h>
#include <aws/b2bi/model/CreateCapabilityRequest.h>
#include <aws/b2bi/model/CreateCapabilityResult.h>
#include <aws/b2bi/model/CreatePartnershipRequest.h>
#include <aws/b2bi/model/CreatePartnershipResult.h>
#include <aws/b2bi/model/CreateProfileRequest.h>
#include <aws/b2bi/model/CreateProfileResult.h>
#include <aws/b2bi/model/CreateStarterMappingTemplateRequest.h>
#include <aws/b2bi/model/CreateStarterMappingTemplateResult.h>
#include <aws/b2bi/model/CreateTransformerRequest.h>
#include <aws/b2bi/model/CreateTransformerResult.h>
#include <aws/b2bi/model/DeleteCapabilityRequest.h>
#include <aws/b2bi/model/DeletePartnershipRequest.h>
#include <aws/b2bi/model/DeleteProfileRequest.h>
#include <aws/b2bi/model/DeleteTransformerRequest.h>
#include <aws/b2bi/model/EdiConfiguration.h>
#include <aws/b2bi/model/EdiType.h>
#include <aws/b2bi/model/ElementRequirement.h>
#include <aws/b2bi/model/FileFormat.h>
#include <aws/b2bi/model/FormatOptions.h>
#include <aws/b2bi/model/FromFormat.h>
#include <aws/b2bi/model/GenerateMappingRequest.h>
#include <aws/b2bi/model/GenerateMappingResult.h>
#include <aws/b2bi/model/GetCapabilityRequest.h>
#include <aws/b2bi/model/GetCapabilityResult.h>
#include <aws/b2bi/model/GetPartnershipRequest.h>
#include <aws/b2bi/model/GetPartnershipResult.h>
#include <aws/b2bi/model/GetProfileRequest.h>
#include <aws/b2bi/model/GetProfileResult.h>
#include <aws/b2bi/model/GetTransformerJobRequest.h>
#include <aws/b2bi/model/GetTransformerJobResult.h>
#include <aws/b2bi/model/GetTransformerRequest.h>
#include <aws/b2bi/model/GetTransformerResult.h>
#include <aws/b2bi/model/InboundEdiOptions.h>
#include <aws/b2bi/model/InputConversion.h>
#include <aws/b2bi/model/InputFileSource.h>
#include <aws/b2bi/model/InternalServerException.h>
#include <aws/b2bi/model/LineTerminator.h>
#include <aws/b2bi/model/ListCapabilitiesRequest.h>
#include <aws/b2bi/model/ListCapabilitiesResult.h>
#include <aws/b2bi/model/ListPartnershipsRequest.h>
#include <aws/b2bi/model/ListPartnershipsResult.h>
#include <aws/b2bi/model/ListProfilesRequest.h>
#include <aws/b2bi/model/ListProfilesResult.h>
#include <aws/b2bi/model/ListTagsForResourceRequest.h>
#include <aws/b2bi/model/ListTagsForResourceResult.h>
#include <aws/b2bi/model/ListTransformersRequest.h>
#include <aws/b2bi/model/ListTransformersResult.h>
#include <aws/b2bi/model/Logging.h>
#include <aws/b2bi/model/Mapping.h>
#include <aws/b2bi/model/MappingTemplateLanguage.h>
#include <aws/b2bi/model/MappingType.h>
#include <aws/b2bi/model/OutboundEdiOptions.h>
#include <aws/b2bi/model/OutputConversion.h>
#include <aws/b2bi/model/OutputSampleFileSource.h>
#include <aws/b2bi/model/PartnershipSummary.h>
#include <aws/b2bi/model/ProfileSummary.h>
#include <aws/b2bi/model/S3Location.h>
#include <aws/b2bi/model/SampleDocumentKeys.h>
#include <aws/b2bi/model/SampleDocuments.h>
#include <aws/b2bi/model/ServiceQuotaExceededException.h>
#include <aws/b2bi/model/StartTransformerJobRequest.h>
#include <aws/b2bi/model/StartTransformerJobResult.h>
#include <aws/b2bi/model/Tag.h>
#include <aws/b2bi/model/TagResourceRequest.h>
#include <aws/b2bi/model/TemplateDetails.h>
#include <aws/b2bi/model/TestConversionRequest.h>
#include <aws/b2bi/model/TestConversionResult.h>
#include <aws/b2bi/model/TestMappingRequest.h>
#include <aws/b2bi/model/TestMappingResult.h>
#include <aws/b2bi/model/TestParsingRequest.h>
#include <aws/b2bi/model/TestParsingResult.h>
#include <aws/b2bi/model/ThrottlingException.h>
#include <aws/b2bi/model/ToFormat.h>
#include <aws/b2bi/model/TransformerJobStatus.h>
#include <aws/b2bi/model/TransformerStatus.h>
#include <aws/b2bi/model/TransformerSummary.h>
#include <aws/b2bi/model/UntagResourceRequest.h>
#include <aws/b2bi/model/UpdateCapabilityRequest.h>
#include <aws/b2bi/model/UpdateCapabilityResult.h>
#include <aws/b2bi/model/UpdatePartnershipRequest.h>
#include <aws/b2bi/model/UpdatePartnershipResult.h>
#include <aws/b2bi/model/UpdateProfileRequest.h>
#include <aws/b2bi/model/UpdateProfileResult.h>
#include <aws/b2bi/model/UpdateTransformerRequest.h>
#include <aws/b2bi/model/UpdateTransformerResult.h>
#include <aws/b2bi/model/WrapFormat.h>
#include <aws/b2bi/model/WrapOptions.h>
#include <aws/b2bi/model/X12AcknowledgmentOptions.h>
#include <aws/b2bi/model/X12AdvancedOptions.h>
#include <aws/b2bi/model/X12CodeListValidationRule.h>
#include <aws/b2bi/model/X12ControlNumbers.h>
#include <aws/b2bi/model/X12Delimiters.h>
#include <aws/b2bi/model/X12Details.h>
#include <aws/b2bi/model/X12ElementLengthValidationRule.h>
#include <aws/b2bi/model/X12ElementRequirementValidationRule.h>
#include <aws/b2bi/model/X12Envelope.h>
#include <aws/b2bi/model/X12FunctionalAcknowledgment.h>
#include <aws/b2bi/model/X12FunctionalGroupHeaders.h>
#include <aws/b2bi/model/X12GS05TimeFormat.h>
#include <aws/b2bi/model/X12InboundEdiOptions.h>
#include <aws/b2bi/model/X12InterchangeControlHeaders.h>
#include <aws/b2bi/model/X12OutboundEdiHeaders.h>
#include <aws/b2bi/model/X12SplitBy.h>
#include <aws/b2bi/model/X12SplitOptions.h>
#include <aws/b2bi/model/X12TechnicalAcknowledgment.h>
#include <aws/b2bi/model/X12TransactionSet.h>
#include <aws/b2bi/model/X12ValidationOptions.h>
#include <aws/b2bi/model/X12ValidationRule.h>
#include <aws/b2bi/model/X12Version.h>

using B2BIIncludeTest = ::testing::Test;

TEST_F(B2BIIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::B2BI::B2BIClient>("B2BIIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
