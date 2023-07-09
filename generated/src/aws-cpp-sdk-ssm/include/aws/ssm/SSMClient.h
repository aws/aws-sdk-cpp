/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm/SSMServiceClientModel.h>

namespace Aws
{
namespace SSM
{
  /**
   * <p>Amazon Web Services Systems Manager is the operations hub for your Amazon Web
   * Services applications and resources and a secure end-to-end management solution
   * for hybrid cloud environments that enables safe and secure operations at
   * scale.</p> <p>This reference is intended to be used with the <a
   * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/">Amazon Web
   * Services Systems Manager User Guide</a>. To get started, see <a
   * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Setting
   * up Amazon Web Services Systems Manager</a>.</p> <p class="title"> <b>Related
   * resources</b> </p> <ul> <li> <p>For information about each of the capabilities
   * that comprise Systems Manager, see <a
   * href="https://docs.aws.amazon.com/systems-manager-automation-runbooks/latest/userguide/systems-manager-capabilities.html">Systems
   * Manager capabilities</a> in the <i>Amazon Web Services Systems Manager User
   * Guide</i>.</p> </li> <li> <p>For details about predefined runbooks for
   * Automation, a capability of Amazon Web Services Systems Manager, see the <i> <a
   * href="https://docs.aws.amazon.com/systems-manager-automation-runbooks/latest/userguide/automation-runbook-reference.html">Systems
   * Manager Automation runbook reference</a> </i>.</p> </li> <li> <p>For information
   * about AppConfig, a capability of Systems Manager, see the <i> <a
   * href="https://docs.aws.amazon.com/appconfig/latest/userguide/">AppConfig User
   * Guide</a> </i> and the <i> <a
   * href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/">AppConfig
   * API Reference</a> </i>.</p> </li> <li> <p>For information about Incident
   * Manager, a capability of Systems Manager, see the <i> <a
   * href="https://docs.aws.amazon.com/incident-manager/latest/userguide/">Systems
   * Manager Incident Manager User Guide</a> </i> and the <i> <a
   * href="https://docs.aws.amazon.com/incident-manager/latest/APIReference/">Systems
   * Manager Incident Manager API Reference</a> </i>.</p> </li> </ul>
   */
  class AWS_SSM_API SSMClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SSMClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

      typedef SSMClientConfiguration ClientConfigurationType;
      typedef SSMEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMClient(const Aws::SSM::SSMClientConfiguration& clientConfiguration = Aws::SSM::SSMClientConfiguration(),
                  std::shared_ptr<SSMEndpointProviderBase> endpointProvider = Aws::MakeShared<SSMEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<SSMEndpointProviderBase> endpointProvider = Aws::MakeShared<SSMEndpointProvider>(ALLOCATION_TAG),
                  const Aws::SSM::SSMClientConfiguration& clientConfiguration = Aws::SSM::SSMClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<SSMEndpointProviderBase> endpointProvider = Aws::MakeShared<SSMEndpointProvider>(ALLOCATION_TAG),
                  const Aws::SSM::SSMClientConfiguration& clientConfiguration = Aws::SSM::SSMClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SSMClient();

        /**
         * <p>Adds or overwrites one or more tags for the specified resource. <i>Tags</i>
         * are metadata that you can assign to your automations, documents, managed nodes,
         * maintenance windows, Parameter Store parameters, and patch baselines. Tags
         * enable you to categorize your resources in different ways, for example, by
         * purpose, owner, or environment. Each tag consists of a key and an optional
         * value, both of which you define. For example, you could define a set of tags for
         * your account's managed nodes that helps you track each node's owner and stack
         * level. For example:</p> <ul> <li> <p> <code>Key=Owner,Value=DbAdmin</code> </p>
         * </li> <li> <p> <code>Key=Owner,Value=SysAdmin</code> </p> </li> <li> <p>
         * <code>Key=Owner,Value=Dev</code> </p> </li> <li> <p>
         * <code>Key=Stack,Value=Production</code> </p> </li> <li> <p>
         * <code>Key=Stack,Value=Pre-Production</code> </p> </li> <li> <p>
         * <code>Key=Stack,Value=Test</code> </p> </li> </ul> <p>Most resources can have a
         * maximum of 50 tags. Automations can have a maximum of 5 tags.</p> <p>We
         * recommend that you devise a set of tag keys that meets your needs for each
         * resource type. Using a consistent set of tag keys makes it easier for you to
         * manage your resources. You can search and filter the resources based on the tags
         * you add. Tags don't have any semantic meaning to and are interpreted strictly as
         * a string of characters.</p> <p>For more information about using tags with Amazon
         * Elastic Compute Cloud (Amazon EC2) instances, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * your Amazon EC2 resources</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AddTagsToResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsToResourceOutcome AddTagsToResource(const Model::AddTagsToResourceRequest& request) const;

        /**
         * A Callable wrapper for AddTagsToResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddTagsToResourceRequestT = Model::AddTagsToResourceRequest>
        Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const AddTagsToResourceRequestT& request) const
        {
            return SubmitCallable(&SSMClient::AddTagsToResource, request);
        }

        /**
         * An Async wrapper for AddTagsToResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddTagsToResourceRequestT = Model::AddTagsToResourceRequest>
        void AddTagsToResourceAsync(const AddTagsToResourceRequestT& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::AddTagsToResource, request, handler, context);
        }

        /**
         * <p>Associates a related item to a Systems Manager OpsCenter OpsItem. For
         * example, you can associate an Incident Manager incident or analysis with an
         * OpsItem. Incident Manager and OpsCenter are capabilities of Amazon Web Services
         * Systems Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AssociateOpsItemRelatedItem">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateOpsItemRelatedItemOutcome AssociateOpsItemRelatedItem(const Model::AssociateOpsItemRelatedItemRequest& request) const;

        /**
         * A Callable wrapper for AssociateOpsItemRelatedItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateOpsItemRelatedItemRequestT = Model::AssociateOpsItemRelatedItemRequest>
        Model::AssociateOpsItemRelatedItemOutcomeCallable AssociateOpsItemRelatedItemCallable(const AssociateOpsItemRelatedItemRequestT& request) const
        {
            return SubmitCallable(&SSMClient::AssociateOpsItemRelatedItem, request);
        }

        /**
         * An Async wrapper for AssociateOpsItemRelatedItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateOpsItemRelatedItemRequestT = Model::AssociateOpsItemRelatedItemRequest>
        void AssociateOpsItemRelatedItemAsync(const AssociateOpsItemRelatedItemRequestT& request, const AssociateOpsItemRelatedItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::AssociateOpsItemRelatedItem, request, handler, context);
        }

        /**
         * <p>Attempts to cancel the command specified by the Command ID. There is no
         * guarantee that the command will be terminated and the underlying process
         * stopped.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CancelCommand">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelCommandOutcome CancelCommand(const Model::CancelCommandRequest& request) const;

        /**
         * A Callable wrapper for CancelCommand that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelCommandRequestT = Model::CancelCommandRequest>
        Model::CancelCommandOutcomeCallable CancelCommandCallable(const CancelCommandRequestT& request) const
        {
            return SubmitCallable(&SSMClient::CancelCommand, request);
        }

        /**
         * An Async wrapper for CancelCommand that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelCommandRequestT = Model::CancelCommandRequest>
        void CancelCommandAsync(const CancelCommandRequestT& request, const CancelCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::CancelCommand, request, handler, context);
        }

        /**
         * <p>Stops a maintenance window execution that is already in progress and cancels
         * any tasks in the window that haven't already starting running. Tasks already in
         * progress will continue to completion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CancelMaintenanceWindowExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelMaintenanceWindowExecutionOutcome CancelMaintenanceWindowExecution(const Model::CancelMaintenanceWindowExecutionRequest& request) const;

        /**
         * A Callable wrapper for CancelMaintenanceWindowExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelMaintenanceWindowExecutionRequestT = Model::CancelMaintenanceWindowExecutionRequest>
        Model::CancelMaintenanceWindowExecutionOutcomeCallable CancelMaintenanceWindowExecutionCallable(const CancelMaintenanceWindowExecutionRequestT& request) const
        {
            return SubmitCallable(&SSMClient::CancelMaintenanceWindowExecution, request);
        }

        /**
         * An Async wrapper for CancelMaintenanceWindowExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelMaintenanceWindowExecutionRequestT = Model::CancelMaintenanceWindowExecutionRequest>
        void CancelMaintenanceWindowExecutionAsync(const CancelMaintenanceWindowExecutionRequestT& request, const CancelMaintenanceWindowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::CancelMaintenanceWindowExecution, request, handler, context);
        }

        /**
         * <p>Generates an activation code and activation ID you can use to register your
         * on-premises servers, edge devices, or virtual machine (VM) with Amazon Web
         * Services Systems Manager. Registering these machines with Systems Manager makes
         * it possible to manage them using Systems Manager capabilities. You use the
         * activation code and ID when installing SSM Agent on machines in your hybrid
         * environment. For more information about requirements for managing on-premises
         * machines using Systems Manager, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-managedinstances.html">Setting
         * up Amazon Web Services Systems Manager for hybrid environments</a> in the
         * <i>Amazon Web Services Systems Manager User Guide</i>. </p>  <p>Amazon
         * Elastic Compute Cloud (Amazon EC2) instances, edge devices, and on-premises
         * servers and VMs that are configured for Systems Manager are all called
         * <i>managed nodes</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateActivation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateActivationOutcome CreateActivation(const Model::CreateActivationRequest& request) const;

        /**
         * A Callable wrapper for CreateActivation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateActivationRequestT = Model::CreateActivationRequest>
        Model::CreateActivationOutcomeCallable CreateActivationCallable(const CreateActivationRequestT& request) const
        {
            return SubmitCallable(&SSMClient::CreateActivation, request);
        }

        /**
         * An Async wrapper for CreateActivation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateActivationRequestT = Model::CreateActivationRequest>
        void CreateActivationAsync(const CreateActivationRequestT& request, const CreateActivationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::CreateActivation, request, handler, context);
        }

        /**
         * <p>A State Manager association defines the state that you want to maintain on
         * your managed nodes. For example, an association can specify that anti-virus
         * software must be installed and running on your managed nodes, or that certain
         * ports must be closed. For static targets, the association specifies a schedule
         * for when the configuration is reapplied. For dynamic targets, such as an Amazon
         * Web Services resource group or an Amazon Web Services autoscaling group, State
         * Manager, a capability of Amazon Web Services Systems Manager applies the
         * configuration when new managed nodes are added to the group. The association
         * also specifies actions to take when applying the configuration. For example, an
         * association for anti-virus software might run once a day. If the software isn't
         * installed, then State Manager installs it. If the software is installed, but the
         * service isn't running, then the association might instruct State Manager to
         * start the service. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssociationOutcome CreateAssociation(const Model::CreateAssociationRequest& request) const;

        /**
         * A Callable wrapper for CreateAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAssociationRequestT = Model::CreateAssociationRequest>
        Model::CreateAssociationOutcomeCallable CreateAssociationCallable(const CreateAssociationRequestT& request) const
        {
            return SubmitCallable(&SSMClient::CreateAssociation, request);
        }

        /**
         * An Async wrapper for CreateAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAssociationRequestT = Model::CreateAssociationRequest>
        void CreateAssociationAsync(const CreateAssociationRequestT& request, const CreateAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::CreateAssociation, request, handler, context);
        }

        /**
         * <p>Associates the specified Amazon Web Services Systems Manager document (SSM
         * document) with the specified managed nodes or targets.</p> <p>When you associate
         * a document with one or more managed nodes using IDs or tags, Amazon Web Services
         * Systems Manager Agent (SSM Agent) running on the managed node processes the
         * document and configures the node as specified.</p> <p>If you associate a
         * document with a managed node that already has an associated document, the system
         * returns the AssociationAlreadyExists exception.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateAssociationBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssociationBatchOutcome CreateAssociationBatch(const Model::CreateAssociationBatchRequest& request) const;

        /**
         * A Callable wrapper for CreateAssociationBatch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAssociationBatchRequestT = Model::CreateAssociationBatchRequest>
        Model::CreateAssociationBatchOutcomeCallable CreateAssociationBatchCallable(const CreateAssociationBatchRequestT& request) const
        {
            return SubmitCallable(&SSMClient::CreateAssociationBatch, request);
        }

        /**
         * An Async wrapper for CreateAssociationBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAssociationBatchRequestT = Model::CreateAssociationBatchRequest>
        void CreateAssociationBatchAsync(const CreateAssociationBatchRequestT& request, const CreateAssociationBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::CreateAssociationBatch, request, handler, context);
        }

        /**
         * <p>Creates a Amazon Web Services Systems Manager (SSM document). An SSM document
         * defines the actions that Systems Manager performs on your managed nodes. For
         * more information about SSM documents, including information about supported
         * schemas, features, and syntax, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-ssm-docs.html">Amazon
         * Web Services Systems Manager Documents</a> in the <i>Amazon Web Services Systems
         * Manager User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDocumentOutcome CreateDocument(const Model::CreateDocumentRequest& request) const;

        /**
         * A Callable wrapper for CreateDocument that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDocumentRequestT = Model::CreateDocumentRequest>
        Model::CreateDocumentOutcomeCallable CreateDocumentCallable(const CreateDocumentRequestT& request) const
        {
            return SubmitCallable(&SSMClient::CreateDocument, request);
        }

        /**
         * An Async wrapper for CreateDocument that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDocumentRequestT = Model::CreateDocumentRequest>
        void CreateDocumentAsync(const CreateDocumentRequestT& request, const CreateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::CreateDocument, request, handler, context);
        }

        /**
         * <p>Creates a new maintenance window.</p>  <p>The value you specify for
         * <code>Duration</code> determines the specific end time for the maintenance
         * window based on the time it begins. No maintenance window tasks are permitted to
         * start after the resulting endtime minus the number of hours you specify for
         * <code>Cutoff</code>. For example, if the maintenance window starts at 3 PM, the
         * duration is three hours, and the value you specify for <code>Cutoff</code> is
         * one hour, no maintenance window tasks can start after 5 PM.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateMaintenanceWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMaintenanceWindowOutcome CreateMaintenanceWindow(const Model::CreateMaintenanceWindowRequest& request) const;

        /**
         * A Callable wrapper for CreateMaintenanceWindow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMaintenanceWindowRequestT = Model::CreateMaintenanceWindowRequest>
        Model::CreateMaintenanceWindowOutcomeCallable CreateMaintenanceWindowCallable(const CreateMaintenanceWindowRequestT& request) const
        {
            return SubmitCallable(&SSMClient::CreateMaintenanceWindow, request);
        }

        /**
         * An Async wrapper for CreateMaintenanceWindow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMaintenanceWindowRequestT = Model::CreateMaintenanceWindowRequest>
        void CreateMaintenanceWindowAsync(const CreateMaintenanceWindowRequestT& request, const CreateMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::CreateMaintenanceWindow, request, handler, context);
        }

        /**
         * <p>Creates a new OpsItem. You must have permission in Identity and Access
         * Management (IAM) to create a new OpsItem. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-setup.html">Set
         * up OpsCenter</a> in the <i>Amazon Web Services Systems Manager User
         * Guide</i>.</p> <p>Operations engineers and IT professionals use Amazon Web
         * Services Systems Manager OpsCenter to view, investigate, and remediate
         * operational issues impacting the performance and health of their Amazon Web
         * Services resources. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">Amazon
         * Web Services Systems Manager OpsCenter</a> in the <i>Amazon Web Services Systems
         * Manager User Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateOpsItem">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOpsItemOutcome CreateOpsItem(const Model::CreateOpsItemRequest& request) const;

        /**
         * A Callable wrapper for CreateOpsItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateOpsItemRequestT = Model::CreateOpsItemRequest>
        Model::CreateOpsItemOutcomeCallable CreateOpsItemCallable(const CreateOpsItemRequestT& request) const
        {
            return SubmitCallable(&SSMClient::CreateOpsItem, request);
        }

        /**
         * An Async wrapper for CreateOpsItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateOpsItemRequestT = Model::CreateOpsItemRequest>
        void CreateOpsItemAsync(const CreateOpsItemRequestT& request, const CreateOpsItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::CreateOpsItem, request, handler, context);
        }

        /**
         * <p>If you create a new application in Application Manager, Amazon Web Services
         * Systems Manager calls this API operation to specify information about the new
         * application, including the application type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateOpsMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOpsMetadataOutcome CreateOpsMetadata(const Model::CreateOpsMetadataRequest& request) const;

        /**
         * A Callable wrapper for CreateOpsMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateOpsMetadataRequestT = Model::CreateOpsMetadataRequest>
        Model::CreateOpsMetadataOutcomeCallable CreateOpsMetadataCallable(const CreateOpsMetadataRequestT& request) const
        {
            return SubmitCallable(&SSMClient::CreateOpsMetadata, request);
        }

        /**
         * An Async wrapper for CreateOpsMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateOpsMetadataRequestT = Model::CreateOpsMetadataRequest>
        void CreateOpsMetadataAsync(const CreateOpsMetadataRequestT& request, const CreateOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::CreateOpsMetadata, request, handler, context);
        }

        /**
         * <p>Creates a patch baseline.</p>  <p>For information about valid key-value
         * pairs in <code>PatchFilters</code> for each supported operating system type, see
         * <a>PatchFilter</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreatePatchBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePatchBaselineOutcome CreatePatchBaseline(const Model::CreatePatchBaselineRequest& request) const;

        /**
         * A Callable wrapper for CreatePatchBaseline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePatchBaselineRequestT = Model::CreatePatchBaselineRequest>
        Model::CreatePatchBaselineOutcomeCallable CreatePatchBaselineCallable(const CreatePatchBaselineRequestT& request) const
        {
            return SubmitCallable(&SSMClient::CreatePatchBaseline, request);
        }

        /**
         * An Async wrapper for CreatePatchBaseline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePatchBaselineRequestT = Model::CreatePatchBaselineRequest>
        void CreatePatchBaselineAsync(const CreatePatchBaselineRequestT& request, const CreatePatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::CreatePatchBaseline, request, handler, context);
        }

        /**
         * <p>A resource data sync helps you view data from multiple sources in a single
         * location. Amazon Web Services Systems Manager offers two types of resource data
         * sync: <code>SyncToDestination</code> and <code>SyncFromSource</code>.</p> <p>You
         * can configure Systems Manager Inventory to use the
         * <code>SyncToDestination</code> type to synchronize Inventory data from multiple
         * Amazon Web Services Regions to a single Amazon Simple Storage Service (Amazon
         * S3) bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-inventory-datasync.html">Configuring
         * resource data sync for Inventory</a> in the <i>Amazon Web Services Systems
         * Manager User Guide</i>.</p> <p>You can configure Systems Manager Explorer to use
         * the <code>SyncFromSource</code> type to synchronize operational work items
         * (OpsItems) and operational data (OpsData) from multiple Amazon Web Services
         * Regions to a single Amazon S3 bucket. This type can synchronize OpsItems and
         * OpsData from multiple Amazon Web Services accounts and Amazon Web Services
         * Regions or <code>EntireOrganization</code> by using Organizations. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/Explorer-resource-data-sync.html">Setting
         * up Systems Manager Explorer to display data from multiple accounts and
         * Regions</a> in the <i>Amazon Web Services Systems Manager User Guide</i>.</p>
         * <p>A resource data sync is an asynchronous operation that returns immediately.
         * After a successful initial sync is completed, the system continuously syncs
         * data. To check the status of a sync, use the <a>ListResourceDataSync</a>.</p>
         *  <p>By default, data isn't encrypted in Amazon S3. We strongly recommend
         * that you enable encryption in Amazon S3 to ensure secure data storage. We also
         * recommend that you secure access to the Amazon S3 bucket by creating a
         * restrictive bucket policy. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateResourceDataSync">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceDataSyncOutcome CreateResourceDataSync(const Model::CreateResourceDataSyncRequest& request) const;

        /**
         * A Callable wrapper for CreateResourceDataSync that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateResourceDataSyncRequestT = Model::CreateResourceDataSyncRequest>
        Model::CreateResourceDataSyncOutcomeCallable CreateResourceDataSyncCallable(const CreateResourceDataSyncRequestT& request) const
        {
            return SubmitCallable(&SSMClient::CreateResourceDataSync, request);
        }

        /**
         * An Async wrapper for CreateResourceDataSync that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateResourceDataSyncRequestT = Model::CreateResourceDataSyncRequest>
        void CreateResourceDataSyncAsync(const CreateResourceDataSyncRequestT& request, const CreateResourceDataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::CreateResourceDataSync, request, handler, context);
        }

        /**
         * <p>Deletes an activation. You aren't required to delete an activation. If you
         * delete an activation, you can no longer use it to register additional managed
         * nodes. Deleting an activation doesn't de-register managed nodes. You must
         * manually de-register managed nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteActivation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteActivationOutcome DeleteActivation(const Model::DeleteActivationRequest& request) const;

        /**
         * A Callable wrapper for DeleteActivation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteActivationRequestT = Model::DeleteActivationRequest>
        Model::DeleteActivationOutcomeCallable DeleteActivationCallable(const DeleteActivationRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DeleteActivation, request);
        }

        /**
         * An Async wrapper for DeleteActivation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteActivationRequestT = Model::DeleteActivationRequest>
        void DeleteActivationAsync(const DeleteActivationRequestT& request, const DeleteActivationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DeleteActivation, request, handler, context);
        }

        /**
         * <p>Disassociates the specified Amazon Web Services Systems Manager document (SSM
         * document) from the specified managed node. If you created the association by
         * using the <code>Targets</code> parameter, then you must delete the association
         * by using the association ID.</p> <p>When you disassociate a document from a
         * managed node, it doesn't change the configuration of the node. To change the
         * configuration state of a managed node after you disassociate a document, you
         * must create a new document with the desired configuration and associate it with
         * the node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssociationOutcome DeleteAssociation(const Model::DeleteAssociationRequest& request) const;

        /**
         * A Callable wrapper for DeleteAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAssociationRequestT = Model::DeleteAssociationRequest>
        Model::DeleteAssociationOutcomeCallable DeleteAssociationCallable(const DeleteAssociationRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DeleteAssociation, request);
        }

        /**
         * An Async wrapper for DeleteAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAssociationRequestT = Model::DeleteAssociationRequest>
        void DeleteAssociationAsync(const DeleteAssociationRequestT& request, const DeleteAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DeleteAssociation, request, handler, context);
        }

        /**
         * <p>Deletes the Amazon Web Services Systems Manager document (SSM document) and
         * all managed node associations to the document.</p> <p>Before you delete the
         * document, we recommend that you use <a>DeleteAssociation</a> to disassociate all
         * managed nodes that are associated with the document.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDocumentOutcome DeleteDocument(const Model::DeleteDocumentRequest& request) const;

        /**
         * A Callable wrapper for DeleteDocument that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDocumentRequestT = Model::DeleteDocumentRequest>
        Model::DeleteDocumentOutcomeCallable DeleteDocumentCallable(const DeleteDocumentRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DeleteDocument, request);
        }

        /**
         * An Async wrapper for DeleteDocument that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDocumentRequestT = Model::DeleteDocumentRequest>
        void DeleteDocumentAsync(const DeleteDocumentRequestT& request, const DeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DeleteDocument, request, handler, context);
        }

        /**
         * <p>Delete a custom inventory type or the data associated with a custom Inventory
         * type. Deleting a custom inventory type is also referred to as deleting a custom
         * inventory schema.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteInventory">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInventoryOutcome DeleteInventory(const Model::DeleteInventoryRequest& request) const;

        /**
         * A Callable wrapper for DeleteInventory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInventoryRequestT = Model::DeleteInventoryRequest>
        Model::DeleteInventoryOutcomeCallable DeleteInventoryCallable(const DeleteInventoryRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DeleteInventory, request);
        }

        /**
         * An Async wrapper for DeleteInventory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInventoryRequestT = Model::DeleteInventoryRequest>
        void DeleteInventoryAsync(const DeleteInventoryRequestT& request, const DeleteInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DeleteInventory, request, handler, context);
        }

        /**
         * <p>Deletes a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteMaintenanceWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMaintenanceWindowOutcome DeleteMaintenanceWindow(const Model::DeleteMaintenanceWindowRequest& request) const;

        /**
         * A Callable wrapper for DeleteMaintenanceWindow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMaintenanceWindowRequestT = Model::DeleteMaintenanceWindowRequest>
        Model::DeleteMaintenanceWindowOutcomeCallable DeleteMaintenanceWindowCallable(const DeleteMaintenanceWindowRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DeleteMaintenanceWindow, request);
        }

        /**
         * An Async wrapper for DeleteMaintenanceWindow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMaintenanceWindowRequestT = Model::DeleteMaintenanceWindowRequest>
        void DeleteMaintenanceWindowAsync(const DeleteMaintenanceWindowRequestT& request, const DeleteMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DeleteMaintenanceWindow, request, handler, context);
        }

        /**
         * <p>Delete OpsMetadata related to an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteOpsMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOpsMetadataOutcome DeleteOpsMetadata(const Model::DeleteOpsMetadataRequest& request) const;

        /**
         * A Callable wrapper for DeleteOpsMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteOpsMetadataRequestT = Model::DeleteOpsMetadataRequest>
        Model::DeleteOpsMetadataOutcomeCallable DeleteOpsMetadataCallable(const DeleteOpsMetadataRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DeleteOpsMetadata, request);
        }

        /**
         * An Async wrapper for DeleteOpsMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteOpsMetadataRequestT = Model::DeleteOpsMetadataRequest>
        void DeleteOpsMetadataAsync(const DeleteOpsMetadataRequestT& request, const DeleteOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DeleteOpsMetadata, request, handler, context);
        }

        /**
         * <p>Delete a parameter from the system. After deleting a parameter, wait for at
         * least 30 seconds to create a parameter with the same name.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteParameter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteParameterOutcome DeleteParameter(const Model::DeleteParameterRequest& request) const;

        /**
         * A Callable wrapper for DeleteParameter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteParameterRequestT = Model::DeleteParameterRequest>
        Model::DeleteParameterOutcomeCallable DeleteParameterCallable(const DeleteParameterRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DeleteParameter, request);
        }

        /**
         * An Async wrapper for DeleteParameter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteParameterRequestT = Model::DeleteParameterRequest>
        void DeleteParameterAsync(const DeleteParameterRequestT& request, const DeleteParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DeleteParameter, request, handler, context);
        }

        /**
         * <p>Delete a list of parameters. After deleting a parameter, wait for at least 30
         * seconds to create a parameter with the same name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteParametersOutcome DeleteParameters(const Model::DeleteParametersRequest& request) const;

        /**
         * A Callable wrapper for DeleteParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteParametersRequestT = Model::DeleteParametersRequest>
        Model::DeleteParametersOutcomeCallable DeleteParametersCallable(const DeleteParametersRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DeleteParameters, request);
        }

        /**
         * An Async wrapper for DeleteParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteParametersRequestT = Model::DeleteParametersRequest>
        void DeleteParametersAsync(const DeleteParametersRequestT& request, const DeleteParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DeleteParameters, request, handler, context);
        }

        /**
         * <p>Deletes a patch baseline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeletePatchBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePatchBaselineOutcome DeletePatchBaseline(const Model::DeletePatchBaselineRequest& request) const;

        /**
         * A Callable wrapper for DeletePatchBaseline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePatchBaselineRequestT = Model::DeletePatchBaselineRequest>
        Model::DeletePatchBaselineOutcomeCallable DeletePatchBaselineCallable(const DeletePatchBaselineRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DeletePatchBaseline, request);
        }

        /**
         * An Async wrapper for DeletePatchBaseline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePatchBaselineRequestT = Model::DeletePatchBaselineRequest>
        void DeletePatchBaselineAsync(const DeletePatchBaselineRequestT& request, const DeletePatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DeletePatchBaseline, request, handler, context);
        }

        /**
         * <p>Deletes a resource data sync configuration. After the configuration is
         * deleted, changes to data on managed nodes are no longer synced to or from the
         * target. Deleting a sync configuration doesn't delete data.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteResourceDataSync">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceDataSyncOutcome DeleteResourceDataSync(const Model::DeleteResourceDataSyncRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourceDataSync that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourceDataSyncRequestT = Model::DeleteResourceDataSyncRequest>
        Model::DeleteResourceDataSyncOutcomeCallable DeleteResourceDataSyncCallable(const DeleteResourceDataSyncRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DeleteResourceDataSync, request);
        }

        /**
         * An Async wrapper for DeleteResourceDataSync that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourceDataSyncRequestT = Model::DeleteResourceDataSyncRequest>
        void DeleteResourceDataSyncAsync(const DeleteResourceDataSyncRequestT& request, const DeleteResourceDataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DeleteResourceDataSync, request, handler, context);
        }

        /**
         * <p>Deletes a Systems Manager resource policy. A resource policy helps you to
         * define the IAM entity (for example, an Amazon Web Services account) that can
         * manage your Systems Manager resources. Currently, <code>OpsItemGroup</code> is
         * the only resource that supports Systems Manager resource policies. The resource
         * policy for <code>OpsItemGroup</code> enables Amazon Web Services accounts to
         * view and interact with OpsCenter operational work items
         * (OpsItems).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const DeleteResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DeleteResourcePolicy, request);
        }

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        void DeleteResourcePolicyAsync(const DeleteResourcePolicyRequestT& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DeleteResourcePolicy, request, handler, context);
        }

        /**
         * <p>Removes the server or virtual machine from the list of registered servers.
         * You can reregister the node again at any time. If you don't plan to use Run
         * Command on the server, we suggest uninstalling SSM Agent first.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeregisterManagedInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterManagedInstanceOutcome DeregisterManagedInstance(const Model::DeregisterManagedInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeregisterManagedInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterManagedInstanceRequestT = Model::DeregisterManagedInstanceRequest>
        Model::DeregisterManagedInstanceOutcomeCallable DeregisterManagedInstanceCallable(const DeregisterManagedInstanceRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DeregisterManagedInstance, request);
        }

        /**
         * An Async wrapper for DeregisterManagedInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterManagedInstanceRequestT = Model::DeregisterManagedInstanceRequest>
        void DeregisterManagedInstanceAsync(const DeregisterManagedInstanceRequestT& request, const DeregisterManagedInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DeregisterManagedInstance, request, handler, context);
        }

        /**
         * <p>Removes a patch group from a patch baseline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeregisterPatchBaselineForPatchGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterPatchBaselineForPatchGroupOutcome DeregisterPatchBaselineForPatchGroup(const Model::DeregisterPatchBaselineForPatchGroupRequest& request) const;

        /**
         * A Callable wrapper for DeregisterPatchBaselineForPatchGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterPatchBaselineForPatchGroupRequestT = Model::DeregisterPatchBaselineForPatchGroupRequest>
        Model::DeregisterPatchBaselineForPatchGroupOutcomeCallable DeregisterPatchBaselineForPatchGroupCallable(const DeregisterPatchBaselineForPatchGroupRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DeregisterPatchBaselineForPatchGroup, request);
        }

        /**
         * An Async wrapper for DeregisterPatchBaselineForPatchGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterPatchBaselineForPatchGroupRequestT = Model::DeregisterPatchBaselineForPatchGroupRequest>
        void DeregisterPatchBaselineForPatchGroupAsync(const DeregisterPatchBaselineForPatchGroupRequestT& request, const DeregisterPatchBaselineForPatchGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DeregisterPatchBaselineForPatchGroup, request, handler, context);
        }

        /**
         * <p>Removes a target from a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeregisterTargetFromMaintenanceWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterTargetFromMaintenanceWindowOutcome DeregisterTargetFromMaintenanceWindow(const Model::DeregisterTargetFromMaintenanceWindowRequest& request) const;

        /**
         * A Callable wrapper for DeregisterTargetFromMaintenanceWindow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterTargetFromMaintenanceWindowRequestT = Model::DeregisterTargetFromMaintenanceWindowRequest>
        Model::DeregisterTargetFromMaintenanceWindowOutcomeCallable DeregisterTargetFromMaintenanceWindowCallable(const DeregisterTargetFromMaintenanceWindowRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DeregisterTargetFromMaintenanceWindow, request);
        }

        /**
         * An Async wrapper for DeregisterTargetFromMaintenanceWindow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterTargetFromMaintenanceWindowRequestT = Model::DeregisterTargetFromMaintenanceWindowRequest>
        void DeregisterTargetFromMaintenanceWindowAsync(const DeregisterTargetFromMaintenanceWindowRequestT& request, const DeregisterTargetFromMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DeregisterTargetFromMaintenanceWindow, request, handler, context);
        }

        /**
         * <p>Removes a task from a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeregisterTaskFromMaintenanceWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterTaskFromMaintenanceWindowOutcome DeregisterTaskFromMaintenanceWindow(const Model::DeregisterTaskFromMaintenanceWindowRequest& request) const;

        /**
         * A Callable wrapper for DeregisterTaskFromMaintenanceWindow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterTaskFromMaintenanceWindowRequestT = Model::DeregisterTaskFromMaintenanceWindowRequest>
        Model::DeregisterTaskFromMaintenanceWindowOutcomeCallable DeregisterTaskFromMaintenanceWindowCallable(const DeregisterTaskFromMaintenanceWindowRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DeregisterTaskFromMaintenanceWindow, request);
        }

        /**
         * An Async wrapper for DeregisterTaskFromMaintenanceWindow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterTaskFromMaintenanceWindowRequestT = Model::DeregisterTaskFromMaintenanceWindowRequest>
        void DeregisterTaskFromMaintenanceWindowAsync(const DeregisterTaskFromMaintenanceWindowRequestT& request, const DeregisterTaskFromMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DeregisterTaskFromMaintenanceWindow, request, handler, context);
        }

        /**
         * <p>Describes details about the activation, such as the date and time the
         * activation was created, its expiration date, the Identity and Access Management
         * (IAM) role assigned to the managed nodes in the activation, and the number of
         * nodes registered by using this activation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeActivations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeActivationsOutcome DescribeActivations(const Model::DescribeActivationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeActivations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeActivationsRequestT = Model::DescribeActivationsRequest>
        Model::DescribeActivationsOutcomeCallable DescribeActivationsCallable(const DescribeActivationsRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribeActivations, request);
        }

        /**
         * An Async wrapper for DescribeActivations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeActivationsRequestT = Model::DescribeActivationsRequest>
        void DescribeActivationsAsync(const DescribeActivationsRequestT& request, const DescribeActivationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribeActivations, request, handler, context);
        }

        /**
         * <p>Describes the association for the specified target or managed node. If you
         * created the association by using the <code>Targets</code> parameter, then you
         * must retrieve the association by using the association ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssociationOutcome DescribeAssociation(const Model::DescribeAssociationRequest& request) const;

        /**
         * A Callable wrapper for DescribeAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAssociationRequestT = Model::DescribeAssociationRequest>
        Model::DescribeAssociationOutcomeCallable DescribeAssociationCallable(const DescribeAssociationRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribeAssociation, request);
        }

        /**
         * An Async wrapper for DescribeAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAssociationRequestT = Model::DescribeAssociationRequest>
        void DescribeAssociationAsync(const DescribeAssociationRequestT& request, const DescribeAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribeAssociation, request, handler, context);
        }

        /**
         * <p>Views information about a specific execution of a specific
         * association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAssociationExecutionTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssociationExecutionTargetsOutcome DescribeAssociationExecutionTargets(const Model::DescribeAssociationExecutionTargetsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAssociationExecutionTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAssociationExecutionTargetsRequestT = Model::DescribeAssociationExecutionTargetsRequest>
        Model::DescribeAssociationExecutionTargetsOutcomeCallable DescribeAssociationExecutionTargetsCallable(const DescribeAssociationExecutionTargetsRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribeAssociationExecutionTargets, request);
        }

        /**
         * An Async wrapper for DescribeAssociationExecutionTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAssociationExecutionTargetsRequestT = Model::DescribeAssociationExecutionTargetsRequest>
        void DescribeAssociationExecutionTargetsAsync(const DescribeAssociationExecutionTargetsRequestT& request, const DescribeAssociationExecutionTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribeAssociationExecutionTargets, request, handler, context);
        }

        /**
         * <p>Views all executions for a specific association ID. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAssociationExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssociationExecutionsOutcome DescribeAssociationExecutions(const Model::DescribeAssociationExecutionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAssociationExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAssociationExecutionsRequestT = Model::DescribeAssociationExecutionsRequest>
        Model::DescribeAssociationExecutionsOutcomeCallable DescribeAssociationExecutionsCallable(const DescribeAssociationExecutionsRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribeAssociationExecutions, request);
        }

        /**
         * An Async wrapper for DescribeAssociationExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAssociationExecutionsRequestT = Model::DescribeAssociationExecutionsRequest>
        void DescribeAssociationExecutionsAsync(const DescribeAssociationExecutionsRequestT& request, const DescribeAssociationExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribeAssociationExecutions, request, handler, context);
        }

        /**
         * <p>Provides details about all active and terminated Automation
         * executions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAutomationExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAutomationExecutionsOutcome DescribeAutomationExecutions(const Model::DescribeAutomationExecutionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAutomationExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAutomationExecutionsRequestT = Model::DescribeAutomationExecutionsRequest>
        Model::DescribeAutomationExecutionsOutcomeCallable DescribeAutomationExecutionsCallable(const DescribeAutomationExecutionsRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribeAutomationExecutions, request);
        }

        /**
         * An Async wrapper for DescribeAutomationExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAutomationExecutionsRequestT = Model::DescribeAutomationExecutionsRequest>
        void DescribeAutomationExecutionsAsync(const DescribeAutomationExecutionsRequestT& request, const DescribeAutomationExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribeAutomationExecutions, request, handler, context);
        }

        /**
         * <p>Information about all active and terminated step executions in an Automation
         * workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAutomationStepExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAutomationStepExecutionsOutcome DescribeAutomationStepExecutions(const Model::DescribeAutomationStepExecutionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAutomationStepExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAutomationStepExecutionsRequestT = Model::DescribeAutomationStepExecutionsRequest>
        Model::DescribeAutomationStepExecutionsOutcomeCallable DescribeAutomationStepExecutionsCallable(const DescribeAutomationStepExecutionsRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribeAutomationStepExecutions, request);
        }

        /**
         * An Async wrapper for DescribeAutomationStepExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAutomationStepExecutionsRequestT = Model::DescribeAutomationStepExecutionsRequest>
        void DescribeAutomationStepExecutionsAsync(const DescribeAutomationStepExecutionsRequestT& request, const DescribeAutomationStepExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribeAutomationStepExecutions, request, handler, context);
        }

        /**
         * <p>Lists all patches eligible to be included in a patch baseline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAvailablePatches">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAvailablePatchesOutcome DescribeAvailablePatches(const Model::DescribeAvailablePatchesRequest& request) const;

        /**
         * A Callable wrapper for DescribeAvailablePatches that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAvailablePatchesRequestT = Model::DescribeAvailablePatchesRequest>
        Model::DescribeAvailablePatchesOutcomeCallable DescribeAvailablePatchesCallable(const DescribeAvailablePatchesRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribeAvailablePatches, request);
        }

        /**
         * An Async wrapper for DescribeAvailablePatches that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAvailablePatchesRequestT = Model::DescribeAvailablePatchesRequest>
        void DescribeAvailablePatchesAsync(const DescribeAvailablePatchesRequestT& request, const DescribeAvailablePatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribeAvailablePatches, request, handler, context);
        }

        /**
         * <p>Describes the specified Amazon Web Services Systems Manager document (SSM
         * document).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDocumentOutcome DescribeDocument(const Model::DescribeDocumentRequest& request) const;

        /**
         * A Callable wrapper for DescribeDocument that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDocumentRequestT = Model::DescribeDocumentRequest>
        Model::DescribeDocumentOutcomeCallable DescribeDocumentCallable(const DescribeDocumentRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribeDocument, request);
        }

        /**
         * An Async wrapper for DescribeDocument that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDocumentRequestT = Model::DescribeDocumentRequest>
        void DescribeDocumentAsync(const DescribeDocumentRequestT& request, const DescribeDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribeDocument, request, handler, context);
        }

        /**
         * <p>Describes the permissions for a Amazon Web Services Systems Manager document
         * (SSM document). If you created the document, you are the owner. If a document is
         * shared, it can either be shared privately (by specifying a user's Amazon Web
         * Services account ID) or publicly (<i>All</i>). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeDocumentPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDocumentPermissionOutcome DescribeDocumentPermission(const Model::DescribeDocumentPermissionRequest& request) const;

        /**
         * A Callable wrapper for DescribeDocumentPermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDocumentPermissionRequestT = Model::DescribeDocumentPermissionRequest>
        Model::DescribeDocumentPermissionOutcomeCallable DescribeDocumentPermissionCallable(const DescribeDocumentPermissionRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribeDocumentPermission, request);
        }

        /**
         * An Async wrapper for DescribeDocumentPermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDocumentPermissionRequestT = Model::DescribeDocumentPermissionRequest>
        void DescribeDocumentPermissionAsync(const DescribeDocumentPermissionRequestT& request, const DescribeDocumentPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribeDocumentPermission, request, handler, context);
        }

        /**
         * <p>All associations for the managed node(s).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeEffectiveInstanceAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEffectiveInstanceAssociationsOutcome DescribeEffectiveInstanceAssociations(const Model::DescribeEffectiveInstanceAssociationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEffectiveInstanceAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEffectiveInstanceAssociationsRequestT = Model::DescribeEffectiveInstanceAssociationsRequest>
        Model::DescribeEffectiveInstanceAssociationsOutcomeCallable DescribeEffectiveInstanceAssociationsCallable(const DescribeEffectiveInstanceAssociationsRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribeEffectiveInstanceAssociations, request);
        }

        /**
         * An Async wrapper for DescribeEffectiveInstanceAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEffectiveInstanceAssociationsRequestT = Model::DescribeEffectiveInstanceAssociationsRequest>
        void DescribeEffectiveInstanceAssociationsAsync(const DescribeEffectiveInstanceAssociationsRequestT& request, const DescribeEffectiveInstanceAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribeEffectiveInstanceAssociations, request, handler, context);
        }

        /**
         * <p>Retrieves the current effective patches (the patch and the approval state)
         * for the specified patch baseline. Applies to patch baselines for Windows
         * only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeEffectivePatchesForPatchBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEffectivePatchesForPatchBaselineOutcome DescribeEffectivePatchesForPatchBaseline(const Model::DescribeEffectivePatchesForPatchBaselineRequest& request) const;

        /**
         * A Callable wrapper for DescribeEffectivePatchesForPatchBaseline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEffectivePatchesForPatchBaselineRequestT = Model::DescribeEffectivePatchesForPatchBaselineRequest>
        Model::DescribeEffectivePatchesForPatchBaselineOutcomeCallable DescribeEffectivePatchesForPatchBaselineCallable(const DescribeEffectivePatchesForPatchBaselineRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribeEffectivePatchesForPatchBaseline, request);
        }

        /**
         * An Async wrapper for DescribeEffectivePatchesForPatchBaseline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEffectivePatchesForPatchBaselineRequestT = Model::DescribeEffectivePatchesForPatchBaselineRequest>
        void DescribeEffectivePatchesForPatchBaselineAsync(const DescribeEffectivePatchesForPatchBaselineRequestT& request, const DescribeEffectivePatchesForPatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribeEffectivePatchesForPatchBaseline, request, handler, context);
        }

        /**
         * <p>The status of the associations for the managed node(s).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstanceAssociationsStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceAssociationsStatusOutcome DescribeInstanceAssociationsStatus(const Model::DescribeInstanceAssociationsStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstanceAssociationsStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeInstanceAssociationsStatusRequestT = Model::DescribeInstanceAssociationsStatusRequest>
        Model::DescribeInstanceAssociationsStatusOutcomeCallable DescribeInstanceAssociationsStatusCallable(const DescribeInstanceAssociationsStatusRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribeInstanceAssociationsStatus, request);
        }

        /**
         * An Async wrapper for DescribeInstanceAssociationsStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInstanceAssociationsStatusRequestT = Model::DescribeInstanceAssociationsStatusRequest>
        void DescribeInstanceAssociationsStatusAsync(const DescribeInstanceAssociationsStatusRequestT& request, const DescribeInstanceAssociationsStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribeInstanceAssociationsStatus, request, handler, context);
        }

        /**
         * <p>Provides information about one or more of your managed nodes, including the
         * operating system platform, SSM Agent version, association status, and IP
         * address. This operation does not return information for nodes that are either
         * Stopped or Terminated.</p> <p>If you specify one or more node IDs, the operation
         * returns information for those managed nodes. If you don't specify node IDs, it
         * returns information for all your managed nodes. If you specify a node ID that
         * isn't valid or a node that you don't own, you receive an error.</p> 
         * <p>The <code>IamRole</code> field returned for this API operation is the
         * Identity and Access Management (IAM) role assigned to on-premises managed nodes.
         * This operation does not return the IAM role for EC2 instances.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstanceInformation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceInformationOutcome DescribeInstanceInformation(const Model::DescribeInstanceInformationRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstanceInformation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeInstanceInformationRequestT = Model::DescribeInstanceInformationRequest>
        Model::DescribeInstanceInformationOutcomeCallable DescribeInstanceInformationCallable(const DescribeInstanceInformationRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribeInstanceInformation, request);
        }

        /**
         * An Async wrapper for DescribeInstanceInformation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInstanceInformationRequestT = Model::DescribeInstanceInformationRequest>
        void DescribeInstanceInformationAsync(const DescribeInstanceInformationRequestT& request, const DescribeInstanceInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribeInstanceInformation, request, handler, context);
        }

        /**
         * <p>Retrieves the high-level patch state of one or more managed
         * nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstancePatchStates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstancePatchStatesOutcome DescribeInstancePatchStates(const Model::DescribeInstancePatchStatesRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstancePatchStates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeInstancePatchStatesRequestT = Model::DescribeInstancePatchStatesRequest>
        Model::DescribeInstancePatchStatesOutcomeCallable DescribeInstancePatchStatesCallable(const DescribeInstancePatchStatesRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribeInstancePatchStates, request);
        }

        /**
         * An Async wrapper for DescribeInstancePatchStates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInstancePatchStatesRequestT = Model::DescribeInstancePatchStatesRequest>
        void DescribeInstancePatchStatesAsync(const DescribeInstancePatchStatesRequestT& request, const DescribeInstancePatchStatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribeInstancePatchStates, request, handler, context);
        }

        /**
         * <p>Retrieves the high-level patch state for the managed nodes in the specified
         * patch group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstancePatchStatesForPatchGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstancePatchStatesForPatchGroupOutcome DescribeInstancePatchStatesForPatchGroup(const Model::DescribeInstancePatchStatesForPatchGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstancePatchStatesForPatchGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeInstancePatchStatesForPatchGroupRequestT = Model::DescribeInstancePatchStatesForPatchGroupRequest>
        Model::DescribeInstancePatchStatesForPatchGroupOutcomeCallable DescribeInstancePatchStatesForPatchGroupCallable(const DescribeInstancePatchStatesForPatchGroupRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribeInstancePatchStatesForPatchGroup, request);
        }

        /**
         * An Async wrapper for DescribeInstancePatchStatesForPatchGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInstancePatchStatesForPatchGroupRequestT = Model::DescribeInstancePatchStatesForPatchGroupRequest>
        void DescribeInstancePatchStatesForPatchGroupAsync(const DescribeInstancePatchStatesForPatchGroupRequestT& request, const DescribeInstancePatchStatesForPatchGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribeInstancePatchStatesForPatchGroup, request, handler, context);
        }

        /**
         * <p>Retrieves information about the patches on the specified managed node and
         * their state relative to the patch baseline being used for the
         * node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstancePatches">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstancePatchesOutcome DescribeInstancePatches(const Model::DescribeInstancePatchesRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstancePatches that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeInstancePatchesRequestT = Model::DescribeInstancePatchesRequest>
        Model::DescribeInstancePatchesOutcomeCallable DescribeInstancePatchesCallable(const DescribeInstancePatchesRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribeInstancePatches, request);
        }

        /**
         * An Async wrapper for DescribeInstancePatches that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInstancePatchesRequestT = Model::DescribeInstancePatchesRequest>
        void DescribeInstancePatchesAsync(const DescribeInstancePatchesRequestT& request, const DescribeInstancePatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribeInstancePatches, request, handler, context);
        }

        /**
         * <p>Describes a specific delete inventory operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInventoryDeletions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInventoryDeletionsOutcome DescribeInventoryDeletions(const Model::DescribeInventoryDeletionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeInventoryDeletions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeInventoryDeletionsRequestT = Model::DescribeInventoryDeletionsRequest>
        Model::DescribeInventoryDeletionsOutcomeCallable DescribeInventoryDeletionsCallable(const DescribeInventoryDeletionsRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribeInventoryDeletions, request);
        }

        /**
         * An Async wrapper for DescribeInventoryDeletions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInventoryDeletionsRequestT = Model::DescribeInventoryDeletionsRequest>
        void DescribeInventoryDeletionsAsync(const DescribeInventoryDeletionsRequestT& request, const DescribeInventoryDeletionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribeInventoryDeletions, request, handler, context);
        }

        /**
         * <p>Retrieves the individual task executions (one per target) for a particular
         * task run as part of a maintenance window execution.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowExecutionTaskInvocations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMaintenanceWindowExecutionTaskInvocationsOutcome DescribeMaintenanceWindowExecutionTaskInvocations(const Model::DescribeMaintenanceWindowExecutionTaskInvocationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeMaintenanceWindowExecutionTaskInvocations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMaintenanceWindowExecutionTaskInvocationsRequestT = Model::DescribeMaintenanceWindowExecutionTaskInvocationsRequest>
        Model::DescribeMaintenanceWindowExecutionTaskInvocationsOutcomeCallable DescribeMaintenanceWindowExecutionTaskInvocationsCallable(const DescribeMaintenanceWindowExecutionTaskInvocationsRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribeMaintenanceWindowExecutionTaskInvocations, request);
        }

        /**
         * An Async wrapper for DescribeMaintenanceWindowExecutionTaskInvocations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMaintenanceWindowExecutionTaskInvocationsRequestT = Model::DescribeMaintenanceWindowExecutionTaskInvocationsRequest>
        void DescribeMaintenanceWindowExecutionTaskInvocationsAsync(const DescribeMaintenanceWindowExecutionTaskInvocationsRequestT& request, const DescribeMaintenanceWindowExecutionTaskInvocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribeMaintenanceWindowExecutionTaskInvocations, request, handler, context);
        }

        /**
         * <p>For a given maintenance window execution, lists the tasks that were
         * run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowExecutionTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMaintenanceWindowExecutionTasksOutcome DescribeMaintenanceWindowExecutionTasks(const Model::DescribeMaintenanceWindowExecutionTasksRequest& request) const;

        /**
         * A Callable wrapper for DescribeMaintenanceWindowExecutionTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMaintenanceWindowExecutionTasksRequestT = Model::DescribeMaintenanceWindowExecutionTasksRequest>
        Model::DescribeMaintenanceWindowExecutionTasksOutcomeCallable DescribeMaintenanceWindowExecutionTasksCallable(const DescribeMaintenanceWindowExecutionTasksRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribeMaintenanceWindowExecutionTasks, request);
        }

        /**
         * An Async wrapper for DescribeMaintenanceWindowExecutionTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMaintenanceWindowExecutionTasksRequestT = Model::DescribeMaintenanceWindowExecutionTasksRequest>
        void DescribeMaintenanceWindowExecutionTasksAsync(const DescribeMaintenanceWindowExecutionTasksRequestT& request, const DescribeMaintenanceWindowExecutionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribeMaintenanceWindowExecutionTasks, request, handler, context);
        }

        /**
         * <p>Lists the executions of a maintenance window. This includes information about
         * when the maintenance window was scheduled to be active, and information about
         * tasks registered and run with the maintenance window.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMaintenanceWindowExecutionsOutcome DescribeMaintenanceWindowExecutions(const Model::DescribeMaintenanceWindowExecutionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeMaintenanceWindowExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMaintenanceWindowExecutionsRequestT = Model::DescribeMaintenanceWindowExecutionsRequest>
        Model::DescribeMaintenanceWindowExecutionsOutcomeCallable DescribeMaintenanceWindowExecutionsCallable(const DescribeMaintenanceWindowExecutionsRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribeMaintenanceWindowExecutions, request);
        }

        /**
         * An Async wrapper for DescribeMaintenanceWindowExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMaintenanceWindowExecutionsRequestT = Model::DescribeMaintenanceWindowExecutionsRequest>
        void DescribeMaintenanceWindowExecutionsAsync(const DescribeMaintenanceWindowExecutionsRequestT& request, const DescribeMaintenanceWindowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribeMaintenanceWindowExecutions, request, handler, context);
        }

        /**
         * <p>Retrieves information about upcoming executions of a maintenance
         * window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMaintenanceWindowScheduleOutcome DescribeMaintenanceWindowSchedule(const Model::DescribeMaintenanceWindowScheduleRequest& request) const;

        /**
         * A Callable wrapper for DescribeMaintenanceWindowSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMaintenanceWindowScheduleRequestT = Model::DescribeMaintenanceWindowScheduleRequest>
        Model::DescribeMaintenanceWindowScheduleOutcomeCallable DescribeMaintenanceWindowScheduleCallable(const DescribeMaintenanceWindowScheduleRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribeMaintenanceWindowSchedule, request);
        }

        /**
         * An Async wrapper for DescribeMaintenanceWindowSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMaintenanceWindowScheduleRequestT = Model::DescribeMaintenanceWindowScheduleRequest>
        void DescribeMaintenanceWindowScheduleAsync(const DescribeMaintenanceWindowScheduleRequestT& request, const DescribeMaintenanceWindowScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribeMaintenanceWindowSchedule, request, handler, context);
        }

        /**
         * <p>Lists the targets registered with the maintenance window.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMaintenanceWindowTargetsOutcome DescribeMaintenanceWindowTargets(const Model::DescribeMaintenanceWindowTargetsRequest& request) const;

        /**
         * A Callable wrapper for DescribeMaintenanceWindowTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMaintenanceWindowTargetsRequestT = Model::DescribeMaintenanceWindowTargetsRequest>
        Model::DescribeMaintenanceWindowTargetsOutcomeCallable DescribeMaintenanceWindowTargetsCallable(const DescribeMaintenanceWindowTargetsRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribeMaintenanceWindowTargets, request);
        }

        /**
         * An Async wrapper for DescribeMaintenanceWindowTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMaintenanceWindowTargetsRequestT = Model::DescribeMaintenanceWindowTargetsRequest>
        void DescribeMaintenanceWindowTargetsAsync(const DescribeMaintenanceWindowTargetsRequestT& request, const DescribeMaintenanceWindowTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribeMaintenanceWindowTargets, request, handler, context);
        }

        /**
         * <p>Lists the tasks in a maintenance window.</p>  <p>For maintenance window
         * tasks without a specified target, you can't supply values for
         * <code>--max-errors</code> and <code>--max-concurrency</code>. Instead, the
         * system inserts a placeholder value of <code>1</code>, which may be reported in
         * the response to this command. These values don't affect the running of your task
         * and can be ignored.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMaintenanceWindowTasksOutcome DescribeMaintenanceWindowTasks(const Model::DescribeMaintenanceWindowTasksRequest& request) const;

        /**
         * A Callable wrapper for DescribeMaintenanceWindowTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMaintenanceWindowTasksRequestT = Model::DescribeMaintenanceWindowTasksRequest>
        Model::DescribeMaintenanceWindowTasksOutcomeCallable DescribeMaintenanceWindowTasksCallable(const DescribeMaintenanceWindowTasksRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribeMaintenanceWindowTasks, request);
        }

        /**
         * An Async wrapper for DescribeMaintenanceWindowTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMaintenanceWindowTasksRequestT = Model::DescribeMaintenanceWindowTasksRequest>
        void DescribeMaintenanceWindowTasksAsync(const DescribeMaintenanceWindowTasksRequestT& request, const DescribeMaintenanceWindowTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribeMaintenanceWindowTasks, request, handler, context);
        }

        /**
         * <p>Retrieves the maintenance windows in an Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindows">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMaintenanceWindowsOutcome DescribeMaintenanceWindows(const Model::DescribeMaintenanceWindowsRequest& request) const;

        /**
         * A Callable wrapper for DescribeMaintenanceWindows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMaintenanceWindowsRequestT = Model::DescribeMaintenanceWindowsRequest>
        Model::DescribeMaintenanceWindowsOutcomeCallable DescribeMaintenanceWindowsCallable(const DescribeMaintenanceWindowsRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribeMaintenanceWindows, request);
        }

        /**
         * An Async wrapper for DescribeMaintenanceWindows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMaintenanceWindowsRequestT = Model::DescribeMaintenanceWindowsRequest>
        void DescribeMaintenanceWindowsAsync(const DescribeMaintenanceWindowsRequestT& request, const DescribeMaintenanceWindowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribeMaintenanceWindows, request, handler, context);
        }

        /**
         * <p>Retrieves information about the maintenance window targets or tasks that a
         * managed node is associated with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowsForTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMaintenanceWindowsForTargetOutcome DescribeMaintenanceWindowsForTarget(const Model::DescribeMaintenanceWindowsForTargetRequest& request) const;

        /**
         * A Callable wrapper for DescribeMaintenanceWindowsForTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMaintenanceWindowsForTargetRequestT = Model::DescribeMaintenanceWindowsForTargetRequest>
        Model::DescribeMaintenanceWindowsForTargetOutcomeCallable DescribeMaintenanceWindowsForTargetCallable(const DescribeMaintenanceWindowsForTargetRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribeMaintenanceWindowsForTarget, request);
        }

        /**
         * An Async wrapper for DescribeMaintenanceWindowsForTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMaintenanceWindowsForTargetRequestT = Model::DescribeMaintenanceWindowsForTargetRequest>
        void DescribeMaintenanceWindowsForTargetAsync(const DescribeMaintenanceWindowsForTargetRequestT& request, const DescribeMaintenanceWindowsForTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribeMaintenanceWindowsForTarget, request, handler, context);
        }

        /**
         * <p>Query a set of OpsItems. You must have permission in Identity and Access
         * Management (IAM) to query a list of OpsItems. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-setup.html">Set
         * up OpsCenter</a> in the <i>Amazon Web Services Systems Manager User
         * Guide</i>.</p> <p>Operations engineers and IT professionals use Amazon Web
         * Services Systems Manager OpsCenter to view, investigate, and remediate
         * operational issues impacting the performance and health of their Amazon Web
         * Services resources. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">OpsCenter</a>
         * in the <i>Amazon Web Services Systems Manager User Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeOpsItems">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOpsItemsOutcome DescribeOpsItems(const Model::DescribeOpsItemsRequest& request) const;

        /**
         * A Callable wrapper for DescribeOpsItems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeOpsItemsRequestT = Model::DescribeOpsItemsRequest>
        Model::DescribeOpsItemsOutcomeCallable DescribeOpsItemsCallable(const DescribeOpsItemsRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribeOpsItems, request);
        }

        /**
         * An Async wrapper for DescribeOpsItems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOpsItemsRequestT = Model::DescribeOpsItemsRequest>
        void DescribeOpsItemsAsync(const DescribeOpsItemsRequestT& request, const DescribeOpsItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribeOpsItems, request, handler, context);
        }

        /**
         * <p>Get information about a parameter.</p> <p>Request results are returned on a
         * best-effort basis. If you specify <code>MaxResults</code> in the request, the
         * response includes information up to the limit specified. The number of items
         * returned, however, can be between zero and the value of <code>MaxResults</code>.
         * If the service reaches an internal limit while processing the results, it stops
         * the operation and returns the matching values up to that point and a
         * <code>NextToken</code>. You can specify the <code>NextToken</code> in a
         * subsequent call to get the next set of results.</p>  <p>If you change
         * the KMS key alias for the KMS key used to encrypt a parameter, then you must
         * also update the key alias the parameter uses to reference KMS. Otherwise,
         * <code>DescribeParameters</code> retrieves whatever the original key alias was
         * referencing.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeParametersOutcome DescribeParameters(const Model::DescribeParametersRequest& request) const;

        /**
         * A Callable wrapper for DescribeParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeParametersRequestT = Model::DescribeParametersRequest>
        Model::DescribeParametersOutcomeCallable DescribeParametersCallable(const DescribeParametersRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribeParameters, request);
        }

        /**
         * An Async wrapper for DescribeParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeParametersRequestT = Model::DescribeParametersRequest>
        void DescribeParametersAsync(const DescribeParametersRequestT& request, const DescribeParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribeParameters, request, handler, context);
        }

        /**
         * <p>Lists the patch baselines in your Amazon Web Services account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribePatchBaselines">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePatchBaselinesOutcome DescribePatchBaselines(const Model::DescribePatchBaselinesRequest& request) const;

        /**
         * A Callable wrapper for DescribePatchBaselines that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePatchBaselinesRequestT = Model::DescribePatchBaselinesRequest>
        Model::DescribePatchBaselinesOutcomeCallable DescribePatchBaselinesCallable(const DescribePatchBaselinesRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribePatchBaselines, request);
        }

        /**
         * An Async wrapper for DescribePatchBaselines that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePatchBaselinesRequestT = Model::DescribePatchBaselinesRequest>
        void DescribePatchBaselinesAsync(const DescribePatchBaselinesRequestT& request, const DescribePatchBaselinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribePatchBaselines, request, handler, context);
        }

        /**
         * <p>Returns high-level aggregated patch compliance state information for a patch
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribePatchGroupState">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePatchGroupStateOutcome DescribePatchGroupState(const Model::DescribePatchGroupStateRequest& request) const;

        /**
         * A Callable wrapper for DescribePatchGroupState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePatchGroupStateRequestT = Model::DescribePatchGroupStateRequest>
        Model::DescribePatchGroupStateOutcomeCallable DescribePatchGroupStateCallable(const DescribePatchGroupStateRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribePatchGroupState, request);
        }

        /**
         * An Async wrapper for DescribePatchGroupState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePatchGroupStateRequestT = Model::DescribePatchGroupStateRequest>
        void DescribePatchGroupStateAsync(const DescribePatchGroupStateRequestT& request, const DescribePatchGroupStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribePatchGroupState, request, handler, context);
        }

        /**
         * <p>Lists all patch groups that have been registered with patch
         * baselines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribePatchGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePatchGroupsOutcome DescribePatchGroups(const Model::DescribePatchGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribePatchGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePatchGroupsRequestT = Model::DescribePatchGroupsRequest>
        Model::DescribePatchGroupsOutcomeCallable DescribePatchGroupsCallable(const DescribePatchGroupsRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribePatchGroups, request);
        }

        /**
         * An Async wrapper for DescribePatchGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePatchGroupsRequestT = Model::DescribePatchGroupsRequest>
        void DescribePatchGroupsAsync(const DescribePatchGroupsRequestT& request, const DescribePatchGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribePatchGroups, request, handler, context);
        }

        /**
         * <p>Lists the properties of available patches organized by product, product
         * family, classification, severity, and other properties of available patches. You
         * can use the reported properties in the filters you specify in requests for
         * operations such as <a>CreatePatchBaseline</a>, <a>UpdatePatchBaseline</a>,
         * <a>DescribeAvailablePatches</a>, and <a>DescribePatchBaselines</a>.</p> <p>The
         * following section lists the properties that can be used in filters for each
         * major operating system type:</p> <dl> <dt>AMAZON_LINUX</dt> <dd> <p>Valid
         * properties: <code>PRODUCT</code> | <code>CLASSIFICATION</code> |
         * <code>SEVERITY</code> </p> </dd> <dt>AMAZON_LINUX_2</dt> <dd> <p>Valid
         * properties: <code>PRODUCT</code> | <code>CLASSIFICATION</code> |
         * <code>SEVERITY</code> </p> </dd> <dt>CENTOS</dt> <dd> <p>Valid properties:
         * <code>PRODUCT</code> | <code>CLASSIFICATION</code> | <code>SEVERITY</code> </p>
         * </dd> <dt>DEBIAN</dt> <dd> <p>Valid properties: <code>PRODUCT</code> |
         * <code>PRIORITY</code> </p> </dd> <dt>MACOS</dt> <dd> <p>Valid properties:
         * <code>PRODUCT</code> | <code>CLASSIFICATION</code> </p> </dd>
         * <dt>ORACLE_LINUX</dt> <dd> <p>Valid properties: <code>PRODUCT</code> |
         * <code>CLASSIFICATION</code> | <code>SEVERITY</code> </p> </dd>
         * <dt>REDHAT_ENTERPRISE_LINUX</dt> <dd> <p>Valid properties: <code>PRODUCT</code>
         * | <code>CLASSIFICATION</code> | <code>SEVERITY</code> </p> </dd> <dt>SUSE</dt>
         * <dd> <p>Valid properties: <code>PRODUCT</code> | <code>CLASSIFICATION</code> |
         * <code>SEVERITY</code> </p> </dd> <dt>UBUNTU</dt> <dd> <p>Valid properties:
         * <code>PRODUCT</code> | <code>PRIORITY</code> </p> </dd> <dt>WINDOWS</dt> <dd>
         * <p>Valid properties: <code>PRODUCT</code> | <code>PRODUCT_FAMILY</code> |
         * <code>CLASSIFICATION</code> | <code>MSRC_SEVERITY</code> </p> </dd>
         * </dl><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribePatchProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePatchPropertiesOutcome DescribePatchProperties(const Model::DescribePatchPropertiesRequest& request) const;

        /**
         * A Callable wrapper for DescribePatchProperties that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePatchPropertiesRequestT = Model::DescribePatchPropertiesRequest>
        Model::DescribePatchPropertiesOutcomeCallable DescribePatchPropertiesCallable(const DescribePatchPropertiesRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribePatchProperties, request);
        }

        /**
         * An Async wrapper for DescribePatchProperties that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePatchPropertiesRequestT = Model::DescribePatchPropertiesRequest>
        void DescribePatchPropertiesAsync(const DescribePatchPropertiesRequestT& request, const DescribePatchPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribePatchProperties, request, handler, context);
        }

        /**
         * <p>Retrieves a list of all active sessions (both connected and disconnected) or
         * terminated sessions from the past 30 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSessionsOutcome DescribeSessions(const Model::DescribeSessionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeSessions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSessionsRequestT = Model::DescribeSessionsRequest>
        Model::DescribeSessionsOutcomeCallable DescribeSessionsCallable(const DescribeSessionsRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DescribeSessions, request);
        }

        /**
         * An Async wrapper for DescribeSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSessionsRequestT = Model::DescribeSessionsRequest>
        void DescribeSessionsAsync(const DescribeSessionsRequestT& request, const DescribeSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DescribeSessions, request, handler, context);
        }

        /**
         * <p>Deletes the association between an OpsItem and a related item. For example,
         * this API operation can delete an Incident Manager incident from an OpsItem.
         * Incident Manager is a capability of Amazon Web Services Systems
         * Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DisassociateOpsItemRelatedItem">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateOpsItemRelatedItemOutcome DisassociateOpsItemRelatedItem(const Model::DisassociateOpsItemRelatedItemRequest& request) const;

        /**
         * A Callable wrapper for DisassociateOpsItemRelatedItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateOpsItemRelatedItemRequestT = Model::DisassociateOpsItemRelatedItemRequest>
        Model::DisassociateOpsItemRelatedItemOutcomeCallable DisassociateOpsItemRelatedItemCallable(const DisassociateOpsItemRelatedItemRequestT& request) const
        {
            return SubmitCallable(&SSMClient::DisassociateOpsItemRelatedItem, request);
        }

        /**
         * An Async wrapper for DisassociateOpsItemRelatedItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateOpsItemRelatedItemRequestT = Model::DisassociateOpsItemRelatedItemRequest>
        void DisassociateOpsItemRelatedItemAsync(const DisassociateOpsItemRelatedItemRequestT& request, const DisassociateOpsItemRelatedItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::DisassociateOpsItemRelatedItem, request, handler, context);
        }

        /**
         * <p>Get detailed information about a particular Automation
         * execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetAutomationExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAutomationExecutionOutcome GetAutomationExecution(const Model::GetAutomationExecutionRequest& request) const;

        /**
         * A Callable wrapper for GetAutomationExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAutomationExecutionRequestT = Model::GetAutomationExecutionRequest>
        Model::GetAutomationExecutionOutcomeCallable GetAutomationExecutionCallable(const GetAutomationExecutionRequestT& request) const
        {
            return SubmitCallable(&SSMClient::GetAutomationExecution, request);
        }

        /**
         * An Async wrapper for GetAutomationExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAutomationExecutionRequestT = Model::GetAutomationExecutionRequest>
        void GetAutomationExecutionAsync(const GetAutomationExecutionRequestT& request, const GetAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::GetAutomationExecution, request, handler, context);
        }

        /**
         * <p>Gets the state of a Amazon Web Services Systems Manager change calendar at
         * the current time or a specified time. If you specify a time,
         * <code>GetCalendarState</code> returns the state of the calendar at that specific
         * time, and returns the next time that the change calendar state will transition.
         * If you don't specify a time, <code>GetCalendarState</code> uses the current
         * time. Change Calendar entries have two possible states: <code>OPEN</code> or
         * <code>CLOSED</code>.</p> <p>If you specify more than one calendar in a request,
         * the command returns the status of <code>OPEN</code> only if all calendars in the
         * request are open. If one or more calendars in the request are closed, the status
         * returned is <code>CLOSED</code>.</p> <p>For more information about Change
         * Calendar, a capability of Amazon Web Services Systems Manager, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-change-calendar.html">Amazon
         * Web Services Systems Manager Change Calendar</a> in the <i>Amazon Web Services
         * Systems Manager User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetCalendarState">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCalendarStateOutcome GetCalendarState(const Model::GetCalendarStateRequest& request) const;

        /**
         * A Callable wrapper for GetCalendarState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCalendarStateRequestT = Model::GetCalendarStateRequest>
        Model::GetCalendarStateOutcomeCallable GetCalendarStateCallable(const GetCalendarStateRequestT& request) const
        {
            return SubmitCallable(&SSMClient::GetCalendarState, request);
        }

        /**
         * An Async wrapper for GetCalendarState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCalendarStateRequestT = Model::GetCalendarStateRequest>
        void GetCalendarStateAsync(const GetCalendarStateRequestT& request, const GetCalendarStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::GetCalendarState, request, handler, context);
        }

        /**
         * <p>Returns detailed information about command execution for an invocation or
         * plugin.</p> <p> <code>GetCommandInvocation</code> only gives the execution
         * status of a plugin in a document. To get the command execution status on a
         * specific managed node, use <a>ListCommandInvocations</a>. To get the command
         * execution status across managed nodes, use <a>ListCommands</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetCommandInvocation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCommandInvocationOutcome GetCommandInvocation(const Model::GetCommandInvocationRequest& request) const;

        /**
         * A Callable wrapper for GetCommandInvocation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCommandInvocationRequestT = Model::GetCommandInvocationRequest>
        Model::GetCommandInvocationOutcomeCallable GetCommandInvocationCallable(const GetCommandInvocationRequestT& request) const
        {
            return SubmitCallable(&SSMClient::GetCommandInvocation, request);
        }

        /**
         * An Async wrapper for GetCommandInvocation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCommandInvocationRequestT = Model::GetCommandInvocationRequest>
        void GetCommandInvocationAsync(const GetCommandInvocationRequestT& request, const GetCommandInvocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::GetCommandInvocation, request, handler, context);
        }

        /**
         * <p>Retrieves the Session Manager connection status for a managed node to
         * determine whether it is running and ready to receive Session Manager
         * connections.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetConnectionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectionStatusOutcome GetConnectionStatus(const Model::GetConnectionStatusRequest& request) const;

        /**
         * A Callable wrapper for GetConnectionStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConnectionStatusRequestT = Model::GetConnectionStatusRequest>
        Model::GetConnectionStatusOutcomeCallable GetConnectionStatusCallable(const GetConnectionStatusRequestT& request) const
        {
            return SubmitCallable(&SSMClient::GetConnectionStatus, request);
        }

        /**
         * An Async wrapper for GetConnectionStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConnectionStatusRequestT = Model::GetConnectionStatusRequest>
        void GetConnectionStatusAsync(const GetConnectionStatusRequestT& request, const GetConnectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::GetConnectionStatus, request, handler, context);
        }

        /**
         * <p>Retrieves the default patch baseline. Amazon Web Services Systems Manager
         * supports creating multiple default patch baselines. For example, you can create
         * a default patch baseline for each operating system.</p> <p>If you don't specify
         * an operating system value, the default patch baseline for Windows is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetDefaultPatchBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDefaultPatchBaselineOutcome GetDefaultPatchBaseline(const Model::GetDefaultPatchBaselineRequest& request) const;

        /**
         * A Callable wrapper for GetDefaultPatchBaseline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDefaultPatchBaselineRequestT = Model::GetDefaultPatchBaselineRequest>
        Model::GetDefaultPatchBaselineOutcomeCallable GetDefaultPatchBaselineCallable(const GetDefaultPatchBaselineRequestT& request) const
        {
            return SubmitCallable(&SSMClient::GetDefaultPatchBaseline, request);
        }

        /**
         * An Async wrapper for GetDefaultPatchBaseline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDefaultPatchBaselineRequestT = Model::GetDefaultPatchBaselineRequest>
        void GetDefaultPatchBaselineAsync(const GetDefaultPatchBaselineRequestT& request, const GetDefaultPatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::GetDefaultPatchBaseline, request, handler, context);
        }

        /**
         * <p>Retrieves the current snapshot for the patch baseline the managed node uses.
         * This API is primarily used by the <code>AWS-RunPatchBaseline</code> Systems
         * Manager document (SSM document).</p>  <p>If you run the command locally,
         * such as with the Command Line Interface (CLI), the system attempts to use your
         * local Amazon Web Services credentials and the operation fails. To avoid this,
         * you can run the command in the Amazon Web Services Systems Manager console. Use
         * Run Command, a capability of Amazon Web Services Systems Manager, with an SSM
         * document that enables you to target a managed node with a script or command. For
         * example, run the command using the <code>AWS-RunShellScript</code> document or
         * the <code>AWS-RunPowerShellScript</code> document.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetDeployablePatchSnapshotForInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeployablePatchSnapshotForInstanceOutcome GetDeployablePatchSnapshotForInstance(const Model::GetDeployablePatchSnapshotForInstanceRequest& request) const;

        /**
         * A Callable wrapper for GetDeployablePatchSnapshotForInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDeployablePatchSnapshotForInstanceRequestT = Model::GetDeployablePatchSnapshotForInstanceRequest>
        Model::GetDeployablePatchSnapshotForInstanceOutcomeCallable GetDeployablePatchSnapshotForInstanceCallable(const GetDeployablePatchSnapshotForInstanceRequestT& request) const
        {
            return SubmitCallable(&SSMClient::GetDeployablePatchSnapshotForInstance, request);
        }

        /**
         * An Async wrapper for GetDeployablePatchSnapshotForInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeployablePatchSnapshotForInstanceRequestT = Model::GetDeployablePatchSnapshotForInstanceRequest>
        void GetDeployablePatchSnapshotForInstanceAsync(const GetDeployablePatchSnapshotForInstanceRequestT& request, const GetDeployablePatchSnapshotForInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::GetDeployablePatchSnapshotForInstance, request, handler, context);
        }

        /**
         * <p>Gets the contents of the specified Amazon Web Services Systems Manager
         * document (SSM document).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetDocument">AWS API
         * Reference</a></p>
         */
        virtual Model::GetDocumentOutcome GetDocument(const Model::GetDocumentRequest& request) const;

        /**
         * A Callable wrapper for GetDocument that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDocumentRequestT = Model::GetDocumentRequest>
        Model::GetDocumentOutcomeCallable GetDocumentCallable(const GetDocumentRequestT& request) const
        {
            return SubmitCallable(&SSMClient::GetDocument, request);
        }

        /**
         * An Async wrapper for GetDocument that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDocumentRequestT = Model::GetDocumentRequest>
        void GetDocumentAsync(const GetDocumentRequestT& request, const GetDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::GetDocument, request, handler, context);
        }

        /**
         * <p>Query inventory information. This includes managed node status, such as
         * <code>Stopped</code> or <code>Terminated</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetInventory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInventoryOutcome GetInventory(const Model::GetInventoryRequest& request) const;

        /**
         * A Callable wrapper for GetInventory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInventoryRequestT = Model::GetInventoryRequest>
        Model::GetInventoryOutcomeCallable GetInventoryCallable(const GetInventoryRequestT& request) const
        {
            return SubmitCallable(&SSMClient::GetInventory, request);
        }

        /**
         * An Async wrapper for GetInventory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInventoryRequestT = Model::GetInventoryRequest>
        void GetInventoryAsync(const GetInventoryRequestT& request, const GetInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::GetInventory, request, handler, context);
        }

        /**
         * <p>Return a list of inventory type names for the account, or return a list of
         * attribute names for a specific Inventory item type.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetInventorySchema">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInventorySchemaOutcome GetInventorySchema(const Model::GetInventorySchemaRequest& request) const;

        /**
         * A Callable wrapper for GetInventorySchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInventorySchemaRequestT = Model::GetInventorySchemaRequest>
        Model::GetInventorySchemaOutcomeCallable GetInventorySchemaCallable(const GetInventorySchemaRequestT& request) const
        {
            return SubmitCallable(&SSMClient::GetInventorySchema, request);
        }

        /**
         * An Async wrapper for GetInventorySchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInventorySchemaRequestT = Model::GetInventorySchemaRequest>
        void GetInventorySchemaAsync(const GetInventorySchemaRequestT& request, const GetInventorySchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::GetInventorySchema, request, handler, context);
        }

        /**
         * <p>Retrieves a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMaintenanceWindowOutcome GetMaintenanceWindow(const Model::GetMaintenanceWindowRequest& request) const;

        /**
         * A Callable wrapper for GetMaintenanceWindow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMaintenanceWindowRequestT = Model::GetMaintenanceWindowRequest>
        Model::GetMaintenanceWindowOutcomeCallable GetMaintenanceWindowCallable(const GetMaintenanceWindowRequestT& request) const
        {
            return SubmitCallable(&SSMClient::GetMaintenanceWindow, request);
        }

        /**
         * An Async wrapper for GetMaintenanceWindow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMaintenanceWindowRequestT = Model::GetMaintenanceWindowRequest>
        void GetMaintenanceWindowAsync(const GetMaintenanceWindowRequestT& request, const GetMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::GetMaintenanceWindow, request, handler, context);
        }

        /**
         * <p>Retrieves details about a specific a maintenance window
         * execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindowExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMaintenanceWindowExecutionOutcome GetMaintenanceWindowExecution(const Model::GetMaintenanceWindowExecutionRequest& request) const;

        /**
         * A Callable wrapper for GetMaintenanceWindowExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMaintenanceWindowExecutionRequestT = Model::GetMaintenanceWindowExecutionRequest>
        Model::GetMaintenanceWindowExecutionOutcomeCallable GetMaintenanceWindowExecutionCallable(const GetMaintenanceWindowExecutionRequestT& request) const
        {
            return SubmitCallable(&SSMClient::GetMaintenanceWindowExecution, request);
        }

        /**
         * An Async wrapper for GetMaintenanceWindowExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMaintenanceWindowExecutionRequestT = Model::GetMaintenanceWindowExecutionRequest>
        void GetMaintenanceWindowExecutionAsync(const GetMaintenanceWindowExecutionRequestT& request, const GetMaintenanceWindowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::GetMaintenanceWindowExecution, request, handler, context);
        }

        /**
         * <p>Retrieves the details about a specific task run as part of a maintenance
         * window execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindowExecutionTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMaintenanceWindowExecutionTaskOutcome GetMaintenanceWindowExecutionTask(const Model::GetMaintenanceWindowExecutionTaskRequest& request) const;

        /**
         * A Callable wrapper for GetMaintenanceWindowExecutionTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMaintenanceWindowExecutionTaskRequestT = Model::GetMaintenanceWindowExecutionTaskRequest>
        Model::GetMaintenanceWindowExecutionTaskOutcomeCallable GetMaintenanceWindowExecutionTaskCallable(const GetMaintenanceWindowExecutionTaskRequestT& request) const
        {
            return SubmitCallable(&SSMClient::GetMaintenanceWindowExecutionTask, request);
        }

        /**
         * An Async wrapper for GetMaintenanceWindowExecutionTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMaintenanceWindowExecutionTaskRequestT = Model::GetMaintenanceWindowExecutionTaskRequest>
        void GetMaintenanceWindowExecutionTaskAsync(const GetMaintenanceWindowExecutionTaskRequestT& request, const GetMaintenanceWindowExecutionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::GetMaintenanceWindowExecutionTask, request, handler, context);
        }

        /**
         * <p>Retrieves information about a specific task running on a specific
         * target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindowExecutionTaskInvocation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMaintenanceWindowExecutionTaskInvocationOutcome GetMaintenanceWindowExecutionTaskInvocation(const Model::GetMaintenanceWindowExecutionTaskInvocationRequest& request) const;

        /**
         * A Callable wrapper for GetMaintenanceWindowExecutionTaskInvocation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMaintenanceWindowExecutionTaskInvocationRequestT = Model::GetMaintenanceWindowExecutionTaskInvocationRequest>
        Model::GetMaintenanceWindowExecutionTaskInvocationOutcomeCallable GetMaintenanceWindowExecutionTaskInvocationCallable(const GetMaintenanceWindowExecutionTaskInvocationRequestT& request) const
        {
            return SubmitCallable(&SSMClient::GetMaintenanceWindowExecutionTaskInvocation, request);
        }

        /**
         * An Async wrapper for GetMaintenanceWindowExecutionTaskInvocation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMaintenanceWindowExecutionTaskInvocationRequestT = Model::GetMaintenanceWindowExecutionTaskInvocationRequest>
        void GetMaintenanceWindowExecutionTaskInvocationAsync(const GetMaintenanceWindowExecutionTaskInvocationRequestT& request, const GetMaintenanceWindowExecutionTaskInvocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::GetMaintenanceWindowExecutionTaskInvocation, request, handler, context);
        }

        /**
         * <p>Retrieves the details of a maintenance window task.</p>  <p>For
         * maintenance window tasks without a specified target, you can't supply values for
         * <code>--max-errors</code> and <code>--max-concurrency</code>. Instead, the
         * system inserts a placeholder value of <code>1</code>, which may be reported in
         * the response to this command. These values don't affect the running of your task
         * and can be ignored.</p>  <p>To retrieve a list of tasks in a maintenance
         * window, instead use the <a>DescribeMaintenanceWindowTasks</a>
         * command.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindowTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMaintenanceWindowTaskOutcome GetMaintenanceWindowTask(const Model::GetMaintenanceWindowTaskRequest& request) const;

        /**
         * A Callable wrapper for GetMaintenanceWindowTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMaintenanceWindowTaskRequestT = Model::GetMaintenanceWindowTaskRequest>
        Model::GetMaintenanceWindowTaskOutcomeCallable GetMaintenanceWindowTaskCallable(const GetMaintenanceWindowTaskRequestT& request) const
        {
            return SubmitCallable(&SSMClient::GetMaintenanceWindowTask, request);
        }

        /**
         * An Async wrapper for GetMaintenanceWindowTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMaintenanceWindowTaskRequestT = Model::GetMaintenanceWindowTaskRequest>
        void GetMaintenanceWindowTaskAsync(const GetMaintenanceWindowTaskRequestT& request, const GetMaintenanceWindowTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::GetMaintenanceWindowTask, request, handler, context);
        }

        /**
         * <p>Get information about an OpsItem by using the ID. You must have permission in
         * Identity and Access Management (IAM) to view information about an OpsItem. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-setup.html">Set
         * up OpsCenter</a> in the <i>Amazon Web Services Systems Manager User
         * Guide</i>.</p> <p>Operations engineers and IT professionals use Amazon Web
         * Services Systems Manager OpsCenter to view, investigate, and remediate
         * operational issues impacting the performance and health of their Amazon Web
         * Services resources. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">OpsCenter</a>
         * in the <i>Amazon Web Services Systems Manager User Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetOpsItem">AWS API
         * Reference</a></p>
         */
        virtual Model::GetOpsItemOutcome GetOpsItem(const Model::GetOpsItemRequest& request) const;

        /**
         * A Callable wrapper for GetOpsItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOpsItemRequestT = Model::GetOpsItemRequest>
        Model::GetOpsItemOutcomeCallable GetOpsItemCallable(const GetOpsItemRequestT& request) const
        {
            return SubmitCallable(&SSMClient::GetOpsItem, request);
        }

        /**
         * An Async wrapper for GetOpsItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOpsItemRequestT = Model::GetOpsItemRequest>
        void GetOpsItemAsync(const GetOpsItemRequestT& request, const GetOpsItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::GetOpsItem, request, handler, context);
        }

        /**
         * <p>View operational metadata related to an application in Application
         * Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetOpsMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOpsMetadataOutcome GetOpsMetadata(const Model::GetOpsMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetOpsMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOpsMetadataRequestT = Model::GetOpsMetadataRequest>
        Model::GetOpsMetadataOutcomeCallable GetOpsMetadataCallable(const GetOpsMetadataRequestT& request) const
        {
            return SubmitCallable(&SSMClient::GetOpsMetadata, request);
        }

        /**
         * An Async wrapper for GetOpsMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOpsMetadataRequestT = Model::GetOpsMetadataRequest>
        void GetOpsMetadataAsync(const GetOpsMetadataRequestT& request, const GetOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::GetOpsMetadata, request, handler, context);
        }

        /**
         * <p>View a summary of operations metadata (OpsData) based on specified filters
         * and aggregators. OpsData can include information about Amazon Web Services
         * Systems Manager OpsCenter operational workitems (OpsItems) as well as
         * information about any Amazon Web Services resource or service configured to
         * report OpsData to Amazon Web Services Systems Manager Explorer. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetOpsSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOpsSummaryOutcome GetOpsSummary(const Model::GetOpsSummaryRequest& request) const;

        /**
         * A Callable wrapper for GetOpsSummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOpsSummaryRequestT = Model::GetOpsSummaryRequest>
        Model::GetOpsSummaryOutcomeCallable GetOpsSummaryCallable(const GetOpsSummaryRequestT& request) const
        {
            return SubmitCallable(&SSMClient::GetOpsSummary, request);
        }

        /**
         * An Async wrapper for GetOpsSummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOpsSummaryRequestT = Model::GetOpsSummaryRequest>
        void GetOpsSummaryAsync(const GetOpsSummaryRequestT& request, const GetOpsSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::GetOpsSummary, request, handler, context);
        }

        /**
         * <p>Get information about a single parameter by specifying the parameter
         * name.</p>  <p>To get information about more than one parameter at a time,
         * use the <a>GetParameters</a> operation.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParameter">AWS
         * API Reference</a></p>
         */
        virtual Model::GetParameterOutcome GetParameter(const Model::GetParameterRequest& request) const;

        /**
         * A Callable wrapper for GetParameter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetParameterRequestT = Model::GetParameterRequest>
        Model::GetParameterOutcomeCallable GetParameterCallable(const GetParameterRequestT& request) const
        {
            return SubmitCallable(&SSMClient::GetParameter, request);
        }

        /**
         * An Async wrapper for GetParameter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetParameterRequestT = Model::GetParameterRequest>
        void GetParameterAsync(const GetParameterRequestT& request, const GetParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::GetParameter, request, handler, context);
        }

        /**
         * <p>Retrieves the history of all changes to a parameter.</p>  <p>If
         * you change the KMS key alias for the KMS key used to encrypt a parameter, then
         * you must also update the key alias the parameter uses to reference KMS.
         * Otherwise, <code>GetParameterHistory</code> retrieves whatever the original key
         * alias was referencing.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParameterHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetParameterHistoryOutcome GetParameterHistory(const Model::GetParameterHistoryRequest& request) const;

        /**
         * A Callable wrapper for GetParameterHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetParameterHistoryRequestT = Model::GetParameterHistoryRequest>
        Model::GetParameterHistoryOutcomeCallable GetParameterHistoryCallable(const GetParameterHistoryRequestT& request) const
        {
            return SubmitCallable(&SSMClient::GetParameterHistory, request);
        }

        /**
         * An Async wrapper for GetParameterHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetParameterHistoryRequestT = Model::GetParameterHistoryRequest>
        void GetParameterHistoryAsync(const GetParameterHistoryRequestT& request, const GetParameterHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::GetParameterHistory, request, handler, context);
        }

        /**
         * <p>Get information about one or more parameters by specifying multiple parameter
         * names.</p>  <p>To get information about a single parameter, you can use
         * the <a>GetParameter</a> operation instead.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::GetParametersOutcome GetParameters(const Model::GetParametersRequest& request) const;

        /**
         * A Callable wrapper for GetParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetParametersRequestT = Model::GetParametersRequest>
        Model::GetParametersOutcomeCallable GetParametersCallable(const GetParametersRequestT& request) const
        {
            return SubmitCallable(&SSMClient::GetParameters, request);
        }

        /**
         * An Async wrapper for GetParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetParametersRequestT = Model::GetParametersRequest>
        void GetParametersAsync(const GetParametersRequestT& request, const GetParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::GetParameters, request, handler, context);
        }

        /**
         * <p>Retrieve information about one or more parameters in a specific hierarchy.
         * </p> <p>Request results are returned on a best-effort basis. If you specify
         * <code>MaxResults</code> in the request, the response includes information up to
         * the limit specified. The number of items returned, however, can be between zero
         * and the value of <code>MaxResults</code>. If the service reaches an internal
         * limit while processing the results, it stops the operation and returns the
         * matching values up to that point and a <code>NextToken</code>. You can specify
         * the <code>NextToken</code> in a subsequent call to get the next set of
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParametersByPath">AWS
         * API Reference</a></p>
         */
        virtual Model::GetParametersByPathOutcome GetParametersByPath(const Model::GetParametersByPathRequest& request) const;

        /**
         * A Callable wrapper for GetParametersByPath that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetParametersByPathRequestT = Model::GetParametersByPathRequest>
        Model::GetParametersByPathOutcomeCallable GetParametersByPathCallable(const GetParametersByPathRequestT& request) const
        {
            return SubmitCallable(&SSMClient::GetParametersByPath, request);
        }

        /**
         * An Async wrapper for GetParametersByPath that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetParametersByPathRequestT = Model::GetParametersByPathRequest>
        void GetParametersByPathAsync(const GetParametersByPathRequestT& request, const GetParametersByPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::GetParametersByPath, request, handler, context);
        }

        /**
         * <p>Retrieves information about a patch baseline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetPatchBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPatchBaselineOutcome GetPatchBaseline(const Model::GetPatchBaselineRequest& request) const;

        /**
         * A Callable wrapper for GetPatchBaseline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPatchBaselineRequestT = Model::GetPatchBaselineRequest>
        Model::GetPatchBaselineOutcomeCallable GetPatchBaselineCallable(const GetPatchBaselineRequestT& request) const
        {
            return SubmitCallable(&SSMClient::GetPatchBaseline, request);
        }

        /**
         * An Async wrapper for GetPatchBaseline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPatchBaselineRequestT = Model::GetPatchBaselineRequest>
        void GetPatchBaselineAsync(const GetPatchBaselineRequestT& request, const GetPatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::GetPatchBaseline, request, handler, context);
        }

        /**
         * <p>Retrieves the patch baseline that should be used for the specified patch
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetPatchBaselineForPatchGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPatchBaselineForPatchGroupOutcome GetPatchBaselineForPatchGroup(const Model::GetPatchBaselineForPatchGroupRequest& request) const;

        /**
         * A Callable wrapper for GetPatchBaselineForPatchGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPatchBaselineForPatchGroupRequestT = Model::GetPatchBaselineForPatchGroupRequest>
        Model::GetPatchBaselineForPatchGroupOutcomeCallable GetPatchBaselineForPatchGroupCallable(const GetPatchBaselineForPatchGroupRequestT& request) const
        {
            return SubmitCallable(&SSMClient::GetPatchBaselineForPatchGroup, request);
        }

        /**
         * An Async wrapper for GetPatchBaselineForPatchGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPatchBaselineForPatchGroupRequestT = Model::GetPatchBaselineForPatchGroupRequest>
        void GetPatchBaselineForPatchGroupAsync(const GetPatchBaselineForPatchGroupRequestT& request, const GetPatchBaselineForPatchGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::GetPatchBaselineForPatchGroup, request, handler, context);
        }

        /**
         * <p>Returns an array of the <code>Policy</code> object.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetResourcePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePoliciesOutcome GetResourcePolicies(const Model::GetResourcePoliciesRequest& request) const;

        /**
         * A Callable wrapper for GetResourcePolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourcePoliciesRequestT = Model::GetResourcePoliciesRequest>
        Model::GetResourcePoliciesOutcomeCallable GetResourcePoliciesCallable(const GetResourcePoliciesRequestT& request) const
        {
            return SubmitCallable(&SSMClient::GetResourcePolicies, request);
        }

        /**
         * An Async wrapper for GetResourcePolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourcePoliciesRequestT = Model::GetResourcePoliciesRequest>
        void GetResourcePoliciesAsync(const GetResourcePoliciesRequestT& request, const GetResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::GetResourcePolicies, request, handler, context);
        }

        /**
         * <p> <code>ServiceSetting</code> is an account-level setting for an Amazon Web
         * Services service. This setting defines how a user interacts with or uses a
         * service or a feature of a service. For example, if an Amazon Web Services
         * service charges money to the account based on feature or service usage, then the
         * Amazon Web Services service team might create a default setting of
         * <code>false</code>. This means the user can't use this feature unless they
         * change the setting to <code>true</code> and intentionally opt in for a paid
         * feature.</p> <p>Services map a <code>SettingId</code> object to a setting value.
         * Amazon Web Services services teams define the default value for a
         * <code>SettingId</code>. You can't create a new <code>SettingId</code>, but you
         * can overwrite the default value if you have the
         * <code>ssm:UpdateServiceSetting</code> permission for the setting. Use the
         * <a>UpdateServiceSetting</a> API operation to change the default setting. Or use
         * the <a>ResetServiceSetting</a> to change the value back to the original value
         * defined by the Amazon Web Services service team.</p> <p>Query the current
         * service setting for the Amazon Web Services account. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetServiceSetting">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceSettingOutcome GetServiceSetting(const Model::GetServiceSettingRequest& request) const;

        /**
         * A Callable wrapper for GetServiceSetting that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetServiceSettingRequestT = Model::GetServiceSettingRequest>
        Model::GetServiceSettingOutcomeCallable GetServiceSettingCallable(const GetServiceSettingRequestT& request) const
        {
            return SubmitCallable(&SSMClient::GetServiceSetting, request);
        }

        /**
         * An Async wrapper for GetServiceSetting that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetServiceSettingRequestT = Model::GetServiceSettingRequest>
        void GetServiceSettingAsync(const GetServiceSettingRequestT& request, const GetServiceSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::GetServiceSetting, request, handler, context);
        }

        /**
         * <p>A parameter label is a user-defined alias to help you manage different
         * versions of a parameter. When you modify a parameter, Amazon Web Services
         * Systems Manager automatically saves a new version and increments the version
         * number by one. A label can help you remember the purpose of a parameter when
         * there are multiple versions. </p> <p>Parameter labels have the following
         * requirements and restrictions.</p> <ul> <li> <p>A version of a parameter can
         * have a maximum of 10 labels.</p> </li> <li> <p>You can't attach the same label
         * to different versions of the same parameter. For example, if version 1 has the
         * label Production, then you can't attach Production to version 2.</p> </li> <li>
         * <p>You can move a label from one version of a parameter to another.</p> </li>
         * <li> <p>You can't create a label when you create a new parameter. You must
         * attach a label to a specific version of a parameter.</p> </li> <li> <p>If you no
         * longer want to use a parameter label, then you can either delete it or move it
         * to a different version of a parameter.</p> </li> <li> <p>A label can have a
         * maximum of 100 characters.</p> </li> <li> <p>Labels can contain letters (case
         * sensitive), numbers, periods (.), hyphens (-), or underscores (_).</p> </li>
         * <li> <p>Labels can't begin with a number, "<code>aws</code>" or
         * "<code>ssm</code>" (not case sensitive). If a label fails to meet these
         * requirements, then the label isn't associated with a parameter and the system
         * displays it in the list of InvalidLabels.</p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/LabelParameterVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::LabelParameterVersionOutcome LabelParameterVersion(const Model::LabelParameterVersionRequest& request) const;

        /**
         * A Callable wrapper for LabelParameterVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename LabelParameterVersionRequestT = Model::LabelParameterVersionRequest>
        Model::LabelParameterVersionOutcomeCallable LabelParameterVersionCallable(const LabelParameterVersionRequestT& request) const
        {
            return SubmitCallable(&SSMClient::LabelParameterVersion, request);
        }

        /**
         * An Async wrapper for LabelParameterVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename LabelParameterVersionRequestT = Model::LabelParameterVersionRequest>
        void LabelParameterVersionAsync(const LabelParameterVersionRequestT& request, const LabelParameterVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::LabelParameterVersion, request, handler, context);
        }

        /**
         * <p>Retrieves all versions of an association for a specific association
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListAssociationVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociationVersionsOutcome ListAssociationVersions(const Model::ListAssociationVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListAssociationVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAssociationVersionsRequestT = Model::ListAssociationVersionsRequest>
        Model::ListAssociationVersionsOutcomeCallable ListAssociationVersionsCallable(const ListAssociationVersionsRequestT& request) const
        {
            return SubmitCallable(&SSMClient::ListAssociationVersions, request);
        }

        /**
         * An Async wrapper for ListAssociationVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssociationVersionsRequestT = Model::ListAssociationVersionsRequest>
        void ListAssociationVersionsAsync(const ListAssociationVersionsRequestT& request, const ListAssociationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::ListAssociationVersions, request, handler, context);
        }

        /**
         * <p>Returns all State Manager associations in the current Amazon Web Services
         * account and Amazon Web Services Region. You can limit the results to a specific
         * State Manager association document or managed node by specifying a filter. State
         * Manager is a capability of Amazon Web Services Systems Manager.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociationsOutcome ListAssociations(const Model::ListAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAssociationsRequestT = Model::ListAssociationsRequest>
        Model::ListAssociationsOutcomeCallable ListAssociationsCallable(const ListAssociationsRequestT& request) const
        {
            return SubmitCallable(&SSMClient::ListAssociations, request);
        }

        /**
         * An Async wrapper for ListAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssociationsRequestT = Model::ListAssociationsRequest>
        void ListAssociationsAsync(const ListAssociationsRequestT& request, const ListAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::ListAssociations, request, handler, context);
        }

        /**
         * <p>An invocation is copy of a command sent to a specific managed node. A command
         * can apply to one or more managed nodes. A command invocation applies to one
         * managed node. For example, if a user runs <code>SendCommand</code> against three
         * managed nodes, then a command invocation is created for each requested managed
         * node ID. <code>ListCommandInvocations</code> provide status about command
         * execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListCommandInvocations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCommandInvocationsOutcome ListCommandInvocations(const Model::ListCommandInvocationsRequest& request) const;

        /**
         * A Callable wrapper for ListCommandInvocations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCommandInvocationsRequestT = Model::ListCommandInvocationsRequest>
        Model::ListCommandInvocationsOutcomeCallable ListCommandInvocationsCallable(const ListCommandInvocationsRequestT& request) const
        {
            return SubmitCallable(&SSMClient::ListCommandInvocations, request);
        }

        /**
         * An Async wrapper for ListCommandInvocations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCommandInvocationsRequestT = Model::ListCommandInvocationsRequest>
        void ListCommandInvocationsAsync(const ListCommandInvocationsRequestT& request, const ListCommandInvocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::ListCommandInvocations, request, handler, context);
        }

        /**
         * <p>Lists the commands requested by users of the Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListCommands">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCommandsOutcome ListCommands(const Model::ListCommandsRequest& request) const;

        /**
         * A Callable wrapper for ListCommands that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCommandsRequestT = Model::ListCommandsRequest>
        Model::ListCommandsOutcomeCallable ListCommandsCallable(const ListCommandsRequestT& request) const
        {
            return SubmitCallable(&SSMClient::ListCommands, request);
        }

        /**
         * An Async wrapper for ListCommands that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCommandsRequestT = Model::ListCommandsRequest>
        void ListCommandsAsync(const ListCommandsRequestT& request, const ListCommandsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::ListCommands, request, handler, context);
        }

        /**
         * <p>For a specified resource ID, this API operation returns a list of compliance
         * statuses for different resource types. Currently, you can only specify one
         * resource ID per call. List results depend on the criteria specified in the
         * filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListComplianceItems">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComplianceItemsOutcome ListComplianceItems(const Model::ListComplianceItemsRequest& request) const;

        /**
         * A Callable wrapper for ListComplianceItems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListComplianceItemsRequestT = Model::ListComplianceItemsRequest>
        Model::ListComplianceItemsOutcomeCallable ListComplianceItemsCallable(const ListComplianceItemsRequestT& request) const
        {
            return SubmitCallable(&SSMClient::ListComplianceItems, request);
        }

        /**
         * An Async wrapper for ListComplianceItems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListComplianceItemsRequestT = Model::ListComplianceItemsRequest>
        void ListComplianceItemsAsync(const ListComplianceItemsRequestT& request, const ListComplianceItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::ListComplianceItems, request, handler, context);
        }

        /**
         * <p>Returns a summary count of compliant and non-compliant resources for a
         * compliance type. For example, this call can return State Manager associations,
         * patches, or custom compliance types according to the filter criteria that you
         * specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListComplianceSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComplianceSummariesOutcome ListComplianceSummaries(const Model::ListComplianceSummariesRequest& request) const;

        /**
         * A Callable wrapper for ListComplianceSummaries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListComplianceSummariesRequestT = Model::ListComplianceSummariesRequest>
        Model::ListComplianceSummariesOutcomeCallable ListComplianceSummariesCallable(const ListComplianceSummariesRequestT& request) const
        {
            return SubmitCallable(&SSMClient::ListComplianceSummaries, request);
        }

        /**
         * An Async wrapper for ListComplianceSummaries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListComplianceSummariesRequestT = Model::ListComplianceSummariesRequest>
        void ListComplianceSummariesAsync(const ListComplianceSummariesRequestT& request, const ListComplianceSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::ListComplianceSummaries, request, handler, context);
        }

        /**
         * <p>Information about approval reviews for a version of a change template in
         * Change Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListDocumentMetadataHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDocumentMetadataHistoryOutcome ListDocumentMetadataHistory(const Model::ListDocumentMetadataHistoryRequest& request) const;

        /**
         * A Callable wrapper for ListDocumentMetadataHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDocumentMetadataHistoryRequestT = Model::ListDocumentMetadataHistoryRequest>
        Model::ListDocumentMetadataHistoryOutcomeCallable ListDocumentMetadataHistoryCallable(const ListDocumentMetadataHistoryRequestT& request) const
        {
            return SubmitCallable(&SSMClient::ListDocumentMetadataHistory, request);
        }

        /**
         * An Async wrapper for ListDocumentMetadataHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDocumentMetadataHistoryRequestT = Model::ListDocumentMetadataHistoryRequest>
        void ListDocumentMetadataHistoryAsync(const ListDocumentMetadataHistoryRequestT& request, const ListDocumentMetadataHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::ListDocumentMetadataHistory, request, handler, context);
        }

        /**
         * <p>List all versions for a document.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListDocumentVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDocumentVersionsOutcome ListDocumentVersions(const Model::ListDocumentVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListDocumentVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDocumentVersionsRequestT = Model::ListDocumentVersionsRequest>
        Model::ListDocumentVersionsOutcomeCallable ListDocumentVersionsCallable(const ListDocumentVersionsRequestT& request) const
        {
            return SubmitCallable(&SSMClient::ListDocumentVersions, request);
        }

        /**
         * An Async wrapper for ListDocumentVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDocumentVersionsRequestT = Model::ListDocumentVersionsRequest>
        void ListDocumentVersionsAsync(const ListDocumentVersionsRequestT& request, const ListDocumentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::ListDocumentVersions, request, handler, context);
        }

        /**
         * <p>Returns all Systems Manager (SSM) documents in the current Amazon Web
         * Services account and Amazon Web Services Region. You can limit the results of
         * this request by using a filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListDocuments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDocumentsOutcome ListDocuments(const Model::ListDocumentsRequest& request) const;

        /**
         * A Callable wrapper for ListDocuments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDocumentsRequestT = Model::ListDocumentsRequest>
        Model::ListDocumentsOutcomeCallable ListDocumentsCallable(const ListDocumentsRequestT& request) const
        {
            return SubmitCallable(&SSMClient::ListDocuments, request);
        }

        /**
         * An Async wrapper for ListDocuments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDocumentsRequestT = Model::ListDocumentsRequest>
        void ListDocumentsAsync(const ListDocumentsRequestT& request, const ListDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::ListDocuments, request, handler, context);
        }

        /**
         * <p>A list of inventory items returned by the request.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListInventoryEntries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInventoryEntriesOutcome ListInventoryEntries(const Model::ListInventoryEntriesRequest& request) const;

        /**
         * A Callable wrapper for ListInventoryEntries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInventoryEntriesRequestT = Model::ListInventoryEntriesRequest>
        Model::ListInventoryEntriesOutcomeCallable ListInventoryEntriesCallable(const ListInventoryEntriesRequestT& request) const
        {
            return SubmitCallable(&SSMClient::ListInventoryEntries, request);
        }

        /**
         * An Async wrapper for ListInventoryEntries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInventoryEntriesRequestT = Model::ListInventoryEntriesRequest>
        void ListInventoryEntriesAsync(const ListInventoryEntriesRequestT& request, const ListInventoryEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::ListInventoryEntries, request, handler, context);
        }

        /**
         * <p>Returns a list of all OpsItem events in the current Amazon Web Services
         * Region and Amazon Web Services account. You can limit the results to events
         * associated with specific OpsItems by specifying a filter.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListOpsItemEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOpsItemEventsOutcome ListOpsItemEvents(const Model::ListOpsItemEventsRequest& request) const;

        /**
         * A Callable wrapper for ListOpsItemEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOpsItemEventsRequestT = Model::ListOpsItemEventsRequest>
        Model::ListOpsItemEventsOutcomeCallable ListOpsItemEventsCallable(const ListOpsItemEventsRequestT& request) const
        {
            return SubmitCallable(&SSMClient::ListOpsItemEvents, request);
        }

        /**
         * An Async wrapper for ListOpsItemEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOpsItemEventsRequestT = Model::ListOpsItemEventsRequest>
        void ListOpsItemEventsAsync(const ListOpsItemEventsRequestT& request, const ListOpsItemEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::ListOpsItemEvents, request, handler, context);
        }

        /**
         * <p>Lists all related-item resources associated with a Systems Manager OpsCenter
         * OpsItem. OpsCenter is a capability of Amazon Web Services Systems
         * Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListOpsItemRelatedItems">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOpsItemRelatedItemsOutcome ListOpsItemRelatedItems(const Model::ListOpsItemRelatedItemsRequest& request) const;

        /**
         * A Callable wrapper for ListOpsItemRelatedItems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOpsItemRelatedItemsRequestT = Model::ListOpsItemRelatedItemsRequest>
        Model::ListOpsItemRelatedItemsOutcomeCallable ListOpsItemRelatedItemsCallable(const ListOpsItemRelatedItemsRequestT& request) const
        {
            return SubmitCallable(&SSMClient::ListOpsItemRelatedItems, request);
        }

        /**
         * An Async wrapper for ListOpsItemRelatedItems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOpsItemRelatedItemsRequestT = Model::ListOpsItemRelatedItemsRequest>
        void ListOpsItemRelatedItemsAsync(const ListOpsItemRelatedItemsRequestT& request, const ListOpsItemRelatedItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::ListOpsItemRelatedItems, request, handler, context);
        }

        /**
         * <p>Amazon Web Services Systems Manager calls this API operation when displaying
         * all Application Manager OpsMetadata objects or blobs.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListOpsMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOpsMetadataOutcome ListOpsMetadata(const Model::ListOpsMetadataRequest& request) const;

        /**
         * A Callable wrapper for ListOpsMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOpsMetadataRequestT = Model::ListOpsMetadataRequest>
        Model::ListOpsMetadataOutcomeCallable ListOpsMetadataCallable(const ListOpsMetadataRequestT& request) const
        {
            return SubmitCallable(&SSMClient::ListOpsMetadata, request);
        }

        /**
         * An Async wrapper for ListOpsMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOpsMetadataRequestT = Model::ListOpsMetadataRequest>
        void ListOpsMetadataAsync(const ListOpsMetadataRequestT& request, const ListOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::ListOpsMetadata, request, handler, context);
        }

        /**
         * <p>Returns a resource-level summary count. The summary includes information
         * about compliant and non-compliant statuses and detailed compliance-item severity
         * counts, according to the filter criteria you specify.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListResourceComplianceSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceComplianceSummariesOutcome ListResourceComplianceSummaries(const Model::ListResourceComplianceSummariesRequest& request) const;

        /**
         * A Callable wrapper for ListResourceComplianceSummaries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResourceComplianceSummariesRequestT = Model::ListResourceComplianceSummariesRequest>
        Model::ListResourceComplianceSummariesOutcomeCallable ListResourceComplianceSummariesCallable(const ListResourceComplianceSummariesRequestT& request) const
        {
            return SubmitCallable(&SSMClient::ListResourceComplianceSummaries, request);
        }

        /**
         * An Async wrapper for ListResourceComplianceSummaries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResourceComplianceSummariesRequestT = Model::ListResourceComplianceSummariesRequest>
        void ListResourceComplianceSummariesAsync(const ListResourceComplianceSummariesRequestT& request, const ListResourceComplianceSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::ListResourceComplianceSummaries, request, handler, context);
        }

        /**
         * <p>Lists your resource data sync configurations. Includes information about the
         * last time a sync attempted to start, the last sync status, and the last time a
         * sync successfully completed.</p> <p>The number of sync configurations might be
         * too large to return using a single call to <code>ListResourceDataSync</code>.
         * You can limit the number of sync configurations returned by using the
         * <code>MaxResults</code> parameter. To determine whether there are more sync
         * configurations to list, check the value of <code>NextToken</code> in the output.
         * If there are more sync configurations to list, you can request them by
         * specifying the <code>NextToken</code> returned in the call to the parameter of a
         * subsequent call. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListResourceDataSync">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceDataSyncOutcome ListResourceDataSync(const Model::ListResourceDataSyncRequest& request) const;

        /**
         * A Callable wrapper for ListResourceDataSync that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResourceDataSyncRequestT = Model::ListResourceDataSyncRequest>
        Model::ListResourceDataSyncOutcomeCallable ListResourceDataSyncCallable(const ListResourceDataSyncRequestT& request) const
        {
            return SubmitCallable(&SSMClient::ListResourceDataSync, request);
        }

        /**
         * An Async wrapper for ListResourceDataSync that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResourceDataSyncRequestT = Model::ListResourceDataSyncRequest>
        void ListResourceDataSyncAsync(const ListResourceDataSyncRequestT& request, const ListResourceDataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::ListResourceDataSync, request, handler, context);
        }

        /**
         * <p>Returns a list of the tags assigned to the specified resource.</p> <p>For
         * information about the ID format for each supported resource type, see
         * <a>AddTagsToResource</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&SSMClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Shares a Amazon Web Services Systems Manager document (SSM document)publicly
         * or privately. If you share a document privately, you must specify the Amazon Web
         * Services user IDs for those people who can use the document. If you share a
         * document publicly, you must specify <i>All</i> as the account ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ModifyDocumentPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDocumentPermissionOutcome ModifyDocumentPermission(const Model::ModifyDocumentPermissionRequest& request) const;

        /**
         * A Callable wrapper for ModifyDocumentPermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyDocumentPermissionRequestT = Model::ModifyDocumentPermissionRequest>
        Model::ModifyDocumentPermissionOutcomeCallable ModifyDocumentPermissionCallable(const ModifyDocumentPermissionRequestT& request) const
        {
            return SubmitCallable(&SSMClient::ModifyDocumentPermission, request);
        }

        /**
         * An Async wrapper for ModifyDocumentPermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyDocumentPermissionRequestT = Model::ModifyDocumentPermissionRequest>
        void ModifyDocumentPermissionAsync(const ModifyDocumentPermissionRequestT& request, const ModifyDocumentPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::ModifyDocumentPermission, request, handler, context);
        }

        /**
         * <p>Registers a compliance type and other compliance details on a designated
         * resource. This operation lets you register custom compliance details with a
         * resource. This call overwrites existing compliance information on the resource,
         * so you must provide a full list of compliance items each time that you send the
         * request.</p> <p>ComplianceType can be one of the following:</p> <ul> <li>
         * <p>ExecutionId: The execution ID when the patch, association, or custom
         * compliance item was applied.</p> </li> <li> <p>ExecutionType: Specify patch,
         * association, or Custom:<code>string</code>.</p> </li> <li> <p>ExecutionTime. The
         * time the patch, association, or custom compliance item was applied to the
         * managed node.</p> </li> <li> <p>Id: The patch, association, or custom compliance
         * ID.</p> </li> <li> <p>Title: A title.</p> </li> <li> <p>Status: The status of
         * the compliance item. For example, <code>approved</code> for patches, or
         * <code>Failed</code> for associations.</p> </li> <li> <p>Severity: A patch
         * severity. For example, <code>Critical</code>.</p> </li> <li> <p>DocumentName: An
         * SSM document name. For example, <code>AWS-RunPatchBaseline</code>.</p> </li>
         * <li> <p>DocumentVersion: An SSM document version number. For example, 4.</p>
         * </li> <li> <p>Classification: A patch classification. For example,
         * <code>security updates</code>.</p> </li> <li> <p>PatchBaselineId: A patch
         * baseline ID.</p> </li> <li> <p>PatchSeverity: A patch severity. For example,
         * <code>Critical</code>.</p> </li> <li> <p>PatchState: A patch state. For example,
         * <code>InstancesWithFailedPatches</code>.</p> </li> <li> <p>PatchGroup: The name
         * of a patch group.</p> </li> <li> <p>InstalledTime: The time the association,
         * patch, or custom compliance item was applied to the resource. Specify the time
         * by using the following format: yyyy-MM-dd'T'HH:mm:ss'Z'</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PutComplianceItems">AWS
         * API Reference</a></p>
         */
        virtual Model::PutComplianceItemsOutcome PutComplianceItems(const Model::PutComplianceItemsRequest& request) const;

        /**
         * A Callable wrapper for PutComplianceItems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutComplianceItemsRequestT = Model::PutComplianceItemsRequest>
        Model::PutComplianceItemsOutcomeCallable PutComplianceItemsCallable(const PutComplianceItemsRequestT& request) const
        {
            return SubmitCallable(&SSMClient::PutComplianceItems, request);
        }

        /**
         * An Async wrapper for PutComplianceItems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutComplianceItemsRequestT = Model::PutComplianceItemsRequest>
        void PutComplianceItemsAsync(const PutComplianceItemsRequestT& request, const PutComplianceItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::PutComplianceItems, request, handler, context);
        }

        /**
         * <p>Bulk update custom inventory items on one or more managed nodes. The request
         * adds an inventory item, if it doesn't already exist, or updates an inventory
         * item, if it does exist.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PutInventory">AWS
         * API Reference</a></p>
         */
        virtual Model::PutInventoryOutcome PutInventory(const Model::PutInventoryRequest& request) const;

        /**
         * A Callable wrapper for PutInventory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutInventoryRequestT = Model::PutInventoryRequest>
        Model::PutInventoryOutcomeCallable PutInventoryCallable(const PutInventoryRequestT& request) const
        {
            return SubmitCallable(&SSMClient::PutInventory, request);
        }

        /**
         * An Async wrapper for PutInventory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutInventoryRequestT = Model::PutInventoryRequest>
        void PutInventoryAsync(const PutInventoryRequestT& request, const PutInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::PutInventory, request, handler, context);
        }

        /**
         * <p>Add a parameter to the system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PutParameter">AWS
         * API Reference</a></p>
         */
        virtual Model::PutParameterOutcome PutParameter(const Model::PutParameterRequest& request) const;

        /**
         * A Callable wrapper for PutParameter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutParameterRequestT = Model::PutParameterRequest>
        Model::PutParameterOutcomeCallable PutParameterCallable(const PutParameterRequestT& request) const
        {
            return SubmitCallable(&SSMClient::PutParameter, request);
        }

        /**
         * An Async wrapper for PutParameter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutParameterRequestT = Model::PutParameterRequest>
        void PutParameterAsync(const PutParameterRequestT& request, const PutParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::PutParameter, request, handler, context);
        }

        /**
         * <p>Creates or updates a Systems Manager resource policy. A resource policy helps
         * you to define the IAM entity (for example, an Amazon Web Services account) that
         * can manage your Systems Manager resources. Currently, <code>OpsItemGroup</code>
         * is the only resource that supports Systems Manager resource policies. The
         * resource policy for <code>OpsItemGroup</code> enables Amazon Web Services
         * accounts to view and interact with OpsCenter operational work items
         * (OpsItems).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const PutResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&SSMClient::PutResourcePolicy, request);
        }

        /**
         * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        void PutResourcePolicyAsync(const PutResourcePolicyRequestT& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::PutResourcePolicy, request, handler, context);
        }

        /**
         * <p>Defines the default patch baseline for the relevant operating system.</p>
         * <p>To reset the Amazon Web Services-predefined patch baseline as the default,
         * specify the full patch baseline Amazon Resource Name (ARN) as the baseline ID
         * value. For example, for CentOS, specify
         * <code>arn:aws:ssm:us-east-2:733109147000:patchbaseline/pb-0574b43a65ea646ed</code>
         * instead of <code>pb-0574b43a65ea646ed</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RegisterDefaultPatchBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterDefaultPatchBaselineOutcome RegisterDefaultPatchBaseline(const Model::RegisterDefaultPatchBaselineRequest& request) const;

        /**
         * A Callable wrapper for RegisterDefaultPatchBaseline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterDefaultPatchBaselineRequestT = Model::RegisterDefaultPatchBaselineRequest>
        Model::RegisterDefaultPatchBaselineOutcomeCallable RegisterDefaultPatchBaselineCallable(const RegisterDefaultPatchBaselineRequestT& request) const
        {
            return SubmitCallable(&SSMClient::RegisterDefaultPatchBaseline, request);
        }

        /**
         * An Async wrapper for RegisterDefaultPatchBaseline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterDefaultPatchBaselineRequestT = Model::RegisterDefaultPatchBaselineRequest>
        void RegisterDefaultPatchBaselineAsync(const RegisterDefaultPatchBaselineRequestT& request, const RegisterDefaultPatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::RegisterDefaultPatchBaseline, request, handler, context);
        }

        /**
         * <p>Registers a patch baseline for a patch group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RegisterPatchBaselineForPatchGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterPatchBaselineForPatchGroupOutcome RegisterPatchBaselineForPatchGroup(const Model::RegisterPatchBaselineForPatchGroupRequest& request) const;

        /**
         * A Callable wrapper for RegisterPatchBaselineForPatchGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterPatchBaselineForPatchGroupRequestT = Model::RegisterPatchBaselineForPatchGroupRequest>
        Model::RegisterPatchBaselineForPatchGroupOutcomeCallable RegisterPatchBaselineForPatchGroupCallable(const RegisterPatchBaselineForPatchGroupRequestT& request) const
        {
            return SubmitCallable(&SSMClient::RegisterPatchBaselineForPatchGroup, request);
        }

        /**
         * An Async wrapper for RegisterPatchBaselineForPatchGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterPatchBaselineForPatchGroupRequestT = Model::RegisterPatchBaselineForPatchGroupRequest>
        void RegisterPatchBaselineForPatchGroupAsync(const RegisterPatchBaselineForPatchGroupRequestT& request, const RegisterPatchBaselineForPatchGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::RegisterPatchBaselineForPatchGroup, request, handler, context);
        }

        /**
         * <p>Registers a target with a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RegisterTargetWithMaintenanceWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterTargetWithMaintenanceWindowOutcome RegisterTargetWithMaintenanceWindow(const Model::RegisterTargetWithMaintenanceWindowRequest& request) const;

        /**
         * A Callable wrapper for RegisterTargetWithMaintenanceWindow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterTargetWithMaintenanceWindowRequestT = Model::RegisterTargetWithMaintenanceWindowRequest>
        Model::RegisterTargetWithMaintenanceWindowOutcomeCallable RegisterTargetWithMaintenanceWindowCallable(const RegisterTargetWithMaintenanceWindowRequestT& request) const
        {
            return SubmitCallable(&SSMClient::RegisterTargetWithMaintenanceWindow, request);
        }

        /**
         * An Async wrapper for RegisterTargetWithMaintenanceWindow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterTargetWithMaintenanceWindowRequestT = Model::RegisterTargetWithMaintenanceWindowRequest>
        void RegisterTargetWithMaintenanceWindowAsync(const RegisterTargetWithMaintenanceWindowRequestT& request, const RegisterTargetWithMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::RegisterTargetWithMaintenanceWindow, request, handler, context);
        }

        /**
         * <p>Adds a new task to a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RegisterTaskWithMaintenanceWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterTaskWithMaintenanceWindowOutcome RegisterTaskWithMaintenanceWindow(const Model::RegisterTaskWithMaintenanceWindowRequest& request) const;

        /**
         * A Callable wrapper for RegisterTaskWithMaintenanceWindow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterTaskWithMaintenanceWindowRequestT = Model::RegisterTaskWithMaintenanceWindowRequest>
        Model::RegisterTaskWithMaintenanceWindowOutcomeCallable RegisterTaskWithMaintenanceWindowCallable(const RegisterTaskWithMaintenanceWindowRequestT& request) const
        {
            return SubmitCallable(&SSMClient::RegisterTaskWithMaintenanceWindow, request);
        }

        /**
         * An Async wrapper for RegisterTaskWithMaintenanceWindow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterTaskWithMaintenanceWindowRequestT = Model::RegisterTaskWithMaintenanceWindowRequest>
        void RegisterTaskWithMaintenanceWindowAsync(const RegisterTaskWithMaintenanceWindowRequestT& request, const RegisterTaskWithMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::RegisterTaskWithMaintenanceWindow, request, handler, context);
        }

        /**
         * <p>Removes tag keys from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * A Callable wrapper for RemoveTagsFromResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveTagsFromResourceRequestT = Model::RemoveTagsFromResourceRequest>
        Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const RemoveTagsFromResourceRequestT& request) const
        {
            return SubmitCallable(&SSMClient::RemoveTagsFromResource, request);
        }

        /**
         * An Async wrapper for RemoveTagsFromResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveTagsFromResourceRequestT = Model::RemoveTagsFromResourceRequest>
        void RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequestT& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::RemoveTagsFromResource, request, handler, context);
        }

        /**
         * <p> <code>ServiceSetting</code> is an account-level setting for an Amazon Web
         * Services service. This setting defines how a user interacts with or uses a
         * service or a feature of a service. For example, if an Amazon Web Services
         * service charges money to the account based on feature or service usage, then the
         * Amazon Web Services service team might create a default setting of "false". This
         * means the user can't use this feature unless they change the setting to "true"
         * and intentionally opt in for a paid feature.</p> <p>Services map a
         * <code>SettingId</code> object to a setting value. Amazon Web Services services
         * teams define the default value for a <code>SettingId</code>. You can't create a
         * new <code>SettingId</code>, but you can overwrite the default value if you have
         * the <code>ssm:UpdateServiceSetting</code> permission for the setting. Use the
         * <a>GetServiceSetting</a> API operation to view the current value. Use the
         * <a>UpdateServiceSetting</a> API operation to change the default setting. </p>
         * <p>Reset the service setting for the account to the default value as provisioned
         * by the Amazon Web Services service team. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResetServiceSetting">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetServiceSettingOutcome ResetServiceSetting(const Model::ResetServiceSettingRequest& request) const;

        /**
         * A Callable wrapper for ResetServiceSetting that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResetServiceSettingRequestT = Model::ResetServiceSettingRequest>
        Model::ResetServiceSettingOutcomeCallable ResetServiceSettingCallable(const ResetServiceSettingRequestT& request) const
        {
            return SubmitCallable(&SSMClient::ResetServiceSetting, request);
        }

        /**
         * An Async wrapper for ResetServiceSetting that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResetServiceSettingRequestT = Model::ResetServiceSettingRequest>
        void ResetServiceSettingAsync(const ResetServiceSettingRequestT& request, const ResetServiceSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::ResetServiceSetting, request, handler, context);
        }

        /**
         * <p>Reconnects a session to a managed node after it has been disconnected.
         * Connections can be resumed for disconnected sessions, but not terminated
         * sessions.</p>  <p>This command is primarily for use by client machines to
         * automatically reconnect during intermittent network issues. It isn't intended
         * for any other use.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResumeSession">AWS
         * API Reference</a></p>
         */
        virtual Model::ResumeSessionOutcome ResumeSession(const Model::ResumeSessionRequest& request) const;

        /**
         * A Callable wrapper for ResumeSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResumeSessionRequestT = Model::ResumeSessionRequest>
        Model::ResumeSessionOutcomeCallable ResumeSessionCallable(const ResumeSessionRequestT& request) const
        {
            return SubmitCallable(&SSMClient::ResumeSession, request);
        }

        /**
         * An Async wrapper for ResumeSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResumeSessionRequestT = Model::ResumeSessionRequest>
        void ResumeSessionAsync(const ResumeSessionRequestT& request, const ResumeSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::ResumeSession, request, handler, context);
        }

        /**
         * <p>Sends a signal to an Automation execution to change the current behavior or
         * status of the execution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/SendAutomationSignal">AWS
         * API Reference</a></p>
         */
        virtual Model::SendAutomationSignalOutcome SendAutomationSignal(const Model::SendAutomationSignalRequest& request) const;

        /**
         * A Callable wrapper for SendAutomationSignal that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendAutomationSignalRequestT = Model::SendAutomationSignalRequest>
        Model::SendAutomationSignalOutcomeCallable SendAutomationSignalCallable(const SendAutomationSignalRequestT& request) const
        {
            return SubmitCallable(&SSMClient::SendAutomationSignal, request);
        }

        /**
         * An Async wrapper for SendAutomationSignal that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendAutomationSignalRequestT = Model::SendAutomationSignalRequest>
        void SendAutomationSignalAsync(const SendAutomationSignalRequestT& request, const SendAutomationSignalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::SendAutomationSignal, request, handler, context);
        }

        /**
         * <p>Runs commands on one or more managed nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/SendCommand">AWS API
         * Reference</a></p>
         */
        virtual Model::SendCommandOutcome SendCommand(const Model::SendCommandRequest& request) const;

        /**
         * A Callable wrapper for SendCommand that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendCommandRequestT = Model::SendCommandRequest>
        Model::SendCommandOutcomeCallable SendCommandCallable(const SendCommandRequestT& request) const
        {
            return SubmitCallable(&SSMClient::SendCommand, request);
        }

        /**
         * An Async wrapper for SendCommand that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendCommandRequestT = Model::SendCommandRequest>
        void SendCommandAsync(const SendCommandRequestT& request, const SendCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::SendCommand, request, handler, context);
        }

        /**
         * <p>Runs an association immediately and only one time. This operation can be
         * helpful when troubleshooting associations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StartAssociationsOnce">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAssociationsOnceOutcome StartAssociationsOnce(const Model::StartAssociationsOnceRequest& request) const;

        /**
         * A Callable wrapper for StartAssociationsOnce that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartAssociationsOnceRequestT = Model::StartAssociationsOnceRequest>
        Model::StartAssociationsOnceOutcomeCallable StartAssociationsOnceCallable(const StartAssociationsOnceRequestT& request) const
        {
            return SubmitCallable(&SSMClient::StartAssociationsOnce, request);
        }

        /**
         * An Async wrapper for StartAssociationsOnce that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartAssociationsOnceRequestT = Model::StartAssociationsOnceRequest>
        void StartAssociationsOnceAsync(const StartAssociationsOnceRequestT& request, const StartAssociationsOnceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::StartAssociationsOnce, request, handler, context);
        }

        /**
         * <p>Initiates execution of an Automation runbook.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StartAutomationExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAutomationExecutionOutcome StartAutomationExecution(const Model::StartAutomationExecutionRequest& request) const;

        /**
         * A Callable wrapper for StartAutomationExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartAutomationExecutionRequestT = Model::StartAutomationExecutionRequest>
        Model::StartAutomationExecutionOutcomeCallable StartAutomationExecutionCallable(const StartAutomationExecutionRequestT& request) const
        {
            return SubmitCallable(&SSMClient::StartAutomationExecution, request);
        }

        /**
         * An Async wrapper for StartAutomationExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartAutomationExecutionRequestT = Model::StartAutomationExecutionRequest>
        void StartAutomationExecutionAsync(const StartAutomationExecutionRequestT& request, const StartAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::StartAutomationExecution, request, handler, context);
        }

        /**
         * <p>Creates a change request for Change Manager. The Automation runbooks
         * specified in the change request run only after all required approvals for the
         * change request have been received.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StartChangeRequestExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartChangeRequestExecutionOutcome StartChangeRequestExecution(const Model::StartChangeRequestExecutionRequest& request) const;

        /**
         * A Callable wrapper for StartChangeRequestExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartChangeRequestExecutionRequestT = Model::StartChangeRequestExecutionRequest>
        Model::StartChangeRequestExecutionOutcomeCallable StartChangeRequestExecutionCallable(const StartChangeRequestExecutionRequestT& request) const
        {
            return SubmitCallable(&SSMClient::StartChangeRequestExecution, request);
        }

        /**
         * An Async wrapper for StartChangeRequestExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartChangeRequestExecutionRequestT = Model::StartChangeRequestExecutionRequest>
        void StartChangeRequestExecutionAsync(const StartChangeRequestExecutionRequestT& request, const StartChangeRequestExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::StartChangeRequestExecution, request, handler, context);
        }

        /**
         * <p>Initiates a connection to a target (for example, a managed node) for a
         * Session Manager session. Returns a URL and token that can be used to open a
         * WebSocket connection for sending input and receiving outputs.</p> 
         * <p>Amazon Web Services CLI usage: <code>start-session</code> is an interactive
         * command that requires the Session Manager plugin to be installed on the client
         * machine making the call. For information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/session-manager-working-with-install-plugin.html">Install
         * the Session Manager plugin for the Amazon Web Services CLI</a> in the <i>Amazon
         * Web Services Systems Manager User Guide</i>.</p> <p>Amazon Web Services Tools
         * for PowerShell usage: Start-SSMSession isn't currently supported by Amazon Web
         * Services Tools for PowerShell on Windows local machines.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StartSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSessionOutcome StartSession(const Model::StartSessionRequest& request) const;

        /**
         * A Callable wrapper for StartSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartSessionRequestT = Model::StartSessionRequest>
        Model::StartSessionOutcomeCallable StartSessionCallable(const StartSessionRequestT& request) const
        {
            return SubmitCallable(&SSMClient::StartSession, request);
        }

        /**
         * An Async wrapper for StartSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartSessionRequestT = Model::StartSessionRequest>
        void StartSessionAsync(const StartSessionRequestT& request, const StartSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::StartSession, request, handler, context);
        }

        /**
         * <p>Stop an Automation that is currently running.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StopAutomationExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StopAutomationExecutionOutcome StopAutomationExecution(const Model::StopAutomationExecutionRequest& request) const;

        /**
         * A Callable wrapper for StopAutomationExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopAutomationExecutionRequestT = Model::StopAutomationExecutionRequest>
        Model::StopAutomationExecutionOutcomeCallable StopAutomationExecutionCallable(const StopAutomationExecutionRequestT& request) const
        {
            return SubmitCallable(&SSMClient::StopAutomationExecution, request);
        }

        /**
         * An Async wrapper for StopAutomationExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopAutomationExecutionRequestT = Model::StopAutomationExecutionRequest>
        void StopAutomationExecutionAsync(const StopAutomationExecutionRequestT& request, const StopAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::StopAutomationExecution, request, handler, context);
        }

        /**
         * <p>Permanently ends a session and closes the data connection between the Session
         * Manager client and SSM Agent on the managed node. A terminated session can't be
         * resumed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/TerminateSession">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateSessionOutcome TerminateSession(const Model::TerminateSessionRequest& request) const;

        /**
         * A Callable wrapper for TerminateSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TerminateSessionRequestT = Model::TerminateSessionRequest>
        Model::TerminateSessionOutcomeCallable TerminateSessionCallable(const TerminateSessionRequestT& request) const
        {
            return SubmitCallable(&SSMClient::TerminateSession, request);
        }

        /**
         * An Async wrapper for TerminateSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TerminateSessionRequestT = Model::TerminateSessionRequest>
        void TerminateSessionAsync(const TerminateSessionRequestT& request, const TerminateSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::TerminateSession, request, handler, context);
        }

        /**
         * <p>Remove a label or labels from a parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UnlabelParameterVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UnlabelParameterVersionOutcome UnlabelParameterVersion(const Model::UnlabelParameterVersionRequest& request) const;

        /**
         * A Callable wrapper for UnlabelParameterVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UnlabelParameterVersionRequestT = Model::UnlabelParameterVersionRequest>
        Model::UnlabelParameterVersionOutcomeCallable UnlabelParameterVersionCallable(const UnlabelParameterVersionRequestT& request) const
        {
            return SubmitCallable(&SSMClient::UnlabelParameterVersion, request);
        }

        /**
         * An Async wrapper for UnlabelParameterVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UnlabelParameterVersionRequestT = Model::UnlabelParameterVersionRequest>
        void UnlabelParameterVersionAsync(const UnlabelParameterVersionRequestT& request, const UnlabelParameterVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::UnlabelParameterVersion, request, handler, context);
        }

        /**
         * <p>Updates an association. You can update the association name and version, the
         * document version, schedule, parameters, and Amazon Simple Storage Service
         * (Amazon S3) output. When you call <code>UpdateAssociation</code>, the system
         * removes all optional parameters from the request and overwrites the association
         * with null values for those parameters. This is by design. You must specify all
         * optional parameters in the call, even if you are not changing the parameters.
         * This includes the <code>Name</code> parameter. Before calling this API action,
         * we recommend that you call the <a>DescribeAssociation</a> API operation and make
         * a note of all optional parameters required for your
         * <code>UpdateAssociation</code> call.</p> <p>In order to call this API operation,
         * a user, group, or role must be granted permission to call the
         * <a>DescribeAssociation</a> API operation. If you don't have permission to call
         * <code>DescribeAssociation</code>, then you receive the following error: <code>An
         * error occurred (AccessDeniedException) when calling the UpdateAssociation
         * operation: User: &lt;user_arn&gt; isn't authorized to perform:
         * ssm:DescribeAssociation on resource: &lt;resource_arn&gt;</code> </p>
         *  <p>When you update an association, the association immediately runs
         * against the specified targets. You can add the
         * <code>ApplyOnlyAtCronInterval</code> parameter to run the association during the
         * next schedule run.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssociationOutcome UpdateAssociation(const Model::UpdateAssociationRequest& request) const;

        /**
         * A Callable wrapper for UpdateAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAssociationRequestT = Model::UpdateAssociationRequest>
        Model::UpdateAssociationOutcomeCallable UpdateAssociationCallable(const UpdateAssociationRequestT& request) const
        {
            return SubmitCallable(&SSMClient::UpdateAssociation, request);
        }

        /**
         * An Async wrapper for UpdateAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAssociationRequestT = Model::UpdateAssociationRequest>
        void UpdateAssociationAsync(const UpdateAssociationRequestT& request, const UpdateAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::UpdateAssociation, request, handler, context);
        }

        /**
         * <p>Updates the status of the Amazon Web Services Systems Manager document (SSM
         * document) associated with the specified managed node.</p> <p>
         * <code>UpdateAssociationStatus</code> is primarily used by the Amazon Web
         * Services Systems Manager Agent (SSM Agent) to report status updates about your
         * associations and is only used for associations created with the
         * <code>InstanceId</code> legacy parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateAssociationStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssociationStatusOutcome UpdateAssociationStatus(const Model::UpdateAssociationStatusRequest& request) const;

        /**
         * A Callable wrapper for UpdateAssociationStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAssociationStatusRequestT = Model::UpdateAssociationStatusRequest>
        Model::UpdateAssociationStatusOutcomeCallable UpdateAssociationStatusCallable(const UpdateAssociationStatusRequestT& request) const
        {
            return SubmitCallable(&SSMClient::UpdateAssociationStatus, request);
        }

        /**
         * An Async wrapper for UpdateAssociationStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAssociationStatusRequestT = Model::UpdateAssociationStatusRequest>
        void UpdateAssociationStatusAsync(const UpdateAssociationStatusRequestT& request, const UpdateAssociationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::UpdateAssociationStatus, request, handler, context);
        }

        /**
         * <p>Updates one or more values for an SSM document.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDocumentOutcome UpdateDocument(const Model::UpdateDocumentRequest& request) const;

        /**
         * A Callable wrapper for UpdateDocument that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDocumentRequestT = Model::UpdateDocumentRequest>
        Model::UpdateDocumentOutcomeCallable UpdateDocumentCallable(const UpdateDocumentRequestT& request) const
        {
            return SubmitCallable(&SSMClient::UpdateDocument, request);
        }

        /**
         * An Async wrapper for UpdateDocument that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDocumentRequestT = Model::UpdateDocumentRequest>
        void UpdateDocumentAsync(const UpdateDocumentRequestT& request, const UpdateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::UpdateDocument, request, handler, context);
        }

        /**
         * <p>Set the default version of a document. </p>  <p>If you change a
         * document version for a State Manager association, Systems Manager immediately
         * runs the association unless you previously specifed the
         * <code>apply-only-at-cron-interval</code> parameter.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateDocumentDefaultVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDocumentDefaultVersionOutcome UpdateDocumentDefaultVersion(const Model::UpdateDocumentDefaultVersionRequest& request) const;

        /**
         * A Callable wrapper for UpdateDocumentDefaultVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDocumentDefaultVersionRequestT = Model::UpdateDocumentDefaultVersionRequest>
        Model::UpdateDocumentDefaultVersionOutcomeCallable UpdateDocumentDefaultVersionCallable(const UpdateDocumentDefaultVersionRequestT& request) const
        {
            return SubmitCallable(&SSMClient::UpdateDocumentDefaultVersion, request);
        }

        /**
         * An Async wrapper for UpdateDocumentDefaultVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDocumentDefaultVersionRequestT = Model::UpdateDocumentDefaultVersionRequest>
        void UpdateDocumentDefaultVersionAsync(const UpdateDocumentDefaultVersionRequestT& request, const UpdateDocumentDefaultVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::UpdateDocumentDefaultVersion, request, handler, context);
        }

        /**
         * <p>Updates information related to approval reviews for a specific version of a
         * change template in Change Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateDocumentMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDocumentMetadataOutcome UpdateDocumentMetadata(const Model::UpdateDocumentMetadataRequest& request) const;

        /**
         * A Callable wrapper for UpdateDocumentMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDocumentMetadataRequestT = Model::UpdateDocumentMetadataRequest>
        Model::UpdateDocumentMetadataOutcomeCallable UpdateDocumentMetadataCallable(const UpdateDocumentMetadataRequestT& request) const
        {
            return SubmitCallable(&SSMClient::UpdateDocumentMetadata, request);
        }

        /**
         * An Async wrapper for UpdateDocumentMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDocumentMetadataRequestT = Model::UpdateDocumentMetadataRequest>
        void UpdateDocumentMetadataAsync(const UpdateDocumentMetadataRequestT& request, const UpdateDocumentMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::UpdateDocumentMetadata, request, handler, context);
        }

        /**
         * <p>Updates an existing maintenance window. Only specified parameters are
         * modified.</p>  <p>The value you specify for <code>Duration</code>
         * determines the specific end time for the maintenance window based on the time it
         * begins. No maintenance window tasks are permitted to start after the resulting
         * endtime minus the number of hours you specify for <code>Cutoff</code>. For
         * example, if the maintenance window starts at 3 PM, the duration is three hours,
         * and the value you specify for <code>Cutoff</code> is one hour, no maintenance
         * window tasks can start after 5 PM.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateMaintenanceWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMaintenanceWindowOutcome UpdateMaintenanceWindow(const Model::UpdateMaintenanceWindowRequest& request) const;

        /**
         * A Callable wrapper for UpdateMaintenanceWindow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMaintenanceWindowRequestT = Model::UpdateMaintenanceWindowRequest>
        Model::UpdateMaintenanceWindowOutcomeCallable UpdateMaintenanceWindowCallable(const UpdateMaintenanceWindowRequestT& request) const
        {
            return SubmitCallable(&SSMClient::UpdateMaintenanceWindow, request);
        }

        /**
         * An Async wrapper for UpdateMaintenanceWindow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMaintenanceWindowRequestT = Model::UpdateMaintenanceWindowRequest>
        void UpdateMaintenanceWindowAsync(const UpdateMaintenanceWindowRequestT& request, const UpdateMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::UpdateMaintenanceWindow, request, handler, context);
        }

        /**
         * <p>Modifies the target of an existing maintenance window. You can change the
         * following:</p> <ul> <li> <p>Name</p> </li> <li> <p>Description</p> </li> <li>
         * <p>Owner</p> </li> <li> <p>IDs for an ID target</p> </li> <li> <p>Tags for a Tag
         * target</p> </li> <li> <p>From any supported tag type to another. The three
         * supported tag types are ID target, Tag target, and resource group. For more
         * information, see <a>Target</a>.</p> </li> </ul>  <p>If a parameter is
         * null, then the corresponding field isn't modified.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateMaintenanceWindowTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMaintenanceWindowTargetOutcome UpdateMaintenanceWindowTarget(const Model::UpdateMaintenanceWindowTargetRequest& request) const;

        /**
         * A Callable wrapper for UpdateMaintenanceWindowTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMaintenanceWindowTargetRequestT = Model::UpdateMaintenanceWindowTargetRequest>
        Model::UpdateMaintenanceWindowTargetOutcomeCallable UpdateMaintenanceWindowTargetCallable(const UpdateMaintenanceWindowTargetRequestT& request) const
        {
            return SubmitCallable(&SSMClient::UpdateMaintenanceWindowTarget, request);
        }

        /**
         * An Async wrapper for UpdateMaintenanceWindowTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMaintenanceWindowTargetRequestT = Model::UpdateMaintenanceWindowTargetRequest>
        void UpdateMaintenanceWindowTargetAsync(const UpdateMaintenanceWindowTargetRequestT& request, const UpdateMaintenanceWindowTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::UpdateMaintenanceWindowTarget, request, handler, context);
        }

        /**
         * <p>Modifies a task assigned to a maintenance window. You can't change the task
         * type, but you can change the following values:</p> <ul> <li> <p>
         * <code>TaskARN</code>. For example, you can change a <code>RUN_COMMAND</code>
         * task from <code>AWS-RunPowerShellScript</code> to
         * <code>AWS-RunShellScript</code>.</p> </li> <li> <p> <code>ServiceRoleArn</code>
         * </p> </li> <li> <p> <code>TaskInvocationParameters</code> </p> </li> <li> <p>
         * <code>Priority</code> </p> </li> <li> <p> <code>MaxConcurrency</code> </p> </li>
         * <li> <p> <code>MaxErrors</code> </p> </li> </ul>  <p>One or more targets
         * must be specified for maintenance window Run Command-type tasks. Depending on
         * the task, targets are optional for other maintenance window task types
         * (Automation, Lambda, and Step Functions). For more information about running
         * tasks that don't specify targets, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/maintenance-windows-targetless-tasks.html">Registering
         * maintenance window tasks without targets</a> in the <i>Amazon Web Services
         * Systems Manager User Guide</i>.</p>  <p>If the value for a parameter in
         * <code>UpdateMaintenanceWindowTask</code> is null, then the corresponding field
         * isn't modified. If you set <code>Replace</code> to true, then all fields
         * required by the <a>RegisterTaskWithMaintenanceWindow</a> operation are required
         * for this request. Optional fields that aren't specified are set to null.</p>
         *  <p>When you update a maintenance window task that has options
         * specified in <code>TaskInvocationParameters</code>, you must provide again all
         * the <code>TaskInvocationParameters</code> values that you want to retain. The
         * values you don't specify again are removed. For example, suppose that when you
         * registered a Run Command task, you specified
         * <code>TaskInvocationParameters</code> values for <code>Comment</code>,
         * <code>NotificationConfig</code>, and <code>OutputS3BucketName</code>. If you
         * update the maintenance window task and specify only a different
         * <code>OutputS3BucketName</code> value, the values for <code>Comment</code> and
         * <code>NotificationConfig</code> are removed.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateMaintenanceWindowTask">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMaintenanceWindowTaskOutcome UpdateMaintenanceWindowTask(const Model::UpdateMaintenanceWindowTaskRequest& request) const;

        /**
         * A Callable wrapper for UpdateMaintenanceWindowTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMaintenanceWindowTaskRequestT = Model::UpdateMaintenanceWindowTaskRequest>
        Model::UpdateMaintenanceWindowTaskOutcomeCallable UpdateMaintenanceWindowTaskCallable(const UpdateMaintenanceWindowTaskRequestT& request) const
        {
            return SubmitCallable(&SSMClient::UpdateMaintenanceWindowTask, request);
        }

        /**
         * An Async wrapper for UpdateMaintenanceWindowTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMaintenanceWindowTaskRequestT = Model::UpdateMaintenanceWindowTaskRequest>
        void UpdateMaintenanceWindowTaskAsync(const UpdateMaintenanceWindowTaskRequestT& request, const UpdateMaintenanceWindowTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::UpdateMaintenanceWindowTask, request, handler, context);
        }

        /**
         * <p>Changes the Identity and Access Management (IAM) role that is assigned to the
         * on-premises server, edge device, or virtual machines (VM). IAM roles are first
         * assigned to these hybrid nodes during the activation process. For more
         * information, see <a>CreateActivation</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateManagedInstanceRole">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateManagedInstanceRoleOutcome UpdateManagedInstanceRole(const Model::UpdateManagedInstanceRoleRequest& request) const;

        /**
         * A Callable wrapper for UpdateManagedInstanceRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateManagedInstanceRoleRequestT = Model::UpdateManagedInstanceRoleRequest>
        Model::UpdateManagedInstanceRoleOutcomeCallable UpdateManagedInstanceRoleCallable(const UpdateManagedInstanceRoleRequestT& request) const
        {
            return SubmitCallable(&SSMClient::UpdateManagedInstanceRole, request);
        }

        /**
         * An Async wrapper for UpdateManagedInstanceRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateManagedInstanceRoleRequestT = Model::UpdateManagedInstanceRoleRequest>
        void UpdateManagedInstanceRoleAsync(const UpdateManagedInstanceRoleRequestT& request, const UpdateManagedInstanceRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::UpdateManagedInstanceRole, request, handler, context);
        }

        /**
         * <p>Edit or change an OpsItem. You must have permission in Identity and Access
         * Management (IAM) to update an OpsItem. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-setup.html">Set
         * up OpsCenter</a> in the <i>Amazon Web Services Systems Manager User
         * Guide</i>.</p> <p>Operations engineers and IT professionals use Amazon Web
         * Services Systems Manager OpsCenter to view, investigate, and remediate
         * operational issues impacting the performance and health of their Amazon Web
         * Services resources. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">OpsCenter</a>
         * in the <i>Amazon Web Services Systems Manager User Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateOpsItem">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOpsItemOutcome UpdateOpsItem(const Model::UpdateOpsItemRequest& request) const;

        /**
         * A Callable wrapper for UpdateOpsItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateOpsItemRequestT = Model::UpdateOpsItemRequest>
        Model::UpdateOpsItemOutcomeCallable UpdateOpsItemCallable(const UpdateOpsItemRequestT& request) const
        {
            return SubmitCallable(&SSMClient::UpdateOpsItem, request);
        }

        /**
         * An Async wrapper for UpdateOpsItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateOpsItemRequestT = Model::UpdateOpsItemRequest>
        void UpdateOpsItemAsync(const UpdateOpsItemRequestT& request, const UpdateOpsItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::UpdateOpsItem, request, handler, context);
        }

        /**
         * <p>Amazon Web Services Systems Manager calls this API operation when you edit
         * OpsMetadata in Application Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateOpsMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOpsMetadataOutcome UpdateOpsMetadata(const Model::UpdateOpsMetadataRequest& request) const;

        /**
         * A Callable wrapper for UpdateOpsMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateOpsMetadataRequestT = Model::UpdateOpsMetadataRequest>
        Model::UpdateOpsMetadataOutcomeCallable UpdateOpsMetadataCallable(const UpdateOpsMetadataRequestT& request) const
        {
            return SubmitCallable(&SSMClient::UpdateOpsMetadata, request);
        }

        /**
         * An Async wrapper for UpdateOpsMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateOpsMetadataRequestT = Model::UpdateOpsMetadataRequest>
        void UpdateOpsMetadataAsync(const UpdateOpsMetadataRequestT& request, const UpdateOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::UpdateOpsMetadata, request, handler, context);
        }

        /**
         * <p>Modifies an existing patch baseline. Fields not specified in the request are
         * left unchanged.</p>  <p>For information about valid key-value pairs in
         * <code>PatchFilters</code> for each supported operating system type, see
         * <a>PatchFilter</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdatePatchBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePatchBaselineOutcome UpdatePatchBaseline(const Model::UpdatePatchBaselineRequest& request) const;

        /**
         * A Callable wrapper for UpdatePatchBaseline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePatchBaselineRequestT = Model::UpdatePatchBaselineRequest>
        Model::UpdatePatchBaselineOutcomeCallable UpdatePatchBaselineCallable(const UpdatePatchBaselineRequestT& request) const
        {
            return SubmitCallable(&SSMClient::UpdatePatchBaseline, request);
        }

        /**
         * An Async wrapper for UpdatePatchBaseline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePatchBaselineRequestT = Model::UpdatePatchBaselineRequest>
        void UpdatePatchBaselineAsync(const UpdatePatchBaselineRequestT& request, const UpdatePatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::UpdatePatchBaseline, request, handler, context);
        }

        /**
         * <p>Update a resource data sync. After you create a resource data sync for a
         * Region, you can't change the account options for that sync. For example, if you
         * create a sync in the us-east-2 (Ohio) Region and you choose the <code>Include
         * only the current account</code> option, you can't edit that sync later and
         * choose the <code>Include all accounts from my Organizations configuration</code>
         * option. Instead, you must delete the first resource data sync, and create a new
         * one.</p>  <p>This API operation only supports a resource data sync that
         * was created with a SyncFromSource <code>SyncType</code>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateResourceDataSync">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceDataSyncOutcome UpdateResourceDataSync(const Model::UpdateResourceDataSyncRequest& request) const;

        /**
         * A Callable wrapper for UpdateResourceDataSync that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateResourceDataSyncRequestT = Model::UpdateResourceDataSyncRequest>
        Model::UpdateResourceDataSyncOutcomeCallable UpdateResourceDataSyncCallable(const UpdateResourceDataSyncRequestT& request) const
        {
            return SubmitCallable(&SSMClient::UpdateResourceDataSync, request);
        }

        /**
         * An Async wrapper for UpdateResourceDataSync that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateResourceDataSyncRequestT = Model::UpdateResourceDataSyncRequest>
        void UpdateResourceDataSyncAsync(const UpdateResourceDataSyncRequestT& request, const UpdateResourceDataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::UpdateResourceDataSync, request, handler, context);
        }

        /**
         * <p> <code>ServiceSetting</code> is an account-level setting for an Amazon Web
         * Services service. This setting defines how a user interacts with or uses a
         * service or a feature of a service. For example, if an Amazon Web Services
         * service charges money to the account based on feature or service usage, then the
         * Amazon Web Services service team might create a default setting of "false". This
         * means the user can't use this feature unless they change the setting to "true"
         * and intentionally opt in for a paid feature.</p> <p>Services map a
         * <code>SettingId</code> object to a setting value. Amazon Web Services services
         * teams define the default value for a <code>SettingId</code>. You can't create a
         * new <code>SettingId</code>, but you can overwrite the default value if you have
         * the <code>ssm:UpdateServiceSetting</code> permission for the setting. Use the
         * <a>GetServiceSetting</a> API operation to view the current value. Or, use the
         * <a>ResetServiceSetting</a> to change the value back to the original value
         * defined by the Amazon Web Services service team.</p> <p>Update the service
         * setting for the account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateServiceSetting">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceSettingOutcome UpdateServiceSetting(const Model::UpdateServiceSettingRequest& request) const;

        /**
         * A Callable wrapper for UpdateServiceSetting that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateServiceSettingRequestT = Model::UpdateServiceSettingRequest>
        Model::UpdateServiceSettingOutcomeCallable UpdateServiceSettingCallable(const UpdateServiceSettingRequestT& request) const
        {
            return SubmitCallable(&SSMClient::UpdateServiceSetting, request);
        }

        /**
         * An Async wrapper for UpdateServiceSetting that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateServiceSettingRequestT = Model::UpdateServiceSettingRequest>
        void UpdateServiceSettingAsync(const UpdateServiceSettingRequestT& request, const UpdateServiceSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMClient::UpdateServiceSetting, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SSMEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SSMClient>;
      void init(const SSMClientConfiguration& clientConfiguration);

      SSMClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SSMEndpointProviderBase> m_endpointProvider;
  };

} // namespace SSM
} // namespace Aws
