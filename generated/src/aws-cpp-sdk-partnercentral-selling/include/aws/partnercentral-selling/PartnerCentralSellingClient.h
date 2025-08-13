/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/PartnerCentralSellingServiceClientModel.h>

namespace Aws
{
namespace PartnerCentralSelling
{
  /**
   * <p><fullname>AWS Partner Central API for Selling</fullname> <p> <b>AWS Partner
   * Central API for Selling Reference Guide</b> </p> <p>This Amazon Web Services
   * (AWS) Partner Central API reference is designed to help <a
   * href="http://aws.amazon.com/partners/programs/">AWS Partners</a> integrate
   * Customer Relationship Management (CRM) systems with AWS Partner Central.
   * Partners can automate interactions with AWS Partner Central, which helps to
   * ensure effective engagements in joint business activities.</p> <p>The API
   * provides standard AWS API functionality. Access it by either using API <a
   * href="https://docs.aws.amazon.com/partner-central/latest/selling-api/API_Operations.html">Actions</a>
   * or by using an AWS SDK that's tailored to your programming language or platform.
   * For more information, see <a
   * href="http://aws.amazon.com/getting-started">Getting Started with AWS</a> and <a
   * href="http://aws.amazon.com/developer/tools/">Tools to Build on AWS</a>.</p> <p
   * class="title"> <b>Features offered by AWS Partner Central API</b> </p> <ol> <li>
   * <p> <b>Opportunity management:</b> Manages coselling opportunities through API
   * actions such as <code>CreateOpportunity</code>, <code>UpdateOpportunity</code>,
   * <code>ListOpportunities</code>, <code>GetOpportunity</code>, and
   * <code>AssignOpportunity</code>.</p> </li> <li> <p> <b>AWS referral
   * management:</b> Manages referrals shared by AWS using actions such as
   * <code>ListEngagementInvitations</code>, <code>GetEngagementInvitation</code>,
   * <code>StartEngagementByAcceptingInvitation</code>, and
   * <code>RejectEngagementInvitation</code>.</p> </li> <li> <p> <b>Entity
   * association:</b> Associates related entities such as <i>AWS Products</i>,
   * <i>Partner Solutions</i>, and <i>AWS Marketplace Private Offers</i> with
   * opportunities using the actions <code>AssociateOpportunity</code>, and
   * <code>DisassociateOpportunity</code>.</p> </li> <li> <p> <b>View AWS opportunity
   * details:</b> Retrieves real-time summaries of AWS opportunities using the
   * <code>GetAWSOpportunitySummary</code> action.</p> </li> <li> <p> <b>List
   * solutions:</b> Provides list APIs for listing partner offers using
   * <code>ListSolutions</code>.</p> </li> <li> <p> <b>Event subscription:</b>
   * Subscribe to real-time opportunity updates through AWS EventBridge by using
   * actions such as <i>Opportunity Created</i>, <i>Opportunity Updated</i>,
   * <i>Engagement Invitation Accepted</i>, <i>Engagement Invitation Rejected</i>,
   * and <i>Engagement Invitation Created</i>.</p> </li> </ol></p>
   */
  class AWS_PARTNERCENTRALSELLING_API PartnerCentralSellingClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<PartnerCentralSellingClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef PartnerCentralSellingClientConfiguration ClientConfigurationType;
      typedef PartnerCentralSellingEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PartnerCentralSellingClient(const Aws::PartnerCentralSelling::PartnerCentralSellingClientConfiguration& clientConfiguration = Aws::PartnerCentralSelling::PartnerCentralSellingClientConfiguration(),
                                    std::shared_ptr<PartnerCentralSellingEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PartnerCentralSellingClient(const Aws::Auth::AWSCredentials& credentials,
                                    std::shared_ptr<PartnerCentralSellingEndpointProviderBase> endpointProvider = nullptr,
                                    const Aws::PartnerCentralSelling::PartnerCentralSellingClientConfiguration& clientConfiguration = Aws::PartnerCentralSelling::PartnerCentralSellingClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PartnerCentralSellingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                    std::shared_ptr<PartnerCentralSellingEndpointProviderBase> endpointProvider = nullptr,
                                    const Aws::PartnerCentralSelling::PartnerCentralSellingClientConfiguration& clientConfiguration = Aws::PartnerCentralSelling::PartnerCentralSellingClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PartnerCentralSellingClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PartnerCentralSellingClient(const Aws::Auth::AWSCredentials& credentials,
                                    const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PartnerCentralSellingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                    const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~PartnerCentralSellingClient();

        /**
         * <p>Use the <code>AcceptEngagementInvitation</code> action to accept an
         * engagement invitation shared by AWS. Accepting the invitation indicates your
         * willingness to participate in the engagement, granting you access to all
         * engagement-related data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AcceptEngagementInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptEngagementInvitationOutcome AcceptEngagementInvitation(const Model::AcceptEngagementInvitationRequest& request) const;

        /**
         * A Callable wrapper for AcceptEngagementInvitation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AcceptEngagementInvitationRequestT = Model::AcceptEngagementInvitationRequest>
        Model::AcceptEngagementInvitationOutcomeCallable AcceptEngagementInvitationCallable(const AcceptEngagementInvitationRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::AcceptEngagementInvitation, request);
        }

        /**
         * An Async wrapper for AcceptEngagementInvitation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AcceptEngagementInvitationRequestT = Model::AcceptEngagementInvitationRequest>
        void AcceptEngagementInvitationAsync(const AcceptEngagementInvitationRequestT& request, const AcceptEngagementInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::AcceptEngagementInvitation, request, handler, context);
        }

        /**
         * <p>Enables you to reassign an existing <code>Opportunity</code> to another user
         * within your Partner Central account. The specified user receives the
         * opportunity, and it appears on their Partner Central dashboard, allowing them to
         * take necessary actions or proceed with the opportunity.</p> <p>This is useful
         * for distributing opportunities to the appropriate team members or departments
         * within your organization, ensuring that each opportunity is handled by the right
         * person. By default, the opportunity owner is the one who creates it. Currently,
         * there's no API to enumerate the list of available users.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AssignOpportunity">AWS
         * API Reference</a></p>
         */
        virtual Model::AssignOpportunityOutcome AssignOpportunity(const Model::AssignOpportunityRequest& request) const;

        /**
         * A Callable wrapper for AssignOpportunity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssignOpportunityRequestT = Model::AssignOpportunityRequest>
        Model::AssignOpportunityOutcomeCallable AssignOpportunityCallable(const AssignOpportunityRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::AssignOpportunity, request);
        }

        /**
         * An Async wrapper for AssignOpportunity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssignOpportunityRequestT = Model::AssignOpportunityRequest>
        void AssignOpportunityAsync(const AssignOpportunityRequestT& request, const AssignOpportunityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::AssignOpportunity, request, handler, context);
        }

        /**
         * <p>Enables you to create a formal association between an
         * <code>Opportunity</code> and various related entities, enriching the context and
         * details of the opportunity for better collaboration and decision making. You can
         * associate an opportunity with the following entity types:</p> <ul> <li>
         * <p>Partner Solution: A software product or consulting practice created and
         * delivered by Partners. Partner Solutions help customers address business
         * challenges using Amazon Web Services services.</p> </li> <li> <p>Amazon Web
         * Services Products: Amazon Web Services offers many products and services that
         * provide scalable, reliable, and cost-effective infrastructure solutions. For the
         * latest list of Amazon Web Services products, see <a
         * href="https://github.com/aws-samples/partner-crm-integration-samples/blob/main/resources/aws_products.json">Amazon
         * Web Services products</a>.</p> </li> <li> <p>Amazon Web Services Marketplace
         * private offer: Allows Amazon Web Services Marketplace sellers to extend custom
         * pricing and terms to individual Amazon Web Services customers. Sellers can
         * negotiate custom prices, payment schedules, and end user license terms through
         * private offers, enabling Amazon Web Services customers to acquire software
         * solutions tailored to their specific needs. For more information, see <a
         * href="https://docs.aws.amazon.com/marketplace/latest/buyerguide/buyer-private-offers.html">Private
         * offers in Amazon Web Services Marketplace</a>.</p> </li> </ul> <p>To obtain
         * identifiers for these entities, use the following methods:</p> <ul> <li>
         * <p>Solution: Use the <code>ListSolutions</code> operation.</p> </li> <li> <p>AWS
         * Products: For the latest list of Amazon Web Services products, see <a
         * href="https://github.com/aws-samples/partner-crm-integration-samples/blob/main/resources/aws_products.json">Amazon
         * Web Services products</a>.</p> </li> <li> <p>Amazon Web Services Marketplace
         * private offer: Use the <a
         * href="https://docs.aws.amazon.com/marketplace/latest/APIReference/catalog-apis.html">Using
         * the Amazon Web Services Marketplace Catalog API</a> to list entities.
         * Specifically, use the <code>ListEntities</code> operation to retrieve a list of
         * private offers. The request returns the details of available private offers. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/marketplace-catalog/latest/api-reference/API_ListEntities.html">ListEntities</a>.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AssociateOpportunity">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateOpportunityOutcome AssociateOpportunity(const Model::AssociateOpportunityRequest& request) const;

        /**
         * A Callable wrapper for AssociateOpportunity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateOpportunityRequestT = Model::AssociateOpportunityRequest>
        Model::AssociateOpportunityOutcomeCallable AssociateOpportunityCallable(const AssociateOpportunityRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::AssociateOpportunity, request);
        }

        /**
         * An Async wrapper for AssociateOpportunity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateOpportunityRequestT = Model::AssociateOpportunityRequest>
        void AssociateOpportunityAsync(const AssociateOpportunityRequestT& request, const AssociateOpportunityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::AssociateOpportunity, request, handler, context);
        }

        /**
         * <p>The <code>CreateEngagement</code> action allows you to create an
         * <code>Engagement</code>, which serves as a collaborative space between different
         * parties such as AWS Partners and AWS Sellers. This action automatically adds the
         * caller's AWS account as an active member of the newly created
         * <code>Engagement</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/CreateEngagement">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEngagementOutcome CreateEngagement(const Model::CreateEngagementRequest& request) const;

        /**
         * A Callable wrapper for CreateEngagement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEngagementRequestT = Model::CreateEngagementRequest>
        Model::CreateEngagementOutcomeCallable CreateEngagementCallable(const CreateEngagementRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::CreateEngagement, request);
        }

        /**
         * An Async wrapper for CreateEngagement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEngagementRequestT = Model::CreateEngagementRequest>
        void CreateEngagementAsync(const CreateEngagementRequestT& request, const CreateEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::CreateEngagement, request, handler, context);
        }

        /**
         * <p> This action creates an invitation from a sender to a single receiver to join
         * an engagement. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/CreateEngagementInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEngagementInvitationOutcome CreateEngagementInvitation(const Model::CreateEngagementInvitationRequest& request) const;

        /**
         * A Callable wrapper for CreateEngagementInvitation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEngagementInvitationRequestT = Model::CreateEngagementInvitationRequest>
        Model::CreateEngagementInvitationOutcomeCallable CreateEngagementInvitationCallable(const CreateEngagementInvitationRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::CreateEngagementInvitation, request);
        }

        /**
         * An Async wrapper for CreateEngagementInvitation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEngagementInvitationRequestT = Model::CreateEngagementInvitationRequest>
        void CreateEngagementInvitationAsync(const CreateEngagementInvitationRequestT& request, const CreateEngagementInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::CreateEngagementInvitation, request, handler, context);
        }

        /**
         * <p>Creates an <code>Opportunity</code> record in Partner Central. Use this
         * operation to create a potential business opportunity for submission to Amazon
         * Web Services. Creating an opportunity sets <code>Lifecycle.ReviewStatus</code>
         * to <code>Pending Submission</code>.</p> <p>To submit an opportunity, follow
         * these steps:</p> <ol> <li> <p>To create the opportunity, use
         * <code>CreateOpportunity</code>.</p> </li> <li> <p>To associate a solution with
         * the opportunity, use <code>AssociateOpportunity</code>.</p> </li> <li> <p>To
         * start the engagement with AWS, use
         * <code>StartEngagementFromOpportunity</code>.</p> </li> </ol> <p>After
         * submission, you can't edit the opportunity until the review is complete. But
         * opportunities in the <code>Pending Submission</code> state must have complete
         * details. You can update the opportunity while it's in the <code>Pending
         * Submission</code> state.</p> <p>There's a set of mandatory fields to create
         * opportunities, but consider providing optional fields to enrich the opportunity
         * record.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/CreateOpportunity">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOpportunityOutcome CreateOpportunity(const Model::CreateOpportunityRequest& request) const;

        /**
         * A Callable wrapper for CreateOpportunity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateOpportunityRequestT = Model::CreateOpportunityRequest>
        Model::CreateOpportunityOutcomeCallable CreateOpportunityCallable(const CreateOpportunityRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::CreateOpportunity, request);
        }

        /**
         * An Async wrapper for CreateOpportunity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateOpportunityRequestT = Model::CreateOpportunityRequest>
        void CreateOpportunityAsync(const CreateOpportunityRequestT& request, const CreateOpportunityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::CreateOpportunity, request, handler, context);
        }

        /**
         * <p> This action allows you to create an immutable snapshot of a specific
         * resource, such as an opportunity, within the context of an engagement. The
         * snapshot captures a subset of the resource's data based on the schema defined by
         * the provided template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/CreateResourceSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceSnapshotOutcome CreateResourceSnapshot(const Model::CreateResourceSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateResourceSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateResourceSnapshotRequestT = Model::CreateResourceSnapshotRequest>
        Model::CreateResourceSnapshotOutcomeCallable CreateResourceSnapshotCallable(const CreateResourceSnapshotRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::CreateResourceSnapshot, request);
        }

        /**
         * An Async wrapper for CreateResourceSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateResourceSnapshotRequestT = Model::CreateResourceSnapshotRequest>
        void CreateResourceSnapshotAsync(const CreateResourceSnapshotRequestT& request, const CreateResourceSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::CreateResourceSnapshot, request, handler, context);
        }

        /**
         * <p>Use this action to create a job to generate a snapshot of the specified
         * resource within an engagement. It initiates an asynchronous process to create a
         * resource snapshot. The job creates a new snapshot only if the resource state has
         * changed, adhering to the same access control and immutability rules as direct
         * snapshot creation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/CreateResourceSnapshotJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceSnapshotJobOutcome CreateResourceSnapshotJob(const Model::CreateResourceSnapshotJobRequest& request) const;

        /**
         * A Callable wrapper for CreateResourceSnapshotJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateResourceSnapshotJobRequestT = Model::CreateResourceSnapshotJobRequest>
        Model::CreateResourceSnapshotJobOutcomeCallable CreateResourceSnapshotJobCallable(const CreateResourceSnapshotJobRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::CreateResourceSnapshotJob, request);
        }

        /**
         * An Async wrapper for CreateResourceSnapshotJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateResourceSnapshotJobRequestT = Model::CreateResourceSnapshotJobRequest>
        void CreateResourceSnapshotJobAsync(const CreateResourceSnapshotJobRequestT& request, const CreateResourceSnapshotJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::CreateResourceSnapshotJob, request, handler, context);
        }

        /**
         * <p> Use this action to deletes a previously created resource snapshot job. The
         * job must be in a stopped state before it can be deleted. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/DeleteResourceSnapshotJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceSnapshotJobOutcome DeleteResourceSnapshotJob(const Model::DeleteResourceSnapshotJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourceSnapshotJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourceSnapshotJobRequestT = Model::DeleteResourceSnapshotJobRequest>
        Model::DeleteResourceSnapshotJobOutcomeCallable DeleteResourceSnapshotJobCallable(const DeleteResourceSnapshotJobRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::DeleteResourceSnapshotJob, request);
        }

        /**
         * An Async wrapper for DeleteResourceSnapshotJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourceSnapshotJobRequestT = Model::DeleteResourceSnapshotJobRequest>
        void DeleteResourceSnapshotJobAsync(const DeleteResourceSnapshotJobRequestT& request, const DeleteResourceSnapshotJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::DeleteResourceSnapshotJob, request, handler, context);
        }

        /**
         * <p>Allows you to remove an existing association between an
         * <code>Opportunity</code> and related entities, such as a Partner Solution,
         * Amazon Web Services product, or an Amazon Web Services Marketplace offer. This
         * operation is the counterpart to <code>AssociateOpportunity</code>, and it
         * provides flexibility to manage associations as business needs change.</p> <p>Use
         * this operation to update the associations of an <code>Opportunity</code> due to
         * changes in the related entities, or if an association was made in error.
         * Ensuring accurate associations helps maintain clarity and accuracy to track and
         * manage business opportunities. When you replace an entity, first attach the new
         * entity and then disassociate the one to be removed, especially if it's the last
         * remaining entity that's required.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/DisassociateOpportunity">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateOpportunityOutcome DisassociateOpportunity(const Model::DisassociateOpportunityRequest& request) const;

        /**
         * A Callable wrapper for DisassociateOpportunity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateOpportunityRequestT = Model::DisassociateOpportunityRequest>
        Model::DisassociateOpportunityOutcomeCallable DisassociateOpportunityCallable(const DisassociateOpportunityRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::DisassociateOpportunity, request);
        }

        /**
         * An Async wrapper for DisassociateOpportunity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateOpportunityRequestT = Model::DisassociateOpportunityRequest>
        void DisassociateOpportunityAsync(const DisassociateOpportunityRequestT& request, const DisassociateOpportunityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::DisassociateOpportunity, request, handler, context);
        }

        /**
         * <p>Retrieves a summary of an AWS Opportunity. This summary includes high-level
         * details about the opportunity sourced from AWS, such as lifecycle information,
         * customer details, and involvement type. It is useful for tracking updates on the
         * AWS opportunity corresponding to an opportunity in the partner's
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/GetAwsOpportunitySummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAwsOpportunitySummaryOutcome GetAwsOpportunitySummary(const Model::GetAwsOpportunitySummaryRequest& request) const;

        /**
         * A Callable wrapper for GetAwsOpportunitySummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAwsOpportunitySummaryRequestT = Model::GetAwsOpportunitySummaryRequest>
        Model::GetAwsOpportunitySummaryOutcomeCallable GetAwsOpportunitySummaryCallable(const GetAwsOpportunitySummaryRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::GetAwsOpportunitySummary, request);
        }

        /**
         * An Async wrapper for GetAwsOpportunitySummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAwsOpportunitySummaryRequestT = Model::GetAwsOpportunitySummaryRequest>
        void GetAwsOpportunitySummaryAsync(const GetAwsOpportunitySummaryRequestT& request, const GetAwsOpportunitySummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::GetAwsOpportunitySummary, request, handler, context);
        }

        /**
         * <p>Use this action to retrieve the engagement record for a given
         * <code>EngagementIdentifier</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/GetEngagement">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEngagementOutcome GetEngagement(const Model::GetEngagementRequest& request) const;

        /**
         * A Callable wrapper for GetEngagement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEngagementRequestT = Model::GetEngagementRequest>
        Model::GetEngagementOutcomeCallable GetEngagementCallable(const GetEngagementRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::GetEngagement, request);
        }

        /**
         * An Async wrapper for GetEngagement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEngagementRequestT = Model::GetEngagementRequest>
        void GetEngagementAsync(const GetEngagementRequestT& request, const GetEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::GetEngagement, request, handler, context);
        }

        /**
         * <p>Retrieves the details of an engagement invitation shared by AWS with a
         * partner. The information includes aspects such as customer, project details, and
         * lifecycle information. To connect an engagement invitation with an opportunity,
         * match the invitation’s <code>Payload.Project.Title</code> with opportunity
         * <code>Project.Title</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/GetEngagementInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEngagementInvitationOutcome GetEngagementInvitation(const Model::GetEngagementInvitationRequest& request) const;

        /**
         * A Callable wrapper for GetEngagementInvitation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEngagementInvitationRequestT = Model::GetEngagementInvitationRequest>
        Model::GetEngagementInvitationOutcomeCallable GetEngagementInvitationCallable(const GetEngagementInvitationRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::GetEngagementInvitation, request);
        }

        /**
         * An Async wrapper for GetEngagementInvitation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEngagementInvitationRequestT = Model::GetEngagementInvitationRequest>
        void GetEngagementInvitationAsync(const GetEngagementInvitationRequestT& request, const GetEngagementInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::GetEngagementInvitation, request, handler, context);
        }

        /**
         * <p>Fetches the <code>Opportunity</code> record from Partner Central by a given
         * <code>Identifier</code>.</p> <p>Use the <code>ListOpportunities</code> action or
         * the event notification (from Amazon EventBridge) to obtain this
         * identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/GetOpportunity">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOpportunityOutcome GetOpportunity(const Model::GetOpportunityRequest& request) const;

        /**
         * A Callable wrapper for GetOpportunity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOpportunityRequestT = Model::GetOpportunityRequest>
        Model::GetOpportunityOutcomeCallable GetOpportunityCallable(const GetOpportunityRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::GetOpportunity, request);
        }

        /**
         * An Async wrapper for GetOpportunity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOpportunityRequestT = Model::GetOpportunityRequest>
        void GetOpportunityAsync(const GetOpportunityRequestT& request, const GetOpportunityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::GetOpportunity, request, handler, context);
        }

        /**
         * <p>Use this action to retrieve a specific snapshot record.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/GetResourceSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceSnapshotOutcome GetResourceSnapshot(const Model::GetResourceSnapshotRequest& request) const;

        /**
         * A Callable wrapper for GetResourceSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourceSnapshotRequestT = Model::GetResourceSnapshotRequest>
        Model::GetResourceSnapshotOutcomeCallable GetResourceSnapshotCallable(const GetResourceSnapshotRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::GetResourceSnapshot, request);
        }

        /**
         * An Async wrapper for GetResourceSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourceSnapshotRequestT = Model::GetResourceSnapshotRequest>
        void GetResourceSnapshotAsync(const GetResourceSnapshotRequestT& request, const GetResourceSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::GetResourceSnapshot, request, handler, context);
        }

        /**
         * <p>Use this action to retrieves information about a specific resource snapshot
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/GetResourceSnapshotJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceSnapshotJobOutcome GetResourceSnapshotJob(const Model::GetResourceSnapshotJobRequest& request) const;

        /**
         * A Callable wrapper for GetResourceSnapshotJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourceSnapshotJobRequestT = Model::GetResourceSnapshotJobRequest>
        Model::GetResourceSnapshotJobOutcomeCallable GetResourceSnapshotJobCallable(const GetResourceSnapshotJobRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::GetResourceSnapshotJob, request);
        }

        /**
         * An Async wrapper for GetResourceSnapshotJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourceSnapshotJobRequestT = Model::GetResourceSnapshotJobRequest>
        void GetResourceSnapshotJobAsync(const GetResourceSnapshotJobRequestT& request, const GetResourceSnapshotJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::GetResourceSnapshotJob, request, handler, context);
        }

        /**
         * <p>Retrieves the currently set system settings, which include the IAM Role used
         * for resource snapshot jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/GetSellingSystemSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSellingSystemSettingsOutcome GetSellingSystemSettings(const Model::GetSellingSystemSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetSellingSystemSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSellingSystemSettingsRequestT = Model::GetSellingSystemSettingsRequest>
        Model::GetSellingSystemSettingsOutcomeCallable GetSellingSystemSettingsCallable(const GetSellingSystemSettingsRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::GetSellingSystemSettings, request);
        }

        /**
         * An Async wrapper for GetSellingSystemSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSellingSystemSettingsRequestT = Model::GetSellingSystemSettingsRequest>
        void GetSellingSystemSettingsAsync(const GetSellingSystemSettingsRequestT& request, const GetSellingSystemSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::GetSellingSystemSettings, request, handler, context);
        }

        /**
         * <p> Lists all in-progress, completed, or failed
         * StartEngagementByAcceptingInvitationTask tasks that were initiated by the
         * caller's account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ListEngagementByAcceptingInvitationTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEngagementByAcceptingInvitationTasksOutcome ListEngagementByAcceptingInvitationTasks(const Model::ListEngagementByAcceptingInvitationTasksRequest& request) const;

        /**
         * A Callable wrapper for ListEngagementByAcceptingInvitationTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEngagementByAcceptingInvitationTasksRequestT = Model::ListEngagementByAcceptingInvitationTasksRequest>
        Model::ListEngagementByAcceptingInvitationTasksOutcomeCallable ListEngagementByAcceptingInvitationTasksCallable(const ListEngagementByAcceptingInvitationTasksRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::ListEngagementByAcceptingInvitationTasks, request);
        }

        /**
         * An Async wrapper for ListEngagementByAcceptingInvitationTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEngagementByAcceptingInvitationTasksRequestT = Model::ListEngagementByAcceptingInvitationTasksRequest>
        void ListEngagementByAcceptingInvitationTasksAsync(const ListEngagementByAcceptingInvitationTasksRequestT& request, const ListEngagementByAcceptingInvitationTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::ListEngagementByAcceptingInvitationTasks, request, handler, context);
        }

        /**
         * <p> Lists all in-progress, completed, or failed
         * <code>EngagementFromOpportunity</code> tasks that were initiated by the caller's
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ListEngagementFromOpportunityTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEngagementFromOpportunityTasksOutcome ListEngagementFromOpportunityTasks(const Model::ListEngagementFromOpportunityTasksRequest& request) const;

        /**
         * A Callable wrapper for ListEngagementFromOpportunityTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEngagementFromOpportunityTasksRequestT = Model::ListEngagementFromOpportunityTasksRequest>
        Model::ListEngagementFromOpportunityTasksOutcomeCallable ListEngagementFromOpportunityTasksCallable(const ListEngagementFromOpportunityTasksRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::ListEngagementFromOpportunityTasks, request);
        }

        /**
         * An Async wrapper for ListEngagementFromOpportunityTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEngagementFromOpportunityTasksRequestT = Model::ListEngagementFromOpportunityTasksRequest>
        void ListEngagementFromOpportunityTasksAsync(const ListEngagementFromOpportunityTasksRequestT& request, const ListEngagementFromOpportunityTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::ListEngagementFromOpportunityTasks, request, handler, context);
        }

        /**
         * <p>Retrieves a list of engagement invitations sent to the partner. This allows
         * partners to view all pending or past engagement invitations, helping them track
         * opportunities shared by AWS.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ListEngagementInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEngagementInvitationsOutcome ListEngagementInvitations(const Model::ListEngagementInvitationsRequest& request) const;

        /**
         * A Callable wrapper for ListEngagementInvitations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEngagementInvitationsRequestT = Model::ListEngagementInvitationsRequest>
        Model::ListEngagementInvitationsOutcomeCallable ListEngagementInvitationsCallable(const ListEngagementInvitationsRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::ListEngagementInvitations, request);
        }

        /**
         * An Async wrapper for ListEngagementInvitations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEngagementInvitationsRequestT = Model::ListEngagementInvitationsRequest>
        void ListEngagementInvitationsAsync(const ListEngagementInvitationsRequestT& request, const ListEngagementInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::ListEngagementInvitations, request, handler, context);
        }

        /**
         * <p>Retrieves the details of member partners in an Engagement. This operation can
         * only be invoked by members of the Engagement. The
         * <code>ListEngagementMembers</code> operation allows you to fetch information
         * about the members of a specific Engagement. This action is restricted to members
         * of the Engagement being queried. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ListEngagementMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEngagementMembersOutcome ListEngagementMembers(const Model::ListEngagementMembersRequest& request) const;

        /**
         * A Callable wrapper for ListEngagementMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEngagementMembersRequestT = Model::ListEngagementMembersRequest>
        Model::ListEngagementMembersOutcomeCallable ListEngagementMembersCallable(const ListEngagementMembersRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::ListEngagementMembers, request);
        }

        /**
         * An Async wrapper for ListEngagementMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEngagementMembersRequestT = Model::ListEngagementMembersRequest>
        void ListEngagementMembersAsync(const ListEngagementMembersRequestT& request, const ListEngagementMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::ListEngagementMembers, request, handler, context);
        }

        /**
         * <p>Lists the associations between resources and engagements where the caller is
         * a member and has at least one snapshot in the engagement.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ListEngagementResourceAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEngagementResourceAssociationsOutcome ListEngagementResourceAssociations(const Model::ListEngagementResourceAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListEngagementResourceAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEngagementResourceAssociationsRequestT = Model::ListEngagementResourceAssociationsRequest>
        Model::ListEngagementResourceAssociationsOutcomeCallable ListEngagementResourceAssociationsCallable(const ListEngagementResourceAssociationsRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::ListEngagementResourceAssociations, request);
        }

        /**
         * An Async wrapper for ListEngagementResourceAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEngagementResourceAssociationsRequestT = Model::ListEngagementResourceAssociationsRequest>
        void ListEngagementResourceAssociationsAsync(const ListEngagementResourceAssociationsRequestT& request, const ListEngagementResourceAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::ListEngagementResourceAssociations, request, handler, context);
        }

        /**
         * <p>This action allows users to retrieve a list of Engagement records from
         * Partner Central. This action can be used to manage and track various engagements
         * across different stages of the partner selling process. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ListEngagements">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEngagementsOutcome ListEngagements(const Model::ListEngagementsRequest& request) const;

        /**
         * A Callable wrapper for ListEngagements that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEngagementsRequestT = Model::ListEngagementsRequest>
        Model::ListEngagementsOutcomeCallable ListEngagementsCallable(const ListEngagementsRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::ListEngagements, request);
        }

        /**
         * An Async wrapper for ListEngagements that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEngagementsRequestT = Model::ListEngagementsRequest>
        void ListEngagementsAsync(const ListEngagementsRequestT& request, const ListEngagementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::ListEngagements, request, handler, context);
        }

        /**
         * <p>This request accepts a list of filters that retrieve opportunity subsets as
         * well as sort options. This feature is available to partners from <a
         * href="https://partnercentral.awspartner.com/">Partner Central</a> using the
         * <code>ListOpportunities</code> API action.</p> <p>To synchronize your system
         * with Amazon Web Services, list only the opportunities that were newly created or
         * updated. We recommend you rely on events emitted by the service into your Amazon
         * Web Services account’s Amazon EventBridge default event bus. You can also use
         * the <code>ListOpportunities</code> action.</p> <p>We recommend the following
         * approach:</p> <ol> <li> <p>Find the latest <code>LastModifiedDate</code> that
         * you stored, and only use the values that came from Amazon Web Services. Don’t
         * use values generated by your system.</p> </li> <li> <p>When you send a
         * <code>ListOpportunities</code> request, submit the date in ISO 8601 format in
         * the <code>AfterLastModifiedDate</code> filter.</p> </li> <li> <p>Amazon Web
         * Services only returns opportunities created or updated on or after that date and
         * time. Use <code>NextToken</code> to iterate over all pages.</p> </li>
         * </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ListOpportunities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOpportunitiesOutcome ListOpportunities(const Model::ListOpportunitiesRequest& request) const;

        /**
         * A Callable wrapper for ListOpportunities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOpportunitiesRequestT = Model::ListOpportunitiesRequest>
        Model::ListOpportunitiesOutcomeCallable ListOpportunitiesCallable(const ListOpportunitiesRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::ListOpportunities, request);
        }

        /**
         * An Async wrapper for ListOpportunities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOpportunitiesRequestT = Model::ListOpportunitiesRequest>
        void ListOpportunitiesAsync(const ListOpportunitiesRequestT& request, const ListOpportunitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::ListOpportunities, request, handler, context);
        }

        /**
         * <p> Lists resource snapshot jobs owned by the customer. This operation supports
         * various filtering scenarios, including listing all jobs owned by the caller,
         * jobs for a specific engagement, jobs with a specific status, or any combination
         * of these filters. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ListResourceSnapshotJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceSnapshotJobsOutcome ListResourceSnapshotJobs(const Model::ListResourceSnapshotJobsRequest& request) const;

        /**
         * A Callable wrapper for ListResourceSnapshotJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResourceSnapshotJobsRequestT = Model::ListResourceSnapshotJobsRequest>
        Model::ListResourceSnapshotJobsOutcomeCallable ListResourceSnapshotJobsCallable(const ListResourceSnapshotJobsRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::ListResourceSnapshotJobs, request);
        }

        /**
         * An Async wrapper for ListResourceSnapshotJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResourceSnapshotJobsRequestT = Model::ListResourceSnapshotJobsRequest>
        void ListResourceSnapshotJobsAsync(const ListResourceSnapshotJobsRequestT& request, const ListResourceSnapshotJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::ListResourceSnapshotJobs, request, handler, context);
        }

        /**
         * <p>Retrieves a list of resource view snapshots based on specified criteria. This
         * operation supports various use cases, including: </p> <ul> <li> <p>Fetching all
         * snapshots associated with an engagement.</p> </li> <li> <p>Retrieving snapshots
         * of a specific resource type within an engagement.</p> </li> <li> <p>Obtaining
         * snapshots for a particular resource using a specified template.</p> </li> <li>
         * <p>Accessing the latest snapshot of a resource within an engagement.</p> </li>
         * <li> <p>Filtering snapshots by resource owner.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ListResourceSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceSnapshotsOutcome ListResourceSnapshots(const Model::ListResourceSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for ListResourceSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResourceSnapshotsRequestT = Model::ListResourceSnapshotsRequest>
        Model::ListResourceSnapshotsOutcomeCallable ListResourceSnapshotsCallable(const ListResourceSnapshotsRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::ListResourceSnapshots, request);
        }

        /**
         * An Async wrapper for ListResourceSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResourceSnapshotsRequestT = Model::ListResourceSnapshotsRequest>
        void ListResourceSnapshotsAsync(const ListResourceSnapshotsRequestT& request, const ListResourceSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::ListResourceSnapshots, request, handler, context);
        }

        /**
         * <p>Retrieves a list of Partner Solutions that the partner registered on Partner
         * Central. This API is used to generate a list of solutions that an end user
         * selects from for association with an opportunity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ListSolutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSolutionsOutcome ListSolutions(const Model::ListSolutionsRequest& request) const;

        /**
         * A Callable wrapper for ListSolutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSolutionsRequestT = Model::ListSolutionsRequest>
        Model::ListSolutionsOutcomeCallable ListSolutionsCallable(const ListSolutionsRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::ListSolutions, request);
        }

        /**
         * An Async wrapper for ListSolutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSolutionsRequestT = Model::ListSolutionsRequest>
        void ListSolutionsAsync(const ListSolutionsRequestT& request, const ListSolutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::ListSolutions, request, handler, context);
        }

        /**
         * <p>Returns a list of tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Updates the currently set system settings, which include the IAM Role used
         * for resource snapshot jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/PutSellingSystemSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSellingSystemSettingsOutcome PutSellingSystemSettings(const Model::PutSellingSystemSettingsRequest& request) const;

        /**
         * A Callable wrapper for PutSellingSystemSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutSellingSystemSettingsRequestT = Model::PutSellingSystemSettingsRequest>
        Model::PutSellingSystemSettingsOutcomeCallable PutSellingSystemSettingsCallable(const PutSellingSystemSettingsRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::PutSellingSystemSettings, request);
        }

        /**
         * An Async wrapper for PutSellingSystemSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutSellingSystemSettingsRequestT = Model::PutSellingSystemSettingsRequest>
        void PutSellingSystemSettingsAsync(const PutSellingSystemSettingsRequestT& request, const PutSellingSystemSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::PutSellingSystemSettings, request, handler, context);
        }

        /**
         * <p>This action rejects an <code>EngagementInvitation</code> that AWS shared.
         * Rejecting an invitation indicates that the partner doesn't want to pursue the
         * opportunity, and all related data will become inaccessible
         * thereafter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/RejectEngagementInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectEngagementInvitationOutcome RejectEngagementInvitation(const Model::RejectEngagementInvitationRequest& request) const;

        /**
         * A Callable wrapper for RejectEngagementInvitation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RejectEngagementInvitationRequestT = Model::RejectEngagementInvitationRequest>
        Model::RejectEngagementInvitationOutcomeCallable RejectEngagementInvitationCallable(const RejectEngagementInvitationRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::RejectEngagementInvitation, request);
        }

        /**
         * An Async wrapper for RejectEngagementInvitation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RejectEngagementInvitationRequestT = Model::RejectEngagementInvitationRequest>
        void RejectEngagementInvitationAsync(const RejectEngagementInvitationRequestT& request, const RejectEngagementInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::RejectEngagementInvitation, request, handler, context);
        }

        /**
         * <p>This action starts the engagement by accepting an
         * <code>EngagementInvitation</code>. The task is asynchronous and involves the
         * following steps: accepting the invitation, creating an opportunity in the
         * partner’s account from the AWS opportunity, and copying details for tracking.
         * When completed, an <code>Opportunity Created</code> event is generated,
         * indicating that the opportunity has been successfully created in the partner's
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/StartEngagementByAcceptingInvitationTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartEngagementByAcceptingInvitationTaskOutcome StartEngagementByAcceptingInvitationTask(const Model::StartEngagementByAcceptingInvitationTaskRequest& request) const;

        /**
         * A Callable wrapper for StartEngagementByAcceptingInvitationTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartEngagementByAcceptingInvitationTaskRequestT = Model::StartEngagementByAcceptingInvitationTaskRequest>
        Model::StartEngagementByAcceptingInvitationTaskOutcomeCallable StartEngagementByAcceptingInvitationTaskCallable(const StartEngagementByAcceptingInvitationTaskRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::StartEngagementByAcceptingInvitationTask, request);
        }

        /**
         * An Async wrapper for StartEngagementByAcceptingInvitationTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartEngagementByAcceptingInvitationTaskRequestT = Model::StartEngagementByAcceptingInvitationTaskRequest>
        void StartEngagementByAcceptingInvitationTaskAsync(const StartEngagementByAcceptingInvitationTaskRequestT& request, const StartEngagementByAcceptingInvitationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::StartEngagementByAcceptingInvitationTask, request, handler, context);
        }

        /**
         * <p>Similar to <code>StartEngagementByAcceptingInvitationTask</code>, this action
         * is asynchronous and performs multiple steps before completion. This action
         * orchestrates a comprehensive workflow that combines multiple API operations into
         * a single task to create and initiate an engagement from an existing opportunity.
         * It automatically executes a sequence of operations including
         * <code>GetOpportunity</code>, <code>CreateEngagement</code> (if it doesn't
         * exist), <code>CreateResourceSnapshot</code>,
         * <code>CreateResourceSnapshotJob</code>, <code>CreateEngagementInvitation</code>
         * (if not already invited/accepted), and <code>SubmitOpportunity</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/StartEngagementFromOpportunityTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartEngagementFromOpportunityTaskOutcome StartEngagementFromOpportunityTask(const Model::StartEngagementFromOpportunityTaskRequest& request) const;

        /**
         * A Callable wrapper for StartEngagementFromOpportunityTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartEngagementFromOpportunityTaskRequestT = Model::StartEngagementFromOpportunityTaskRequest>
        Model::StartEngagementFromOpportunityTaskOutcomeCallable StartEngagementFromOpportunityTaskCallable(const StartEngagementFromOpportunityTaskRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::StartEngagementFromOpportunityTask, request);
        }

        /**
         * An Async wrapper for StartEngagementFromOpportunityTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartEngagementFromOpportunityTaskRequestT = Model::StartEngagementFromOpportunityTaskRequest>
        void StartEngagementFromOpportunityTaskAsync(const StartEngagementFromOpportunityTaskRequestT& request, const StartEngagementFromOpportunityTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::StartEngagementFromOpportunityTask, request, handler, context);
        }

        /**
         * <p>Starts a resource snapshot job that has been previously
         * created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/StartResourceSnapshotJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartResourceSnapshotJobOutcome StartResourceSnapshotJob(const Model::StartResourceSnapshotJobRequest& request) const;

        /**
         * A Callable wrapper for StartResourceSnapshotJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartResourceSnapshotJobRequestT = Model::StartResourceSnapshotJobRequest>
        Model::StartResourceSnapshotJobOutcomeCallable StartResourceSnapshotJobCallable(const StartResourceSnapshotJobRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::StartResourceSnapshotJob, request);
        }

        /**
         * An Async wrapper for StartResourceSnapshotJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartResourceSnapshotJobRequestT = Model::StartResourceSnapshotJobRequest>
        void StartResourceSnapshotJobAsync(const StartResourceSnapshotJobRequestT& request, const StartResourceSnapshotJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::StartResourceSnapshotJob, request, handler, context);
        }

        /**
         * <p>Stops a resource snapshot job. The job must be started prior to being
         * stopped.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/StopResourceSnapshotJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopResourceSnapshotJobOutcome StopResourceSnapshotJob(const Model::StopResourceSnapshotJobRequest& request) const;

        /**
         * A Callable wrapper for StopResourceSnapshotJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopResourceSnapshotJobRequestT = Model::StopResourceSnapshotJobRequest>
        Model::StopResourceSnapshotJobOutcomeCallable StopResourceSnapshotJobCallable(const StopResourceSnapshotJobRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::StopResourceSnapshotJob, request);
        }

        /**
         * An Async wrapper for StopResourceSnapshotJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopResourceSnapshotJobRequestT = Model::StopResourceSnapshotJobRequest>
        void StopResourceSnapshotJobAsync(const StopResourceSnapshotJobRequestT& request, const StopResourceSnapshotJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::StopResourceSnapshotJob, request, handler, context);
        }

        /**
         * <p>Use this action to submit an Opportunity that was previously created by
         * partner for AWS review. After you perform this action, the Opportunity becomes
         * non-editable until it is reviewed by AWS and has <code> LifeCycle.ReviewStatus
         * </code> as either <code>Approved</code> or <code>Action Required</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/SubmitOpportunity">AWS
         * API Reference</a></p>
         */
        virtual Model::SubmitOpportunityOutcome SubmitOpportunity(const Model::SubmitOpportunityRequest& request) const;

        /**
         * A Callable wrapper for SubmitOpportunity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SubmitOpportunityRequestT = Model::SubmitOpportunityRequest>
        Model::SubmitOpportunityOutcomeCallable SubmitOpportunityCallable(const SubmitOpportunityRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::SubmitOpportunity, request);
        }

        /**
         * An Async wrapper for SubmitOpportunity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SubmitOpportunityRequestT = Model::SubmitOpportunityRequest>
        void SubmitOpportunityAsync(const SubmitOpportunityRequestT& request, const SubmitOpportunityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::SubmitOpportunity, request, handler, context);
        }

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes a tag or tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the <code>Opportunity</code> record identified by a given
         * <code>Identifier</code>. This operation allows you to modify the details of an
         * existing opportunity to reflect the latest information and progress. Use this
         * action to keep the opportunity record up-to-date and accurate.</p> <p>When you
         * perform updates, include the entire payload with each request. If any field is
         * omitted, the API assumes that the field is set to <code>null</code>. The best
         * practice is to always perform a <code>GetOpportunity</code> to retrieve the
         * latest values, then send the complete payload with the updated values to be
         * changed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/UpdateOpportunity">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOpportunityOutcome UpdateOpportunity(const Model::UpdateOpportunityRequest& request) const;

        /**
         * A Callable wrapper for UpdateOpportunity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateOpportunityRequestT = Model::UpdateOpportunityRequest>
        Model::UpdateOpportunityOutcomeCallable UpdateOpportunityCallable(const UpdateOpportunityRequestT& request) const
        {
            return SubmitCallable(&PartnerCentralSellingClient::UpdateOpportunity, request);
        }

        /**
         * An Async wrapper for UpdateOpportunity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateOpportunityRequestT = Model::UpdateOpportunityRequest>
        void UpdateOpportunityAsync(const UpdateOpportunityRequestT& request, const UpdateOpportunityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PartnerCentralSellingClient::UpdateOpportunity, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PartnerCentralSellingEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<PartnerCentralSellingClient>;
      void init(const PartnerCentralSellingClientConfiguration& clientConfiguration);

      PartnerCentralSellingClientConfiguration m_clientConfiguration;
      std::shared_ptr<PartnerCentralSellingEndpointProviderBase> m_endpointProvider;
  };

} // namespace PartnerCentralSelling
} // namespace Aws
