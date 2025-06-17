/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class GetAutomationRuleV2Request : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API GetAutomationRuleV2Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAutomationRuleV2"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the V2 automation rule.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    GetAutomationRuleV2Request& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
