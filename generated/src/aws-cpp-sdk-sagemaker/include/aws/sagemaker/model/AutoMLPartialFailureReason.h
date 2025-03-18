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
   * <p>The reason for a partial failure of an AutoML job.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLPartialFailureReason">AWS
   * API Reference</a></p>
   */
  class AutoMLPartialFailureReason
  {
  public:
    AWS_SAGEMAKER_API AutoMLPartialFailureReason() = default;
    AWS_SAGEMAKER_API AutoMLPartialFailureReason(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLPartialFailureReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The message containing the reason for a partial failure of an AutoML job.</p>
     */
    inline const Aws::String& GetPartialFailureMessage() const { return m_partialFailureMessage; }
    inline bool PartialFailureMessageHasBeenSet() const { return m_partialFailureMessageHasBeenSet; }
    template<typename PartialFailureMessageT = Aws::String>
    void SetPartialFailureMessage(PartialFailureMessageT&& value) { m_partialFailureMessageHasBeenSet = true; m_partialFailureMessage = std::forward<PartialFailureMessageT>(value); }
    template<typename PartialFailureMessageT = Aws::String>
    AutoMLPartialFailureReason& WithPartialFailureMessage(PartialFailureMessageT&& value) { SetPartialFailureMessage(std::forward<PartialFailureMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_partialFailureMessage;
    bool m_partialFailureMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
