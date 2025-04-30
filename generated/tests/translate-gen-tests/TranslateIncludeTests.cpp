/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/translate/TranslateClient.h>
#include <aws/translate/TranslateEndpointProvider.h>
#include <aws/translate/TranslateEndpointRules.h>
#include <aws/translate/TranslateErrorMarshaller.h>
#include <aws/translate/TranslateErrors.h>
#include <aws/translate/TranslateRequest.h>
#include <aws/translate/TranslateServiceClientModel.h>
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/model/AppliedTerminology.h>
#include <aws/translate/model/Brevity.h>
#include <aws/translate/model/CreateParallelDataRequest.h>
#include <aws/translate/model/CreateParallelDataResult.h>
#include <aws/translate/model/DeleteParallelDataRequest.h>
#include <aws/translate/model/DeleteParallelDataResult.h>
#include <aws/translate/model/DeleteTerminologyRequest.h>
#include <aws/translate/model/DescribeTextTranslationJobRequest.h>
#include <aws/translate/model/DescribeTextTranslationJobResult.h>
#include <aws/translate/model/DetectedLanguageLowConfidenceException.h>
#include <aws/translate/model/Directionality.h>
#include <aws/translate/model/DisplayLanguageCode.h>
#include <aws/translate/model/Document.h>
#include <aws/translate/model/EncryptionKey.h>
#include <aws/translate/model/EncryptionKeyType.h>
#include <aws/translate/model/Formality.h>
#include <aws/translate/model/GetParallelDataRequest.h>
#include <aws/translate/model/GetParallelDataResult.h>
#include <aws/translate/model/GetTerminologyRequest.h>
#include <aws/translate/model/GetTerminologyResult.h>
#include <aws/translate/model/ImportTerminologyRequest.h>
#include <aws/translate/model/ImportTerminologyResult.h>
#include <aws/translate/model/InputDataConfig.h>
#include <aws/translate/model/JobDetails.h>
#include <aws/translate/model/JobStatus.h>
#include <aws/translate/model/Language.h>
#include <aws/translate/model/ListLanguagesRequest.h>
#include <aws/translate/model/ListLanguagesResult.h>
#include <aws/translate/model/ListParallelDataRequest.h>
#include <aws/translate/model/ListParallelDataResult.h>
#include <aws/translate/model/ListTagsForResourceRequest.h>
#include <aws/translate/model/ListTagsForResourceResult.h>
#include <aws/translate/model/ListTerminologiesRequest.h>
#include <aws/translate/model/ListTerminologiesResult.h>
#include <aws/translate/model/ListTextTranslationJobsRequest.h>
#include <aws/translate/model/ListTextTranslationJobsResult.h>
#include <aws/translate/model/MergeStrategy.h>
#include <aws/translate/model/OutputDataConfig.h>
#include <aws/translate/model/ParallelDataConfig.h>
#include <aws/translate/model/ParallelDataDataLocation.h>
#include <aws/translate/model/ParallelDataFormat.h>
#include <aws/translate/model/ParallelDataProperties.h>
#include <aws/translate/model/ParallelDataStatus.h>
#include <aws/translate/model/Profanity.h>
#include <aws/translate/model/StartTextTranslationJobRequest.h>
#include <aws/translate/model/StartTextTranslationJobResult.h>
#include <aws/translate/model/StopTextTranslationJobRequest.h>
#include <aws/translate/model/StopTextTranslationJobResult.h>
#include <aws/translate/model/Tag.h>
#include <aws/translate/model/TagResourceRequest.h>
#include <aws/translate/model/TagResourceResult.h>
#include <aws/translate/model/Term.h>
#include <aws/translate/model/TerminologyData.h>
#include <aws/translate/model/TerminologyDataFormat.h>
#include <aws/translate/model/TerminologyDataLocation.h>
#include <aws/translate/model/TerminologyProperties.h>
#include <aws/translate/model/TextTranslationJobFilter.h>
#include <aws/translate/model/TextTranslationJobProperties.h>
#include <aws/translate/model/TooManyTagsException.h>
#include <aws/translate/model/TranslateDocumentRequest.h>
#include <aws/translate/model/TranslateDocumentResult.h>
#include <aws/translate/model/TranslateTextRequest.h>
#include <aws/translate/model/TranslateTextResult.h>
#include <aws/translate/model/TranslatedDocument.h>
#include <aws/translate/model/TranslationSettings.h>
#include <aws/translate/model/UnsupportedDisplayLanguageCodeException.h>
#include <aws/translate/model/UnsupportedLanguagePairException.h>
#include <aws/translate/model/UntagResourceRequest.h>
#include <aws/translate/model/UntagResourceResult.h>
#include <aws/translate/model/UpdateParallelDataRequest.h>
#include <aws/translate/model/UpdateParallelDataResult.h>

using TranslateIncludeTest = ::testing::Test;

TEST_F(TranslateIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Translate::TranslateClient>("TranslateIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
