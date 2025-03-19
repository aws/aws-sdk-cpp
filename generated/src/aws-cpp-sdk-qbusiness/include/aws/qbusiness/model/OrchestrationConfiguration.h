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
   * <p>Configuration information required to enable chat orchestration for your
   * Amazon Q Business application.</p>  <p>Chat orchestration is optimized to
   * work for English language content. For more details on language support in
   * Amazon Q Business, see <a
   * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/supported-languages.html">Supported
   * languages</a>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/OrchestrationConfiguration">AWS
   * API Reference</a></p>
   */
  class OrchestrationConfiguration
  {
  public:
    AWS_QBUSINESS_API OrchestrationConfiguration() = default;
    AWS_QBUSINESS_API OrchestrationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API OrchestrationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Status information about whether chat orchestration is activated or
     * deactivated for your Amazon Q Business application.</p>
     */
    inline OrchestrationControl GetControl() const { return m_control; }
    inline bool ControlHasBeenSet() const { return m_controlHasBeenSet; }
    inline void SetControl(OrchestrationControl value) { m_controlHasBeenSet = true; m_control = value; }
    inline OrchestrationConfiguration& WithControl(OrchestrationControl value) { SetControl(value); return *this;}
    ///@}
  private:

    OrchestrationControl m_control{OrchestrationControl::NOT_SET};
    bool m_controlHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
