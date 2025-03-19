/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/LifecycleManagement.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Settings related to idle shutdown of Studio applications.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/IdleSettings">AWS
   * API Reference</a></p>
   */
  class IdleSettings
  {
  public:
    AWS_SAGEMAKER_API IdleSettings() = default;
    AWS_SAGEMAKER_API IdleSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API IdleSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether idle shutdown is activated for the application type.</p>
     */
    inline LifecycleManagement GetLifecycleManagement() const { return m_lifecycleManagement; }
    inline bool LifecycleManagementHasBeenSet() const { return m_lifecycleManagementHasBeenSet; }
    inline void SetLifecycleManagement(LifecycleManagement value) { m_lifecycleManagementHasBeenSet = true; m_lifecycleManagement = value; }
    inline IdleSettings& WithLifecycleManagement(LifecycleManagement value) { SetLifecycleManagement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that SageMaker waits after the application becomes idle before
     * shutting it down.</p>
     */
    inline int GetIdleTimeoutInMinutes() const { return m_idleTimeoutInMinutes; }
    inline bool IdleTimeoutInMinutesHasBeenSet() const { return m_idleTimeoutInMinutesHasBeenSet; }
    inline void SetIdleTimeoutInMinutes(int value) { m_idleTimeoutInMinutesHasBeenSet = true; m_idleTimeoutInMinutes = value; }
    inline IdleSettings& WithIdleTimeoutInMinutes(int value) { SetIdleTimeoutInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum value in minutes that custom idle shutdown can be set to by the
     * user.</p>
     */
    inline int GetMinIdleTimeoutInMinutes() const { return m_minIdleTimeoutInMinutes; }
    inline bool MinIdleTimeoutInMinutesHasBeenSet() const { return m_minIdleTimeoutInMinutesHasBeenSet; }
    inline void SetMinIdleTimeoutInMinutes(int value) { m_minIdleTimeoutInMinutesHasBeenSet = true; m_minIdleTimeoutInMinutes = value; }
    inline IdleSettings& WithMinIdleTimeoutInMinutes(int value) { SetMinIdleTimeoutInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum value in minutes that custom idle shutdown can be set to by the
     * user.</p>
     */
    inline int GetMaxIdleTimeoutInMinutes() const { return m_maxIdleTimeoutInMinutes; }
    inline bool MaxIdleTimeoutInMinutesHasBeenSet() const { return m_maxIdleTimeoutInMinutesHasBeenSet; }
    inline void SetMaxIdleTimeoutInMinutes(int value) { m_maxIdleTimeoutInMinutesHasBeenSet = true; m_maxIdleTimeoutInMinutes = value; }
    inline IdleSettings& WithMaxIdleTimeoutInMinutes(int value) { SetMaxIdleTimeoutInMinutes(value); return *this;}
    ///@}
  private:

    LifecycleManagement m_lifecycleManagement{LifecycleManagement::NOT_SET};
    bool m_lifecycleManagementHasBeenSet = false;

    int m_idleTimeoutInMinutes{0};
    bool m_idleTimeoutInMinutesHasBeenSet = false;

    int m_minIdleTimeoutInMinutes{0};
    bool m_minIdleTimeoutInMinutesHasBeenSet = false;

    int m_maxIdleTimeoutInMinutes{0};
    bool m_maxIdleTimeoutInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
