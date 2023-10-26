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
   * <p>The resolved attributes specific to the text generation problem
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TextGenerationResolvedAttributes">AWS
   * API Reference</a></p>
   */
  class TextGenerationResolvedAttributes
  {
  public:
    AWS_SAGEMAKER_API TextGenerationResolvedAttributes();
    AWS_SAGEMAKER_API TextGenerationResolvedAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TextGenerationResolvedAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the base model to fine-tune.</p>
     */
    inline const Aws::String& GetBaseModelName() const{ return m_baseModelName; }

    /**
     * <p>The name of the base model to fine-tune.</p>
     */
    inline bool BaseModelNameHasBeenSet() const { return m_baseModelNameHasBeenSet; }

    /**
     * <p>The name of the base model to fine-tune.</p>
     */
    inline void SetBaseModelName(const Aws::String& value) { m_baseModelNameHasBeenSet = true; m_baseModelName = value; }

    /**
     * <p>The name of the base model to fine-tune.</p>
     */
    inline void SetBaseModelName(Aws::String&& value) { m_baseModelNameHasBeenSet = true; m_baseModelName = std::move(value); }

    /**
     * <p>The name of the base model to fine-tune.</p>
     */
    inline void SetBaseModelName(const char* value) { m_baseModelNameHasBeenSet = true; m_baseModelName.assign(value); }

    /**
     * <p>The name of the base model to fine-tune.</p>
     */
    inline TextGenerationResolvedAttributes& WithBaseModelName(const Aws::String& value) { SetBaseModelName(value); return *this;}

    /**
     * <p>The name of the base model to fine-tune.</p>
     */
    inline TextGenerationResolvedAttributes& WithBaseModelName(Aws::String&& value) { SetBaseModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the base model to fine-tune.</p>
     */
    inline TextGenerationResolvedAttributes& WithBaseModelName(const char* value) { SetBaseModelName(value); return *this;}

  private:

    Aws::String m_baseModelName;
    bool m_baseModelNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
