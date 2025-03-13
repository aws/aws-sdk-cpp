/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/Sequence.h>
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
   * <p> A top-level object field that provides details about an Amazon GuardDuty
   * Extended Threat Detection attack sequence. GuardDuty generates an attack
   * sequence finding when multiple events align to a potentially suspicious
   * activity. To receive GuardDuty attack sequence findings in Security Hub, you
   * must have GuardDuty enabled. For more information, see <a
   * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty-extended-threat-detection.html">GuardDuty
   * Extended Threat Detection </a> in the <i>Amazon GuardDuty User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Detection">AWS
   * API Reference</a></p>
   */
  class Detection
  {
  public:
    AWS_SECURITYHUB_API Detection() = default;
    AWS_SECURITYHUB_API Detection(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Detection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Provides details about an attack sequence. </p>
     */
    inline const Sequence& GetSequence() const { return m_sequence; }
    inline bool SequenceHasBeenSet() const { return m_sequenceHasBeenSet; }
    template<typename SequenceT = Sequence>
    void SetSequence(SequenceT&& value) { m_sequenceHasBeenSet = true; m_sequence = std::forward<SequenceT>(value); }
    template<typename SequenceT = Sequence>
    Detection& WithSequence(SequenceT&& value) { SetSequence(std::forward<SequenceT>(value)); return *this;}
    ///@}
  private:

    Sequence m_sequence;
    bool m_sequenceHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
