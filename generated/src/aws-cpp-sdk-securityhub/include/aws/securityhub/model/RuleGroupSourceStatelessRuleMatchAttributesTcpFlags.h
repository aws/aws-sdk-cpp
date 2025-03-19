/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A set of TCP flags and masks to inspect for.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RuleGroupSourceStatelessRuleMatchAttributesTcpFlags">AWS
   * API Reference</a></p>
   */
  class RuleGroupSourceStatelessRuleMatchAttributesTcpFlags
  {
  public:
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRuleMatchAttributesTcpFlags() = default;
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRuleMatchAttributesTcpFlags(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRuleMatchAttributesTcpFlags& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the flags from the <code>Masks</code> setting that must be set in
     * order for the packet to match. Flags that are listed must be set. Flags that are
     * not listed must not be set.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFlags() const { return m_flags; }
    inline bool FlagsHasBeenSet() const { return m_flagsHasBeenSet; }
    template<typename FlagsT = Aws::Vector<Aws::String>>
    void SetFlags(FlagsT&& value) { m_flagsHasBeenSet = true; m_flags = std::forward<FlagsT>(value); }
    template<typename FlagsT = Aws::Vector<Aws::String>>
    RuleGroupSourceStatelessRuleMatchAttributesTcpFlags& WithFlags(FlagsT&& value) { SetFlags(std::forward<FlagsT>(value)); return *this;}
    template<typename FlagsT = Aws::String>
    RuleGroupSourceStatelessRuleMatchAttributesTcpFlags& AddFlags(FlagsT&& value) { m_flagsHasBeenSet = true; m_flags.emplace_back(std::forward<FlagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The set of flags to consider in the inspection. If not specified, then all
     * flags are inspected.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMasks() const { return m_masks; }
    inline bool MasksHasBeenSet() const { return m_masksHasBeenSet; }
    template<typename MasksT = Aws::Vector<Aws::String>>
    void SetMasks(MasksT&& value) { m_masksHasBeenSet = true; m_masks = std::forward<MasksT>(value); }
    template<typename MasksT = Aws::Vector<Aws::String>>
    RuleGroupSourceStatelessRuleMatchAttributesTcpFlags& WithMasks(MasksT&& value) { SetMasks(std::forward<MasksT>(value)); return *this;}
    template<typename MasksT = Aws::String>
    RuleGroupSourceStatelessRuleMatchAttributesTcpFlags& AddMasks(MasksT&& value) { m_masksHasBeenSet = true; m_masks.emplace_back(std::forward<MasksT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_flags;
    bool m_flagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_masks;
    bool m_masksHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
