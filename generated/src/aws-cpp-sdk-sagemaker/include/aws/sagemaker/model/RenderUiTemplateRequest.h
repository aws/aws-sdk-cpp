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


    /**
     * <p>A <code>Template</code> object containing the worker UI template to
     * render.</p>
     */
    inline const UiTemplate& GetUiTemplate() const{ return m_uiTemplate; }

    /**
     * <p>A <code>Template</code> object containing the worker UI template to
     * render.</p>
     */
    inline bool UiTemplateHasBeenSet() const { return m_uiTemplateHasBeenSet; }

    /**
     * <p>A <code>Template</code> object containing the worker UI template to
     * render.</p>
     */
    inline void SetUiTemplate(const UiTemplate& value) { m_uiTemplateHasBeenSet = true; m_uiTemplate = value; }

    /**
     * <p>A <code>Template</code> object containing the worker UI template to
     * render.</p>
     */
    inline void SetUiTemplate(UiTemplate&& value) { m_uiTemplateHasBeenSet = true; m_uiTemplate = std::move(value); }

    /**
     * <p>A <code>Template</code> object containing the worker UI template to
     * render.</p>
     */
    inline RenderUiTemplateRequest& WithUiTemplate(const UiTemplate& value) { SetUiTemplate(value); return *this;}

    /**
     * <p>A <code>Template</code> object containing the worker UI template to
     * render.</p>
     */
    inline RenderUiTemplateRequest& WithUiTemplate(UiTemplate&& value) { SetUiTemplate(std::move(value)); return *this;}


    /**
     * <p>A <code>RenderableTask</code> object containing a representative task to
     * render.</p>
     */
    inline const RenderableTask& GetTask() const{ return m_task; }

    /**
     * <p>A <code>RenderableTask</code> object containing a representative task to
     * render.</p>
     */
    inline bool TaskHasBeenSet() const { return m_taskHasBeenSet; }

    /**
     * <p>A <code>RenderableTask</code> object containing a representative task to
     * render.</p>
     */
    inline void SetTask(const RenderableTask& value) { m_taskHasBeenSet = true; m_task = value; }

    /**
     * <p>A <code>RenderableTask</code> object containing a representative task to
     * render.</p>
     */
    inline void SetTask(RenderableTask&& value) { m_taskHasBeenSet = true; m_task = std::move(value); }

    /**
     * <p>A <code>RenderableTask</code> object containing a representative task to
     * render.</p>
     */
    inline RenderUiTemplateRequest& WithTask(const RenderableTask& value) { SetTask(value); return *this;}

    /**
     * <p>A <code>RenderableTask</code> object containing a representative task to
     * render.</p>
     */
    inline RenderUiTemplateRequest& WithTask(RenderableTask&& value) { SetTask(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that has access to the S3 objects that are
     * used by the template.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that has access to the S3 objects that are
     * used by the template.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that has access to the S3 objects that are
     * used by the template.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that has access to the S3 objects that are
     * used by the template.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that has access to the S3 objects that are
     * used by the template.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that has access to the S3 objects that are
     * used by the template.</p>
     */
    inline RenderUiTemplateRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that has access to the S3 objects that are
     * used by the template.</p>
     */
    inline RenderUiTemplateRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that has access to the S3 objects that are
     * used by the template.</p>
     */
    inline RenderUiTemplateRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The <code>HumanTaskUiArn</code> of the worker UI that you want to render. Do
     * not provide a <code>HumanTaskUiArn</code> if you use the <code>UiTemplate</code>
     * parameter.</p> <p>See a list of available Human Ui Amazon Resource Names (ARNs)
     * in <a>UiConfig</a>.</p>
     */
    inline const Aws::String& GetHumanTaskUiArn() const{ return m_humanTaskUiArn; }

    /**
     * <p>The <code>HumanTaskUiArn</code> of the worker UI that you want to render. Do
     * not provide a <code>HumanTaskUiArn</code> if you use the <code>UiTemplate</code>
     * parameter.</p> <p>See a list of available Human Ui Amazon Resource Names (ARNs)
     * in <a>UiConfig</a>.</p>
     */
    inline bool HumanTaskUiArnHasBeenSet() const { return m_humanTaskUiArnHasBeenSet; }

    /**
     * <p>The <code>HumanTaskUiArn</code> of the worker UI that you want to render. Do
     * not provide a <code>HumanTaskUiArn</code> if you use the <code>UiTemplate</code>
     * parameter.</p> <p>See a list of available Human Ui Amazon Resource Names (ARNs)
     * in <a>UiConfig</a>.</p>
     */
    inline void SetHumanTaskUiArn(const Aws::String& value) { m_humanTaskUiArnHasBeenSet = true; m_humanTaskUiArn = value; }

    /**
     * <p>The <code>HumanTaskUiArn</code> of the worker UI that you want to render. Do
     * not provide a <code>HumanTaskUiArn</code> if you use the <code>UiTemplate</code>
     * parameter.</p> <p>See a list of available Human Ui Amazon Resource Names (ARNs)
     * in <a>UiConfig</a>.</p>
     */
    inline void SetHumanTaskUiArn(Aws::String&& value) { m_humanTaskUiArnHasBeenSet = true; m_humanTaskUiArn = std::move(value); }

    /**
     * <p>The <code>HumanTaskUiArn</code> of the worker UI that you want to render. Do
     * not provide a <code>HumanTaskUiArn</code> if you use the <code>UiTemplate</code>
     * parameter.</p> <p>See a list of available Human Ui Amazon Resource Names (ARNs)
     * in <a>UiConfig</a>.</p>
     */
    inline void SetHumanTaskUiArn(const char* value) { m_humanTaskUiArnHasBeenSet = true; m_humanTaskUiArn.assign(value); }

    /**
     * <p>The <code>HumanTaskUiArn</code> of the worker UI that you want to render. Do
     * not provide a <code>HumanTaskUiArn</code> if you use the <code>UiTemplate</code>
     * parameter.</p> <p>See a list of available Human Ui Amazon Resource Names (ARNs)
     * in <a>UiConfig</a>.</p>
     */
    inline RenderUiTemplateRequest& WithHumanTaskUiArn(const Aws::String& value) { SetHumanTaskUiArn(value); return *this;}

    /**
     * <p>The <code>HumanTaskUiArn</code> of the worker UI that you want to render. Do
     * not provide a <code>HumanTaskUiArn</code> if you use the <code>UiTemplate</code>
     * parameter.</p> <p>See a list of available Human Ui Amazon Resource Names (ARNs)
     * in <a>UiConfig</a>.</p>
     */
    inline RenderUiTemplateRequest& WithHumanTaskUiArn(Aws::String&& value) { SetHumanTaskUiArn(std::move(value)); return *this;}

    /**
     * <p>The <code>HumanTaskUiArn</code> of the worker UI that you want to render. Do
     * not provide a <code>HumanTaskUiArn</code> if you use the <code>UiTemplate</code>
     * parameter.</p> <p>See a list of available Human Ui Amazon Resource Names (ARNs)
     * in <a>UiConfig</a>.</p>
     */
    inline RenderUiTemplateRequest& WithHumanTaskUiArn(const char* value) { SetHumanTaskUiArn(value); return *this;}

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
