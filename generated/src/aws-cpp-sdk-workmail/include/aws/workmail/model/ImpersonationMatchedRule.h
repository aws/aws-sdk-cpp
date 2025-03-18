/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
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
namespace WorkMail
{
namespace Model
{

  /**
   * <p>The impersonation rule that matched the input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ImpersonationMatchedRule">AWS
   * API Reference</a></p>
   */
  class ImpersonationMatchedRule
  {
  public:
    AWS_WORKMAIL_API ImpersonationMatchedRule() = default;
    AWS_WORKMAIL_API ImpersonationMatchedRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API ImpersonationMatchedRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the rule that matched the input</p>
     */
    inline const Aws::String& GetImpersonationRuleId() const { return m_impersonationRuleId; }
    inline bool ImpersonationRuleIdHasBeenSet() const { return m_impersonationRuleIdHasBeenSet; }
    template<typename ImpersonationRuleIdT = Aws::String>
    void SetImpersonationRuleId(ImpersonationRuleIdT&& value) { m_impersonationRuleIdHasBeenSet = true; m_impersonationRuleId = std::forward<ImpersonationRuleIdT>(value); }
    template<typename ImpersonationRuleIdT = Aws::String>
    ImpersonationMatchedRule& WithImpersonationRuleId(ImpersonationRuleIdT&& value) { SetImpersonationRuleId(std::forward<ImpersonationRuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the rule that matched the input.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ImpersonationMatchedRule& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_impersonationRuleId;
    bool m_impersonationRuleIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
