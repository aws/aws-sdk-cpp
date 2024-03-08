/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rolesanywhere/RolesAnywhereServiceClientModel.h>

namespace Aws
{
namespace RolesAnywhere
{
  /**
   * <p>Identity and Access Management Roles Anywhere provides a secure way for your
   * workloads such as servers, containers, and applications that run outside of
   * Amazon Web Services to obtain temporary Amazon Web Services credentials. Your
   * workloads can use the same IAM policies and roles you have for native Amazon Web
   * Services applications to access Amazon Web Services resources. Using IAM Roles
   * Anywhere eliminates the need to manage long-term credentials for workloads
   * running outside of Amazon Web Services.</p> <p> To use IAM Roles Anywhere, your
   * workloads must use X.509 certificates issued by their certificate authority
   * (CA). You register the CA with IAM Roles Anywhere as a trust anchor to establish
   * trust between your public key infrastructure (PKI) and IAM Roles Anywhere. If
   * you don't manage your own PKI system, you can use Private Certificate Authority
   * to create a CA and then use that to establish trust with IAM Roles Anywhere.
   * </p> <p>This guide describes the IAM Roles Anywhere operations that you can call
   * programmatically. For more information about IAM Roles Anywhere, see the <a
   * href="https://docs.aws.amazon.com/rolesanywhere/latest/userguide/introduction.html">IAM
   * Roles Anywhere User Guide</a>.</p>
   */
  class AWS_ROLESANYWHERE_API RolesAnywhereClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<RolesAnywhereClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef RolesAnywhereClientConfiguration ClientConfigurationType;
      typedef RolesAnywhereEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RolesAnywhereClient(const Aws::RolesAnywhere::RolesAnywhereClientConfiguration& clientConfiguration = Aws::RolesAnywhere::RolesAnywhereClientConfiguration(),
                            std::shared_ptr<RolesAnywhereEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RolesAnywhereClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<RolesAnywhereEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::RolesAnywhere::RolesAnywhereClientConfiguration& clientConfiguration = Aws::RolesAnywhere::RolesAnywhereClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RolesAnywhereClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<RolesAnywhereEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::RolesAnywhere::RolesAnywhereClientConfiguration& clientConfiguration = Aws::RolesAnywhere::RolesAnywhereClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RolesAnywhereClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RolesAnywhereClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RolesAnywhereClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~RolesAnywhereClient();

        /**
         * <p>Creates a <i>profile</i>, a list of the roles that Roles Anywhere service is
         * trusted to assume. You use profiles to intersect permissions with IAM managed
         * policies.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:CreateProfile</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/CreateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProfileOutcome CreateProfile(const Model::CreateProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProfileRequestT = Model::CreateProfileRequest>
        Model::CreateProfileOutcomeCallable CreateProfileCallable(const CreateProfileRequestT& request) const
        {
            return SubmitCallable(&RolesAnywhereClient::CreateProfile, request);
        }

        /**
         * An Async wrapper for CreateProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProfileRequestT = Model::CreateProfileRequest>
        void CreateProfileAsync(const CreateProfileRequestT& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RolesAnywhereClient::CreateProfile, request, handler, context);
        }

        /**
         * <p>Creates a trust anchor to establish trust between IAM Roles Anywhere and your
         * certificate authority (CA). You can define a trust anchor as a reference to an
         * Private Certificate Authority (Private CA) or by uploading a CA certificate.
         * Your Amazon Web Services workloads can authenticate with the trust anchor using
         * certificates issued by the CA in exchange for temporary Amazon Web Services
         * credentials.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:CreateTrustAnchor</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/CreateTrustAnchor">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrustAnchorOutcome CreateTrustAnchor(const Model::CreateTrustAnchorRequest& request) const;

        /**
         * A Callable wrapper for CreateTrustAnchor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTrustAnchorRequestT = Model::CreateTrustAnchorRequest>
        Model::CreateTrustAnchorOutcomeCallable CreateTrustAnchorCallable(const CreateTrustAnchorRequestT& request) const
        {
            return SubmitCallable(&RolesAnywhereClient::CreateTrustAnchor, request);
        }

        /**
         * An Async wrapper for CreateTrustAnchor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTrustAnchorRequestT = Model::CreateTrustAnchorRequest>
        void CreateTrustAnchorAsync(const CreateTrustAnchorRequestT& request, const CreateTrustAnchorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RolesAnywhereClient::CreateTrustAnchor, request, handler, context);
        }

        /**
         * <p>Deletes a certificate revocation list (CRL).</p> <p> <b>Required permissions:
         * </b> <code>rolesanywhere:DeleteCrl</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/DeleteCrl">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCrlOutcome DeleteCrl(const Model::DeleteCrlRequest& request) const;

        /**
         * A Callable wrapper for DeleteCrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCrlRequestT = Model::DeleteCrlRequest>
        Model::DeleteCrlOutcomeCallable DeleteCrlCallable(const DeleteCrlRequestT& request) const
        {
            return SubmitCallable(&RolesAnywhereClient::DeleteCrl, request);
        }

        /**
         * An Async wrapper for DeleteCrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCrlRequestT = Model::DeleteCrlRequest>
        void DeleteCrlAsync(const DeleteCrlRequestT& request, const DeleteCrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RolesAnywhereClient::DeleteCrl, request, handler, context);
        }

        /**
         * <p>Deletes a profile.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:DeleteProfile</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/DeleteProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProfileOutcome DeleteProfile(const Model::DeleteProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProfileRequestT = Model::DeleteProfileRequest>
        Model::DeleteProfileOutcomeCallable DeleteProfileCallable(const DeleteProfileRequestT& request) const
        {
            return SubmitCallable(&RolesAnywhereClient::DeleteProfile, request);
        }

        /**
         * An Async wrapper for DeleteProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProfileRequestT = Model::DeleteProfileRequest>
        void DeleteProfileAsync(const DeleteProfileRequestT& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RolesAnywhereClient::DeleteProfile, request, handler, context);
        }

        /**
         * <p>Deletes a trust anchor.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:DeleteTrustAnchor</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/DeleteTrustAnchor">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrustAnchorOutcome DeleteTrustAnchor(const Model::DeleteTrustAnchorRequest& request) const;

        /**
         * A Callable wrapper for DeleteTrustAnchor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTrustAnchorRequestT = Model::DeleteTrustAnchorRequest>
        Model::DeleteTrustAnchorOutcomeCallable DeleteTrustAnchorCallable(const DeleteTrustAnchorRequestT& request) const
        {
            return SubmitCallable(&RolesAnywhereClient::DeleteTrustAnchor, request);
        }

        /**
         * An Async wrapper for DeleteTrustAnchor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTrustAnchorRequestT = Model::DeleteTrustAnchorRequest>
        void DeleteTrustAnchorAsync(const DeleteTrustAnchorRequestT& request, const DeleteTrustAnchorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RolesAnywhereClient::DeleteTrustAnchor, request, handler, context);
        }

        /**
         * <p>Disables a certificate revocation list (CRL).</p> <p> <b>Required
         * permissions: </b> <code>rolesanywhere:DisableCrl</code>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/DisableCrl">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableCrlOutcome DisableCrl(const Model::DisableCrlRequest& request) const;

        /**
         * A Callable wrapper for DisableCrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableCrlRequestT = Model::DisableCrlRequest>
        Model::DisableCrlOutcomeCallable DisableCrlCallable(const DisableCrlRequestT& request) const
        {
            return SubmitCallable(&RolesAnywhereClient::DisableCrl, request);
        }

        /**
         * An Async wrapper for DisableCrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableCrlRequestT = Model::DisableCrlRequest>
        void DisableCrlAsync(const DisableCrlRequestT& request, const DisableCrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RolesAnywhereClient::DisableCrl, request, handler, context);
        }

        /**
         * <p>Disables a profile. When disabled, temporary credential requests with this
         * profile fail.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:DisableProfile</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/DisableProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableProfileOutcome DisableProfile(const Model::DisableProfileRequest& request) const;

        /**
         * A Callable wrapper for DisableProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableProfileRequestT = Model::DisableProfileRequest>
        Model::DisableProfileOutcomeCallable DisableProfileCallable(const DisableProfileRequestT& request) const
        {
            return SubmitCallable(&RolesAnywhereClient::DisableProfile, request);
        }

        /**
         * An Async wrapper for DisableProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableProfileRequestT = Model::DisableProfileRequest>
        void DisableProfileAsync(const DisableProfileRequestT& request, const DisableProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RolesAnywhereClient::DisableProfile, request, handler, context);
        }

        /**
         * <p>Disables a trust anchor. When disabled, temporary credential requests
         * specifying this trust anchor are unauthorized.</p> <p> <b>Required permissions:
         * </b> <code>rolesanywhere:DisableTrustAnchor</code>. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/DisableTrustAnchor">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableTrustAnchorOutcome DisableTrustAnchor(const Model::DisableTrustAnchorRequest& request) const;

        /**
         * A Callable wrapper for DisableTrustAnchor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableTrustAnchorRequestT = Model::DisableTrustAnchorRequest>
        Model::DisableTrustAnchorOutcomeCallable DisableTrustAnchorCallable(const DisableTrustAnchorRequestT& request) const
        {
            return SubmitCallable(&RolesAnywhereClient::DisableTrustAnchor, request);
        }

        /**
         * An Async wrapper for DisableTrustAnchor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableTrustAnchorRequestT = Model::DisableTrustAnchorRequest>
        void DisableTrustAnchorAsync(const DisableTrustAnchorRequestT& request, const DisableTrustAnchorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RolesAnywhereClient::DisableTrustAnchor, request, handler, context);
        }

        /**
         * <p>Enables a certificate revocation list (CRL). When enabled, certificates
         * stored in the CRL are unauthorized to receive session credentials.</p> <p>
         * <b>Required permissions: </b> <code>rolesanywhere:EnableCrl</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/EnableCrl">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableCrlOutcome EnableCrl(const Model::EnableCrlRequest& request) const;

        /**
         * A Callable wrapper for EnableCrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableCrlRequestT = Model::EnableCrlRequest>
        Model::EnableCrlOutcomeCallable EnableCrlCallable(const EnableCrlRequestT& request) const
        {
            return SubmitCallable(&RolesAnywhereClient::EnableCrl, request);
        }

        /**
         * An Async wrapper for EnableCrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableCrlRequestT = Model::EnableCrlRequest>
        void EnableCrlAsync(const EnableCrlRequestT& request, const EnableCrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RolesAnywhereClient::EnableCrl, request, handler, context);
        }

        /**
         * <p>Enables temporary credential requests for a profile. </p> <p> <b>Required
         * permissions: </b> <code>rolesanywhere:EnableProfile</code>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/EnableProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableProfileOutcome EnableProfile(const Model::EnableProfileRequest& request) const;

        /**
         * A Callable wrapper for EnableProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableProfileRequestT = Model::EnableProfileRequest>
        Model::EnableProfileOutcomeCallable EnableProfileCallable(const EnableProfileRequestT& request) const
        {
            return SubmitCallable(&RolesAnywhereClient::EnableProfile, request);
        }

        /**
         * An Async wrapper for EnableProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableProfileRequestT = Model::EnableProfileRequest>
        void EnableProfileAsync(const EnableProfileRequestT& request, const EnableProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RolesAnywhereClient::EnableProfile, request, handler, context);
        }

        /**
         * <p>Enables a trust anchor. When enabled, certificates in the trust anchor chain
         * are authorized for trust validation. </p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:EnableTrustAnchor</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/EnableTrustAnchor">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableTrustAnchorOutcome EnableTrustAnchor(const Model::EnableTrustAnchorRequest& request) const;

        /**
         * A Callable wrapper for EnableTrustAnchor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableTrustAnchorRequestT = Model::EnableTrustAnchorRequest>
        Model::EnableTrustAnchorOutcomeCallable EnableTrustAnchorCallable(const EnableTrustAnchorRequestT& request) const
        {
            return SubmitCallable(&RolesAnywhereClient::EnableTrustAnchor, request);
        }

        /**
         * An Async wrapper for EnableTrustAnchor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableTrustAnchorRequestT = Model::EnableTrustAnchorRequest>
        void EnableTrustAnchorAsync(const EnableTrustAnchorRequestT& request, const EnableTrustAnchorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RolesAnywhereClient::EnableTrustAnchor, request, handler, context);
        }

        /**
         * <p>Gets a certificate revocation list (CRL).</p> <p> <b>Required permissions:
         * </b> <code>rolesanywhere:GetCrl</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/GetCrl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCrlOutcome GetCrl(const Model::GetCrlRequest& request) const;

        /**
         * A Callable wrapper for GetCrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCrlRequestT = Model::GetCrlRequest>
        Model::GetCrlOutcomeCallable GetCrlCallable(const GetCrlRequestT& request) const
        {
            return SubmitCallable(&RolesAnywhereClient::GetCrl, request);
        }

        /**
         * An Async wrapper for GetCrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCrlRequestT = Model::GetCrlRequest>
        void GetCrlAsync(const GetCrlRequestT& request, const GetCrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RolesAnywhereClient::GetCrl, request, handler, context);
        }

        /**
         * <p>Gets a profile.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:GetProfile</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/GetProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProfileOutcome GetProfile(const Model::GetProfileRequest& request) const;

        /**
         * A Callable wrapper for GetProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetProfileRequestT = Model::GetProfileRequest>
        Model::GetProfileOutcomeCallable GetProfileCallable(const GetProfileRequestT& request) const
        {
            return SubmitCallable(&RolesAnywhereClient::GetProfile, request);
        }

        /**
         * An Async wrapper for GetProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetProfileRequestT = Model::GetProfileRequest>
        void GetProfileAsync(const GetProfileRequestT& request, const GetProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RolesAnywhereClient::GetProfile, request, handler, context);
        }

        /**
         * <p>Gets a <i>subject</i>, which associates a certificate identity with
         * authentication attempts. The subject stores auditing information such as the
         * status of the last authentication attempt, the certificate data used in the
         * attempt, and the last time the associated identity attempted authentication.
         * </p> <p> <b>Required permissions: </b> <code>rolesanywhere:GetSubject</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/GetSubject">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSubjectOutcome GetSubject(const Model::GetSubjectRequest& request) const;

        /**
         * A Callable wrapper for GetSubject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSubjectRequestT = Model::GetSubjectRequest>
        Model::GetSubjectOutcomeCallable GetSubjectCallable(const GetSubjectRequestT& request) const
        {
            return SubmitCallable(&RolesAnywhereClient::GetSubject, request);
        }

        /**
         * An Async wrapper for GetSubject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSubjectRequestT = Model::GetSubjectRequest>
        void GetSubjectAsync(const GetSubjectRequestT& request, const GetSubjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RolesAnywhereClient::GetSubject, request, handler, context);
        }

        /**
         * <p>Gets a trust anchor.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:GetTrustAnchor</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/GetTrustAnchor">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTrustAnchorOutcome GetTrustAnchor(const Model::GetTrustAnchorRequest& request) const;

        /**
         * A Callable wrapper for GetTrustAnchor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTrustAnchorRequestT = Model::GetTrustAnchorRequest>
        Model::GetTrustAnchorOutcomeCallable GetTrustAnchorCallable(const GetTrustAnchorRequestT& request) const
        {
            return SubmitCallable(&RolesAnywhereClient::GetTrustAnchor, request);
        }

        /**
         * An Async wrapper for GetTrustAnchor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTrustAnchorRequestT = Model::GetTrustAnchorRequest>
        void GetTrustAnchorAsync(const GetTrustAnchorRequestT& request, const GetTrustAnchorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RolesAnywhereClient::GetTrustAnchor, request, handler, context);
        }

        /**
         * <p>Imports the certificate revocation list (CRL). A CRL is a list of
         * certificates that have been revoked by the issuing certificate Authority (CA).
         * IAM Roles Anywhere validates against the CRL before issuing credentials. </p>
         * <p> <b>Required permissions: </b> <code>rolesanywhere:ImportCrl</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/ImportCrl">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportCrlOutcome ImportCrl(const Model::ImportCrlRequest& request) const;

        /**
         * A Callable wrapper for ImportCrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportCrlRequestT = Model::ImportCrlRequest>
        Model::ImportCrlOutcomeCallable ImportCrlCallable(const ImportCrlRequestT& request) const
        {
            return SubmitCallable(&RolesAnywhereClient::ImportCrl, request);
        }

        /**
         * An Async wrapper for ImportCrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportCrlRequestT = Model::ImportCrlRequest>
        void ImportCrlAsync(const ImportCrlRequestT& request, const ImportCrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RolesAnywhereClient::ImportCrl, request, handler, context);
        }

        /**
         * <p>Lists all certificate revocation lists (CRL) in the authenticated account and
         * Amazon Web Services Region.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:ListCrls</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/ListCrls">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCrlsOutcome ListCrls(const Model::ListCrlsRequest& request) const;

        /**
         * A Callable wrapper for ListCrls that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCrlsRequestT = Model::ListCrlsRequest>
        Model::ListCrlsOutcomeCallable ListCrlsCallable(const ListCrlsRequestT& request) const
        {
            return SubmitCallable(&RolesAnywhereClient::ListCrls, request);
        }

        /**
         * An Async wrapper for ListCrls that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCrlsRequestT = Model::ListCrlsRequest>
        void ListCrlsAsync(const ListCrlsRequestT& request, const ListCrlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RolesAnywhereClient::ListCrls, request, handler, context);
        }

        /**
         * <p>Lists all profiles in the authenticated account and Amazon Web Services
         * Region.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:ListProfiles</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/ListProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProfilesOutcome ListProfiles(const Model::ListProfilesRequest& request) const;

        /**
         * A Callable wrapper for ListProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProfilesRequestT = Model::ListProfilesRequest>
        Model::ListProfilesOutcomeCallable ListProfilesCallable(const ListProfilesRequestT& request) const
        {
            return SubmitCallable(&RolesAnywhereClient::ListProfiles, request);
        }

        /**
         * An Async wrapper for ListProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProfilesRequestT = Model::ListProfilesRequest>
        void ListProfilesAsync(const ListProfilesRequestT& request, const ListProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RolesAnywhereClient::ListProfiles, request, handler, context);
        }

        /**
         * <p>Lists the subjects in the authenticated account and Amazon Web Services
         * Region.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:ListSubjects</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/ListSubjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubjectsOutcome ListSubjects(const Model::ListSubjectsRequest& request) const;

        /**
         * A Callable wrapper for ListSubjects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSubjectsRequestT = Model::ListSubjectsRequest>
        Model::ListSubjectsOutcomeCallable ListSubjectsCallable(const ListSubjectsRequestT& request) const
        {
            return SubmitCallable(&RolesAnywhereClient::ListSubjects, request);
        }

        /**
         * An Async wrapper for ListSubjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSubjectsRequestT = Model::ListSubjectsRequest>
        void ListSubjectsAsync(const ListSubjectsRequestT& request, const ListSubjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RolesAnywhereClient::ListSubjects, request, handler, context);
        }

        /**
         * <p>Lists the tags attached to the resource.</p> <p> <b>Required permissions:
         * </b> <code>rolesanywhere:ListTagsForResource</code>. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&RolesAnywhereClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RolesAnywhereClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists the trust anchors in the authenticated account and Amazon Web Services
         * Region.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:ListTrustAnchors</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/ListTrustAnchors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrustAnchorsOutcome ListTrustAnchors(const Model::ListTrustAnchorsRequest& request) const;

        /**
         * A Callable wrapper for ListTrustAnchors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTrustAnchorsRequestT = Model::ListTrustAnchorsRequest>
        Model::ListTrustAnchorsOutcomeCallable ListTrustAnchorsCallable(const ListTrustAnchorsRequestT& request) const
        {
            return SubmitCallable(&RolesAnywhereClient::ListTrustAnchors, request);
        }

        /**
         * An Async wrapper for ListTrustAnchors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTrustAnchorsRequestT = Model::ListTrustAnchorsRequest>
        void ListTrustAnchorsAsync(const ListTrustAnchorsRequestT& request, const ListTrustAnchorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RolesAnywhereClient::ListTrustAnchors, request, handler, context);
        }

        /**
         * <p>Attaches a list of <i>notification settings</i> to a trust anchor.</p> <p>A
         * notification setting includes information such as event name, threshold, status
         * of the notification setting, and the channel to notify.</p> <p> <b>Required
         * permissions: </b> <code>rolesanywhere:PutNotificationSettings</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/PutNotificationSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::PutNotificationSettingsOutcome PutNotificationSettings(const Model::PutNotificationSettingsRequest& request) const;

        /**
         * A Callable wrapper for PutNotificationSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutNotificationSettingsRequestT = Model::PutNotificationSettingsRequest>
        Model::PutNotificationSettingsOutcomeCallable PutNotificationSettingsCallable(const PutNotificationSettingsRequestT& request) const
        {
            return SubmitCallable(&RolesAnywhereClient::PutNotificationSettings, request);
        }

        /**
         * An Async wrapper for PutNotificationSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutNotificationSettingsRequestT = Model::PutNotificationSettingsRequest>
        void PutNotificationSettingsAsync(const PutNotificationSettingsRequestT& request, const PutNotificationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RolesAnywhereClient::PutNotificationSettings, request, handler, context);
        }

        /**
         * <p>Resets the <i>custom notification setting</i> to IAM Roles Anywhere default
         * setting. </p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:ResetNotificationSettings</code>. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/ResetNotificationSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetNotificationSettingsOutcome ResetNotificationSettings(const Model::ResetNotificationSettingsRequest& request) const;

        /**
         * A Callable wrapper for ResetNotificationSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResetNotificationSettingsRequestT = Model::ResetNotificationSettingsRequest>
        Model::ResetNotificationSettingsOutcomeCallable ResetNotificationSettingsCallable(const ResetNotificationSettingsRequestT& request) const
        {
            return SubmitCallable(&RolesAnywhereClient::ResetNotificationSettings, request);
        }

        /**
         * An Async wrapper for ResetNotificationSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResetNotificationSettingsRequestT = Model::ResetNotificationSettingsRequest>
        void ResetNotificationSettingsAsync(const ResetNotificationSettingsRequestT& request, const ResetNotificationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RolesAnywhereClient::ResetNotificationSettings, request, handler, context);
        }

        /**
         * <p>Attaches tags to a resource.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:TagResource</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&RolesAnywhereClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RolesAnywhereClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from the resource.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:UntagResource</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&RolesAnywhereClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RolesAnywhereClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the certificate revocation list (CRL). A CRL is a list of
         * certificates that have been revoked by the issuing certificate authority (CA).
         * IAM Roles Anywhere validates against the CRL before issuing credentials.</p> <p>
         * <b>Required permissions: </b> <code>rolesanywhere:UpdateCrl</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/UpdateCrl">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCrlOutcome UpdateCrl(const Model::UpdateCrlRequest& request) const;

        /**
         * A Callable wrapper for UpdateCrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCrlRequestT = Model::UpdateCrlRequest>
        Model::UpdateCrlOutcomeCallable UpdateCrlCallable(const UpdateCrlRequestT& request) const
        {
            return SubmitCallable(&RolesAnywhereClient::UpdateCrl, request);
        }

        /**
         * An Async wrapper for UpdateCrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCrlRequestT = Model::UpdateCrlRequest>
        void UpdateCrlAsync(const UpdateCrlRequestT& request, const UpdateCrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RolesAnywhereClient::UpdateCrl, request, handler, context);
        }

        /**
         * <p>Updates a <i>profile</i>, a list of the roles that IAM Roles Anywhere service
         * is trusted to assume. You use profiles to intersect permissions with IAM managed
         * policies.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:UpdateProfile</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/UpdateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProfileOutcome UpdateProfile(const Model::UpdateProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateProfileRequestT = Model::UpdateProfileRequest>
        Model::UpdateProfileOutcomeCallable UpdateProfileCallable(const UpdateProfileRequestT& request) const
        {
            return SubmitCallable(&RolesAnywhereClient::UpdateProfile, request);
        }

        /**
         * An Async wrapper for UpdateProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProfileRequestT = Model::UpdateProfileRequest>
        void UpdateProfileAsync(const UpdateProfileRequestT& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RolesAnywhereClient::UpdateProfile, request, handler, context);
        }

        /**
         * <p>Updates a trust anchor. You establish trust between IAM Roles Anywhere and
         * your certificate authority (CA) by configuring a trust anchor. You can define a
         * trust anchor as a reference to an Private Certificate Authority (Private CA) or
         * by uploading a CA certificate. Your Amazon Web Services workloads can
         * authenticate with the trust anchor using certificates issued by the CA in
         * exchange for temporary Amazon Web Services credentials.</p> <p> <b>Required
         * permissions: </b> <code>rolesanywhere:UpdateTrustAnchor</code>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/UpdateTrustAnchor">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTrustAnchorOutcome UpdateTrustAnchor(const Model::UpdateTrustAnchorRequest& request) const;

        /**
         * A Callable wrapper for UpdateTrustAnchor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTrustAnchorRequestT = Model::UpdateTrustAnchorRequest>
        Model::UpdateTrustAnchorOutcomeCallable UpdateTrustAnchorCallable(const UpdateTrustAnchorRequestT& request) const
        {
            return SubmitCallable(&RolesAnywhereClient::UpdateTrustAnchor, request);
        }

        /**
         * An Async wrapper for UpdateTrustAnchor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTrustAnchorRequestT = Model::UpdateTrustAnchorRequest>
        void UpdateTrustAnchorAsync(const UpdateTrustAnchorRequestT& request, const UpdateTrustAnchorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RolesAnywhereClient::UpdateTrustAnchor, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<RolesAnywhereEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<RolesAnywhereClient>;
      void init(const RolesAnywhereClientConfiguration& clientConfiguration);

      RolesAnywhereClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<RolesAnywhereEndpointProviderBase> m_endpointProvider;
  };

} // namespace RolesAnywhere
} // namespace Aws
