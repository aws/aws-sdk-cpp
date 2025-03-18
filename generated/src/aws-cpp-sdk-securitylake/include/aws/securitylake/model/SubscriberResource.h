/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securitylake/model/AwsIdentity.h>
#include <aws/securitylake/model/SubscriberStatus.h>
#include <aws/securitylake/model/AccessType.h>
#include <aws/securitylake/model/LogSourceResource.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>Provides details about the Amazon Security Lake account subscription.
   * Subscribers are notified of new objects for a source as the data is written to
   * your Amazon S3 bucket for Security Lake.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/SubscriberResource">AWS
   * API Reference</a></p>
   */
  class SubscriberResource
  {
  public:
    AWS_SECURITYLAKE_API SubscriberResource() = default;
    AWS_SECURITYLAKE_API SubscriberResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API SubscriberResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>You can choose to notify subscribers of new objects with an Amazon Simple
     * Queue Service (Amazon SQS) queue or through messaging to an HTTPS endpoint
     * provided by the subscriber.</p> <p> Subscribers can consume data by directly
     * querying Lake Formation tables in your Amazon S3 bucket through services like
     * Amazon Athena. This subscription type is defined as
     * <code>LAKEFORMATION</code>.</p>
     */
    inline const Aws::Vector<AccessType>& GetAccessTypes() const { return m_accessTypes; }
    inline bool AccessTypesHasBeenSet() const { return m_accessTypesHasBeenSet; }
    template<typename AccessTypesT = Aws::Vector<AccessType>>
    void SetAccessTypes(AccessTypesT&& value) { m_accessTypesHasBeenSet = true; m_accessTypes = std::forward<AccessTypesT>(value); }
    template<typename AccessTypesT = Aws::Vector<AccessType>>
    SubscriberResource& WithAccessTypes(AccessTypesT&& value) { SetAccessTypes(std::forward<AccessTypesT>(value)); return *this;}
    inline SubscriberResource& AddAccessTypes(AccessType value) { m_accessTypesHasBeenSet = true; m_accessTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time when the subscriber was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    SubscriberResource& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) which uniquely defines the Amazon Web Services
     * RAM resource share. Before accepting the RAM resource share invitation, you can
     * view details related to the RAM resource share.</p> <p>This field is available
     * only for Lake Formation subscribers created after March 8, 2023.</p>
     */
    inline const Aws::String& GetResourceShareArn() const { return m_resourceShareArn; }
    inline bool ResourceShareArnHasBeenSet() const { return m_resourceShareArnHasBeenSet; }
    template<typename ResourceShareArnT = Aws::String>
    void SetResourceShareArn(ResourceShareArnT&& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = std::forward<ResourceShareArnT>(value); }
    template<typename ResourceShareArnT = Aws::String>
    SubscriberResource& WithResourceShareArn(ResourceShareArnT&& value) { SetResourceShareArn(std::forward<ResourceShareArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource share.</p>
     */
    inline const Aws::String& GetResourceShareName() const { return m_resourceShareName; }
    inline bool ResourceShareNameHasBeenSet() const { return m_resourceShareNameHasBeenSet; }
    template<typename ResourceShareNameT = Aws::String>
    void SetResourceShareName(ResourceShareNameT&& value) { m_resourceShareNameHasBeenSet = true; m_resourceShareName = std::forward<ResourceShareNameT>(value); }
    template<typename ResourceShareNameT = Aws::String>
    SubscriberResource& WithResourceShareName(ResourceShareNameT&& value) { SetResourceShareName(std::forward<ResourceShareNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) specifying the role of the subscriber.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    SubscriberResource& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetS3BucketArn() const { return m_s3BucketArn; }
    inline bool S3BucketArnHasBeenSet() const { return m_s3BucketArnHasBeenSet; }
    template<typename S3BucketArnT = Aws::String>
    void SetS3BucketArn(S3BucketArnT&& value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn = std::forward<S3BucketArnT>(value); }
    template<typename S3BucketArnT = Aws::String>
    SubscriberResource& WithS3BucketArn(S3BucketArnT&& value) { SetS3BucketArn(std::forward<S3BucketArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Security Lake supports log and event collection for natively supported
     * Amazon Web Services services. For more information, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/source-management.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline const Aws::Vector<LogSourceResource>& GetSources() const { return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    template<typename SourcesT = Aws::Vector<LogSourceResource>>
    void SetSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources = std::forward<SourcesT>(value); }
    template<typename SourcesT = Aws::Vector<LogSourceResource>>
    SubscriberResource& WithSources(SourcesT&& value) { SetSources(std::forward<SourcesT>(value)); return *this;}
    template<typename SourcesT = LogSourceResource>
    SubscriberResource& AddSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources.emplace_back(std::forward<SourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The subscriber ARN of the Amazon Security Lake subscriber account.</p>
     */
    inline const Aws::String& GetSubscriberArn() const { return m_subscriberArn; }
    inline bool SubscriberArnHasBeenSet() const { return m_subscriberArnHasBeenSet; }
    template<typename SubscriberArnT = Aws::String>
    void SetSubscriberArn(SubscriberArnT&& value) { m_subscriberArnHasBeenSet = true; m_subscriberArn = std::forward<SubscriberArnT>(value); }
    template<typename SubscriberArnT = Aws::String>
    SubscriberResource& WithSubscriberArn(SubscriberArnT&& value) { SetSubscriberArn(std::forward<SubscriberArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscriber descriptions for a subscriber account. The description for a
     * subscriber includes <code>subscriberName</code>, <code>accountID</code>,
     * <code>externalID</code>, and <code>subscriberId</code>.</p>
     */
    inline const Aws::String& GetSubscriberDescription() const { return m_subscriberDescription; }
    inline bool SubscriberDescriptionHasBeenSet() const { return m_subscriberDescriptionHasBeenSet; }
    template<typename SubscriberDescriptionT = Aws::String>
    void SetSubscriberDescription(SubscriberDescriptionT&& value) { m_subscriberDescriptionHasBeenSet = true; m_subscriberDescription = std::forward<SubscriberDescriptionT>(value); }
    template<typename SubscriberDescriptionT = Aws::String>
    SubscriberResource& WithSubscriberDescription(SubscriberDescriptionT&& value) { SetSubscriberDescription(std::forward<SubscriberDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscriber endpoint to which exception messages are posted.</p>
     */
    inline const Aws::String& GetSubscriberEndpoint() const { return m_subscriberEndpoint; }
    inline bool SubscriberEndpointHasBeenSet() const { return m_subscriberEndpointHasBeenSet; }
    template<typename SubscriberEndpointT = Aws::String>
    void SetSubscriberEndpoint(SubscriberEndpointT&& value) { m_subscriberEndpointHasBeenSet = true; m_subscriberEndpoint = std::forward<SubscriberEndpointT>(value); }
    template<typename SubscriberEndpointT = Aws::String>
    SubscriberResource& WithSubscriberEndpoint(SubscriberEndpointT&& value) { SetSubscriberEndpoint(std::forward<SubscriberEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscriber ID of the Amazon Security Lake subscriber account.</p>
     */
    inline const Aws::String& GetSubscriberId() const { return m_subscriberId; }
    inline bool SubscriberIdHasBeenSet() const { return m_subscriberIdHasBeenSet; }
    template<typename SubscriberIdT = Aws::String>
    void SetSubscriberId(SubscriberIdT&& value) { m_subscriberIdHasBeenSet = true; m_subscriberId = std::forward<SubscriberIdT>(value); }
    template<typename SubscriberIdT = Aws::String>
    SubscriberResource& WithSubscriberId(SubscriberIdT&& value) { SetSubscriberId(std::forward<SubscriberIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services identity used to access your data.</p>
     */
    inline const AwsIdentity& GetSubscriberIdentity() const { return m_subscriberIdentity; }
    inline bool SubscriberIdentityHasBeenSet() const { return m_subscriberIdentityHasBeenSet; }
    template<typename SubscriberIdentityT = AwsIdentity>
    void SetSubscriberIdentity(SubscriberIdentityT&& value) { m_subscriberIdentityHasBeenSet = true; m_subscriberIdentity = std::forward<SubscriberIdentityT>(value); }
    template<typename SubscriberIdentityT = AwsIdentity>
    SubscriberResource& WithSubscriberIdentity(SubscriberIdentityT&& value) { SetSubscriberIdentity(std::forward<SubscriberIdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your Amazon Security Lake subscriber account.</p>
     */
    inline const Aws::String& GetSubscriberName() const { return m_subscriberName; }
    inline bool SubscriberNameHasBeenSet() const { return m_subscriberNameHasBeenSet; }
    template<typename SubscriberNameT = Aws::String>
    void SetSubscriberName(SubscriberNameT&& value) { m_subscriberNameHasBeenSet = true; m_subscriberName = std::forward<SubscriberNameT>(value); }
    template<typename SubscriberNameT = Aws::String>
    SubscriberResource& WithSubscriberName(SubscriberNameT&& value) { SetSubscriberName(std::forward<SubscriberNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscriber status of the Amazon Security Lake subscriber account.</p>
     */
    inline SubscriberStatus GetSubscriberStatus() const { return m_subscriberStatus; }
    inline bool SubscriberStatusHasBeenSet() const { return m_subscriberStatusHasBeenSet; }
    inline void SetSubscriberStatus(SubscriberStatus value) { m_subscriberStatusHasBeenSet = true; m_subscriberStatus = value; }
    inline SubscriberResource& WithSubscriberStatus(SubscriberStatus value) { SetSubscriberStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the subscriber was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    SubscriberResource& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccessType> m_accessTypes;
    bool m_accessTypesHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_resourceShareArn;
    bool m_resourceShareArnHasBeenSet = false;

    Aws::String m_resourceShareName;
    bool m_resourceShareNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_s3BucketArn;
    bool m_s3BucketArnHasBeenSet = false;

    Aws::Vector<LogSourceResource> m_sources;
    bool m_sourcesHasBeenSet = false;

    Aws::String m_subscriberArn;
    bool m_subscriberArnHasBeenSet = false;

    Aws::String m_subscriberDescription;
    bool m_subscriberDescriptionHasBeenSet = false;

    Aws::String m_subscriberEndpoint;
    bool m_subscriberEndpointHasBeenSet = false;

    Aws::String m_subscriberId;
    bool m_subscriberIdHasBeenSet = false;

    AwsIdentity m_subscriberIdentity;
    bool m_subscriberIdentityHasBeenSet = false;

    Aws::String m_subscriberName;
    bool m_subscriberNameHasBeenSet = false;

    SubscriberStatus m_subscriberStatus{SubscriberStatus::NOT_SET};
    bool m_subscriberStatusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
