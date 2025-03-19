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
    AWS_OMICS_API CreateShareRequest() = default;

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
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    CreateShareRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal subscriber is the account being offered shared access to the
     * resource. </p>
     */
    inline const Aws::String& GetPrincipalSubscriber() const { return m_principalSubscriber; }
    inline bool PrincipalSubscriberHasBeenSet() const { return m_principalSubscriberHasBeenSet; }
    template<typename PrincipalSubscriberT = Aws::String>
    void SetPrincipalSubscriber(PrincipalSubscriberT&& value) { m_principalSubscriberHasBeenSet = true; m_principalSubscriber = std::forward<PrincipalSubscriberT>(value); }
    template<typename PrincipalSubscriberT = Aws::String>
    CreateShareRequest& WithPrincipalSubscriber(PrincipalSubscriberT&& value) { SetPrincipalSubscriber(std::forward<PrincipalSubscriberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name that the owner defines for the share.</p>
     */
    inline const Aws::String& GetShareName() const { return m_shareName; }
    inline bool ShareNameHasBeenSet() const { return m_shareNameHasBeenSet; }
    template<typename ShareNameT = Aws::String>
    void SetShareName(ShareNameT&& value) { m_shareNameHasBeenSet = true; m_shareName = std::forward<ShareNameT>(value); }
    template<typename ShareNameT = Aws::String>
    CreateShareRequest& WithShareName(ShareNameT&& value) { SetShareName(std::forward<ShareNameT>(value)); return *this;}
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
