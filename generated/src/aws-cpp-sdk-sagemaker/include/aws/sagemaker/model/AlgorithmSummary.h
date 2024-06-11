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
    AWS_SAGEMAKER_API AlgorithmSummary();
    AWS_SAGEMAKER_API AlgorithmSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AlgorithmSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the algorithm that is described by the summary.</p>
     */
    inline const Aws::String& GetAlgorithmName() const{ return m_algorithmName; }
    inline bool AlgorithmNameHasBeenSet() const { return m_algorithmNameHasBeenSet; }
    inline void SetAlgorithmName(const Aws::String& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = value; }
    inline void SetAlgorithmName(Aws::String&& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = std::move(value); }
    inline void SetAlgorithmName(const char* value) { m_algorithmNameHasBeenSet = true; m_algorithmName.assign(value); }
    inline AlgorithmSummary& WithAlgorithmName(const Aws::String& value) { SetAlgorithmName(value); return *this;}
    inline AlgorithmSummary& WithAlgorithmName(Aws::String&& value) { SetAlgorithmName(std::move(value)); return *this;}
    inline AlgorithmSummary& WithAlgorithmName(const char* value) { SetAlgorithmName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm.</p>
     */
    inline const Aws::String& GetAlgorithmArn() const{ return m_algorithmArn; }
    inline bool AlgorithmArnHasBeenSet() const { return m_algorithmArnHasBeenSet; }
    inline void SetAlgorithmArn(const Aws::String& value) { m_algorithmArnHasBeenSet = true; m_algorithmArn = value; }
    inline void SetAlgorithmArn(Aws::String&& value) { m_algorithmArnHasBeenSet = true; m_algorithmArn = std::move(value); }
    inline void SetAlgorithmArn(const char* value) { m_algorithmArnHasBeenSet = true; m_algorithmArn.assign(value); }
    inline AlgorithmSummary& WithAlgorithmArn(const Aws::String& value) { SetAlgorithmArn(value); return *this;}
    inline AlgorithmSummary& WithAlgorithmArn(Aws::String&& value) { SetAlgorithmArn(std::move(value)); return *this;}
    inline AlgorithmSummary& WithAlgorithmArn(const char* value) { SetAlgorithmArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the algorithm.</p>
     */
    inline const Aws::String& GetAlgorithmDescription() const{ return m_algorithmDescription; }
    inline bool AlgorithmDescriptionHasBeenSet() const { return m_algorithmDescriptionHasBeenSet; }
    inline void SetAlgorithmDescription(const Aws::String& value) { m_algorithmDescriptionHasBeenSet = true; m_algorithmDescription = value; }
    inline void SetAlgorithmDescription(Aws::String&& value) { m_algorithmDescriptionHasBeenSet = true; m_algorithmDescription = std::move(value); }
    inline void SetAlgorithmDescription(const char* value) { m_algorithmDescriptionHasBeenSet = true; m_algorithmDescription.assign(value); }
    inline AlgorithmSummary& WithAlgorithmDescription(const Aws::String& value) { SetAlgorithmDescription(value); return *this;}
    inline AlgorithmSummary& WithAlgorithmDescription(Aws::String&& value) { SetAlgorithmDescription(std::move(value)); return *this;}
    inline AlgorithmSummary& WithAlgorithmDescription(const char* value) { SetAlgorithmDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the algorithm was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline AlgorithmSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline AlgorithmSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The overall status of the algorithm.</p>
     */
    inline const AlgorithmStatus& GetAlgorithmStatus() const{ return m_algorithmStatus; }
    inline bool AlgorithmStatusHasBeenSet() const { return m_algorithmStatusHasBeenSet; }
    inline void SetAlgorithmStatus(const AlgorithmStatus& value) { m_algorithmStatusHasBeenSet = true; m_algorithmStatus = value; }
    inline void SetAlgorithmStatus(AlgorithmStatus&& value) { m_algorithmStatusHasBeenSet = true; m_algorithmStatus = std::move(value); }
    inline AlgorithmSummary& WithAlgorithmStatus(const AlgorithmStatus& value) { SetAlgorithmStatus(value); return *this;}
    inline AlgorithmSummary& WithAlgorithmStatus(AlgorithmStatus&& value) { SetAlgorithmStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_algorithmName;
    bool m_algorithmNameHasBeenSet = false;

    Aws::String m_algorithmArn;
    bool m_algorithmArnHasBeenSet = false;

    Aws::String m_algorithmDescription;
    bool m_algorithmDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    AlgorithmStatus m_algorithmStatus;
    bool m_algorithmStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
