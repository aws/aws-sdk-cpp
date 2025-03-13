/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   */
  class PutDataProtectionPolicyRequest : public SNSRequest
  {
  public:
    AWS_SNS_API PutDataProtectionPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDataProtectionPolicy"; }

    AWS_SNS_API Aws::String SerializePayload() const override;

  protected:
    AWS_SNS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ARN of the topic whose <code>DataProtectionPolicy</code> you want to add
     * or update.</p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the Amazon Web Services General Reference.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    PutDataProtectionPolicyRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON serialization of the topic's <code>DataProtectionPolicy</code>.</p>
     * <p>The <code>DataProtectionPolicy</code> must be in JSON string format.</p>
     * <p>Length Constraints: Maximum length of 30,720.</p>
     */
    inline const Aws::String& GetDataProtectionPolicy() const { return m_dataProtectionPolicy; }
    inline bool DataProtectionPolicyHasBeenSet() const { return m_dataProtectionPolicyHasBeenSet; }
    template<typename DataProtectionPolicyT = Aws::String>
    void SetDataProtectionPolicy(DataProtectionPolicyT&& value) { m_dataProtectionPolicyHasBeenSet = true; m_dataProtectionPolicy = std::forward<DataProtectionPolicyT>(value); }
    template<typename DataProtectionPolicyT = Aws::String>
    PutDataProtectionPolicyRequest& WithDataProtectionPolicy(DataProtectionPolicyT&& value) { SetDataProtectionPolicy(std::forward<DataProtectionPolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_dataProtectionPolicy;
    bool m_dataProtectionPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
