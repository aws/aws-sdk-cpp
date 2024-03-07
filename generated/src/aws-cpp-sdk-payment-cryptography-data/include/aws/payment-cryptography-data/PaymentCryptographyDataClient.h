/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataServiceClientModel.h>

namespace Aws
{
namespace PaymentCryptographyData
{
  /**
   * <p>You use the Amazon Web Services Payment Cryptography Data Plane to manage how
   * encryption keys are used for payment-related transaction processing and
   * associated cryptographic operations. You can encrypt, decrypt, generate, verify,
   * and translate payment-related cryptographic operations in Amazon Web Services
   * Payment Cryptography. For more information, see <a
   * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/data-operations.html">Data
   * operations</a> in the <i>Amazon Web Services Payment Cryptography User
   * Guide</i>.</p> <p>To manage your encryption keys, you use the <a
   * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/Welcome.html">Amazon
   * Web Services Payment Cryptography Control Plane</a>. You can create, import,
   * export, share, manage, and delete keys. You can also manage Identity and Access
   * Management (IAM) policies for keys. </p>
   */
  class AWS_PAYMENTCRYPTOGRAPHYDATA_API PaymentCryptographyDataClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<PaymentCryptographyDataClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef PaymentCryptographyDataClientConfiguration ClientConfigurationType;
      typedef PaymentCryptographyDataEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PaymentCryptographyDataClient(const Aws::PaymentCryptographyData::PaymentCryptographyDataClientConfiguration& clientConfiguration = Aws::PaymentCryptographyData::PaymentCryptographyDataClientConfiguration(),
                                      std::shared_ptr<PaymentCryptographyDataEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PaymentCryptographyDataClient(const Aws::Auth::AWSCredentials& credentials,
                                      std::shared_ptr<PaymentCryptographyDataEndpointProviderBase> endpointProvider = nullptr,
                                      const Aws::PaymentCryptographyData::PaymentCryptographyDataClientConfiguration& clientConfiguration = Aws::PaymentCryptographyData::PaymentCryptographyDataClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PaymentCryptographyDataClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                      std::shared_ptr<PaymentCryptographyDataEndpointProviderBase> endpointProvider = nullptr,
                                      const Aws::PaymentCryptographyData::PaymentCryptographyDataClientConfiguration& clientConfiguration = Aws::PaymentCryptographyData::PaymentCryptographyDataClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PaymentCryptographyDataClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PaymentCryptographyDataClient(const Aws::Auth::AWSCredentials& credentials,
                                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PaymentCryptographyDataClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~PaymentCryptographyDataClient();

        /**
         * <p>Decrypts ciphertext data to plaintext using a symmetric (TDES, AES),
         * asymmetric (RSA), or derived (DUKPT or EMV) encryption key scheme. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/decrypt-data.html">Decrypt
         * data</a> in the <i>Amazon Web Services Payment Cryptography User Guide</i>.</p>
         * <p>You can use an encryption key generated within Amazon Web Services Payment
         * Cryptography, or you can import your own encryption key by calling <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ImportKey.html">ImportKey</a>.
         * For this operation, the key must have <code>KeyModesOfUse</code> set to
         * <code>Decrypt</code>. In asymmetric decryption, Amazon Web Services Payment
         * Cryptography decrypts the ciphertext using the private component of the
         * asymmetric encryption key pair. For data encryption outside of Amazon Web
         * Services Payment Cryptography, you can export the public component of the
         * asymmetric key pair by calling <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_GetPublicKeyCertificate.html">GetPublicCertificate</a>.</p>
         * <p>For symmetric and DUKPT decryption, Amazon Web Services Payment Cryptography
         * supports <code>TDES</code> and <code>AES</code> algorithms. For EMV decryption,
         * Amazon Web Services Payment Cryptography supports <code>TDES</code> algorithms.
         * For asymmetric decryption, Amazon Web Services Payment Cryptography supports
         * <code>RSA</code>. </p> <p>When you use TDES or TDES DUKPT, the ciphertext data
         * length must be a multiple of 8 bytes. For AES or AES DUKPT, the ciphertext data
         * length must be a multiple of 16 bytes. For RSA, it sould be equal to the key
         * size unless padding is enabled.</p> <p>For information about valid keys for this
         * operation, see <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/keys-validattributes.html">Understanding
         * key attributes</a> and <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/crypto-ops-validkeys-ops.html">Key
         * types for specific data operations</a> in the <i>Amazon Web Services Payment
         * Cryptography User Guide</i>. </p> <p> <b>Cross-account use</b>: This operation
         * can't be used across different Amazon Web Services accounts.</p> <p> <b>Related
         * operations:</b> </p> <ul> <li> <p> <a>EncryptData</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_GetPublicKeyCertificate.html">GetPublicCertificate</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ImportKey.html">ImportKey</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/DecryptData">AWS
         * API Reference</a></p>
         */
        virtual Model::DecryptDataOutcome DecryptData(const Model::DecryptDataRequest& request) const;

        /**
         * A Callable wrapper for DecryptData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DecryptDataRequestT = Model::DecryptDataRequest>
        Model::DecryptDataOutcomeCallable DecryptDataCallable(const DecryptDataRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyDataClient::DecryptData, request);
        }

        /**
         * An Async wrapper for DecryptData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DecryptDataRequestT = Model::DecryptDataRequest>
        void DecryptDataAsync(const DecryptDataRequestT& request, const DecryptDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyDataClient::DecryptData, request, handler, context);
        }

        /**
         * <p>Encrypts plaintext data to ciphertext using a symmetric (TDES, AES),
         * asymmetric (RSA), or derived (DUKPT or EMV) encryption key scheme. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/encrypt-data.html">Encrypt
         * data</a> in the <i>Amazon Web Services Payment Cryptography User Guide</i>.</p>
         * <p>You can generate an encryption key within Amazon Web Services Payment
         * Cryptography by calling <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_CreateKey.html">CreateKey</a>.
         * You can import your own encryption key by calling <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ImportKey.html">ImportKey</a>.
         * For this operation, the key must have <code>KeyModesOfUse</code> set to
         * <code>Encrypt</code>. In asymmetric encryption, plaintext is encrypted using
         * public component. You can import the public component of an asymmetric key pair
         * created outside Amazon Web Services Payment Cryptography by calling <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ImportKey.html">ImportKey</a>.
         * </p> <p>For symmetric and DUKPT encryption, Amazon Web Services Payment
         * Cryptography supports <code>TDES</code> and <code>AES</code> algorithms. For EMV
         * encryption, Amazon Web Services Payment Cryptography supports <code>TDES</code>
         * algorithms.For asymmetric encryption, Amazon Web Services Payment Cryptography
         * supports <code>RSA</code>. </p> <p>When you use TDES or TDES DUKPT, the
         * plaintext data length must be a multiple of 8 bytes. For AES or AES DUKPT, the
         * plaintext data length must be a multiple of 16 bytes. For RSA, it sould be equal
         * to the key size unless padding is enabled.</p> <p>To encrypt using DUKPT, you
         * must already have a BDK (Base Derivation Key) key in your account with
         * <code>KeyModesOfUse</code> set to <code>DeriveKey</code>, or you can generate a
         * new DUKPT key by calling <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_CreateKey.html">CreateKey</a>.
         * To encrypt using EMV, you must already have an IMK (Issuer Master Key) key in
         * your account with <code>KeyModesOfUse</code> set to <code>DeriveKey</code>.</p>
         * <p>For information about valid keys for this operation, see <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/keys-validattributes.html">Understanding
         * key attributes</a> and <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/crypto-ops-validkeys-ops.html">Key
         * types for specific data operations</a> in the <i>Amazon Web Services Payment
         * Cryptography User Guide</i>.</p> <p> <b>Cross-account use</b>: This operation
         * can't be used across different Amazon Web Services accounts.</p> <p> <b>Related
         * operations:</b> </p> <ul> <li> <p> <a>DecryptData</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_GetPublicKeyCertificate.html">GetPublicCertificate</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ImportKey.html">ImportKey</a>
         * </p> </li> <li> <p> <a>ReEncryptData</a> </p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/EncryptData">AWS
         * API Reference</a></p>
         */
        virtual Model::EncryptDataOutcome EncryptData(const Model::EncryptDataRequest& request) const;

        /**
         * A Callable wrapper for EncryptData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EncryptDataRequestT = Model::EncryptDataRequest>
        Model::EncryptDataOutcomeCallable EncryptDataCallable(const EncryptDataRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyDataClient::EncryptData, request);
        }

        /**
         * An Async wrapper for EncryptData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EncryptDataRequestT = Model::EncryptDataRequest>
        void EncryptDataAsync(const EncryptDataRequestT& request, const EncryptDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyDataClient::EncryptData, request, handler, context);
        }

        /**
         * <p>Generates card-related validation data using algorithms such as Card
         * Verification Values (CVV/CVV2), Dynamic Card Verification Values (dCVV/dCVV2),
         * or Card Security Codes (CSC). For more information, see <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/generate-card-data.html">Generate
         * card data</a> in the <i>Amazon Web Services Payment Cryptography User
         * Guide</i>.</p> <p>This operation generates a CVV or CSC value that is printed on
         * a payment credit or debit card during card production. The CVV or CSC, PAN
         * (Primary Account Number) and expiration date of the card are required to check
         * its validity during transaction processing. To begin this operation, a CVK (Card
         * Verification Key) encryption key is required. You can use <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_CreateKey.html">CreateKey</a>
         * or <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ImportKey.html">ImportKey</a>
         * to establish a CVK within Amazon Web Services Payment Cryptography. The
         * <code>KeyModesOfUse</code> should be set to <code>Generate</code> and
         * <code>Verify</code> for a CVK encryption key. </p> <p>For information about
         * valid keys for this operation, see <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/keys-validattributes.html">Understanding
         * key attributes</a> and <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/crypto-ops-validkeys-ops.html">Key
         * types for specific data operations</a> in the <i>Amazon Web Services Payment
         * Cryptography User Guide</i>. </p> <p> <b>Cross-account use</b>: This operation
         * can't be used across different Amazon Web Services accounts.</p> <p> <b>Related
         * operations:</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ImportKey.html">ImportKey</a>
         * </p> </li> <li> <p> <a>VerifyCardValidationData</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/GenerateCardValidationData">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateCardValidationDataOutcome GenerateCardValidationData(const Model::GenerateCardValidationDataRequest& request) const;

        /**
         * A Callable wrapper for GenerateCardValidationData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GenerateCardValidationDataRequestT = Model::GenerateCardValidationDataRequest>
        Model::GenerateCardValidationDataOutcomeCallable GenerateCardValidationDataCallable(const GenerateCardValidationDataRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyDataClient::GenerateCardValidationData, request);
        }

        /**
         * An Async wrapper for GenerateCardValidationData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GenerateCardValidationDataRequestT = Model::GenerateCardValidationDataRequest>
        void GenerateCardValidationDataAsync(const GenerateCardValidationDataRequestT& request, const GenerateCardValidationDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyDataClient::GenerateCardValidationData, request, handler, context);
        }

        /**
         * <p>Generates a Message Authentication Code (MAC) cryptogram within Amazon Web
         * Services Payment Cryptography. </p> <p>You can use this operation to
         * authenticate card-related data by using known data values to generate MAC for
         * data validation between the sending and receiving parties. This operation uses
         * message data, a secret encryption key and MAC algorithm to generate a unique MAC
         * value for transmission. The receiving party of the MAC must use the same message
         * data, secret encryption key and MAC algorithm to reproduce another MAC value for
         * comparision.</p> <p>You can use this operation to generate a DUPKT, CMAC, HMAC
         * or EMV MAC by setting generation attributes and algorithm to the associated
         * values. The MAC generation encryption key must have valid values for
         * <code>KeyUsage</code> such as <code>TR31_M7_HMAC_KEY</code> for HMAC generation,
         * and they key must have <code>KeyModesOfUse</code> set to <code>Generate</code>
         * and <code>Verify</code>.</p> <p>For information about valid keys for this
         * operation, see <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/keys-validattributes.html">Understanding
         * key attributes</a> and <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/crypto-ops-validkeys-ops.html">Key
         * types for specific data operations</a> in the <i>Amazon Web Services Payment
         * Cryptography User Guide</i>. </p> <p> <b>Cross-account use</b>: This operation
         * can't be used across different Amazon Web Services accounts.</p> <p> <b>Related
         * operations:</b> </p> <ul> <li> <p> <a>VerifyMac</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/GenerateMac">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateMacOutcome GenerateMac(const Model::GenerateMacRequest& request) const;

        /**
         * A Callable wrapper for GenerateMac that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GenerateMacRequestT = Model::GenerateMacRequest>
        Model::GenerateMacOutcomeCallable GenerateMacCallable(const GenerateMacRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyDataClient::GenerateMac, request);
        }

        /**
         * An Async wrapper for GenerateMac that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GenerateMacRequestT = Model::GenerateMacRequest>
        void GenerateMacAsync(const GenerateMacRequestT& request, const GenerateMacResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyDataClient::GenerateMac, request, handler, context);
        }

        /**
         * <p>Generates pin-related data such as PIN, PIN Verification Value (PVV), PIN
         * Block, and PIN Offset during new card issuance or reissuance. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/generate-pin-data.html">Generate
         * PIN data</a> in the <i>Amazon Web Services Payment Cryptography User
         * Guide</i>.</p> <p>PIN data is never transmitted in clear to or from Amazon Web
         * Services Payment Cryptography. This operation generates PIN, PVV, or PIN Offset
         * and then encrypts it using Pin Encryption Key (PEK) to create an
         * <code>EncryptedPinBlock</code> for transmission from Amazon Web Services Payment
         * Cryptography. This operation uses a separate Pin Verification Key (PVK) for VISA
         * PVV generation. </p> <p>For information about valid keys for this operation, see
         * <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/keys-validattributes.html">Understanding
         * key attributes</a> and <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/crypto-ops-validkeys-ops.html">Key
         * types for specific data operations</a> in the <i>Amazon Web Services Payment
         * Cryptography User Guide</i>.</p> <p> <b>Cross-account use</b>: This operation
         * can't be used across different Amazon Web Services accounts.</p> <p> <b>Related
         * operations:</b> </p> <ul> <li> <p> <a>GenerateCardValidationData</a> </p> </li>
         * <li> <p> <a>TranslatePinData</a> </p> </li> <li> <p> <a>VerifyPinData</a> </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/GeneratePinData">AWS
         * API Reference</a></p>
         */
        virtual Model::GeneratePinDataOutcome GeneratePinData(const Model::GeneratePinDataRequest& request) const;

        /**
         * A Callable wrapper for GeneratePinData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GeneratePinDataRequestT = Model::GeneratePinDataRequest>
        Model::GeneratePinDataOutcomeCallable GeneratePinDataCallable(const GeneratePinDataRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyDataClient::GeneratePinData, request);
        }

        /**
         * An Async wrapper for GeneratePinData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GeneratePinDataRequestT = Model::GeneratePinDataRequest>
        void GeneratePinDataAsync(const GeneratePinDataRequestT& request, const GeneratePinDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyDataClient::GeneratePinData, request, handler, context);
        }

        /**
         * <p>Re-encrypt ciphertext using DUKPT, Symmetric and Asymmetric Data Encryption
         * Keys. </p> <p>You can either generate an encryption key within Amazon Web
         * Services Payment Cryptography by calling <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_CreateKey.html">CreateKey</a>
         * or import your own encryption key by calling <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ImportKey.html">ImportKey</a>.
         * The <code>KeyArn</code> for use with this operation must be in a compatible key
         * state with <code>KeyModesOfUse</code> set to <code>Encrypt</code>. In asymmetric
         * encryption, ciphertext is encrypted using public component (imported by calling
         * <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ImportKey.html">ImportKey</a>)
         * of the asymmetric key pair created outside of Amazon Web Services Payment
         * Cryptography. </p> <p>For symmetric and DUKPT encryption, Amazon Web Services
         * Payment Cryptography supports <code>TDES</code> and <code>AES</code> algorithms.
         * For asymmetric encryption, Amazon Web Services Payment Cryptography supports
         * <code>RSA</code>. To encrypt using DUKPT, a DUKPT key must already exist within
         * your account with <code>KeyModesOfUse</code> set to <code>DeriveKey</code> or a
         * new DUKPT can be generated by calling <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_CreateKey.html">CreateKey</a>.</p>
         * <p>For information about valid keys for this operation, see <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/keys-validattributes.html">Understanding
         * key attributes</a> and <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/crypto-ops-validkeys-ops.html">Key
         * types for specific data operations</a> in the <i>Amazon Web Services Payment
         * Cryptography User Guide</i>. </p> <p> <b>Cross-account use</b>: This operation
         * can't be used across different Amazon Web Services accounts.</p> <p> <b>Related
         * operations:</b> </p> <ul> <li> <p> <a>DecryptData</a> </p> </li> <li> <p>
         * <a>EncryptData</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_GetPublicKeyCertificate.html">GetPublicCertificate</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ImportKey.html">ImportKey</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/ReEncryptData">AWS
         * API Reference</a></p>
         */
        virtual Model::ReEncryptDataOutcome ReEncryptData(const Model::ReEncryptDataRequest& request) const;

        /**
         * A Callable wrapper for ReEncryptData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ReEncryptDataRequestT = Model::ReEncryptDataRequest>
        Model::ReEncryptDataOutcomeCallable ReEncryptDataCallable(const ReEncryptDataRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyDataClient::ReEncryptData, request);
        }

        /**
         * An Async wrapper for ReEncryptData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ReEncryptDataRequestT = Model::ReEncryptDataRequest>
        void ReEncryptDataAsync(const ReEncryptDataRequestT& request, const ReEncryptDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyDataClient::ReEncryptData, request, handler, context);
        }

        /**
         * <p>Translates encrypted PIN block from and to ISO 9564 formats 0,1,3,4. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/translate-pin-data.html">Translate
         * PIN data</a> in the <i>Amazon Web Services Payment Cryptography User
         * Guide</i>.</p> <p>PIN block translation involves changing the encrytion of PIN
         * block from one encryption key to another encryption key and changing PIN block
         * format from one to another without PIN block data leaving Amazon Web Services
         * Payment Cryptography. The encryption key transformation can be from PEK (Pin
         * Encryption Key) to BDK (Base Derivation Key) for DUKPT or from BDK for DUKPT to
         * PEK. Amazon Web Services Payment Cryptography supports <code>TDES</code> and
         * <code>AES</code> key derivation type for DUKPT translations. </p> <p>The allowed
         * combinations of PIN block format translations are guided by PCI. It is important
         * to note that not all encrypted PIN block formats (example, format 1) require PAN
         * (Primary Account Number) as input. And as such, PIN block format that requires
         * PAN (example, formats 0,3,4) cannot be translated to a format (format 1) that
         * does not require a PAN for generation. </p> <p>For information about valid keys
         * for this operation, see <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/keys-validattributes.html">Understanding
         * key attributes</a> and <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/crypto-ops-validkeys-ops.html">Key
         * types for specific data operations</a> in the <i>Amazon Web Services Payment
         * Cryptography User Guide</i>.</p>  <p>Amazon Web Services Payment
         * Cryptography currently supports ISO PIN block 4 translation for PIN block built
         * using legacy PAN length. That is, PAN is the right most 12 digits excluding the
         * check digits.</p>  <p> <b>Cross-account use</b>: This operation can't be
         * used across different Amazon Web Services accounts.</p> <p> <b>Related
         * operations:</b> </p> <ul> <li> <p> <a>GeneratePinData</a> </p> </li> <li> <p>
         * <a>VerifyPinData</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/TranslatePinData">AWS
         * API Reference</a></p>
         */
        virtual Model::TranslatePinDataOutcome TranslatePinData(const Model::TranslatePinDataRequest& request) const;

        /**
         * A Callable wrapper for TranslatePinData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TranslatePinDataRequestT = Model::TranslatePinDataRequest>
        Model::TranslatePinDataOutcomeCallable TranslatePinDataCallable(const TranslatePinDataRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyDataClient::TranslatePinData, request);
        }

        /**
         * An Async wrapper for TranslatePinData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TranslatePinDataRequestT = Model::TranslatePinDataRequest>
        void TranslatePinDataAsync(const TranslatePinDataRequestT& request, const TranslatePinDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyDataClient::TranslatePinData, request, handler, context);
        }

        /**
         * <p>Verifies Authorization Request Cryptogram (ARQC) for a EMV chip payment card
         * authorization. For more information, see <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/data-operations.verifyauthrequestcryptogram.html">Verify
         * auth request cryptogram</a> in the <i>Amazon Web Services Payment Cryptography
         * User Guide</i>.</p> <p>ARQC generation is done outside of Amazon Web Services
         * Payment Cryptography and is typically generated on a point of sale terminal for
         * an EMV chip card to obtain payment authorization during transaction time. For
         * ARQC verification, you must first import the ARQC generated outside of Amazon
         * Web Services Payment Cryptography by calling <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ImportKey.html">ImportKey</a>.
         * This operation uses the imported ARQC and an major encryption key (DUKPT)
         * created by calling <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_CreateKey.html">CreateKey</a>
         * to either provide a boolean ARQC verification result or provide an APRC
         * (Authorization Response Cryptogram) response using Method 1 or Method 2. The
         * <code>ARPC_METHOD_1</code> uses <code>AuthResponseCode</code> to generate ARPC
         * and <code>ARPC_METHOD_2</code> uses <code>CardStatusUpdate</code> to generate
         * ARPC. </p> <p>For information about valid keys for this operation, see <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/keys-validattributes.html">Understanding
         * key attributes</a> and <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/crypto-ops-validkeys-ops.html">Key
         * types for specific data operations</a> in the <i>Amazon Web Services Payment
         * Cryptography User Guide</i>.</p> <p> <b>Cross-account use</b>: This operation
         * can't be used across different Amazon Web Services accounts.</p> <p> <b>Related
         * operations:</b> </p> <ul> <li> <p> <a>VerifyCardValidationData</a> </p> </li>
         * <li> <p> <a>VerifyPinData</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/VerifyAuthRequestCryptogram">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifyAuthRequestCryptogramOutcome VerifyAuthRequestCryptogram(const Model::VerifyAuthRequestCryptogramRequest& request) const;

        /**
         * A Callable wrapper for VerifyAuthRequestCryptogram that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename VerifyAuthRequestCryptogramRequestT = Model::VerifyAuthRequestCryptogramRequest>
        Model::VerifyAuthRequestCryptogramOutcomeCallable VerifyAuthRequestCryptogramCallable(const VerifyAuthRequestCryptogramRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyDataClient::VerifyAuthRequestCryptogram, request);
        }

        /**
         * An Async wrapper for VerifyAuthRequestCryptogram that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename VerifyAuthRequestCryptogramRequestT = Model::VerifyAuthRequestCryptogramRequest>
        void VerifyAuthRequestCryptogramAsync(const VerifyAuthRequestCryptogramRequestT& request, const VerifyAuthRequestCryptogramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyDataClient::VerifyAuthRequestCryptogram, request, handler, context);
        }

        /**
         * <p>Verifies card-related validation data using algorithms such as Card
         * Verification Values (CVV/CVV2), Dynamic Card Verification Values (dCVV/dCVV2)
         * and Card Security Codes (CSC). For more information, see <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/verify-card-data.html">Verify
         * card data</a> in the <i>Amazon Web Services Payment Cryptography User
         * Guide</i>.</p> <p>This operation validates the CVV or CSC codes that is printed
         * on a payment credit or debit card during card payment transaction. The input
         * values are typically provided as part of an inbound transaction to an issuer or
         * supporting platform partner. Amazon Web Services Payment Cryptography uses CVV
         * or CSC, PAN (Primary Account Number) and expiration date of the card to check
         * its validity during transaction processing. In this operation, the CVK (Card
         * Verification Key) encryption key for use with card data verification is same as
         * the one in used for <a>GenerateCardValidationData</a>. </p> <p>For information
         * about valid keys for this operation, see <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/keys-validattributes.html">Understanding
         * key attributes</a> and <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/crypto-ops-validkeys-ops.html">Key
         * types for specific data operations</a> in the <i>Amazon Web Services Payment
         * Cryptography User Guide</i>. </p> <p> <b>Cross-account use</b>: This operation
         * can't be used across different Amazon Web Services accounts.</p> <p> <b>Related
         * operations:</b> </p> <ul> <li> <p> <a>GenerateCardValidationData</a> </p> </li>
         * <li> <p> <a>VerifyAuthRequestCryptogram</a> </p> </li> <li> <p>
         * <a>VerifyPinData</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/VerifyCardValidationData">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifyCardValidationDataOutcome VerifyCardValidationData(const Model::VerifyCardValidationDataRequest& request) const;

        /**
         * A Callable wrapper for VerifyCardValidationData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename VerifyCardValidationDataRequestT = Model::VerifyCardValidationDataRequest>
        Model::VerifyCardValidationDataOutcomeCallable VerifyCardValidationDataCallable(const VerifyCardValidationDataRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyDataClient::VerifyCardValidationData, request);
        }

        /**
         * An Async wrapper for VerifyCardValidationData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename VerifyCardValidationDataRequestT = Model::VerifyCardValidationDataRequest>
        void VerifyCardValidationDataAsync(const VerifyCardValidationDataRequestT& request, const VerifyCardValidationDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyDataClient::VerifyCardValidationData, request, handler, context);
        }

        /**
         * <p>Verifies a Message Authentication Code (MAC). </p> <p>You can use this
         * operation to verify MAC for message data authentication such as . In this
         * operation, you must use the same message data, secret encryption key and MAC
         * algorithm that was used to generate MAC. You can use this operation to verify a
         * DUPKT, CMAC, HMAC or EMV MAC by setting generation attributes and algorithm to
         * the associated values. </p> <p>For information about valid keys for this
         * operation, see <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/keys-validattributes.html">Understanding
         * key attributes</a> and <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/crypto-ops-validkeys-ops.html">Key
         * types for specific data operations</a> in the <i>Amazon Web Services Payment
         * Cryptography User Guide</i>. </p> <p> <b>Cross-account use</b>: This operation
         * can't be used across different Amazon Web Services accounts.</p> <p> <b>Related
         * operations:</b> </p> <ul> <li> <p> <a>GenerateMac</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/VerifyMac">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifyMacOutcome VerifyMac(const Model::VerifyMacRequest& request) const;

        /**
         * A Callable wrapper for VerifyMac that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename VerifyMacRequestT = Model::VerifyMacRequest>
        Model::VerifyMacOutcomeCallable VerifyMacCallable(const VerifyMacRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyDataClient::VerifyMac, request);
        }

        /**
         * An Async wrapper for VerifyMac that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename VerifyMacRequestT = Model::VerifyMacRequest>
        void VerifyMacAsync(const VerifyMacRequestT& request, const VerifyMacResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyDataClient::VerifyMac, request, handler, context);
        }

        /**
         * <p>Verifies pin-related data such as PIN and PIN Offset using algorithms
         * including VISA PVV and IBM3624. For more information, see <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/verify-pin-data.html">Verify
         * PIN data</a> in the <i>Amazon Web Services Payment Cryptography User
         * Guide</i>.</p> <p>This operation verifies PIN data for user payment card. A card
         * holder PIN data is never transmitted in clear to or from Amazon Web Services
         * Payment Cryptography. This operation uses PIN Verification Key (PVK) for PIN or
         * PIN Offset generation and then encrypts it using PIN Encryption Key (PEK) to
         * create an <code>EncryptedPinBlock</code> for transmission from Amazon Web
         * Services Payment Cryptography. </p> <p>For information about valid keys for this
         * operation, see <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/keys-validattributes.html">Understanding
         * key attributes</a> and <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/crypto-ops-validkeys-ops.html">Key
         * types for specific data operations</a> in the <i>Amazon Web Services Payment
         * Cryptography User Guide</i>. </p> <p> <b>Cross-account use</b>: This operation
         * can't be used across different Amazon Web Services accounts.</p> <p> <b>Related
         * operations:</b> </p> <ul> <li> <p> <a>GeneratePinData</a> </p> </li> <li> <p>
         * <a>TranslatePinData</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/VerifyPinData">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifyPinDataOutcome VerifyPinData(const Model::VerifyPinDataRequest& request) const;

        /**
         * A Callable wrapper for VerifyPinData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename VerifyPinDataRequestT = Model::VerifyPinDataRequest>
        Model::VerifyPinDataOutcomeCallable VerifyPinDataCallable(const VerifyPinDataRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyDataClient::VerifyPinData, request);
        }

        /**
         * An Async wrapper for VerifyPinData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename VerifyPinDataRequestT = Model::VerifyPinDataRequest>
        void VerifyPinDataAsync(const VerifyPinDataRequestT& request, const VerifyPinDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyDataClient::VerifyPinData, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PaymentCryptographyDataEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<PaymentCryptographyDataClient>;
      void init(const PaymentCryptographyDataClientConfiguration& clientConfiguration);

      PaymentCryptographyDataClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<PaymentCryptographyDataEndpointProviderBase> m_endpointProvider;
  };

} // namespace PaymentCryptographyData
} // namespace Aws
