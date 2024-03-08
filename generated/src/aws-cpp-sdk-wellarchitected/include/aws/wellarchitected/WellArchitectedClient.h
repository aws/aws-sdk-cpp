/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/WellArchitectedServiceClientModel.h>

namespace Aws
{
namespace WellArchitected
{
  /**
   * <fullname>Well-Architected Tool</fullname> <p>This is the <i>Well-Architected
   * Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
   * href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in
   * the <a href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services
   * Management Console</a>. For information about the Well-Architected Tool, see the
   * <a
   * href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected
   * Tool User Guide</a>.</p>
   */
  class AWS_WELLARCHITECTED_API WellArchitectedClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<WellArchitectedClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef WellArchitectedClientConfiguration ClientConfigurationType;
      typedef WellArchitectedEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WellArchitectedClient(const Aws::WellArchitected::WellArchitectedClientConfiguration& clientConfiguration = Aws::WellArchitected::WellArchitectedClientConfiguration(),
                              std::shared_ptr<WellArchitectedEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WellArchitectedClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<WellArchitectedEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::WellArchitected::WellArchitectedClientConfiguration& clientConfiguration = Aws::WellArchitected::WellArchitectedClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WellArchitectedClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<WellArchitectedEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::WellArchitected::WellArchitectedClientConfiguration& clientConfiguration = Aws::WellArchitected::WellArchitectedClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WellArchitectedClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WellArchitectedClient(const Aws::Auth::AWSCredentials& credentials,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WellArchitectedClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~WellArchitectedClient();

        /**
         * <p>Associate a lens to a workload.</p> <p>Up to 10 lenses can be associated with
         * a workload in a single API operation. A maximum of 20 lenses can be associated
         * with a workload.</p>  <p> <b>Disclaimer</b> </p> <p>By accessing and/or
         * applying custom lenses created by another Amazon Web Services user or account,
         * you acknowledge that custom lenses created by other users and shared with you
         * are Third Party Content as defined in the Amazon Web Services Customer
         * Agreement. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/AssociateLenses">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateLensesOutcome AssociateLenses(const Model::AssociateLensesRequest& request) const;

        /**
         * A Callable wrapper for AssociateLenses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateLensesRequestT = Model::AssociateLensesRequest>
        Model::AssociateLensesOutcomeCallable AssociateLensesCallable(const AssociateLensesRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::AssociateLenses, request);
        }

        /**
         * An Async wrapper for AssociateLenses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateLensesRequestT = Model::AssociateLensesRequest>
        void AssociateLensesAsync(const AssociateLensesRequestT& request, const AssociateLensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::AssociateLenses, request, handler, context);
        }

        /**
         * <p>Associate a profile with a workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/AssociateProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateProfilesOutcome AssociateProfiles(const Model::AssociateProfilesRequest& request) const;

        /**
         * A Callable wrapper for AssociateProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateProfilesRequestT = Model::AssociateProfilesRequest>
        Model::AssociateProfilesOutcomeCallable AssociateProfilesCallable(const AssociateProfilesRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::AssociateProfiles, request);
        }

        /**
         * An Async wrapper for AssociateProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateProfilesRequestT = Model::AssociateProfilesRequest>
        void AssociateProfilesAsync(const AssociateProfilesRequestT& request, const AssociateProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::AssociateProfiles, request, handler, context);
        }

        /**
         * <p>Create a lens share.</p> <p>The owner of a lens can share it with other
         * Amazon Web Services accounts, users, an organization, and organizational units
         * (OUs) in the same Amazon Web Services Region. Lenses provided by Amazon Web
         * Services (Amazon Web Services Official Content) cannot be shared.</p> <p> Shared
         * access to a lens is not removed until the lens invitation is deleted.</p> <p>If
         * you share a lens with an organization or OU, all accounts in the organization or
         * OU are granted access to the lens.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/lenses-sharing.html">Sharing
         * a custom lens</a> in the <i>Well-Architected Tool User Guide</i>.</p>  <p>
         * <b>Disclaimer</b> </p> <p>By sharing your custom lenses with other Amazon Web
         * Services accounts, you acknowledge that Amazon Web Services will make your
         * custom lenses available to those other accounts. Those other accounts may
         * continue to access and use your shared custom lenses even if you delete the
         * custom lenses from your own Amazon Web Services account or terminate your Amazon
         * Web Services account.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CreateLensShare">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLensShareOutcome CreateLensShare(const Model::CreateLensShareRequest& request) const;

        /**
         * A Callable wrapper for CreateLensShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLensShareRequestT = Model::CreateLensShareRequest>
        Model::CreateLensShareOutcomeCallable CreateLensShareCallable(const CreateLensShareRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::CreateLensShare, request);
        }

        /**
         * An Async wrapper for CreateLensShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLensShareRequestT = Model::CreateLensShareRequest>
        void CreateLensShareAsync(const CreateLensShareRequestT& request, const CreateLensShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::CreateLensShare, request, handler, context);
        }

        /**
         * <p>Create a new lens version.</p> <p>A lens can have up to 100 versions.</p>
         * <p>Use this operation to publish a new lens version after you have imported a
         * lens. The <code>LensAlias</code> is used to identify the lens to be published.
         * The owner of a lens can share the lens with other Amazon Web Services accounts
         * and users in the same Amazon Web Services Region. Only the owner of a lens can
         * delete it. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CreateLensVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLensVersionOutcome CreateLensVersion(const Model::CreateLensVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateLensVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLensVersionRequestT = Model::CreateLensVersionRequest>
        Model::CreateLensVersionOutcomeCallable CreateLensVersionCallable(const CreateLensVersionRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::CreateLensVersion, request);
        }

        /**
         * An Async wrapper for CreateLensVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLensVersionRequestT = Model::CreateLensVersionRequest>
        void CreateLensVersionAsync(const CreateLensVersionRequestT& request, const CreateLensVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::CreateLensVersion, request, handler, context);
        }

        /**
         * <p>Create a milestone for an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CreateMilestone">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMilestoneOutcome CreateMilestone(const Model::CreateMilestoneRequest& request) const;

        /**
         * A Callable wrapper for CreateMilestone that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMilestoneRequestT = Model::CreateMilestoneRequest>
        Model::CreateMilestoneOutcomeCallable CreateMilestoneCallable(const CreateMilestoneRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::CreateMilestone, request);
        }

        /**
         * An Async wrapper for CreateMilestone that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMilestoneRequestT = Model::CreateMilestoneRequest>
        void CreateMilestoneAsync(const CreateMilestoneRequestT& request, const CreateMilestoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::CreateMilestone, request, handler, context);
        }

        /**
         * <p>Create a profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CreateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProfileOutcome CreateProfile(const Model::CreateProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProfileRequestT = Model::CreateProfileRequest>
        Model::CreateProfileOutcomeCallable CreateProfileCallable(const CreateProfileRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::CreateProfile, request);
        }

        /**
         * An Async wrapper for CreateProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProfileRequestT = Model::CreateProfileRequest>
        void CreateProfileAsync(const CreateProfileRequestT& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::CreateProfile, request, handler, context);
        }

        /**
         * <p>Create a profile share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CreateProfileShare">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProfileShareOutcome CreateProfileShare(const Model::CreateProfileShareRequest& request) const;

        /**
         * A Callable wrapper for CreateProfileShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProfileShareRequestT = Model::CreateProfileShareRequest>
        Model::CreateProfileShareOutcomeCallable CreateProfileShareCallable(const CreateProfileShareRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::CreateProfileShare, request);
        }

        /**
         * An Async wrapper for CreateProfileShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProfileShareRequestT = Model::CreateProfileShareRequest>
        void CreateProfileShareAsync(const CreateProfileShareRequestT& request, const CreateProfileShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::CreateProfileShare, request, handler, context);
        }

        /**
         * <p>Create a review template.</p>  <p> <b>Disclaimer</b> </p> <p>Do not
         * include or gather personal identifiable information (PII) of end users or other
         * identifiable individuals in or via your review templates. If your review
         * template or those shared with you and used in your account do include or collect
         * PII you are responsible for: ensuring that the included PII is processed in
         * accordance with applicable law, providing adequate privacy notices, and
         * obtaining necessary consents for processing such data.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CreateReviewTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReviewTemplateOutcome CreateReviewTemplate(const Model::CreateReviewTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateReviewTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateReviewTemplateRequestT = Model::CreateReviewTemplateRequest>
        Model::CreateReviewTemplateOutcomeCallable CreateReviewTemplateCallable(const CreateReviewTemplateRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::CreateReviewTemplate, request);
        }

        /**
         * An Async wrapper for CreateReviewTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateReviewTemplateRequestT = Model::CreateReviewTemplateRequest>
        void CreateReviewTemplateAsync(const CreateReviewTemplateRequestT& request, const CreateReviewTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::CreateReviewTemplate, request, handler, context);
        }

        /**
         * <p>Create a review template share.</p> <p>The owner of a review template can
         * share it with other Amazon Web Services accounts, users, an organization, and
         * organizational units (OUs) in the same Amazon Web Services Region. </p> <p>
         * Shared access to a review template is not removed until the review template
         * share invitation is deleted.</p> <p>If you share a review template with an
         * organization or OU, all accounts in the organization or OU are granted access to
         * the review template.</p>  <p> <b>Disclaimer</b> </p> <p>By sharing your
         * review template with other Amazon Web Services accounts, you acknowledge that
         * Amazon Web Services will make your review template available to those other
         * accounts.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CreateTemplateShare">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTemplateShareOutcome CreateTemplateShare(const Model::CreateTemplateShareRequest& request) const;

        /**
         * A Callable wrapper for CreateTemplateShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTemplateShareRequestT = Model::CreateTemplateShareRequest>
        Model::CreateTemplateShareOutcomeCallable CreateTemplateShareCallable(const CreateTemplateShareRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::CreateTemplateShare, request);
        }

        /**
         * An Async wrapper for CreateTemplateShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTemplateShareRequestT = Model::CreateTemplateShareRequest>
        void CreateTemplateShareAsync(const CreateTemplateShareRequestT& request, const CreateTemplateShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::CreateTemplateShare, request, handler, context);
        }

        /**
         * <p>Create a new workload.</p> <p>The owner of a workload can share the workload
         * with other Amazon Web Services accounts, users, an organization, and
         * organizational units (OUs) in the same Amazon Web Services Region. Only the
         * owner of a workload can delete it.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/define-workload.html">Defining
         * a Workload</a> in the <i>Well-Architected Tool User Guide</i>.</p> 
         * <p>Either <code>AwsRegions</code>, <code>NonAwsRegions</code>, or both must be
         * specified when creating a workload.</p> <p>You also must specify
         * <code>ReviewOwner</code>, even though the parameter is listed as not being
         * required in the following section. </p>  <p>When creating a workload
         * using a review template, you must have the following IAM permissions:</p> <ul>
         * <li> <p> <code>wellarchitected:GetReviewTemplate</code> </p> </li> <li> <p>
         * <code>wellarchitected:GetReviewTemplateAnswer</code> </p> </li> <li> <p>
         * <code>wellarchitected:ListReviewTemplateAnswers</code> </p> </li> <li> <p>
         * <code>wellarchitected:GetReviewTemplateLensReview</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CreateWorkload">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkloadOutcome CreateWorkload(const Model::CreateWorkloadRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorkloadRequestT = Model::CreateWorkloadRequest>
        Model::CreateWorkloadOutcomeCallable CreateWorkloadCallable(const CreateWorkloadRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::CreateWorkload, request);
        }

        /**
         * An Async wrapper for CreateWorkload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorkloadRequestT = Model::CreateWorkloadRequest>
        void CreateWorkloadAsync(const CreateWorkloadRequestT& request, const CreateWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::CreateWorkload, request, handler, context);
        }

        /**
         * <p>Create a workload share.</p> <p>The owner of a workload can share it with
         * other Amazon Web Services accounts and users in the same Amazon Web Services
         * Region. Shared access to a workload is not removed until the workload invitation
         * is deleted.</p> <p>If you share a workload with an organization or OU, all
         * accounts in the organization or OU are granted access to the workload.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/workloads-sharing.html">Sharing
         * a workload</a> in the <i>Well-Architected Tool User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CreateWorkloadShare">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkloadShareOutcome CreateWorkloadShare(const Model::CreateWorkloadShareRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkloadShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorkloadShareRequestT = Model::CreateWorkloadShareRequest>
        Model::CreateWorkloadShareOutcomeCallable CreateWorkloadShareCallable(const CreateWorkloadShareRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::CreateWorkloadShare, request);
        }

        /**
         * An Async wrapper for CreateWorkloadShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorkloadShareRequestT = Model::CreateWorkloadShareRequest>
        void CreateWorkloadShareAsync(const CreateWorkloadShareRequestT& request, const CreateWorkloadShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::CreateWorkloadShare, request, handler, context);
        }

        /**
         * <p>Delete an existing lens.</p> <p>Only the owner of a lens can delete it. After
         * the lens is deleted, Amazon Web Services accounts and users that you shared the
         * lens with can continue to use it, but they will no longer be able to apply it to
         * new workloads. </p>  <p> <b>Disclaimer</b> </p> <p>By sharing your custom
         * lenses with other Amazon Web Services accounts, you acknowledge that Amazon Web
         * Services will make your custom lenses available to those other accounts. Those
         * other accounts may continue to access and use your shared custom lenses even if
         * you delete the custom lenses from your own Amazon Web Services account or
         * terminate your Amazon Web Services account.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/DeleteLens">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLensOutcome DeleteLens(const Model::DeleteLensRequest& request) const;

        /**
         * A Callable wrapper for DeleteLens that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLensRequestT = Model::DeleteLensRequest>
        Model::DeleteLensOutcomeCallable DeleteLensCallable(const DeleteLensRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::DeleteLens, request);
        }

        /**
         * An Async wrapper for DeleteLens that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLensRequestT = Model::DeleteLensRequest>
        void DeleteLensAsync(const DeleteLensRequestT& request, const DeleteLensResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::DeleteLens, request, handler, context);
        }

        /**
         * <p>Delete a lens share.</p> <p>After the lens share is deleted, Amazon Web
         * Services accounts, users, organizations, and organizational units (OUs) that you
         * shared the lens with can continue to use it, but they will no longer be able to
         * apply it to new workloads.</p>  <p> <b>Disclaimer</b> </p> <p>By sharing
         * your custom lenses with other Amazon Web Services accounts, you acknowledge that
         * Amazon Web Services will make your custom lenses available to those other
         * accounts. Those other accounts may continue to access and use your shared custom
         * lenses even if you delete the custom lenses from your own Amazon Web Services
         * account or terminate your Amazon Web Services account.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/DeleteLensShare">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLensShareOutcome DeleteLensShare(const Model::DeleteLensShareRequest& request) const;

        /**
         * A Callable wrapper for DeleteLensShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLensShareRequestT = Model::DeleteLensShareRequest>
        Model::DeleteLensShareOutcomeCallable DeleteLensShareCallable(const DeleteLensShareRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::DeleteLensShare, request);
        }

        /**
         * An Async wrapper for DeleteLensShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLensShareRequestT = Model::DeleteLensShareRequest>
        void DeleteLensShareAsync(const DeleteLensShareRequestT& request, const DeleteLensShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::DeleteLensShare, request, handler, context);
        }

        /**
         * <p>Delete a profile.</p>  <p> <b>Disclaimer</b> </p> <p>By sharing your
         * profile with other Amazon Web Services accounts, you acknowledge that Amazon Web
         * Services will make your profile available to those other accounts. Those other
         * accounts may continue to access and use your shared profile even if you delete
         * the profile from your own Amazon Web Services account or terminate your Amazon
         * Web Services account.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/DeleteProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProfileOutcome DeleteProfile(const Model::DeleteProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProfileRequestT = Model::DeleteProfileRequest>
        Model::DeleteProfileOutcomeCallable DeleteProfileCallable(const DeleteProfileRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::DeleteProfile, request);
        }

        /**
         * An Async wrapper for DeleteProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProfileRequestT = Model::DeleteProfileRequest>
        void DeleteProfileAsync(const DeleteProfileRequestT& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::DeleteProfile, request, handler, context);
        }

        /**
         * <p>Delete a profile share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/DeleteProfileShare">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProfileShareOutcome DeleteProfileShare(const Model::DeleteProfileShareRequest& request) const;

        /**
         * A Callable wrapper for DeleteProfileShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProfileShareRequestT = Model::DeleteProfileShareRequest>
        Model::DeleteProfileShareOutcomeCallable DeleteProfileShareCallable(const DeleteProfileShareRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::DeleteProfileShare, request);
        }

        /**
         * An Async wrapper for DeleteProfileShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProfileShareRequestT = Model::DeleteProfileShareRequest>
        void DeleteProfileShareAsync(const DeleteProfileShareRequestT& request, const DeleteProfileShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::DeleteProfileShare, request, handler, context);
        }

        /**
         * <p>Delete a review template.</p> <p>Only the owner of a review template can
         * delete it.</p> <p>After the review template is deleted, Amazon Web Services
         * accounts, users, organizations, and organizational units (OUs) that you shared
         * the review template with will no longer be able to apply it to new
         * workloads.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/DeleteReviewTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReviewTemplateOutcome DeleteReviewTemplate(const Model::DeleteReviewTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteReviewTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteReviewTemplateRequestT = Model::DeleteReviewTemplateRequest>
        Model::DeleteReviewTemplateOutcomeCallable DeleteReviewTemplateCallable(const DeleteReviewTemplateRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::DeleteReviewTemplate, request);
        }

        /**
         * An Async wrapper for DeleteReviewTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteReviewTemplateRequestT = Model::DeleteReviewTemplateRequest>
        void DeleteReviewTemplateAsync(const DeleteReviewTemplateRequestT& request, const DeleteReviewTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::DeleteReviewTemplate, request, handler, context);
        }

        /**
         * <p>Delete a review template share.</p> <p>After the review template share is
         * deleted, Amazon Web Services accounts, users, organizations, and organizational
         * units (OUs) that you shared the review template with will no longer be able to
         * apply it to new workloads.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/DeleteTemplateShare">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTemplateShareOutcome DeleteTemplateShare(const Model::DeleteTemplateShareRequest& request) const;

        /**
         * A Callable wrapper for DeleteTemplateShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTemplateShareRequestT = Model::DeleteTemplateShareRequest>
        Model::DeleteTemplateShareOutcomeCallable DeleteTemplateShareCallable(const DeleteTemplateShareRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::DeleteTemplateShare, request);
        }

        /**
         * An Async wrapper for DeleteTemplateShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTemplateShareRequestT = Model::DeleteTemplateShareRequest>
        void DeleteTemplateShareAsync(const DeleteTemplateShareRequestT& request, const DeleteTemplateShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::DeleteTemplateShare, request, handler, context);
        }

        /**
         * <p>Delete an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/DeleteWorkload">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkloadOutcome DeleteWorkload(const Model::DeleteWorkloadRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWorkloadRequestT = Model::DeleteWorkloadRequest>
        Model::DeleteWorkloadOutcomeCallable DeleteWorkloadCallable(const DeleteWorkloadRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::DeleteWorkload, request);
        }

        /**
         * An Async wrapper for DeleteWorkload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorkloadRequestT = Model::DeleteWorkloadRequest>
        void DeleteWorkloadAsync(const DeleteWorkloadRequestT& request, const DeleteWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::DeleteWorkload, request, handler, context);
        }

        /**
         * <p>Delete a workload share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/DeleteWorkloadShare">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkloadShareOutcome DeleteWorkloadShare(const Model::DeleteWorkloadShareRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkloadShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWorkloadShareRequestT = Model::DeleteWorkloadShareRequest>
        Model::DeleteWorkloadShareOutcomeCallable DeleteWorkloadShareCallable(const DeleteWorkloadShareRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::DeleteWorkloadShare, request);
        }

        /**
         * An Async wrapper for DeleteWorkloadShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorkloadShareRequestT = Model::DeleteWorkloadShareRequest>
        void DeleteWorkloadShareAsync(const DeleteWorkloadShareRequestT& request, const DeleteWorkloadShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::DeleteWorkloadShare, request, handler, context);
        }

        /**
         * <p>Disassociate a lens from a workload.</p> <p>Up to 10 lenses can be
         * disassociated from a workload in a single API operation.</p>  <p>The
         * Amazon Web Services Well-Architected Framework lens
         * (<code>wellarchitected</code>) cannot be removed from a workload.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/DisassociateLenses">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateLensesOutcome DisassociateLenses(const Model::DisassociateLensesRequest& request) const;

        /**
         * A Callable wrapper for DisassociateLenses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateLensesRequestT = Model::DisassociateLensesRequest>
        Model::DisassociateLensesOutcomeCallable DisassociateLensesCallable(const DisassociateLensesRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::DisassociateLenses, request);
        }

        /**
         * An Async wrapper for DisassociateLenses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateLensesRequestT = Model::DisassociateLensesRequest>
        void DisassociateLensesAsync(const DisassociateLensesRequestT& request, const DisassociateLensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::DisassociateLenses, request, handler, context);
        }

        /**
         * <p>Disassociate a profile from a workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/DisassociateProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateProfilesOutcome DisassociateProfiles(const Model::DisassociateProfilesRequest& request) const;

        /**
         * A Callable wrapper for DisassociateProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateProfilesRequestT = Model::DisassociateProfilesRequest>
        Model::DisassociateProfilesOutcomeCallable DisassociateProfilesCallable(const DisassociateProfilesRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::DisassociateProfiles, request);
        }

        /**
         * An Async wrapper for DisassociateProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateProfilesRequestT = Model::DisassociateProfilesRequest>
        void DisassociateProfilesAsync(const DisassociateProfilesRequestT& request, const DisassociateProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::DisassociateProfiles, request, handler, context);
        }

        /**
         * <p>Export an existing lens.</p> <p>Only the owner of a lens can export it.
         * Lenses provided by Amazon Web Services (Amazon Web Services Official Content)
         * cannot be exported.</p> <p>Lenses are defined in JSON. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/lenses-format-specification.html">JSON
         * format specification</a> in the <i>Well-Architected Tool User Guide</i>.</p>
         *  <p> <b>Disclaimer</b> </p> <p>Do not include or gather personal
         * identifiable information (PII) of end users or other identifiable individuals in
         * or via your custom lenses. If your custom lens or those shared with you and used
         * in your account do include or collect PII you are responsible for: ensuring that
         * the included PII is processed in accordance with applicable law, providing
         * adequate privacy notices, and obtaining necessary consents for processing such
         * data.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ExportLens">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportLensOutcome ExportLens(const Model::ExportLensRequest& request) const;

        /**
         * A Callable wrapper for ExportLens that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExportLensRequestT = Model::ExportLensRequest>
        Model::ExportLensOutcomeCallable ExportLensCallable(const ExportLensRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::ExportLens, request);
        }

        /**
         * An Async wrapper for ExportLens that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportLensRequestT = Model::ExportLensRequest>
        void ExportLensAsync(const ExportLensRequestT& request, const ExportLensResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::ExportLens, request, handler, context);
        }

        /**
         * <p>Get the answer to a specific question in a workload review.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetAnswer">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAnswerOutcome GetAnswer(const Model::GetAnswerRequest& request) const;

        /**
         * A Callable wrapper for GetAnswer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAnswerRequestT = Model::GetAnswerRequest>
        Model::GetAnswerOutcomeCallable GetAnswerCallable(const GetAnswerRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::GetAnswer, request);
        }

        /**
         * An Async wrapper for GetAnswer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAnswerRequestT = Model::GetAnswerRequest>
        void GetAnswerAsync(const GetAnswerRequestT& request, const GetAnswerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::GetAnswer, request, handler, context);
        }

        /**
         * <p>Get a consolidated report of your workloads.</p> <p>You can optionally choose
         * to include workloads that have been shared with you.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetConsolidatedReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConsolidatedReportOutcome GetConsolidatedReport(const Model::GetConsolidatedReportRequest& request) const;

        /**
         * A Callable wrapper for GetConsolidatedReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConsolidatedReportRequestT = Model::GetConsolidatedReportRequest>
        Model::GetConsolidatedReportOutcomeCallable GetConsolidatedReportCallable(const GetConsolidatedReportRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::GetConsolidatedReport, request);
        }

        /**
         * An Async wrapper for GetConsolidatedReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConsolidatedReportRequestT = Model::GetConsolidatedReportRequest>
        void GetConsolidatedReportAsync(const GetConsolidatedReportRequestT& request, const GetConsolidatedReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::GetConsolidatedReport, request, handler, context);
        }

        /**
         * <p>Get an existing lens.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetLens">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLensOutcome GetLens(const Model::GetLensRequest& request) const;

        /**
         * A Callable wrapper for GetLens that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLensRequestT = Model::GetLensRequest>
        Model::GetLensOutcomeCallable GetLensCallable(const GetLensRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::GetLens, request);
        }

        /**
         * An Async wrapper for GetLens that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLensRequestT = Model::GetLensRequest>
        void GetLensAsync(const GetLensRequestT& request, const GetLensResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::GetLens, request, handler, context);
        }

        /**
         * <p>Get lens review.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetLensReview">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLensReviewOutcome GetLensReview(const Model::GetLensReviewRequest& request) const;

        /**
         * A Callable wrapper for GetLensReview that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLensReviewRequestT = Model::GetLensReviewRequest>
        Model::GetLensReviewOutcomeCallable GetLensReviewCallable(const GetLensReviewRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::GetLensReview, request);
        }

        /**
         * An Async wrapper for GetLensReview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLensReviewRequestT = Model::GetLensReviewRequest>
        void GetLensReviewAsync(const GetLensReviewRequestT& request, const GetLensReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::GetLensReview, request, handler, context);
        }

        /**
         * <p>Get lens review report.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetLensReviewReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLensReviewReportOutcome GetLensReviewReport(const Model::GetLensReviewReportRequest& request) const;

        /**
         * A Callable wrapper for GetLensReviewReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLensReviewReportRequestT = Model::GetLensReviewReportRequest>
        Model::GetLensReviewReportOutcomeCallable GetLensReviewReportCallable(const GetLensReviewReportRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::GetLensReviewReport, request);
        }

        /**
         * An Async wrapper for GetLensReviewReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLensReviewReportRequestT = Model::GetLensReviewReportRequest>
        void GetLensReviewReportAsync(const GetLensReviewReportRequestT& request, const GetLensReviewReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::GetLensReviewReport, request, handler, context);
        }

        /**
         * <p>Get lens version differences.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetLensVersionDifference">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLensVersionDifferenceOutcome GetLensVersionDifference(const Model::GetLensVersionDifferenceRequest& request) const;

        /**
         * A Callable wrapper for GetLensVersionDifference that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLensVersionDifferenceRequestT = Model::GetLensVersionDifferenceRequest>
        Model::GetLensVersionDifferenceOutcomeCallable GetLensVersionDifferenceCallable(const GetLensVersionDifferenceRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::GetLensVersionDifference, request);
        }

        /**
         * An Async wrapper for GetLensVersionDifference that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLensVersionDifferenceRequestT = Model::GetLensVersionDifferenceRequest>
        void GetLensVersionDifferenceAsync(const GetLensVersionDifferenceRequestT& request, const GetLensVersionDifferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::GetLensVersionDifference, request, handler, context);
        }

        /**
         * <p>Get a milestone for an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetMilestone">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMilestoneOutcome GetMilestone(const Model::GetMilestoneRequest& request) const;

        /**
         * A Callable wrapper for GetMilestone that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMilestoneRequestT = Model::GetMilestoneRequest>
        Model::GetMilestoneOutcomeCallable GetMilestoneCallable(const GetMilestoneRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::GetMilestone, request);
        }

        /**
         * An Async wrapper for GetMilestone that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMilestoneRequestT = Model::GetMilestoneRequest>
        void GetMilestoneAsync(const GetMilestoneRequestT& request, const GetMilestoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::GetMilestone, request, handler, context);
        }

        /**
         * <p>Get profile information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProfileOutcome GetProfile(const Model::GetProfileRequest& request) const;

        /**
         * A Callable wrapper for GetProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetProfileRequestT = Model::GetProfileRequest>
        Model::GetProfileOutcomeCallable GetProfileCallable(const GetProfileRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::GetProfile, request);
        }

        /**
         * An Async wrapper for GetProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetProfileRequestT = Model::GetProfileRequest>
        void GetProfileAsync(const GetProfileRequestT& request, const GetProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::GetProfile, request, handler, context);
        }

        /**
         * <p>Get profile template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetProfileTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProfileTemplateOutcome GetProfileTemplate(const Model::GetProfileTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetProfileTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetProfileTemplateRequestT = Model::GetProfileTemplateRequest>
        Model::GetProfileTemplateOutcomeCallable GetProfileTemplateCallable(const GetProfileTemplateRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::GetProfileTemplate, request);
        }

        /**
         * An Async wrapper for GetProfileTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetProfileTemplateRequestT = Model::GetProfileTemplateRequest>
        void GetProfileTemplateAsync(const GetProfileTemplateRequestT& request, const GetProfileTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::GetProfileTemplate, request, handler, context);
        }

        /**
         * <p>Get review template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetReviewTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReviewTemplateOutcome GetReviewTemplate(const Model::GetReviewTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetReviewTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetReviewTemplateRequestT = Model::GetReviewTemplateRequest>
        Model::GetReviewTemplateOutcomeCallable GetReviewTemplateCallable(const GetReviewTemplateRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::GetReviewTemplate, request);
        }

        /**
         * An Async wrapper for GetReviewTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetReviewTemplateRequestT = Model::GetReviewTemplateRequest>
        void GetReviewTemplateAsync(const GetReviewTemplateRequestT& request, const GetReviewTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::GetReviewTemplate, request, handler, context);
        }

        /**
         * <p>Get review template answer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetReviewTemplateAnswer">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReviewTemplateAnswerOutcome GetReviewTemplateAnswer(const Model::GetReviewTemplateAnswerRequest& request) const;

        /**
         * A Callable wrapper for GetReviewTemplateAnswer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetReviewTemplateAnswerRequestT = Model::GetReviewTemplateAnswerRequest>
        Model::GetReviewTemplateAnswerOutcomeCallable GetReviewTemplateAnswerCallable(const GetReviewTemplateAnswerRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::GetReviewTemplateAnswer, request);
        }

        /**
         * An Async wrapper for GetReviewTemplateAnswer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetReviewTemplateAnswerRequestT = Model::GetReviewTemplateAnswerRequest>
        void GetReviewTemplateAnswerAsync(const GetReviewTemplateAnswerRequestT& request, const GetReviewTemplateAnswerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::GetReviewTemplateAnswer, request, handler, context);
        }

        /**
         * <p>Get a lens review associated with a review template.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetReviewTemplateLensReview">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReviewTemplateLensReviewOutcome GetReviewTemplateLensReview(const Model::GetReviewTemplateLensReviewRequest& request) const;

        /**
         * A Callable wrapper for GetReviewTemplateLensReview that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetReviewTemplateLensReviewRequestT = Model::GetReviewTemplateLensReviewRequest>
        Model::GetReviewTemplateLensReviewOutcomeCallable GetReviewTemplateLensReviewCallable(const GetReviewTemplateLensReviewRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::GetReviewTemplateLensReview, request);
        }

        /**
         * An Async wrapper for GetReviewTemplateLensReview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetReviewTemplateLensReviewRequestT = Model::GetReviewTemplateLensReviewRequest>
        void GetReviewTemplateLensReviewAsync(const GetReviewTemplateLensReviewRequestT& request, const GetReviewTemplateLensReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::GetReviewTemplateLensReview, request, handler, context);
        }

        /**
         * <p>Get an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetWorkload">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkloadOutcome GetWorkload(const Model::GetWorkloadRequest& request) const;

        /**
         * A Callable wrapper for GetWorkload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorkloadRequestT = Model::GetWorkloadRequest>
        Model::GetWorkloadOutcomeCallable GetWorkloadCallable(const GetWorkloadRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::GetWorkload, request);
        }

        /**
         * An Async wrapper for GetWorkload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkloadRequestT = Model::GetWorkloadRequest>
        void GetWorkloadAsync(const GetWorkloadRequestT& request, const GetWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::GetWorkload, request, handler, context);
        }

        /**
         * <p>Import a new custom lens or update an existing custom lens.</p> <p>To update
         * an existing custom lens, specify its ARN as the <code>LensAlias</code>. If no
         * ARN is specified, a new custom lens is created.</p> <p>The new or updated lens
         * will have a status of <code>DRAFT</code>. The lens cannot be applied to
         * workloads or shared with other Amazon Web Services accounts until it's published
         * with <a>CreateLensVersion</a>.</p> <p>Lenses are defined in JSON. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/lenses-format-specification.html">JSON
         * format specification</a> in the <i>Well-Architected Tool User Guide</i>.</p>
         * <p>A custom lens cannot exceed 500 KB in size.</p>  <p> <b>Disclaimer</b>
         * </p> <p>Do not include or gather personal identifiable information (PII) of end
         * users or other identifiable individuals in or via your custom lenses. If your
         * custom lens or those shared with you and used in your account do include or
         * collect PII you are responsible for: ensuring that the included PII is processed
         * in accordance with applicable law, providing adequate privacy notices, and
         * obtaining necessary consents for processing such data.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ImportLens">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportLensOutcome ImportLens(const Model::ImportLensRequest& request) const;

        /**
         * A Callable wrapper for ImportLens that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportLensRequestT = Model::ImportLensRequest>
        Model::ImportLensOutcomeCallable ImportLensCallable(const ImportLensRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::ImportLens, request);
        }

        /**
         * An Async wrapper for ImportLens that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportLensRequestT = Model::ImportLensRequest>
        void ImportLensAsync(const ImportLensRequestT& request, const ImportLensResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::ImportLens, request, handler, context);
        }

        /**
         * <p>List of answers for a particular workload and lens.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListAnswers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnswersOutcome ListAnswers(const Model::ListAnswersRequest& request) const;

        /**
         * A Callable wrapper for ListAnswers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAnswersRequestT = Model::ListAnswersRequest>
        Model::ListAnswersOutcomeCallable ListAnswersCallable(const ListAnswersRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::ListAnswers, request);
        }

        /**
         * An Async wrapper for ListAnswers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAnswersRequestT = Model::ListAnswersRequest>
        void ListAnswersAsync(const ListAnswersRequestT& request, const ListAnswersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::ListAnswers, request, handler, context);
        }

        /**
         * <p>List of Trusted Advisor check details by account related to the
         * workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListCheckDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCheckDetailsOutcome ListCheckDetails(const Model::ListCheckDetailsRequest& request) const;

        /**
         * A Callable wrapper for ListCheckDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCheckDetailsRequestT = Model::ListCheckDetailsRequest>
        Model::ListCheckDetailsOutcomeCallable ListCheckDetailsCallable(const ListCheckDetailsRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::ListCheckDetails, request);
        }

        /**
         * An Async wrapper for ListCheckDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCheckDetailsRequestT = Model::ListCheckDetailsRequest>
        void ListCheckDetailsAsync(const ListCheckDetailsRequestT& request, const ListCheckDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::ListCheckDetails, request, handler, context);
        }

        /**
         * <p>List of Trusted Advisor checks summarized for all accounts related to the
         * workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListCheckSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCheckSummariesOutcome ListCheckSummaries(const Model::ListCheckSummariesRequest& request) const;

        /**
         * A Callable wrapper for ListCheckSummaries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCheckSummariesRequestT = Model::ListCheckSummariesRequest>
        Model::ListCheckSummariesOutcomeCallable ListCheckSummariesCallable(const ListCheckSummariesRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::ListCheckSummaries, request);
        }

        /**
         * An Async wrapper for ListCheckSummaries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCheckSummariesRequestT = Model::ListCheckSummariesRequest>
        void ListCheckSummariesAsync(const ListCheckSummariesRequestT& request, const ListCheckSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::ListCheckSummaries, request, handler, context);
        }

        /**
         * <p>List lens review improvements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListLensReviewImprovements">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLensReviewImprovementsOutcome ListLensReviewImprovements(const Model::ListLensReviewImprovementsRequest& request) const;

        /**
         * A Callable wrapper for ListLensReviewImprovements that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLensReviewImprovementsRequestT = Model::ListLensReviewImprovementsRequest>
        Model::ListLensReviewImprovementsOutcomeCallable ListLensReviewImprovementsCallable(const ListLensReviewImprovementsRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::ListLensReviewImprovements, request);
        }

        /**
         * An Async wrapper for ListLensReviewImprovements that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLensReviewImprovementsRequestT = Model::ListLensReviewImprovementsRequest>
        void ListLensReviewImprovementsAsync(const ListLensReviewImprovementsRequestT& request, const ListLensReviewImprovementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::ListLensReviewImprovements, request, handler, context);
        }

        /**
         * <p>List lens reviews for a particular workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListLensReviews">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLensReviewsOutcome ListLensReviews(const Model::ListLensReviewsRequest& request) const;

        /**
         * A Callable wrapper for ListLensReviews that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLensReviewsRequestT = Model::ListLensReviewsRequest>
        Model::ListLensReviewsOutcomeCallable ListLensReviewsCallable(const ListLensReviewsRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::ListLensReviews, request);
        }

        /**
         * An Async wrapper for ListLensReviews that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLensReviewsRequestT = Model::ListLensReviewsRequest>
        void ListLensReviewsAsync(const ListLensReviewsRequestT& request, const ListLensReviewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::ListLensReviews, request, handler, context);
        }

        /**
         * <p>List the lens shares associated with the lens.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListLensShares">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLensSharesOutcome ListLensShares(const Model::ListLensSharesRequest& request) const;

        /**
         * A Callable wrapper for ListLensShares that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLensSharesRequestT = Model::ListLensSharesRequest>
        Model::ListLensSharesOutcomeCallable ListLensSharesCallable(const ListLensSharesRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::ListLensShares, request);
        }

        /**
         * An Async wrapper for ListLensShares that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLensSharesRequestT = Model::ListLensSharesRequest>
        void ListLensSharesAsync(const ListLensSharesRequestT& request, const ListLensSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::ListLensShares, request, handler, context);
        }

        /**
         * <p>List the available lenses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListLenses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLensesOutcome ListLenses(const Model::ListLensesRequest& request) const;

        /**
         * A Callable wrapper for ListLenses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLensesRequestT = Model::ListLensesRequest>
        Model::ListLensesOutcomeCallable ListLensesCallable(const ListLensesRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::ListLenses, request);
        }

        /**
         * An Async wrapper for ListLenses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLensesRequestT = Model::ListLensesRequest>
        void ListLensesAsync(const ListLensesRequestT& request, const ListLensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::ListLenses, request, handler, context);
        }

        /**
         * <p>List all milestones for an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListMilestones">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMilestonesOutcome ListMilestones(const Model::ListMilestonesRequest& request) const;

        /**
         * A Callable wrapper for ListMilestones that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMilestonesRequestT = Model::ListMilestonesRequest>
        Model::ListMilestonesOutcomeCallable ListMilestonesCallable(const ListMilestonesRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::ListMilestones, request);
        }

        /**
         * An Async wrapper for ListMilestones that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMilestonesRequestT = Model::ListMilestonesRequest>
        void ListMilestonesAsync(const ListMilestonesRequestT& request, const ListMilestonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::ListMilestones, request, handler, context);
        }

        /**
         * <p>List lens notifications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListNotifications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNotificationsOutcome ListNotifications(const Model::ListNotificationsRequest& request) const;

        /**
         * A Callable wrapper for ListNotifications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListNotificationsRequestT = Model::ListNotificationsRequest>
        Model::ListNotificationsOutcomeCallable ListNotificationsCallable(const ListNotificationsRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::ListNotifications, request);
        }

        /**
         * An Async wrapper for ListNotifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNotificationsRequestT = Model::ListNotificationsRequest>
        void ListNotificationsAsync(const ListNotificationsRequestT& request, const ListNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::ListNotifications, request, handler, context);
        }

        /**
         * <p>List profile notifications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListProfileNotifications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProfileNotificationsOutcome ListProfileNotifications(const Model::ListProfileNotificationsRequest& request) const;

        /**
         * A Callable wrapper for ListProfileNotifications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProfileNotificationsRequestT = Model::ListProfileNotificationsRequest>
        Model::ListProfileNotificationsOutcomeCallable ListProfileNotificationsCallable(const ListProfileNotificationsRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::ListProfileNotifications, request);
        }

        /**
         * An Async wrapper for ListProfileNotifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProfileNotificationsRequestT = Model::ListProfileNotificationsRequest>
        void ListProfileNotificationsAsync(const ListProfileNotificationsRequestT& request, const ListProfileNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::ListProfileNotifications, request, handler, context);
        }

        /**
         * <p>List profile shares.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListProfileShares">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProfileSharesOutcome ListProfileShares(const Model::ListProfileSharesRequest& request) const;

        /**
         * A Callable wrapper for ListProfileShares that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProfileSharesRequestT = Model::ListProfileSharesRequest>
        Model::ListProfileSharesOutcomeCallable ListProfileSharesCallable(const ListProfileSharesRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::ListProfileShares, request);
        }

        /**
         * An Async wrapper for ListProfileShares that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProfileSharesRequestT = Model::ListProfileSharesRequest>
        void ListProfileSharesAsync(const ListProfileSharesRequestT& request, const ListProfileSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::ListProfileShares, request, handler, context);
        }

        /**
         * <p>List profiles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProfilesOutcome ListProfiles(const Model::ListProfilesRequest& request) const;

        /**
         * A Callable wrapper for ListProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProfilesRequestT = Model::ListProfilesRequest>
        Model::ListProfilesOutcomeCallable ListProfilesCallable(const ListProfilesRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::ListProfiles, request);
        }

        /**
         * An Async wrapper for ListProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProfilesRequestT = Model::ListProfilesRequest>
        void ListProfilesAsync(const ListProfilesRequestT& request, const ListProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::ListProfiles, request, handler, context);
        }

        /**
         * <p>List the answers of a review template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListReviewTemplateAnswers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReviewTemplateAnswersOutcome ListReviewTemplateAnswers(const Model::ListReviewTemplateAnswersRequest& request) const;

        /**
         * A Callable wrapper for ListReviewTemplateAnswers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReviewTemplateAnswersRequestT = Model::ListReviewTemplateAnswersRequest>
        Model::ListReviewTemplateAnswersOutcomeCallable ListReviewTemplateAnswersCallable(const ListReviewTemplateAnswersRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::ListReviewTemplateAnswers, request);
        }

        /**
         * An Async wrapper for ListReviewTemplateAnswers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReviewTemplateAnswersRequestT = Model::ListReviewTemplateAnswersRequest>
        void ListReviewTemplateAnswersAsync(const ListReviewTemplateAnswersRequestT& request, const ListReviewTemplateAnswersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::ListReviewTemplateAnswers, request, handler, context);
        }

        /**
         * <p>List review templates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListReviewTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReviewTemplatesOutcome ListReviewTemplates(const Model::ListReviewTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListReviewTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReviewTemplatesRequestT = Model::ListReviewTemplatesRequest>
        Model::ListReviewTemplatesOutcomeCallable ListReviewTemplatesCallable(const ListReviewTemplatesRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::ListReviewTemplates, request);
        }

        /**
         * An Async wrapper for ListReviewTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReviewTemplatesRequestT = Model::ListReviewTemplatesRequest>
        void ListReviewTemplatesAsync(const ListReviewTemplatesRequestT& request, const ListReviewTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::ListReviewTemplates, request, handler, context);
        }

        /**
         * <p>List the share invitations.</p> <p> <code>WorkloadNamePrefix</code>,
         * <code>LensNamePrefix</code>, <code>ProfileNamePrefix</code>, and
         * <code>TemplateNamePrefix</code> are mutually exclusive. Use the parameter that
         * matches your <code>ShareResourceType</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListShareInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListShareInvitationsOutcome ListShareInvitations(const Model::ListShareInvitationsRequest& request) const;

        /**
         * A Callable wrapper for ListShareInvitations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListShareInvitationsRequestT = Model::ListShareInvitationsRequest>
        Model::ListShareInvitationsOutcomeCallable ListShareInvitationsCallable(const ListShareInvitationsRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::ListShareInvitations, request);
        }

        /**
         * An Async wrapper for ListShareInvitations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListShareInvitationsRequestT = Model::ListShareInvitationsRequest>
        void ListShareInvitationsAsync(const ListShareInvitationsRequestT& request, const ListShareInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::ListShareInvitations, request, handler, context);
        }

        /**
         * <p>List the tags for a resource.</p>  <p>The WorkloadArn parameter can be
         * a workload ARN, a custom lens ARN, a profile ARN, or review template ARN.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>List review template shares.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListTemplateShares">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplateSharesOutcome ListTemplateShares(const Model::ListTemplateSharesRequest& request) const;

        /**
         * A Callable wrapper for ListTemplateShares that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTemplateSharesRequestT = Model::ListTemplateSharesRequest>
        Model::ListTemplateSharesOutcomeCallable ListTemplateSharesCallable(const ListTemplateSharesRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::ListTemplateShares, request);
        }

        /**
         * An Async wrapper for ListTemplateShares that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTemplateSharesRequestT = Model::ListTemplateSharesRequest>
        void ListTemplateSharesAsync(const ListTemplateSharesRequestT& request, const ListTemplateSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::ListTemplateShares, request, handler, context);
        }

        /**
         * <p>List the workload shares associated with the workload.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListWorkloadShares">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkloadSharesOutcome ListWorkloadShares(const Model::ListWorkloadSharesRequest& request) const;

        /**
         * A Callable wrapper for ListWorkloadShares that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkloadSharesRequestT = Model::ListWorkloadSharesRequest>
        Model::ListWorkloadSharesOutcomeCallable ListWorkloadSharesCallable(const ListWorkloadSharesRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::ListWorkloadShares, request);
        }

        /**
         * An Async wrapper for ListWorkloadShares that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkloadSharesRequestT = Model::ListWorkloadSharesRequest>
        void ListWorkloadSharesAsync(const ListWorkloadSharesRequestT& request, const ListWorkloadSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::ListWorkloadShares, request, handler, context);
        }

        /**
         * <p>Paginated list of workloads.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListWorkloads">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkloadsOutcome ListWorkloads(const Model::ListWorkloadsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkloads that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkloadsRequestT = Model::ListWorkloadsRequest>
        Model::ListWorkloadsOutcomeCallable ListWorkloadsCallable(const ListWorkloadsRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::ListWorkloads, request);
        }

        /**
         * An Async wrapper for ListWorkloads that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkloadsRequestT = Model::ListWorkloadsRequest>
        void ListWorkloadsAsync(const ListWorkloadsRequestT& request, const ListWorkloadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::ListWorkloads, request, handler, context);
        }

        /**
         * <p>Adds one or more tags to the specified resource.</p>  <p>The
         * WorkloadArn parameter can be a workload ARN, a custom lens ARN, a profile ARN,
         * or review template ARN.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::TagResource, request, handler, context);
        }

        /**
         * <p>Deletes specified tags from a resource.</p>  <p>The WorkloadArn
         * parameter can be a workload ARN, a custom lens ARN, a profile ARN, or review
         * template ARN.</p>  <p>To specify multiple tags, use separate
         * <b>tagKeys</b> parameters, for example:</p> <p> <code>DELETE
         * /tags/WorkloadArn?tagKeys=key1&amp;tagKeys=key2</code> </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Update the answer to a specific question in a workload review.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateAnswer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAnswerOutcome UpdateAnswer(const Model::UpdateAnswerRequest& request) const;

        /**
         * A Callable wrapper for UpdateAnswer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAnswerRequestT = Model::UpdateAnswerRequest>
        Model::UpdateAnswerOutcomeCallable UpdateAnswerCallable(const UpdateAnswerRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::UpdateAnswer, request);
        }

        /**
         * An Async wrapper for UpdateAnswer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAnswerRequestT = Model::UpdateAnswerRequest>
        void UpdateAnswerAsync(const UpdateAnswerRequestT& request, const UpdateAnswerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::UpdateAnswer, request, handler, context);
        }

        /**
         * <p>Updates whether the Amazon Web Services account is opted into organization
         * sharing and discovery integration features.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateGlobalSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGlobalSettingsOutcome UpdateGlobalSettings(const Model::UpdateGlobalSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateGlobalSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGlobalSettingsRequestT = Model::UpdateGlobalSettingsRequest>
        Model::UpdateGlobalSettingsOutcomeCallable UpdateGlobalSettingsCallable(const UpdateGlobalSettingsRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::UpdateGlobalSettings, request);
        }

        /**
         * An Async wrapper for UpdateGlobalSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGlobalSettingsRequestT = Model::UpdateGlobalSettingsRequest>
        void UpdateGlobalSettingsAsync(const UpdateGlobalSettingsRequestT& request, const UpdateGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::UpdateGlobalSettings, request, handler, context);
        }

        /**
         * <p>Update lens review for a particular workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateLensReview">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLensReviewOutcome UpdateLensReview(const Model::UpdateLensReviewRequest& request) const;

        /**
         * A Callable wrapper for UpdateLensReview that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLensReviewRequestT = Model::UpdateLensReviewRequest>
        Model::UpdateLensReviewOutcomeCallable UpdateLensReviewCallable(const UpdateLensReviewRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::UpdateLensReview, request);
        }

        /**
         * An Async wrapper for UpdateLensReview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLensReviewRequestT = Model::UpdateLensReviewRequest>
        void UpdateLensReviewAsync(const UpdateLensReviewRequestT& request, const UpdateLensReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::UpdateLensReview, request, handler, context);
        }

        /**
         * <p>Update a profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProfileOutcome UpdateProfile(const Model::UpdateProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateProfileRequestT = Model::UpdateProfileRequest>
        Model::UpdateProfileOutcomeCallable UpdateProfileCallable(const UpdateProfileRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::UpdateProfile, request);
        }

        /**
         * An Async wrapper for UpdateProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProfileRequestT = Model::UpdateProfileRequest>
        void UpdateProfileAsync(const UpdateProfileRequestT& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::UpdateProfile, request, handler, context);
        }

        /**
         * <p>Update a review template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateReviewTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReviewTemplateOutcome UpdateReviewTemplate(const Model::UpdateReviewTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateReviewTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateReviewTemplateRequestT = Model::UpdateReviewTemplateRequest>
        Model::UpdateReviewTemplateOutcomeCallable UpdateReviewTemplateCallable(const UpdateReviewTemplateRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::UpdateReviewTemplate, request);
        }

        /**
         * An Async wrapper for UpdateReviewTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateReviewTemplateRequestT = Model::UpdateReviewTemplateRequest>
        void UpdateReviewTemplateAsync(const UpdateReviewTemplateRequestT& request, const UpdateReviewTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::UpdateReviewTemplate, request, handler, context);
        }

        /**
         * <p>Update a review template answer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateReviewTemplateAnswer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReviewTemplateAnswerOutcome UpdateReviewTemplateAnswer(const Model::UpdateReviewTemplateAnswerRequest& request) const;

        /**
         * A Callable wrapper for UpdateReviewTemplateAnswer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateReviewTemplateAnswerRequestT = Model::UpdateReviewTemplateAnswerRequest>
        Model::UpdateReviewTemplateAnswerOutcomeCallable UpdateReviewTemplateAnswerCallable(const UpdateReviewTemplateAnswerRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::UpdateReviewTemplateAnswer, request);
        }

        /**
         * An Async wrapper for UpdateReviewTemplateAnswer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateReviewTemplateAnswerRequestT = Model::UpdateReviewTemplateAnswerRequest>
        void UpdateReviewTemplateAnswerAsync(const UpdateReviewTemplateAnswerRequestT& request, const UpdateReviewTemplateAnswerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::UpdateReviewTemplateAnswer, request, handler, context);
        }

        /**
         * <p>Update a lens review associated with a review template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateReviewTemplateLensReview">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReviewTemplateLensReviewOutcome UpdateReviewTemplateLensReview(const Model::UpdateReviewTemplateLensReviewRequest& request) const;

        /**
         * A Callable wrapper for UpdateReviewTemplateLensReview that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateReviewTemplateLensReviewRequestT = Model::UpdateReviewTemplateLensReviewRequest>
        Model::UpdateReviewTemplateLensReviewOutcomeCallable UpdateReviewTemplateLensReviewCallable(const UpdateReviewTemplateLensReviewRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::UpdateReviewTemplateLensReview, request);
        }

        /**
         * An Async wrapper for UpdateReviewTemplateLensReview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateReviewTemplateLensReviewRequestT = Model::UpdateReviewTemplateLensReviewRequest>
        void UpdateReviewTemplateLensReviewAsync(const UpdateReviewTemplateLensReviewRequestT& request, const UpdateReviewTemplateLensReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::UpdateReviewTemplateLensReview, request, handler, context);
        }

        /**
         * <p>Update a workload or custom lens share invitation.</p>  <p>This API
         * operation can be called independently of any resource. Previous documentation
         * implied that a workload ARN must be specified.</p> <p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateShareInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateShareInvitationOutcome UpdateShareInvitation(const Model::UpdateShareInvitationRequest& request) const;

        /**
         * A Callable wrapper for UpdateShareInvitation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateShareInvitationRequestT = Model::UpdateShareInvitationRequest>
        Model::UpdateShareInvitationOutcomeCallable UpdateShareInvitationCallable(const UpdateShareInvitationRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::UpdateShareInvitation, request);
        }

        /**
         * An Async wrapper for UpdateShareInvitation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateShareInvitationRequestT = Model::UpdateShareInvitationRequest>
        void UpdateShareInvitationAsync(const UpdateShareInvitationRequestT& request, const UpdateShareInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::UpdateShareInvitation, request, handler, context);
        }

        /**
         * <p>Update an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateWorkload">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkloadOutcome UpdateWorkload(const Model::UpdateWorkloadRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWorkloadRequestT = Model::UpdateWorkloadRequest>
        Model::UpdateWorkloadOutcomeCallable UpdateWorkloadCallable(const UpdateWorkloadRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::UpdateWorkload, request);
        }

        /**
         * An Async wrapper for UpdateWorkload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWorkloadRequestT = Model::UpdateWorkloadRequest>
        void UpdateWorkloadAsync(const UpdateWorkloadRequestT& request, const UpdateWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::UpdateWorkload, request, handler, context);
        }

        /**
         * <p>Update a workload share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateWorkloadShare">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkloadShareOutcome UpdateWorkloadShare(const Model::UpdateWorkloadShareRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkloadShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWorkloadShareRequestT = Model::UpdateWorkloadShareRequest>
        Model::UpdateWorkloadShareOutcomeCallable UpdateWorkloadShareCallable(const UpdateWorkloadShareRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::UpdateWorkloadShare, request);
        }

        /**
         * An Async wrapper for UpdateWorkloadShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWorkloadShareRequestT = Model::UpdateWorkloadShareRequest>
        void UpdateWorkloadShareAsync(const UpdateWorkloadShareRequestT& request, const UpdateWorkloadShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::UpdateWorkloadShare, request, handler, context);
        }

        /**
         * <p>Upgrade lens review for a particular workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpgradeLensReview">AWS
         * API Reference</a></p>
         */
        virtual Model::UpgradeLensReviewOutcome UpgradeLensReview(const Model::UpgradeLensReviewRequest& request) const;

        /**
         * A Callable wrapper for UpgradeLensReview that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpgradeLensReviewRequestT = Model::UpgradeLensReviewRequest>
        Model::UpgradeLensReviewOutcomeCallable UpgradeLensReviewCallable(const UpgradeLensReviewRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::UpgradeLensReview, request);
        }

        /**
         * An Async wrapper for UpgradeLensReview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpgradeLensReviewRequestT = Model::UpgradeLensReviewRequest>
        void UpgradeLensReviewAsync(const UpgradeLensReviewRequestT& request, const UpgradeLensReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::UpgradeLensReview, request, handler, context);
        }

        /**
         * <p>Upgrade a profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpgradeProfileVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpgradeProfileVersionOutcome UpgradeProfileVersion(const Model::UpgradeProfileVersionRequest& request) const;

        /**
         * A Callable wrapper for UpgradeProfileVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpgradeProfileVersionRequestT = Model::UpgradeProfileVersionRequest>
        Model::UpgradeProfileVersionOutcomeCallable UpgradeProfileVersionCallable(const UpgradeProfileVersionRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::UpgradeProfileVersion, request);
        }

        /**
         * An Async wrapper for UpgradeProfileVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpgradeProfileVersionRequestT = Model::UpgradeProfileVersionRequest>
        void UpgradeProfileVersionAsync(const UpgradeProfileVersionRequestT& request, const UpgradeProfileVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::UpgradeProfileVersion, request, handler, context);
        }

        /**
         * <p>Upgrade the lens review of a review template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpgradeReviewTemplateLensReview">AWS
         * API Reference</a></p>
         */
        virtual Model::UpgradeReviewTemplateLensReviewOutcome UpgradeReviewTemplateLensReview(const Model::UpgradeReviewTemplateLensReviewRequest& request) const;

        /**
         * A Callable wrapper for UpgradeReviewTemplateLensReview that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpgradeReviewTemplateLensReviewRequestT = Model::UpgradeReviewTemplateLensReviewRequest>
        Model::UpgradeReviewTemplateLensReviewOutcomeCallable UpgradeReviewTemplateLensReviewCallable(const UpgradeReviewTemplateLensReviewRequestT& request) const
        {
            return SubmitCallable(&WellArchitectedClient::UpgradeReviewTemplateLensReview, request);
        }

        /**
         * An Async wrapper for UpgradeReviewTemplateLensReview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpgradeReviewTemplateLensReviewRequestT = Model::UpgradeReviewTemplateLensReviewRequest>
        void UpgradeReviewTemplateLensReviewAsync(const UpgradeReviewTemplateLensReviewRequestT& request, const UpgradeReviewTemplateLensReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WellArchitectedClient::UpgradeReviewTemplateLensReview, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<WellArchitectedEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<WellArchitectedClient>;
      void init(const WellArchitectedClientConfiguration& clientConfiguration);

      WellArchitectedClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<WellArchitectedEndpointProviderBase> m_endpointProvider;
  };

} // namespace WellArchitected
} // namespace Aws
