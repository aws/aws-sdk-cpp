/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A destination IP address or range.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RuleGroupSourceStatelessRuleMatchAttributesDestinations">AWS
   * API Reference</a></p>
   */
  class RuleGroupSourceStatelessRuleMatchAttributesDestinations
  {
  public:
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRuleMatchAttributesDestinations();
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRuleMatchAttributesDestinations(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRuleMatchAttributesDestinations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An IP address or a block of IP addresses.</p>
     */
    inline const Aws::String& GetAddressDefinition() const{ return m_addressDefinition; }
    inline bool AddressDefinitionHasBeenSet() const { return m_addressDefinitionHasBeenSet; }
    inline void SetAddressDefinition(const Aws::String& value) { m_addressDefinitionHasBeenSet = true; m_addressDefinition = value; }
    inline void SetAddressDefinition(Aws::String&& value) { m_addressDefinitionHasBeenSet = true; m_addressDefinition = std::move(value); }
    inline void SetAddressDefinition(const char* value) { m_addressDefinitionHasBeenSet = true; m_addressDefinition.assign(value); }
    inline RuleGroupSourceStatelessRuleMatchAttributesDestinations& WithAddressDefinition(const Aws::String& value) { SetAddressDefinition(value); return *this;}
    inline RuleGroupSourceStatelessRuleMatchAttributesDestinations& WithAddressDefinition(Aws::String&& value) { SetAddressDefinition(std::move(value)); return *this;}
    inline RuleGroupSourceStatelessRuleMatchAttributesDestinations& WithAddressDefinition(const char* value) { SetAddressDefinition(value); return *this;}
    ///@}
  private:

    Aws::String m_addressDefinition;
    bool m_addressDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
