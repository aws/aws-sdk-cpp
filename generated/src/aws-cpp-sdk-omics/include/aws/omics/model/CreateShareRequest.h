﻿/**
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


    ///@{
    /**
     * <p>The ARN of the resource to be shared.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline CreateShareRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline CreateShareRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline CreateShareRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal subscriber is the account being offered shared access to the
     * resource. </p>
     */
    inline const Aws::String& GetPrincipalSubscriber() const{ return m_principalSubscriber; }
    inline bool PrincipalSubscriberHasBeenSet() const { return m_principalSubscriberHasBeenSet; }
    inline void SetPrincipalSubscriber(const Aws::String& value) { m_principalSubscriberHasBeenSet = true; m_principalSubscriber = value; }
    inline void SetPrincipalSubscriber(Aws::String&& value) { m_principalSubscriberHasBeenSet = true; m_principalSubscriber = std::move(value); }
    inline void SetPrincipalSubscriber(const char* value) { m_principalSubscriberHasBeenSet = true; m_principalSubscriber.assign(value); }
    inline CreateShareRequest& WithPrincipalSubscriber(const Aws::String& value) { SetPrincipalSubscriber(value); return *this;}
    inline CreateShareRequest& WithPrincipalSubscriber(Aws::String&& value) { SetPrincipalSubscriber(std::move(value)); return *this;}
    inline CreateShareRequest& WithPrincipalSubscriber(const char* value) { SetPrincipalSubscriber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name that the owner defines for the share.</p>
     */
    inline const Aws::String& GetShareName() const{ return m_shareName; }
    inline bool ShareNameHasBeenSet() const { return m_shareNameHasBeenSet; }
    inline void SetShareName(const Aws::String& value) { m_shareNameHasBeenSet = true; m_shareName = value; }
    inline void SetShareName(Aws::String&& value) { m_shareNameHasBeenSet = true; m_shareName = std::move(value); }
    inline void SetShareName(const char* value) { m_shareNameHasBeenSet = true; m_shareName.assign(value); }
    inline CreateShareRequest& WithShareName(const Aws::String& value) { SetShareName(value); return *this;}
    inline CreateShareRequest& WithShareName(Aws::String&& value) { SetShareName(std::move(value)); return *this;}
    inline CreateShareRequest& WithShareName(const char* value) { SetShareName(value); return *this;}
    ///@}
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
