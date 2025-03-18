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
   * <p>The artifacts that are generated during an AutoML job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLJobArtifacts">AWS
   * API Reference</a></p>
   */
  class AutoMLJobArtifacts
  {
  public:
    AWS_SAGEMAKER_API AutoMLJobArtifacts() = default;
    AWS_SAGEMAKER_API AutoMLJobArtifacts(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLJobArtifacts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL of the notebook location.</p>
     */
    inline const Aws::String& GetCandidateDefinitionNotebookLocation() const { return m_candidateDefinitionNotebookLocation; }
    inline bool CandidateDefinitionNotebookLocationHasBeenSet() const { return m_candidateDefinitionNotebookLocationHasBeenSet; }
    template<typename CandidateDefinitionNotebookLocationT = Aws::String>
    void SetCandidateDefinitionNotebookLocation(CandidateDefinitionNotebookLocationT&& value) { m_candidateDefinitionNotebookLocationHasBeenSet = true; m_candidateDefinitionNotebookLocation = std::forward<CandidateDefinitionNotebookLocationT>(value); }
    template<typename CandidateDefinitionNotebookLocationT = Aws::String>
    AutoMLJobArtifacts& WithCandidateDefinitionNotebookLocation(CandidateDefinitionNotebookLocationT&& value) { SetCandidateDefinitionNotebookLocation(std::forward<CandidateDefinitionNotebookLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the notebook location.</p>
     */
    inline const Aws::String& GetDataExplorationNotebookLocation() const { return m_dataExplorationNotebookLocation; }
    inline bool DataExplorationNotebookLocationHasBeenSet() const { return m_dataExplorationNotebookLocationHasBeenSet; }
    template<typename DataExplorationNotebookLocationT = Aws::String>
    void SetDataExplorationNotebookLocation(DataExplorationNotebookLocationT&& value) { m_dataExplorationNotebookLocationHasBeenSet = true; m_dataExplorationNotebookLocation = std::forward<DataExplorationNotebookLocationT>(value); }
    template<typename DataExplorationNotebookLocationT = Aws::String>
    AutoMLJobArtifacts& WithDataExplorationNotebookLocation(DataExplorationNotebookLocationT&& value) { SetDataExplorationNotebookLocation(std::forward<DataExplorationNotebookLocationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_candidateDefinitionNotebookLocation;
    bool m_candidateDefinitionNotebookLocationHasBeenSet = false;

    Aws::String m_dataExplorationNotebookLocation;
    bool m_dataExplorationNotebookLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
