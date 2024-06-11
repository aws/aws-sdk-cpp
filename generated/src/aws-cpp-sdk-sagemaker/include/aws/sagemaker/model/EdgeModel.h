﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The model on the edge device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EdgeModel">AWS
   * API Reference</a></p>
   */
  class EdgeModel
  {
  public:
    AWS_SAGEMAKER_API EdgeModel();
    AWS_SAGEMAKER_API EdgeModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EdgeModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the model.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }
    inline EdgeModel& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}
    inline EdgeModel& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}
    inline EdgeModel& WithModelName(const char* value) { SetModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model version.</p>
     */
    inline const Aws::String& GetModelVersion() const{ return m_modelVersion; }
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }
    inline void SetModelVersion(const Aws::String& value) { m_modelVersionHasBeenSet = true; m_modelVersion = value; }
    inline void SetModelVersion(Aws::String&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::move(value); }
    inline void SetModelVersion(const char* value) { m_modelVersionHasBeenSet = true; m_modelVersion.assign(value); }
    inline EdgeModel& WithModelVersion(const Aws::String& value) { SetModelVersion(value); return *this;}
    inline EdgeModel& WithModelVersion(Aws::String&& value) { SetModelVersion(std::move(value)); return *this;}
    inline EdgeModel& WithModelVersion(const char* value) { SetModelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the last data sample taken.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestSampleTime() const{ return m_latestSampleTime; }
    inline bool LatestSampleTimeHasBeenSet() const { return m_latestSampleTimeHasBeenSet; }
    inline void SetLatestSampleTime(const Aws::Utils::DateTime& value) { m_latestSampleTimeHasBeenSet = true; m_latestSampleTime = value; }
    inline void SetLatestSampleTime(Aws::Utils::DateTime&& value) { m_latestSampleTimeHasBeenSet = true; m_latestSampleTime = std::move(value); }
    inline EdgeModel& WithLatestSampleTime(const Aws::Utils::DateTime& value) { SetLatestSampleTime(value); return *this;}
    inline EdgeModel& WithLatestSampleTime(Aws::Utils::DateTime&& value) { SetLatestSampleTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the last inference that was made.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestInference() const{ return m_latestInference; }
    inline bool LatestInferenceHasBeenSet() const { return m_latestInferenceHasBeenSet; }
    inline void SetLatestInference(const Aws::Utils::DateTime& value) { m_latestInferenceHasBeenSet = true; m_latestInference = value; }
    inline void SetLatestInference(Aws::Utils::DateTime&& value) { m_latestInferenceHasBeenSet = true; m_latestInference = std::move(value); }
    inline EdgeModel& WithLatestInference(const Aws::Utils::DateTime& value) { SetLatestInference(value); return *this;}
    inline EdgeModel& WithLatestInference(Aws::Utils::DateTime&& value) { SetLatestInference(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_modelVersion;
    bool m_modelVersionHasBeenSet = false;

    Aws::Utils::DateTime m_latestSampleTime;
    bool m_latestSampleTimeHasBeenSet = false;

    Aws::Utils::DateTime m_latestInference;
    bool m_latestInferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
