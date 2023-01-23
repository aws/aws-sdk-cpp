/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ModelMetadataFilterType.h>
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
   * <p>Part of the search expression. You can specify the name and value (domain,
   * task, framework, framework version, task, and model).</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelMetadataFilter">AWS
   * API Reference</a></p>
   */
  class ModelMetadataFilter
  {
  public:
    AWS_SAGEMAKER_API ModelMetadataFilter();
    AWS_SAGEMAKER_API ModelMetadataFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelMetadataFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the of the model to filter by.</p>
     */
    inline const ModelMetadataFilterType& GetName() const{ return m_name; }

    /**
     * <p>The name of the of the model to filter by.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the of the model to filter by.</p>
     */
    inline void SetName(const ModelMetadataFilterType& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the of the model to filter by.</p>
     */
    inline void SetName(ModelMetadataFilterType&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the of the model to filter by.</p>
     */
    inline ModelMetadataFilter& WithName(const ModelMetadataFilterType& value) { SetName(value); return *this;}

    /**
     * <p>The name of the of the model to filter by.</p>
     */
    inline ModelMetadataFilter& WithName(ModelMetadataFilterType&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The value to filter the model metadata.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value to filter the model metadata.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value to filter the model metadata.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value to filter the model metadata.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value to filter the model metadata.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value to filter the model metadata.</p>
     */
    inline ModelMetadataFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value to filter the model metadata.</p>
     */
    inline ModelMetadataFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value to filter the model metadata.</p>
     */
    inline ModelMetadataFilter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    ModelMetadataFilterType m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
