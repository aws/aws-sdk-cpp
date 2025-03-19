/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>A list of IP addresses and address ranges, in CIDR notation. This is part of
   * a <a>RuleVariables</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/IPSet">AWS
   * API Reference</a></p>
   */
  class IPSet
  {
  public:
    AWS_NETWORKFIREWALL_API IPSet() = default;
    AWS_NETWORKFIREWALL_API IPSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API IPSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of IP addresses and address ranges, in CIDR notation. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDefinition() const { return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    template<typename DefinitionT = Aws::Vector<Aws::String>>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = Aws::Vector<Aws::String>>
    IPSet& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    template<typename DefinitionT = Aws::String>
    IPSet& AddDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition.emplace_back(std::forward<DefinitionT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_definition;
    bool m_definitionHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
