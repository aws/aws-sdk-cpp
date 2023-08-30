/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
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
namespace neptunedata
{
namespace Model
{

  /**
   * <p>Contains custom model training parameters. See <a
   * href="https://docs.aws.amazon.com/neptune/latest/userguide/machine-learning-custom-models.html">Custom
   * models in Neptune ML</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/CustomModelTrainingParameters">AWS
   * API Reference</a></p>
   */
  class CustomModelTrainingParameters
  {
  public:
    AWS_NEPTUNEDATA_API CustomModelTrainingParameters();
    AWS_NEPTUNEDATA_API CustomModelTrainingParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API CustomModelTrainingParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path to the Amazon S3 location where the Python module implementing your
     * model is located. This must point to a valid existing Amazon S3 location that
     * contains, at a minimum, a training script, a transform script, and a
     * <code>model-hpo-configuration.json</code> file.</p>
     */
    inline const Aws::String& GetSourceS3DirectoryPath() const{ return m_sourceS3DirectoryPath; }

    /**
     * <p>The path to the Amazon S3 location where the Python module implementing your
     * model is located. This must point to a valid existing Amazon S3 location that
     * contains, at a minimum, a training script, a transform script, and a
     * <code>model-hpo-configuration.json</code> file.</p>
     */
    inline bool SourceS3DirectoryPathHasBeenSet() const { return m_sourceS3DirectoryPathHasBeenSet; }

    /**
     * <p>The path to the Amazon S3 location where the Python module implementing your
     * model is located. This must point to a valid existing Amazon S3 location that
     * contains, at a minimum, a training script, a transform script, and a
     * <code>model-hpo-configuration.json</code> file.</p>
     */
    inline void SetSourceS3DirectoryPath(const Aws::String& value) { m_sourceS3DirectoryPathHasBeenSet = true; m_sourceS3DirectoryPath = value; }

    /**
     * <p>The path to the Amazon S3 location where the Python module implementing your
     * model is located. This must point to a valid existing Amazon S3 location that
     * contains, at a minimum, a training script, a transform script, and a
     * <code>model-hpo-configuration.json</code> file.</p>
     */
    inline void SetSourceS3DirectoryPath(Aws::String&& value) { m_sourceS3DirectoryPathHasBeenSet = true; m_sourceS3DirectoryPath = std::move(value); }

    /**
     * <p>The path to the Amazon S3 location where the Python module implementing your
     * model is located. This must point to a valid existing Amazon S3 location that
     * contains, at a minimum, a training script, a transform script, and a
     * <code>model-hpo-configuration.json</code> file.</p>
     */
    inline void SetSourceS3DirectoryPath(const char* value) { m_sourceS3DirectoryPathHasBeenSet = true; m_sourceS3DirectoryPath.assign(value); }

    /**
     * <p>The path to the Amazon S3 location where the Python module implementing your
     * model is located. This must point to a valid existing Amazon S3 location that
     * contains, at a minimum, a training script, a transform script, and a
     * <code>model-hpo-configuration.json</code> file.</p>
     */
    inline CustomModelTrainingParameters& WithSourceS3DirectoryPath(const Aws::String& value) { SetSourceS3DirectoryPath(value); return *this;}

    /**
     * <p>The path to the Amazon S3 location where the Python module implementing your
     * model is located. This must point to a valid existing Amazon S3 location that
     * contains, at a minimum, a training script, a transform script, and a
     * <code>model-hpo-configuration.json</code> file.</p>
     */
    inline CustomModelTrainingParameters& WithSourceS3DirectoryPath(Aws::String&& value) { SetSourceS3DirectoryPath(std::move(value)); return *this;}

    /**
     * <p>The path to the Amazon S3 location where the Python module implementing your
     * model is located. This must point to a valid existing Amazon S3 location that
     * contains, at a minimum, a training script, a transform script, and a
     * <code>model-hpo-configuration.json</code> file.</p>
     */
    inline CustomModelTrainingParameters& WithSourceS3DirectoryPath(const char* value) { SetSourceS3DirectoryPath(value); return *this;}


    /**
     * <p>The name of the entry point in your module of a script that performs model
     * training and takes hyperparameters as command-line arguments, including fixed
     * hyperparameters. The default is <code>training.py</code>.</p>
     */
    inline const Aws::String& GetTrainingEntryPointScript() const{ return m_trainingEntryPointScript; }

    /**
     * <p>The name of the entry point in your module of a script that performs model
     * training and takes hyperparameters as command-line arguments, including fixed
     * hyperparameters. The default is <code>training.py</code>.</p>
     */
    inline bool TrainingEntryPointScriptHasBeenSet() const { return m_trainingEntryPointScriptHasBeenSet; }

    /**
     * <p>The name of the entry point in your module of a script that performs model
     * training and takes hyperparameters as command-line arguments, including fixed
     * hyperparameters. The default is <code>training.py</code>.</p>
     */
    inline void SetTrainingEntryPointScript(const Aws::String& value) { m_trainingEntryPointScriptHasBeenSet = true; m_trainingEntryPointScript = value; }

    /**
     * <p>The name of the entry point in your module of a script that performs model
     * training and takes hyperparameters as command-line arguments, including fixed
     * hyperparameters. The default is <code>training.py</code>.</p>
     */
    inline void SetTrainingEntryPointScript(Aws::String&& value) { m_trainingEntryPointScriptHasBeenSet = true; m_trainingEntryPointScript = std::move(value); }

    /**
     * <p>The name of the entry point in your module of a script that performs model
     * training and takes hyperparameters as command-line arguments, including fixed
     * hyperparameters. The default is <code>training.py</code>.</p>
     */
    inline void SetTrainingEntryPointScript(const char* value) { m_trainingEntryPointScriptHasBeenSet = true; m_trainingEntryPointScript.assign(value); }

    /**
     * <p>The name of the entry point in your module of a script that performs model
     * training and takes hyperparameters as command-line arguments, including fixed
     * hyperparameters. The default is <code>training.py</code>.</p>
     */
    inline CustomModelTrainingParameters& WithTrainingEntryPointScript(const Aws::String& value) { SetTrainingEntryPointScript(value); return *this;}

    /**
     * <p>The name of the entry point in your module of a script that performs model
     * training and takes hyperparameters as command-line arguments, including fixed
     * hyperparameters. The default is <code>training.py</code>.</p>
     */
    inline CustomModelTrainingParameters& WithTrainingEntryPointScript(Aws::String&& value) { SetTrainingEntryPointScript(std::move(value)); return *this;}

    /**
     * <p>The name of the entry point in your module of a script that performs model
     * training and takes hyperparameters as command-line arguments, including fixed
     * hyperparameters. The default is <code>training.py</code>.</p>
     */
    inline CustomModelTrainingParameters& WithTrainingEntryPointScript(const char* value) { SetTrainingEntryPointScript(value); return *this;}


    /**
     * <p>The name of the entry point in your module of a script that should be run
     * after the best model from the hyperparameter search has been identified, to
     * compute the model artifacts necessary for model deployment. It should be able to
     * run with no command-line arguments.The default is <code>transform.py</code>.</p>
     */
    inline const Aws::String& GetTransformEntryPointScript() const{ return m_transformEntryPointScript; }

    /**
     * <p>The name of the entry point in your module of a script that should be run
     * after the best model from the hyperparameter search has been identified, to
     * compute the model artifacts necessary for model deployment. It should be able to
     * run with no command-line arguments.The default is <code>transform.py</code>.</p>
     */
    inline bool TransformEntryPointScriptHasBeenSet() const { return m_transformEntryPointScriptHasBeenSet; }

    /**
     * <p>The name of the entry point in your module of a script that should be run
     * after the best model from the hyperparameter search has been identified, to
     * compute the model artifacts necessary for model deployment. It should be able to
     * run with no command-line arguments.The default is <code>transform.py</code>.</p>
     */
    inline void SetTransformEntryPointScript(const Aws::String& value) { m_transformEntryPointScriptHasBeenSet = true; m_transformEntryPointScript = value; }

    /**
     * <p>The name of the entry point in your module of a script that should be run
     * after the best model from the hyperparameter search has been identified, to
     * compute the model artifacts necessary for model deployment. It should be able to
     * run with no command-line arguments.The default is <code>transform.py</code>.</p>
     */
    inline void SetTransformEntryPointScript(Aws::String&& value) { m_transformEntryPointScriptHasBeenSet = true; m_transformEntryPointScript = std::move(value); }

    /**
     * <p>The name of the entry point in your module of a script that should be run
     * after the best model from the hyperparameter search has been identified, to
     * compute the model artifacts necessary for model deployment. It should be able to
     * run with no command-line arguments.The default is <code>transform.py</code>.</p>
     */
    inline void SetTransformEntryPointScript(const char* value) { m_transformEntryPointScriptHasBeenSet = true; m_transformEntryPointScript.assign(value); }

    /**
     * <p>The name of the entry point in your module of a script that should be run
     * after the best model from the hyperparameter search has been identified, to
     * compute the model artifacts necessary for model deployment. It should be able to
     * run with no command-line arguments.The default is <code>transform.py</code>.</p>
     */
    inline CustomModelTrainingParameters& WithTransformEntryPointScript(const Aws::String& value) { SetTransformEntryPointScript(value); return *this;}

    /**
     * <p>The name of the entry point in your module of a script that should be run
     * after the best model from the hyperparameter search has been identified, to
     * compute the model artifacts necessary for model deployment. It should be able to
     * run with no command-line arguments.The default is <code>transform.py</code>.</p>
     */
    inline CustomModelTrainingParameters& WithTransformEntryPointScript(Aws::String&& value) { SetTransformEntryPointScript(std::move(value)); return *this;}

    /**
     * <p>The name of the entry point in your module of a script that should be run
     * after the best model from the hyperparameter search has been identified, to
     * compute the model artifacts necessary for model deployment. It should be able to
     * run with no command-line arguments.The default is <code>transform.py</code>.</p>
     */
    inline CustomModelTrainingParameters& WithTransformEntryPointScript(const char* value) { SetTransformEntryPointScript(value); return *this;}

  private:

    Aws::String m_sourceS3DirectoryPath;
    bool m_sourceS3DirectoryPathHasBeenSet = false;

    Aws::String m_trainingEntryPointScript;
    bool m_trainingEntryPointScriptHasBeenSet = false;

    Aws::String m_transformEntryPointScript;
    bool m_transformEntryPointScriptHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
