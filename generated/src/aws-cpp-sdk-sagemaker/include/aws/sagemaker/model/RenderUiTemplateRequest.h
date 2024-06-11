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
    AWS_SAGEMAKER_API RenderUiTemplateRequest();

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
    inline const UiTemplate& GetUiTemplate() const{ return m_uiTemplate; }
    inline bool UiTemplateHasBeenSet() const { return m_uiTemplateHasBeenSet; }
    inline void SetUiTemplate(const UiTemplate& value) { m_uiTemplateHasBeenSet = true; m_uiTemplate = value; }
    inline void SetUiTemplate(UiTemplate&& value) { m_uiTemplateHasBeenSet = true; m_uiTemplate = std::move(value); }
    inline RenderUiTemplateRequest& WithUiTemplate(const UiTemplate& value) { SetUiTemplate(value); return *this;}
    inline RenderUiTemplateRequest& WithUiTemplate(UiTemplate&& value) { SetUiTemplate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>RenderableTask</code> object containing a representative task to
     * render.</p>
     */
    inline const RenderableTask& GetTask() const{ return m_task; }
    inline bool TaskHasBeenSet() const { return m_taskHasBeenSet; }
    inline void SetTask(const RenderableTask& value) { m_taskHasBeenSet = true; m_task = value; }
    inline void SetTask(RenderableTask&& value) { m_taskHasBeenSet = true; m_task = std::move(value); }
    inline RenderUiTemplateRequest& WithTask(const RenderableTask& value) { SetTask(value); return *this;}
    inline RenderUiTemplateRequest& WithTask(RenderableTask&& value) { SetTask(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that has access to the S3 objects that are
     * used by the template.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline RenderUiTemplateRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline RenderUiTemplateRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline RenderUiTemplateRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>HumanTaskUiArn</code> of the worker UI that you want to render. Do
     * not provide a <code>HumanTaskUiArn</code> if you use the <code>UiTemplate</code>
     * parameter.</p> <p>See a list of available Human Ui Amazon Resource Names (ARNs)
     * in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_UiConfig.html">UiConfig</a>.</p>
     */
    inline const Aws::String& GetHumanTaskUiArn() const{ return m_humanTaskUiArn; }
    inline bool HumanTaskUiArnHasBeenSet() const { return m_humanTaskUiArnHasBeenSet; }
    inline void SetHumanTaskUiArn(const Aws::String& value) { m_humanTaskUiArnHasBeenSet = true; m_humanTaskUiArn = value; }
    inline void SetHumanTaskUiArn(Aws::String&& value) { m_humanTaskUiArnHasBeenSet = true; m_humanTaskUiArn = std::move(value); }
    inline void SetHumanTaskUiArn(const char* value) { m_humanTaskUiArnHasBeenSet = true; m_humanTaskUiArn.assign(value); }
    inline RenderUiTemplateRequest& WithHumanTaskUiArn(const Aws::String& value) { SetHumanTaskUiArn(value); return *this;}
    inline RenderUiTemplateRequest& WithHumanTaskUiArn(Aws::String&& value) { SetHumanTaskUiArn(std::move(value)); return *this;}
    inline RenderUiTemplateRequest& WithHumanTaskUiArn(const char* value) { SetHumanTaskUiArn(value); return *this;}
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
