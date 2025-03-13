/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/PublicWorkforceTaskPrice.h>
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
   * <p>Describes the work to be performed by human workers.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HumanLoopConfig">AWS
   * API Reference</a></p>
   */
  class HumanLoopConfig
  {
  public:
    AWS_SAGEMAKER_API HumanLoopConfig() = default;
    AWS_SAGEMAKER_API HumanLoopConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HumanLoopConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of a team of workers. To learn more about the
     * types of workforces and work teams you can create and use with Amazon A2I, see
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-workforce-management.html">Create
     * and Manage Workforces</a>.</p>
     */
    inline const Aws::String& GetWorkteamArn() const { return m_workteamArn; }
    inline bool WorkteamArnHasBeenSet() const { return m_workteamArnHasBeenSet; }
    template<typename WorkteamArnT = Aws::String>
    void SetWorkteamArn(WorkteamArnT&& value) { m_workteamArnHasBeenSet = true; m_workteamArn = std::forward<WorkteamArnT>(value); }
    template<typename WorkteamArnT = Aws::String>
    HumanLoopConfig& WithWorkteamArn(WorkteamArnT&& value) { SetWorkteamArn(std::forward<WorkteamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the human task user interface.</p> <p>You
     * can use standard HTML and Crowd HTML Elements to create a custom worker task
     * template. You use this template to create a human task UI.</p> <p>To learn how
     * to create a custom HTML template, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-custom-templates.html">Create
     * Custom Worker Task Template</a>.</p> <p>To learn how to create a human task UI,
     * which is a worker task template that can be used in a flow definition, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-worker-template-console.html">Create
     * and Delete a Worker Task Templates</a>.</p>
     */
    inline const Aws::String& GetHumanTaskUiArn() const { return m_humanTaskUiArn; }
    inline bool HumanTaskUiArnHasBeenSet() const { return m_humanTaskUiArnHasBeenSet; }
    template<typename HumanTaskUiArnT = Aws::String>
    void SetHumanTaskUiArn(HumanTaskUiArnT&& value) { m_humanTaskUiArnHasBeenSet = true; m_humanTaskUiArn = std::forward<HumanTaskUiArnT>(value); }
    template<typename HumanTaskUiArnT = Aws::String>
    HumanLoopConfig& WithHumanTaskUiArn(HumanTaskUiArnT&& value) { SetHumanTaskUiArn(std::forward<HumanTaskUiArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A title for the human worker task.</p>
     */
    inline const Aws::String& GetTaskTitle() const { return m_taskTitle; }
    inline bool TaskTitleHasBeenSet() const { return m_taskTitleHasBeenSet; }
    template<typename TaskTitleT = Aws::String>
    void SetTaskTitle(TaskTitleT&& value) { m_taskTitleHasBeenSet = true; m_taskTitle = std::forward<TaskTitleT>(value); }
    template<typename TaskTitleT = Aws::String>
    HumanLoopConfig& WithTaskTitle(TaskTitleT&& value) { SetTaskTitle(std::forward<TaskTitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the human worker task.</p>
     */
    inline const Aws::String& GetTaskDescription() const { return m_taskDescription; }
    inline bool TaskDescriptionHasBeenSet() const { return m_taskDescriptionHasBeenSet; }
    template<typename TaskDescriptionT = Aws::String>
    void SetTaskDescription(TaskDescriptionT&& value) { m_taskDescriptionHasBeenSet = true; m_taskDescription = std::forward<TaskDescriptionT>(value); }
    template<typename TaskDescriptionT = Aws::String>
    HumanLoopConfig& WithTaskDescription(TaskDescriptionT&& value) { SetTaskDescription(std::forward<TaskDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of distinct workers who will perform the same task on each object.
     * For example, if <code>TaskCount</code> is set to <code>3</code> for an image
     * classification labeling job, three workers will classify each input image.
     * Increasing <code>TaskCount</code> can improve label accuracy.</p>
     */
    inline int GetTaskCount() const { return m_taskCount; }
    inline bool TaskCountHasBeenSet() const { return m_taskCountHasBeenSet; }
    inline void SetTaskCount(int value) { m_taskCountHasBeenSet = true; m_taskCount = value; }
    inline HumanLoopConfig& WithTaskCount(int value) { SetTaskCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of time that a task remains available for review by human
     * workers.</p>
     */
    inline int GetTaskAvailabilityLifetimeInSeconds() const { return m_taskAvailabilityLifetimeInSeconds; }
    inline bool TaskAvailabilityLifetimeInSecondsHasBeenSet() const { return m_taskAvailabilityLifetimeInSecondsHasBeenSet; }
    inline void SetTaskAvailabilityLifetimeInSeconds(int value) { m_taskAvailabilityLifetimeInSecondsHasBeenSet = true; m_taskAvailabilityLifetimeInSeconds = value; }
    inline HumanLoopConfig& WithTaskAvailabilityLifetimeInSeconds(int value) { SetTaskAvailabilityLifetimeInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time that a worker has to complete a task. The default value is
     * 3,600 seconds (1 hour).</p>
     */
    inline int GetTaskTimeLimitInSeconds() const { return m_taskTimeLimitInSeconds; }
    inline bool TaskTimeLimitInSecondsHasBeenSet() const { return m_taskTimeLimitInSecondsHasBeenSet; }
    inline void SetTaskTimeLimitInSeconds(int value) { m_taskTimeLimitInSecondsHasBeenSet = true; m_taskTimeLimitInSeconds = value; }
    inline HumanLoopConfig& WithTaskTimeLimitInSeconds(int value) { SetTaskTimeLimitInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Keywords used to describe the task so that workers can discover the task.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTaskKeywords() const { return m_taskKeywords; }
    inline bool TaskKeywordsHasBeenSet() const { return m_taskKeywordsHasBeenSet; }
    template<typename TaskKeywordsT = Aws::Vector<Aws::String>>
    void SetTaskKeywords(TaskKeywordsT&& value) { m_taskKeywordsHasBeenSet = true; m_taskKeywords = std::forward<TaskKeywordsT>(value); }
    template<typename TaskKeywordsT = Aws::Vector<Aws::String>>
    HumanLoopConfig& WithTaskKeywords(TaskKeywordsT&& value) { SetTaskKeywords(std::forward<TaskKeywordsT>(value)); return *this;}
    template<typename TaskKeywordsT = Aws::String>
    HumanLoopConfig& AddTaskKeywords(TaskKeywordsT&& value) { m_taskKeywordsHasBeenSet = true; m_taskKeywords.emplace_back(std::forward<TaskKeywordsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const PublicWorkforceTaskPrice& GetPublicWorkforceTaskPrice() const { return m_publicWorkforceTaskPrice; }
    inline bool PublicWorkforceTaskPriceHasBeenSet() const { return m_publicWorkforceTaskPriceHasBeenSet; }
    template<typename PublicWorkforceTaskPriceT = PublicWorkforceTaskPrice>
    void SetPublicWorkforceTaskPrice(PublicWorkforceTaskPriceT&& value) { m_publicWorkforceTaskPriceHasBeenSet = true; m_publicWorkforceTaskPrice = std::forward<PublicWorkforceTaskPriceT>(value); }
    template<typename PublicWorkforceTaskPriceT = PublicWorkforceTaskPrice>
    HumanLoopConfig& WithPublicWorkforceTaskPrice(PublicWorkforceTaskPriceT&& value) { SetPublicWorkforceTaskPrice(std::forward<PublicWorkforceTaskPriceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workteamArn;
    bool m_workteamArnHasBeenSet = false;

    Aws::String m_humanTaskUiArn;
    bool m_humanTaskUiArnHasBeenSet = false;

    Aws::String m_taskTitle;
    bool m_taskTitleHasBeenSet = false;

    Aws::String m_taskDescription;
    bool m_taskDescriptionHasBeenSet = false;

    int m_taskCount{0};
    bool m_taskCountHasBeenSet = false;

    int m_taskAvailabilityLifetimeInSeconds{0};
    bool m_taskAvailabilityLifetimeInSecondsHasBeenSet = false;

    int m_taskTimeLimitInSeconds{0};
    bool m_taskTimeLimitInSecondsHasBeenSet = false;

    Aws::Vector<Aws::String> m_taskKeywords;
    bool m_taskKeywordsHasBeenSet = false;

    PublicWorkforceTaskPrice m_publicWorkforceTaskPrice;
    bool m_publicWorkforceTaskPriceHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
