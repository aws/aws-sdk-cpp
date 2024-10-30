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
    AWS_SAGEMAKER_API ModelLifeCycle();
    AWS_SAGEMAKER_API ModelLifeCycle(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelLifeCycle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The current stage in the model life cycle. </p>
     */
    inline const Aws::String& GetStage() const{ return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    inline void SetStage(const Aws::String& value) { m_stageHasBeenSet = true; m_stage = value; }
    inline void SetStage(Aws::String&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }
    inline void SetStage(const char* value) { m_stageHasBeenSet = true; m_stage.assign(value); }
    inline ModelLifeCycle& WithStage(const Aws::String& value) { SetStage(value); return *this;}
    inline ModelLifeCycle& WithStage(Aws::String&& value) { SetStage(std::move(value)); return *this;}
    inline ModelLifeCycle& WithStage(const char* value) { SetStage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of a stage in model life cycle. </p>
     */
    inline const Aws::String& GetStageStatus() const{ return m_stageStatus; }
    inline bool StageStatusHasBeenSet() const { return m_stageStatusHasBeenSet; }
    inline void SetStageStatus(const Aws::String& value) { m_stageStatusHasBeenSet = true; m_stageStatus = value; }
    inline void SetStageStatus(Aws::String&& value) { m_stageStatusHasBeenSet = true; m_stageStatus = std::move(value); }
    inline void SetStageStatus(const char* value) { m_stageStatusHasBeenSet = true; m_stageStatus.assign(value); }
    inline ModelLifeCycle& WithStageStatus(const Aws::String& value) { SetStageStatus(value); return *this;}
    inline ModelLifeCycle& WithStageStatus(Aws::String&& value) { SetStageStatus(std::move(value)); return *this;}
    inline ModelLifeCycle& WithStageStatus(const char* value) { SetStageStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the stage related details. </p>
     */
    inline const Aws::String& GetStageDescription() const{ return m_stageDescription; }
    inline bool StageDescriptionHasBeenSet() const { return m_stageDescriptionHasBeenSet; }
    inline void SetStageDescription(const Aws::String& value) { m_stageDescriptionHasBeenSet = true; m_stageDescription = value; }
    inline void SetStageDescription(Aws::String&& value) { m_stageDescriptionHasBeenSet = true; m_stageDescription = std::move(value); }
    inline void SetStageDescription(const char* value) { m_stageDescriptionHasBeenSet = true; m_stageDescription.assign(value); }
    inline ModelLifeCycle& WithStageDescription(const Aws::String& value) { SetStageDescription(value); return *this;}
    inline ModelLifeCycle& WithStageDescription(Aws::String&& value) { SetStageDescription(std::move(value)); return *this;}
    inline ModelLifeCycle& WithStageDescription(const char* value) { SetStageDescription(value); return *this;}
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
