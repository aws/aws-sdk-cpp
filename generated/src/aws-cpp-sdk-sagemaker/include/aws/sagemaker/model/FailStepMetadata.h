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
   * <p>The container for the metadata for Fail step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/FailStepMetadata">AWS
   * API Reference</a></p>
   */
  class FailStepMetadata
  {
  public:
    AWS_SAGEMAKER_API FailStepMetadata();
    AWS_SAGEMAKER_API FailStepMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API FailStepMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A message that you define and then is processed and rendered by the Fail step
     * when the error occurs.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>A message that you define and then is processed and rendered by the Fail step
     * when the error occurs.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>A message that you define and then is processed and rendered by the Fail step
     * when the error occurs.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>A message that you define and then is processed and rendered by the Fail step
     * when the error occurs.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>A message that you define and then is processed and rendered by the Fail step
     * when the error occurs.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>A message that you define and then is processed and rendered by the Fail step
     * when the error occurs.</p>
     */
    inline FailStepMetadata& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>A message that you define and then is processed and rendered by the Fail step
     * when the error occurs.</p>
     */
    inline FailStepMetadata& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>A message that you define and then is processed and rendered by the Fail step
     * when the error occurs.</p>
     */
    inline FailStepMetadata& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
