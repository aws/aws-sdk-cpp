/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/oam/OAM_EXPORTS.h>
#include <aws/oam/OAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OAM
{
namespace Model
{

  /**
   */
  class PutSinkPolicyRequest : public OAMRequest
  {
  public:
    AWS_OAM_API PutSinkPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutSinkPolicy"; }

    AWS_OAM_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The JSON policy to use. If you are updating an existing policy, the entire
     * existing policy is replaced by what you specify here.</p> <p>The policy must be
     * in JSON string format with quotation marks escaped and no newlines.</p> <p>For
     * examples of different types of policies, see the <b>Examples</b> section on this
     * page.</p>
     */
    inline const Aws::String& GetPolicy() const { return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    template<typename PolicyT = Aws::String>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = Aws::String>
    PutSinkPolicyRequest& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the sink to attach this policy to.</p>
     */
    inline const Aws::String& GetSinkIdentifier() const { return m_sinkIdentifier; }
    inline bool SinkIdentifierHasBeenSet() const { return m_sinkIdentifierHasBeenSet; }
    template<typename SinkIdentifierT = Aws::String>
    void SetSinkIdentifier(SinkIdentifierT&& value) { m_sinkIdentifierHasBeenSet = true; m_sinkIdentifier = std::forward<SinkIdentifierT>(value); }
    template<typename SinkIdentifierT = Aws::String>
    PutSinkPolicyRequest& WithSinkIdentifier(SinkIdentifierT&& value) { SetSinkIdentifier(std::forward<SinkIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    Aws::String m_sinkIdentifier;
    bool m_sinkIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace OAM
} // namespace Aws
