/**
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
   * <p>Container for human task user interface information.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HumanTaskUiSummary">AWS
   * API Reference</a></p>
   */
  class HumanTaskUiSummary
  {
  public:
    AWS_SAGEMAKER_API HumanTaskUiSummary() = default;
    AWS_SAGEMAKER_API HumanTaskUiSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HumanTaskUiSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the human task user interface.</p>
     */
    inline const Aws::String& GetHumanTaskUiName() const { return m_humanTaskUiName; }
    inline bool HumanTaskUiNameHasBeenSet() const { return m_humanTaskUiNameHasBeenSet; }
    template<typename HumanTaskUiNameT = Aws::String>
    void SetHumanTaskUiName(HumanTaskUiNameT&& value) { m_humanTaskUiNameHasBeenSet = true; m_humanTaskUiName = std::forward<HumanTaskUiNameT>(value); }
    template<typename HumanTaskUiNameT = Aws::String>
    HumanTaskUiSummary& WithHumanTaskUiName(HumanTaskUiNameT&& value) { SetHumanTaskUiName(std::forward<HumanTaskUiNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the human task user interface.</p>
     */
    inline const Aws::String& GetHumanTaskUiArn() const { return m_humanTaskUiArn; }
    inline bool HumanTaskUiArnHasBeenSet() const { return m_humanTaskUiArnHasBeenSet; }
    template<typename HumanTaskUiArnT = Aws::String>
    void SetHumanTaskUiArn(HumanTaskUiArnT&& value) { m_humanTaskUiArnHasBeenSet = true; m_humanTaskUiArn = std::forward<HumanTaskUiArnT>(value); }
    template<typename HumanTaskUiArnT = Aws::String>
    HumanTaskUiSummary& WithHumanTaskUiArn(HumanTaskUiArnT&& value) { SetHumanTaskUiArn(std::forward<HumanTaskUiArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp when SageMaker created the human task user interface.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    HumanTaskUiSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_humanTaskUiName;
    bool m_humanTaskUiNameHasBeenSet = false;

    Aws::String m_humanTaskUiArn;
    bool m_humanTaskUiArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
