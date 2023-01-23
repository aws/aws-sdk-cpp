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
   * <p>An alert action taken to light up an icon on the Amazon SageMaker Model
   * Dashboard when an alert goes into <code>InAlert</code> status.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelDashboardIndicatorAction">AWS
   * API Reference</a></p>
   */
  class ModelDashboardIndicatorAction
  {
  public:
    AWS_SAGEMAKER_API ModelDashboardIndicatorAction();
    AWS_SAGEMAKER_API ModelDashboardIndicatorAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelDashboardIndicatorAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether the alert action is turned on.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether the alert action is turned on.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether the alert action is turned on.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether the alert action is turned on.</p>
     */
    inline ModelDashboardIndicatorAction& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
