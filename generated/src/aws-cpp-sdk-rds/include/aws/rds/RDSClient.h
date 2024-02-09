/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rds/RDSServiceClientModel.h>

namespace Aws
{
  namespace RDS
  {
        /**
     * <fullname>Amazon Relational Database Service</fullname> <p/> <p>Amazon
   * Relational Database Service (Amazon RDS) is a web service that makes it easier
   * to set up, operate, and scale a relational database in the cloud. It provides
   * cost-efficient, resizeable capacity for an industry-standard relational database
   * and manages common database administration tasks, freeing up developers to focus
   * on what makes their applications and businesses unique.</p> <p>Amazon RDS gives
   * you access to the capabilities of a MySQL, MariaDB, PostgreSQL, Microsoft SQL
   * Server, Oracle, Db2, or Amazon Aurora database server. These capabilities mean
   * that the code, applications, and tools you already use today with your existing
   * databases work with Amazon RDS without modification. Amazon RDS automatically
   * backs up your database and maintains the database software that powers your DB
   * instance. Amazon RDS is flexible: you can scale your DB instance's compute
   * resources and storage capacity to meet your application's demand. As with all
   * Amazon Web Services, there are no up-front investments, and you pay only for the
   * resources you use.</p> <p>This interface reference for Amazon RDS contains
   * documentation for a programming or command line interface you can use to manage
   * Amazon RDS. Amazon RDS is asynchronous, which means that some interfaces might
   * require techniques such as polling or callback functions to determine when a
   * command has been applied. In this reference, the parameter descriptions indicate
   * whether a command is applied immediately, on the next instance reboot, or during
   * the maintenance window. The reference structure is as follows, and we list
   * following some related topics from the user guide.</p> <p> <b>Amazon RDS API
   * Reference</b> </p> <ul> <li> <p>For the alphabetical list of API actions, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_Operations.html">API
   * Actions</a>.</p> </li> <li> <p>For the alphabetical list of data types, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_Types.html">Data
   * Types</a>.</p> </li> <li> <p>For a list of common query parameters, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/CommonParameters.html">Common
   * Parameters</a>.</p> </li> <li> <p>For descriptions of the error codes, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/CommonErrors.html">Common
   * Errors</a>.</p> </li> </ul> <p> <b>Amazon RDS User Guide</b> </p> <ul> <li>
   * <p>For a summary of the Amazon RDS interfaces, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Welcome.html#Welcome.Interfaces">Available
   * RDS Interfaces</a>.</p> </li> <li> <p>For more information about how to use the
   * Query API, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Using_the_Query_API.html">Using
   * the Query API</a>.</p> </li> </ul>
     */
                class AWS_RDS_API RDSClient : public Aws::Client::AWSXMLClient, public Aws::Client::ClientWithAsyncTemplateMethods<RDSClient>
    {
    public:
        typedef Aws::Client::AWSXMLClient BASECLASS;
        static const char* GetServiceName();
        static const char* GetAllocationTag();

      typedef RDSClientConfiguration ClientConfigurationType;
      typedef RDSEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RDSClient(const Aws::RDS::RDSClientConfiguration& clientConfiguration = Aws::RDS::RDSClientConfiguration(),
                  std::shared_ptr<RDSEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RDSClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<RDSEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::RDS::RDSClientConfiguration& clientConfiguration = Aws::RDS::RDSClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RDSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<RDSEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::RDS::RDSClientConfiguration& clientConfiguration = Aws::RDS::RDSClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RDSClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RDSClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RDSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~RDSClient();

    
        /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;

        /**
        * Generates an auth token for connecting to an rds instance.
        */
        Aws::String GenerateConnectAuthToken(const char* dbHostName, const char* dbRegion, unsigned port, const char* dbUserName) const;

        
        /**
         * <p>Associates an Identity and Access Management (IAM) role with a DB
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AddRoleToDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::AddRoleToDBClusterOutcome AddRoleToDBCluster(const Model::AddRoleToDBClusterRequest& request) const;

        /**
         * A Callable wrapper for AddRoleToDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddRoleToDBClusterRequestT = Model::AddRoleToDBClusterRequest>
        Model::AddRoleToDBClusterOutcomeCallable AddRoleToDBClusterCallable(const AddRoleToDBClusterRequestT& request) const
        {
            return SubmitCallable(&RDSClient::AddRoleToDBCluster, request);
        }

        /**
         * An Async wrapper for AddRoleToDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddRoleToDBClusterRequestT = Model::AddRoleToDBClusterRequest>
        void AddRoleToDBClusterAsync(const AddRoleToDBClusterRequestT& request, const AddRoleToDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::AddRoleToDBCluster, request, handler, context);
        }

        /**
         * <p>Associates an Amazon Web Services Identity and Access Management (IAM) role
         * with a DB instance.</p>  <p>To add a role to a DB instance, the status of
         * the DB instance must be <code>available</code>.</p>  <p>This command
         * doesn't apply to RDS Custom.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AddRoleToDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::AddRoleToDBInstanceOutcome AddRoleToDBInstance(const Model::AddRoleToDBInstanceRequest& request) const;

        /**
         * A Callable wrapper for AddRoleToDBInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddRoleToDBInstanceRequestT = Model::AddRoleToDBInstanceRequest>
        Model::AddRoleToDBInstanceOutcomeCallable AddRoleToDBInstanceCallable(const AddRoleToDBInstanceRequestT& request) const
        {
            return SubmitCallable(&RDSClient::AddRoleToDBInstance, request);
        }

        /**
         * An Async wrapper for AddRoleToDBInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddRoleToDBInstanceRequestT = Model::AddRoleToDBInstanceRequest>
        void AddRoleToDBInstanceAsync(const AddRoleToDBInstanceRequestT& request, const AddRoleToDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::AddRoleToDBInstance, request, handler, context);
        }

        /**
         * <p>Adds a source identifier to an existing RDS event notification
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AddSourceIdentifierToSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::AddSourceIdentifierToSubscriptionOutcome AddSourceIdentifierToSubscription(const Model::AddSourceIdentifierToSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for AddSourceIdentifierToSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddSourceIdentifierToSubscriptionRequestT = Model::AddSourceIdentifierToSubscriptionRequest>
        Model::AddSourceIdentifierToSubscriptionOutcomeCallable AddSourceIdentifierToSubscriptionCallable(const AddSourceIdentifierToSubscriptionRequestT& request) const
        {
            return SubmitCallable(&RDSClient::AddSourceIdentifierToSubscription, request);
        }

        /**
         * An Async wrapper for AddSourceIdentifierToSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddSourceIdentifierToSubscriptionRequestT = Model::AddSourceIdentifierToSubscriptionRequest>
        void AddSourceIdentifierToSubscriptionAsync(const AddSourceIdentifierToSubscriptionRequestT& request, const AddSourceIdentifierToSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::AddSourceIdentifierToSubscription, request, handler, context);
        }

        /**
         * <p>Adds metadata tags to an Amazon RDS resource. These tags can also be used
         * with cost allocation reporting to track cost associated with Amazon RDS
         * resources, or used in a Condition statement in an IAM policy for Amazon RDS.</p>
         * <p>For an overview on tagging Amazon RDS resources, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging
         * Amazon RDS Resources</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AddTagsToResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsToResourceOutcome AddTagsToResource(const Model::AddTagsToResourceRequest& request) const;

        /**
         * A Callable wrapper for AddTagsToResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddTagsToResourceRequestT = Model::AddTagsToResourceRequest>
        Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const AddTagsToResourceRequestT& request) const
        {
            return SubmitCallable(&RDSClient::AddTagsToResource, request);
        }

        /**
         * An Async wrapper for AddTagsToResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddTagsToResourceRequestT = Model::AddTagsToResourceRequest>
        void AddTagsToResourceAsync(const AddTagsToResourceRequestT& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::AddTagsToResource, request, handler, context);
        }

        /**
         * <p>Applies a pending maintenance action to a resource (for example, to a DB
         * instance).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ApplyPendingMaintenanceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::ApplyPendingMaintenanceActionOutcome ApplyPendingMaintenanceAction(const Model::ApplyPendingMaintenanceActionRequest& request) const;

        /**
         * A Callable wrapper for ApplyPendingMaintenanceAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ApplyPendingMaintenanceActionRequestT = Model::ApplyPendingMaintenanceActionRequest>
        Model::ApplyPendingMaintenanceActionOutcomeCallable ApplyPendingMaintenanceActionCallable(const ApplyPendingMaintenanceActionRequestT& request) const
        {
            return SubmitCallable(&RDSClient::ApplyPendingMaintenanceAction, request);
        }

        /**
         * An Async wrapper for ApplyPendingMaintenanceAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ApplyPendingMaintenanceActionRequestT = Model::ApplyPendingMaintenanceActionRequest>
        void ApplyPendingMaintenanceActionAsync(const ApplyPendingMaintenanceActionRequestT& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::ApplyPendingMaintenanceAction, request, handler, context);
        }

        /**
         * <p>Enables ingress to a DBSecurityGroup using one of two forms of authorization.
         * First, EC2 or VPC security groups can be added to the DBSecurityGroup if the
         * application using the database is running on EC2 or VPC instances. Second, IP
         * ranges are available if the application accessing your database is running on
         * the internet. Required parameters for this API are one of CIDR range,
         * EC2SecurityGroupId for VPC, or (EC2SecurityGroupOwnerId and either
         * EC2SecurityGroupName or EC2SecurityGroupId for non-VPC).</p> <p>You can't
         * authorize ingress from an EC2 security group in one Amazon Web Services Region
         * to an Amazon RDS DB instance in another. You can't authorize ingress from a VPC
         * security group in one VPC to an Amazon RDS DB instance in another.</p> <p>For an
         * overview of CIDR ranges, go to the <a
         * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia
         * Tutorial</a>.</p>  <p>EC2-Classic was retired on August 15, 2022. If you
         * haven't migrated from EC2-Classic to a VPC, we recommend that you migrate as
         * soon as possible. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon EC2 User Guide</i>, the blog <a
         * href="http://aws.amazon.com/blogs/aws/ec2-classic-is-retiring-heres-how-to-prepare/">EC2-Classic
         * Networking is Retiring – Here’s How to Prepare</a>, and <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.Non-VPC2VPC.html">Moving
         * a DB instance not in a VPC into a VPC</a> in the <i>Amazon RDS User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AuthorizeDBSecurityGroupIngress">AWS
         * API Reference</a></p>
         */
        virtual Model::AuthorizeDBSecurityGroupIngressOutcome AuthorizeDBSecurityGroupIngress(const Model::AuthorizeDBSecurityGroupIngressRequest& request) const;

        /**
         * A Callable wrapper for AuthorizeDBSecurityGroupIngress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AuthorizeDBSecurityGroupIngressRequestT = Model::AuthorizeDBSecurityGroupIngressRequest>
        Model::AuthorizeDBSecurityGroupIngressOutcomeCallable AuthorizeDBSecurityGroupIngressCallable(const AuthorizeDBSecurityGroupIngressRequestT& request) const
        {
            return SubmitCallable(&RDSClient::AuthorizeDBSecurityGroupIngress, request);
        }

        /**
         * An Async wrapper for AuthorizeDBSecurityGroupIngress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AuthorizeDBSecurityGroupIngressRequestT = Model::AuthorizeDBSecurityGroupIngressRequest>
        void AuthorizeDBSecurityGroupIngressAsync(const AuthorizeDBSecurityGroupIngressRequestT& request, const AuthorizeDBSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::AuthorizeDBSecurityGroupIngress, request, handler, context);
        }

        /**
         * <p>Backtracks a DB cluster to a specific time, without creating a new DB
         * cluster.</p> <p>For more information on backtracking, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Managing.Backtrack.html">
         * Backtracking an Aurora DB Cluster</a> in the <i>Amazon Aurora User
         * Guide</i>.</p>  <p>This action applies only to Aurora MySQL DB
         * clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/BacktrackDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::BacktrackDBClusterOutcome BacktrackDBCluster(const Model::BacktrackDBClusterRequest& request) const;

        /**
         * A Callable wrapper for BacktrackDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BacktrackDBClusterRequestT = Model::BacktrackDBClusterRequest>
        Model::BacktrackDBClusterOutcomeCallable BacktrackDBClusterCallable(const BacktrackDBClusterRequestT& request) const
        {
            return SubmitCallable(&RDSClient::BacktrackDBCluster, request);
        }

        /**
         * An Async wrapper for BacktrackDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BacktrackDBClusterRequestT = Model::BacktrackDBClusterRequest>
        void BacktrackDBClusterAsync(const BacktrackDBClusterRequestT& request, const BacktrackDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::BacktrackDBCluster, request, handler, context);
        }

        /**
         * <p>Cancels an export task in progress that is exporting a snapshot or cluster to
         * Amazon S3. Any data that has already been written to the S3 bucket isn't
         * removed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CancelExportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelExportTaskOutcome CancelExportTask(const Model::CancelExportTaskRequest& request) const;

        /**
         * A Callable wrapper for CancelExportTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelExportTaskRequestT = Model::CancelExportTaskRequest>
        Model::CancelExportTaskOutcomeCallable CancelExportTaskCallable(const CancelExportTaskRequestT& request) const
        {
            return SubmitCallable(&RDSClient::CancelExportTask, request);
        }

        /**
         * An Async wrapper for CancelExportTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelExportTaskRequestT = Model::CancelExportTaskRequest>
        void CancelExportTaskAsync(const CancelExportTaskRequestT& request, const CancelExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::CancelExportTask, request, handler, context);
        }

        /**
         * <p>Copies the specified DB cluster parameter group.</p>  <p>You can't copy
         * a default DB cluster parameter group. Instead, create a new custom DB cluster
         * parameter group, which copies the default parameters and values for the
         * specified DB cluster parameter group family.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyDBClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyDBClusterParameterGroupOutcome CopyDBClusterParameterGroup(const Model::CopyDBClusterParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for CopyDBClusterParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CopyDBClusterParameterGroupRequestT = Model::CopyDBClusterParameterGroupRequest>
        Model::CopyDBClusterParameterGroupOutcomeCallable CopyDBClusterParameterGroupCallable(const CopyDBClusterParameterGroupRequestT& request) const
        {
            return SubmitCallable(&RDSClient::CopyDBClusterParameterGroup, request);
        }

        /**
         * An Async wrapper for CopyDBClusterParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CopyDBClusterParameterGroupRequestT = Model::CopyDBClusterParameterGroupRequest>
        void CopyDBClusterParameterGroupAsync(const CopyDBClusterParameterGroupRequestT& request, const CopyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::CopyDBClusterParameterGroup, request, handler, context);
        }

        /**
         * <p>Copies a snapshot of a DB cluster.</p> <p>To copy a DB cluster snapshot from
         * a shared manual DB cluster snapshot,
         * <code>SourceDBClusterSnapshotIdentifier</code> must be the Amazon Resource Name
         * (ARN) of the shared DB cluster snapshot.</p> <p>You can copy an encrypted DB
         * cluster snapshot from another Amazon Web Services Region. In that case, the
         * Amazon Web Services Region where you call the <code>CopyDBClusterSnapshot</code>
         * operation is the destination Amazon Web Services Region for the encrypted DB
         * cluster snapshot to be copied to. To copy an encrypted DB cluster snapshot from
         * another Amazon Web Services Region, you must provide the following values:</p>
         * <ul> <li> <p> <code>KmsKeyId</code> - The Amazon Web Services Key Management
         * System (Amazon Web Services KMS) key identifier for the key to use to encrypt
         * the copy of the DB cluster snapshot in the destination Amazon Web Services
         * Region.</p> </li> <li> <p> <code>TargetDBClusterSnapshotIdentifier</code> - The
         * identifier for the new copy of the DB cluster snapshot in the destination Amazon
         * Web Services Region.</p> </li> <li> <p>
         * <code>SourceDBClusterSnapshotIdentifier</code> - The DB cluster snapshot
         * identifier for the encrypted DB cluster snapshot to be copied. This identifier
         * must be in the ARN format for the source Amazon Web Services Region and is the
         * same value as the <code>SourceDBClusterSnapshotIdentifier</code> in the
         * presigned URL.</p> </li> </ul> <p>To cancel the copy operation once it is in
         * progress, delete the target DB cluster snapshot identified by
         * <code>TargetDBClusterSnapshotIdentifier</code> while that DB cluster snapshot is
         * in "copying" status.</p> <p>For more information on copying encrypted Amazon
         * Aurora DB cluster snapshots from one Amazon Web Services Region to another, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_CopySnapshot.html">
         * Copying a Snapshot</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For more
         * information on Amazon Aurora DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ DB cluster deployments</a> in the <i>Amazon RDS User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyDBClusterSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyDBClusterSnapshotOutcome CopyDBClusterSnapshot(const Model::CopyDBClusterSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CopyDBClusterSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CopyDBClusterSnapshotRequestT = Model::CopyDBClusterSnapshotRequest>
        Model::CopyDBClusterSnapshotOutcomeCallable CopyDBClusterSnapshotCallable(const CopyDBClusterSnapshotRequestT& request) const
        {
            return SubmitCallable(&RDSClient::CopyDBClusterSnapshot, request);
        }

        /**
         * An Async wrapper for CopyDBClusterSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CopyDBClusterSnapshotRequestT = Model::CopyDBClusterSnapshotRequest>
        void CopyDBClusterSnapshotAsync(const CopyDBClusterSnapshotRequestT& request, const CopyDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::CopyDBClusterSnapshot, request, handler, context);
        }

        /**
         * <p>Copies the specified DB parameter group.</p>  <p>You can't copy a
         * default DB parameter group. Instead, create a new custom DB parameter group,
         * which copies the default parameters and values for the specified DB parameter
         * group family.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyDBParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyDBParameterGroupOutcome CopyDBParameterGroup(const Model::CopyDBParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for CopyDBParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CopyDBParameterGroupRequestT = Model::CopyDBParameterGroupRequest>
        Model::CopyDBParameterGroupOutcomeCallable CopyDBParameterGroupCallable(const CopyDBParameterGroupRequestT& request) const
        {
            return SubmitCallable(&RDSClient::CopyDBParameterGroup, request);
        }

        /**
         * An Async wrapper for CopyDBParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CopyDBParameterGroupRequestT = Model::CopyDBParameterGroupRequest>
        void CopyDBParameterGroupAsync(const CopyDBParameterGroupRequestT& request, const CopyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::CopyDBParameterGroup, request, handler, context);
        }

        /**
         * <p>Copies the specified DB snapshot. The source DB snapshot must be in the
         * <code>available</code> state.</p> <p>You can copy a snapshot from one Amazon Web
         * Services Region to another. In that case, the Amazon Web Services Region where
         * you call the <code>CopyDBSnapshot</code> operation is the destination Amazon Web
         * Services Region for the DB snapshot copy.</p> <p>This command doesn't apply to
         * RDS Custom.</p> <p>For more information about copying snapshots, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html#USER_CopyDBSnapshot">Copying
         * a DB Snapshot</a> in the <i>Amazon RDS User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyDBSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyDBSnapshotOutcome CopyDBSnapshot(const Model::CopyDBSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CopyDBSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CopyDBSnapshotRequestT = Model::CopyDBSnapshotRequest>
        Model::CopyDBSnapshotOutcomeCallable CopyDBSnapshotCallable(const CopyDBSnapshotRequestT& request) const
        {
            return SubmitCallable(&RDSClient::CopyDBSnapshot, request);
        }

        /**
         * An Async wrapper for CopyDBSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CopyDBSnapshotRequestT = Model::CopyDBSnapshotRequest>
        void CopyDBSnapshotAsync(const CopyDBSnapshotRequestT& request, const CopyDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::CopyDBSnapshot, request, handler, context);
        }

        /**
         * <p>Copies the specified option group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyOptionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyOptionGroupOutcome CopyOptionGroup(const Model::CopyOptionGroupRequest& request) const;

        /**
         * A Callable wrapper for CopyOptionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CopyOptionGroupRequestT = Model::CopyOptionGroupRequest>
        Model::CopyOptionGroupOutcomeCallable CopyOptionGroupCallable(const CopyOptionGroupRequestT& request) const
        {
            return SubmitCallable(&RDSClient::CopyOptionGroup, request);
        }

        /**
         * An Async wrapper for CopyOptionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CopyOptionGroupRequestT = Model::CopyOptionGroupRequest>
        void CopyOptionGroupAsync(const CopyOptionGroupRequestT& request, const CopyOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::CopyOptionGroup, request, handler, context);
        }

        /**
         * <p>Creates a blue/green deployment.</p> <p>A blue/green deployment creates a
         * staging environment that copies the production environment. In a blue/green
         * deployment, the blue environment is the current production environment. The
         * green environment is the staging environment. The staging environment stays in
         * sync with the current production environment using logical replication.</p>
         * <p>You can make changes to the databases in the green environment without
         * affecting production workloads. For example, you can upgrade the major or minor
         * DB engine version, change database parameters, or make schema changes in the
         * staging environment. You can thoroughly test changes in the green environment.
         * When ready, you can switch over the environments to promote the green
         * environment to be the new production environment. The switchover typically takes
         * under a minute.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/blue-green-deployments.html">Using
         * Amazon RDS Blue/Green Deployments for database updates</a> in the <i>Amazon RDS
         * User Guide</i> and <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/blue-green-deployments.html">
         * Using Amazon RDS Blue/Green Deployments for database updates</a> in the
         * <i>Amazon Aurora User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateBlueGreenDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBlueGreenDeploymentOutcome CreateBlueGreenDeployment(const Model::CreateBlueGreenDeploymentRequest& request) const;

        /**
         * A Callable wrapper for CreateBlueGreenDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBlueGreenDeploymentRequestT = Model::CreateBlueGreenDeploymentRequest>
        Model::CreateBlueGreenDeploymentOutcomeCallable CreateBlueGreenDeploymentCallable(const CreateBlueGreenDeploymentRequestT& request) const
        {
            return SubmitCallable(&RDSClient::CreateBlueGreenDeployment, request);
        }

        /**
         * An Async wrapper for CreateBlueGreenDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBlueGreenDeploymentRequestT = Model::CreateBlueGreenDeploymentRequest>
        void CreateBlueGreenDeploymentAsync(const CreateBlueGreenDeploymentRequestT& request, const CreateBlueGreenDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::CreateBlueGreenDeployment, request, handler, context);
        }

        /**
         * <p>Creates a custom DB engine version (CEV).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateCustomDBEngineVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomDBEngineVersionOutcome CreateCustomDBEngineVersion(const Model::CreateCustomDBEngineVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateCustomDBEngineVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCustomDBEngineVersionRequestT = Model::CreateCustomDBEngineVersionRequest>
        Model::CreateCustomDBEngineVersionOutcomeCallable CreateCustomDBEngineVersionCallable(const CreateCustomDBEngineVersionRequestT& request) const
        {
            return SubmitCallable(&RDSClient::CreateCustomDBEngineVersion, request);
        }

        /**
         * An Async wrapper for CreateCustomDBEngineVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCustomDBEngineVersionRequestT = Model::CreateCustomDBEngineVersionRequest>
        void CreateCustomDBEngineVersionAsync(const CreateCustomDBEngineVersionRequestT& request, const CreateCustomDBEngineVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::CreateCustomDBEngineVersion, request, handler, context);
        }

        /**
         * <p>Creates a new Amazon Aurora DB cluster or Multi-AZ DB cluster.</p> <p>If you
         * create an Aurora DB cluster, the request creates an empty cluster. You must
         * explicitly create the writer instance for your DB cluster using the <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_CreateDBInstance.html">CreateDBInstance</a>
         * operation. If you create a Multi-AZ DB cluster, the request creates a writer and
         * two reader DB instances for you, each in a different Availability Zone.</p>
         * <p>You can use the <code>ReplicationSourceIdentifier</code> parameter to create
         * an Amazon Aurora DB cluster as a read replica of another DB cluster or Amazon
         * RDS for MySQL or PostgreSQL DB instance. For more information about Amazon
         * Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">What
         * is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>You can
         * also use the <code>ReplicationSourceIdentifier</code> parameter to create a
         * Multi-AZ DB cluster read replica with an RDS for MySQL or PostgreSQL DB instance
         * as the source. For more information about Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">Multi-AZ
         * DB cluster deployments</a> in the <i>Amazon RDS User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBClusterOutcome CreateDBCluster(const Model::CreateDBClusterRequest& request) const;

        /**
         * A Callable wrapper for CreateDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDBClusterRequestT = Model::CreateDBClusterRequest>
        Model::CreateDBClusterOutcomeCallable CreateDBClusterCallable(const CreateDBClusterRequestT& request) const
        {
            return SubmitCallable(&RDSClient::CreateDBCluster, request);
        }

        /**
         * An Async wrapper for CreateDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDBClusterRequestT = Model::CreateDBClusterRequest>
        void CreateDBClusterAsync(const CreateDBClusterRequestT& request, const CreateDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::CreateDBCluster, request, handler, context);
        }

        /**
         * <p>Creates a new custom endpoint and associates it with an Amazon Aurora DB
         * cluster.</p>  <p>This action applies only to Aurora DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBClusterEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBClusterEndpointOutcome CreateDBClusterEndpoint(const Model::CreateDBClusterEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateDBClusterEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDBClusterEndpointRequestT = Model::CreateDBClusterEndpointRequest>
        Model::CreateDBClusterEndpointOutcomeCallable CreateDBClusterEndpointCallable(const CreateDBClusterEndpointRequestT& request) const
        {
            return SubmitCallable(&RDSClient::CreateDBClusterEndpoint, request);
        }

        /**
         * An Async wrapper for CreateDBClusterEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDBClusterEndpointRequestT = Model::CreateDBClusterEndpointRequest>
        void CreateDBClusterEndpointAsync(const CreateDBClusterEndpointRequestT& request, const CreateDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::CreateDBClusterEndpoint, request, handler, context);
        }

        /**
         * <p>Creates a new DB cluster parameter group.</p> <p>Parameters in a DB cluster
         * parameter group apply to all of the instances in a DB cluster.</p> <p>A DB
         * cluster parameter group is initially created with the default parameters for the
         * database engine used by instances in the DB cluster. To provide custom values
         * for any of the parameters, you must modify the group after creating it using
         * <code>ModifyDBClusterParameterGroup</code>. Once you've created a DB cluster
         * parameter group, you need to associate it with your DB cluster using
         * <code>ModifyDBCluster</code>.</p> <p>When you associate a new DB cluster
         * parameter group with a running Aurora DB cluster, reboot the DB instances in the
         * DB cluster without failover for the new DB cluster parameter group and
         * associated settings to take effect.</p> <p>When you associate a new DB cluster
         * parameter group with a running Multi-AZ DB cluster, reboot the DB cluster
         * without failover for the new DB cluster parameter group and associated settings
         * to take effect.</p>  <p>After you create a DB cluster parameter
         * group, you should wait at least 5 minutes before creating your first DB cluster
         * that uses that DB cluster parameter group as the default parameter group. This
         * allows Amazon RDS to fully complete the create action before the DB cluster
         * parameter group is used as the default for a new DB cluster. This is especially
         * important for parameters that are critical when creating the default database
         * for a DB cluster, such as the character set for the default database defined by
         * the <code>character_set_database</code> parameter. You can use the <i>Parameter
         * Groups</i> option of the <a href="https://console.aws.amazon.com/rds/">Amazon
         * RDS console</a> or the <code>DescribeDBClusterParameters</code> operation to
         * verify that your DB cluster parameter group has been created or modified.</p>
         *  <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ DB cluster deployments</a> in the <i>Amazon RDS User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBClusterParameterGroupOutcome CreateDBClusterParameterGroup(const Model::CreateDBClusterParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateDBClusterParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDBClusterParameterGroupRequestT = Model::CreateDBClusterParameterGroupRequest>
        Model::CreateDBClusterParameterGroupOutcomeCallable CreateDBClusterParameterGroupCallable(const CreateDBClusterParameterGroupRequestT& request) const
        {
            return SubmitCallable(&RDSClient::CreateDBClusterParameterGroup, request);
        }

        /**
         * An Async wrapper for CreateDBClusterParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDBClusterParameterGroupRequestT = Model::CreateDBClusterParameterGroupRequest>
        void CreateDBClusterParameterGroupAsync(const CreateDBClusterParameterGroupRequestT& request, const CreateDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::CreateDBClusterParameterGroup, request, handler, context);
        }

        /**
         * <p>Creates a snapshot of a DB cluster.</p> <p>For more information on Amazon
         * Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ DB cluster deployments</a> in the <i>Amazon RDS User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBClusterSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBClusterSnapshotOutcome CreateDBClusterSnapshot(const Model::CreateDBClusterSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateDBClusterSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDBClusterSnapshotRequestT = Model::CreateDBClusterSnapshotRequest>
        Model::CreateDBClusterSnapshotOutcomeCallable CreateDBClusterSnapshotCallable(const CreateDBClusterSnapshotRequestT& request) const
        {
            return SubmitCallable(&RDSClient::CreateDBClusterSnapshot, request);
        }

        /**
         * An Async wrapper for CreateDBClusterSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDBClusterSnapshotRequestT = Model::CreateDBClusterSnapshotRequest>
        void CreateDBClusterSnapshotAsync(const CreateDBClusterSnapshotRequestT& request, const CreateDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::CreateDBClusterSnapshot, request, handler, context);
        }

        /**
         * <p>Creates a new DB instance.</p> <p>The new DB instance can be an RDS DB
         * instance, or it can be a DB instance in an Aurora DB cluster. For an Aurora DB
         * cluster, you can call this operation multiple times to add more than one DB
         * instance to the cluster.</p> <p>For more information about creating an RDS DB
         * instance, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CreateDBInstance.html">
         * Creating an Amazon RDS DB instance</a> in the <i>Amazon RDS User Guide</i>.</p>
         * <p>For more information about creating a DB instance in an Aurora DB cluster,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.CreateInstance.html">
         * Creating an Amazon Aurora DB cluster</a> in the <i>Amazon Aurora User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBInstanceOutcome CreateDBInstance(const Model::CreateDBInstanceRequest& request) const;

        /**
         * A Callable wrapper for CreateDBInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDBInstanceRequestT = Model::CreateDBInstanceRequest>
        Model::CreateDBInstanceOutcomeCallable CreateDBInstanceCallable(const CreateDBInstanceRequestT& request) const
        {
            return SubmitCallable(&RDSClient::CreateDBInstance, request);
        }

        /**
         * An Async wrapper for CreateDBInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDBInstanceRequestT = Model::CreateDBInstanceRequest>
        void CreateDBInstanceAsync(const CreateDBInstanceRequestT& request, const CreateDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::CreateDBInstance, request, handler, context);
        }

        /**
         * <p>Creates a new DB instance that acts as a read replica for an existing source
         * DB instance or Multi-AZ DB cluster. You can create a read replica for a DB
         * instance running Db2, MariaDB, MySQL, Oracle, PostgreSQL, or SQL Server. You can
         * create a read replica for a Multi-AZ DB cluster running MySQL or PostgreSQL. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_ReadRepl.html">Working
         * with read replicas</a> and <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html#multi-az-db-clusters-migrating-to-instance-with-read-replica">Migrating
         * from a Multi-AZ DB cluster to a DB instance using a read replica</a> in the
         * <i>Amazon RDS User Guide</i>.</p> <p>Amazon Aurora doesn't support this
         * operation. To create a DB instance for an Aurora DB cluster, use the
         * <code>CreateDBInstance</code> operation.</p> <p>All read replica DB instances
         * are created with backups disabled. All other attributes (including DB security
         * groups and DB parameter groups) are inherited from the source DB instance or
         * cluster, except as specified.</p>  <p>Your source DB instance or
         * cluster must have backup retention enabled.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBInstanceReadReplica">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBInstanceReadReplicaOutcome CreateDBInstanceReadReplica(const Model::CreateDBInstanceReadReplicaRequest& request) const;

        /**
         * A Callable wrapper for CreateDBInstanceReadReplica that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDBInstanceReadReplicaRequestT = Model::CreateDBInstanceReadReplicaRequest>
        Model::CreateDBInstanceReadReplicaOutcomeCallable CreateDBInstanceReadReplicaCallable(const CreateDBInstanceReadReplicaRequestT& request) const
        {
            return SubmitCallable(&RDSClient::CreateDBInstanceReadReplica, request);
        }

        /**
         * An Async wrapper for CreateDBInstanceReadReplica that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDBInstanceReadReplicaRequestT = Model::CreateDBInstanceReadReplicaRequest>
        void CreateDBInstanceReadReplicaAsync(const CreateDBInstanceReadReplicaRequestT& request, const CreateDBInstanceReadReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::CreateDBInstanceReadReplica, request, handler, context);
        }

        /**
         * <p>Creates a new DB parameter group.</p> <p>A DB parameter group is initially
         * created with the default parameters for the database engine used by the DB
         * instance. To provide custom values for any of the parameters, you must modify
         * the group after creating it using <code>ModifyDBParameterGroup</code>. Once
         * you've created a DB parameter group, you need to associate it with your DB
         * instance using <code>ModifyDBInstance</code>. When you associate a new DB
         * parameter group with a running DB instance, you need to reboot the DB instance
         * without failover for the new DB parameter group and associated settings to take
         * effect.</p> <p>This command doesn't apply to RDS Custom.</p> 
         * <p>After you create a DB parameter group, you should wait at least 5 minutes
         * before creating your first DB instance that uses that DB parameter group as the
         * default parameter group. This allows Amazon RDS to fully complete the create
         * action before the parameter group is used as the default for a new DB instance.
         * This is especially important for parameters that are critical when creating the
         * default database for a DB instance, such as the character set for the default
         * database defined by the <code>character_set_database</code> parameter. You can
         * use the <i>Parameter Groups</i> option of the <a
         * href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the
         * <i>DescribeDBParameters</i> command to verify that your DB parameter group has
         * been created or modified.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBParameterGroupOutcome CreateDBParameterGroup(const Model::CreateDBParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateDBParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDBParameterGroupRequestT = Model::CreateDBParameterGroupRequest>
        Model::CreateDBParameterGroupOutcomeCallable CreateDBParameterGroupCallable(const CreateDBParameterGroupRequestT& request) const
        {
            return SubmitCallable(&RDSClient::CreateDBParameterGroup, request);
        }

        /**
         * An Async wrapper for CreateDBParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDBParameterGroupRequestT = Model::CreateDBParameterGroupRequest>
        void CreateDBParameterGroupAsync(const CreateDBParameterGroupRequestT& request, const CreateDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::CreateDBParameterGroup, request, handler, context);
        }

        /**
         * <p>Creates a new DB proxy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBProxy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBProxyOutcome CreateDBProxy(const Model::CreateDBProxyRequest& request) const;

        /**
         * A Callable wrapper for CreateDBProxy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDBProxyRequestT = Model::CreateDBProxyRequest>
        Model::CreateDBProxyOutcomeCallable CreateDBProxyCallable(const CreateDBProxyRequestT& request) const
        {
            return SubmitCallable(&RDSClient::CreateDBProxy, request);
        }

        /**
         * An Async wrapper for CreateDBProxy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDBProxyRequestT = Model::CreateDBProxyRequest>
        void CreateDBProxyAsync(const CreateDBProxyRequestT& request, const CreateDBProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::CreateDBProxy, request, handler, context);
        }

        /**
         * <p>Creates a <code>DBProxyEndpoint</code>. Only applies to proxies that are
         * associated with Aurora DB clusters. You can use DB proxy endpoints to specify
         * read/write or read-only access to the DB cluster. You can also use DB proxy
         * endpoints to access a DB proxy through a different VPC than the proxy's default
         * VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBProxyEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBProxyEndpointOutcome CreateDBProxyEndpoint(const Model::CreateDBProxyEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateDBProxyEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDBProxyEndpointRequestT = Model::CreateDBProxyEndpointRequest>
        Model::CreateDBProxyEndpointOutcomeCallable CreateDBProxyEndpointCallable(const CreateDBProxyEndpointRequestT& request) const
        {
            return SubmitCallable(&RDSClient::CreateDBProxyEndpoint, request);
        }

        /**
         * An Async wrapper for CreateDBProxyEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDBProxyEndpointRequestT = Model::CreateDBProxyEndpointRequest>
        void CreateDBProxyEndpointAsync(const CreateDBProxyEndpointRequestT& request, const CreateDBProxyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::CreateDBProxyEndpoint, request, handler, context);
        }

        /**
         * <p>Creates a new DB security group. DB security groups control access to a DB
         * instance.</p> <p>A DB security group controls access to EC2-Classic DB instances
         * that are not in a VPC.</p>  <p>EC2-Classic was retired on August 15, 2022.
         * If you haven't migrated from EC2-Classic to a VPC, we recommend that you migrate
         * as soon as possible. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon EC2 User Guide</i>, the blog <a
         * href="http://aws.amazon.com/blogs/aws/ec2-classic-is-retiring-heres-how-to-prepare/">EC2-Classic
         * Networking is Retiring – Here’s How to Prepare</a>, and <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.Non-VPC2VPC.html">Moving
         * a DB instance not in a VPC into a VPC</a> in the <i>Amazon RDS User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBSecurityGroupOutcome CreateDBSecurityGroup(const Model::CreateDBSecurityGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateDBSecurityGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDBSecurityGroupRequestT = Model::CreateDBSecurityGroupRequest>
        Model::CreateDBSecurityGroupOutcomeCallable CreateDBSecurityGroupCallable(const CreateDBSecurityGroupRequestT& request) const
        {
            return SubmitCallable(&RDSClient::CreateDBSecurityGroup, request);
        }

        /**
         * An Async wrapper for CreateDBSecurityGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDBSecurityGroupRequestT = Model::CreateDBSecurityGroupRequest>
        void CreateDBSecurityGroupAsync(const CreateDBSecurityGroupRequestT& request, const CreateDBSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::CreateDBSecurityGroup, request, handler, context);
        }

        /**
         * <p>Creates a new DB shard group for Aurora Limitless Database. You must enable
         * Aurora Limitless Database to create a DB shard group.</p> <p>Valid for: Aurora
         * DB clusters only</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBShardGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBShardGroupOutcome CreateDBShardGroup(const Model::CreateDBShardGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateDBShardGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDBShardGroupRequestT = Model::CreateDBShardGroupRequest>
        Model::CreateDBShardGroupOutcomeCallable CreateDBShardGroupCallable(const CreateDBShardGroupRequestT& request) const
        {
            return SubmitCallable(&RDSClient::CreateDBShardGroup, request);
        }

        /**
         * An Async wrapper for CreateDBShardGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDBShardGroupRequestT = Model::CreateDBShardGroupRequest>
        void CreateDBShardGroupAsync(const CreateDBShardGroupRequestT& request, const CreateDBShardGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::CreateDBShardGroup, request, handler, context);
        }

        /**
         * <p>Creates a snapshot of a DB instance. The source DB instance must be in the
         * <code>available</code> or <code>storage-optimization</code> state.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBSnapshotOutcome CreateDBSnapshot(const Model::CreateDBSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateDBSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDBSnapshotRequestT = Model::CreateDBSnapshotRequest>
        Model::CreateDBSnapshotOutcomeCallable CreateDBSnapshotCallable(const CreateDBSnapshotRequestT& request) const
        {
            return SubmitCallable(&RDSClient::CreateDBSnapshot, request);
        }

        /**
         * An Async wrapper for CreateDBSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDBSnapshotRequestT = Model::CreateDBSnapshotRequest>
        void CreateDBSnapshotAsync(const CreateDBSnapshotRequestT& request, const CreateDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::CreateDBSnapshot, request, handler, context);
        }

        /**
         * <p>Creates a new DB subnet group. DB subnet groups must contain at least one
         * subnet in at least two AZs in the Amazon Web Services Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBSubnetGroupOutcome CreateDBSubnetGroup(const Model::CreateDBSubnetGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateDBSubnetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDBSubnetGroupRequestT = Model::CreateDBSubnetGroupRequest>
        Model::CreateDBSubnetGroupOutcomeCallable CreateDBSubnetGroupCallable(const CreateDBSubnetGroupRequestT& request) const
        {
            return SubmitCallable(&RDSClient::CreateDBSubnetGroup, request);
        }

        /**
         * An Async wrapper for CreateDBSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDBSubnetGroupRequestT = Model::CreateDBSubnetGroupRequest>
        void CreateDBSubnetGroupAsync(const CreateDBSubnetGroupRequestT& request, const CreateDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::CreateDBSubnetGroup, request, handler, context);
        }

        /**
         * <p>Creates an RDS event notification subscription. This operation requires a
         * topic Amazon Resource Name (ARN) created by either the RDS console, the SNS
         * console, or the SNS API. To obtain an ARN with SNS, you must create a topic in
         * Amazon SNS and subscribe to the topic. The ARN is displayed in the SNS
         * console.</p> <p>You can specify the type of source (<code>SourceType</code>)
         * that you want to be notified of and provide a list of RDS sources
         * (<code>SourceIds</code>) that triggers the events. You can also provide a list
         * of event categories (<code>EventCategories</code>) for events that you want to
         * be notified of. For example, you can specify <code>SourceType</code> =
         * <code>db-instance</code>, <code>SourceIds</code> = <code>mydbinstance1</code>,
         * <code>mydbinstance2</code> and <code>EventCategories</code> =
         * <code>Availability</code>, <code>Backup</code>.</p> <p>If you specify both the
         * <code>SourceType</code> and <code>SourceIds</code>, such as
         * <code>SourceType</code> = <code>db-instance</code> and <code>SourceIds</code> =
         * <code>myDBInstance1</code>, you are notified of all the <code>db-instance</code>
         * events for the specified source. If you specify a <code>SourceType</code> but do
         * not specify <code>SourceIds</code>, you receive notice of the events for that
         * source type for all your RDS sources. If you don't specify either the SourceType
         * or the <code>SourceIds</code>, you are notified of events generated from all RDS
         * sources belonging to your customer account.</p> <p>For more information about
         * subscribing to an event for RDS DB engines, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.Subscribing.html">
         * Subscribing to Amazon RDS event notification</a> in the <i>Amazon RDS User
         * Guide</i>.</p> <p>For more information about subscribing to an event for Aurora
         * DB engines, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_Events.Subscribing.html">
         * Subscribing to Amazon RDS event notification</a> in the <i>Amazon Aurora User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateEventSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventSubscriptionOutcome CreateEventSubscription(const Model::CreateEventSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for CreateEventSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEventSubscriptionRequestT = Model::CreateEventSubscriptionRequest>
        Model::CreateEventSubscriptionOutcomeCallable CreateEventSubscriptionCallable(const CreateEventSubscriptionRequestT& request) const
        {
            return SubmitCallable(&RDSClient::CreateEventSubscription, request);
        }

        /**
         * An Async wrapper for CreateEventSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEventSubscriptionRequestT = Model::CreateEventSubscriptionRequest>
        void CreateEventSubscriptionAsync(const CreateEventSubscriptionRequestT& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::CreateEventSubscription, request, handler, context);
        }

        /**
         * <p>Creates an Aurora global database spread across multiple Amazon Web Services
         * Regions. The global database contains a single primary cluster with read-write
         * capability, and a read-only secondary cluster that receives data from the
         * primary cluster through high-speed replication performed by the Aurora storage
         * subsystem.</p> <p>You can create a global database that is initially empty, and
         * then create the primary and secondary DB clusters in the global database. Or you
         * can specify an existing Aurora cluster during the create operation, and this
         * cluster becomes the primary cluster of the global database.</p>  <p>This
         * operation applies only to Aurora DB clusters.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateGlobalCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGlobalClusterOutcome CreateGlobalCluster(const Model::CreateGlobalClusterRequest& request) const;

        /**
         * A Callable wrapper for CreateGlobalCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGlobalClusterRequestT = Model::CreateGlobalClusterRequest>
        Model::CreateGlobalClusterOutcomeCallable CreateGlobalClusterCallable(const CreateGlobalClusterRequestT& request) const
        {
            return SubmitCallable(&RDSClient::CreateGlobalCluster, request);
        }

        /**
         * An Async wrapper for CreateGlobalCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGlobalClusterRequestT = Model::CreateGlobalClusterRequest>
        void CreateGlobalClusterAsync(const CreateGlobalClusterRequestT& request, const CreateGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::CreateGlobalCluster, request, handler, context);
        }

        /**
         * <p>Creates a zero-ETL integration with Amazon Redshift.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIntegrationOutcome CreateIntegration(const Model::CreateIntegrationRequest& request) const;

        /**
         * A Callable wrapper for CreateIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateIntegrationRequestT = Model::CreateIntegrationRequest>
        Model::CreateIntegrationOutcomeCallable CreateIntegrationCallable(const CreateIntegrationRequestT& request) const
        {
            return SubmitCallable(&RDSClient::CreateIntegration, request);
        }

        /**
         * An Async wrapper for CreateIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateIntegrationRequestT = Model::CreateIntegrationRequest>
        void CreateIntegrationAsync(const CreateIntegrationRequestT& request, const CreateIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::CreateIntegration, request, handler, context);
        }

        /**
         * <p>Creates a new option group. You can create up to 20 option groups.</p>
         * <p>This command doesn't apply to RDS Custom.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateOptionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOptionGroupOutcome CreateOptionGroup(const Model::CreateOptionGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateOptionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateOptionGroupRequestT = Model::CreateOptionGroupRequest>
        Model::CreateOptionGroupOutcomeCallable CreateOptionGroupCallable(const CreateOptionGroupRequestT& request) const
        {
            return SubmitCallable(&RDSClient::CreateOptionGroup, request);
        }

        /**
         * An Async wrapper for CreateOptionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateOptionGroupRequestT = Model::CreateOptionGroupRequest>
        void CreateOptionGroupAsync(const CreateOptionGroupRequestT& request, const CreateOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::CreateOptionGroup, request, handler, context);
        }

        /**
         * <p>Creates a tenant database in a DB instance that uses the multi-tenant
         * configuration. Only RDS for Oracle container database (CDB) instances are
         * supported.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateTenantDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTenantDatabaseOutcome CreateTenantDatabase(const Model::CreateTenantDatabaseRequest& request) const;

        /**
         * A Callable wrapper for CreateTenantDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTenantDatabaseRequestT = Model::CreateTenantDatabaseRequest>
        Model::CreateTenantDatabaseOutcomeCallable CreateTenantDatabaseCallable(const CreateTenantDatabaseRequestT& request) const
        {
            return SubmitCallable(&RDSClient::CreateTenantDatabase, request);
        }

        /**
         * An Async wrapper for CreateTenantDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTenantDatabaseRequestT = Model::CreateTenantDatabaseRequest>
        void CreateTenantDatabaseAsync(const CreateTenantDatabaseRequestT& request, const CreateTenantDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::CreateTenantDatabase, request, handler, context);
        }

        /**
         * <p>Deletes a blue/green deployment.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/blue-green-deployments.html">Using
         * Amazon RDS Blue/Green Deployments for database updates</a> in the <i>Amazon RDS
         * User Guide</i> and <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/blue-green-deployments.html">Using
         * Amazon RDS Blue/Green Deployments for database updates</a> in the <i>Amazon
         * Aurora User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteBlueGreenDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBlueGreenDeploymentOutcome DeleteBlueGreenDeployment(const Model::DeleteBlueGreenDeploymentRequest& request) const;

        /**
         * A Callable wrapper for DeleteBlueGreenDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBlueGreenDeploymentRequestT = Model::DeleteBlueGreenDeploymentRequest>
        Model::DeleteBlueGreenDeploymentOutcomeCallable DeleteBlueGreenDeploymentCallable(const DeleteBlueGreenDeploymentRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DeleteBlueGreenDeployment, request);
        }

        /**
         * An Async wrapper for DeleteBlueGreenDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBlueGreenDeploymentRequestT = Model::DeleteBlueGreenDeploymentRequest>
        void DeleteBlueGreenDeploymentAsync(const DeleteBlueGreenDeploymentRequestT& request, const DeleteBlueGreenDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DeleteBlueGreenDeployment, request, handler, context);
        }

        /**
         * <p>Deletes a custom engine version. To run this command, make sure you meet the
         * following prerequisites:</p> <ul> <li> <p>The CEV must not be the default for
         * RDS Custom. If it is, change the default before running this command.</p> </li>
         * <li> <p>The CEV must not be associated with an RDS Custom DB instance, RDS
         * Custom instance snapshot, or automated backup of your RDS Custom instance.</p>
         * </li> </ul> <p>Typically, deletion takes a few minutes.</p>  <p>The
         * MediaImport service that imports files from Amazon S3 to create CEVs isn't
         * integrated with Amazon Web Services CloudTrail. If you turn on data logging for
         * Amazon RDS in CloudTrail, calls to the <code>DeleteCustomDbEngineVersion</code>
         * event aren't logged. However, you might see calls from the API gateway that
         * accesses your Amazon S3 bucket. These calls originate from the MediaImport
         * service for the <code>DeleteCustomDbEngineVersion</code> event.</p> 
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-cev.html#custom-cev.delete">Deleting
         * a CEV</a> in the <i>Amazon RDS User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteCustomDBEngineVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomDBEngineVersionOutcome DeleteCustomDBEngineVersion(const Model::DeleteCustomDBEngineVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteCustomDBEngineVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCustomDBEngineVersionRequestT = Model::DeleteCustomDBEngineVersionRequest>
        Model::DeleteCustomDBEngineVersionOutcomeCallable DeleteCustomDBEngineVersionCallable(const DeleteCustomDBEngineVersionRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DeleteCustomDBEngineVersion, request);
        }

        /**
         * An Async wrapper for DeleteCustomDBEngineVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCustomDBEngineVersionRequestT = Model::DeleteCustomDBEngineVersionRequest>
        void DeleteCustomDBEngineVersionAsync(const DeleteCustomDBEngineVersionRequestT& request, const DeleteCustomDBEngineVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DeleteCustomDBEngineVersion, request, handler, context);
        }

        /**
         * <p>The DeleteDBCluster action deletes a previously provisioned DB cluster. When
         * you delete a DB cluster, all automated backups for that DB cluster are deleted
         * and can't be recovered. Manual DB cluster snapshots of the specified DB cluster
         * are not deleted.</p> <p>If you're deleting a Multi-AZ DB cluster with read
         * replicas, all cluster members are terminated and read replicas are promoted to
         * standalone instances.</p> <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ DB cluster deployments</a> in the <i>Amazon RDS User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBClusterOutcome DeleteDBCluster(const Model::DeleteDBClusterRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDBClusterRequestT = Model::DeleteDBClusterRequest>
        Model::DeleteDBClusterOutcomeCallable DeleteDBClusterCallable(const DeleteDBClusterRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DeleteDBCluster, request);
        }

        /**
         * An Async wrapper for DeleteDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDBClusterRequestT = Model::DeleteDBClusterRequest>
        void DeleteDBClusterAsync(const DeleteDBClusterRequestT& request, const DeleteDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DeleteDBCluster, request, handler, context);
        }

        /**
         * <p>Deletes automated backups using the <code>DbClusterResourceId</code> value of
         * the source DB cluster or the Amazon Resource Name (ARN) of the automated
         * backups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBClusterAutomatedBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBClusterAutomatedBackupOutcome DeleteDBClusterAutomatedBackup(const Model::DeleteDBClusterAutomatedBackupRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBClusterAutomatedBackup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDBClusterAutomatedBackupRequestT = Model::DeleteDBClusterAutomatedBackupRequest>
        Model::DeleteDBClusterAutomatedBackupOutcomeCallable DeleteDBClusterAutomatedBackupCallable(const DeleteDBClusterAutomatedBackupRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DeleteDBClusterAutomatedBackup, request);
        }

        /**
         * An Async wrapper for DeleteDBClusterAutomatedBackup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDBClusterAutomatedBackupRequestT = Model::DeleteDBClusterAutomatedBackupRequest>
        void DeleteDBClusterAutomatedBackupAsync(const DeleteDBClusterAutomatedBackupRequestT& request, const DeleteDBClusterAutomatedBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DeleteDBClusterAutomatedBackup, request, handler, context);
        }

        /**
         * <p>Deletes a custom endpoint and removes it from an Amazon Aurora DB
         * cluster.</p>  <p>This action only applies to Aurora DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBClusterEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBClusterEndpointOutcome DeleteDBClusterEndpoint(const Model::DeleteDBClusterEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBClusterEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDBClusterEndpointRequestT = Model::DeleteDBClusterEndpointRequest>
        Model::DeleteDBClusterEndpointOutcomeCallable DeleteDBClusterEndpointCallable(const DeleteDBClusterEndpointRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DeleteDBClusterEndpoint, request);
        }

        /**
         * An Async wrapper for DeleteDBClusterEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDBClusterEndpointRequestT = Model::DeleteDBClusterEndpointRequest>
        void DeleteDBClusterEndpointAsync(const DeleteDBClusterEndpointRequestT& request, const DeleteDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DeleteDBClusterEndpoint, request, handler, context);
        }

        /**
         * <p>Deletes a specified DB cluster parameter group. The DB cluster parameter
         * group to be deleted can't be associated with any DB clusters.</p> <p>For more
         * information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ DB cluster deployments</a> in the <i>Amazon RDS User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBClusterParameterGroupOutcome DeleteDBClusterParameterGroup(const Model::DeleteDBClusterParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBClusterParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDBClusterParameterGroupRequestT = Model::DeleteDBClusterParameterGroupRequest>
        Model::DeleteDBClusterParameterGroupOutcomeCallable DeleteDBClusterParameterGroupCallable(const DeleteDBClusterParameterGroupRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DeleteDBClusterParameterGroup, request);
        }

        /**
         * An Async wrapper for DeleteDBClusterParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDBClusterParameterGroupRequestT = Model::DeleteDBClusterParameterGroupRequest>
        void DeleteDBClusterParameterGroupAsync(const DeleteDBClusterParameterGroupRequestT& request, const DeleteDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DeleteDBClusterParameterGroup, request, handler, context);
        }

        /**
         * <p>Deletes a DB cluster snapshot. If the snapshot is being copied, the copy
         * operation is terminated.</p>  <p>The DB cluster snapshot must be in the
         * <code>available</code> state to be deleted.</p>  <p>For more information
         * on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ DB cluster deployments</a> in the <i>Amazon RDS User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBClusterSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBClusterSnapshotOutcome DeleteDBClusterSnapshot(const Model::DeleteDBClusterSnapshotRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBClusterSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDBClusterSnapshotRequestT = Model::DeleteDBClusterSnapshotRequest>
        Model::DeleteDBClusterSnapshotOutcomeCallable DeleteDBClusterSnapshotCallable(const DeleteDBClusterSnapshotRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DeleteDBClusterSnapshot, request);
        }

        /**
         * An Async wrapper for DeleteDBClusterSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDBClusterSnapshotRequestT = Model::DeleteDBClusterSnapshotRequest>
        void DeleteDBClusterSnapshotAsync(const DeleteDBClusterSnapshotRequestT& request, const DeleteDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DeleteDBClusterSnapshot, request, handler, context);
        }

        /**
         * <p>Deletes a previously provisioned DB instance. When you delete a DB instance,
         * all automated backups for that instance are deleted and can't be recovered.
         * However, manual DB snapshots of the DB instance aren't deleted.</p> <p>If you
         * request a final DB snapshot, the status of the Amazon RDS DB instance is
         * <code>deleting</code> until the DB snapshot is created. This operation can't be
         * canceled or reverted after it begins. To monitor the status of this operation,
         * use <code>DescribeDBInstance</code>.</p> <p>When a DB instance is in a failure
         * state and has a status of <code>failed</code>,
         * <code>incompatible-restore</code>, or <code>incompatible-network</code>, you can
         * only delete it when you skip creation of the final snapshot with the
         * <code>SkipFinalSnapshot</code> parameter.</p> <p>If the specified DB instance is
         * part of an Amazon Aurora DB cluster, you can't delete the DB instance if both of
         * the following conditions are true:</p> <ul> <li> <p>The DB cluster is a read
         * replica of another Amazon Aurora DB cluster.</p> </li> <li> <p>The DB instance
         * is the only instance in the DB cluster.</p> </li> </ul> <p>To delete a DB
         * instance in this case, first use the <code>PromoteReadReplicaDBCluster</code>
         * operation to promote the DB cluster so that it's no longer a read replica. After
         * the promotion completes, use the <code>DeleteDBInstance</code> operation to
         * delete the final instance in the DB cluster.</p>  <p>For RDS Custom
         * DB instances, deleting the DB instance permanently deletes the EC2 instance and
         * the associated EBS volumes. Make sure that you don't terminate or delete these
         * resources before you delete the DB instance. Otherwise, deleting the DB instance
         * and creation of the final snapshot might fail.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBInstanceOutcome DeleteDBInstance(const Model::DeleteDBInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDBInstanceRequestT = Model::DeleteDBInstanceRequest>
        Model::DeleteDBInstanceOutcomeCallable DeleteDBInstanceCallable(const DeleteDBInstanceRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DeleteDBInstance, request);
        }

        /**
         * An Async wrapper for DeleteDBInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDBInstanceRequestT = Model::DeleteDBInstanceRequest>
        void DeleteDBInstanceAsync(const DeleteDBInstanceRequestT& request, const DeleteDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DeleteDBInstance, request, handler, context);
        }

        /**
         * <p>Deletes automated backups using the <code>DbiResourceId</code> value of the
         * source DB instance or the Amazon Resource Name (ARN) of the automated
         * backups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBInstanceAutomatedBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBInstanceAutomatedBackupOutcome DeleteDBInstanceAutomatedBackup(const Model::DeleteDBInstanceAutomatedBackupRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBInstanceAutomatedBackup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDBInstanceAutomatedBackupRequestT = Model::DeleteDBInstanceAutomatedBackupRequest>
        Model::DeleteDBInstanceAutomatedBackupOutcomeCallable DeleteDBInstanceAutomatedBackupCallable(const DeleteDBInstanceAutomatedBackupRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DeleteDBInstanceAutomatedBackup, request);
        }

        /**
         * An Async wrapper for DeleteDBInstanceAutomatedBackup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDBInstanceAutomatedBackupRequestT = Model::DeleteDBInstanceAutomatedBackupRequest>
        void DeleteDBInstanceAutomatedBackupAsync(const DeleteDBInstanceAutomatedBackupRequestT& request, const DeleteDBInstanceAutomatedBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DeleteDBInstanceAutomatedBackup, request, handler, context);
        }

        /**
         * <p>Deletes a specified DB parameter group. The DB parameter group to be deleted
         * can't be associated with any DB instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBParameterGroupOutcome DeleteDBParameterGroup(const Model::DeleteDBParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDBParameterGroupRequestT = Model::DeleteDBParameterGroupRequest>
        Model::DeleteDBParameterGroupOutcomeCallable DeleteDBParameterGroupCallable(const DeleteDBParameterGroupRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DeleteDBParameterGroup, request);
        }

        /**
         * An Async wrapper for DeleteDBParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDBParameterGroupRequestT = Model::DeleteDBParameterGroupRequest>
        void DeleteDBParameterGroupAsync(const DeleteDBParameterGroupRequestT& request, const DeleteDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DeleteDBParameterGroup, request, handler, context);
        }

        /**
         * <p>Deletes an existing DB proxy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBProxy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBProxyOutcome DeleteDBProxy(const Model::DeleteDBProxyRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBProxy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDBProxyRequestT = Model::DeleteDBProxyRequest>
        Model::DeleteDBProxyOutcomeCallable DeleteDBProxyCallable(const DeleteDBProxyRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DeleteDBProxy, request);
        }

        /**
         * An Async wrapper for DeleteDBProxy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDBProxyRequestT = Model::DeleteDBProxyRequest>
        void DeleteDBProxyAsync(const DeleteDBProxyRequestT& request, const DeleteDBProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DeleteDBProxy, request, handler, context);
        }

        /**
         * <p>Deletes a <code>DBProxyEndpoint</code>. Doing so removes the ability to
         * access the DB proxy using the endpoint that you defined. The endpoint that you
         * delete might have provided capabilities such as read/write or read-only
         * operations, or using a different VPC than the DB proxy's default
         * VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBProxyEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBProxyEndpointOutcome DeleteDBProxyEndpoint(const Model::DeleteDBProxyEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBProxyEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDBProxyEndpointRequestT = Model::DeleteDBProxyEndpointRequest>
        Model::DeleteDBProxyEndpointOutcomeCallable DeleteDBProxyEndpointCallable(const DeleteDBProxyEndpointRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DeleteDBProxyEndpoint, request);
        }

        /**
         * An Async wrapper for DeleteDBProxyEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDBProxyEndpointRequestT = Model::DeleteDBProxyEndpointRequest>
        void DeleteDBProxyEndpointAsync(const DeleteDBProxyEndpointRequestT& request, const DeleteDBProxyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DeleteDBProxyEndpoint, request, handler, context);
        }

        /**
         * <p>Deletes a DB security group.</p> <p>The specified DB security group must not
         * be associated with any DB instances.</p>  <p>EC2-Classic was retired on
         * August 15, 2022. If you haven't migrated from EC2-Classic to a VPC, we recommend
         * that you migrate as soon as possible. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon EC2 User Guide</i>, the blog <a
         * href="http://aws.amazon.com/blogs/aws/ec2-classic-is-retiring-heres-how-to-prepare/">EC2-Classic
         * Networking is Retiring – Here’s How to Prepare</a>, and <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.Non-VPC2VPC.html">Moving
         * a DB instance not in a VPC into a VPC</a> in the <i>Amazon RDS User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBSecurityGroupOutcome DeleteDBSecurityGroup(const Model::DeleteDBSecurityGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBSecurityGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDBSecurityGroupRequestT = Model::DeleteDBSecurityGroupRequest>
        Model::DeleteDBSecurityGroupOutcomeCallable DeleteDBSecurityGroupCallable(const DeleteDBSecurityGroupRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DeleteDBSecurityGroup, request);
        }

        /**
         * An Async wrapper for DeleteDBSecurityGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDBSecurityGroupRequestT = Model::DeleteDBSecurityGroupRequest>
        void DeleteDBSecurityGroupAsync(const DeleteDBSecurityGroupRequestT& request, const DeleteDBSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DeleteDBSecurityGroup, request, handler, context);
        }

        /**
         * <p>Deletes an Aurora Limitless Database DB shard group.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBShardGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBShardGroupOutcome DeleteDBShardGroup(const Model::DeleteDBShardGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBShardGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDBShardGroupRequestT = Model::DeleteDBShardGroupRequest>
        Model::DeleteDBShardGroupOutcomeCallable DeleteDBShardGroupCallable(const DeleteDBShardGroupRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DeleteDBShardGroup, request);
        }

        /**
         * An Async wrapper for DeleteDBShardGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDBShardGroupRequestT = Model::DeleteDBShardGroupRequest>
        void DeleteDBShardGroupAsync(const DeleteDBShardGroupRequestT& request, const DeleteDBShardGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DeleteDBShardGroup, request, handler, context);
        }

        /**
         * <p>Deletes a DB snapshot. If the snapshot is being copied, the copy operation is
         * terminated.</p>  <p>The DB snapshot must be in the <code>available</code>
         * state to be deleted.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBSnapshotOutcome DeleteDBSnapshot(const Model::DeleteDBSnapshotRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDBSnapshotRequestT = Model::DeleteDBSnapshotRequest>
        Model::DeleteDBSnapshotOutcomeCallable DeleteDBSnapshotCallable(const DeleteDBSnapshotRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DeleteDBSnapshot, request);
        }

        /**
         * An Async wrapper for DeleteDBSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDBSnapshotRequestT = Model::DeleteDBSnapshotRequest>
        void DeleteDBSnapshotAsync(const DeleteDBSnapshotRequestT& request, const DeleteDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DeleteDBSnapshot, request, handler, context);
        }

        /**
         * <p>Deletes a DB subnet group.</p>  <p>The specified database subnet group
         * must not be associated with any DB instances.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBSubnetGroupOutcome DeleteDBSubnetGroup(const Model::DeleteDBSubnetGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBSubnetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDBSubnetGroupRequestT = Model::DeleteDBSubnetGroupRequest>
        Model::DeleteDBSubnetGroupOutcomeCallable DeleteDBSubnetGroupCallable(const DeleteDBSubnetGroupRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DeleteDBSubnetGroup, request);
        }

        /**
         * An Async wrapper for DeleteDBSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDBSubnetGroupRequestT = Model::DeleteDBSubnetGroupRequest>
        void DeleteDBSubnetGroupAsync(const DeleteDBSubnetGroupRequestT& request, const DeleteDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DeleteDBSubnetGroup, request, handler, context);
        }

        /**
         * <p>Deletes an RDS event notification subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteEventSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventSubscriptionOutcome DeleteEventSubscription(const Model::DeleteEventSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for DeleteEventSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEventSubscriptionRequestT = Model::DeleteEventSubscriptionRequest>
        Model::DeleteEventSubscriptionOutcomeCallable DeleteEventSubscriptionCallable(const DeleteEventSubscriptionRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DeleteEventSubscription, request);
        }

        /**
         * An Async wrapper for DeleteEventSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEventSubscriptionRequestT = Model::DeleteEventSubscriptionRequest>
        void DeleteEventSubscriptionAsync(const DeleteEventSubscriptionRequestT& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DeleteEventSubscription, request, handler, context);
        }

        /**
         * <p>Deletes a global database cluster. The primary and secondary clusters must
         * already be detached or destroyed first.</p>  <p>This action only applies
         * to Aurora DB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteGlobalCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGlobalClusterOutcome DeleteGlobalCluster(const Model::DeleteGlobalClusterRequest& request) const;

        /**
         * A Callable wrapper for DeleteGlobalCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGlobalClusterRequestT = Model::DeleteGlobalClusterRequest>
        Model::DeleteGlobalClusterOutcomeCallable DeleteGlobalClusterCallable(const DeleteGlobalClusterRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DeleteGlobalCluster, request);
        }

        /**
         * An Async wrapper for DeleteGlobalCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGlobalClusterRequestT = Model::DeleteGlobalClusterRequest>
        void DeleteGlobalClusterAsync(const DeleteGlobalClusterRequestT& request, const DeleteGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DeleteGlobalCluster, request, handler, context);
        }

        /**
         * <p>Deletes a zero-ETL integration with Amazon Redshift.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIntegrationOutcome DeleteIntegration(const Model::DeleteIntegrationRequest& request) const;

        /**
         * A Callable wrapper for DeleteIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIntegrationRequestT = Model::DeleteIntegrationRequest>
        Model::DeleteIntegrationOutcomeCallable DeleteIntegrationCallable(const DeleteIntegrationRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DeleteIntegration, request);
        }

        /**
         * An Async wrapper for DeleteIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIntegrationRequestT = Model::DeleteIntegrationRequest>
        void DeleteIntegrationAsync(const DeleteIntegrationRequestT& request, const DeleteIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DeleteIntegration, request, handler, context);
        }

        /**
         * <p>Deletes an existing option group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteOptionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOptionGroupOutcome DeleteOptionGroup(const Model::DeleteOptionGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteOptionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteOptionGroupRequestT = Model::DeleteOptionGroupRequest>
        Model::DeleteOptionGroupOutcomeCallable DeleteOptionGroupCallable(const DeleteOptionGroupRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DeleteOptionGroup, request);
        }

        /**
         * An Async wrapper for DeleteOptionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteOptionGroupRequestT = Model::DeleteOptionGroupRequest>
        void DeleteOptionGroupAsync(const DeleteOptionGroupRequestT& request, const DeleteOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DeleteOptionGroup, request, handler, context);
        }

        /**
         * <p>Deletes a tenant database from your DB instance. This command only applies to
         * RDS for Oracle container database (CDB) instances.</p> <p>You can't delete a
         * tenant database when it is the only tenant in the DB instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteTenantDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTenantDatabaseOutcome DeleteTenantDatabase(const Model::DeleteTenantDatabaseRequest& request) const;

        /**
         * A Callable wrapper for DeleteTenantDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTenantDatabaseRequestT = Model::DeleteTenantDatabaseRequest>
        Model::DeleteTenantDatabaseOutcomeCallable DeleteTenantDatabaseCallable(const DeleteTenantDatabaseRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DeleteTenantDatabase, request);
        }

        /**
         * An Async wrapper for DeleteTenantDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTenantDatabaseRequestT = Model::DeleteTenantDatabaseRequest>
        void DeleteTenantDatabaseAsync(const DeleteTenantDatabaseRequestT& request, const DeleteTenantDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DeleteTenantDatabase, request, handler, context);
        }

        /**
         * <p>Remove the association between one or more <code>DBProxyTarget</code> data
         * structures and a <code>DBProxyTargetGroup</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeregisterDBProxyTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterDBProxyTargetsOutcome DeregisterDBProxyTargets(const Model::DeregisterDBProxyTargetsRequest& request) const;

        /**
         * A Callable wrapper for DeregisterDBProxyTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterDBProxyTargetsRequestT = Model::DeregisterDBProxyTargetsRequest>
        Model::DeregisterDBProxyTargetsOutcomeCallable DeregisterDBProxyTargetsCallable(const DeregisterDBProxyTargetsRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DeregisterDBProxyTargets, request);
        }

        /**
         * An Async wrapper for DeregisterDBProxyTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterDBProxyTargetsRequestT = Model::DeregisterDBProxyTargetsRequest>
        void DeregisterDBProxyTargetsAsync(const DeregisterDBProxyTargetsRequestT& request, const DeregisterDBProxyTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DeregisterDBProxyTargets, request, handler, context);
        }

        /**
         * <p>Lists all of the attributes for a customer account. The attributes include
         * Amazon RDS quotas for the account, such as the number of DB instances allowed.
         * The description for a quota includes the quota name, current usage toward that
         * quota, and the quota's maximum value.</p> <p>This command doesn't take any
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeAccountAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountAttributesOutcome DescribeAccountAttributes(const Model::DescribeAccountAttributesRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccountAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAccountAttributesRequestT = Model::DescribeAccountAttributesRequest>
        Model::DescribeAccountAttributesOutcomeCallable DescribeAccountAttributesCallable(const DescribeAccountAttributesRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeAccountAttributes, request);
        }

        /**
         * An Async wrapper for DescribeAccountAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAccountAttributesRequestT = Model::DescribeAccountAttributesRequest>
        void DescribeAccountAttributesAsync(const DescribeAccountAttributesRequestT& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeAccountAttributes, request, handler, context);
        }

        /**
         * <p>Describes one or more blue/green deployments.</p> <p>For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/blue-green-deployments.html">Using
         * Amazon RDS Blue/Green Deployments for database updates</a> in the <i>Amazon RDS
         * User Guide</i> and <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/blue-green-deployments.html">
         * Using Amazon RDS Blue/Green Deployments for database updates</a> in the
         * <i>Amazon Aurora User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeBlueGreenDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBlueGreenDeploymentsOutcome DescribeBlueGreenDeployments(const Model::DescribeBlueGreenDeploymentsRequest& request) const;

        /**
         * A Callable wrapper for DescribeBlueGreenDeployments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeBlueGreenDeploymentsRequestT = Model::DescribeBlueGreenDeploymentsRequest>
        Model::DescribeBlueGreenDeploymentsOutcomeCallable DescribeBlueGreenDeploymentsCallable(const DescribeBlueGreenDeploymentsRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeBlueGreenDeployments, request);
        }

        /**
         * An Async wrapper for DescribeBlueGreenDeployments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBlueGreenDeploymentsRequestT = Model::DescribeBlueGreenDeploymentsRequest>
        void DescribeBlueGreenDeploymentsAsync(const DescribeBlueGreenDeploymentsRequestT& request, const DescribeBlueGreenDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeBlueGreenDeployments, request, handler, context);
        }

        /**
         * <p>Lists the set of certificate authority (CA) certificates provided by Amazon
         * RDS for this Amazon Web Services account.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.SSL.html">Using
         * SSL/TLS to encrypt a connection to a DB instance</a> in the <i>Amazon RDS User
         * Guide</i> and <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.SSL.html">
         * Using SSL/TLS to encrypt a connection to a DB cluster</a> in the <i>Amazon
         * Aurora User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCertificatesOutcome DescribeCertificates(const Model::DescribeCertificatesRequest& request) const;

        /**
         * A Callable wrapper for DescribeCertificates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCertificatesRequestT = Model::DescribeCertificatesRequest>
        Model::DescribeCertificatesOutcomeCallable DescribeCertificatesCallable(const DescribeCertificatesRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeCertificates, request);
        }

        /**
         * An Async wrapper for DescribeCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCertificatesRequestT = Model::DescribeCertificatesRequest>
        void DescribeCertificatesAsync(const DescribeCertificatesRequestT& request, const DescribeCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeCertificates, request, handler, context);
        }

        /**
         * <p>Displays backups for both current and deleted DB clusters. For example, use
         * this operation to find details about automated backups for previously deleted
         * clusters. Current clusters are returned for both the
         * <code>DescribeDBClusterAutomatedBackups</code> and
         * <code>DescribeDBClusters</code> operations.</p> <p>All parameters are
         * optional.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterAutomatedBackups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterAutomatedBackupsOutcome DescribeDBClusterAutomatedBackups(const Model::DescribeDBClusterAutomatedBackupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBClusterAutomatedBackups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBClusterAutomatedBackupsRequestT = Model::DescribeDBClusterAutomatedBackupsRequest>
        Model::DescribeDBClusterAutomatedBackupsOutcomeCallable DescribeDBClusterAutomatedBackupsCallable(const DescribeDBClusterAutomatedBackupsRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeDBClusterAutomatedBackups, request);
        }

        /**
         * An Async wrapper for DescribeDBClusterAutomatedBackups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBClusterAutomatedBackupsRequestT = Model::DescribeDBClusterAutomatedBackupsRequest>
        void DescribeDBClusterAutomatedBackupsAsync(const DescribeDBClusterAutomatedBackupsRequestT& request, const DescribeDBClusterAutomatedBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeDBClusterAutomatedBackups, request, handler, context);
        }

        /**
         * <p>Returns information about backtracks for a DB cluster.</p> <p>For more
         * information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> 
         * <p>This action only applies to Aurora MySQL DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterBacktracks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterBacktracksOutcome DescribeDBClusterBacktracks(const Model::DescribeDBClusterBacktracksRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBClusterBacktracks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBClusterBacktracksRequestT = Model::DescribeDBClusterBacktracksRequest>
        Model::DescribeDBClusterBacktracksOutcomeCallable DescribeDBClusterBacktracksCallable(const DescribeDBClusterBacktracksRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeDBClusterBacktracks, request);
        }

        /**
         * An Async wrapper for DescribeDBClusterBacktracks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBClusterBacktracksRequestT = Model::DescribeDBClusterBacktracksRequest>
        void DescribeDBClusterBacktracksAsync(const DescribeDBClusterBacktracksRequestT& request, const DescribeDBClusterBacktracksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeDBClusterBacktracks, request, handler, context);
        }

        /**
         * <p>Returns information about endpoints for an Amazon Aurora DB cluster.</p>
         *  <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterEndpointsOutcome DescribeDBClusterEndpoints(const Model::DescribeDBClusterEndpointsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBClusterEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBClusterEndpointsRequestT = Model::DescribeDBClusterEndpointsRequest>
        Model::DescribeDBClusterEndpointsOutcomeCallable DescribeDBClusterEndpointsCallable(const DescribeDBClusterEndpointsRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeDBClusterEndpoints, request);
        }

        /**
         * An Async wrapper for DescribeDBClusterEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBClusterEndpointsRequestT = Model::DescribeDBClusterEndpointsRequest>
        void DescribeDBClusterEndpointsAsync(const DescribeDBClusterEndpointsRequestT& request, const DescribeDBClusterEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeDBClusterEndpoints, request, handler, context);
        }

        /**
         * <p>Returns a list of <code>DBClusterParameterGroup</code> descriptions. If a
         * <code>DBClusterParameterGroupName</code> parameter is specified, the list will
         * contain only the description of the specified DB cluster parameter group.</p>
         * <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ DB cluster deployments</a> in the <i>Amazon RDS User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterParameterGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterParameterGroupsOutcome DescribeDBClusterParameterGroups(const Model::DescribeDBClusterParameterGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBClusterParameterGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBClusterParameterGroupsRequestT = Model::DescribeDBClusterParameterGroupsRequest>
        Model::DescribeDBClusterParameterGroupsOutcomeCallable DescribeDBClusterParameterGroupsCallable(const DescribeDBClusterParameterGroupsRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeDBClusterParameterGroups, request);
        }

        /**
         * An Async wrapper for DescribeDBClusterParameterGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBClusterParameterGroupsRequestT = Model::DescribeDBClusterParameterGroupsRequest>
        void DescribeDBClusterParameterGroupsAsync(const DescribeDBClusterParameterGroupsRequestT& request, const DescribeDBClusterParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeDBClusterParameterGroups, request, handler, context);
        }

        /**
         * <p>Returns the detailed parameter list for a particular DB cluster parameter
         * group.</p> <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ DB cluster deployments</a> in the <i>Amazon RDS User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterParametersOutcome DescribeDBClusterParameters(const Model::DescribeDBClusterParametersRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBClusterParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBClusterParametersRequestT = Model::DescribeDBClusterParametersRequest>
        Model::DescribeDBClusterParametersOutcomeCallable DescribeDBClusterParametersCallable(const DescribeDBClusterParametersRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeDBClusterParameters, request);
        }

        /**
         * An Async wrapper for DescribeDBClusterParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBClusterParametersRequestT = Model::DescribeDBClusterParametersRequest>
        void DescribeDBClusterParametersAsync(const DescribeDBClusterParametersRequestT& request, const DescribeDBClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeDBClusterParameters, request, handler, context);
        }

        /**
         * <p>Returns a list of DB cluster snapshot attribute names and values for a manual
         * DB cluster snapshot.</p> <p>When sharing snapshots with other Amazon Web
         * Services accounts, <code>DescribeDBClusterSnapshotAttributes</code> returns the
         * <code>restore</code> attribute and a list of IDs for the Amazon Web Services
         * accounts that are authorized to copy or restore the manual DB cluster snapshot.
         * If <code>all</code> is included in the list of values for the
         * <code>restore</code> attribute, then the manual DB cluster snapshot is public
         * and can be copied or restored by all Amazon Web Services accounts.</p> <p>To add
         * or remove access for an Amazon Web Services account to copy or restore a manual
         * DB cluster snapshot, or to make the manual DB cluster snapshot public or
         * private, use the <code>ModifyDBClusterSnapshotAttribute</code> API
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterSnapshotAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterSnapshotAttributesOutcome DescribeDBClusterSnapshotAttributes(const Model::DescribeDBClusterSnapshotAttributesRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBClusterSnapshotAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBClusterSnapshotAttributesRequestT = Model::DescribeDBClusterSnapshotAttributesRequest>
        Model::DescribeDBClusterSnapshotAttributesOutcomeCallable DescribeDBClusterSnapshotAttributesCallable(const DescribeDBClusterSnapshotAttributesRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeDBClusterSnapshotAttributes, request);
        }

        /**
         * An Async wrapper for DescribeDBClusterSnapshotAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBClusterSnapshotAttributesRequestT = Model::DescribeDBClusterSnapshotAttributesRequest>
        void DescribeDBClusterSnapshotAttributesAsync(const DescribeDBClusterSnapshotAttributesRequestT& request, const DescribeDBClusterSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeDBClusterSnapshotAttributes, request, handler, context);
        }

        /**
         * <p>Returns information about DB cluster snapshots. This API action supports
         * pagination.</p> <p>For more information on Amazon Aurora DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ DB cluster deployments</a> in the <i>Amazon RDS User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterSnapshotsOutcome DescribeDBClusterSnapshots(const Model::DescribeDBClusterSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBClusterSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBClusterSnapshotsRequestT = Model::DescribeDBClusterSnapshotsRequest>
        Model::DescribeDBClusterSnapshotsOutcomeCallable DescribeDBClusterSnapshotsCallable(const DescribeDBClusterSnapshotsRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeDBClusterSnapshots, request);
        }

        /**
         * An Async wrapper for DescribeDBClusterSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBClusterSnapshotsRequestT = Model::DescribeDBClusterSnapshotsRequest>
        void DescribeDBClusterSnapshotsAsync(const DescribeDBClusterSnapshotsRequestT& request, const DescribeDBClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeDBClusterSnapshots, request, handler, context);
        }

        /**
         * <p>Describes existing Amazon Aurora DB clusters and Multi-AZ DB clusters. This
         * API supports pagination.</p> <p>For more information on Amazon Aurora DB
         * clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ DB cluster deployments</a> in the <i>Amazon RDS User Guide</i>.</p>
         * <p>This operation can also return information for Amazon Neptune DB instances
         * and Amazon DocumentDB instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClustersOutcome DescribeDBClusters(const Model::DescribeDBClustersRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBClustersRequestT = Model::DescribeDBClustersRequest>
        Model::DescribeDBClustersOutcomeCallable DescribeDBClustersCallable(const DescribeDBClustersRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeDBClusters, request);
        }

        /**
         * An Async wrapper for DescribeDBClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBClustersRequestT = Model::DescribeDBClustersRequest>
        void DescribeDBClustersAsync(const DescribeDBClustersRequestT& request, const DescribeDBClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeDBClusters, request, handler, context);
        }

        /**
         * <p>Describes the properties of specific versions of DB engines.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBEngineVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBEngineVersionsOutcome DescribeDBEngineVersions(const Model::DescribeDBEngineVersionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBEngineVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBEngineVersionsRequestT = Model::DescribeDBEngineVersionsRequest>
        Model::DescribeDBEngineVersionsOutcomeCallable DescribeDBEngineVersionsCallable(const DescribeDBEngineVersionsRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeDBEngineVersions, request);
        }

        /**
         * An Async wrapper for DescribeDBEngineVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBEngineVersionsRequestT = Model::DescribeDBEngineVersionsRequest>
        void DescribeDBEngineVersionsAsync(const DescribeDBEngineVersionsRequestT& request, const DescribeDBEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeDBEngineVersions, request, handler, context);
        }

        /**
         * <p>Displays backups for both current and deleted instances. For example, use
         * this operation to find details about automated backups for previously deleted
         * instances. Current instances with retention periods greater than zero (0) are
         * returned for both the <code>DescribeDBInstanceAutomatedBackups</code> and
         * <code>DescribeDBInstances</code> operations.</p> <p>All parameters are
         * optional.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBInstanceAutomatedBackups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBInstanceAutomatedBackupsOutcome DescribeDBInstanceAutomatedBackups(const Model::DescribeDBInstanceAutomatedBackupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBInstanceAutomatedBackups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBInstanceAutomatedBackupsRequestT = Model::DescribeDBInstanceAutomatedBackupsRequest>
        Model::DescribeDBInstanceAutomatedBackupsOutcomeCallable DescribeDBInstanceAutomatedBackupsCallable(const DescribeDBInstanceAutomatedBackupsRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeDBInstanceAutomatedBackups, request);
        }

        /**
         * An Async wrapper for DescribeDBInstanceAutomatedBackups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBInstanceAutomatedBackupsRequestT = Model::DescribeDBInstanceAutomatedBackupsRequest>
        void DescribeDBInstanceAutomatedBackupsAsync(const DescribeDBInstanceAutomatedBackupsRequestT& request, const DescribeDBInstanceAutomatedBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeDBInstanceAutomatedBackups, request, handler, context);
        }

        /**
         * <p>Describes provisioned RDS instances. This API supports pagination.</p> 
         * <p>This operation can also return information for Amazon Neptune DB instances
         * and Amazon DocumentDB instances.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBInstancesOutcome DescribeDBInstances(const Model::DescribeDBInstancesRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBInstancesRequestT = Model::DescribeDBInstancesRequest>
        Model::DescribeDBInstancesOutcomeCallable DescribeDBInstancesCallable(const DescribeDBInstancesRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeDBInstances, request);
        }

        /**
         * An Async wrapper for DescribeDBInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBInstancesRequestT = Model::DescribeDBInstancesRequest>
        void DescribeDBInstancesAsync(const DescribeDBInstancesRequestT& request, const DescribeDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeDBInstances, request, handler, context);
        }

        /**
         * <p>Returns a list of DB log files for the DB instance.</p> <p>This command
         * doesn't apply to RDS Custom.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBLogFiles">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBLogFilesOutcome DescribeDBLogFiles(const Model::DescribeDBLogFilesRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBLogFiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBLogFilesRequestT = Model::DescribeDBLogFilesRequest>
        Model::DescribeDBLogFilesOutcomeCallable DescribeDBLogFilesCallable(const DescribeDBLogFilesRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeDBLogFiles, request);
        }

        /**
         * An Async wrapper for DescribeDBLogFiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBLogFilesRequestT = Model::DescribeDBLogFilesRequest>
        void DescribeDBLogFilesAsync(const DescribeDBLogFilesRequestT& request, const DescribeDBLogFilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeDBLogFiles, request, handler, context);
        }

        /**
         * <p>Returns a list of <code>DBParameterGroup</code> descriptions. If a
         * <code>DBParameterGroupName</code> is specified, the list will contain only the
         * description of the specified DB parameter group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBParameterGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBParameterGroupsOutcome DescribeDBParameterGroups(const Model::DescribeDBParameterGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBParameterGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBParameterGroupsRequestT = Model::DescribeDBParameterGroupsRequest>
        Model::DescribeDBParameterGroupsOutcomeCallable DescribeDBParameterGroupsCallable(const DescribeDBParameterGroupsRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeDBParameterGroups, request);
        }

        /**
         * An Async wrapper for DescribeDBParameterGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBParameterGroupsRequestT = Model::DescribeDBParameterGroupsRequest>
        void DescribeDBParameterGroupsAsync(const DescribeDBParameterGroupsRequestT& request, const DescribeDBParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeDBParameterGroups, request, handler, context);
        }

        /**
         * <p>Returns the detailed parameter list for a particular DB parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBParametersOutcome DescribeDBParameters(const Model::DescribeDBParametersRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBParametersRequestT = Model::DescribeDBParametersRequest>
        Model::DescribeDBParametersOutcomeCallable DescribeDBParametersCallable(const DescribeDBParametersRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeDBParameters, request);
        }

        /**
         * An Async wrapper for DescribeDBParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBParametersRequestT = Model::DescribeDBParametersRequest>
        void DescribeDBParametersAsync(const DescribeDBParametersRequestT& request, const DescribeDBParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeDBParameters, request, handler, context);
        }

        /**
         * <p>Returns information about DB proxies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBProxies">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBProxiesOutcome DescribeDBProxies(const Model::DescribeDBProxiesRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBProxies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBProxiesRequestT = Model::DescribeDBProxiesRequest>
        Model::DescribeDBProxiesOutcomeCallable DescribeDBProxiesCallable(const DescribeDBProxiesRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeDBProxies, request);
        }

        /**
         * An Async wrapper for DescribeDBProxies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBProxiesRequestT = Model::DescribeDBProxiesRequest>
        void DescribeDBProxiesAsync(const DescribeDBProxiesRequestT& request, const DescribeDBProxiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeDBProxies, request, handler, context);
        }

        /**
         * <p>Returns information about DB proxy endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBProxyEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBProxyEndpointsOutcome DescribeDBProxyEndpoints(const Model::DescribeDBProxyEndpointsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBProxyEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBProxyEndpointsRequestT = Model::DescribeDBProxyEndpointsRequest>
        Model::DescribeDBProxyEndpointsOutcomeCallable DescribeDBProxyEndpointsCallable(const DescribeDBProxyEndpointsRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeDBProxyEndpoints, request);
        }

        /**
         * An Async wrapper for DescribeDBProxyEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBProxyEndpointsRequestT = Model::DescribeDBProxyEndpointsRequest>
        void DescribeDBProxyEndpointsAsync(const DescribeDBProxyEndpointsRequestT& request, const DescribeDBProxyEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeDBProxyEndpoints, request, handler, context);
        }

        /**
         * <p>Returns information about DB proxy target groups, represented by
         * <code>DBProxyTargetGroup</code> data structures.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBProxyTargetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBProxyTargetGroupsOutcome DescribeDBProxyTargetGroups(const Model::DescribeDBProxyTargetGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBProxyTargetGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBProxyTargetGroupsRequestT = Model::DescribeDBProxyTargetGroupsRequest>
        Model::DescribeDBProxyTargetGroupsOutcomeCallable DescribeDBProxyTargetGroupsCallable(const DescribeDBProxyTargetGroupsRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeDBProxyTargetGroups, request);
        }

        /**
         * An Async wrapper for DescribeDBProxyTargetGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBProxyTargetGroupsRequestT = Model::DescribeDBProxyTargetGroupsRequest>
        void DescribeDBProxyTargetGroupsAsync(const DescribeDBProxyTargetGroupsRequestT& request, const DescribeDBProxyTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeDBProxyTargetGroups, request, handler, context);
        }

        /**
         * <p>Returns information about <code>DBProxyTarget</code> objects. This API
         * supports pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBProxyTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBProxyTargetsOutcome DescribeDBProxyTargets(const Model::DescribeDBProxyTargetsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBProxyTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBProxyTargetsRequestT = Model::DescribeDBProxyTargetsRequest>
        Model::DescribeDBProxyTargetsOutcomeCallable DescribeDBProxyTargetsCallable(const DescribeDBProxyTargetsRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeDBProxyTargets, request);
        }

        /**
         * An Async wrapper for DescribeDBProxyTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBProxyTargetsRequestT = Model::DescribeDBProxyTargetsRequest>
        void DescribeDBProxyTargetsAsync(const DescribeDBProxyTargetsRequestT& request, const DescribeDBProxyTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeDBProxyTargets, request, handler, context);
        }

        /**
         * <p>Describes the recommendations to resolve the issues for your DB instances, DB
         * clusters, and DB parameter groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBRecommendationsOutcome DescribeDBRecommendations(const Model::DescribeDBRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBRecommendationsRequestT = Model::DescribeDBRecommendationsRequest>
        Model::DescribeDBRecommendationsOutcomeCallable DescribeDBRecommendationsCallable(const DescribeDBRecommendationsRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeDBRecommendations, request);
        }

        /**
         * An Async wrapper for DescribeDBRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBRecommendationsRequestT = Model::DescribeDBRecommendationsRequest>
        void DescribeDBRecommendationsAsync(const DescribeDBRecommendationsRequestT& request, const DescribeDBRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeDBRecommendations, request, handler, context);
        }

        /**
         * <p>Returns a list of <code>DBSecurityGroup</code> descriptions. If a
         * <code>DBSecurityGroupName</code> is specified, the list will contain only the
         * descriptions of the specified DB security group.</p>  <p>EC2-Classic was
         * retired on August 15, 2022. If you haven't migrated from EC2-Classic to a VPC,
         * we recommend that you migrate as soon as possible. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon EC2 User Guide</i>, the blog <a
         * href="http://aws.amazon.com/blogs/aws/ec2-classic-is-retiring-heres-how-to-prepare/">EC2-Classic
         * Networking is Retiring – Here’s How to Prepare</a>, and <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.Non-VPC2VPC.html">Moving
         * a DB instance not in a VPC into a VPC</a> in the <i>Amazon RDS User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBSecurityGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBSecurityGroupsOutcome DescribeDBSecurityGroups(const Model::DescribeDBSecurityGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBSecurityGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBSecurityGroupsRequestT = Model::DescribeDBSecurityGroupsRequest>
        Model::DescribeDBSecurityGroupsOutcomeCallable DescribeDBSecurityGroupsCallable(const DescribeDBSecurityGroupsRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeDBSecurityGroups, request);
        }

        /**
         * An Async wrapper for DescribeDBSecurityGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBSecurityGroupsRequestT = Model::DescribeDBSecurityGroupsRequest>
        void DescribeDBSecurityGroupsAsync(const DescribeDBSecurityGroupsRequestT& request, const DescribeDBSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeDBSecurityGroups, request, handler, context);
        }

        /**
         * <p>Describes existing Aurora Limitless Database DB shard groups.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBShardGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBShardGroupsOutcome DescribeDBShardGroups(const Model::DescribeDBShardGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBShardGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBShardGroupsRequestT = Model::DescribeDBShardGroupsRequest>
        Model::DescribeDBShardGroupsOutcomeCallable DescribeDBShardGroupsCallable(const DescribeDBShardGroupsRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeDBShardGroups, request);
        }

        /**
         * An Async wrapper for DescribeDBShardGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBShardGroupsRequestT = Model::DescribeDBShardGroupsRequest>
        void DescribeDBShardGroupsAsync(const DescribeDBShardGroupsRequestT& request, const DescribeDBShardGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeDBShardGroups, request, handler, context);
        }

        /**
         * <p>Returns a list of DB snapshot attribute names and values for a manual DB
         * snapshot.</p> <p>When sharing snapshots with other Amazon Web Services accounts,
         * <code>DescribeDBSnapshotAttributes</code> returns the <code>restore</code>
         * attribute and a list of IDs for the Amazon Web Services accounts that are
         * authorized to copy or restore the manual DB snapshot. If <code>all</code> is
         * included in the list of values for the <code>restore</code> attribute, then the
         * manual DB snapshot is public and can be copied or restored by all Amazon Web
         * Services accounts.</p> <p>To add or remove access for an Amazon Web Services
         * account to copy or restore a manual DB snapshot, or to make the manual DB
         * snapshot public or private, use the <code>ModifyDBSnapshotAttribute</code> API
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBSnapshotAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBSnapshotAttributesOutcome DescribeDBSnapshotAttributes(const Model::DescribeDBSnapshotAttributesRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBSnapshotAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBSnapshotAttributesRequestT = Model::DescribeDBSnapshotAttributesRequest>
        Model::DescribeDBSnapshotAttributesOutcomeCallable DescribeDBSnapshotAttributesCallable(const DescribeDBSnapshotAttributesRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeDBSnapshotAttributes, request);
        }

        /**
         * An Async wrapper for DescribeDBSnapshotAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBSnapshotAttributesRequestT = Model::DescribeDBSnapshotAttributesRequest>
        void DescribeDBSnapshotAttributesAsync(const DescribeDBSnapshotAttributesRequestT& request, const DescribeDBSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeDBSnapshotAttributes, request, handler, context);
        }

        /**
         * <p>Describes the tenant databases that exist in a DB snapshot. This command only
         * applies to RDS for Oracle DB instances in the multi-tenant configuration.</p>
         * <p>You can use this command to inspect the tenant databases within a snapshot
         * before restoring it. You can't directly interact with the tenant databases in a
         * DB snapshot. If you restore a snapshot that was taken from DB instance using the
         * multi-tenant configuration, you restore all its tenant databases.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBSnapshotTenantDatabases">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBSnapshotTenantDatabasesOutcome DescribeDBSnapshotTenantDatabases(const Model::DescribeDBSnapshotTenantDatabasesRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBSnapshotTenantDatabases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBSnapshotTenantDatabasesRequestT = Model::DescribeDBSnapshotTenantDatabasesRequest>
        Model::DescribeDBSnapshotTenantDatabasesOutcomeCallable DescribeDBSnapshotTenantDatabasesCallable(const DescribeDBSnapshotTenantDatabasesRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeDBSnapshotTenantDatabases, request);
        }

        /**
         * An Async wrapper for DescribeDBSnapshotTenantDatabases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBSnapshotTenantDatabasesRequestT = Model::DescribeDBSnapshotTenantDatabasesRequest>
        void DescribeDBSnapshotTenantDatabasesAsync(const DescribeDBSnapshotTenantDatabasesRequestT& request, const DescribeDBSnapshotTenantDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeDBSnapshotTenantDatabases, request, handler, context);
        }

        /**
         * <p>Returns information about DB snapshots. This API action supports
         * pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBSnapshotsOutcome DescribeDBSnapshots(const Model::DescribeDBSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBSnapshotsRequestT = Model::DescribeDBSnapshotsRequest>
        Model::DescribeDBSnapshotsOutcomeCallable DescribeDBSnapshotsCallable(const DescribeDBSnapshotsRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeDBSnapshots, request);
        }

        /**
         * An Async wrapper for DescribeDBSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBSnapshotsRequestT = Model::DescribeDBSnapshotsRequest>
        void DescribeDBSnapshotsAsync(const DescribeDBSnapshotsRequestT& request, const DescribeDBSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeDBSnapshots, request, handler, context);
        }

        /**
         * <p>Returns a list of DBSubnetGroup descriptions. If a DBSubnetGroupName is
         * specified, the list will contain only the descriptions of the specified
         * DBSubnetGroup.</p> <p>For an overview of CIDR ranges, go to the <a
         * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia
         * Tutorial</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBSubnetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBSubnetGroupsOutcome DescribeDBSubnetGroups(const Model::DescribeDBSubnetGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBSubnetGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBSubnetGroupsRequestT = Model::DescribeDBSubnetGroupsRequest>
        Model::DescribeDBSubnetGroupsOutcomeCallable DescribeDBSubnetGroupsCallable(const DescribeDBSubnetGroupsRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeDBSubnetGroups, request);
        }

        /**
         * An Async wrapper for DescribeDBSubnetGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBSubnetGroupsRequestT = Model::DescribeDBSubnetGroupsRequest>
        void DescribeDBSubnetGroupsAsync(const DescribeDBSubnetGroupsRequestT& request, const DescribeDBSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeDBSubnetGroups, request, handler, context);
        }

        /**
         * <p>Returns the default engine and system parameter information for the cluster
         * database engine.</p> <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeEngineDefaultClusterParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEngineDefaultClusterParametersOutcome DescribeEngineDefaultClusterParameters(const Model::DescribeEngineDefaultClusterParametersRequest& request) const;

        /**
         * A Callable wrapper for DescribeEngineDefaultClusterParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEngineDefaultClusterParametersRequestT = Model::DescribeEngineDefaultClusterParametersRequest>
        Model::DescribeEngineDefaultClusterParametersOutcomeCallable DescribeEngineDefaultClusterParametersCallable(const DescribeEngineDefaultClusterParametersRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeEngineDefaultClusterParameters, request);
        }

        /**
         * An Async wrapper for DescribeEngineDefaultClusterParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEngineDefaultClusterParametersRequestT = Model::DescribeEngineDefaultClusterParametersRequest>
        void DescribeEngineDefaultClusterParametersAsync(const DescribeEngineDefaultClusterParametersRequestT& request, const DescribeEngineDefaultClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeEngineDefaultClusterParameters, request, handler, context);
        }

        /**
         * <p>Returns the default engine and system parameter information for the specified
         * database engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeEngineDefaultParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEngineDefaultParametersOutcome DescribeEngineDefaultParameters(const Model::DescribeEngineDefaultParametersRequest& request) const;

        /**
         * A Callable wrapper for DescribeEngineDefaultParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEngineDefaultParametersRequestT = Model::DescribeEngineDefaultParametersRequest>
        Model::DescribeEngineDefaultParametersOutcomeCallable DescribeEngineDefaultParametersCallable(const DescribeEngineDefaultParametersRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeEngineDefaultParameters, request);
        }

        /**
         * An Async wrapper for DescribeEngineDefaultParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEngineDefaultParametersRequestT = Model::DescribeEngineDefaultParametersRequest>
        void DescribeEngineDefaultParametersAsync(const DescribeEngineDefaultParametersRequestT& request, const DescribeEngineDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeEngineDefaultParameters, request, handler, context);
        }

        /**
         * <p>Displays a list of categories for all event source types, or, if specified,
         * for a specified source type. You can also see this list in the "Amazon RDS event
         * categories and event messages" section of the <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.Messages.html">
         * <i>Amazon RDS User Guide</i> </a> or the <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_Events.Messages.html">
         * <i>Amazon Aurora User Guide</i> </a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeEventCategories">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventCategoriesOutcome DescribeEventCategories(const Model::DescribeEventCategoriesRequest& request) const;

        /**
         * A Callable wrapper for DescribeEventCategories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEventCategoriesRequestT = Model::DescribeEventCategoriesRequest>
        Model::DescribeEventCategoriesOutcomeCallable DescribeEventCategoriesCallable(const DescribeEventCategoriesRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeEventCategories, request);
        }

        /**
         * An Async wrapper for DescribeEventCategories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEventCategoriesRequestT = Model::DescribeEventCategoriesRequest>
        void DescribeEventCategoriesAsync(const DescribeEventCategoriesRequestT& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeEventCategories, request, handler, context);
        }

        /**
         * <p>Lists all the subscription descriptions for a customer account. The
         * description for a subscription includes <code>SubscriptionName</code>,
         * <code>SNSTopicARN</code>, <code>CustomerID</code>, <code>SourceType</code>,
         * <code>SourceID</code>, <code>CreationTime</code>, and <code>Status</code>.</p>
         * <p>If you specify a <code>SubscriptionName</code>, lists the description for
         * that subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeEventSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventSubscriptionsOutcome DescribeEventSubscriptions(const Model::DescribeEventSubscriptionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEventSubscriptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEventSubscriptionsRequestT = Model::DescribeEventSubscriptionsRequest>
        Model::DescribeEventSubscriptionsOutcomeCallable DescribeEventSubscriptionsCallable(const DescribeEventSubscriptionsRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeEventSubscriptions, request);
        }

        /**
         * An Async wrapper for DescribeEventSubscriptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEventSubscriptionsRequestT = Model::DescribeEventSubscriptionsRequest>
        void DescribeEventSubscriptionsAsync(const DescribeEventSubscriptionsRequestT& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeEventSubscriptions, request, handler, context);
        }

        /**
         * <p>Returns events related to DB instances, DB clusters, DB parameter groups, DB
         * security groups, DB snapshots, DB cluster snapshots, and RDS Proxies for the
         * past 14 days. Events specific to a particular DB instance, DB cluster, DB
         * parameter group, DB security group, DB snapshot, DB cluster snapshot group, or
         * RDS Proxy can be obtained by providing the name as a parameter.</p> <p>For more
         * information on working with events, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/working-with-events.html">Monitoring
         * Amazon RDS events</a> in the <i>Amazon RDS User Guide</i> and <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/working-with-events.html">Monitoring
         * Amazon Aurora events</a> in the <i>Amazon Aurora User Guide</i>.</p> 
         * <p>By default, RDS returns events that were generated in the past hour.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventsOutcome DescribeEvents(const Model::DescribeEventsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEventsRequestT = Model::DescribeEventsRequest>
        Model::DescribeEventsOutcomeCallable DescribeEventsCallable(const DescribeEventsRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeEvents, request);
        }

        /**
         * An Async wrapper for DescribeEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEventsRequestT = Model::DescribeEventsRequest>
        void DescribeEventsAsync(const DescribeEventsRequestT& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeEvents, request, handler, context);
        }

        /**
         * <p>Returns information about a snapshot or cluster export to Amazon S3. This API
         * operation supports pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeExportTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExportTasksOutcome DescribeExportTasks(const Model::DescribeExportTasksRequest& request) const;

        /**
         * A Callable wrapper for DescribeExportTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeExportTasksRequestT = Model::DescribeExportTasksRequest>
        Model::DescribeExportTasksOutcomeCallable DescribeExportTasksCallable(const DescribeExportTasksRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeExportTasks, request);
        }

        /**
         * An Async wrapper for DescribeExportTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeExportTasksRequestT = Model::DescribeExportTasksRequest>
        void DescribeExportTasksAsync(const DescribeExportTasksRequestT& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeExportTasks, request, handler, context);
        }

        /**
         * <p>Returns information about Aurora global database clusters. This API supports
         * pagination.</p> <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeGlobalClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGlobalClustersOutcome DescribeGlobalClusters(const Model::DescribeGlobalClustersRequest& request) const;

        /**
         * A Callable wrapper for DescribeGlobalClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeGlobalClustersRequestT = Model::DescribeGlobalClustersRequest>
        Model::DescribeGlobalClustersOutcomeCallable DescribeGlobalClustersCallable(const DescribeGlobalClustersRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeGlobalClusters, request);
        }

        /**
         * An Async wrapper for DescribeGlobalClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeGlobalClustersRequestT = Model::DescribeGlobalClustersRequest>
        void DescribeGlobalClustersAsync(const DescribeGlobalClustersRequestT& request, const DescribeGlobalClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeGlobalClusters, request, handler, context);
        }

        /**
         * <p>Describe one or more zero-ETL integrations with Amazon
         * Redshift.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeIntegrations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIntegrationsOutcome DescribeIntegrations(const Model::DescribeIntegrationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeIntegrations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeIntegrationsRequestT = Model::DescribeIntegrationsRequest>
        Model::DescribeIntegrationsOutcomeCallable DescribeIntegrationsCallable(const DescribeIntegrationsRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeIntegrations, request);
        }

        /**
         * An Async wrapper for DescribeIntegrations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeIntegrationsRequestT = Model::DescribeIntegrationsRequest>
        void DescribeIntegrationsAsync(const DescribeIntegrationsRequestT& request, const DescribeIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeIntegrations, request, handler, context);
        }

        /**
         * <p>Describes all available options for the specified engine.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeOptionGroupOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOptionGroupOptionsOutcome DescribeOptionGroupOptions(const Model::DescribeOptionGroupOptionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeOptionGroupOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeOptionGroupOptionsRequestT = Model::DescribeOptionGroupOptionsRequest>
        Model::DescribeOptionGroupOptionsOutcomeCallable DescribeOptionGroupOptionsCallable(const DescribeOptionGroupOptionsRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeOptionGroupOptions, request);
        }

        /**
         * An Async wrapper for DescribeOptionGroupOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOptionGroupOptionsRequestT = Model::DescribeOptionGroupOptionsRequest>
        void DescribeOptionGroupOptionsAsync(const DescribeOptionGroupOptionsRequestT& request, const DescribeOptionGroupOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeOptionGroupOptions, request, handler, context);
        }

        /**
         * <p>Describes the available option groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeOptionGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOptionGroupsOutcome DescribeOptionGroups(const Model::DescribeOptionGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeOptionGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeOptionGroupsRequestT = Model::DescribeOptionGroupsRequest>
        Model::DescribeOptionGroupsOutcomeCallable DescribeOptionGroupsCallable(const DescribeOptionGroupsRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeOptionGroups, request);
        }

        /**
         * An Async wrapper for DescribeOptionGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOptionGroupsRequestT = Model::DescribeOptionGroupsRequest>
        void DescribeOptionGroupsAsync(const DescribeOptionGroupsRequestT& request, const DescribeOptionGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeOptionGroups, request, handler, context);
        }

        /**
         * <p>Describes the orderable DB instance options for a specified DB
         * engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeOrderableDBInstanceOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrderableDBInstanceOptionsOutcome DescribeOrderableDBInstanceOptions(const Model::DescribeOrderableDBInstanceOptionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeOrderableDBInstanceOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeOrderableDBInstanceOptionsRequestT = Model::DescribeOrderableDBInstanceOptionsRequest>
        Model::DescribeOrderableDBInstanceOptionsOutcomeCallable DescribeOrderableDBInstanceOptionsCallable(const DescribeOrderableDBInstanceOptionsRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeOrderableDBInstanceOptions, request);
        }

        /**
         * An Async wrapper for DescribeOrderableDBInstanceOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOrderableDBInstanceOptionsRequestT = Model::DescribeOrderableDBInstanceOptionsRequest>
        void DescribeOrderableDBInstanceOptionsAsync(const DescribeOrderableDBInstanceOptionsRequestT& request, const DescribeOrderableDBInstanceOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeOrderableDBInstanceOptions, request, handler, context);
        }

        /**
         * <p>Returns a list of resources (for example, DB instances) that have at least
         * one pending maintenance action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribePendingMaintenanceActions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePendingMaintenanceActionsOutcome DescribePendingMaintenanceActions(const Model::DescribePendingMaintenanceActionsRequest& request) const;

        /**
         * A Callable wrapper for DescribePendingMaintenanceActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePendingMaintenanceActionsRequestT = Model::DescribePendingMaintenanceActionsRequest>
        Model::DescribePendingMaintenanceActionsOutcomeCallable DescribePendingMaintenanceActionsCallable(const DescribePendingMaintenanceActionsRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribePendingMaintenanceActions, request);
        }

        /**
         * An Async wrapper for DescribePendingMaintenanceActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePendingMaintenanceActionsRequestT = Model::DescribePendingMaintenanceActionsRequest>
        void DescribePendingMaintenanceActionsAsync(const DescribePendingMaintenanceActionsRequestT& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribePendingMaintenanceActions, request, handler, context);
        }

        /**
         * <p>Returns information about reserved DB instances for this account, or about a
         * specified reserved DB instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeReservedDBInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedDBInstancesOutcome DescribeReservedDBInstances(const Model::DescribeReservedDBInstancesRequest& request) const;

        /**
         * A Callable wrapper for DescribeReservedDBInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeReservedDBInstancesRequestT = Model::DescribeReservedDBInstancesRequest>
        Model::DescribeReservedDBInstancesOutcomeCallable DescribeReservedDBInstancesCallable(const DescribeReservedDBInstancesRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeReservedDBInstances, request);
        }

        /**
         * An Async wrapper for DescribeReservedDBInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReservedDBInstancesRequestT = Model::DescribeReservedDBInstancesRequest>
        void DescribeReservedDBInstancesAsync(const DescribeReservedDBInstancesRequestT& request, const DescribeReservedDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeReservedDBInstances, request, handler, context);
        }

        /**
         * <p>Lists available reserved DB instance offerings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeReservedDBInstancesOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedDBInstancesOfferingsOutcome DescribeReservedDBInstancesOfferings(const Model::DescribeReservedDBInstancesOfferingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeReservedDBInstancesOfferings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeReservedDBInstancesOfferingsRequestT = Model::DescribeReservedDBInstancesOfferingsRequest>
        Model::DescribeReservedDBInstancesOfferingsOutcomeCallable DescribeReservedDBInstancesOfferingsCallable(const DescribeReservedDBInstancesOfferingsRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeReservedDBInstancesOfferings, request);
        }

        /**
         * An Async wrapper for DescribeReservedDBInstancesOfferings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReservedDBInstancesOfferingsRequestT = Model::DescribeReservedDBInstancesOfferingsRequest>
        void DescribeReservedDBInstancesOfferingsAsync(const DescribeReservedDBInstancesOfferingsRequestT& request, const DescribeReservedDBInstancesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeReservedDBInstancesOfferings, request, handler, context);
        }

        /**
         * <p>Returns a list of the source Amazon Web Services Regions where the current
         * Amazon Web Services Region can create a read replica, copy a DB snapshot from,
         * or replicate automated backups from.</p> <p>Use this operation to determine
         * whether cross-Region features are supported between other Regions and your
         * current Region. This operation supports pagination.</p> <p>To return information
         * about the Regions that are enabled for your account, or all Regions, use the EC2
         * operation <code>DescribeRegions</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeRegions.html">
         * DescribeRegions</a> in the <i>Amazon EC2 API Reference</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeSourceRegions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSourceRegionsOutcome DescribeSourceRegions(const Model::DescribeSourceRegionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeSourceRegions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSourceRegionsRequestT = Model::DescribeSourceRegionsRequest>
        Model::DescribeSourceRegionsOutcomeCallable DescribeSourceRegionsCallable(const DescribeSourceRegionsRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeSourceRegions, request);
        }

        /**
         * An Async wrapper for DescribeSourceRegions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSourceRegionsRequestT = Model::DescribeSourceRegionsRequest>
        void DescribeSourceRegionsAsync(const DescribeSourceRegionsRequestT& request, const DescribeSourceRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeSourceRegions, request, handler, context);
        }

        /**
         * <p>Describes the tenant databases in a DB instance that uses the multi-tenant
         * configuration. Only RDS for Oracle CDB instances are supported.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeTenantDatabases">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTenantDatabasesOutcome DescribeTenantDatabases(const Model::DescribeTenantDatabasesRequest& request) const;

        /**
         * A Callable wrapper for DescribeTenantDatabases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTenantDatabasesRequestT = Model::DescribeTenantDatabasesRequest>
        Model::DescribeTenantDatabasesOutcomeCallable DescribeTenantDatabasesCallable(const DescribeTenantDatabasesRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeTenantDatabases, request);
        }

        /**
         * An Async wrapper for DescribeTenantDatabases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTenantDatabasesRequestT = Model::DescribeTenantDatabasesRequest>
        void DescribeTenantDatabasesAsync(const DescribeTenantDatabasesRequestT& request, const DescribeTenantDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeTenantDatabases, request, handler, context);
        }

        /**
         * <p>You can call <code>DescribeValidDBInstanceModifications</code> to learn what
         * modifications you can make to your DB instance. You can use this information
         * when you call <code>ModifyDBInstance</code>.</p> <p>This command doesn't apply
         * to RDS Custom.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeValidDBInstanceModifications">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeValidDBInstanceModificationsOutcome DescribeValidDBInstanceModifications(const Model::DescribeValidDBInstanceModificationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeValidDBInstanceModifications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeValidDBInstanceModificationsRequestT = Model::DescribeValidDBInstanceModificationsRequest>
        Model::DescribeValidDBInstanceModificationsOutcomeCallable DescribeValidDBInstanceModificationsCallable(const DescribeValidDBInstanceModificationsRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DescribeValidDBInstanceModifications, request);
        }

        /**
         * An Async wrapper for DescribeValidDBInstanceModifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeValidDBInstanceModificationsRequestT = Model::DescribeValidDBInstanceModificationsRequest>
        void DescribeValidDBInstanceModificationsAsync(const DescribeValidDBInstanceModificationsRequestT& request, const DescribeValidDBInstanceModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DescribeValidDBInstanceModifications, request, handler, context);
        }

        /**
         * <p>Disables the HTTP endpoint for the specified DB cluster. Disabling this
         * endpoint disables RDS Data API.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using
         * RDS Data API</a> in the <i>Amazon Aurora User Guide</i>.</p>  <p>This
         * operation applies only to Aurora PostgreSQL Serverless v2 and provisioned DB
         * clusters. To disable the HTTP endpoint for Aurora Serverless v1 DB clusters, use
         * the <code>EnableHttpEndpoint</code> parameter of the
         * <code>ModifyDBCluster</code> operation.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DisableHttpEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableHttpEndpointOutcome DisableHttpEndpoint(const Model::DisableHttpEndpointRequest& request) const;

        /**
         * A Callable wrapper for DisableHttpEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableHttpEndpointRequestT = Model::DisableHttpEndpointRequest>
        Model::DisableHttpEndpointOutcomeCallable DisableHttpEndpointCallable(const DisableHttpEndpointRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DisableHttpEndpoint, request);
        }

        /**
         * An Async wrapper for DisableHttpEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableHttpEndpointRequestT = Model::DisableHttpEndpointRequest>
        void DisableHttpEndpointAsync(const DisableHttpEndpointRequestT& request, const DisableHttpEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DisableHttpEndpoint, request, handler, context);
        }

        /**
         * <p>Downloads all or a portion of the specified log file, up to 1 MB in size.</p>
         * <p>This command doesn't apply to RDS Custom.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DownloadDBLogFilePortion">AWS
         * API Reference</a></p>
         */
        virtual Model::DownloadDBLogFilePortionOutcome DownloadDBLogFilePortion(const Model::DownloadDBLogFilePortionRequest& request) const;

        /**
         * A Callable wrapper for DownloadDBLogFilePortion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DownloadDBLogFilePortionRequestT = Model::DownloadDBLogFilePortionRequest>
        Model::DownloadDBLogFilePortionOutcomeCallable DownloadDBLogFilePortionCallable(const DownloadDBLogFilePortionRequestT& request) const
        {
            return SubmitCallable(&RDSClient::DownloadDBLogFilePortion, request);
        }

        /**
         * An Async wrapper for DownloadDBLogFilePortion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DownloadDBLogFilePortionRequestT = Model::DownloadDBLogFilePortionRequest>
        void DownloadDBLogFilePortionAsync(const DownloadDBLogFilePortionRequestT& request, const DownloadDBLogFilePortionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::DownloadDBLogFilePortion, request, handler, context);
        }

        /**
         * <p>Enables the HTTP endpoint for the DB cluster. By default, the HTTP endpoint
         * isn't enabled.</p> <p>When enabled, this endpoint provides a connectionless web
         * service API (RDS Data API) for running SQL queries on the Aurora DB cluster. You
         * can also query your database from inside the RDS console with the RDS query
         * editor.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using
         * RDS Data API</a> in the <i>Amazon Aurora User Guide</i>.</p>  <p>This
         * operation applies only to Aurora PostgreSQL Serverless v2 and provisioned DB
         * clusters. To enable the HTTP endpoint for Aurora Serverless v1 DB clusters, use
         * the <code>EnableHttpEndpoint</code> parameter of the
         * <code>ModifyDBCluster</code> operation.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/EnableHttpEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableHttpEndpointOutcome EnableHttpEndpoint(const Model::EnableHttpEndpointRequest& request) const;

        /**
         * A Callable wrapper for EnableHttpEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableHttpEndpointRequestT = Model::EnableHttpEndpointRequest>
        Model::EnableHttpEndpointOutcomeCallable EnableHttpEndpointCallable(const EnableHttpEndpointRequestT& request) const
        {
            return SubmitCallable(&RDSClient::EnableHttpEndpoint, request);
        }

        /**
         * An Async wrapper for EnableHttpEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableHttpEndpointRequestT = Model::EnableHttpEndpointRequest>
        void EnableHttpEndpointAsync(const EnableHttpEndpointRequestT& request, const EnableHttpEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::EnableHttpEndpoint, request, handler, context);
        }

        /**
         * <p>Forces a failover for a DB cluster.</p> <p>For an Aurora DB cluster, failover
         * for a DB cluster promotes one of the Aurora Replicas (read-only instances) in
         * the DB cluster to be the primary DB instance (the cluster writer).</p> <p>For a
         * Multi-AZ DB cluster, after RDS terminates the primary DB instance, the internal
         * monitoring system detects that the primary DB instance is unhealthy and promotes
         * a readable standby (read-only instances) in the DB cluster to be the primary DB
         * instance (the cluster writer). Failover times are typically less than 35
         * seconds.</p> <p>An Amazon Aurora DB cluster automatically fails over to an
         * Aurora Replica, if one exists, when the primary DB instance fails. A Multi-AZ DB
         * cluster automatically fails over to a readable standby DB instance when the
         * primary DB instance fails.</p> <p>To simulate a failure of a primary instance
         * for testing, you can force a failover. Because each instance in a DB cluster has
         * its own endpoint address, make sure to clean up and re-establish any existing
         * connections that use those endpoint addresses when the failover is complete.</p>
         * <p>For more information on Amazon Aurora DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ DB cluster deployments</a> in the <i>Amazon RDS User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/FailoverDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::FailoverDBClusterOutcome FailoverDBCluster(const Model::FailoverDBClusterRequest& request) const;

        /**
         * A Callable wrapper for FailoverDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename FailoverDBClusterRequestT = Model::FailoverDBClusterRequest>
        Model::FailoverDBClusterOutcomeCallable FailoverDBClusterCallable(const FailoverDBClusterRequestT& request) const
        {
            return SubmitCallable(&RDSClient::FailoverDBCluster, request);
        }

        /**
         * An Async wrapper for FailoverDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename FailoverDBClusterRequestT = Model::FailoverDBClusterRequest>
        void FailoverDBClusterAsync(const FailoverDBClusterRequestT& request, const FailoverDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::FailoverDBCluster, request, handler, context);
        }

        /**
         * <p>Promotes the specified secondary DB cluster to be the primary DB cluster in
         * the global database cluster to fail over or switch over a global database.
         * Switchover operations were previously called "managed planned failovers."</p>
         *  <p>Although this operation can be used either to fail over or to switch
         * over a global database cluster, its intended use is for global database
         * failover. To switch over a global database cluster, we recommend that you use
         * the <a>SwitchoverGlobalCluster</a> operation instead.</p>  <p>How you use
         * this operation depends on whether you are failing over or switching over your
         * global database cluster:</p> <ul> <li> <p>Failing over - Specify the
         * <code>AllowDataLoss</code> parameter and don't specify the
         * <code>Switchover</code> parameter.</p> </li> <li> <p>Switching over - Specify
         * the <code>Switchover</code> parameter or omit it, but don't specify the
         * <code>AllowDataLoss</code> parameter.</p> </li> </ul> <p> <b>About failing over
         * and switching over</b> </p> <p>While failing over and switching over a global
         * database cluster both change the primary DB cluster, you use these operations
         * for different reasons:</p> <ul> <li> <p> <i>Failing over</i> - Use this
         * operation to respond to an unplanned event, such as a Regional disaster in the
         * primary Region. Failing over can result in a loss of write transaction data that
         * wasn't replicated to the chosen secondary before the failover event occurred.
         * However, the recovery process that promotes a DB instance on the chosen seconday
         * DB cluster to be the primary writer DB instance guarantees that the data is in a
         * transactionally consistent state.</p> <p>For more information about failing over
         * an Amazon Aurora global database, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-global-database-disaster-recovery.html#aurora-global-database-failover.managed-unplanned">Performing
         * managed failovers for Aurora global databases</a> in the <i>Amazon Aurora User
         * Guide</i>.</p> </li> <li> <p> <i>Switching over</i> - Use this operation on a
         * healthy global database cluster for planned events, such as Regional rotation or
         * to fail back to the original primary DB cluster after a failover operation. With
         * this operation, there is no data loss.</p> <p>For more information about
         * switching over an Amazon Aurora global database, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-global-database-disaster-recovery.html#aurora-global-database-disaster-recovery.managed-failover">Performing
         * switchovers for Aurora global databases</a> in the <i>Amazon Aurora User
         * Guide</i>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/FailoverGlobalCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::FailoverGlobalClusterOutcome FailoverGlobalCluster(const Model::FailoverGlobalClusterRequest& request) const;

        /**
         * A Callable wrapper for FailoverGlobalCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename FailoverGlobalClusterRequestT = Model::FailoverGlobalClusterRequest>
        Model::FailoverGlobalClusterOutcomeCallable FailoverGlobalClusterCallable(const FailoverGlobalClusterRequestT& request) const
        {
            return SubmitCallable(&RDSClient::FailoverGlobalCluster, request);
        }

        /**
         * An Async wrapper for FailoverGlobalCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename FailoverGlobalClusterRequestT = Model::FailoverGlobalClusterRequest>
        void FailoverGlobalClusterAsync(const FailoverGlobalClusterRequestT& request, const FailoverGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::FailoverGlobalCluster, request, handler, context);
        }

        /**
         * <p>Lists all tags on an Amazon RDS resource.</p> <p>For an overview on tagging
         * an Amazon RDS resource, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging
         * Amazon RDS Resources</a> in the <i>Amazon RDS User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&RDSClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Changes the audit policy state of a database activity stream to either locked
         * (default) or unlocked. A locked policy is read-only, whereas an unlocked policy
         * is read/write. If your activity stream is started and locked, you can unlock it,
         * customize your audit policy, and then lock your activity stream. Restarting the
         * activity stream isn't required. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/DBActivityStreams.Modifying.html">
         * Modifying a database activity stream</a> in the <i>Amazon RDS User Guide</i>.
         * </p> <p>This operation is supported for RDS for Oracle and Microsoft SQL
         * Server.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyActivityStream">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyActivityStreamOutcome ModifyActivityStream(const Model::ModifyActivityStreamRequest& request) const;

        /**
         * A Callable wrapper for ModifyActivityStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyActivityStreamRequestT = Model::ModifyActivityStreamRequest>
        Model::ModifyActivityStreamOutcomeCallable ModifyActivityStreamCallable(const ModifyActivityStreamRequestT& request) const
        {
            return SubmitCallable(&RDSClient::ModifyActivityStream, request);
        }

        /**
         * An Async wrapper for ModifyActivityStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyActivityStreamRequestT = Model::ModifyActivityStreamRequest>
        void ModifyActivityStreamAsync(const ModifyActivityStreamRequestT& request, const ModifyActivityStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::ModifyActivityStream, request, handler, context);
        }

        /**
         * <p>Override the system-default Secure Sockets Layer/Transport Layer Security
         * (SSL/TLS) certificate for Amazon RDS for new DB instances, or remove the
         * override.</p> <p>By using this operation, you can specify an RDS-approved
         * SSL/TLS certificate for new DB instances that is different from the default
         * certificate provided by RDS. You can also use this operation to remove the
         * override, so that new DB instances use the default certificate provided by
         * RDS.</p> <p>You might need to override the default certificate in the following
         * situations:</p> <ul> <li> <p>You already migrated your applications to support
         * the latest certificate authority (CA) certificate, but the new CA certificate is
         * not yet the RDS default CA certificate for the specified Amazon Web Services
         * Region.</p> </li> <li> <p>RDS has already moved to a new default CA certificate
         * for the specified Amazon Web Services Region, but you are still in the process
         * of supporting the new CA certificate. In this case, you temporarily need
         * additional time to finish your application changes.</p> </li> </ul> <p>For more
         * information about rotating your SSL/TLS certificate for RDS DB engines, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.SSL-certificate-rotation.html">
         * Rotating Your SSL/TLS Certificate</a> in the <i>Amazon RDS User Guide</i>.</p>
         * <p>For more information about rotating your SSL/TLS certificate for Aurora DB
         * engines, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.SSL-certificate-rotation.html">
         * Rotating Your SSL/TLS Certificate</a> in the <i>Amazon Aurora User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyCertificatesOutcome ModifyCertificates(const Model::ModifyCertificatesRequest& request) const;

        /**
         * A Callable wrapper for ModifyCertificates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyCertificatesRequestT = Model::ModifyCertificatesRequest>
        Model::ModifyCertificatesOutcomeCallable ModifyCertificatesCallable(const ModifyCertificatesRequestT& request) const
        {
            return SubmitCallable(&RDSClient::ModifyCertificates, request);
        }

        /**
         * An Async wrapper for ModifyCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyCertificatesRequestT = Model::ModifyCertificatesRequest>
        void ModifyCertificatesAsync(const ModifyCertificatesRequestT& request, const ModifyCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::ModifyCertificates, request, handler, context);
        }

        /**
         * <p>Set the capacity of an Aurora Serverless v1 DB cluster to a specific
         * value.</p> <p>Aurora Serverless v1 scales seamlessly based on the workload on
         * the DB cluster. In some cases, the capacity might not scale fast enough to meet
         * a sudden change in workload, such as a large number of new transactions. Call
         * <code>ModifyCurrentDBClusterCapacity</code> to set the capacity explicitly.</p>
         * <p>After this call sets the DB cluster capacity, Aurora Serverless v1 can
         * automatically scale the DB cluster based on the cooldown period for scaling up
         * and the cooldown period for scaling down.</p> <p>For more information about
         * Aurora Serverless v1, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.html">Using
         * Amazon Aurora Serverless v1</a> in the <i>Amazon Aurora User Guide</i>.</p>
         *  <p>If you call <code>ModifyCurrentDBClusterCapacity</code> with the
         * default <code>TimeoutAction</code>, connections that prevent Aurora Serverless
         * v1 from finding a scaling point might be dropped. For more information about
         * scaling points, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.how-it-works.html#aurora-serverless.how-it-works.auto-scaling">
         * Autoscaling for Aurora Serverless v1</a> in the <i>Amazon Aurora User
         * Guide</i>.</p>   <p>This operation only applies to Aurora
         * Serverless v1 DB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyCurrentDBClusterCapacity">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyCurrentDBClusterCapacityOutcome ModifyCurrentDBClusterCapacity(const Model::ModifyCurrentDBClusterCapacityRequest& request) const;

        /**
         * A Callable wrapper for ModifyCurrentDBClusterCapacity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyCurrentDBClusterCapacityRequestT = Model::ModifyCurrentDBClusterCapacityRequest>
        Model::ModifyCurrentDBClusterCapacityOutcomeCallable ModifyCurrentDBClusterCapacityCallable(const ModifyCurrentDBClusterCapacityRequestT& request) const
        {
            return SubmitCallable(&RDSClient::ModifyCurrentDBClusterCapacity, request);
        }

        /**
         * An Async wrapper for ModifyCurrentDBClusterCapacity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyCurrentDBClusterCapacityRequestT = Model::ModifyCurrentDBClusterCapacityRequest>
        void ModifyCurrentDBClusterCapacityAsync(const ModifyCurrentDBClusterCapacityRequestT& request, const ModifyCurrentDBClusterCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::ModifyCurrentDBClusterCapacity, request, handler, context);
        }

        /**
         * <p>Modifies the status of a custom engine version (CEV). You can find CEVs to
         * modify by calling <code>DescribeDBEngineVersions</code>.</p>  <p>The
         * MediaImport service that imports files from Amazon S3 to create CEVs isn't
         * integrated with Amazon Web Services CloudTrail. If you turn on data logging for
         * Amazon RDS in CloudTrail, calls to the <code>ModifyCustomDbEngineVersion</code>
         * event aren't logged. However, you might see calls from the API gateway that
         * accesses your Amazon S3 bucket. These calls originate from the MediaImport
         * service for the <code>ModifyCustomDbEngineVersion</code> event.</p> 
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-cev.html#custom-cev.modify">Modifying
         * CEV status</a> in the <i>Amazon RDS User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyCustomDBEngineVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyCustomDBEngineVersionOutcome ModifyCustomDBEngineVersion(const Model::ModifyCustomDBEngineVersionRequest& request) const;

        /**
         * A Callable wrapper for ModifyCustomDBEngineVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyCustomDBEngineVersionRequestT = Model::ModifyCustomDBEngineVersionRequest>
        Model::ModifyCustomDBEngineVersionOutcomeCallable ModifyCustomDBEngineVersionCallable(const ModifyCustomDBEngineVersionRequestT& request) const
        {
            return SubmitCallable(&RDSClient::ModifyCustomDBEngineVersion, request);
        }

        /**
         * An Async wrapper for ModifyCustomDBEngineVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyCustomDBEngineVersionRequestT = Model::ModifyCustomDBEngineVersionRequest>
        void ModifyCustomDBEngineVersionAsync(const ModifyCustomDBEngineVersionRequestT& request, const ModifyCustomDBEngineVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::ModifyCustomDBEngineVersion, request, handler, context);
        }

        /**
         * <p>Modifies the settings of an Amazon Aurora DB cluster or a Multi-AZ DB
         * cluster. You can change one or more settings by specifying these parameters and
         * the new values in the request.</p> <p>For more information on Amazon Aurora DB
         * clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ DB cluster deployments</a> in the <i>Amazon RDS User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBClusterOutcome ModifyDBCluster(const Model::ModifyDBClusterRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyDBClusterRequestT = Model::ModifyDBClusterRequest>
        Model::ModifyDBClusterOutcomeCallable ModifyDBClusterCallable(const ModifyDBClusterRequestT& request) const
        {
            return SubmitCallable(&RDSClient::ModifyDBCluster, request);
        }

        /**
         * An Async wrapper for ModifyDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyDBClusterRequestT = Model::ModifyDBClusterRequest>
        void ModifyDBClusterAsync(const ModifyDBClusterRequestT& request, const ModifyDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::ModifyDBCluster, request, handler, context);
        }

        /**
         * <p>Modifies the properties of an endpoint in an Amazon Aurora DB cluster.</p>
         *  <p>This operation only applies to Aurora DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBClusterEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBClusterEndpointOutcome ModifyDBClusterEndpoint(const Model::ModifyDBClusterEndpointRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBClusterEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyDBClusterEndpointRequestT = Model::ModifyDBClusterEndpointRequest>
        Model::ModifyDBClusterEndpointOutcomeCallable ModifyDBClusterEndpointCallable(const ModifyDBClusterEndpointRequestT& request) const
        {
            return SubmitCallable(&RDSClient::ModifyDBClusterEndpoint, request);
        }

        /**
         * An Async wrapper for ModifyDBClusterEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyDBClusterEndpointRequestT = Model::ModifyDBClusterEndpointRequest>
        void ModifyDBClusterEndpointAsync(const ModifyDBClusterEndpointRequestT& request, const ModifyDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::ModifyDBClusterEndpoint, request, handler, context);
        }

        /**
         * <p>Modifies the parameters of a DB cluster parameter group. To modify more than
         * one parameter, submit a list of the following: <code>ParameterName</code>,
         * <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20
         * parameters can be modified in a single request.</p>  <p>After you
         * create a DB cluster parameter group, you should wait at least 5 minutes before
         * creating your first DB cluster that uses that DB cluster parameter group as the
         * default parameter group. This allows Amazon RDS to fully complete the create
         * operation before the parameter group is used as the default for a new DB
         * cluster. This is especially important for parameters that are critical when
         * creating the default database for a DB cluster, such as the character set for
         * the default database defined by the <code>character_set_database</code>
         * parameter. You can use the <i>Parameter Groups</i> option of the <a
         * href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the
         * <code>DescribeDBClusterParameters</code> operation to verify that your DB
         * cluster parameter group has been created or modified.</p> <p>If the modified DB
         * cluster parameter group is used by an Aurora Serverless v1 cluster, Aurora
         * applies the update immediately. The cluster restart might interrupt your
         * workload. In that case, your application must reopen any connections and retry
         * any transactions that were active when the parameter changes took effect.</p>
         *  <p>For more information on Amazon Aurora DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ DB cluster deployments</a> in the <i>Amazon RDS User Guide.</i>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBClusterParameterGroupOutcome ModifyDBClusterParameterGroup(const Model::ModifyDBClusterParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBClusterParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyDBClusterParameterGroupRequestT = Model::ModifyDBClusterParameterGroupRequest>
        Model::ModifyDBClusterParameterGroupOutcomeCallable ModifyDBClusterParameterGroupCallable(const ModifyDBClusterParameterGroupRequestT& request) const
        {
            return SubmitCallable(&RDSClient::ModifyDBClusterParameterGroup, request);
        }

        /**
         * An Async wrapper for ModifyDBClusterParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyDBClusterParameterGroupRequestT = Model::ModifyDBClusterParameterGroupRequest>
        void ModifyDBClusterParameterGroupAsync(const ModifyDBClusterParameterGroupRequestT& request, const ModifyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::ModifyDBClusterParameterGroup, request, handler, context);
        }

        /**
         * <p>Adds an attribute and values to, or removes an attribute and values from, a
         * manual DB cluster snapshot.</p> <p>To share a manual DB cluster snapshot with
         * other Amazon Web Services accounts, specify <code>restore</code> as the
         * <code>AttributeName</code> and use the <code>ValuesToAdd</code> parameter to add
         * a list of IDs of the Amazon Web Services accounts that are authorized to restore
         * the manual DB cluster snapshot. Use the value <code>all</code> to make the
         * manual DB cluster snapshot public, which means that it can be copied or restored
         * by all Amazon Web Services accounts.</p>  <p>Don't add the
         * <code>all</code> value for any manual DB cluster snapshots that contain private
         * information that you don't want available to all Amazon Web Services
         * accounts.</p>  <p>If a manual DB cluster snapshot is encrypted, it can be
         * shared, but only by specifying a list of authorized Amazon Web Services account
         * IDs for the <code>ValuesToAdd</code> parameter. You can't use <code>all</code>
         * as a value for that parameter in this case.</p> <p>To view which Amazon Web
         * Services accounts have access to copy or restore a manual DB cluster snapshot,
         * or whether a manual DB cluster snapshot is public or private, use the
         * <a>DescribeDBClusterSnapshotAttributes</a> API operation. The accounts are
         * returned as values for the <code>restore</code> attribute.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBClusterSnapshotAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBClusterSnapshotAttributeOutcome ModifyDBClusterSnapshotAttribute(const Model::ModifyDBClusterSnapshotAttributeRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBClusterSnapshotAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyDBClusterSnapshotAttributeRequestT = Model::ModifyDBClusterSnapshotAttributeRequest>
        Model::ModifyDBClusterSnapshotAttributeOutcomeCallable ModifyDBClusterSnapshotAttributeCallable(const ModifyDBClusterSnapshotAttributeRequestT& request) const
        {
            return SubmitCallable(&RDSClient::ModifyDBClusterSnapshotAttribute, request);
        }

        /**
         * An Async wrapper for ModifyDBClusterSnapshotAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyDBClusterSnapshotAttributeRequestT = Model::ModifyDBClusterSnapshotAttributeRequest>
        void ModifyDBClusterSnapshotAttributeAsync(const ModifyDBClusterSnapshotAttributeRequestT& request, const ModifyDBClusterSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::ModifyDBClusterSnapshotAttribute, request, handler, context);
        }

        /**
         * <p>Modifies settings for a DB instance. You can change one or more database
         * configuration parameters by specifying these parameters and the new values in
         * the request. To learn what modifications you can make to your DB instance, call
         * <code>DescribeValidDBInstanceModifications</code> before you call
         * <code>ModifyDBInstance</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBInstanceOutcome ModifyDBInstance(const Model::ModifyDBInstanceRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyDBInstanceRequestT = Model::ModifyDBInstanceRequest>
        Model::ModifyDBInstanceOutcomeCallable ModifyDBInstanceCallable(const ModifyDBInstanceRequestT& request) const
        {
            return SubmitCallable(&RDSClient::ModifyDBInstance, request);
        }

        /**
         * An Async wrapper for ModifyDBInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyDBInstanceRequestT = Model::ModifyDBInstanceRequest>
        void ModifyDBInstanceAsync(const ModifyDBInstanceRequestT& request, const ModifyDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::ModifyDBInstance, request, handler, context);
        }

        /**
         * <p>Modifies the parameters of a DB parameter group. To modify more than one
         * parameter, submit a list of the following: <code>ParameterName</code>,
         * <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20
         * parameters can be modified in a single request.</p>  <p>After you
         * modify a DB parameter group, you should wait at least 5 minutes before creating
         * your first DB instance that uses that DB parameter group as the default
         * parameter group. This allows Amazon RDS to fully complete the modify operation
         * before the parameter group is used as the default for a new DB instance. This is
         * especially important for parameters that are critical when creating the default
         * database for a DB instance, such as the character set for the default database
         * defined by the <code>character_set_database</code> parameter. You can use the
         * <i>Parameter Groups</i> option of the <a
         * href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the
         * <i>DescribeDBParameters</i> command to verify that your DB parameter group has
         * been created or modified.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBParameterGroupOutcome ModifyDBParameterGroup(const Model::ModifyDBParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyDBParameterGroupRequestT = Model::ModifyDBParameterGroupRequest>
        Model::ModifyDBParameterGroupOutcomeCallable ModifyDBParameterGroupCallable(const ModifyDBParameterGroupRequestT& request) const
        {
            return SubmitCallable(&RDSClient::ModifyDBParameterGroup, request);
        }

        /**
         * An Async wrapper for ModifyDBParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyDBParameterGroupRequestT = Model::ModifyDBParameterGroupRequest>
        void ModifyDBParameterGroupAsync(const ModifyDBParameterGroupRequestT& request, const ModifyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::ModifyDBParameterGroup, request, handler, context);
        }

        /**
         * <p>Changes the settings for an existing DB proxy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBProxy">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBProxyOutcome ModifyDBProxy(const Model::ModifyDBProxyRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBProxy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyDBProxyRequestT = Model::ModifyDBProxyRequest>
        Model::ModifyDBProxyOutcomeCallable ModifyDBProxyCallable(const ModifyDBProxyRequestT& request) const
        {
            return SubmitCallable(&RDSClient::ModifyDBProxy, request);
        }

        /**
         * An Async wrapper for ModifyDBProxy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyDBProxyRequestT = Model::ModifyDBProxyRequest>
        void ModifyDBProxyAsync(const ModifyDBProxyRequestT& request, const ModifyDBProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::ModifyDBProxy, request, handler, context);
        }

        /**
         * <p>Changes the settings for an existing DB proxy endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBProxyEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBProxyEndpointOutcome ModifyDBProxyEndpoint(const Model::ModifyDBProxyEndpointRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBProxyEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyDBProxyEndpointRequestT = Model::ModifyDBProxyEndpointRequest>
        Model::ModifyDBProxyEndpointOutcomeCallable ModifyDBProxyEndpointCallable(const ModifyDBProxyEndpointRequestT& request) const
        {
            return SubmitCallable(&RDSClient::ModifyDBProxyEndpoint, request);
        }

        /**
         * An Async wrapper for ModifyDBProxyEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyDBProxyEndpointRequestT = Model::ModifyDBProxyEndpointRequest>
        void ModifyDBProxyEndpointAsync(const ModifyDBProxyEndpointRequestT& request, const ModifyDBProxyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::ModifyDBProxyEndpoint, request, handler, context);
        }

        /**
         * <p>Modifies the properties of a <code>DBProxyTargetGroup</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBProxyTargetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBProxyTargetGroupOutcome ModifyDBProxyTargetGroup(const Model::ModifyDBProxyTargetGroupRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBProxyTargetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyDBProxyTargetGroupRequestT = Model::ModifyDBProxyTargetGroupRequest>
        Model::ModifyDBProxyTargetGroupOutcomeCallable ModifyDBProxyTargetGroupCallable(const ModifyDBProxyTargetGroupRequestT& request) const
        {
            return SubmitCallable(&RDSClient::ModifyDBProxyTargetGroup, request);
        }

        /**
         * An Async wrapper for ModifyDBProxyTargetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyDBProxyTargetGroupRequestT = Model::ModifyDBProxyTargetGroupRequest>
        void ModifyDBProxyTargetGroupAsync(const ModifyDBProxyTargetGroupRequestT& request, const ModifyDBProxyTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::ModifyDBProxyTargetGroup, request, handler, context);
        }

        /**
         * <p>Updates the recommendation status and recommended action status for the
         * specified recommendation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBRecommendation">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBRecommendationOutcome ModifyDBRecommendation(const Model::ModifyDBRecommendationRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBRecommendation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyDBRecommendationRequestT = Model::ModifyDBRecommendationRequest>
        Model::ModifyDBRecommendationOutcomeCallable ModifyDBRecommendationCallable(const ModifyDBRecommendationRequestT& request) const
        {
            return SubmitCallable(&RDSClient::ModifyDBRecommendation, request);
        }

        /**
         * An Async wrapper for ModifyDBRecommendation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyDBRecommendationRequestT = Model::ModifyDBRecommendationRequest>
        void ModifyDBRecommendationAsync(const ModifyDBRecommendationRequestT& request, const ModifyDBRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::ModifyDBRecommendation, request, handler, context);
        }

        /**
         * <p>Modifies the settings of an Aurora Limitless Database DB shard group. You can
         * change one or more settings by specifying these parameters and the new values in
         * the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBShardGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBShardGroupOutcome ModifyDBShardGroup(const Model::ModifyDBShardGroupRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBShardGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyDBShardGroupRequestT = Model::ModifyDBShardGroupRequest>
        Model::ModifyDBShardGroupOutcomeCallable ModifyDBShardGroupCallable(const ModifyDBShardGroupRequestT& request) const
        {
            return SubmitCallable(&RDSClient::ModifyDBShardGroup, request);
        }

        /**
         * An Async wrapper for ModifyDBShardGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyDBShardGroupRequestT = Model::ModifyDBShardGroupRequest>
        void ModifyDBShardGroupAsync(const ModifyDBShardGroupRequestT& request, const ModifyDBShardGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::ModifyDBShardGroup, request, handler, context);
        }

        /**
         * <p>Updates a manual DB snapshot with a new engine version. The snapshot can be
         * encrypted or unencrypted, but not shared or public. </p> <p>Amazon RDS supports
         * upgrading DB snapshots for MySQL, PostgreSQL, and Oracle. This operation doesn't
         * apply to RDS Custom or RDS for Db2.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBSnapshotOutcome ModifyDBSnapshot(const Model::ModifyDBSnapshotRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyDBSnapshotRequestT = Model::ModifyDBSnapshotRequest>
        Model::ModifyDBSnapshotOutcomeCallable ModifyDBSnapshotCallable(const ModifyDBSnapshotRequestT& request) const
        {
            return SubmitCallable(&RDSClient::ModifyDBSnapshot, request);
        }

        /**
         * An Async wrapper for ModifyDBSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyDBSnapshotRequestT = Model::ModifyDBSnapshotRequest>
        void ModifyDBSnapshotAsync(const ModifyDBSnapshotRequestT& request, const ModifyDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::ModifyDBSnapshot, request, handler, context);
        }

        /**
         * <p>Adds an attribute and values to, or removes an attribute and values from, a
         * manual DB snapshot.</p> <p>To share a manual DB snapshot with other Amazon Web
         * Services accounts, specify <code>restore</code> as the
         * <code>AttributeName</code> and use the <code>ValuesToAdd</code> parameter to add
         * a list of IDs of the Amazon Web Services accounts that are authorized to restore
         * the manual DB snapshot. Uses the value <code>all</code> to make the manual DB
         * snapshot public, which means it can be copied or restored by all Amazon Web
         * Services accounts.</p>  <p>Don't add the <code>all</code> value for any
         * manual DB snapshots that contain private information that you don't want
         * available to all Amazon Web Services accounts.</p>  <p>If the manual DB
         * snapshot is encrypted, it can be shared, but only by specifying a list of
         * authorized Amazon Web Services account IDs for the <code>ValuesToAdd</code>
         * parameter. You can't use <code>all</code> as a value for that parameter in this
         * case.</p> <p>To view which Amazon Web Services accounts have access to copy or
         * restore a manual DB snapshot, or whether a manual DB snapshot public or private,
         * use the <a>DescribeDBSnapshotAttributes</a> API operation. The accounts are
         * returned as values for the <code>restore</code> attribute.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBSnapshotAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBSnapshotAttributeOutcome ModifyDBSnapshotAttribute(const Model::ModifyDBSnapshotAttributeRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBSnapshotAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyDBSnapshotAttributeRequestT = Model::ModifyDBSnapshotAttributeRequest>
        Model::ModifyDBSnapshotAttributeOutcomeCallable ModifyDBSnapshotAttributeCallable(const ModifyDBSnapshotAttributeRequestT& request) const
        {
            return SubmitCallable(&RDSClient::ModifyDBSnapshotAttribute, request);
        }

        /**
         * An Async wrapper for ModifyDBSnapshotAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyDBSnapshotAttributeRequestT = Model::ModifyDBSnapshotAttributeRequest>
        void ModifyDBSnapshotAttributeAsync(const ModifyDBSnapshotAttributeRequestT& request, const ModifyDBSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::ModifyDBSnapshotAttribute, request, handler, context);
        }

        /**
         * <p>Modifies an existing DB subnet group. DB subnet groups must contain at least
         * one subnet in at least two AZs in the Amazon Web Services Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBSubnetGroupOutcome ModifyDBSubnetGroup(const Model::ModifyDBSubnetGroupRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBSubnetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyDBSubnetGroupRequestT = Model::ModifyDBSubnetGroupRequest>
        Model::ModifyDBSubnetGroupOutcomeCallable ModifyDBSubnetGroupCallable(const ModifyDBSubnetGroupRequestT& request) const
        {
            return SubmitCallable(&RDSClient::ModifyDBSubnetGroup, request);
        }

        /**
         * An Async wrapper for ModifyDBSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyDBSubnetGroupRequestT = Model::ModifyDBSubnetGroupRequest>
        void ModifyDBSubnetGroupAsync(const ModifyDBSubnetGroupRequestT& request, const ModifyDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::ModifyDBSubnetGroup, request, handler, context);
        }

        /**
         * <p>Modifies an existing RDS event notification subscription. You can't modify
         * the source identifiers using this call. To change source identifiers for a
         * subscription, use the <code>AddSourceIdentifierToSubscription</code> and
         * <code>RemoveSourceIdentifierFromSubscription</code> calls.</p> <p>You can see a
         * list of the event categories for a given source type (<code>SourceType</code>)
         * in <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.html">Events</a>
         * in the <i>Amazon RDS User Guide</i> or by using the
         * <code>DescribeEventCategories</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyEventSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyEventSubscriptionOutcome ModifyEventSubscription(const Model::ModifyEventSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for ModifyEventSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyEventSubscriptionRequestT = Model::ModifyEventSubscriptionRequest>
        Model::ModifyEventSubscriptionOutcomeCallable ModifyEventSubscriptionCallable(const ModifyEventSubscriptionRequestT& request) const
        {
            return SubmitCallable(&RDSClient::ModifyEventSubscription, request);
        }

        /**
         * An Async wrapper for ModifyEventSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyEventSubscriptionRequestT = Model::ModifyEventSubscriptionRequest>
        void ModifyEventSubscriptionAsync(const ModifyEventSubscriptionRequestT& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::ModifyEventSubscription, request, handler, context);
        }

        /**
         * <p>Modifies a setting for an Amazon Aurora global database cluster. You can
         * change one or more database configuration parameters by specifying these
         * parameters and the new values in the request. For more information on Amazon
         * Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> 
         * <p>This operation only applies to Aurora global database clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyGlobalCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyGlobalClusterOutcome ModifyGlobalCluster(const Model::ModifyGlobalClusterRequest& request) const;

        /**
         * A Callable wrapper for ModifyGlobalCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyGlobalClusterRequestT = Model::ModifyGlobalClusterRequest>
        Model::ModifyGlobalClusterOutcomeCallable ModifyGlobalClusterCallable(const ModifyGlobalClusterRequestT& request) const
        {
            return SubmitCallable(&RDSClient::ModifyGlobalCluster, request);
        }

        /**
         * An Async wrapper for ModifyGlobalCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyGlobalClusterRequestT = Model::ModifyGlobalClusterRequest>
        void ModifyGlobalClusterAsync(const ModifyGlobalClusterRequestT& request, const ModifyGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::ModifyGlobalCluster, request, handler, context);
        }

        /**
         * <p>Modifies an existing option group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyOptionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyOptionGroupOutcome ModifyOptionGroup(const Model::ModifyOptionGroupRequest& request) const;

        /**
         * A Callable wrapper for ModifyOptionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyOptionGroupRequestT = Model::ModifyOptionGroupRequest>
        Model::ModifyOptionGroupOutcomeCallable ModifyOptionGroupCallable(const ModifyOptionGroupRequestT& request) const
        {
            return SubmitCallable(&RDSClient::ModifyOptionGroup, request);
        }

        /**
         * An Async wrapper for ModifyOptionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyOptionGroupRequestT = Model::ModifyOptionGroupRequest>
        void ModifyOptionGroupAsync(const ModifyOptionGroupRequestT& request, const ModifyOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::ModifyOptionGroup, request, handler, context);
        }

        /**
         * <p>Modifies an existing tenant database in a DB instance. You can change the
         * tenant database name or the master user password. This operation is supported
         * only for RDS for Oracle CDB instances using the multi-tenant
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyTenantDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyTenantDatabaseOutcome ModifyTenantDatabase(const Model::ModifyTenantDatabaseRequest& request) const;

        /**
         * A Callable wrapper for ModifyTenantDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyTenantDatabaseRequestT = Model::ModifyTenantDatabaseRequest>
        Model::ModifyTenantDatabaseOutcomeCallable ModifyTenantDatabaseCallable(const ModifyTenantDatabaseRequestT& request) const
        {
            return SubmitCallable(&RDSClient::ModifyTenantDatabase, request);
        }

        /**
         * An Async wrapper for ModifyTenantDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyTenantDatabaseRequestT = Model::ModifyTenantDatabaseRequest>
        void ModifyTenantDatabaseAsync(const ModifyTenantDatabaseRequestT& request, const ModifyTenantDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::ModifyTenantDatabase, request, handler, context);
        }

        /**
         * <p>Promotes a read replica DB instance to a standalone DB instance.</p> 
         * <ul> <li> <p>Backup duration is a function of the amount of changes to the
         * database since the previous backup. If you plan to promote a read replica to a
         * standalone instance, we recommend that you enable backups and complete at least
         * one backup prior to promotion. In addition, a read replica cannot be promoted to
         * a standalone instance when it is in the <code>backing-up</code> status. If you
         * have enabled backups on your read replica, configure the automated backup window
         * so that daily backups do not interfere with read replica promotion.</p> </li>
         * <li> <p>This command doesn't apply to Aurora MySQL, Aurora PostgreSQL, or RDS
         * Custom.</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/PromoteReadReplica">AWS
         * API Reference</a></p>
         */
        virtual Model::PromoteReadReplicaOutcome PromoteReadReplica(const Model::PromoteReadReplicaRequest& request) const;

        /**
         * A Callable wrapper for PromoteReadReplica that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PromoteReadReplicaRequestT = Model::PromoteReadReplicaRequest>
        Model::PromoteReadReplicaOutcomeCallable PromoteReadReplicaCallable(const PromoteReadReplicaRequestT& request) const
        {
            return SubmitCallable(&RDSClient::PromoteReadReplica, request);
        }

        /**
         * An Async wrapper for PromoteReadReplica that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PromoteReadReplicaRequestT = Model::PromoteReadReplicaRequest>
        void PromoteReadReplicaAsync(const PromoteReadReplicaRequestT& request, const PromoteReadReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::PromoteReadReplica, request, handler, context);
        }

        /**
         * <p>Promotes a read replica DB cluster to a standalone DB cluster.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/PromoteReadReplicaDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::PromoteReadReplicaDBClusterOutcome PromoteReadReplicaDBCluster(const Model::PromoteReadReplicaDBClusterRequest& request) const;

        /**
         * A Callable wrapper for PromoteReadReplicaDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PromoteReadReplicaDBClusterRequestT = Model::PromoteReadReplicaDBClusterRequest>
        Model::PromoteReadReplicaDBClusterOutcomeCallable PromoteReadReplicaDBClusterCallable(const PromoteReadReplicaDBClusterRequestT& request) const
        {
            return SubmitCallable(&RDSClient::PromoteReadReplicaDBCluster, request);
        }

        /**
         * An Async wrapper for PromoteReadReplicaDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PromoteReadReplicaDBClusterRequestT = Model::PromoteReadReplicaDBClusterRequest>
        void PromoteReadReplicaDBClusterAsync(const PromoteReadReplicaDBClusterRequestT& request, const PromoteReadReplicaDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::PromoteReadReplicaDBCluster, request, handler, context);
        }

        /**
         * <p>Purchases a reserved DB instance offering.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/PurchaseReservedDBInstancesOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseReservedDBInstancesOfferingOutcome PurchaseReservedDBInstancesOffering(const Model::PurchaseReservedDBInstancesOfferingRequest& request) const;

        /**
         * A Callable wrapper for PurchaseReservedDBInstancesOffering that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PurchaseReservedDBInstancesOfferingRequestT = Model::PurchaseReservedDBInstancesOfferingRequest>
        Model::PurchaseReservedDBInstancesOfferingOutcomeCallable PurchaseReservedDBInstancesOfferingCallable(const PurchaseReservedDBInstancesOfferingRequestT& request) const
        {
            return SubmitCallable(&RDSClient::PurchaseReservedDBInstancesOffering, request);
        }

        /**
         * An Async wrapper for PurchaseReservedDBInstancesOffering that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PurchaseReservedDBInstancesOfferingRequestT = Model::PurchaseReservedDBInstancesOfferingRequest>
        void PurchaseReservedDBInstancesOfferingAsync(const PurchaseReservedDBInstancesOfferingRequestT& request, const PurchaseReservedDBInstancesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::PurchaseReservedDBInstancesOffering, request, handler, context);
        }

        /**
         * <p>You might need to reboot your DB cluster, usually for maintenance reasons.
         * For example, if you make certain modifications, or if you change the DB cluster
         * parameter group associated with the DB cluster, reboot the DB cluster for the
         * changes to take effect.</p> <p>Rebooting a DB cluster restarts the database
         * engine service. Rebooting a DB cluster results in a momentary outage, during
         * which the DB cluster status is set to rebooting.</p> <p>Use this operation only
         * for a non-Aurora Multi-AZ DB cluster.</p> <p>For more information on Multi-AZ DB
         * clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ DB cluster deployments</a> in the <i>Amazon RDS User Guide.</i>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RebootDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootDBClusterOutcome RebootDBCluster(const Model::RebootDBClusterRequest& request) const;

        /**
         * A Callable wrapper for RebootDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RebootDBClusterRequestT = Model::RebootDBClusterRequest>
        Model::RebootDBClusterOutcomeCallable RebootDBClusterCallable(const RebootDBClusterRequestT& request) const
        {
            return SubmitCallable(&RDSClient::RebootDBCluster, request);
        }

        /**
         * An Async wrapper for RebootDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RebootDBClusterRequestT = Model::RebootDBClusterRequest>
        void RebootDBClusterAsync(const RebootDBClusterRequestT& request, const RebootDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::RebootDBCluster, request, handler, context);
        }

        /**
         * <p>You might need to reboot your DB instance, usually for maintenance reasons.
         * For example, if you make certain modifications, or if you change the DB
         * parameter group associated with the DB instance, you must reboot the instance
         * for the changes to take effect.</p> <p>Rebooting a DB instance restarts the
         * database engine service. Rebooting a DB instance results in a momentary outage,
         * during which the DB instance status is set to rebooting.</p> <p>For more
         * information about rebooting, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_RebootInstance.html">Rebooting
         * a DB Instance</a> in the <i>Amazon RDS User Guide.</i> </p> <p>This command
         * doesn't apply to RDS Custom.</p> <p>If your DB instance is part of a Multi-AZ DB
         * cluster, you can reboot the DB cluster with the <code>RebootDBCluster</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RebootDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootDBInstanceOutcome RebootDBInstance(const Model::RebootDBInstanceRequest& request) const;

        /**
         * A Callable wrapper for RebootDBInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RebootDBInstanceRequestT = Model::RebootDBInstanceRequest>
        Model::RebootDBInstanceOutcomeCallable RebootDBInstanceCallable(const RebootDBInstanceRequestT& request) const
        {
            return SubmitCallable(&RDSClient::RebootDBInstance, request);
        }

        /**
         * An Async wrapper for RebootDBInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RebootDBInstanceRequestT = Model::RebootDBInstanceRequest>
        void RebootDBInstanceAsync(const RebootDBInstanceRequestT& request, const RebootDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::RebootDBInstance, request, handler, context);
        }

        /**
         * <p>You might need to reboot your DB shard group, usually for maintenance
         * reasons. For example, if you make certain modifications, reboot the DB shard
         * group for the changes to take effect.</p> <p>This operation applies only to
         * Aurora Limitless Database DBb shard groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RebootDBShardGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootDBShardGroupOutcome RebootDBShardGroup(const Model::RebootDBShardGroupRequest& request) const;

        /**
         * A Callable wrapper for RebootDBShardGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RebootDBShardGroupRequestT = Model::RebootDBShardGroupRequest>
        Model::RebootDBShardGroupOutcomeCallable RebootDBShardGroupCallable(const RebootDBShardGroupRequestT& request) const
        {
            return SubmitCallable(&RDSClient::RebootDBShardGroup, request);
        }

        /**
         * An Async wrapper for RebootDBShardGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RebootDBShardGroupRequestT = Model::RebootDBShardGroupRequest>
        void RebootDBShardGroupAsync(const RebootDBShardGroupRequestT& request, const RebootDBShardGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::RebootDBShardGroup, request, handler, context);
        }

        /**
         * <p>Associate one or more <code>DBProxyTarget</code> data structures with a
         * <code>DBProxyTargetGroup</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RegisterDBProxyTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterDBProxyTargetsOutcome RegisterDBProxyTargets(const Model::RegisterDBProxyTargetsRequest& request) const;

        /**
         * A Callable wrapper for RegisterDBProxyTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterDBProxyTargetsRequestT = Model::RegisterDBProxyTargetsRequest>
        Model::RegisterDBProxyTargetsOutcomeCallable RegisterDBProxyTargetsCallable(const RegisterDBProxyTargetsRequestT& request) const
        {
            return SubmitCallable(&RDSClient::RegisterDBProxyTargets, request);
        }

        /**
         * An Async wrapper for RegisterDBProxyTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterDBProxyTargetsRequestT = Model::RegisterDBProxyTargetsRequest>
        void RegisterDBProxyTargetsAsync(const RegisterDBProxyTargetsRequestT& request, const RegisterDBProxyTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::RegisterDBProxyTargets, request, handler, context);
        }

        /**
         * <p>Detaches an Aurora secondary cluster from an Aurora global database cluster.
         * The cluster becomes a standalone cluster with read-write capability instead of
         * being read-only and receiving data from a primary cluster in a different
         * Region.</p>  <p>This operation only applies to Aurora DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RemoveFromGlobalCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveFromGlobalClusterOutcome RemoveFromGlobalCluster(const Model::RemoveFromGlobalClusterRequest& request) const;

        /**
         * A Callable wrapper for RemoveFromGlobalCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveFromGlobalClusterRequestT = Model::RemoveFromGlobalClusterRequest>
        Model::RemoveFromGlobalClusterOutcomeCallable RemoveFromGlobalClusterCallable(const RemoveFromGlobalClusterRequestT& request) const
        {
            return SubmitCallable(&RDSClient::RemoveFromGlobalCluster, request);
        }

        /**
         * An Async wrapper for RemoveFromGlobalCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveFromGlobalClusterRequestT = Model::RemoveFromGlobalClusterRequest>
        void RemoveFromGlobalClusterAsync(const RemoveFromGlobalClusterRequestT& request, const RemoveFromGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::RemoveFromGlobalCluster, request, handler, context);
        }

        /**
         * <p>Removes the asssociation of an Amazon Web Services Identity and Access
         * Management (IAM) role from a DB cluster.</p> <p>For more information on Amazon
         * Aurora DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ DB cluster deployments</a> in the <i>Amazon RDS User Guide.</i>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RemoveRoleFromDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveRoleFromDBClusterOutcome RemoveRoleFromDBCluster(const Model::RemoveRoleFromDBClusterRequest& request) const;

        /**
         * A Callable wrapper for RemoveRoleFromDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveRoleFromDBClusterRequestT = Model::RemoveRoleFromDBClusterRequest>
        Model::RemoveRoleFromDBClusterOutcomeCallable RemoveRoleFromDBClusterCallable(const RemoveRoleFromDBClusterRequestT& request) const
        {
            return SubmitCallable(&RDSClient::RemoveRoleFromDBCluster, request);
        }

        /**
         * An Async wrapper for RemoveRoleFromDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveRoleFromDBClusterRequestT = Model::RemoveRoleFromDBClusterRequest>
        void RemoveRoleFromDBClusterAsync(const RemoveRoleFromDBClusterRequestT& request, const RemoveRoleFromDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::RemoveRoleFromDBCluster, request, handler, context);
        }

        /**
         * <p>Disassociates an Amazon Web Services Identity and Access Management (IAM)
         * role from a DB instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RemoveRoleFromDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveRoleFromDBInstanceOutcome RemoveRoleFromDBInstance(const Model::RemoveRoleFromDBInstanceRequest& request) const;

        /**
         * A Callable wrapper for RemoveRoleFromDBInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveRoleFromDBInstanceRequestT = Model::RemoveRoleFromDBInstanceRequest>
        Model::RemoveRoleFromDBInstanceOutcomeCallable RemoveRoleFromDBInstanceCallable(const RemoveRoleFromDBInstanceRequestT& request) const
        {
            return SubmitCallable(&RDSClient::RemoveRoleFromDBInstance, request);
        }

        /**
         * An Async wrapper for RemoveRoleFromDBInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveRoleFromDBInstanceRequestT = Model::RemoveRoleFromDBInstanceRequest>
        void RemoveRoleFromDBInstanceAsync(const RemoveRoleFromDBInstanceRequestT& request, const RemoveRoleFromDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::RemoveRoleFromDBInstance, request, handler, context);
        }

        /**
         * <p>Removes a source identifier from an existing RDS event notification
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RemoveSourceIdentifierFromSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveSourceIdentifierFromSubscriptionOutcome RemoveSourceIdentifierFromSubscription(const Model::RemoveSourceIdentifierFromSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for RemoveSourceIdentifierFromSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveSourceIdentifierFromSubscriptionRequestT = Model::RemoveSourceIdentifierFromSubscriptionRequest>
        Model::RemoveSourceIdentifierFromSubscriptionOutcomeCallable RemoveSourceIdentifierFromSubscriptionCallable(const RemoveSourceIdentifierFromSubscriptionRequestT& request) const
        {
            return SubmitCallable(&RDSClient::RemoveSourceIdentifierFromSubscription, request);
        }

        /**
         * An Async wrapper for RemoveSourceIdentifierFromSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveSourceIdentifierFromSubscriptionRequestT = Model::RemoveSourceIdentifierFromSubscriptionRequest>
        void RemoveSourceIdentifierFromSubscriptionAsync(const RemoveSourceIdentifierFromSubscriptionRequestT& request, const RemoveSourceIdentifierFromSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::RemoveSourceIdentifierFromSubscription, request, handler, context);
        }

        /**
         * <p>Removes metadata tags from an Amazon RDS resource.</p> <p>For an overview on
         * tagging an Amazon RDS resource, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging
         * Amazon RDS Resources</a> in the <i>Amazon RDS User Guide.</i> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * A Callable wrapper for RemoveTagsFromResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveTagsFromResourceRequestT = Model::RemoveTagsFromResourceRequest>
        Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const RemoveTagsFromResourceRequestT& request) const
        {
            return SubmitCallable(&RDSClient::RemoveTagsFromResource, request);
        }

        /**
         * An Async wrapper for RemoveTagsFromResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveTagsFromResourceRequestT = Model::RemoveTagsFromResourceRequest>
        void RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequestT& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::RemoveTagsFromResource, request, handler, context);
        }

        /**
         * <p>Modifies the parameters of a DB cluster parameter group to the default value.
         * To reset specific parameters submit a list of the following:
         * <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB
         * cluster parameter group, specify the <code>DBClusterParameterGroupName</code>
         * and <code>ResetAllParameters</code> parameters.</p> <p>When resetting the entire
         * group, dynamic parameters are updated immediately and static parameters are set
         * to <code>pending-reboot</code> to take effect on the next DB instance restart or
         * <code>RebootDBInstance</code> request. You must call
         * <code>RebootDBInstance</code> for every DB instance in your DB cluster that you
         * want the updated static parameter to apply to.</p> <p>For more information on
         * Amazon Aurora DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ DB cluster deployments</a> in the <i>Amazon RDS User Guide.</i>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ResetDBClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetDBClusterParameterGroupOutcome ResetDBClusterParameterGroup(const Model::ResetDBClusterParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for ResetDBClusterParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResetDBClusterParameterGroupRequestT = Model::ResetDBClusterParameterGroupRequest>
        Model::ResetDBClusterParameterGroupOutcomeCallable ResetDBClusterParameterGroupCallable(const ResetDBClusterParameterGroupRequestT& request) const
        {
            return SubmitCallable(&RDSClient::ResetDBClusterParameterGroup, request);
        }

        /**
         * An Async wrapper for ResetDBClusterParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResetDBClusterParameterGroupRequestT = Model::ResetDBClusterParameterGroupRequest>
        void ResetDBClusterParameterGroupAsync(const ResetDBClusterParameterGroupRequestT& request, const ResetDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::ResetDBClusterParameterGroup, request, handler, context);
        }

        /**
         * <p>Modifies the parameters of a DB parameter group to the engine/system default
         * value. To reset specific parameters, provide a list of the following:
         * <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB
         * parameter group, specify the <code>DBParameterGroup</code> name and
         * <code>ResetAllParameters</code> parameters. When resetting the entire group,
         * dynamic parameters are updated immediately and static parameters are set to
         * <code>pending-reboot</code> to take effect on the next DB instance restart or
         * <code>RebootDBInstance</code> request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ResetDBParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetDBParameterGroupOutcome ResetDBParameterGroup(const Model::ResetDBParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for ResetDBParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResetDBParameterGroupRequestT = Model::ResetDBParameterGroupRequest>
        Model::ResetDBParameterGroupOutcomeCallable ResetDBParameterGroupCallable(const ResetDBParameterGroupRequestT& request) const
        {
            return SubmitCallable(&RDSClient::ResetDBParameterGroup, request);
        }

        /**
         * An Async wrapper for ResetDBParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResetDBParameterGroupRequestT = Model::ResetDBParameterGroupRequest>
        void ResetDBParameterGroupAsync(const ResetDBParameterGroupRequestT& request, const ResetDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::ResetDBParameterGroup, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Aurora DB cluster from MySQL data stored in an Amazon S3
         * bucket. Amazon RDS must be authorized to access the Amazon S3 bucket and the
         * data must be created using the Percona XtraBackup utility as described in <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Migrating.ExtMySQL.html#AuroraMySQL.Migrating.ExtMySQL.S3">
         * Migrating Data from MySQL by Using an Amazon S3 Bucket</a> in the <i>Amazon
         * Aurora User Guide</i>.</p>  <p>This operation only restores the DB
         * cluster, not the DB instances for that DB cluster. You must invoke the
         * <code>CreateDBInstance</code> operation to create DB instances for the restored
         * DB cluster, specifying the identifier of the restored DB cluster in
         * <code>DBClusterIdentifier</code>. You can create DB instances only after the
         * <code>RestoreDBClusterFromS3</code> operation has completed and the DB cluster
         * is available.</p>  <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> 
         * <p>This operation only applies to Aurora DB clusters. The source DB engine must
         * be MySQL.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBClusterFromS3">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreDBClusterFromS3Outcome RestoreDBClusterFromS3(const Model::RestoreDBClusterFromS3Request& request) const;

        /**
         * A Callable wrapper for RestoreDBClusterFromS3 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestoreDBClusterFromS3RequestT = Model::RestoreDBClusterFromS3Request>
        Model::RestoreDBClusterFromS3OutcomeCallable RestoreDBClusterFromS3Callable(const RestoreDBClusterFromS3RequestT& request) const
        {
            return SubmitCallable(&RDSClient::RestoreDBClusterFromS3, request);
        }

        /**
         * An Async wrapper for RestoreDBClusterFromS3 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreDBClusterFromS3RequestT = Model::RestoreDBClusterFromS3Request>
        void RestoreDBClusterFromS3Async(const RestoreDBClusterFromS3RequestT& request, const RestoreDBClusterFromS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::RestoreDBClusterFromS3, request, handler, context);
        }

        /**
         * <p>Creates a new DB cluster from a DB snapshot or DB cluster snapshot.</p>
         * <p>The target DB cluster is created from the source snapshot with a default
         * configuration. If you don't specify a security group, the new DB cluster is
         * associated with the default security group.</p>  <p>This operation only
         * restores the DB cluster, not the DB instances for that DB cluster. You must
         * invoke the <code>CreateDBInstance</code> operation to create DB instances for
         * the restored DB cluster, specifying the identifier of the restored DB cluster in
         * <code>DBClusterIdentifier</code>. You can create DB instances only after the
         * <code>RestoreDBClusterFromSnapshot</code> operation has completed and the DB
         * cluster is available.</p>  <p>For more information on Amazon Aurora DB
         * clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ DB cluster deployments</a> in the <i>Amazon RDS User Guide.</i>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBClusterFromSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreDBClusterFromSnapshotOutcome RestoreDBClusterFromSnapshot(const Model::RestoreDBClusterFromSnapshotRequest& request) const;

        /**
         * A Callable wrapper for RestoreDBClusterFromSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestoreDBClusterFromSnapshotRequestT = Model::RestoreDBClusterFromSnapshotRequest>
        Model::RestoreDBClusterFromSnapshotOutcomeCallable RestoreDBClusterFromSnapshotCallable(const RestoreDBClusterFromSnapshotRequestT& request) const
        {
            return SubmitCallable(&RDSClient::RestoreDBClusterFromSnapshot, request);
        }

        /**
         * An Async wrapper for RestoreDBClusterFromSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreDBClusterFromSnapshotRequestT = Model::RestoreDBClusterFromSnapshotRequest>
        void RestoreDBClusterFromSnapshotAsync(const RestoreDBClusterFromSnapshotRequestT& request, const RestoreDBClusterFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::RestoreDBClusterFromSnapshot, request, handler, context);
        }

        /**
         * <p>Restores a DB cluster to an arbitrary point in time. Users can restore to any
         * point in time before <code>LatestRestorableTime</code> for up to
         * <code>BackupRetentionPeriod</code> days. The target DB cluster is created from
         * the source DB cluster with the same configuration as the original DB cluster,
         * except that the new DB cluster is created with the default DB security
         * group.</p>  <p>For Aurora, this operation only restores the DB cluster,
         * not the DB instances for that DB cluster. You must invoke the
         * <code>CreateDBInstance</code> operation to create DB instances for the restored
         * DB cluster, specifying the identifier of the restored DB cluster in
         * <code>DBClusterIdentifier</code>. You can create DB instances only after the
         * <code>RestoreDBClusterToPointInTime</code> operation has completed and the DB
         * cluster is available.</p>  <p>For more information on Amazon Aurora DB
         * clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ DB cluster deployments</a> in the <i>Amazon RDS User Guide.</i>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBClusterToPointInTime">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreDBClusterToPointInTimeOutcome RestoreDBClusterToPointInTime(const Model::RestoreDBClusterToPointInTimeRequest& request) const;

        /**
         * A Callable wrapper for RestoreDBClusterToPointInTime that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestoreDBClusterToPointInTimeRequestT = Model::RestoreDBClusterToPointInTimeRequest>
        Model::RestoreDBClusterToPointInTimeOutcomeCallable RestoreDBClusterToPointInTimeCallable(const RestoreDBClusterToPointInTimeRequestT& request) const
        {
            return SubmitCallable(&RDSClient::RestoreDBClusterToPointInTime, request);
        }

        /**
         * An Async wrapper for RestoreDBClusterToPointInTime that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreDBClusterToPointInTimeRequestT = Model::RestoreDBClusterToPointInTimeRequest>
        void RestoreDBClusterToPointInTimeAsync(const RestoreDBClusterToPointInTimeRequestT& request, const RestoreDBClusterToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::RestoreDBClusterToPointInTime, request, handler, context);
        }

        /**
         * <p>Creates a new DB instance from a DB snapshot. The target database is created
         * from the source database restore point with most of the source's original
         * configuration, including the default security group and DB parameter group. By
         * default, the new DB instance is created as a Single-AZ deployment, except when
         * the instance is a SQL Server instance that has an option group associated with
         * mirroring. In this case, the instance becomes a Multi-AZ deployment, not a
         * Single-AZ deployment.</p> <p>If you want to replace your original DB instance
         * with the new, restored DB instance, then rename your original DB instance before
         * you call the <code>RestoreDBInstanceFromDBSnapshot</code> operation. RDS doesn't
         * allow two DB instances with the same name. After you have renamed your original
         * DB instance with a different identifier, then you can pass the original name of
         * the DB instance as the <code>DBInstanceIdentifier</code> in the call to the
         * <code>RestoreDBInstanceFromDBSnapshot</code> operation. The result is that you
         * replace the original DB instance with the DB instance created from the
         * snapshot.</p> <p>If you are restoring from a shared manual DB snapshot, the
         * <code>DBSnapshotIdentifier</code> must be the ARN of the shared DB snapshot.</p>
         *  <p>This command doesn't apply to Aurora MySQL and Aurora PostgreSQL. For
         * Aurora, use <code>RestoreDBClusterFromSnapshot</code>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBInstanceFromDBSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreDBInstanceFromDBSnapshotOutcome RestoreDBInstanceFromDBSnapshot(const Model::RestoreDBInstanceFromDBSnapshotRequest& request) const;

        /**
         * A Callable wrapper for RestoreDBInstanceFromDBSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestoreDBInstanceFromDBSnapshotRequestT = Model::RestoreDBInstanceFromDBSnapshotRequest>
        Model::RestoreDBInstanceFromDBSnapshotOutcomeCallable RestoreDBInstanceFromDBSnapshotCallable(const RestoreDBInstanceFromDBSnapshotRequestT& request) const
        {
            return SubmitCallable(&RDSClient::RestoreDBInstanceFromDBSnapshot, request);
        }

        /**
         * An Async wrapper for RestoreDBInstanceFromDBSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreDBInstanceFromDBSnapshotRequestT = Model::RestoreDBInstanceFromDBSnapshotRequest>
        void RestoreDBInstanceFromDBSnapshotAsync(const RestoreDBInstanceFromDBSnapshotRequestT& request, const RestoreDBInstanceFromDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::RestoreDBInstanceFromDBSnapshot, request, handler, context);
        }

        /**
         * <p>Amazon Relational Database Service (Amazon RDS) supports importing MySQL
         * databases by using backup files. You can create a backup of your on-premises
         * database, store it on Amazon Simple Storage Service (Amazon S3), and then
         * restore the backup file onto a new Amazon RDS DB instance running MySQL. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/MySQL.Procedural.Importing.html">Importing
         * Data into an Amazon RDS MySQL DB Instance</a> in the <i>Amazon RDS User
         * Guide.</i> </p> <p>This operation doesn't apply to RDS Custom.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBInstanceFromS3">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreDBInstanceFromS3Outcome RestoreDBInstanceFromS3(const Model::RestoreDBInstanceFromS3Request& request) const;

        /**
         * A Callable wrapper for RestoreDBInstanceFromS3 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestoreDBInstanceFromS3RequestT = Model::RestoreDBInstanceFromS3Request>
        Model::RestoreDBInstanceFromS3OutcomeCallable RestoreDBInstanceFromS3Callable(const RestoreDBInstanceFromS3RequestT& request) const
        {
            return SubmitCallable(&RDSClient::RestoreDBInstanceFromS3, request);
        }

        /**
         * An Async wrapper for RestoreDBInstanceFromS3 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreDBInstanceFromS3RequestT = Model::RestoreDBInstanceFromS3Request>
        void RestoreDBInstanceFromS3Async(const RestoreDBInstanceFromS3RequestT& request, const RestoreDBInstanceFromS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::RestoreDBInstanceFromS3, request, handler, context);
        }

        /**
         * <p>Restores a DB instance to an arbitrary point in time. You can restore to any
         * point in time before the time identified by the
         * <code>LatestRestorableTime</code> property. You can restore to a point up to the
         * number of days specified by the <code>BackupRetentionPeriod</code> property.</p>
         * <p>The target database is created with most of the original configuration, but
         * in a system-selected Availability Zone, with the default security group, the
         * default subnet group, and the default DB parameter group. By default, the new DB
         * instance is created as a single-AZ deployment except when the instance is a SQL
         * Server instance that has an option group that is associated with mirroring; in
         * this case, the instance becomes a mirrored deployment and not a single-AZ
         * deployment.</p>  <p>This operation doesn't apply to Aurora MySQL and
         * Aurora PostgreSQL. For Aurora, use
         * <code>RestoreDBClusterToPointInTime</code>.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBInstanceToPointInTime">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreDBInstanceToPointInTimeOutcome RestoreDBInstanceToPointInTime(const Model::RestoreDBInstanceToPointInTimeRequest& request) const;

        /**
         * A Callable wrapper for RestoreDBInstanceToPointInTime that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestoreDBInstanceToPointInTimeRequestT = Model::RestoreDBInstanceToPointInTimeRequest>
        Model::RestoreDBInstanceToPointInTimeOutcomeCallable RestoreDBInstanceToPointInTimeCallable(const RestoreDBInstanceToPointInTimeRequestT& request) const
        {
            return SubmitCallable(&RDSClient::RestoreDBInstanceToPointInTime, request);
        }

        /**
         * An Async wrapper for RestoreDBInstanceToPointInTime that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreDBInstanceToPointInTimeRequestT = Model::RestoreDBInstanceToPointInTimeRequest>
        void RestoreDBInstanceToPointInTimeAsync(const RestoreDBInstanceToPointInTimeRequestT& request, const RestoreDBInstanceToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::RestoreDBInstanceToPointInTime, request, handler, context);
        }

        /**
         * <p>Revokes ingress from a DBSecurityGroup for previously authorized IP ranges or
         * EC2 or VPC security groups. Required parameters for this API are one of CIDRIP,
         * EC2SecurityGroupId for VPC, or (EC2SecurityGroupOwnerId and either
         * EC2SecurityGroupName or EC2SecurityGroupId).</p>  <p>EC2-Classic was
         * retired on August 15, 2022. If you haven't migrated from EC2-Classic to a VPC,
         * we recommend that you migrate as soon as possible. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon EC2 User Guide</i>, the blog <a
         * href="http://aws.amazon.com/blogs/aws/ec2-classic-is-retiring-heres-how-to-prepare/">EC2-Classic
         * Networking is Retiring – Here’s How to Prepare</a>, and <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.Non-VPC2VPC.html">Moving
         * a DB instance not in a VPC into a VPC</a> in the <i>Amazon RDS User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RevokeDBSecurityGroupIngress">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeDBSecurityGroupIngressOutcome RevokeDBSecurityGroupIngress(const Model::RevokeDBSecurityGroupIngressRequest& request) const;

        /**
         * A Callable wrapper for RevokeDBSecurityGroupIngress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RevokeDBSecurityGroupIngressRequestT = Model::RevokeDBSecurityGroupIngressRequest>
        Model::RevokeDBSecurityGroupIngressOutcomeCallable RevokeDBSecurityGroupIngressCallable(const RevokeDBSecurityGroupIngressRequestT& request) const
        {
            return SubmitCallable(&RDSClient::RevokeDBSecurityGroupIngress, request);
        }

        /**
         * An Async wrapper for RevokeDBSecurityGroupIngress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RevokeDBSecurityGroupIngressRequestT = Model::RevokeDBSecurityGroupIngressRequest>
        void RevokeDBSecurityGroupIngressAsync(const RevokeDBSecurityGroupIngressRequestT& request, const RevokeDBSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::RevokeDBSecurityGroupIngress, request, handler, context);
        }

        /**
         * <p>Starts a database activity stream to monitor activity on the database. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/DBActivityStreams.html">
         * Monitoring Amazon Aurora with Database Activity Streams</a> in the <i>Amazon
         * Aurora User Guide</i> or <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/DBActivityStreams.html">
         * Monitoring Amazon RDS with Database Activity Streams</a> in the <i>Amazon RDS
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StartActivityStream">AWS
         * API Reference</a></p>
         */
        virtual Model::StartActivityStreamOutcome StartActivityStream(const Model::StartActivityStreamRequest& request) const;

        /**
         * A Callable wrapper for StartActivityStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartActivityStreamRequestT = Model::StartActivityStreamRequest>
        Model::StartActivityStreamOutcomeCallable StartActivityStreamCallable(const StartActivityStreamRequestT& request) const
        {
            return SubmitCallable(&RDSClient::StartActivityStream, request);
        }

        /**
         * An Async wrapper for StartActivityStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartActivityStreamRequestT = Model::StartActivityStreamRequest>
        void StartActivityStreamAsync(const StartActivityStreamRequestT& request, const StartActivityStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::StartActivityStream, request, handler, context);
        }

        /**
         * <p>Starts an Amazon Aurora DB cluster that was stopped using the Amazon Web
         * Services console, the stop-db-cluster CLI command, or the
         * <code>StopDBCluster</code> operation.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-cluster-stop-start.html">
         * Stopping and Starting an Aurora Cluster</a> in the <i>Amazon Aurora User
         * Guide</i>.</p>  <p>This operation only applies to Aurora DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StartDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDBClusterOutcome StartDBCluster(const Model::StartDBClusterRequest& request) const;

        /**
         * A Callable wrapper for StartDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartDBClusterRequestT = Model::StartDBClusterRequest>
        Model::StartDBClusterOutcomeCallable StartDBClusterCallable(const StartDBClusterRequestT& request) const
        {
            return SubmitCallable(&RDSClient::StartDBCluster, request);
        }

        /**
         * An Async wrapper for StartDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDBClusterRequestT = Model::StartDBClusterRequest>
        void StartDBClusterAsync(const StartDBClusterRequestT& request, const StartDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::StartDBCluster, request, handler, context);
        }

        /**
         * <p>Starts an Amazon RDS DB instance that was stopped using the Amazon Web
         * Services console, the stop-db-instance CLI command, or the
         * <code>StopDBInstance</code> operation.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_StartInstance.html">
         * Starting an Amazon RDS DB instance That Was Previously Stopped</a> in the
         * <i>Amazon RDS User Guide.</i> </p>  <p>This command doesn't apply to RDS
         * Custom, Aurora MySQL, and Aurora PostgreSQL. For Aurora DB clusters, use
         * <code>StartDBCluster</code> instead.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StartDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDBInstanceOutcome StartDBInstance(const Model::StartDBInstanceRequest& request) const;

        /**
         * A Callable wrapper for StartDBInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartDBInstanceRequestT = Model::StartDBInstanceRequest>
        Model::StartDBInstanceOutcomeCallable StartDBInstanceCallable(const StartDBInstanceRequestT& request) const
        {
            return SubmitCallable(&RDSClient::StartDBInstance, request);
        }

        /**
         * An Async wrapper for StartDBInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDBInstanceRequestT = Model::StartDBInstanceRequest>
        void StartDBInstanceAsync(const StartDBInstanceRequestT& request, const StartDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::StartDBInstance, request, handler, context);
        }

        /**
         * <p>Enables replication of automated backups to a different Amazon Web Services
         * Region.</p> <p>This command doesn't apply to RDS Custom.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_ReplicateBackups.html">
         * Replicating Automated Backups to Another Amazon Web Services Region</a> in the
         * <i>Amazon RDS User Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StartDBInstanceAutomatedBackupsReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDBInstanceAutomatedBackupsReplicationOutcome StartDBInstanceAutomatedBackupsReplication(const Model::StartDBInstanceAutomatedBackupsReplicationRequest& request) const;

        /**
         * A Callable wrapper for StartDBInstanceAutomatedBackupsReplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartDBInstanceAutomatedBackupsReplicationRequestT = Model::StartDBInstanceAutomatedBackupsReplicationRequest>
        Model::StartDBInstanceAutomatedBackupsReplicationOutcomeCallable StartDBInstanceAutomatedBackupsReplicationCallable(const StartDBInstanceAutomatedBackupsReplicationRequestT& request) const
        {
            return SubmitCallable(&RDSClient::StartDBInstanceAutomatedBackupsReplication, request);
        }

        /**
         * An Async wrapper for StartDBInstanceAutomatedBackupsReplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDBInstanceAutomatedBackupsReplicationRequestT = Model::StartDBInstanceAutomatedBackupsReplicationRequest>
        void StartDBInstanceAutomatedBackupsReplicationAsync(const StartDBInstanceAutomatedBackupsReplicationRequestT& request, const StartDBInstanceAutomatedBackupsReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::StartDBInstanceAutomatedBackupsReplication, request, handler, context);
        }

        /**
         * <p>Starts an export of DB snapshot or DB cluster data to Amazon S3. The provided
         * IAM role must have access to the S3 bucket.</p> <p>You can't export snapshot
         * data from Db2 or RDS Custom DB instances.</p> <p>You can't export cluster data
         * from Multi-AZ DB clusters.</p> <p>For more information on exporting DB snapshot
         * data, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_ExportSnapshot.html">Exporting
         * DB snapshot data to Amazon S3</a> in the <i>Amazon RDS User Guide</i> or <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-export-snapshot.html">Exporting
         * DB cluster snapshot data to Amazon S3</a> in the <i>Amazon Aurora User
         * Guide</i>.</p> <p>For more information on exporting DB cluster data, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/export-cluster-data.html">Exporting
         * DB cluster data to Amazon S3</a> in the <i>Amazon Aurora User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StartExportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartExportTaskOutcome StartExportTask(const Model::StartExportTaskRequest& request) const;

        /**
         * A Callable wrapper for StartExportTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartExportTaskRequestT = Model::StartExportTaskRequest>
        Model::StartExportTaskOutcomeCallable StartExportTaskCallable(const StartExportTaskRequestT& request) const
        {
            return SubmitCallable(&RDSClient::StartExportTask, request);
        }

        /**
         * An Async wrapper for StartExportTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartExportTaskRequestT = Model::StartExportTaskRequest>
        void StartExportTaskAsync(const StartExportTaskRequestT& request, const StartExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::StartExportTask, request, handler, context);
        }

        /**
         * <p>Stops a database activity stream that was started using the Amazon Web
         * Services console, the <code>start-activity-stream</code> CLI command, or the
         * <code>StartActivityStream</code> operation.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/DBActivityStreams.html">
         * Monitoring Amazon Aurora with Database Activity Streams</a> in the <i>Amazon
         * Aurora User Guide</i> or <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/DBActivityStreams.html">
         * Monitoring Amazon RDS with Database Activity Streams</a> in the <i>Amazon RDS
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StopActivityStream">AWS
         * API Reference</a></p>
         */
        virtual Model::StopActivityStreamOutcome StopActivityStream(const Model::StopActivityStreamRequest& request) const;

        /**
         * A Callable wrapper for StopActivityStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopActivityStreamRequestT = Model::StopActivityStreamRequest>
        Model::StopActivityStreamOutcomeCallable StopActivityStreamCallable(const StopActivityStreamRequestT& request) const
        {
            return SubmitCallable(&RDSClient::StopActivityStream, request);
        }

        /**
         * An Async wrapper for StopActivityStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopActivityStreamRequestT = Model::StopActivityStreamRequest>
        void StopActivityStreamAsync(const StopActivityStreamRequestT& request, const StopActivityStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::StopActivityStream, request, handler, context);
        }

        /**
         * <p>Stops an Amazon Aurora DB cluster. When you stop a DB cluster, Aurora retains
         * the DB cluster's metadata, including its endpoints and DB parameter groups.
         * Aurora also retains the transaction logs so you can do a point-in-time restore
         * if necessary.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-cluster-stop-start.html">
         * Stopping and Starting an Aurora Cluster</a> in the <i>Amazon Aurora User
         * Guide</i>.</p>  <p>This operation only applies to Aurora DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StopDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDBClusterOutcome StopDBCluster(const Model::StopDBClusterRequest& request) const;

        /**
         * A Callable wrapper for StopDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopDBClusterRequestT = Model::StopDBClusterRequest>
        Model::StopDBClusterOutcomeCallable StopDBClusterCallable(const StopDBClusterRequestT& request) const
        {
            return SubmitCallable(&RDSClient::StopDBCluster, request);
        }

        /**
         * An Async wrapper for StopDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopDBClusterRequestT = Model::StopDBClusterRequest>
        void StopDBClusterAsync(const StopDBClusterRequestT& request, const StopDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::StopDBCluster, request, handler, context);
        }

        /**
         * <p>Stops an Amazon RDS DB instance. When you stop a DB instance, Amazon RDS
         * retains the DB instance's metadata, including its endpoint, DB parameter group,
         * and option group membership. Amazon RDS also retains the transaction logs so you
         * can do a point-in-time restore if necessary.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_StopInstance.html">
         * Stopping an Amazon RDS DB Instance Temporarily</a> in the <i>Amazon RDS User
         * Guide.</i> </p>  <p>This command doesn't apply to RDS Custom, Aurora
         * MySQL, and Aurora PostgreSQL. For Aurora clusters, use
         * <code>StopDBCluster</code> instead.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StopDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDBInstanceOutcome StopDBInstance(const Model::StopDBInstanceRequest& request) const;

        /**
         * A Callable wrapper for StopDBInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopDBInstanceRequestT = Model::StopDBInstanceRequest>
        Model::StopDBInstanceOutcomeCallable StopDBInstanceCallable(const StopDBInstanceRequestT& request) const
        {
            return SubmitCallable(&RDSClient::StopDBInstance, request);
        }

        /**
         * An Async wrapper for StopDBInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopDBInstanceRequestT = Model::StopDBInstanceRequest>
        void StopDBInstanceAsync(const StopDBInstanceRequestT& request, const StopDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::StopDBInstance, request, handler, context);
        }

        /**
         * <p>Stops automated backup replication for a DB instance.</p> <p>This command
         * doesn't apply to RDS Custom, Aurora MySQL, and Aurora PostgreSQL.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_ReplicateBackups.html">
         * Replicating Automated Backups to Another Amazon Web Services Region</a> in the
         * <i>Amazon RDS User Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StopDBInstanceAutomatedBackupsReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDBInstanceAutomatedBackupsReplicationOutcome StopDBInstanceAutomatedBackupsReplication(const Model::StopDBInstanceAutomatedBackupsReplicationRequest& request) const;

        /**
         * A Callable wrapper for StopDBInstanceAutomatedBackupsReplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopDBInstanceAutomatedBackupsReplicationRequestT = Model::StopDBInstanceAutomatedBackupsReplicationRequest>
        Model::StopDBInstanceAutomatedBackupsReplicationOutcomeCallable StopDBInstanceAutomatedBackupsReplicationCallable(const StopDBInstanceAutomatedBackupsReplicationRequestT& request) const
        {
            return SubmitCallable(&RDSClient::StopDBInstanceAutomatedBackupsReplication, request);
        }

        /**
         * An Async wrapper for StopDBInstanceAutomatedBackupsReplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopDBInstanceAutomatedBackupsReplicationRequestT = Model::StopDBInstanceAutomatedBackupsReplicationRequest>
        void StopDBInstanceAutomatedBackupsReplicationAsync(const StopDBInstanceAutomatedBackupsReplicationRequestT& request, const StopDBInstanceAutomatedBackupsReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::StopDBInstanceAutomatedBackupsReplication, request, handler, context);
        }

        /**
         * <p>Switches over a blue/green deployment.</p> <p>Before you switch over,
         * production traffic is routed to the databases in the blue environment. After you
         * switch over, production traffic is routed to the databases in the green
         * environment.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/blue-green-deployments.html">Using
         * Amazon RDS Blue/Green Deployments for database updates</a> in the <i>Amazon RDS
         * User Guide</i> and <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/blue-green-deployments.html">Using
         * Amazon RDS Blue/Green Deployments for database updates</a> in the <i>Amazon
         * Aurora User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/SwitchoverBlueGreenDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::SwitchoverBlueGreenDeploymentOutcome SwitchoverBlueGreenDeployment(const Model::SwitchoverBlueGreenDeploymentRequest& request) const;

        /**
         * A Callable wrapper for SwitchoverBlueGreenDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SwitchoverBlueGreenDeploymentRequestT = Model::SwitchoverBlueGreenDeploymentRequest>
        Model::SwitchoverBlueGreenDeploymentOutcomeCallable SwitchoverBlueGreenDeploymentCallable(const SwitchoverBlueGreenDeploymentRequestT& request) const
        {
            return SubmitCallable(&RDSClient::SwitchoverBlueGreenDeployment, request);
        }

        /**
         * An Async wrapper for SwitchoverBlueGreenDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SwitchoverBlueGreenDeploymentRequestT = Model::SwitchoverBlueGreenDeploymentRequest>
        void SwitchoverBlueGreenDeploymentAsync(const SwitchoverBlueGreenDeploymentRequestT& request, const SwitchoverBlueGreenDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::SwitchoverBlueGreenDeployment, request, handler, context);
        }

        /**
         * <p>Switches over the specified secondary DB cluster to be the new primary DB
         * cluster in the global database cluster. Switchover operations were previously
         * called "managed planned failovers."</p> <p>Aurora promotes the specified
         * secondary cluster to assume full read/write capabilities and demotes the current
         * primary cluster to a secondary (read-only) cluster, maintaining the orginal
         * replication topology. All secondary clusters are synchronized with the primary
         * at the beginning of the process so the new primary continues operations for the
         * Aurora global database without losing any data. Your database is unavailable for
         * a short time while the primary and selected secondary clusters are assuming
         * their new roles. For more information about switching over an Aurora global
         * database, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-global-database-disaster-recovery.html#aurora-global-database-disaster-recovery.managed-failover">Performing
         * switchovers for Amazon Aurora global databases</a> in the <i>Amazon Aurora User
         * Guide</i>.</p>  <p>This operation is intended for controlled environments,
         * for operations such as "regional rotation" or to fall back to the original
         * primary after a global database failover.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/SwitchoverGlobalCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::SwitchoverGlobalClusterOutcome SwitchoverGlobalCluster(const Model::SwitchoverGlobalClusterRequest& request) const;

        /**
         * A Callable wrapper for SwitchoverGlobalCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SwitchoverGlobalClusterRequestT = Model::SwitchoverGlobalClusterRequest>
        Model::SwitchoverGlobalClusterOutcomeCallable SwitchoverGlobalClusterCallable(const SwitchoverGlobalClusterRequestT& request) const
        {
            return SubmitCallable(&RDSClient::SwitchoverGlobalCluster, request);
        }

        /**
         * An Async wrapper for SwitchoverGlobalCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SwitchoverGlobalClusterRequestT = Model::SwitchoverGlobalClusterRequest>
        void SwitchoverGlobalClusterAsync(const SwitchoverGlobalClusterRequestT& request, const SwitchoverGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::SwitchoverGlobalCluster, request, handler, context);
        }

        /**
         * <p>Switches over an Oracle standby database in an Oracle Data Guard environment,
         * making it the new primary database. Issue this command in the Region that hosts
         * the current standby database.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/SwitchoverReadReplica">AWS
         * API Reference</a></p>
         */
        virtual Model::SwitchoverReadReplicaOutcome SwitchoverReadReplica(const Model::SwitchoverReadReplicaRequest& request) const;

        /**
         * A Callable wrapper for SwitchoverReadReplica that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SwitchoverReadReplicaRequestT = Model::SwitchoverReadReplicaRequest>
        Model::SwitchoverReadReplicaOutcomeCallable SwitchoverReadReplicaCallable(const SwitchoverReadReplicaRequestT& request) const
        {
            return SubmitCallable(&RDSClient::SwitchoverReadReplica, request);
        }

        /**
         * An Async wrapper for SwitchoverReadReplica that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SwitchoverReadReplicaRequestT = Model::SwitchoverReadReplicaRequest>
        void SwitchoverReadReplicaAsync(const SwitchoverReadReplicaRequestT& request, const SwitchoverReadReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSClient::SwitchoverReadReplica, request, handler, context);
        }


        void OverrideEndpoint(const Aws::String& endpoint);
        std::shared_ptr<RDSEndpointProviderBase>& accessEndpointProvider();
    private:
        friend class Aws::Client::ClientWithAsyncTemplateMethods<RDSClient>;
        void init(const RDSClientConfiguration& clientConfiguration);

        RDSClientConfiguration m_clientConfiguration;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
        std::shared_ptr<RDSEndpointProviderBase> m_endpointProvider;
    };
  } // namespace RDS
} // namespace Aws
