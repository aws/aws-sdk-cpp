/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AthenaDatasetDefinition.h>
#include <aws/sagemaker/model/RedshiftDatasetDefinition.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/DataDistributionType.h>
#include <aws/sagemaker/model/InputMode.h>
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
   * <p>Configuration for Dataset Definition inputs. The Dataset Definition input
   * must specify exactly one of either <code>AthenaDatasetDefinition</code> or
   * <code>RedshiftDatasetDefinition</code> types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DatasetDefinition">AWS
   * API Reference</a></p>
   */
  class DatasetDefinition
  {
  public:
    AWS_SAGEMAKER_API DatasetDefinition() = default;
    AWS_SAGEMAKER_API DatasetDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DatasetDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const AthenaDatasetDefinition& GetAthenaDatasetDefinition() const { return m_athenaDatasetDefinition; }
    inline bool AthenaDatasetDefinitionHasBeenSet() const { return m_athenaDatasetDefinitionHasBeenSet; }
    template<typename AthenaDatasetDefinitionT = AthenaDatasetDefinition>
    void SetAthenaDatasetDefinition(AthenaDatasetDefinitionT&& value) { m_athenaDatasetDefinitionHasBeenSet = true; m_athenaDatasetDefinition = std::forward<AthenaDatasetDefinitionT>(value); }
    template<typename AthenaDatasetDefinitionT = AthenaDatasetDefinition>
    DatasetDefinition& WithAthenaDatasetDefinition(AthenaDatasetDefinitionT&& value) { SetAthenaDatasetDefinition(std::forward<AthenaDatasetDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RedshiftDatasetDefinition& GetRedshiftDatasetDefinition() const { return m_redshiftDatasetDefinition; }
    inline bool RedshiftDatasetDefinitionHasBeenSet() const { return m_redshiftDatasetDefinitionHasBeenSet; }
    template<typename RedshiftDatasetDefinitionT = RedshiftDatasetDefinition>
    void SetRedshiftDatasetDefinition(RedshiftDatasetDefinitionT&& value) { m_redshiftDatasetDefinitionHasBeenSet = true; m_redshiftDatasetDefinition = std::forward<RedshiftDatasetDefinitionT>(value); }
    template<typename RedshiftDatasetDefinitionT = RedshiftDatasetDefinition>
    DatasetDefinition& WithRedshiftDatasetDefinition(RedshiftDatasetDefinitionT&& value) { SetRedshiftDatasetDefinition(std::forward<RedshiftDatasetDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The local path where you want Amazon SageMaker to download the Dataset
     * Definition inputs to run a processing job. <code>LocalPath</code> is an absolute
     * path to the input data. This is a required parameter when
     * <code>AppManaged</code> is <code>False</code> (default).</p>
     */
    inline const Aws::String& GetLocalPath() const { return m_localPath; }
    inline bool LocalPathHasBeenSet() const { return m_localPathHasBeenSet; }
    template<typename LocalPathT = Aws::String>
    void SetLocalPath(LocalPathT&& value) { m_localPathHasBeenSet = true; m_localPath = std::forward<LocalPathT>(value); }
    template<typename LocalPathT = Aws::String>
    DatasetDefinition& WithLocalPath(LocalPathT&& value) { SetLocalPath(std::forward<LocalPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the generated dataset is <code>FullyReplicated</code> or
     * <code>ShardedByS3Key</code> (default).</p>
     */
    inline DataDistributionType GetDataDistributionType() const { return m_dataDistributionType; }
    inline bool DataDistributionTypeHasBeenSet() const { return m_dataDistributionTypeHasBeenSet; }
    inline void SetDataDistributionType(DataDistributionType value) { m_dataDistributionTypeHasBeenSet = true; m_dataDistributionType = value; }
    inline DatasetDefinition& WithDataDistributionType(DataDistributionType value) { SetDataDistributionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to use <code>File</code> or <code>Pipe</code> input mode. In
     * <code>File</code> (default) mode, Amazon SageMaker copies the data from the
     * input source onto the local Amazon Elastic Block Store (Amazon EBS) volumes
     * before starting your training algorithm. This is the most commonly used input
     * mode. In <code>Pipe</code> mode, Amazon SageMaker streams input data from the
     * source directly to your algorithm without using the EBS volume.</p>
     */
    inline InputMode GetInputMode() const { return m_inputMode; }
    inline bool InputModeHasBeenSet() const { return m_inputModeHasBeenSet; }
    inline void SetInputMode(InputMode value) { m_inputModeHasBeenSet = true; m_inputMode = value; }
    inline DatasetDefinition& WithInputMode(InputMode value) { SetInputMode(value); return *this;}
    ///@}
  private:

    AthenaDatasetDefinition m_athenaDatasetDefinition;
    bool m_athenaDatasetDefinitionHasBeenSet = false;

    RedshiftDatasetDefinition m_redshiftDatasetDefinition;
    bool m_redshiftDatasetDefinitionHasBeenSet = false;

    Aws::String m_localPath;
    bool m_localPathHasBeenSet = false;

    DataDistributionType m_dataDistributionType{DataDistributionType::NOT_SET};
    bool m_dataDistributionTypeHasBeenSet = false;

    InputMode m_inputMode{InputMode::NOT_SET};
    bool m_inputModeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
