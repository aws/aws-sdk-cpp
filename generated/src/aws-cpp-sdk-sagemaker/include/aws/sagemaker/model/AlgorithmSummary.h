/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/AlgorithmStatus.h>
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
   * <p>Provides summary information about an algorithm.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AlgorithmSummary">AWS
   * API Reference</a></p>
   */
  class AlgorithmSummary
  {
  public:
    AWS_SAGEMAKER_API AlgorithmSummary() = default;
    AWS_SAGEMAKER_API AlgorithmSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AlgorithmSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the algorithm that is described by the summary.</p>
     */
    inline const Aws::String& GetAlgorithmName() const { return m_algorithmName; }
    inline bool AlgorithmNameHasBeenSet() const { return m_algorithmNameHasBeenSet; }
    template<typename AlgorithmNameT = Aws::String>
    void SetAlgorithmName(AlgorithmNameT&& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = std::forward<AlgorithmNameT>(value); }
    template<typename AlgorithmNameT = Aws::String>
    AlgorithmSummary& WithAlgorithmName(AlgorithmNameT&& value) { SetAlgorithmName(std::forward<AlgorithmNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm.</p>
     */
    inline const Aws::String& GetAlgorithmArn() const { return m_algorithmArn; }
    inline bool AlgorithmArnHasBeenSet() const { return m_algorithmArnHasBeenSet; }
    template<typename AlgorithmArnT = Aws::String>
    void SetAlgorithmArn(AlgorithmArnT&& value) { m_algorithmArnHasBeenSet = true; m_algorithmArn = std::forward<AlgorithmArnT>(value); }
    template<typename AlgorithmArnT = Aws::String>
    AlgorithmSummary& WithAlgorithmArn(AlgorithmArnT&& value) { SetAlgorithmArn(std::forward<AlgorithmArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the algorithm.</p>
     */
    inline const Aws::String& GetAlgorithmDescription() const { return m_algorithmDescription; }
    inline bool AlgorithmDescriptionHasBeenSet() const { return m_algorithmDescriptionHasBeenSet; }
    template<typename AlgorithmDescriptionT = Aws::String>
    void SetAlgorithmDescription(AlgorithmDescriptionT&& value) { m_algorithmDescriptionHasBeenSet = true; m_algorithmDescription = std::forward<AlgorithmDescriptionT>(value); }
    template<typename AlgorithmDescriptionT = Aws::String>
    AlgorithmSummary& WithAlgorithmDescription(AlgorithmDescriptionT&& value) { SetAlgorithmDescription(std::forward<AlgorithmDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the algorithm was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    AlgorithmSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The overall status of the algorithm.</p>
     */
    inline AlgorithmStatus GetAlgorithmStatus() const { return m_algorithmStatus; }
    inline bool AlgorithmStatusHasBeenSet() const { return m_algorithmStatusHasBeenSet; }
    inline void SetAlgorithmStatus(AlgorithmStatus value) { m_algorithmStatusHasBeenSet = true; m_algorithmStatus = value; }
    inline AlgorithmSummary& WithAlgorithmStatus(AlgorithmStatus value) { SetAlgorithmStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_algorithmName;
    bool m_algorithmNameHasBeenSet = false;

    Aws::String m_algorithmArn;
    bool m_algorithmArnHasBeenSet = false;

    Aws::String m_algorithmDescription;
    bool m_algorithmDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    AlgorithmStatus m_algorithmStatus{AlgorithmStatus::NOT_SET};
    bool m_algorithmStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
