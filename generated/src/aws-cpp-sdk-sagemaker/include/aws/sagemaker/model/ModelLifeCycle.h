/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p> A structure describing the current state of the model in its life cycle.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelLifeCycle">AWS
   * API Reference</a></p>
   */
  class ModelLifeCycle
  {
  public:
    AWS_SAGEMAKER_API ModelLifeCycle() = default;
    AWS_SAGEMAKER_API ModelLifeCycle(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelLifeCycle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The current stage in the model life cycle. </p>
     */
    inline const Aws::String& GetStage() const { return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    template<typename StageT = Aws::String>
    void SetStage(StageT&& value) { m_stageHasBeenSet = true; m_stage = std::forward<StageT>(value); }
    template<typename StageT = Aws::String>
    ModelLifeCycle& WithStage(StageT&& value) { SetStage(std::forward<StageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of a stage in model life cycle. </p>
     */
    inline const Aws::String& GetStageStatus() const { return m_stageStatus; }
    inline bool StageStatusHasBeenSet() const { return m_stageStatusHasBeenSet; }
    template<typename StageStatusT = Aws::String>
    void SetStageStatus(StageStatusT&& value) { m_stageStatusHasBeenSet = true; m_stageStatus = std::forward<StageStatusT>(value); }
    template<typename StageStatusT = Aws::String>
    ModelLifeCycle& WithStageStatus(StageStatusT&& value) { SetStageStatus(std::forward<StageStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the stage related details. </p>
     */
    inline const Aws::String& GetStageDescription() const { return m_stageDescription; }
    inline bool StageDescriptionHasBeenSet() const { return m_stageDescriptionHasBeenSet; }
    template<typename StageDescriptionT = Aws::String>
    void SetStageDescription(StageDescriptionT&& value) { m_stageDescriptionHasBeenSet = true; m_stageDescription = std::forward<StageDescriptionT>(value); }
    template<typename StageDescriptionT = Aws::String>
    ModelLifeCycle& WithStageDescription(StageDescriptionT&& value) { SetStageDescription(std::forward<StageDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stage;
    bool m_stageHasBeenSet = false;

    Aws::String m_stageStatus;
    bool m_stageStatusHasBeenSet = false;

    Aws::String m_stageDescription;
    bool m_stageDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
