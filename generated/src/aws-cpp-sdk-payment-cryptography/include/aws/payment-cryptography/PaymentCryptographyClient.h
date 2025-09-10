/**
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
   * <p>Amazon Web Services Payment Cryptography Control Plane APIs manage encryption
   * keys for use during payment-related cryptographic operations. You can create,
   * import, export, share, manage, and delete keys. You can also manage Identity and
   * Access Management (IAM) policies for keys. For more information, see <a
   * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/security-iam.html">Identity
   * and access management</a> in the <i>Amazon Web Services Payment Cryptography
   * User Guide.</i> </p> <p>To use encryption keys for payment-related transaction
   * processing and associated cryptographic operations, you use the <a
   * href="https://docs.aws.amazon.com/payment-cryptography/latest/DataAPIReference/Welcome.html">Amazon
   * Web Services Payment Cryptography Data Plane</a>. You can perform actions like
   * encrypt, decrypt, generate, and verify payment-related data.</p> <p>All Amazon
   * Web Services Payment Cryptography API calls must be signed and transmitted using
   * Transport Layer Security (TLS). We recommend you always use the latest supported
   * TLS version for logging API requests. </p> <p>Amazon Web Services Payment
   * Cryptography supports CloudTrail for control plane operations, a service that
   * logs Amazon Web Services API calls and related events for your Amazon Web
   * Services account and delivers them to an Amazon S3 bucket you specify. By using
   * the information collected by CloudTrail, you can determine what requests were
   * made to Amazon Web Services Payment Cryptography, who made the request, when it
   * was made, and so on. If you don't conﬁgure a trail, you can still view the most
   * recent events in the CloudTrail console. For more information, see the <a
   * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/">CloudTrail
   * User Guide</a>.</p>
   */
  class AWS_PAYMENTCRYPTOGRAPHY_API PaymentCryptographyClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<PaymentCryptographyClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef PaymentCryptographyClientConfiguration ClientConfigurationType;
      typedef PaymentCryptographyEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PaymentCryptographyClient(const Aws::PaymentCryptography::PaymentCryptographyClientConfiguration& clientConfiguration = Aws::PaymentCryptography::PaymentCryptographyClientConfiguration(),
                                  std::shared_ptr<PaymentCryptographyEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PaymentCryptographyClient(const Aws::Auth::AWSCredentials& credentials,
                                  std::shared_ptr<PaymentCryptographyEndpointProviderBase> endpointProvider = nullptr,
                                  const Aws::PaymentCryptography::PaymentCryptographyClientConfiguration& clientConfiguration = Aws::PaymentCryptography::PaymentCryptographyClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PaymentCryptographyClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                  std::shared_ptr<PaymentCryptographyEndpointProviderBase> endpointProvider = nullptr,
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
         * <p>Adds replication Amazon Web Services Regions to an existing Amazon Web
         * Services Payment Cryptography key, enabling the key to be used for cryptographic
         * operations in additional Amazon Web Services Regions.</p> <p>Multi-region keys
         * allow you to use the same key material across multiple Amazon Web Services
         * Regions, providing lower latency for applications distributed across regions.
         * When you add Replication Regions, Amazon Web Services Payment Cryptography
         * securely replicates the key material to the specified Amazon Web Services
         * Regions.</p> <p>The key must be in an active state to add Replication Regions.
         * You can add multiple regions in a single operation, and the key will be
         * available for use in those regions once replication is complete.</p> <p>
         * <b>Cross-account use:</b> This operation can't be used across different Amazon
         * Web Services accounts.</p> <p> <b>Related operations:</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_RemoveKeyReplicationRegions.html">RemoveKeyReplicationRegions</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_EnableDefaultKeyReplicationRegions.html">EnableDefaultKeyReplicationRegions</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_GetDefaultKeyReplicationRegions.html">GetDefaultKeyReplicationRegions</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/AddKeyReplicationRegions">AWS
         * API Reference</a></p>
         */
        virtual Model::AddKeyReplicationRegionsOutcome AddKeyReplicationRegions(const Model::AddKeyReplicationRegionsRequest& request) const;

        /**
         * A Callable wrapper for AddKeyReplicationRegions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddKeyReplicationRegionsRequestT = Model::AddKeyReplicationRegionsRequest>
        Model::AddKeyReplicationRegionsOutcomeCallable AddKeyReplicationRegionsCallable(const AddKeyReplicationRegionsRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyClient::AddKeyReplicationRegions, request);
        }

        /**
         * An Async wrapper for AddKeyReplicationRegions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddKeyReplicationRegionsRequestT = Model::AddKeyReplicationRegionsRequest>
        void AddKeyReplicationRegionsAsync(const AddKeyReplicationRegionsRequestT& request, const AddKeyReplicationRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyClient::AddKeyReplicationRegions, request, handler, context);
        }

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
         * change the key that's associated with the alias, call <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_UpdateAlias.html">UpdateAlias</a>.
         * To delete the alias, call <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_DeleteAlias.html">DeleteAlias</a>.
         * These operations don't affect the underlying key. To get the alias that you
         * created, call <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ListAliases.html">ListAliases</a>.</p>
         * <p> <b>Cross-account use</b>: This operation can't be used across different
         * Amazon Web Services accounts.</p> <p> <b>Related operations:</b> </p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_DeleteAlias.html">DeleteAlias</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_GetAlias.html">GetAlias</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ListAliases.html">ListAliases</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_UpdateAlias.html">UpdateAlias</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * about the key. The immutable data contains key attributes that define the scope
         * and cryptographic operations that you can perform using the key, for example key
         * class (example: <code>SYMMETRIC_KEY</code>), key algorithm (example:
         * <code>TDES_2KEY</code>), key usage (example:
         * <code>TR31_P0_PIN_ENCRYPTION_KEY</code>) and key modes of use (example:
         * <code>Encrypt</code>). Amazon Web Services Payment Cryptography binds key
         * attributes to keys using key blocks when you store or export them. Amazon Web
         * Services Payment Cryptography stores the key contents wrapped and never stores
         * or transmits them in the clear.</p> <p>For information about valid combinations
         * of key attributes, see <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/keys-validattributes.html">Understanding
         * key attributes</a> in the <i>Amazon Web Services Payment Cryptography User
         * Guide</i>. The mutable data contained within a key includes usage timestamp and
         * key deletion timestamp and can be modified after creation.</p> <p>You can use
         * the <code>CreateKey</code> operation to generate an ECC (Elliptic Curve
         * Cryptography) key pair used for establishing an ECDH (Elliptic Curve
         * Diffie-Hellman) key agreement between two parties. In the ECDH key agreement
         * process, both parties generate their own ECC key pair with key usage K3 and
         * exchange the public keys. Each party then use their private key, the received
         * public key from the other party, and the key derivation parameters including key
         * derivation function, hash algorithm, derivation data, and key algorithm to
         * derive a shared key.</p> <p>To maintain the single-use principle of
         * cryptographic keys in payments, ECDH derived keys should not be used for
         * multiple purposes, such as a <code>TR31_P0_PIN_ENCRYPTION_KEY</code> and
         * <code>TR31_K1_KEY_BLOCK_PROTECTION_KEY</code>. When creating ECC key pairs in
         * Amazon Web Services Payment Cryptography you can optionally set the
         * <code>DeriveKeyUsage</code> parameter, which defines the key usage bound to the
         * symmetric key that will be derived using the ECC key pair.</p> <p>
         * <b>Cross-account use</b>: This operation can't be used across different Amazon
         * Web Services accounts.</p> <p> <b>Related operations:</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_DeleteKey.html">DeleteKey</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_GetKey.html">GetKey</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ListKeys.html">ListKeys</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * have multiple aliases. To get the aliases of all keys, use the <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_UpdateAlias.html">UpdateAlias</a>
         * operation. To change the alias of a key, first use <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_DeleteAlias.html">DeleteAlias</a>
         * to delete the current alias and then use <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_CreateAlias.html">CreateAlias</a>
         * to create a new alias. To associate an existing alias with a different key, call
         * <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_UpdateAlias.html">UpdateAlias</a>.</p>
         * <p> <b>Cross-account use:</b> This operation can't be used across different
         * Amazon Web Services accounts.</p> <p> <b>Related operations:</b> </p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_CreateAlias.html">CreateAlias</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_GetAlias.html">GetAlias</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ListAliases.html">ListAliases</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_UpdateAlias.html">UpdateAlias</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>Deletes the key material and metadata associated with Amazon Web Services
         * Payment Cryptography key.</p> <p>Key deletion is irreversible. After a key is
         * deleted, you can't perform cryptographic operations using the key. For example,
         * you can't decrypt data that was encrypted by a deleted Amazon Web Services
         * Payment Cryptography key, and the data may become unrecoverable. Because key
         * deletion is destructive, Amazon Web Services Payment Cryptography has a safety
         * mechanism to prevent accidental deletion of a key. When you call this operation,
         * Amazon Web Services Payment Cryptography disables the specified key but doesn't
         * delete it until after a waiting period set using <code>DeleteKeyInDays</code>.
         * The default waiting period is 7 days. During the waiting period, the
         * <code>KeyState</code> is <code>DELETE_PENDING</code>. After the key is deleted,
         * the <code>KeyState</code> is <code>DELETE_COMPLETE</code>.</p> <p>You should
         * delete a key only when you are sure that you don't need to use it anymore and no
         * other parties are utilizing this key. If you aren't sure, consider deactivating
         * it instead by calling <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_StopKeyUsage.html">StopKeyUsage</a>.</p>
         * <p> <b>Cross-account use:</b> This operation can't be used across different
         * Amazon Web Services accounts.</p> <p> <b>Related operations:</b> </p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_RestoreKey.html">RestoreKey</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_StartKeyUsage.html">StartKeyUsage</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_StopKeyUsage.html">StopKeyUsage</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>Disables multi-region key replication settings for the specified Amazon Web
         * Services Regions in your account, preventing new keys from being automatically
         * replicated to those regions.</p> <p>After disabling default replication for
         * specific regions, new keys created in your account will not be automatically
         * replicated to those regions. You can still manually add replication to those
         * regions for individual keys using the AddKeyReplicationRegions operation.</p>
         * <p>This operation does not affect existing keys or their current replication
         * configuration.</p> <p> <b>Cross-account use:</b> This operation can't be used
         * across different Amazon Web Services accounts.</p> <p> <b>Related
         * operations:</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_EnableDefaultKeyReplicationRegions.html">EnableDefaultKeyReplicationRegions</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_GetDefaultKeyReplicationRegions.html">GetDefaultKeyReplicationRegions</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/DisableDefaultKeyReplicationRegions">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableDefaultKeyReplicationRegionsOutcome DisableDefaultKeyReplicationRegions(const Model::DisableDefaultKeyReplicationRegionsRequest& request) const;

        /**
         * A Callable wrapper for DisableDefaultKeyReplicationRegions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableDefaultKeyReplicationRegionsRequestT = Model::DisableDefaultKeyReplicationRegionsRequest>
        Model::DisableDefaultKeyReplicationRegionsOutcomeCallable DisableDefaultKeyReplicationRegionsCallable(const DisableDefaultKeyReplicationRegionsRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyClient::DisableDefaultKeyReplicationRegions, request);
        }

        /**
         * An Async wrapper for DisableDefaultKeyReplicationRegions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableDefaultKeyReplicationRegionsRequestT = Model::DisableDefaultKeyReplicationRegionsRequest>
        void DisableDefaultKeyReplicationRegionsAsync(const DisableDefaultKeyReplicationRegionsRequestT& request, const DisableDefaultKeyReplicationRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyClient::DisableDefaultKeyReplicationRegions, request, handler, context);
        }

        /**
         * <p>Enables multi-region key replication settings for your account, causing new
         * keys to be automatically replicated to the specified Amazon Web Services Regions
         * when created.</p> <p>When default Replication Regions are enabled, any new keys
         * created in your account will automatically be replicated to these regions unless
         * you explicitly override this behavior during key creation. This simplifies key
         * management for applications that operate across multiple regions.</p>
         * <p>Existing keys are not affected by this operation - only keys created after
         * enabling default replication will be automatically replicated.</p> <p>
         * <b>Cross-account use:</b> This operation can't be used across different Amazon
         * Web Services accounts.</p> <p> <b>Related operations:</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_DisableDefaultKeyReplicationRegions.html">DisableDefaultKeyReplicationRegions</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_GetDefaultKeyReplicationRegions.html">GetDefaultKeyReplicationRegions</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/EnableDefaultKeyReplicationRegions">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableDefaultKeyReplicationRegionsOutcome EnableDefaultKeyReplicationRegions(const Model::EnableDefaultKeyReplicationRegionsRequest& request) const;

        /**
         * A Callable wrapper for EnableDefaultKeyReplicationRegions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableDefaultKeyReplicationRegionsRequestT = Model::EnableDefaultKeyReplicationRegionsRequest>
        Model::EnableDefaultKeyReplicationRegionsOutcomeCallable EnableDefaultKeyReplicationRegionsCallable(const EnableDefaultKeyReplicationRegionsRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyClient::EnableDefaultKeyReplicationRegions, request);
        }

        /**
         * An Async wrapper for EnableDefaultKeyReplicationRegions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableDefaultKeyReplicationRegionsRequestT = Model::EnableDefaultKeyReplicationRegionsRequest>
        void EnableDefaultKeyReplicationRegionsAsync(const EnableDefaultKeyReplicationRegionsRequestT& request, const EnableDefaultKeyReplicationRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyClient::EnableDefaultKeyReplicationRegions, request, handler, context);
        }

        /**
         * <p>Exports a key from Amazon Web Services Payment Cryptography.</p> <p>Amazon
         * Web Services Payment Cryptography simplifies key exchange by replacing the
         * existing paper-based approach with a modern electronic approach. With
         * <code>ExportKey</code> you can export symmetric keys using either symmetric and
         * asymmetric key exchange mechanisms. Using this operation, you can share your
         * Amazon Web Services Payment Cryptography generated keys with other service
         * partners to perform cryptographic operations outside of Amazon Web Services
         * Payment Cryptography </p> <p>For symmetric key exchange, Amazon Web Services
         * Payment Cryptography uses the ANSI X9 TR-31 norm in accordance with PCI PIN
         * guidelines. And for asymmetric key exchange, Amazon Web Services Payment
         * Cryptography supports ANSI X9 TR-34 norm, RSA unwrap, and ECDH (Elliptic Curve
         * Diffie-Hellman) key exchange mechanisms. Asymmetric key exchange methods are
         * typically used to establish bi-directional trust between the two parties
         * exhanging keys and are used for initial key exchange such as Key Encryption Key
         * (KEK). After which you can export working keys using symmetric method to perform
         * various cryptographic operations within Amazon Web Services Payment
         * Cryptography.</p> <p>PCI requires specific minimum key strength of wrapping keys
         * used to protect the keys being exchanged electronically. These requirements can
         * change when PCI standards are revised. The rules specify that wrapping keys used
         * for transport must be at least as strong as the key being protected. For more
         * information on recommended key strength of wrapping keys and key exchange
         * mechanism, see <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/keys-importexport.html">Importing
         * and exporting keys</a> in the <i>Amazon Web Services Payment Cryptography User
         * Guide</i>.</p> <p>You can also use <code>ExportKey</code> functionality to
         * generate and export an IPEK (Initial Pin Encryption Key) from Amazon Web
         * Services Payment Cryptography using either TR-31 or TR-34 export key exchange.
         * IPEK is generated from BDK (Base Derivation Key) and
         * <code>ExportDukptInitialKey</code> attribute KSN (<code>KeySerialNumber</code>).
         * The generated IPEK does not persist within Amazon Web Services Payment
         * Cryptography and has to be re-generated each time during export.</p> <p>For key
         * exchange using TR-31 or TR-34 key blocks, you can also export optional blocks
         * within the key block header which contain additional attribute information about
         * the key. The <code>KeyVersion</code> within <code>KeyBlockHeaders</code>
         * indicates the version of the key within the key block. Furthermore,
         * <code>KeyExportability</code> within <code>KeyBlockHeaders</code> can be used to
         * further restrict exportability of the key after export from Amazon Web Services
         * Payment Cryptography.</p> <p>The <code>OptionalBlocks</code> contain the
         * additional data related to the key. For information on data type that can be
         * included within optional blocks, refer to <a
         * href="https://webstore.ansi.org/standards/ascx9/ansix91432022">ASC
         * X9.143-2022</a>.</p>  <p>Data included in key block headers is signed but
         * transmitted in clear text. Sensitive or confidential information should not be
         * included in optional blocks. Refer to ASC X9.143-2022 standard for information
         * on allowed data type.</p>  <p> <b>To export initial keys (KEK) or IPEK
         * using TR-34</b> </p> <p>Using this operation, you can export initial key using
         * TR-34 asymmetric key exchange. You can only export KEK generated within Amazon
         * Web Services Payment Cryptography. In TR-34 terminology, the sending party of
         * the key is called Key Distribution Host (KDH) and the receiving party of the key
         * is called Key Receiving Device (KRD). During key export process, KDH is Amazon
         * Web Services Payment Cryptography which initiates key export and KRD is the user
         * receiving the key.</p> <p>To initiate TR-34 key export, the KRD must obtain an
         * export token by calling <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_GetParametersForExport.html">GetParametersForExport</a>.
         * This operation also generates a key pair for the purpose of key export, signs
         * the key and returns back the signing public key certificate (also known as KDH
         * signing certificate) and root certificate chain. The KDH uses the private key to
         * sign the the export payload and the signing public key certificate is provided
         * to KRD to verify the signature. The KRD can import the root certificate into its
         * Hardware Security Module (HSM), as required. The export token and the associated
         * KDH signing certificate expires after 30 days. </p> <p>Next the KRD generates a
         * key pair for the the purpose of encrypting the KDH key and provides the public
         * key cerificate (also known as KRD wrapping certificate) back to KDH. The KRD
         * will also import the root cerificate chain into Amazon Web Services Payment
         * Cryptography by calling <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ImportKey.html">ImportKey</a>
         * for <code>RootCertificatePublicKey</code>. The KDH, Amazon Web Services Payment
         * Cryptography, will use the KRD wrapping cerificate to encrypt (wrap) the key
         * under export and signs it with signing private key to generate a TR-34
         * WrappedKeyBlock. For more information on TR-34 key export, see section <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/keys-export.html">Exporting
         * symmetric keys</a> in the <i>Amazon Web Services Payment Cryptography User
         * Guide</i>. </p> <p>Set the following parameters:</p> <ul> <li> <p>
         * <code>ExportAttributes</code>: Specify export attributes in case of IPEK export.
         * This parameter is optional for KEK export.</p> </li> <li> <p>
         * <code>ExportKeyIdentifier</code>: The <code>KeyARN</code> of the KEK or BDK (in
         * case of IPEK) under export.</p> </li> <li> <p> <code>KeyMaterial</code>: Use
         * <code>Tr34KeyBlock</code> parameters.</p> </li> <li> <p>
         * <code>CertificateAuthorityPublicKeyIdentifier</code>: The <code>KeyARN</code> of
         * the certificate chain that signed the KRD wrapping key certificate.</p> </li>
         * <li> <p> <code>ExportToken</code>: Obtained from KDH by calling <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_GetParametersForImport.html">GetParametersForImport</a>.</p>
         * </li> <li> <p> <code>WrappingKeyCertificate</code>: The public key certificate
         * in PEM format (base64 encoded) of the KRD wrapping key Amazon Web Services
         * Payment Cryptography uses for encryption of the TR-34 export payload. This
         * certificate must be signed by the root certificate
         * (CertificateAuthorityPublicKeyIdentifier) imported into Amazon Web Services
         * Payment Cryptography.</p> </li> </ul> <p>When this operation is successful,
         * Amazon Web Services Payment Cryptography returns the KEK or IPEK as a TR-34
         * WrappedKeyBlock. </p> <p> <b>To export initial keys (KEK) or IPEK using RSA Wrap
         * and Unwrap</b> </p> <p>Using this operation, you can export initial key using
         * asymmetric RSA wrap and unwrap key exchange method. To initiate export, generate
         * an asymmetric key pair on the receiving HSM and obtain the public key
         * certificate in PEM format (base64 encoded) for the purpose of wrapping and the
         * root certifiate chain. Import the root certificate into Amazon Web Services
         * Payment Cryptography by calling <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ImportKey.html">ImportKey</a>
         * for <code>RootCertificatePublicKey</code>.</p> <p>Next call
         * <code>ExportKey</code> and set the following parameters:</p> <ul> <li> <p>
         * <code>CertificateAuthorityPublicKeyIdentifier</code>: The <code>KeyARN</code> of
         * the certificate chain that signed wrapping key certificate.</p> </li> <li> <p>
         * <code>KeyMaterial</code>: Set to <code>KeyCryptogram</code>.</p> </li> <li> <p>
         * <code>WrappingKeyCertificate</code>: The public key certificate in PEM format
         * (base64 encoded) obtained by the receiving HSM and signed by the root
         * certificate (CertificateAuthorityPublicKeyIdentifier) imported into Amazon Web
         * Services Payment Cryptography. The receiving HSM uses its private key component
         * to unwrap the WrappedKeyCryptogram.</p> </li> </ul> <p>When this operation is
         * successful, Amazon Web Services Payment Cryptography returns the
         * WrappedKeyCryptogram. </p> <p> <b>To export working keys or IPEK using TR-31</b>
         * </p> <p>Using this operation, you can export working keys or IPEK using TR-31
         * symmetric key exchange. In TR-31, you must use an initial key such as KEK to
         * encrypt or wrap the key under export. To establish a KEK, you can use <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_CreateKey.html">CreateKey</a>
         * or <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ImportKey.html">ImportKey</a>.
         * </p> <p>Set the following parameters:</p> <ul> <li> <p>
         * <code>ExportAttributes</code>: Specify export attributes in case of IPEK export.
         * This parameter is optional for KEK export.</p> </li> <li> <p>
         * <code>ExportKeyIdentifier</code>: The <code>KeyARN</code> of the KEK or BDK (in
         * case of IPEK) under export.</p> </li> <li> <p> <code>KeyMaterial</code>: Use
         * <code>Tr31KeyBlock</code> parameters.</p> </li> </ul> <p> <b>To export working
         * keys using ECDH</b> </p> <p>You can also use ECDH key agreement to export
         * working keys in a TR-31 keyblock, where the wrapping key is an ECDH derived
         * key.</p> <p>To initiate a TR-31 key export using ECDH, both sides must create an
         * ECC key pair with key usage K3 and exchange public key certificates. In Amazon
         * Web Services Payment Cryptography, you can do this by calling
         * <code>CreateKey</code>. If you have not already done so, you must import the CA
         * chain that issued the receiving public key certificate by calling
         * <code>ImportKey</code> with input <code>RootCertificatePublicKey</code> for root
         * CA or <code>TrustedPublicKey</code> for intermediate CA. You can then complete a
         * TR-31 key export by deriving a shared wrapping key using the service ECC key
         * pair, public certificate of your ECC key pair outside of Amazon Web Services
         * Payment Cryptography, and the key derivation parameters including key derivation
         * function, hash algorithm, derivation data, key algorithm.</p> <ul> <li> <p>
         * <code>KeyMaterial</code>: Use <code>DiffieHellmanTr31KeyBlock</code>
         * parameters.</p> </li> <li> <p> <code>PrivateKeyIdentifier</code>: The
         * <code>KeyArn</code> of the ECC key pair created within Amazon Web Services
         * Payment Cryptography to derive a shared KEK.</p> </li> <li> <p>
         * <code>PublicKeyCertificate</code>: The public key certificate of the receiving
         * ECC key pair in PEM format (base64 encoded) to derive a shared KEK.</p> </li>
         * <li> <p> <code>CertificateAuthorityPublicKeyIdentifier</code>: The
         * <code>keyARN</code> of the CA that signed the public key certificate of the
         * receiving ECC key pair.</p> </li> </ul> <p>When this operation is successful,
         * Amazon Web Services Payment Cryptography returns the working key as a TR-31
         * WrappedKeyBlock, where the wrapping key is the ECDH derived key.</p> <p>
         * <b>Cross-account use:</b> This operation can't be used across different Amazon
         * Web Services accounts.</p> <p> <b>Related operations:</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_GetParametersForExport.html">GetParametersForExport</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ImportKey.html">ImportKey</a>
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
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_CreateAlias.html">CreateAlias</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_DeleteAlias.html">DeleteAlias</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ListAliases.html">ListAliases</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_UpdateAlias.html">UpdateAlias</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>Retrieves the list of regions where default key replication is currently
         * enabled for your account.</p> <p>This operation returns the current
         * configuration of default Replication Regions. New keys created in your account
         * will be automatically replicated to these regions unless explicitly overridden
         * during key creation.</p> <p> <b>Cross-account use:</b> This operation can't be
         * used across different Amazon Web Services accounts.</p> <p> <b>Related
         * operations:</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_EnableDefaultKeyReplicationRegions.html">EnableDefaultKeyReplicationRegions</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_DisableDefaultKeyReplicationRegions.html">DisableDefaultKeyReplicationRegions</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/GetDefaultKeyReplicationRegions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDefaultKeyReplicationRegionsOutcome GetDefaultKeyReplicationRegions(const Model::GetDefaultKeyReplicationRegionsRequest& request = {}) const;

        /**
         * A Callable wrapper for GetDefaultKeyReplicationRegions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDefaultKeyReplicationRegionsRequestT = Model::GetDefaultKeyReplicationRegionsRequest>
        Model::GetDefaultKeyReplicationRegionsOutcomeCallable GetDefaultKeyReplicationRegionsCallable(const GetDefaultKeyReplicationRegionsRequestT& request = {}) const
        {
            return SubmitCallable(&PaymentCryptographyClient::GetDefaultKeyReplicationRegions, request);
        }

        /**
         * An Async wrapper for GetDefaultKeyReplicationRegions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDefaultKeyReplicationRegionsRequestT = Model::GetDefaultKeyReplicationRegionsRequest>
        void GetDefaultKeyReplicationRegionsAsync(const GetDefaultKeyReplicationRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetDefaultKeyReplicationRegionsRequestT& request = {}) const
        {
            return SubmitAsync(&PaymentCryptographyClient::GetDefaultKeyReplicationRegions, request, handler, context);
        }

        /**
         * <p>Gets the key metadata for an Amazon Web Services Payment Cryptography key,
         * including the immutable and mutable attributes specified when the key was
         * created. Returns key metadata including attributes, state, and timestamps, but
         * does not return the actual cryptographic key material.</p> <p> <b>Cross-account
         * use:</b> This operation can't be used across different Amazon Web Services
         * accounts.</p> <p> <b>Related operations:</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_CreateKey.html">CreateKey</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_DeleteKey.html">DeleteKey</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ListKeys.html">ListKeys</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * calling <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ExportKey.html">ExportKey</a>.
         * The export token expires in 30 days. You can use the same export token to export
         * multiple keys from your service account.</p> <p> <b>Cross-account use:</b> This
         * operation can't be used across different Amazon Web Services accounts.</p> <p>
         * <b>Related operations:</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ExportKey.html">ExportKey</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_GetParametersForImport.html">GetParametersForImport</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>Gets the import token and the wrapping key certificate in PEM format (base64
         * encoded) to initiate a TR-34 WrappedKeyBlock or a RSA WrappedKeyCryptogram
         * import into Amazon Web Services Payment Cryptography.</p> <p>The wrapping key
         * certificate wraps the key under import. The import token and wrapping key
         * certificate must be in place and operational before calling <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ImportKey.html">ImportKey</a>.
         * The import token expires in 30 days. You can use the same import token to import
         * multiple keys into your service account.</p> <p> <b>Cross-account use:</b> This
         * operation can't be used across different Amazon Web Services accounts.</p> <p>
         * <b>Related operations:</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_GetParametersForExport.html">GetParametersForExport</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ImportKey.html">ImportKey</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>Imports symmetric keys and public key certificates in PEM format (base64
         * encoded) into Amazon Web Services Payment Cryptography.</p> <p>Amazon Web
         * Services Payment Cryptography simplifies key exchange by replacing the existing
         * paper-based approach with a modern electronic approach. With
         * <code>ImportKey</code> you can import symmetric keys using either symmetric and
         * asymmetric key exchange mechanisms.</p> <p>For symmetric key exchange, Amazon
         * Web Services Payment Cryptography uses the ANSI X9 TR-31 norm in accordance with
         * PCI PIN guidelines. And for asymmetric key exchange, Amazon Web Services Payment
         * Cryptography supports ANSI X9 TR-34 norm, RSA unwrap, and ECDH (Elliptic Curve
         * Diffie-Hellman) key exchange mechanisms. Asymmetric key exchange methods are
         * typically used to establish bi-directional trust between the two parties
         * exhanging keys and are used for initial key exchange such as Key Encryption Key
         * (KEK) or Zone Master Key (ZMK). After which you can import working keys using
         * symmetric method to perform various cryptographic operations within Amazon Web
         * Services Payment Cryptography.</p> <p>PCI requires specific minimum key strength
         * of wrapping keys used to protect the keys being exchanged electronically. These
         * requirements can change when PCI standards are revised. The rules specify that
         * wrapping keys used for transport must be at least as strong as the key being
         * protected. For more information on recommended key strength of wrapping keys and
         * key exchange mechanism, see <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/keys-importexport.html">Importing
         * and exporting keys</a> in the <i>Amazon Web Services Payment Cryptography User
         * Guide</i>.</p> <p>You can also import a <i>root public key certificate</i>, used
         * to sign other public key certificates, or a <i>trusted public key
         * certificate</i> under an already established root public key certificate.</p>
         * <p> <b>To import a public root key certificate</b> </p> <p>Using this operation,
         * you can import the public component (in PEM cerificate format) of your private
         * root key. You can use the imported public root key certificate for digital
         * signatures, for example signing wrapping key or signing key in TR-34, within
         * your Amazon Web Services Payment Cryptography account.</p> <p>Set the following
         * parameters:</p> <ul> <li> <p> <code>KeyMaterial</code>:
         * <code>RootCertificatePublicKey</code> </p> </li> <li> <p> <code>KeyClass</code>:
         * <code>PUBLIC_KEY</code> </p> </li> <li> <p> <code>KeyModesOfUse</code>:
         * <code>Verify</code> </p> </li> <li> <p> <code>KeyUsage</code>:
         * <code>TR31_S0_ASYMMETRIC_KEY_FOR_DIGITAL_SIGNATURE</code> </p> </li> <li> <p>
         * <code>PublicKeyCertificate</code>: The public key certificate in PEM format
         * (base64 encoded) of the private root key under import.</p> </li> </ul> <p> <b>To
         * import a trusted public key certificate</b> </p> <p>The root public key
         * certificate must be in place and operational before you import a trusted public
         * key certificate. Set the following parameters:</p> <ul> <li> <p>
         * <code>KeyMaterial</code>: <code>TrustedCertificatePublicKey</code> </p> </li>
         * <li> <p> <code>CertificateAuthorityPublicKeyIdentifier</code>:
         * <code>KeyArn</code> of the <code>RootCertificatePublicKey</code>.</p> </li> <li>
         * <p> <code>KeyModesOfUse</code> and <code>KeyUsage</code>: Corresponding to the
         * cryptographic operations such as wrap, sign, or encrypt that you will allow the
         * trusted public key certificate to perform.</p> </li> <li> <p>
         * <code>PublicKeyCertificate</code>: The trusted public key certificate in PEM
         * format (base64 encoded) under import.</p> </li> </ul> <p> <b>To import initial
         * keys (KEK or ZMK or similar) using TR-34</b> </p> <p>Using this operation, you
         * can import initial key using TR-34 asymmetric key exchange. In TR-34
         * terminology, the sending party of the key is called Key Distribution Host (KDH)
         * and the receiving party of the key is called Key Receiving Device (KRD). During
         * the key import process, KDH is the user who initiates the key import and KRD is
         * Amazon Web Services Payment Cryptography who receives the key.</p> <p>To
         * initiate TR-34 key import, the KDH must obtain an import token by calling <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_GetParametersForImport.html">GetParametersForImport</a>.
         * This operation generates an encryption keypair for the purpose of key import,
         * signs the key and returns back the wrapping key certificate (also known as KRD
         * wrapping certificate) and the root certificate chain. The KDH must trust and
         * install the KRD wrapping certificate on its HSM and use it to encrypt (wrap) the
         * KDH key during TR-34 WrappedKeyBlock generation. The import token and associated
         * KRD wrapping certificate expires after 30 days.</p> <p>Next the KDH generates a
         * key pair for the purpose of signing the encrypted KDH key and provides the
         * public certificate of the signing key to Amazon Web Services Payment
         * Cryptography. The KDH will also need to import the root certificate chain of the
         * KDH signing certificate by calling <code>ImportKey</code> for
         * <code>RootCertificatePublicKey</code>. For more information on TR-34 key import,
         * see section <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/keys-import.html">Importing
         * symmetric keys</a> in the <i>Amazon Web Services Payment Cryptography User
         * Guide</i>.</p> <p>Set the following parameters:</p> <ul> <li> <p>
         * <code>KeyMaterial</code>: Use <code>Tr34KeyBlock</code> parameters.</p> </li>
         * <li> <p> <code>CertificateAuthorityPublicKeyIdentifier</code>: The
         * <code>KeyARN</code> of the certificate chain that signed the KDH signing key
         * certificate.</p> </li> <li> <p> <code>ImportToken</code>: Obtained from KRD by
         * calling <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_GetParametersForImport.html">GetParametersForImport</a>.</p>
         * </li> <li> <p> <code>WrappedKeyBlock</code>: The TR-34 wrapped key material from
         * KDH. It contains the KDH key under import, wrapped with KRD wrapping certificate
         * and signed by KDH signing private key. This TR-34 key block is typically
         * generated by the KDH Hardware Security Module (HSM) outside of Amazon Web
         * Services Payment Cryptography.</p> </li> <li> <p>
         * <code>SigningKeyCertificate</code>: The public key certificate in PEM format
         * (base64 encoded) of the KDH signing key generated under the root certificate
         * (CertificateAuthorityPublicKeyIdentifier) imported in Amazon Web Services
         * Payment Cryptography.</p> </li> </ul> <p> <b>To import initial keys (KEK or ZMK
         * or similar) using RSA Wrap and Unwrap</b> </p> <p>Using this operation, you can
         * import initial key using asymmetric RSA wrap and unwrap key exchange method. To
         * initiate import, call <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_GetParametersForImport.html">GetParametersForImport</a>
         * with <code>KeyMaterial</code> set to <code>KEY_CRYPTOGRAM</code> to generate an
         * import token. This operation also generates an encryption keypair for the
         * purpose of key import, signs the key and returns back the wrapping key
         * certificate in PEM format (base64 encoded) and its root certificate chain. The
         * import token and associated KRD wrapping certificate expires after 30 days. </p>
         * <p>You must trust and install the wrapping certificate and its certificate chain
         * on the sending HSM and use it to wrap the key under export for
         * WrappedKeyCryptogram generation. Next call <code>ImportKey</code> with
         * <code>KeyMaterial</code> set to <code>KEY_CRYPTOGRAM</code> and provide the
         * <code>ImportToken</code> and <code>KeyAttributes</code> for the key under
         * import.</p> <p> <b>To import working keys using TR-31</b> </p> <p>Amazon Web
         * Services Payment Cryptography uses TR-31 symmetric key exchange norm to import
         * working keys. A KEK must be established within Amazon Web Services Payment
         * Cryptography by using TR-34 key import or by using <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_CreateKey.html">CreateKey</a>.
         * To initiate a TR-31 key import, set the following parameters:</p> <ul> <li> <p>
         * <code>KeyMaterial</code>: Use <code>Tr31KeyBlock</code> parameters.</p> </li>
         * <li> <p> <code>WrappedKeyBlock</code>: The TR-31 wrapped key material. It
         * contains the key under import, encrypted using KEK. The TR-31 key block is
         * typically generated by a HSM outside of Amazon Web Services Payment
         * Cryptography. </p> </li> <li> <p> <code>WrappingKeyIdentifier</code>: The
         * <code>KeyArn</code> of the KEK that Amazon Web Services Payment Cryptography
         * uses to decrypt or unwrap the key under import.</p> </li> </ul> <p> <b>To import
         * working keys using ECDH</b> </p> <p>You can also use ECDH key agreement to
         * import working keys as a TR-31 keyblock, where the wrapping key is an ECDH
         * derived key.</p> <p>To initiate a TR-31 key import using ECDH, both sides must
         * create an ECC key pair with key usage K3 and exchange public key certificates.
         * In Amazon Web Services Payment Cryptography, you can do this by calling
         * <code>CreateKey</code> and then <code>GetPublicKeyCertificate</code> to retrieve
         * its public key certificate. Next, you can then generate a TR-31 WrappedKeyBlock
         * using your own ECC key pair, the public certificate of the service's ECC key
         * pair, and the key derivation parameters including key derivation function, hash
         * algorithm, derivation data, and key algorithm. If you have not already done so,
         * you must import the CA chain that issued the receiving public key certificate by
         * calling <code>ImportKey</code> with input <code>RootCertificatePublicKey</code>
         * for root CA or <code>TrustedPublicKey</code> for intermediate CA. To complete
         * the TR-31 key import, you can use the following parameters. It is important that
         * the ECDH key derivation parameters you use should match those used during import
         * to derive the same shared wrapping key within Amazon Web Services Payment
         * Cryptography.</p> <ul> <li> <p> <code>KeyMaterial</code>: Use
         * <code>DiffieHellmanTr31KeyBlock</code> parameters.</p> </li> <li> <p>
         * <code>PrivateKeyIdentifier</code>: The <code>KeyArn</code> of the ECC key pair
         * created within Amazon Web Services Payment Cryptography to derive a shared
         * KEK.</p> </li> <li> <p> <code>PublicKeyCertificate</code>: The public key
         * certificate of the receiving ECC key pair in PEM format (base64 encoded) to
         * derive a shared KEK.</p> </li> <li> <p>
         * <code>CertificateAuthorityPublicKeyIdentifier</code>: The <code>keyARN</code> of
         * the CA that signed the public key certificate of the receiving ECC key pair.</p>
         * </li> </ul> <p> <b>Cross-account use:</b> This operation can't be used across
         * different Amazon Web Services accounts.</p> <p> <b>Related operations:</b> </p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ExportKey.html">ExportKey</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_GetParametersForImport.html">GetParametersForImport</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * and Amazon Web Services Region. You can filter the aliases by
         * <code>keyARN</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/keys-managealias.html">Using
         * aliases</a> in the <i>Amazon Web Services Payment Cryptography User
         * Guide</i>.</p> <p>This is a paginated operation, which means that each response
         * might contain only a subset of all the aliases. When the response contains only
         * a subset of aliases, it includes a <code>NextToken</code> value. Use this value
         * in a subsequent <code>ListAliases</code> request to get more aliases. When you
         * receive a response with no NextToken (or an empty or null value), that means
         * there are no more aliases to get.</p> <p> <b>Cross-account use:</b> This
         * operation can't be used across different Amazon Web Services accounts.</p> <p>
         * <b>Related operations:</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_CreateAlias.html">CreateAlias</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_DeleteAlias.html">DeleteAlias</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_GetAlias.html">GetAlias</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_UpdateAlias.html">UpdateAlias</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/ListAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAliasesOutcome ListAliases(const Model::ListAliasesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListAliases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAliasesRequestT = Model::ListAliasesRequest>
        Model::ListAliasesOutcomeCallable ListAliasesCallable(const ListAliasesRequestT& request = {}) const
        {
            return SubmitCallable(&PaymentCryptographyClient::ListAliases, request);
        }

        /**
         * An Async wrapper for ListAliases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAliasesRequestT = Model::ListAliasesRequest>
        void ListAliasesAsync(const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListAliasesRequestT& request = {}) const
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
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_CreateKey.html">CreateKey</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_DeleteKey.html">DeleteKey</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_GetKey.html">GetKey</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/ListKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKeysOutcome ListKeys(const Model::ListKeysRequest& request = {}) const;

        /**
         * A Callable wrapper for ListKeys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListKeysRequestT = Model::ListKeysRequest>
        Model::ListKeysOutcomeCallable ListKeysCallable(const ListKeysRequestT& request = {}) const
        {
            return SubmitCallable(&PaymentCryptographyClient::ListKeys, request);
        }

        /**
         * An Async wrapper for ListKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListKeysRequestT = Model::ListKeysRequest>
        void ListKeysAsync(const ListKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListKeysRequestT& request = {}) const
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
         * operations:</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_TagResource.html">TagResource</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_UntagResource.html">UntagResource</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>Removes Replication Regions from an existing Amazon Web Services Payment
         * Cryptography key, disabling the key's availability for cryptographic operations
         * in the specified Amazon Web Services Regions.</p> <p>When you remove Replication
         * Regions, the key material is securely deleted from those regions and can no
         * longer be used for cryptographic operations there. This operation is
         * irreversible for the specified Amazon Web Services Regions.</p> <p>Ensure that
         * no active cryptographic operations or applications depend on the key in the
         * regions you're removing before performing this operation.</p> <p>
         * <b>Cross-account use:</b> This operation can't be used across different Amazon
         * Web Services accounts.</p> <p> <b>Related operations:</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_AddKeyReplicationRegions.html">AddKeyReplicationRegions</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_DisableDefaultKeyReplicationRegions.html">DisableDefaultKeyReplicationRegions</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/RemoveKeyReplicationRegions">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveKeyReplicationRegionsOutcome RemoveKeyReplicationRegions(const Model::RemoveKeyReplicationRegionsRequest& request) const;

        /**
         * A Callable wrapper for RemoveKeyReplicationRegions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveKeyReplicationRegionsRequestT = Model::RemoveKeyReplicationRegionsRequest>
        Model::RemoveKeyReplicationRegionsOutcomeCallable RemoveKeyReplicationRegionsCallable(const RemoveKeyReplicationRegionsRequestT& request) const
        {
            return SubmitCallable(&PaymentCryptographyClient::RemoveKeyReplicationRegions, request);
        }

        /**
         * An Async wrapper for RemoveKeyReplicationRegions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveKeyReplicationRegionsRequestT = Model::RemoveKeyReplicationRegionsRequest>
        void RemoveKeyReplicationRegionsAsync(const RemoveKeyReplicationRegionsRequestT& request, const RemoveKeyReplicationRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PaymentCryptographyClient::RemoveKeyReplicationRegions, request, handler, context);
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
         * accounts.</p> <p> <b>Related operations:</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_DeleteKey.html">DeleteKey</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_StartKeyUsage.html">StartKeyUsage</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_StopKeyUsage.html">StopKeyUsage</a>
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
         * operations:</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_StopKeyUsage.html">StopKeyUsage</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * this operation instead of <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_DeleteKey.html">DeleteKey</a>
         * to deactivate a key. You can enable the key in the future by calling <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_StartKeyUsage.html">StartKeyUsage</a>.</p>
         * <p> <b>Cross-account use:</b> This operation can't be used across different
         * Amazon Web Services accounts.</p> <p> <b>Related operations:</b> </p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_DeleteKey.html">DeleteKey</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_StartKeyUsage.html">StartKeyUsage</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * it with <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_CreateKey.html">CreateKey</a>.</p>
         * <p> <b>Cross-account use:</b> This operation can't be used across different
         * Amazon Web Services accounts.</p> <p> <b>Related operations:</b> </p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ListTagsForResource.html">ListTagsForResource</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_UntagResource.html">UntagResource</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * accounts.</p> <p> <b>Related operations:</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ListTagsForResource.html">ListTagsForResource</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_TagResource.html">TagResource</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * Web Services accounts.</p> <p> <b>Related operations:</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_CreateAlias.html">CreateAlias</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_DeleteAlias.html">DeleteAlias</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_GetAlias.html">GetAlias</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_ListAliases.html">ListAliases</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
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
      std::shared_ptr<PaymentCryptographyEndpointProviderBase> m_endpointProvider;
  };

} // namespace PaymentCryptography
} // namespace Aws
