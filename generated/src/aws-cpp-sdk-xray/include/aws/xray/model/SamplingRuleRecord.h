/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/model/SamplingRule.h>
#include <aws/core/utils/DateTime.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>A <a
   * href="https://docs.aws.amazon.com/xray/latest/api/API_SamplingRule.html">SamplingRule</a>
   * and its metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/SamplingRuleRecord">AWS
   * API Reference</a></p>
   */
  class SamplingRuleRecord
  {
  public:
    AWS_XRAY_API SamplingRuleRecord() = default;
    AWS_XRAY_API SamplingRuleRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API SamplingRuleRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sampling rule.</p>
     */
    inline const SamplingRule& GetSamplingRule() const { return m_samplingRule; }
    inline bool SamplingRuleHasBeenSet() const { return m_samplingRuleHasBeenSet; }
    template<typename SamplingRuleT = SamplingRule>
    void SetSamplingRule(SamplingRuleT&& value) { m_samplingRuleHasBeenSet = true; m_samplingRule = std::forward<SamplingRuleT>(value); }
    template<typename SamplingRuleT = SamplingRule>
    SamplingRuleRecord& WithSamplingRule(SamplingRuleT&& value) { SetSamplingRule(std::forward<SamplingRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the rule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    SamplingRuleRecord& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the rule was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    SamplingRuleRecord& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}
  private:

    SamplingRule m_samplingRule;
    bool m_samplingRuleHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
