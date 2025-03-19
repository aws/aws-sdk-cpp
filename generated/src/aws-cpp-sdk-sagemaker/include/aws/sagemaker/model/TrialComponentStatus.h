/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TrialComponentPrimaryStatus.h>
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
   * <p>The status of the trial component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrialComponentStatus">AWS
   * API Reference</a></p>
   */
  class TrialComponentStatus
  {
  public:
    AWS_SAGEMAKER_API TrialComponentStatus() = default;
    AWS_SAGEMAKER_API TrialComponentStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrialComponentStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the trial component.</p>
     */
    inline TrialComponentPrimaryStatus GetPrimaryStatus() const { return m_primaryStatus; }
    inline bool PrimaryStatusHasBeenSet() const { return m_primaryStatusHasBeenSet; }
    inline void SetPrimaryStatus(TrialComponentPrimaryStatus value) { m_primaryStatusHasBeenSet = true; m_primaryStatus = value; }
    inline TrialComponentStatus& WithPrimaryStatus(TrialComponentPrimaryStatus value) { SetPrimaryStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the component failed, a message describing why.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    TrialComponentStatus& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    TrialComponentPrimaryStatus m_primaryStatus{TrialComponentPrimaryStatus::NOT_SET};
    bool m_primaryStatusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
