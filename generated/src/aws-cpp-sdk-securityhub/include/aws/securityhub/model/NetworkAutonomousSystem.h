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
   * <p> Contains information about the Autonomous System (AS) of the network
   * endpoints involved in an Amazon GuardDuty Extended Threat Detection attack
   * sequence. GuardDuty generates an attack sequence finding when multiple events
   * align to a potentially suspicious activity. To receive GuardDuty attack sequence
   * findings in Security Hub, you must have GuardDuty enabled. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty-extended-threat-detection.html">GuardDuty
   * Extended Threat Detection </a> in the <i>Amazon GuardDuty User Guide</i>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/NetworkAutonomousSystem">AWS
   * API Reference</a></p>
   */
  class NetworkAutonomousSystem
  {
  public:
    AWS_SECURITYHUB_API NetworkAutonomousSystem();
    AWS_SECURITYHUB_API NetworkAutonomousSystem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API NetworkAutonomousSystem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name associated with the AS. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline NetworkAutonomousSystem& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline NetworkAutonomousSystem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline NetworkAutonomousSystem& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique number that identifies the AS. </p>
     */
    inline int GetNumber() const{ return m_number; }
    inline bool NumberHasBeenSet() const { return m_numberHasBeenSet; }
    inline void SetNumber(int value) { m_numberHasBeenSet = true; m_number = value; }
    inline NetworkAutonomousSystem& WithNumber(int value) { SetNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_number;
    bool m_numberHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
