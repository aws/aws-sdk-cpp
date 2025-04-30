/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/payment-cryptography-data/PaymentCryptographyDataClient.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataEndpointProvider.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataEndpointRules.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataErrorMarshaller.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataErrors.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataRequest.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataServiceClientModel.h>
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/AmexAttributes.h>
#include <aws/payment-cryptography-data/model/AmexCardSecurityCodeVersion1.h>
#include <aws/payment-cryptography-data/model/AmexCardSecurityCodeVersion2.h>
#include <aws/payment-cryptography-data/model/AsymmetricEncryptionAttributes.h>
#include <aws/payment-cryptography-data/model/CardGenerationAttributes.h>
#include <aws/payment-cryptography-data/model/CardHolderVerificationValue.h>
#include <aws/payment-cryptography-data/model/CardVerificationAttributes.h>
#include <aws/payment-cryptography-data/model/CardVerificationValue1.h>
#include <aws/payment-cryptography-data/model/CardVerificationValue2.h>
#include <aws/payment-cryptography-data/model/CryptogramAuthResponse.h>
#include <aws/payment-cryptography-data/model/CryptogramVerificationArpcMethod1.h>
#include <aws/payment-cryptography-data/model/CryptogramVerificationArpcMethod2.h>
#include <aws/payment-cryptography-data/model/CurrentPinAttributes.h>
#include <aws/payment-cryptography-data/model/DecryptDataRequest.h>
#include <aws/payment-cryptography-data/model/DecryptDataResult.h>
#include <aws/payment-cryptography-data/model/DerivationMethodAttributes.h>
#include <aws/payment-cryptography-data/model/DiscoverDynamicCardVerificationCode.h>
#include <aws/payment-cryptography-data/model/DukptAttributes.h>
#include <aws/payment-cryptography-data/model/DukptDerivationAttributes.h>
#include <aws/payment-cryptography-data/model/DukptDerivationType.h>
#include <aws/payment-cryptography-data/model/DukptEncryptionAttributes.h>
#include <aws/payment-cryptography-data/model/DukptEncryptionMode.h>
#include <aws/payment-cryptography-data/model/DukptKeyVariant.h>
#include <aws/payment-cryptography-data/model/DynamicCardVerificationCode.h>
#include <aws/payment-cryptography-data/model/DynamicCardVerificationValue.h>
#include <aws/payment-cryptography-data/model/EcdhDerivationAttributes.h>
#include <aws/payment-cryptography-data/model/Emv2000Attributes.h>
#include <aws/payment-cryptography-data/model/EmvCommonAttributes.h>
#include <aws/payment-cryptography-data/model/EmvEncryptionAttributes.h>
#include <aws/payment-cryptography-data/model/EmvEncryptionMode.h>
#include <aws/payment-cryptography-data/model/EmvMajorKeyDerivationMode.h>
#include <aws/payment-cryptography-data/model/EncryptDataRequest.h>
#include <aws/payment-cryptography-data/model/EncryptDataResult.h>
#include <aws/payment-cryptography-data/model/EncryptionDecryptionAttributes.h>
#include <aws/payment-cryptography-data/model/EncryptionMode.h>
#include <aws/payment-cryptography-data/model/GenerateCardValidationDataRequest.h>
#include <aws/payment-cryptography-data/model/GenerateCardValidationDataResult.h>
#include <aws/payment-cryptography-data/model/GenerateMacEmvPinChangeRequest.h>
#include <aws/payment-cryptography-data/model/GenerateMacEmvPinChangeResult.h>
#include <aws/payment-cryptography-data/model/GenerateMacRequest.h>
#include <aws/payment-cryptography-data/model/GenerateMacResult.h>
#include <aws/payment-cryptography-data/model/GeneratePinDataRequest.h>
#include <aws/payment-cryptography-data/model/GeneratePinDataResult.h>
#include <aws/payment-cryptography-data/model/Ibm3624NaturalPin.h>
#include <aws/payment-cryptography-data/model/Ibm3624PinFromOffset.h>
#include <aws/payment-cryptography-data/model/Ibm3624PinOffset.h>
#include <aws/payment-cryptography-data/model/Ibm3624PinVerification.h>
#include <aws/payment-cryptography-data/model/Ibm3624RandomPin.h>
#include <aws/payment-cryptography-data/model/KeyCheckValueAlgorithm.h>
#include <aws/payment-cryptography-data/model/KeyDerivationFunction.h>
#include <aws/payment-cryptography-data/model/KeyDerivationHashAlgorithm.h>
#include <aws/payment-cryptography-data/model/MacAlgorithm.h>
#include <aws/payment-cryptography-data/model/MacAlgorithmDukpt.h>
#include <aws/payment-cryptography-data/model/MacAlgorithmEmv.h>
#include <aws/payment-cryptography-data/model/MacAttributes.h>
#include <aws/payment-cryptography-data/model/MajorKeyDerivationMode.h>
#include <aws/payment-cryptography-data/model/MasterCardAttributes.h>
#include <aws/payment-cryptography-data/model/PaddingType.h>
#include <aws/payment-cryptography-data/model/PinBlockFormatForEmvPinChange.h>
#include <aws/payment-cryptography-data/model/PinBlockFormatForPinData.h>
#include <aws/payment-cryptography-data/model/PinBlockLengthPosition.h>
#include <aws/payment-cryptography-data/model/PinBlockPaddingType.h>
#include <aws/payment-cryptography-data/model/PinData.h>
#include <aws/payment-cryptography-data/model/PinGenerationAttributes.h>
#include <aws/payment-cryptography-data/model/PinVerificationAttributes.h>
#include <aws/payment-cryptography-data/model/ReEncryptDataRequest.h>
#include <aws/payment-cryptography-data/model/ReEncryptDataResult.h>
#include <aws/payment-cryptography-data/model/ReEncryptionAttributes.h>
#include <aws/payment-cryptography-data/model/ResourceNotFoundException.h>
#include <aws/payment-cryptography-data/model/SessionKeyAmex.h>
#include <aws/payment-cryptography-data/model/SessionKeyDerivation.h>
#include <aws/payment-cryptography-data/model/SessionKeyDerivationMode.h>
#include <aws/payment-cryptography-data/model/SessionKeyDerivationValue.h>
#include <aws/payment-cryptography-data/model/SessionKeyEmv2000.h>
#include <aws/payment-cryptography-data/model/SessionKeyEmvCommon.h>
#include <aws/payment-cryptography-data/model/SessionKeyMastercard.h>
#include <aws/payment-cryptography-data/model/SessionKeyVisa.h>
#include <aws/payment-cryptography-data/model/SymmetricEncryptionAttributes.h>
#include <aws/payment-cryptography-data/model/SymmetricKeyAlgorithm.h>
#include <aws/payment-cryptography-data/model/TranslatePinDataRequest.h>
#include <aws/payment-cryptography-data/model/TranslatePinDataResult.h>
#include <aws/payment-cryptography-data/model/TranslationIsoFormats.h>
#include <aws/payment-cryptography-data/model/TranslationPinDataIsoFormat034.h>
#include <aws/payment-cryptography-data/model/TranslationPinDataIsoFormat1.h>
#include <aws/payment-cryptography-data/model/ValidationException.h>
#include <aws/payment-cryptography-data/model/ValidationExceptionField.h>
#include <aws/payment-cryptography-data/model/VerificationFailedException.h>
#include <aws/payment-cryptography-data/model/VerificationFailedReason.h>
#include <aws/payment-cryptography-data/model/VerifyAuthRequestCryptogramRequest.h>
#include <aws/payment-cryptography-data/model/VerifyAuthRequestCryptogramResult.h>
#include <aws/payment-cryptography-data/model/VerifyCardValidationDataRequest.h>
#include <aws/payment-cryptography-data/model/VerifyCardValidationDataResult.h>
#include <aws/payment-cryptography-data/model/VerifyMacRequest.h>
#include <aws/payment-cryptography-data/model/VerifyMacResult.h>
#include <aws/payment-cryptography-data/model/VerifyPinDataRequest.h>
#include <aws/payment-cryptography-data/model/VerifyPinDataResult.h>
#include <aws/payment-cryptography-data/model/VisaAmexDerivationOutputs.h>
#include <aws/payment-cryptography-data/model/VisaAttributes.h>
#include <aws/payment-cryptography-data/model/VisaPin.h>
#include <aws/payment-cryptography-data/model/VisaPinVerification.h>
#include <aws/payment-cryptography-data/model/VisaPinVerificationValue.h>
#include <aws/payment-cryptography-data/model/WrappedKey.h>
#include <aws/payment-cryptography-data/model/WrappedKeyMaterial.h>

using PaymentCryptographyDataIncludeTest = ::testing::Test;

TEST_F(PaymentCryptographyDataIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::PaymentCryptographyData::PaymentCryptographyDataClient>("PaymentCryptographyDataIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
