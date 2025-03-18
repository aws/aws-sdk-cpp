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
    AWS_SECURITYLAKE_API UpdateSubscriberRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSubscriber"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The supported Amazon Web Services services from which logs and events are
     * collected. For the list of supported Amazon Web Services services, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/internal-sources.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline const Aws::Vector<LogSourceResource>& GetSources() const { return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    template<typename SourcesT = Aws::Vector<LogSourceResource>>
    void SetSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources = std::forward<SourcesT>(value); }
    template<typename SourcesT = Aws::Vector<LogSourceResource>>
    UpdateSubscriberRequest& WithSources(SourcesT&& value) { SetSources(std::forward<SourcesT>(value)); return *this;}
    template<typename SourcesT = LogSourceResource>
    UpdateSubscriberRequest& AddSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources.emplace_back(std::forward<SourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The description of the Security Lake account subscriber.</p>
     */
    inline const Aws::String& GetSubscriberDescription() const { return m_subscriberDescription; }
    inline bool SubscriberDescriptionHasBeenSet() const { return m_subscriberDescriptionHasBeenSet; }
    template<typename SubscriberDescriptionT = Aws::String>
    void SetSubscriberDescription(SubscriberDescriptionT&& value) { m_subscriberDescriptionHasBeenSet = true; m_subscriberDescription = std::forward<SubscriberDescriptionT>(value); }
    template<typename SubscriberDescriptionT = Aws::String>
    UpdateSubscriberRequest& WithSubscriberDescription(SubscriberDescriptionT&& value) { SetSubscriberDescription(std::forward<SubscriberDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value created by Security Lake that uniquely identifies your
     * subscription.</p>
     */
    inline const Aws::String& GetSubscriberId() const { return m_subscriberId; }
    inline bool SubscriberIdHasBeenSet() const { return m_subscriberIdHasBeenSet; }
    template<typename SubscriberIdT = Aws::String>
    void SetSubscriberId(SubscriberIdT&& value) { m_subscriberIdHasBeenSet = true; m_subscriberId = std::forward<SubscriberIdT>(value); }
    template<typename SubscriberIdT = Aws::String>
    UpdateSubscriberRequest& WithSubscriberId(SubscriberIdT&& value) { SetSubscriberId(std::forward<SubscriberIdT>(value)); return *this;}
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
    UpdateSubscriberRequest& WithSubscriberIdentity(SubscriberIdentityT&& value) { SetSubscriberIdentity(std::forward<SubscriberIdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Security Lake account subscriber.</p>
     */
    inline const Aws::String& GetSubscriberName() const { return m_subscriberName; }
    inline bool SubscriberNameHasBeenSet() const { return m_subscriberNameHasBeenSet; }
    template<typename SubscriberNameT = Aws::String>
    void SetSubscriberName(SubscriberNameT&& value) { m_subscriberNameHasBeenSet = true; m_subscriberName = std::forward<SubscriberNameT>(value); }
    template<typename SubscriberNameT = Aws::String>
    UpdateSubscriberRequest& WithSubscriberName(SubscriberNameT&& value) { SetSubscriberName(std::forward<SubscriberNameT>(value)); return *this;}
    ///@}
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
