/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/RuleGroupVariablesIpSetsDetails.h>
#include <aws/securityhub/model/RuleGroupVariablesPortSetsDetails.h>
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
   * <p>Additional settings to use in the specified rules.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RuleGroupVariables">AWS
   * API Reference</a></p>
   */
  class RuleGroupVariables
  {
  public:
    AWS_SECURITYHUB_API RuleGroupVariables();
    AWS_SECURITYHUB_API RuleGroupVariables(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RuleGroupVariables& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of IP addresses and address ranges, in CIDR notation.</p>
     */
    inline const RuleGroupVariablesIpSetsDetails& GetIpSets() const{ return m_ipSets; }

    /**
     * <p>A list of IP addresses and address ranges, in CIDR notation.</p>
     */
    inline bool IpSetsHasBeenSet() const { return m_ipSetsHasBeenSet; }

    /**
     * <p>A list of IP addresses and address ranges, in CIDR notation.</p>
     */
    inline void SetIpSets(const RuleGroupVariablesIpSetsDetails& value) { m_ipSetsHasBeenSet = true; m_ipSets = value; }

    /**
     * <p>A list of IP addresses and address ranges, in CIDR notation.</p>
     */
    inline void SetIpSets(RuleGroupVariablesIpSetsDetails&& value) { m_ipSetsHasBeenSet = true; m_ipSets = std::move(value); }

    /**
     * <p>A list of IP addresses and address ranges, in CIDR notation.</p>
     */
    inline RuleGroupVariables& WithIpSets(const RuleGroupVariablesIpSetsDetails& value) { SetIpSets(value); return *this;}

    /**
     * <p>A list of IP addresses and address ranges, in CIDR notation.</p>
     */
    inline RuleGroupVariables& WithIpSets(RuleGroupVariablesIpSetsDetails&& value) { SetIpSets(std::move(value)); return *this;}


    /**
     * <p>A list of port ranges.</p>
     */
    inline const RuleGroupVariablesPortSetsDetails& GetPortSets() const{ return m_portSets; }

    /**
     * <p>A list of port ranges.</p>
     */
    inline bool PortSetsHasBeenSet() const { return m_portSetsHasBeenSet; }

    /**
     * <p>A list of port ranges.</p>
     */
    inline void SetPortSets(const RuleGroupVariablesPortSetsDetails& value) { m_portSetsHasBeenSet = true; m_portSets = value; }

    /**
     * <p>A list of port ranges.</p>
     */
    inline void SetPortSets(RuleGroupVariablesPortSetsDetails&& value) { m_portSetsHasBeenSet = true; m_portSets = std::move(value); }

    /**
     * <p>A list of port ranges.</p>
     */
    inline RuleGroupVariables& WithPortSets(const RuleGroupVariablesPortSetsDetails& value) { SetPortSets(value); return *this;}

    /**
     * <p>A list of port ranges.</p>
     */
    inline RuleGroupVariables& WithPortSets(RuleGroupVariablesPortSetsDetails&& value) { SetPortSets(std::move(value)); return *this;}

  private:

    RuleGroupVariablesIpSetsDetails m_ipSets;
    bool m_ipSetsHasBeenSet = false;

    RuleGroupVariablesPortSetsDetails m_portSets;
    bool m_portSetsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
