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
   * Central API for Selling Reference Guide</b> </p> <p> Amazon Web Services (AWS)
   * Partner Central API reference guide is designed to help <a
   * href="https://docs.aws.amazon.com/partners/programs/">AWS Partners</a>
   * programmatically integrate their Customer Relationship Management (CRM) systems
   * with AWS Partner Central. Through the Partner Central APIs, partners can
   * automate and streamline their interactions with AWS Partner Central, ensuring a
   * more efficient and effective engagement in joint business activities. </p> <p>
   * The AWS Partner Central API service provides standard AWS API functionality. You
   * can directly use the API <a
   * href="https://docs.aws.amazon.com/partner-central/latest/selling-api/API_Operations.html">Actions</a>,
   * or you can use an AWS SDK to access an API that's tailored to the programming
   * language or platform that you're using. For more information about AWS
   * application development, see <a
   * href="https://docs.aws.amazon.com/getting-started">Getting Started with AWS</a>.
   * For more information about using AWS SDKs, see <a
   * href="https://docs.aws.amazon.com/aws-sdk">AWS SDKs</a>. </p> <p class="title">
   * <b>Features offered by AWS Partner Central API</b> </p> <ol> <li> <p>
   * <b>Opportunity management:</b> Facilitates the management of co-selling
   * opportunities with AWS using API actions such as <code>CreateOpportunity</code>,
   * <code>UpdateOpportunity</code>, <code>ListOpportunities</code>,
   * <code>GetOpportunity</code>, and <code>AssignOpportunity</code>.</p> </li> <li>
   * <p> <b>AWS referral management:</b> Facilitates receiving referrals shared by
   * AWS using actions like <code>ListEngagementInvitations</code>,
   * <code>GetEngagementInvitation</code>,
   * <code>StartEngagementByAcceptingInvitation</code>, and
   * <code>RejectEngagementInvitation</code>.</p> </li> <li> <p> <b>Entity
   * association:</b> Associate related entities such as <i>AWS Products</i>,
   * <i>Partner Solutions</i>, and <i>AWS Marketplace Private Offers</i> with
   * opportunities using the actions <code>AssociateOpportunity</code> and
   * <code>DisassociateOpportunity</code>.</p> </li> <li> <p> <b>View AWS opportunity
   * details:</b> Use the <code>GetAWSOpportunitySummary</code> action to retrieve
   * real-time summaries of AWS opportunities that are linked to your
   * opportunities.</p> </li> <li> <p> <b>List solutions:</b> Provides list APIs for
   * listing solutions partners offer using <code>ListSolutions</code>.</p> </li>
   * <li> <p> <b>Event subscription:</b> Partners can subscribe to real-time updates
   * on opportunities by listening to events such as <i>Opportunity Created</i>,
   * <i>Opportunity Updated</i>, <i>Engagement Invitation Accepted</i>, <i>Engagement
   * Invitation Rejected</i> and <i>Engagement Invitation Created</i> using AWS
   * EventBridge.</p> </li> </ol></p>
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
         * <p> Enables you to reassign an existing <code>Opportunity</code> to another user
         * within your Partner Central account. The specified user receives the
         * opportunity, and it appears on their Partner Central dashboard, allowing them to
         * take necessary actions or proceed with the opportunity. </p> <p> This is useful
         * for distributing opportunities to the appropriate team members or departments
         * within your organization, ensuring that each opportunity is handled by the right
         * person. By default, the opportunity owner is the one who creates it. Currently,
         * there's no API to enumerate the list of available users. </p><p><h3>See
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
         * <p> Enables you to create a formal association between an
         * <code>Opportunity</code> and various related entities, enriching the context and
         * details of the opportunity for better collaboration and decision-making. You can
         * associate an opportunity with the following types of entities: </p> <ul> <li>
         * <p> Partner Solution: A software product or consulting practice created and
         * delivered by Partners. Partner Solutions help customers address specific
         * business challenges or achieve particular goals using Amazon Web Services
         * services. </p> </li> <li> <p> Amazon Web Services Product: Amazon Web Services
         * offers a wide range of products and services designed to provide scalable,
         * reliable, and cost-effective infrastructure solutions. For the latest list of
         * Amazon Web Services products, refer to <a
         * href="https://github.com/aws-samples/partner-crm-integration-samples/blob/main/resources/aws_products.json">Amazon
         * Web Services products</a>. </p> </li> <li> <p> Amazon Web Services Marketplace
         * private offer: Allows Amazon Web Services Marketplace sellers to extend custom
         * pricing and terms to individual Amazon Web Services customers. Sellers can
         * negotiate custom prices, payment schedules, and end user license terms through
         * private offers, enabling Amazon Web Services customers to acquire software
         * solutions tailored to their specific needs. For more information, refer to <a
         * href="https://docs.aws.amazon.com/marketplace/latest/buyerguide/buyer-private-offers.html">Private
         * offers in Amazon Web Services Marketplace</a>. </p> </li> </ul> <p>To obtain
         * identifiers for these entities, use the following methods:</p> <ul> <li>
         * <p>Solution: Use the <code>ListSolutions</code> operation.</p> </li> <li> <p>
         * AWS products: For the latest list of Amazon Web Services products, refer to the
         * Amazon Web Services products list.</p> </li> <li> <p> Amazon Web Services
         * Marketplace private offer: Use the <a
         * href="https://docs.aws.amazon.com/marketplace-catalog/latest/api-reference/welcome.html">AWS
         * Marketplace Catalog API</a> to list entities. Specifically, use the
         * <code>ListEntities</code> operation to retrieve a list of private offers. The
         * request to the <code>ListEntities</code> API returns the details of the private
         * offers available to you. For more information, refer to <a
         * href="https://docs.aws.amazon.com/marketplace-catalog/latest/api-reference/API_ListEntities.html">ListEntities</a>.
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p> Creates an <code>Opportunity</code> record in Partner Central. Use this
         * operation to create a potential business opportunity intended to be submitted to
         * Amazon Web Services. Creating an opportunity sets its
         * <code>Lifecycle.ReviewStatus</code> to <code>Pending Submission</code>. </p> <p>
         * To fully submit an opportunity, follow these steps: </p> <ol> <li> <p>To create
         * the opportunity, use <code>CreateOpportunity</code>.</p> </li> <li> <p>To
         * associate a solution with the opportunity, use
         * <code>AssociateOpportunity</code>.</p> </li> <li> <p>To submit the opportunity,
         * use <code>SubmitOpportunity</code>.</p> </li> </ol> <p> After submission, you
         * can't edit the opportunity until the review is complete. However, opportunities
         * in the <code>Pending Submission</code> state still need all details completed.
         * You can update the opportunity while it's in the <code>Pending Submission</code>
         * state. </p> <p> There's a set of mandatory fields required to create
         * opportunities, but consider providing optional fields to enrich the opportunity
         * record. </p><p><h3>See Also:</h3>   <a
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
         * <p> Allows you to remove an existing association between an
         * <code>Opportunity</code> and related entities such as a Partner Solution, Amazon
         * Web Services product, or an Amazon Web Services Marketplace offer. This
         * operation is the counterpart to <code>AssociateOpportunity</code>, and it
         * provides flexibility to manage associations as business needs change. </p> <p>
         * Use this operation to update the associations of an <code>Opportunity</code> due
         * to changes in the related entities, or if an association was made in error.
         * Ensuring accurate associations helps maintain clarity and accuracy to track and
         * manage business opportunities. When you replace an entity, first attach the new
         * entity and then disassociate the one to be removed, especially if it's the last
         * remaining related entity that's required. </p><p><h3>See Also:</h3>   <a
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
         * <p> Retrieves a summary of an AWS Opportunity. This summary includes high-level
         * details about the opportunity sourced from AWS, such as lifecycle information,
         * customer details, and involvement type. It is useful for tracking updates on the
         * AWS opportunity corresponding to an opportunity in the partner's account.
         * </p><p><h3>See Also:</h3>   <a
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
         * <p>Retrieves the details of an engagement invitation shared by AWS with a
         * partner. The information includes key aspects such as the customer, project
         * details, and lifecycle information related to the engagement.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p> Fetches the <code>Opportunity</code> record from Partner Central by a given
         * <code>Identifier</code>. </p> <p> Use the <code>ListOpportunities</code> action
         * or the event notification (from Amazon EventBridge) to obtain this identifier.
         * </p><p><h3>See Also:</h3>   <a
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
         * <p>This request accepts a list of filters to use to retrieve a specific subset
         * of opportunities, as well as sort options. This feature is available to partners
         * from <a href="https://partnercentral.awspartner.com/">Partner Central</a> using
         * the <code>ListOpportunities</code> API action. </p> <p>To synchronize your
         * system with Amazon Web Services, only list the opportunities that were newly
         * created or updated. We recommend you rely on events emitted by the service into
         * your Amazon Web Services account’s Amazon EventBridge default event bus, you can
         * also use the <code>ListOpportunities</code> action. </p> <p>We recommend the
         * following approach:</p> <ol> <li> <p>Find the latest
         * <code>LastModifiedDate</code> that you stored, and only use the values that came
         * from Amazon Web Services. Don’t use values generated by your system. </p> </li>
         * <li> <p>When you send a <code>ListOpportunities</code> request, submit the date
         * in ISO 8601 format in the <code>AfterLastModifiedDate</code> filter. </p> </li>
         * <li> <p>Amazon Web Services only returns opportunities created or updated on or
         * after that date and time. Use <code>NextToken</code> to iterate over all pages.
         * </p> </li> </ol><p><h3>See Also:</h3>   <a
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
         * <p> Retrieves a list of Partner Solutions that the partner registered on Partner
         * Central. This API is used to generate a list of solutions that an end user
         * selects from for association with an opportunity. </p><p><h3>See Also:</h3>   <a
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
         * <p>Use this action to reject an <code>EngagementInvitation</code> that has been
         * shared by AWS. Rejecting the engagement invitation indicates that the partner
         * does not wish to pursue the opportunity, and all related data will be
         * inaccessible after the rejection.</p><p><h3>See Also:</h3>   <a
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
         * <code>EngagementInvitation</code>. The task is asynchronous and involves several
         * steps: accepting the invitation, creating an opportunity in the partner’s
         * account from the AWS Opportunity, and copying over key details for tracking.
         * Once completed, an <code>Opportunity Created</code> event is generated,
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
         * <p>This action initiates the engagement process from an existing opportunity by
         * accepting the engagement invitation and creating a corresponding opportunity in
         * the partner’s system. Similar to
         * <code>StartEngagementByAcceptingInvitationTask</code>, this action is
         * asynchronous and performs multiple steps before completion.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p> Updates the <code>Opportunity</code> record identified by a given
         * <code>Identifier</code>. This operation allows you to modify the details of an
         * existing opportunity to reflect the latest information and progress. Use this
         * action to keep the opportunity record up-to-date and accurate. </p> <p> When you
         * perform updates, include the entire payload with each request. If any field is
         * omitted, the API assumes that the field is set to <code>null</code>. The best
         * practice is to always perform a <code>GetOpportunity</code> to retrieve the
         * latest values, then send the complete payload with the updated values to be
         * changed. </p><p><h3>See Also:</h3>   <a
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
