/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Settings related to idle shutdown of Studio applications in a
   * space.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SpaceIdleSettings">AWS
   * API Reference</a></p>
   */
  class SpaceIdleSettings
  {
  public:
    AWS_SAGEMAKER_API SpaceIdleSettings() = default;
    AWS_SAGEMAKER_API SpaceIdleSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SpaceIdleSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time that SageMaker waits after the application becomes idle before
     * shutting it down.</p>
     */
    inline int GetIdleTimeoutInMinutes() const { return m_idleTimeoutInMinutes; }
    inline bool IdleTimeoutInMinutesHasBeenSet() const { return m_idleTimeoutInMinutesHasBeenSet; }
    inline void SetIdleTimeoutInMinutes(int value) { m_idleTimeoutInMinutesHasBeenSet = true; m_idleTimeoutInMinutes = value; }
    inline SpaceIdleSettings& WithIdleTimeoutInMinutes(int value) { SetIdleTimeoutInMinutes(value); return *this;}
    ///@}
  private:

    int m_idleTimeoutInMinutes{0};
    bool m_idleTimeoutInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
