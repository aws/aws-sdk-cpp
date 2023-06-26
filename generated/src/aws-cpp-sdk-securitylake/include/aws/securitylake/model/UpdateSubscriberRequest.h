/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securitylake/model/AwsIdentity.h>
#include <aws/securitylake/model/LogSourceResource.h>
#include <utility>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class UpdateSubscriberRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API UpdateSubscriberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSubscriber"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    /**
     * <p>The supported Amazon Web Services from which logs and events are collected.
     * For the list of supported Amazon Web Services, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/internal-sources.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline const Aws::Vector<LogSourceResource>& GetSources() const{ return m_sources; }

    /**
     * <p>The supported Amazon Web Services from which logs and events are collected.
     * For the list of supported Amazon Web Services, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/internal-sources.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    /**
     * <p>The supported Amazon Web Services from which logs and events are collected.
     * For the list of supported Amazon Web Services, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/internal-sources.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline void SetSources(const Aws::Vector<LogSourceResource>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * <p>The supported Amazon Web Services from which logs and events are collected.
     * For the list of supported Amazon Web Services, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/internal-sources.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline void SetSources(Aws::Vector<LogSourceResource>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * <p>The supported Amazon Web Services from which logs and events are collected.
     * For the list of supported Amazon Web Services, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/internal-sources.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline UpdateSubscriberRequest& WithSources(const Aws::Vector<LogSourceResource>& value) { SetSources(value); return *this;}

    /**
     * <p>The supported Amazon Web Services from which logs and events are collected.
     * For the list of supported Amazon Web Services, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/internal-sources.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline UpdateSubscriberRequest& WithSources(Aws::Vector<LogSourceResource>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>The supported Amazon Web Services from which logs and events are collected.
     * For the list of supported Amazon Web Services, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/internal-sources.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline UpdateSubscriberRequest& AddSources(const LogSourceResource& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * <p>The supported Amazon Web Services from which logs and events are collected.
     * For the list of supported Amazon Web Services, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/internal-sources.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline UpdateSubscriberRequest& AddSources(LogSourceResource&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }


    /**
     * <p>The description of the Security Lake account subscriber.</p>
     */
    inline const Aws::String& GetSubscriberDescription() const{ return m_subscriberDescription; }

    /**
     * <p>The description of the Security Lake account subscriber.</p>
     */
    inline bool SubscriberDescriptionHasBeenSet() const { return m_subscriberDescriptionHasBeenSet; }

    /**
     * <p>The description of the Security Lake account subscriber.</p>
     */
    inline void SetSubscriberDescription(const Aws::String& value) { m_subscriberDescriptionHasBeenSet = true; m_subscriberDescription = value; }

    /**
     * <p>The description of the Security Lake account subscriber.</p>
     */
    inline void SetSubscriberDescription(Aws::String&& value) { m_subscriberDescriptionHasBeenSet = true; m_subscriberDescription = std::move(value); }

    /**
     * <p>The description of the Security Lake account subscriber.</p>
     */
    inline void SetSubscriberDescription(const char* value) { m_subscriberDescriptionHasBeenSet = true; m_subscriberDescription.assign(value); }

    /**
     * <p>The description of the Security Lake account subscriber.</p>
     */
    inline UpdateSubscriberRequest& WithSubscriberDescription(const Aws::String& value) { SetSubscriberDescription(value); return *this;}

    /**
     * <p>The description of the Security Lake account subscriber.</p>
     */
    inline UpdateSubscriberRequest& WithSubscriberDescription(Aws::String&& value) { SetSubscriberDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the Security Lake account subscriber.</p>
     */
    inline UpdateSubscriberRequest& WithSubscriberDescription(const char* value) { SetSubscriberDescription(value); return *this;}


    /**
     * <p>A value created by Security Lake that uniquely identifies your
     * subscription.</p>
     */
    inline const Aws::String& GetSubscriberId() const{ return m_subscriberId; }

    /**
     * <p>A value created by Security Lake that uniquely identifies your
     * subscription.</p>
     */
    inline bool SubscriberIdHasBeenSet() const { return m_subscriberIdHasBeenSet; }

    /**
     * <p>A value created by Security Lake that uniquely identifies your
     * subscription.</p>
     */
    inline void SetSubscriberId(const Aws::String& value) { m_subscriberIdHasBeenSet = true; m_subscriberId = value; }

    /**
     * <p>A value created by Security Lake that uniquely identifies your
     * subscription.</p>
     */
    inline void SetSubscriberId(Aws::String&& value) { m_subscriberIdHasBeenSet = true; m_subscriberId = std::move(value); }

    /**
     * <p>A value created by Security Lake that uniquely identifies your
     * subscription.</p>
     */
    inline void SetSubscriberId(const char* value) { m_subscriberIdHasBeenSet = true; m_subscriberId.assign(value); }

    /**
     * <p>A value created by Security Lake that uniquely identifies your
     * subscription.</p>
     */
    inline UpdateSubscriberRequest& WithSubscriberId(const Aws::String& value) { SetSubscriberId(value); return *this;}

    /**
     * <p>A value created by Security Lake that uniquely identifies your
     * subscription.</p>
     */
    inline UpdateSubscriberRequest& WithSubscriberId(Aws::String&& value) { SetSubscriberId(std::move(value)); return *this;}

    /**
     * <p>A value created by Security Lake that uniquely identifies your
     * subscription.</p>
     */
    inline UpdateSubscriberRequest& WithSubscriberId(const char* value) { SetSubscriberId(value); return *this;}


    /**
     * <p>The AWS identity used to access your data.</p>
     */
    inline const AwsIdentity& GetSubscriberIdentity() const{ return m_subscriberIdentity; }

    /**
     * <p>The AWS identity used to access your data.</p>
     */
    inline bool SubscriberIdentityHasBeenSet() const { return m_subscriberIdentityHasBeenSet; }

    /**
     * <p>The AWS identity used to access your data.</p>
     */
    inline void SetSubscriberIdentity(const AwsIdentity& value) { m_subscriberIdentityHasBeenSet = true; m_subscriberIdentity = value; }

    /**
     * <p>The AWS identity used to access your data.</p>
     */
    inline void SetSubscriberIdentity(AwsIdentity&& value) { m_subscriberIdentityHasBeenSet = true; m_subscriberIdentity = std::move(value); }

    /**
     * <p>The AWS identity used to access your data.</p>
     */
    inline UpdateSubscriberRequest& WithSubscriberIdentity(const AwsIdentity& value) { SetSubscriberIdentity(value); return *this;}

    /**
     * <p>The AWS identity used to access your data.</p>
     */
    inline UpdateSubscriberRequest& WithSubscriberIdentity(AwsIdentity&& value) { SetSubscriberIdentity(std::move(value)); return *this;}


    /**
     * <p>The name of the Security Lake account subscriber.</p>
     */
    inline const Aws::String& GetSubscriberName() const{ return m_subscriberName; }

    /**
     * <p>The name of the Security Lake account subscriber.</p>
     */
    inline bool SubscriberNameHasBeenSet() const { return m_subscriberNameHasBeenSet; }

    /**
     * <p>The name of the Security Lake account subscriber.</p>
     */
    inline void SetSubscriberName(const Aws::String& value) { m_subscriberNameHasBeenSet = true; m_subscriberName = value; }

    /**
     * <p>The name of the Security Lake account subscriber.</p>
     */
    inline void SetSubscriberName(Aws::String&& value) { m_subscriberNameHasBeenSet = true; m_subscriberName = std::move(value); }

    /**
     * <p>The name of the Security Lake account subscriber.</p>
     */
    inline void SetSubscriberName(const char* value) { m_subscriberNameHasBeenSet = true; m_subscriberName.assign(value); }

    /**
     * <p>The name of the Security Lake account subscriber.</p>
     */
    inline UpdateSubscriberRequest& WithSubscriberName(const Aws::String& value) { SetSubscriberName(value); return *this;}

    /**
     * <p>The name of the Security Lake account subscriber.</p>
     */
    inline UpdateSubscriberRequest& WithSubscriberName(Aws::String&& value) { SetSubscriberName(std::move(value)); return *this;}

    /**
     * <p>The name of the Security Lake account subscriber.</p>
     */
    inline UpdateSubscriberRequest& WithSubscriberName(const char* value) { SetSubscriberName(value); return *this;}

  private:

    Aws::Vector<LogSourceResource> m_sources;
    bool m_sourcesHasBeenSet = false;

    Aws::String m_subscriberDescription;
    bool m_subscriberDescriptionHasBeenSet = false;

    Aws::String m_subscriberId;
    bool m_subscriberIdHasBeenSet = false;

    AwsIdentity m_subscriberIdentity;
    bool m_subscriberIdentityHasBeenSet = false;

    Aws::String m_subscriberName;
    bool m_subscriberNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
