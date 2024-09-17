/**
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
    AWS_VPCLATTICE_API RuleAction();
    AWS_VPCLATTICE_API RuleAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API RuleAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The fixed response action. The rule returns a custom HTTP response.</p>
     */
    inline const FixedResponseAction& GetFixedResponse() const{ return m_fixedResponse; }
    inline bool FixedResponseHasBeenSet() const { return m_fixedResponseHasBeenSet; }
    inline void SetFixedResponse(const FixedResponseAction& value) { m_fixedResponseHasBeenSet = true; m_fixedResponse = value; }
    inline void SetFixedResponse(FixedResponseAction&& value) { m_fixedResponseHasBeenSet = true; m_fixedResponse = std::move(value); }
    inline RuleAction& WithFixedResponse(const FixedResponseAction& value) { SetFixedResponse(value); return *this;}
    inline RuleAction& WithFixedResponse(FixedResponseAction&& value) { SetFixedResponse(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The forward action. Traffic that matches the rule is forwarded to the
     * specified target groups.</p>
     */
    inline const ForwardAction& GetForward() const{ return m_forward; }
    inline bool ForwardHasBeenSet() const { return m_forwardHasBeenSet; }
    inline void SetForward(const ForwardAction& value) { m_forwardHasBeenSet = true; m_forward = value; }
    inline void SetForward(ForwardAction&& value) { m_forwardHasBeenSet = true; m_forward = std::move(value); }
    inline RuleAction& WithForward(const ForwardAction& value) { SetForward(value); return *this;}
    inline RuleAction& WithForward(ForwardAction&& value) { SetForward(std::move(value)); return *this;}
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
