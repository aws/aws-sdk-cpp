/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/model/UiTemplate.h>
#include <aws/sagemaker/model/RenderableTask.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class RenderUiTemplateRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API RenderUiTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RenderUiTemplate"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A <code>Template</code> object containing the worker UI template to
     * render.</p>
     */
    inline const UiTemplate& GetUiTemplate() const { return m_uiTemplate; }
    inline bool UiTemplateHasBeenSet() const { return m_uiTemplateHasBeenSet; }
    template<typename UiTemplateT = UiTemplate>
    void SetUiTemplate(UiTemplateT&& value) { m_uiTemplateHasBeenSet = true; m_uiTemplate = std::forward<UiTemplateT>(value); }
    template<typename UiTemplateT = UiTemplate>
    RenderUiTemplateRequest& WithUiTemplate(UiTemplateT&& value) { SetUiTemplate(std::forward<UiTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>RenderableTask</code> object containing a representative task to
     * render.</p>
     */
    inline const RenderableTask& GetTask() const { return m_task; }
    inline bool TaskHasBeenSet() const { return m_taskHasBeenSet; }
    template<typename TaskT = RenderableTask>
    void SetTask(TaskT&& value) { m_taskHasBeenSet = true; m_task = std::forward<TaskT>(value); }
    template<typename TaskT = RenderableTask>
    RenderUiTemplateRequest& WithTask(TaskT&& value) { SetTask(std::forward<TaskT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that has access to the S3 objects that are
     * used by the template.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    RenderUiTemplateRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>HumanTaskUiArn</code> of the worker UI that you want to render. Do
     * not provide a <code>HumanTaskUiArn</code> if you use the <code>UiTemplate</code>
     * parameter.</p> <p>See a list of available Human Ui Amazon Resource Names (ARNs)
     * in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_UiConfig.html">UiConfig</a>.</p>
     */
    inline const Aws::String& GetHumanTaskUiArn() const { return m_humanTaskUiArn; }
    inline bool HumanTaskUiArnHasBeenSet() const { return m_humanTaskUiArnHasBeenSet; }
    template<typename HumanTaskUiArnT = Aws::String>
    void SetHumanTaskUiArn(HumanTaskUiArnT&& value) { m_humanTaskUiArnHasBeenSet = true; m_humanTaskUiArn = std::forward<HumanTaskUiArnT>(value); }
    template<typename HumanTaskUiArnT = Aws::String>
    RenderUiTemplateRequest& WithHumanTaskUiArn(HumanTaskUiArnT&& value) { SetHumanTaskUiArn(std::forward<HumanTaskUiArnT>(value)); return *this;}
    ///@}
  private:

    UiTemplate m_uiTemplate;
    bool m_uiTemplateHasBeenSet = false;

    RenderableTask m_task;
    bool m_taskHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_humanTaskUiArn;
    bool m_humanTaskUiArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
