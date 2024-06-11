﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class RemoveSourceIdentifierFromSubscriptionRequest : public NeptuneRequest
  {
  public:
    AWS_NEPTUNE_API RemoveSourceIdentifierFromSubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveSourceIdentifierFromSubscription"; }

    AWS_NEPTUNE_API Aws::String SerializePayload() const override;

  protected:
    AWS_NEPTUNE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the event notification subscription you want to remove a source
     * identifier from.</p>
     */
    inline const Aws::String& GetSubscriptionName() const{ return m_subscriptionName; }
    inline bool SubscriptionNameHasBeenSet() const { return m_subscriptionNameHasBeenSet; }
    inline void SetSubscriptionName(const Aws::String& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = value; }
    inline void SetSubscriptionName(Aws::String&& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = std::move(value); }
    inline void SetSubscriptionName(const char* value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName.assign(value); }
    inline RemoveSourceIdentifierFromSubscriptionRequest& WithSubscriptionName(const Aws::String& value) { SetSubscriptionName(value); return *this;}
    inline RemoveSourceIdentifierFromSubscriptionRequest& WithSubscriptionName(Aws::String&& value) { SetSubscriptionName(std::move(value)); return *this;}
    inline RemoveSourceIdentifierFromSubscriptionRequest& WithSubscriptionName(const char* value) { SetSubscriptionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The source identifier to be removed from the subscription, such as the <b>DB
     * instance identifier</b> for a DB instance or the name of a security group.</p>
     */
    inline const Aws::String& GetSourceIdentifier() const{ return m_sourceIdentifier; }
    inline bool SourceIdentifierHasBeenSet() const { return m_sourceIdentifierHasBeenSet; }
    inline void SetSourceIdentifier(const Aws::String& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = value; }
    inline void SetSourceIdentifier(Aws::String&& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = std::move(value); }
    inline void SetSourceIdentifier(const char* value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier.assign(value); }
    inline RemoveSourceIdentifierFromSubscriptionRequest& WithSourceIdentifier(const Aws::String& value) { SetSourceIdentifier(value); return *this;}
    inline RemoveSourceIdentifierFromSubscriptionRequest& WithSourceIdentifier(Aws::String&& value) { SetSourceIdentifier(std::move(value)); return *this;}
    inline RemoveSourceIdentifierFromSubscriptionRequest& WithSourceIdentifier(const char* value) { SetSourceIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_subscriptionName;
    bool m_subscriptionNameHasBeenSet = false;

    Aws::String m_sourceIdentifier;
    bool m_sourceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
