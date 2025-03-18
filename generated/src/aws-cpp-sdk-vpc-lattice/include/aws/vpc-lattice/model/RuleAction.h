﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/model/FixedResponseAction.h>
#include <aws/vpc-lattice/model/ForwardAction.h>
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
namespace VPCLattice
{
namespace Model
{

  /**
   * <p>Describes the action for a rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/RuleAction">AWS
   * API Reference</a></p>
   */
  class RuleAction
  {
  public:
    AWS_VPCLATTICE_API RuleAction() = default;
    AWS_VPCLATTICE_API RuleAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API RuleAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The fixed response action. The rule returns a custom HTTP response.</p>
     */
    inline const FixedResponseAction& GetFixedResponse() const { return m_fixedResponse; }
    inline bool FixedResponseHasBeenSet() const { return m_fixedResponseHasBeenSet; }
    template<typename FixedResponseT = FixedResponseAction>
    void SetFixedResponse(FixedResponseT&& value) { m_fixedResponseHasBeenSet = true; m_fixedResponse = std::forward<FixedResponseT>(value); }
    template<typename FixedResponseT = FixedResponseAction>
    RuleAction& WithFixedResponse(FixedResponseT&& value) { SetFixedResponse(std::forward<FixedResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The forward action. Traffic that matches the rule is forwarded to the
     * specified target groups.</p>
     */
    inline const ForwardAction& GetForward() const { return m_forward; }
    inline bool ForwardHasBeenSet() const { return m_forwardHasBeenSet; }
    template<typename ForwardT = ForwardAction>
    void SetForward(ForwardT&& value) { m_forwardHasBeenSet = true; m_forward = std::forward<ForwardT>(value); }
    template<typename ForwardT = ForwardAction>
    RuleAction& WithForward(ForwardT&& value) { SetForward(std::forward<ForwardT>(value)); return *this;}
    ///@}
  private:

    FixedResponseAction m_fixedResponse;
    bool m_fixedResponseHasBeenSet = false;

    ForwardAction m_forward;
    bool m_forwardHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
