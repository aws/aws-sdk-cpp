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
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRuleMatchAttributesDestinations() = default;
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRuleMatchAttributesDestinations(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRuleMatchAttributesDestinations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An IP address or a block of IP addresses.</p>
     */
    inline const Aws::String& GetAddressDefinition() const { return m_addressDefinition; }
    inline bool AddressDefinitionHasBeenSet() const { return m_addressDefinitionHasBeenSet; }
    template<typename AddressDefinitionT = Aws::String>
    void SetAddressDefinition(AddressDefinitionT&& value) { m_addressDefinitionHasBeenSet = true; m_addressDefinition = std::forward<AddressDefinitionT>(value); }
    template<typename AddressDefinitionT = Aws::String>
    RuleGroupSourceStatelessRuleMatchAttributesDestinations& WithAddressDefinition(AddressDefinitionT&& value) { SetAddressDefinition(std::forward<AddressDefinitionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_addressDefinition;
    bool m_addressDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
