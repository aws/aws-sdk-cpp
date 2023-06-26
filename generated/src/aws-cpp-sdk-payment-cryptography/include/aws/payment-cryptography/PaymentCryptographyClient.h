﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payment-cryptography/PaymentCryptographyServiceClientModel.h>

namespace Aws
{
namespace PaymentCryptography
{
  /**
   * <p>You use the Amazon Web Services Payment Cryptography Control Plane to manage
   * the encryption keys you use for payment-related cryptographic operations. You
   * can create, import, export, share, manage, and delete keys. You can also manage
   * Identity and Access Management (IAM) policies for keys. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/security-iam.html">Identity
   * and access management</a> in the <i>Amazon Web Services Payment Cryptography
   * User Guide.</i> </p> <p>To use encryption keys for payment-related transaction
   * processing and associated cryptographic operations, you use the <a
   * href="https://docs.aws.amazon.com/payment-cryptography/latest/DataAPIReference/Welcome.html">Amazon
   * Web Services Payment Cryptography Data Plane</a>. You can encrypt, decrypt,
   * generate, verify, and translate payment-related cryptographic operations. </p>
   * <p>All Amazon Web Services Payment Cryptography API calls must be signed and
   * transmitted using Transport Layer Security (TLS). We recommend you always use
   * the latest supported TLS version for logging API requests. </p> <p>Amazon Web
   * Services Payment Cryptography supports CloudTrail, a service that logs Amazon
   * Web Services API calls and related events for your Amazon Web Services account
   * and delivers them to an Amazon S3 bucket that you specify. By using the
   * information collected by CloudTrail, you can determine what requests were made
   * to Amazon Web Services Payment Cryptography, who made the request, when it was
   * made, and so on. If you don't conﬁgure a trail, you can still view the most
   * recent events in the CloudTrail console. For more information, see the <a
   * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/">CloudTrail
   * User Guide</a>.</p>
   */
  class AWS_PAYMENTCRYPTOGRAPHY_API PaymentCryptographyClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<PaymentCryptographyClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

      typedef PaymentCryptographyClientConfiguration ClientConfigurationType;
      typedef PaymentCryptographyEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PaymentCryptographyClient(const Aws::PaymentCryptography::PaymentCryptographyClientConfiguration& clientConfiguration = Aws::PaymentCryptography::PaymentCryptographyClientConfiguration(),
                                  std::shared_ptr<PaymentCryptographyEndpointProviderBase> endpointProvider = Aws::MakeShared<PaymentCryptographyEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PaymentCryptographyClient(const Aws::Auth::AWSCredentials& credentials,
                                  std::shared_ptr<PaymentCryptographyEndpointProviderBase> endpointProvider = Aws::MakeShared<PaymentCryptographyEndpointProvider>(ALLOCATION_TAG),
                                  const Aws::PaymentCryptography::PaymentCryptographyClientConfiguration& clientConfiguration = Aws::PaymentCryptography::PaymentCryptographyClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PaymentCryptographyClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                  std::shared_ptr<PaymentCryptographyEndpointProviderBase> endpointProvider = Aws::MakeShared<PaymentCryptographyEndpointProvider>(ALLOCATION_TAG),
                                  const Aws::PaymentCryptography::PaymentCryptographyClientConfiguration& clientConfiguration = Aws::PaymentCryptography::PaymentCryptographyClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PaymentCryptographyClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PaymentCryptographyClient(const Aws::Auth::AWSCredentials& credentials,
                                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PaymentCryptographyClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~PaymentCryptographyClient();

        /**
         * <p>Creates an <i>alias</i>, or a friendly name, for an Amazon Web Services
         * Payment Cryptography key. You can use an alias to identify a key in the console
         * and when you call cryptographic operations such as <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/DataAPIReference/API_EncryptData.html">EncryptData</a>
         * or <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/DataAPIReference/API_DecryptData.html">DecryptData</a>.</p>
         * <p>You can associate the alias with any key in the same Amazon Web Services
         * Region. Each alias is associated with only one key at a time, but a key can have
         * multiple aliases. You can't create an alias without a key. The alias must be
         * unique in the account and Amazon Web Services Region, but you can create another
         * alias with the same name in a different Amazon Web Services Region.</p> <p>To
         * change the key that's associated with the alias, call <a>UpdateAlias</a>. To
         * delete the alias, call <a>DeleteAlias</a>. These operations don't affect the
         * underlying key. To get the alias that you created, call <a>ListAliases</a>.</p>
         * <p> <b>Cross-account use</b>: This operation can't be used across different
         * Amazon Web Services accounts.</p> <p> <b>Related operations:</b> </p> <ul> <li>
         * <p> <a>DeleteAlias</a> </p> </li> <li> <p> <a>GetAlias</a> </p> </li> <li> <p>
         * <a>ListAliases</a> </p> </li> <li> <p> <a>UpdateAlias</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/CreateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAliasOutcome CreateAlias(const Model::CreateAliasRequest& request) const;

        /**
         * A Callable wrapper for CreateAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAliasRequestT = Model::CreateAliasRequest>
        Model::CreateAliasOutcomeCallable CreateAliasCallable(const CreateAliasRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyClient::CreateAlias, request);
        }

        /**
         * An Async wrapper for CreateAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAliasRequestT = Model::CreateAliasRequest>
        void CreateAliasAsync(const CreateAliasRequestT& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyClient::CreateAlias, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Web Services Payment Cryptography key, a logical
         * representation of a cryptographic key, that is unique in your account and Amazon
         * Web Services Region. You use keys for cryptographic functions such as encryption
         * and decryption. </p> <p>In addition to the key material used in cryptographic
         * operations, an Amazon Web Services Payment Cryptography key includes metadata
         * such as the key ARN, key usage, key origin, creation date, description, and key
         * state.</p> <p>When you create a key, you specify both immutable and mutable data
         * about the key. The immutable data contains key attributes that defines the scope
         * and cryptographic operations that you can perform using the key, for example key
         * class (example: <code>SYMMETRIC_KEY</code>), key algorithm (example:
         * <code>TDES_2KEY</code>), key usage (example:
         * <code>TR31_P0_PIN_ENCRYPTION_KEY</code>) and key modes of use (example:
         * <code>Encrypt</code>). For information about valid combinations of key
         * attributes, see <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/keys-validattributes.html">Understanding
         * key attributes</a> in the <i>Amazon Web Services Payment Cryptography User
         * Guide</i>. The mutable data contained within a key includes usage timestamp and
         * key deletion timestamp and can be modified after creation.</p> <p>Amazon Web
         * Services Payment Cryptography binds key attributes to keys using key blocks when
         * you store or export them. Amazon Web Services Payment Cryptography stores the
         * key contents wrapped and never stores or transmits them in the clear. </p> <p>
         * <b>Cross-account use</b>: This operation can't be used across different Amazon
         * Web Services accounts.</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>DeleteKey</a> </p> </li> <li> <p> <a>GetKey</a> </p> </li> <li> <p>
         * <a>ListKeys</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/CreateKey">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateKeyOutcome CreateKey(const Model::CreateKeyRequest& request) const;

        /**
         * A Callable wrapper for CreateKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateKeyRequestT = Model::CreateKeyRequest>
        Model::CreateKeyOutcomeCallable CreateKeyCallable(const CreateKeyRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyClient::CreateKey, request);
        }

        /**
         * An Async wrapper for CreateKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateKeyRequestT = Model::CreateKeyRequest>
        void CreateKeyAsync(const CreateKeyRequestT& request, const CreateKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyClient::CreateKey, request, handler, context);
        }

        /**
         * <p>Deletes the alias, but doesn't affect the underlying key.</p> <p>Each key can
         * have multiple aliases. To get the aliases of all keys, use the
         * <a>ListAliases</a> operation. To change the alias of a key, first use
         * <a>DeleteAlias</a> to delete the current alias and then use <a>CreateAlias</a>
         * to create a new alias. To associate an existing alias with a different key, call
         * <a>UpdateAlias</a>.</p> <p> <b>Cross-account use:</b> This operation can't be
         * used across different Amazon Web Services accounts.</p> <p> <b>Related
         * operations:</b> </p> <ul> <li> <p> <a>CreateAlias</a> </p> </li> <li> <p>
         * <a>GetAlias</a> </p> </li> <li> <p> <a>ListAliases</a> </p> </li> <li> <p>
         * <a>UpdateAlias</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/DeleteAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAliasOutcome DeleteAlias(const Model::DeleteAliasRequest& request) const;

        /**
         * A Callable wrapper for DeleteAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAliasRequestT = Model::DeleteAliasRequest>
        Model::DeleteAliasOutcomeCallable DeleteAliasCallable(const DeleteAliasRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyClient::DeleteAlias, request);
        }

        /**
         * An Async wrapper for DeleteAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAliasRequestT = Model::DeleteAliasRequest>
        void DeleteAliasAsync(const DeleteAliasRequestT& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyClient::DeleteAlias, request, handler, context);
        }

        /**
         * <p>Deletes the key material and all metadata associated with Amazon Web Services
         * Payment Cryptography key.</p> <p>Key deletion is irreversible. After a key is
         * deleted, you can't perform cryptographic operations using the key. For example,
         * you can't decrypt data that was encrypted by a deleted Amazon Web Services
         * Payment Cryptography key, and the data may become unrecoverable. Because key
         * deletion is destructive, Amazon Web Services Payment Cryptography has a safety
         * mechanism to prevent accidental deletion of a key. When you call this operation,
         * Amazon Web Services Payment Cryptography disables the specified key but doesn't
         * delete it until after a waiting period. The default waiting period is 7 days. To
         * set a different waiting period, set <code>DeleteKeyInDays</code>. During the
         * waiting period, the <code>KeyState</code> is <code>DELETE_PENDING</code>. After
         * the key is deleted, the <code>KeyState</code> is
         * <code>DELETE_COMPLETE</code>.</p> <p>If you delete key material, you can use
         * <a>ImportKey</a> to reimport the same key material into the Amazon Web Services
         * Payment Cryptography key.</p> <p>You should delete a key only when you are sure
         * that you don't need to use it anymore and no other parties are utilizing this
         * key. If you aren't sure, consider deactivating it instead by calling
         * <a>StopKeyUsage</a>.</p> <p> <b>Cross-account use:</b> This operation can't be
         * used across different Amazon Web Services accounts.</p> <p> <b>Related
         * operations:</b> </p> <ul> <li> <p> <a>RestoreKey</a> </p> </li> <li> <p>
         * <a>StartKeyUsage</a> </p> </li> <li> <p> <a>StopKeyUsage</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/DeleteKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKeyOutcome DeleteKey(const Model::DeleteKeyRequest& request) const;

        /**
         * A Callable wrapper for DeleteKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteKeyRequestT = Model::DeleteKeyRequest>
        Model::DeleteKeyOutcomeCallable DeleteKeyCallable(const DeleteKeyRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyClient::DeleteKey, request);
        }

        /**
         * An Async wrapper for DeleteKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteKeyRequestT = Model::DeleteKeyRequest>
        void DeleteKeyAsync(const DeleteKeyRequestT& request, const DeleteKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyClient::DeleteKey, request, handler, context);
        }

        /**
         * <p>Exports a key from Amazon Web Services Payment Cryptography using either ANSI
         * X9 TR-34 or TR-31 key export standard.</p> <p>Amazon Web Services Payment
         * Cryptography simplifies main or root key exchange process by eliminating the
         * need of a paper-based key exchange process. It takes a modern and secure
         * approach based of the ANSI X9 TR-34 key exchange standard.</p> <p>You can use
         * <code>ExportKey</code> to export main or root keys such as KEK (Key Encryption
         * Key), using asymmetric key exchange technique following ANSI X9 TR-34 standard.
         * The ANSI X9 TR-34 standard uses asymmetric keys to establishes bi-directional
         * trust between the two parties exchanging keys. After which you can export
         * working keys using the ANSI X9 TR-31 symmetric key exchange standard as mandated
         * by PCI PIN. Using this operation, you can share your Amazon Web Services Payment
         * Cryptography generated keys with other service partners to perform cryptographic
         * operations outside of Amazon Web Services Payment Cryptography </p> <p> <b>TR-34
         * key export</b> </p> <p>Amazon Web Services Payment Cryptography uses TR-34
         * asymmetric key exchange standard to export main keys such as KEK. In TR-34
         * terminology, the sending party of the key is called Key Distribution Host (KDH)
         * and the receiving party of the key is called Key Receiving Host (KRH). In key
         * export process, KDH is Amazon Web Services Payment Cryptography which initiates
         * key export. KRH is the user receiving the key. Before you initiate TR-34 key
         * export, you must obtain an export token by calling
         * <a>GetParametersForExport</a>. This operation also returns the signing key
         * certificate that KDH uses to sign the wrapped key to generate a TR-34 wrapped
         * key block. The export token expires after 7 days.</p> <p>Set the following
         * parameters:</p> <dl> <dt>CertificateAuthorityPublicKeyIdentifier</dt> <dd>
         * <p>The <code>KeyARN</code> of the certificate chain that will sign the wrapping
         * key certificate. This must exist within Amazon Web Services Payment Cryptography
         * before you initiate TR-34 key export. If it does not exist, you can import it by
         * calling <a>ImportKey</a> for <code>RootCertificatePublicKey</code>.</p> </dd>
         * <dt>ExportToken</dt> <dd> <p>Obtained from KDH by calling
         * <a>GetParametersForExport</a>.</p> </dd> <dt>WrappingKeyCertificate</dt> <dd>
         * <p>Amazon Web Services Payment Cryptography uses this to wrap the key under
         * export.</p> </dd> </dl> <p>When this operation is successful, Amazon Web
         * Services Payment Cryptography returns the TR-34 wrapped key block. </p> <p>
         * <b>TR-31 key export</b> </p> <p>Amazon Web Services Payment Cryptography uses
         * TR-31 symmetric key exchange standard to export working keys. In TR-31, you must
         * use a main key such as KEK to encrypt or wrap the key under export. To establish
         * a KEK, you can use <a>CreateKey</a> or <a>ImportKey</a>. When this operation is
         * successful, Amazon Web Services Payment Cryptography returns a TR-31 wrapped key
         * block. </p> <p> <b>Cross-account use:</b> This operation can't be used across
         * different Amazon Web Services accounts.</p> <p> <b>Related operations:</b> </p>
         * <ul> <li> <p> <a>GetParametersForExport</a> </p> </li> <li> <p> <a>ImportKey</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/ExportKey">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportKeyOutcome ExportKey(const Model::ExportKeyRequest& request) const;

        /**
         * A Callable wrapper for ExportKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExportKeyRequestT = Model::ExportKeyRequest>
        Model::ExportKeyOutcomeCallable ExportKeyCallable(const ExportKeyRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyClient::ExportKey, request);
        }

        /**
         * An Async wrapper for ExportKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportKeyRequestT = Model::ExportKeyRequest>
        void ExportKeyAsync(const ExportKeyRequestT& request, const ExportKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyClient::ExportKey, request, handler, context);
        }

        /**
         * <p>Gets the Amazon Web Services Payment Cryptography key associated with the
         * alias.</p> <p> <b>Cross-account use:</b> This operation can't be used across
         * different Amazon Web Services accounts.</p> <p> <b>Related operations:</b> </p>
         * <ul> <li> <p> <a>CreateAlias</a> </p> </li> <li> <p> <a>DeleteAlias</a> </p>
         * </li> <li> <p> <a>ListAliases</a> </p> </li> <li> <p> <a>UpdateAlias</a> </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/GetAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAliasOutcome GetAlias(const Model::GetAliasRequest& request) const;

        /**
         * A Callable wrapper for GetAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAliasRequestT = Model::GetAliasRequest>
        Model::GetAliasOutcomeCallable GetAliasCallable(const GetAliasRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyClient::GetAlias, request);
        }

        /**
         * An Async wrapper for GetAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAliasRequestT = Model::GetAliasRequest>
        void GetAliasAsync(const GetAliasRequestT& request, const GetAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyClient::GetAlias, request, handler, context);
        }

        /**
         * <p>Gets the key material for an Amazon Web Services Payment Cryptography key,
         * including the immutable and mutable data specified when the key was created.</p>
         * <p> <b>Cross-account use:</b> This operation can't be used across different
         * Amazon Web Services accounts.</p> <p> <b>Related operations:</b> </p> <ul> <li>
         * <p> <a>CreateKey</a> </p> </li> <li> <p> <a>DeleteKey</a> </p> </li> <li> <p>
         * <a>ListKeys</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/GetKey">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKeyOutcome GetKey(const Model::GetKeyRequest& request) const;

        /**
         * A Callable wrapper for GetKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetKeyRequestT = Model::GetKeyRequest>
        Model::GetKeyOutcomeCallable GetKeyCallable(const GetKeyRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyClient::GetKey, request);
        }

        /**
         * An Async wrapper for GetKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetKeyRequestT = Model::GetKeyRequest>
        void GetKeyAsync(const GetKeyRequestT& request, const GetKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyClient::GetKey, request, handler, context);
        }

        /**
         * <p>Gets the export token and the signing key certificate to initiate a TR-34 key
         * export from Amazon Web Services Payment Cryptography.</p> <p>The signing key
         * certificate signs the wrapped key under export within the TR-34 key payload. The
         * export token and signing key certificate must be in place and operational before
         * calling <a>ExportKey</a>. The export token expires in 7 days. You can use the
         * same export token to export multiple keys from your service account.</p> <p>
         * <b>Cross-account use:</b> This operation can't be used across different Amazon
         * Web Services accounts.</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>ExportKey</a> </p> </li> <li> <p> <a>GetParametersForImport</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/GetParametersForExport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetParametersForExportOutcome GetParametersForExport(const Model::GetParametersForExportRequest& request) const;

        /**
         * A Callable wrapper for GetParametersForExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetParametersForExportRequestT = Model::GetParametersForExportRequest>
        Model::GetParametersForExportOutcomeCallable GetParametersForExportCallable(const GetParametersForExportRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyClient::GetParametersForExport, request);
        }

        /**
         * An Async wrapper for GetParametersForExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetParametersForExportRequestT = Model::GetParametersForExportRequest>
        void GetParametersForExportAsync(const GetParametersForExportRequestT& request, const GetParametersForExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyClient::GetParametersForExport, request, handler, context);
        }

        /**
         * <p>Gets the import token and the wrapping key certificate to initiate a TR-34
         * key import into Amazon Web Services Payment Cryptography.</p> <p>The wrapping
         * key certificate wraps the key under import within the TR-34 key payload. The
         * import token and wrapping key certificate must be in place and operational
         * before calling <a>ImportKey</a>. The import token expires in 7 days. The same
         * import token can be used to import multiple keys into your service account.</p>
         * <p> <b>Cross-account use:</b> This operation can't be used across different
         * Amazon Web Services accounts.</p> <p> <b>Related operations:</b> </p> <ul> <li>
         * <p> <a>GetParametersForExport</a> </p> </li> <li> <p> <a>ImportKey</a> </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/GetParametersForImport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetParametersForImportOutcome GetParametersForImport(const Model::GetParametersForImportRequest& request) const;

        /**
         * A Callable wrapper for GetParametersForImport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetParametersForImportRequestT = Model::GetParametersForImportRequest>
        Model::GetParametersForImportOutcomeCallable GetParametersForImportCallable(const GetParametersForImportRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyClient::GetParametersForImport, request);
        }

        /**
         * An Async wrapper for GetParametersForImport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetParametersForImportRequestT = Model::GetParametersForImportRequest>
        void GetParametersForImportAsync(const GetParametersForImportRequestT& request, const GetParametersForImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyClient::GetParametersForImport, request, handler, context);
        }

        /**
         * <p>Gets the public key certificate of the asymmetric key pair that exists within
         * Amazon Web Services Payment Cryptography.</p> <p>Unlike the private key of an
         * asymmetric key, which never leaves Amazon Web Services Payment Cryptography
         * unencrypted, callers with <code>GetPublicKeyCertificate</code> permission can
         * download the public key certificate of the asymmetric key. You can share the
         * public key certificate to allow others to encrypt messages and verify signatures
         * outside of Amazon Web Services Payment Cryptography</p> <p> <b>Cross-account
         * use:</b> This operation can't be used across different Amazon Web Services
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/GetPublicKeyCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPublicKeyCertificateOutcome GetPublicKeyCertificate(const Model::GetPublicKeyCertificateRequest& request) const;

        /**
         * A Callable wrapper for GetPublicKeyCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPublicKeyCertificateRequestT = Model::GetPublicKeyCertificateRequest>
        Model::GetPublicKeyCertificateOutcomeCallable GetPublicKeyCertificateCallable(const GetPublicKeyCertificateRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyClient::GetPublicKeyCertificate, request);
        }

        /**
         * An Async wrapper for GetPublicKeyCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPublicKeyCertificateRequestT = Model::GetPublicKeyCertificateRequest>
        void GetPublicKeyCertificateAsync(const GetPublicKeyCertificateRequestT& request, const GetPublicKeyCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyClient::GetPublicKeyCertificate, request, handler, context);
        }

        /**
         * <p>Imports keys and public key certificates into Amazon Web Services Payment
         * Cryptography.</p> <p>Amazon Web Services Payment Cryptography simplifies main or
         * root key exchange process by eliminating the need of a paper-based key exchange
         * process. It takes a modern and secure approach based of the ANSI X9 TR-34 key
         * exchange standard. </p> <p>You can use <code>ImportKey</code> to import main or
         * root keys such as KEK (Key Encryption Key) using asymmetric key exchange
         * technique following the ANSI X9 TR-34 standard. The ANSI X9 TR-34 standard uses
         * asymmetric keys to establishes bi-directional trust between the two parties
         * exchanging keys. </p> <p>After you have imported a main or root key, you can
         * import working keys to perform various cryptographic operations within Amazon
         * Web Services Payment Cryptography using the ANSI X9 TR-31 symmetric key exchange
         * standard as mandated by PCI PIN.</p> <p>You can also import a <i>root public key
         * certificate</i>, a self-signed certificate used to sign other public key
         * certificates, or a <i>trusted public key certificate</i> under an already
         * established root public key certificate. </p> <p> <b>To import a public root key
         * certificate</b> </p> <p>Using this operation, you can import the public
         * component (in PEM cerificate format) of your private root key. You can use the
         * imported public root key certificate for digital signatures, for example signing
         * wrapping key or signing key in TR-34, within your Amazon Web Services Payment
         * Cryptography account. </p> <p>Set the following parameters:</p> <ul> <li> <p>
         * <code>KeyMaterial</code>: <code>RootCertificatePublicKey</code> </p> </li> <li>
         * <p> <code>KeyClass</code>: <code>PUBLIC_KEY</code> </p> </li> <li> <p>
         * <code>KeyModesOfUse</code>: <code>Verify</code> </p> </li> <li> <p>
         * <code>KeyUsage</code>: <code>TR31_S0_ASYMMETRIC_KEY_FOR_DIGITAL_SIGNATURE</code>
         * </p> </li> <li> <p> <code>PublicKeyCertificate</code>: The certificate authority
         * used to sign the root public key certificate.</p> </li> </ul> <p> <b>To import a
         * trusted public key certificate</b> </p> <p>The root public key certificate must
         * be in place and operational before you import a trusted public key certificate.
         * Set the following parameters:</p> <ul> <li> <p> <code>KeyMaterial</code>:
         * <code>TrustedCertificatePublicKey</code> </p> </li> <li> <p>
         * <code>CertificateAuthorityPublicKeyIdentifier</code>: <code>KeyArn</code> of the
         * <code>RootCertificatePublicKey</code>.</p> </li> <li> <p>
         * <code>KeyModesOfUse</code> and <code>KeyUsage</code>: Corresponding to the
         * cryptographic operations such as wrap, sign, or encrypt that you will allow the
         * trusted public key certificate to perform.</p> </li> <li> <p>
         * <code>PublicKeyCertificate</code>: The certificate authority used to sign the
         * trusted public key certificate.</p> </li> </ul> <p> <b>Import main keys</b> </p>
         * <p>Amazon Web Services Payment Cryptography uses TR-34 asymmetric key exchange
         * standard to import main keys such as KEK. In TR-34 terminology, the sending
         * party of the key is called Key Distribution Host (KDH) and the receiving party
         * of the key is called Key Receiving Host (KRH). During the key import process,
         * KDH is the user who initiates the key import and KRH is Amazon Web Services
         * Payment Cryptography who receives the key. Before initiating TR-34 key import,
         * you must obtain an import token by calling <a>GetParametersForImport</a>. This
         * operation also returns the wrapping key certificate that KDH uses wrap key under
         * import to generate a TR-34 wrapped key block. The import token expires after 7
         * days.</p> <p>Set the following parameters:</p> <ul> <li> <p>
         * <code>CertificateAuthorityPublicKeyIdentifier</code>: The <code>KeyArn</code> of
         * the certificate chain that will sign the signing key certificate and should
         * exist within Amazon Web Services Payment Cryptography before initiating TR-34
         * key import. If it does not exist, you can import it by calling by calling
         * <code>ImportKey</code> for <code>RootCertificatePublicKey</code>.</p> </li> <li>
         * <p> <code>ImportToken</code>: Obtained from KRH by calling
         * <a>GetParametersForImport</a>.</p> </li> <li> <p> <code>WrappedKeyBlock</code>:
         * The TR-34 wrapped key block from KDH. It contains the KDH key under import,
         * wrapped with KRH provided wrapping key certificate and signed by the KDH private
         * signing key. This TR-34 key block is generated by the KDH Hardware Security
         * Module (HSM) outside of Amazon Web Services Payment Cryptography.</p> </li> <li>
         * <p> <code>SigningKeyCertificate</code>: The public component of the private key
         * that signed the KDH TR-34 wrapped key block. In PEM certificate format.</p>
         * </li> </ul>  <p>TR-34 is intended primarily to exchange 3DES keys. Your
         * ability to export AES-128 and larger AES keys may be dependent on your source
         * system.</p>  <p> <b>Import working keys</b> </p> <p>Amazon Web Services
         * Payment Cryptography uses TR-31 symmetric key exchange standard to import
         * working keys. A KEK must be established within Amazon Web Services Payment
         * Cryptography by using TR-34 key import. To initiate a TR-31 key import, set the
         * following parameters:</p> <ul> <li> <p> <code>WrappedKeyBlock</code>: The key
         * under import and encrypted using KEK. The TR-31 key block generated by your HSM
         * outside of Amazon Web Services Payment Cryptography. </p> </li> <li> <p>
         * <code>WrappingKeyIdentifier</code>: The <code>KeyArn</code> of the KEK that
         * Amazon Web Services Payment Cryptography uses to decrypt or unwrap the key under
         * import.</p> </li> </ul> <p> <b>Cross-account use:</b> This operation can't be
         * used across different Amazon Web Services accounts.</p> <p> <b>Related
         * operations:</b> </p> <ul> <li> <p> <a>ExportKey</a> </p> </li> <li> <p>
         * <a>GetParametersForImport</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/ImportKey">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportKeyOutcome ImportKey(const Model::ImportKeyRequest& request) const;

        /**
         * A Callable wrapper for ImportKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportKeyRequestT = Model::ImportKeyRequest>
        Model::ImportKeyOutcomeCallable ImportKeyCallable(const ImportKeyRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyClient::ImportKey, request);
        }

        /**
         * An Async wrapper for ImportKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportKeyRequestT = Model::ImportKeyRequest>
        void ImportKeyAsync(const ImportKeyRequestT& request, const ImportKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyClient::ImportKey, request, handler, context);
        }

        /**
         * <p>Lists the aliases for all keys in the caller's Amazon Web Services account
         * and Amazon Web Services Region. You can filter the list of aliases. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/keys-managealias.html">Using
         * aliases</a> in the <i>Amazon Web Services Payment Cryptography User
         * Guide</i>.</p> <p>This is a paginated operation, which means that each response
         * might contain only a subset of all the aliases. When the response contains only
         * a subset of aliases, it includes a <code>NextToken</code> value. Use this value
         * in a subsequent <code>ListAliases</code> request to get more aliases. When you
         * receive a response with no NextToken (or an empty or null value), that means
         * there are no more aliases to get.</p> <p> <b>Cross-account use:</b> This
         * operation can't be used across different Amazon Web Services accounts.</p> <p>
         * <b>Related operations:</b> </p> <ul> <li> <p> <a>CreateAlias</a> </p> </li> <li>
         * <p> <a>DeleteAlias</a> </p> </li> <li> <p> <a>GetAlias</a> </p> </li> <li> <p>
         * <a>UpdateAlias</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/ListAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAliasesOutcome ListAliases(const Model::ListAliasesRequest& request) const;

        /**
         * A Callable wrapper for ListAliases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAliasesRequestT = Model::ListAliasesRequest>
        Model::ListAliasesOutcomeCallable ListAliasesCallable(const ListAliasesRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyClient::ListAliases, request);
        }

        /**
         * An Async wrapper for ListAliases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAliasesRequestT = Model::ListAliasesRequest>
        void ListAliasesAsync(const ListAliasesRequestT& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyClient::ListAliases, request, handler, context);
        }

        /**
         * <p>Lists the keys in the caller's Amazon Web Services account and Amazon Web
         * Services Region. You can filter the list of keys.</p> <p>This is a paginated
         * operation, which means that each response might contain only a subset of all the
         * keys. When the response contains only a subset of keys, it includes a
         * <code>NextToken</code> value. Use this value in a subsequent
         * <code>ListKeys</code> request to get more keys. When you receive a response with
         * no NextToken (or an empty or null value), that means there are no more keys to
         * get.</p> <p> <b>Cross-account use:</b> This operation can't be used across
         * different Amazon Web Services accounts.</p> <p> <b>Related operations:</b> </p>
         * <ul> <li> <p> <a>CreateKey</a> </p> </li> <li> <p> <a>DeleteKey</a> </p> </li>
         * <li> <p> <a>GetKey</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/ListKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKeysOutcome ListKeys(const Model::ListKeysRequest& request) const;

        /**
         * A Callable wrapper for ListKeys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListKeysRequestT = Model::ListKeysRequest>
        Model::ListKeysOutcomeCallable ListKeysCallable(const ListKeysRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyClient::ListKeys, request);
        }

        /**
         * An Async wrapper for ListKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListKeysRequestT = Model::ListKeysRequest>
        void ListKeysAsync(const ListKeysRequestT& request, const ListKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyClient::ListKeys, request, handler, context);
        }

        /**
         * <p>Lists the tags for an Amazon Web Services resource.</p> <p>This is a
         * paginated operation, which means that each response might contain only a subset
         * of all the tags. When the response contains only a subset of tags, it includes a
         * <code>NextToken</code> value. Use this value in a subsequent
         * <code>ListTagsForResource</code> request to get more tags. When you receive a
         * response with no NextToken (or an empty or null value), that means there are no
         * more tags to get.</p> <p> <b>Cross-account use:</b> This operation can't be used
         * across different Amazon Web Services accounts.</p> <p> <b>Related
         * operations:</b> </p> <ul> <li> <p> <a>TagResource</a> </p> </li> <li> <p>
         * <a>UntagResource</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Cancels a scheduled key deletion during the waiting period. Use this
         * operation to restore a <code>Key</code> that is scheduled for deletion.</p>
         * <p>During the waiting period, the <code>KeyState</code> is
         * <code>DELETE_PENDING</code> and <code>deletePendingTimestamp</code> contains the
         * date and time after which the <code>Key</code> will be deleted. After
         * <code>Key</code> is restored, the <code>KeyState</code> is
         * <code>CREATE_COMPLETE</code>, and the value for
         * <code>deletePendingTimestamp</code> is removed.</p> <p> <b>Cross-account
         * use:</b> This operation can't be used across different Amazon Web Services
         * accounts.</p> <p> <b>Related operations:</b> </p> <ul> <li> <p> <a>DeleteKey</a>
         * </p> </li> <li> <p> <a>StartKeyUsage</a> </p> </li> <li> <p> <a>StopKeyUsage</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/RestoreKey">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreKeyOutcome RestoreKey(const Model::RestoreKeyRequest& request) const;

        /**
         * A Callable wrapper for RestoreKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestoreKeyRequestT = Model::RestoreKeyRequest>
        Model::RestoreKeyOutcomeCallable RestoreKeyCallable(const RestoreKeyRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyClient::RestoreKey, request);
        }

        /**
         * An Async wrapper for RestoreKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreKeyRequestT = Model::RestoreKeyRequest>
        void RestoreKeyAsync(const RestoreKeyRequestT& request, const RestoreKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyClient::RestoreKey, request, handler, context);
        }

        /**
         * <p>Enables an Amazon Web Services Payment Cryptography key, which makes it
         * active for cryptographic operations within Amazon Web Services Payment
         * Cryptography</p> <p> <b>Cross-account use:</b> This operation can't be used
         * across different Amazon Web Services accounts.</p> <p> <b>Related
         * operations:</b> </p> <ul> <li> <p> <a>StopKeyUsage</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/StartKeyUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::StartKeyUsageOutcome StartKeyUsage(const Model::StartKeyUsageRequest& request) const;

        /**
         * A Callable wrapper for StartKeyUsage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartKeyUsageRequestT = Model::StartKeyUsageRequest>
        Model::StartKeyUsageOutcomeCallable StartKeyUsageCallable(const StartKeyUsageRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyClient::StartKeyUsage, request);
        }

        /**
         * An Async wrapper for StartKeyUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartKeyUsageRequestT = Model::StartKeyUsageRequest>
        void StartKeyUsageAsync(const StartKeyUsageRequestT& request, const StartKeyUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyClient::StartKeyUsage, request, handler, context);
        }

        /**
         * <p>Disables an Amazon Web Services Payment Cryptography key, which makes it
         * inactive within Amazon Web Services Payment Cryptography.</p> <p>You can use
         * this operation instead of <a>DeleteKey</a> to deactivate a key. You can enable
         * the key in the future by calling <a>StartKeyUsage</a>.</p> <p> <b>Cross-account
         * use:</b> This operation can't be used across different Amazon Web Services
         * accounts.</p> <p> <b>Related operations:</b> </p> <ul> <li> <p> <a>DeleteKey</a>
         * </p> </li> <li> <p> <a>StartKeyUsage</a> </p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/StopKeyUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::StopKeyUsageOutcome StopKeyUsage(const Model::StopKeyUsageRequest& request) const;

        /**
         * A Callable wrapper for StopKeyUsage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopKeyUsageRequestT = Model::StopKeyUsageRequest>
        Model::StopKeyUsageOutcomeCallable StopKeyUsageCallable(const StopKeyUsageRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyClient::StopKeyUsage, request);
        }

        /**
         * An Async wrapper for StopKeyUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopKeyUsageRequestT = Model::StopKeyUsageRequest>
        void StopKeyUsageAsync(const StopKeyUsageRequestT& request, const StopKeyUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyClient::StopKeyUsage, request, handler, context);
        }

        /**
         * <p>Adds or edits tags on an Amazon Web Services Payment Cryptography key.</p>
         *  <p>Tagging or untagging an Amazon Web Services Payment Cryptography key
         * can allow or deny permission to the key.</p>  <p>Each tag consists of a
         * tag key and a tag value, both of which are case-sensitive strings. The tag value
         * can be an empty (null) string. To add a tag, specify a new tag key and a tag
         * value. To edit a tag, specify an existing tag key and a new tag value. You can
         * also add tags to an Amazon Web Services Payment Cryptography key when you create
         * it with <a>CreateKey</a>.</p> <p> <b>Cross-account use:</b> This operation can't
         * be used across different Amazon Web Services accounts.</p> <p> <b>Related
         * operations:</b> </p> <ul> <li> <p> <a>ListTagsForResource</a> </p> </li> <li>
         * <p> <a>UntagResource</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyClient::TagResource, request, handler, context);
        }

        /**
         * <p>Deletes a tag from an Amazon Web Services Payment Cryptography key.</p>
         *  <p>Tagging or untagging an Amazon Web Services Payment Cryptography key
         * can allow or deny permission to the key.</p>  <p> <b>Cross-account
         * use:</b> This operation can't be used across different Amazon Web Services
         * accounts.</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>ListTagsForResource</a> </p> </li> <li> <p> <a>TagResource</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Associates an existing Amazon Web Services Payment Cryptography alias with a
         * different key. Each alias is associated with only one Amazon Web Services
         * Payment Cryptography key at a time, although a key can have multiple aliases.
         * The alias and the Amazon Web Services Payment Cryptography key must be in the
         * same Amazon Web Services account and Amazon Web Services Region</p> <p>
         * <b>Cross-account use:</b> This operation can't be used across different Amazon
         * Web Services accounts.</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>CreateAlias</a> </p> </li> <li> <p> <a>DeleteAlias</a> </p> </li> <li> <p>
         * <a>GetAlias</a> </p> </li> <li> <p> <a>ListAliases</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/UpdateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAliasOutcome UpdateAlias(const Model::UpdateAliasRequest& request) const;

        /**
         * A Callable wrapper for UpdateAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAliasRequestT = Model::UpdateAliasRequest>
        Model::UpdateAliasOutcomeCallable UpdateAliasCallable(const UpdateAliasRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyClient::UpdateAlias, request);
        }

        /**
         * An Async wrapper for UpdateAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAliasRequestT = Model::UpdateAliasRequest>
        void UpdateAliasAsync(const UpdateAliasRequestT& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyClient::UpdateAlias, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PaymentCryptographyEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<PaymentCryptographyClient>;
      void init(const PaymentCryptographyClientConfiguration& clientConfiguration);

      PaymentCryptographyClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<PaymentCryptographyEndpointProviderBase> m_endpointProvider;
  };

} // namespace PaymentCryptography
} // namespace Aws
