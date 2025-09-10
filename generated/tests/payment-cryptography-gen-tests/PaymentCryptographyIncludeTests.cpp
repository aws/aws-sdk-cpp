/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/payment-cryptography/PaymentCryptographyClient.h>
#include <aws/payment-cryptography/PaymentCryptographyEndpointProvider.h>
#include <aws/payment-cryptography/PaymentCryptographyEndpointRules.h>
#include <aws/payment-cryptography/PaymentCryptographyErrorMarshaller.h>
#include <aws/payment-cryptography/PaymentCryptographyErrors.h>
#include <aws/payment-cryptography/PaymentCryptographyRequest.h>
#include <aws/payment-cryptography/PaymentCryptographyServiceClientModel.h>
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/model/AddKeyReplicationRegionsRequest.h>
#include <aws/payment-cryptography/model/AddKeyReplicationRegionsResult.h>
#include <aws/payment-cryptography/model/Alias.h>
#include <aws/payment-cryptography/model/CreateAliasRequest.h>
#include <aws/payment-cryptography/model/CreateAliasResult.h>
#include <aws/payment-cryptography/model/CreateKeyRequest.h>
#include <aws/payment-cryptography/model/CreateKeyResult.h>
#include <aws/payment-cryptography/model/DeleteAliasRequest.h>
#include <aws/payment-cryptography/model/DeleteAliasResult.h>
#include <aws/payment-cryptography/model/DeleteKeyRequest.h>
#include <aws/payment-cryptography/model/DeleteKeyResult.h>
#include <aws/payment-cryptography/model/DeriveKeyUsage.h>
#include <aws/payment-cryptography/model/DiffieHellmanDerivationData.h>
#include <aws/payment-cryptography/model/DisableDefaultKeyReplicationRegionsRequest.h>
#include <aws/payment-cryptography/model/DisableDefaultKeyReplicationRegionsResult.h>
#include <aws/payment-cryptography/model/EnableDefaultKeyReplicationRegionsRequest.h>
#include <aws/payment-cryptography/model/EnableDefaultKeyReplicationRegionsResult.h>
#include <aws/payment-cryptography/model/ExportAttributes.h>
#include <aws/payment-cryptography/model/ExportDiffieHellmanTr31KeyBlock.h>
#include <aws/payment-cryptography/model/ExportDukptInitialKey.h>
#include <aws/payment-cryptography/model/ExportKeyCryptogram.h>
#include <aws/payment-cryptography/model/ExportKeyMaterial.h>
#include <aws/payment-cryptography/model/ExportKeyRequest.h>
#include <aws/payment-cryptography/model/ExportKeyResult.h>
#include <aws/payment-cryptography/model/ExportTr31KeyBlock.h>
#include <aws/payment-cryptography/model/ExportTr34KeyBlock.h>
#include <aws/payment-cryptography/model/GetAliasRequest.h>
#include <aws/payment-cryptography/model/GetAliasResult.h>
#include <aws/payment-cryptography/model/GetDefaultKeyReplicationRegionsRequest.h>
#include <aws/payment-cryptography/model/GetDefaultKeyReplicationRegionsResult.h>
#include <aws/payment-cryptography/model/GetKeyRequest.h>
#include <aws/payment-cryptography/model/GetKeyResult.h>
#include <aws/payment-cryptography/model/GetParametersForExportRequest.h>
#include <aws/payment-cryptography/model/GetParametersForExportResult.h>
#include <aws/payment-cryptography/model/GetParametersForImportRequest.h>
#include <aws/payment-cryptography/model/GetParametersForImportResult.h>
#include <aws/payment-cryptography/model/GetPublicKeyCertificateRequest.h>
#include <aws/payment-cryptography/model/GetPublicKeyCertificateResult.h>
#include <aws/payment-cryptography/model/ImportDiffieHellmanTr31KeyBlock.h>
#include <aws/payment-cryptography/model/ImportKeyCryptogram.h>
#include <aws/payment-cryptography/model/ImportKeyMaterial.h>
#include <aws/payment-cryptography/model/ImportKeyRequest.h>
#include <aws/payment-cryptography/model/ImportKeyResult.h>
#include <aws/payment-cryptography/model/ImportTr31KeyBlock.h>
#include <aws/payment-cryptography/model/ImportTr34KeyBlock.h>
#include <aws/payment-cryptography/model/Key.h>
#include <aws/payment-cryptography/model/KeyAlgorithm.h>
#include <aws/payment-cryptography/model/KeyAttributes.h>
#include <aws/payment-cryptography/model/KeyBlockHeaders.h>
#include <aws/payment-cryptography/model/KeyCheckValueAlgorithm.h>
#include <aws/payment-cryptography/model/KeyClass.h>
#include <aws/payment-cryptography/model/KeyDerivationFunction.h>
#include <aws/payment-cryptography/model/KeyDerivationHashAlgorithm.h>
#include <aws/payment-cryptography/model/KeyExportability.h>
#include <aws/payment-cryptography/model/KeyMaterialType.h>
#include <aws/payment-cryptography/model/KeyModesOfUse.h>
#include <aws/payment-cryptography/model/KeyOrigin.h>
#include <aws/payment-cryptography/model/KeyReplicationState.h>
#include <aws/payment-cryptography/model/KeyState.h>
#include <aws/payment-cryptography/model/KeySummary.h>
#include <aws/payment-cryptography/model/KeyUsage.h>
#include <aws/payment-cryptography/model/ListAliasesRequest.h>
#include <aws/payment-cryptography/model/ListAliasesResult.h>
#include <aws/payment-cryptography/model/ListKeysRequest.h>
#include <aws/payment-cryptography/model/ListKeysResult.h>
#include <aws/payment-cryptography/model/ListTagsForResourceRequest.h>
#include <aws/payment-cryptography/model/ListTagsForResourceResult.h>
#include <aws/payment-cryptography/model/MultiRegionKeyType.h>
#include <aws/payment-cryptography/model/RemoveKeyReplicationRegionsRequest.h>
#include <aws/payment-cryptography/model/RemoveKeyReplicationRegionsResult.h>
#include <aws/payment-cryptography/model/ReplicationStatusType.h>
#include <aws/payment-cryptography/model/ResourceNotFoundException.h>
#include <aws/payment-cryptography/model/RestoreKeyRequest.h>
#include <aws/payment-cryptography/model/RestoreKeyResult.h>
#include <aws/payment-cryptography/model/RootCertificatePublicKey.h>
#include <aws/payment-cryptography/model/StartKeyUsageRequest.h>
#include <aws/payment-cryptography/model/StartKeyUsageResult.h>
#include <aws/payment-cryptography/model/StopKeyUsageRequest.h>
#include <aws/payment-cryptography/model/StopKeyUsageResult.h>
#include <aws/payment-cryptography/model/SymmetricKeyAlgorithm.h>
#include <aws/payment-cryptography/model/Tag.h>
#include <aws/payment-cryptography/model/TagResourceRequest.h>
#include <aws/payment-cryptography/model/TagResourceResult.h>
#include <aws/payment-cryptography/model/Tr34KeyBlockFormat.h>
#include <aws/payment-cryptography/model/TrustedCertificatePublicKey.h>
#include <aws/payment-cryptography/model/UntagResourceRequest.h>
#include <aws/payment-cryptography/model/UntagResourceResult.h>
#include <aws/payment-cryptography/model/UpdateAliasRequest.h>
#include <aws/payment-cryptography/model/UpdateAliasResult.h>
#include <aws/payment-cryptography/model/WrappedKey.h>
#include <aws/payment-cryptography/model/WrappedKeyMaterialFormat.h>
#include <aws/payment-cryptography/model/WrappingKeySpec.h>

using PaymentCryptographyIncludeTest = ::testing::Test;

TEST_F(PaymentCryptographyIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::PaymentCryptography::PaymentCryptographyClient>("PaymentCryptographyIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
