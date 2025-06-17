/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/mpa/MPARequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MPA
{
namespace Model
{

  /**
   */
  class GetPolicyVersionRequest : public MPARequest
  {
  public:
    AWS_MPA_API GetPolicyVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPolicyVersion"; }

    AWS_MPA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the policy.</p>
     */
    inline const Aws::String& GetPolicyVersionArn() const { return m_policyVersionArn; }
    inline bool PolicyVersionArnHasBeenSet() const { return m_policyVersionArnHasBeenSet; }
    template<typename PolicyVersionArnT = Aws::String>
    void SetPolicyVersionArn(PolicyVersionArnT&& value) { m_policyVersionArnHasBeenSet = true; m_policyVersionArn = std::forward<PolicyVersionArnT>(value); }
    template<typename PolicyVersionArnT = Aws::String>
    GetPolicyVersionRequest& WithPolicyVersionArn(PolicyVersionArnT&& value) { SetPolicyVersionArn(std::forward<PolicyVersionArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyVersionArn;
    bool m_policyVersionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
