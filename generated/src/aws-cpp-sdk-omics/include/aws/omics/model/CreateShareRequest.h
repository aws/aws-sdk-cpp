/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Omics
{
namespace Model
{

  /**
   */
  class CreateShareRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API CreateShareRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateShare"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    /**
     * <p> The resource ARN for the analytics store to be shared. </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p> The resource ARN for the analytics store to be shared. </p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p> The resource ARN for the analytics store to be shared. </p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p> The resource ARN for the analytics store to be shared. </p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p> The resource ARN for the analytics store to be shared. </p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p> The resource ARN for the analytics store to be shared. </p>
     */
    inline CreateShareRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p> The resource ARN for the analytics store to be shared. </p>
     */
    inline CreateShareRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p> The resource ARN for the analytics store to be shared. </p>
     */
    inline CreateShareRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p> The principal subscriber is the account being given access to the analytics
     * store data through the share offer. </p>
     */
    inline const Aws::String& GetPrincipalSubscriber() const{ return m_principalSubscriber; }

    /**
     * <p> The principal subscriber is the account being given access to the analytics
     * store data through the share offer. </p>
     */
    inline bool PrincipalSubscriberHasBeenSet() const { return m_principalSubscriberHasBeenSet; }

    /**
     * <p> The principal subscriber is the account being given access to the analytics
     * store data through the share offer. </p>
     */
    inline void SetPrincipalSubscriber(const Aws::String& value) { m_principalSubscriberHasBeenSet = true; m_principalSubscriber = value; }

    /**
     * <p> The principal subscriber is the account being given access to the analytics
     * store data through the share offer. </p>
     */
    inline void SetPrincipalSubscriber(Aws::String&& value) { m_principalSubscriberHasBeenSet = true; m_principalSubscriber = std::move(value); }

    /**
     * <p> The principal subscriber is the account being given access to the analytics
     * store data through the share offer. </p>
     */
    inline void SetPrincipalSubscriber(const char* value) { m_principalSubscriberHasBeenSet = true; m_principalSubscriber.assign(value); }

    /**
     * <p> The principal subscriber is the account being given access to the analytics
     * store data through the share offer. </p>
     */
    inline CreateShareRequest& WithPrincipalSubscriber(const Aws::String& value) { SetPrincipalSubscriber(value); return *this;}

    /**
     * <p> The principal subscriber is the account being given access to the analytics
     * store data through the share offer. </p>
     */
    inline CreateShareRequest& WithPrincipalSubscriber(Aws::String&& value) { SetPrincipalSubscriber(std::move(value)); return *this;}

    /**
     * <p> The principal subscriber is the account being given access to the analytics
     * store data through the share offer. </p>
     */
    inline CreateShareRequest& WithPrincipalSubscriber(const char* value) { SetPrincipalSubscriber(value); return *this;}


    /**
     * <p> A name given to the share. </p>
     */
    inline const Aws::String& GetShareName() const{ return m_shareName; }

    /**
     * <p> A name given to the share. </p>
     */
    inline bool ShareNameHasBeenSet() const { return m_shareNameHasBeenSet; }

    /**
     * <p> A name given to the share. </p>
     */
    inline void SetShareName(const Aws::String& value) { m_shareNameHasBeenSet = true; m_shareName = value; }

    /**
     * <p> A name given to the share. </p>
     */
    inline void SetShareName(Aws::String&& value) { m_shareNameHasBeenSet = true; m_shareName = std::move(value); }

    /**
     * <p> A name given to the share. </p>
     */
    inline void SetShareName(const char* value) { m_shareNameHasBeenSet = true; m_shareName.assign(value); }

    /**
     * <p> A name given to the share. </p>
     */
    inline CreateShareRequest& WithShareName(const Aws::String& value) { SetShareName(value); return *this;}

    /**
     * <p> A name given to the share. </p>
     */
    inline CreateShareRequest& WithShareName(Aws::String&& value) { SetShareName(std::move(value)); return *this;}

    /**
     * <p> A name given to the share. </p>
     */
    inline CreateShareRequest& WithShareName(const char* value) { SetShareName(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_principalSubscriber;
    bool m_principalSubscriberHasBeenSet = false;

    Aws::String m_shareName;
    bool m_shareNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
