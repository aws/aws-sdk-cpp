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
    AWS_SECURITYLAKE_API SubscriberResource();
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
    inline const Aws::Vector<AccessType>& GetAccessTypes() const{ return m_accessTypes; }
    inline bool AccessTypesHasBeenSet() const { return m_accessTypesHasBeenSet; }
    inline void SetAccessTypes(const Aws::Vector<AccessType>& value) { m_accessTypesHasBeenSet = true; m_accessTypes = value; }
    inline void SetAccessTypes(Aws::Vector<AccessType>&& value) { m_accessTypesHasBeenSet = true; m_accessTypes = std::move(value); }
    inline SubscriberResource& WithAccessTypes(const Aws::Vector<AccessType>& value) { SetAccessTypes(value); return *this;}
    inline SubscriberResource& WithAccessTypes(Aws::Vector<AccessType>&& value) { SetAccessTypes(std::move(value)); return *this;}
    inline SubscriberResource& AddAccessTypes(const AccessType& value) { m_accessTypesHasBeenSet = true; m_accessTypes.push_back(value); return *this; }
    inline SubscriberResource& AddAccessTypes(AccessType&& value) { m_accessTypesHasBeenSet = true; m_accessTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time when the subscriber was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline SubscriberResource& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline SubscriberResource& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) which uniquely defines the Amazon Web Services
     * RAM resource share. Before accepting the RAM resource share invitation, you can
     * view details related to the RAM resource share.</p> <p>This field is available
     * only for Lake Formation subscribers created after March 8, 2023.</p>
     */
    inline const Aws::String& GetResourceShareArn() const{ return m_resourceShareArn; }
    inline bool ResourceShareArnHasBeenSet() const { return m_resourceShareArnHasBeenSet; }
    inline void SetResourceShareArn(const Aws::String& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = value; }
    inline void SetResourceShareArn(Aws::String&& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = std::move(value); }
    inline void SetResourceShareArn(const char* value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn.assign(value); }
    inline SubscriberResource& WithResourceShareArn(const Aws::String& value) { SetResourceShareArn(value); return *this;}
    inline SubscriberResource& WithResourceShareArn(Aws::String&& value) { SetResourceShareArn(std::move(value)); return *this;}
    inline SubscriberResource& WithResourceShareArn(const char* value) { SetResourceShareArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource share.</p>
     */
    inline const Aws::String& GetResourceShareName() const{ return m_resourceShareName; }
    inline bool ResourceShareNameHasBeenSet() const { return m_resourceShareNameHasBeenSet; }
    inline void SetResourceShareName(const Aws::String& value) { m_resourceShareNameHasBeenSet = true; m_resourceShareName = value; }
    inline void SetResourceShareName(Aws::String&& value) { m_resourceShareNameHasBeenSet = true; m_resourceShareName = std::move(value); }
    inline void SetResourceShareName(const char* value) { m_resourceShareNameHasBeenSet = true; m_resourceShareName.assign(value); }
    inline SubscriberResource& WithResourceShareName(const Aws::String& value) { SetResourceShareName(value); return *this;}
    inline SubscriberResource& WithResourceShareName(Aws::String&& value) { SetResourceShareName(std::move(value)); return *this;}
    inline SubscriberResource& WithResourceShareName(const char* value) { SetResourceShareName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) specifying the role of the subscriber.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline SubscriberResource& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline SubscriberResource& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline SubscriberResource& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetS3BucketArn() const{ return m_s3BucketArn; }
    inline bool S3BucketArnHasBeenSet() const { return m_s3BucketArnHasBeenSet; }
    inline void SetS3BucketArn(const Aws::String& value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn = value; }
    inline void SetS3BucketArn(Aws::String&& value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn = std::move(value); }
    inline void SetS3BucketArn(const char* value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn.assign(value); }
    inline SubscriberResource& WithS3BucketArn(const Aws::String& value) { SetS3BucketArn(value); return *this;}
    inline SubscriberResource& WithS3BucketArn(Aws::String&& value) { SetS3BucketArn(std::move(value)); return *this;}
    inline SubscriberResource& WithS3BucketArn(const char* value) { SetS3BucketArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Security Lake supports log and event collection for natively supported
     * Amazon Web Services services. For more information, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/source-management.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline const Aws::Vector<LogSourceResource>& GetSources() const{ return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    inline void SetSources(const Aws::Vector<LogSourceResource>& value) { m_sourcesHasBeenSet = true; m_sources = value; }
    inline void SetSources(Aws::Vector<LogSourceResource>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }
    inline SubscriberResource& WithSources(const Aws::Vector<LogSourceResource>& value) { SetSources(value); return *this;}
    inline SubscriberResource& WithSources(Aws::Vector<LogSourceResource>&& value) { SetSources(std::move(value)); return *this;}
    inline SubscriberResource& AddSources(const LogSourceResource& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }
    inline SubscriberResource& AddSources(LogSourceResource&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The subscriber ARN of the Amazon Security Lake subscriber account.</p>
     */
    inline const Aws::String& GetSubscriberArn() const{ return m_subscriberArn; }
    inline bool SubscriberArnHasBeenSet() const { return m_subscriberArnHasBeenSet; }
    inline void SetSubscriberArn(const Aws::String& value) { m_subscriberArnHasBeenSet = true; m_subscriberArn = value; }
    inline void SetSubscriberArn(Aws::String&& value) { m_subscriberArnHasBeenSet = true; m_subscriberArn = std::move(value); }
    inline void SetSubscriberArn(const char* value) { m_subscriberArnHasBeenSet = true; m_subscriberArn.assign(value); }
    inline SubscriberResource& WithSubscriberArn(const Aws::String& value) { SetSubscriberArn(value); return *this;}
    inline SubscriberResource& WithSubscriberArn(Aws::String&& value) { SetSubscriberArn(std::move(value)); return *this;}
    inline SubscriberResource& WithSubscriberArn(const char* value) { SetSubscriberArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscriber descriptions for a subscriber account. The description for a
     * subscriber includes <code>subscriberName</code>, <code>accountID</code>,
     * <code>externalID</code>, and <code>subscriberId</code>.</p>
     */
    inline const Aws::String& GetSubscriberDescription() const{ return m_subscriberDescription; }
    inline bool SubscriberDescriptionHasBeenSet() const { return m_subscriberDescriptionHasBeenSet; }
    inline void SetSubscriberDescription(const Aws::String& value) { m_subscriberDescriptionHasBeenSet = true; m_subscriberDescription = value; }
    inline void SetSubscriberDescription(Aws::String&& value) { m_subscriberDescriptionHasBeenSet = true; m_subscriberDescription = std::move(value); }
    inline void SetSubscriberDescription(const char* value) { m_subscriberDescriptionHasBeenSet = true; m_subscriberDescription.assign(value); }
    inline SubscriberResource& WithSubscriberDescription(const Aws::String& value) { SetSubscriberDescription(value); return *this;}
    inline SubscriberResource& WithSubscriberDescription(Aws::String&& value) { SetSubscriberDescription(std::move(value)); return *this;}
    inline SubscriberResource& WithSubscriberDescription(const char* value) { SetSubscriberDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscriber endpoint to which exception messages are posted.</p>
     */
    inline const Aws::String& GetSubscriberEndpoint() const{ return m_subscriberEndpoint; }
    inline bool SubscriberEndpointHasBeenSet() const { return m_subscriberEndpointHasBeenSet; }
    inline void SetSubscriberEndpoint(const Aws::String& value) { m_subscriberEndpointHasBeenSet = true; m_subscriberEndpoint = value; }
    inline void SetSubscriberEndpoint(Aws::String&& value) { m_subscriberEndpointHasBeenSet = true; m_subscriberEndpoint = std::move(value); }
    inline void SetSubscriberEndpoint(const char* value) { m_subscriberEndpointHasBeenSet = true; m_subscriberEndpoint.assign(value); }
    inline SubscriberResource& WithSubscriberEndpoint(const Aws::String& value) { SetSubscriberEndpoint(value); return *this;}
    inline SubscriberResource& WithSubscriberEndpoint(Aws::String&& value) { SetSubscriberEndpoint(std::move(value)); return *this;}
    inline SubscriberResource& WithSubscriberEndpoint(const char* value) { SetSubscriberEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscriber ID of the Amazon Security Lake subscriber account.</p>
     */
    inline const Aws::String& GetSubscriberId() const{ return m_subscriberId; }
    inline bool SubscriberIdHasBeenSet() const { return m_subscriberIdHasBeenSet; }
    inline void SetSubscriberId(const Aws::String& value) { m_subscriberIdHasBeenSet = true; m_subscriberId = value; }
    inline void SetSubscriberId(Aws::String&& value) { m_subscriberIdHasBeenSet = true; m_subscriberId = std::move(value); }
    inline void SetSubscriberId(const char* value) { m_subscriberIdHasBeenSet = true; m_subscriberId.assign(value); }
    inline SubscriberResource& WithSubscriberId(const Aws::String& value) { SetSubscriberId(value); return *this;}
    inline SubscriberResource& WithSubscriberId(Aws::String&& value) { SetSubscriberId(std::move(value)); return *this;}
    inline SubscriberResource& WithSubscriberId(const char* value) { SetSubscriberId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services identity used to access your data.</p>
     */
    inline const AwsIdentity& GetSubscriberIdentity() const{ return m_subscriberIdentity; }
    inline bool SubscriberIdentityHasBeenSet() const { return m_subscriberIdentityHasBeenSet; }
    inline void SetSubscriberIdentity(const AwsIdentity& value) { m_subscriberIdentityHasBeenSet = true; m_subscriberIdentity = value; }
    inline void SetSubscriberIdentity(AwsIdentity&& value) { m_subscriberIdentityHasBeenSet = true; m_subscriberIdentity = std::move(value); }
    inline SubscriberResource& WithSubscriberIdentity(const AwsIdentity& value) { SetSubscriberIdentity(value); return *this;}
    inline SubscriberResource& WithSubscriberIdentity(AwsIdentity&& value) { SetSubscriberIdentity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your Amazon Security Lake subscriber account.</p>
     */
    inline const Aws::String& GetSubscriberName() const{ return m_subscriberName; }
    inline bool SubscriberNameHasBeenSet() const { return m_subscriberNameHasBeenSet; }
    inline void SetSubscriberName(const Aws::String& value) { m_subscriberNameHasBeenSet = true; m_subscriberName = value; }
    inline void SetSubscriberName(Aws::String&& value) { m_subscriberNameHasBeenSet = true; m_subscriberName = std::move(value); }
    inline void SetSubscriberName(const char* value) { m_subscriberNameHasBeenSet = true; m_subscriberName.assign(value); }
    inline SubscriberResource& WithSubscriberName(const Aws::String& value) { SetSubscriberName(value); return *this;}
    inline SubscriberResource& WithSubscriberName(Aws::String&& value) { SetSubscriberName(std::move(value)); return *this;}
    inline SubscriberResource& WithSubscriberName(const char* value) { SetSubscriberName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscriber status of the Amazon Security Lake subscriber account.</p>
     */
    inline const SubscriberStatus& GetSubscriberStatus() const{ return m_subscriberStatus; }
    inline bool SubscriberStatusHasBeenSet() const { return m_subscriberStatusHasBeenSet; }
    inline void SetSubscriberStatus(const SubscriberStatus& value) { m_subscriberStatusHasBeenSet = true; m_subscriberStatus = value; }
    inline void SetSubscriberStatus(SubscriberStatus&& value) { m_subscriberStatusHasBeenSet = true; m_subscriberStatus = std::move(value); }
    inline SubscriberResource& WithSubscriberStatus(const SubscriberStatus& value) { SetSubscriberStatus(value); return *this;}
    inline SubscriberResource& WithSubscriberStatus(SubscriberStatus&& value) { SetSubscriberStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the subscriber was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline SubscriberResource& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline SubscriberResource& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccessType> m_accessTypes;
    bool m_accessTypesHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
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

    SubscriberStatus m_subscriberStatus;
    bool m_subscriberStatusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
