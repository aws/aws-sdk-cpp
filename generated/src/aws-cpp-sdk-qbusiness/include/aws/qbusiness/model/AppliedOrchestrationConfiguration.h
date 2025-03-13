/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/OrchestrationControl.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>The chat orchestration specific admin controls configured for an Amazon Q
   * Business application. Determines whether Amazon Q Business automatically routes
   * chat requests across configured plugins and data sources in your Amazon Q
   * Business application.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/guardrails-global-controls.html#guardrails-global-orchestration">Chat
   * orchestration settings</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/AppliedOrchestrationConfiguration">AWS
   * API Reference</a></p>
   */
  class AppliedOrchestrationConfiguration
  {
  public:
    AWS_QBUSINESS_API AppliedOrchestrationConfiguration() = default;
    AWS_QBUSINESS_API AppliedOrchestrationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API AppliedOrchestrationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Information about whether chat orchestration is enabled or disabled for an
     * Amazon Q Business application. </p>
     */
    inline OrchestrationControl GetControl() const { return m_control; }
    inline bool ControlHasBeenSet() const { return m_controlHasBeenSet; }
    inline void SetControl(OrchestrationControl value) { m_controlHasBeenSet = true; m_control = value; }
    inline AppliedOrchestrationConfiguration& WithControl(OrchestrationControl value) { SetControl(value); return *this;}
    ///@}
  private:

    OrchestrationControl m_control{OrchestrationControl::NOT_SET};
    bool m_controlHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
