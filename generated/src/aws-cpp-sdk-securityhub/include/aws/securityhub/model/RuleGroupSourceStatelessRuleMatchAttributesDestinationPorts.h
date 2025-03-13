/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
   * <p>A port range to specify the destination ports to inspect for.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RuleGroupSourceStatelessRuleMatchAttributesDestinationPorts">AWS
   * API Reference</a></p>
   */
  class RuleGroupSourceStatelessRuleMatchAttributesDestinationPorts
  {
  public:
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRuleMatchAttributesDestinationPorts() = default;
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRuleMatchAttributesDestinationPorts(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRuleMatchAttributesDestinationPorts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The starting port value for the port range.</p>
     */
    inline int GetFromPort() const { return m_fromPort; }
    inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }
    inline RuleGroupSourceStatelessRuleMatchAttributesDestinationPorts& WithFromPort(int value) { SetFromPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ending port value for the port range.</p>
     */
    inline int GetToPort() const { return m_toPort; }
    inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }
    inline RuleGroupSourceStatelessRuleMatchAttributesDestinationPorts& WithToPort(int value) { SetToPort(value); return *this;}
    ///@}
  private:

    int m_fromPort{0};
    bool m_fromPortHasBeenSet = false;

    int m_toPort{0};
    bool m_toPortHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
