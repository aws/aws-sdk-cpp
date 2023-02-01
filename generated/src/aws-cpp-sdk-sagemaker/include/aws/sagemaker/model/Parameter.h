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
   * <p>Assigns a value to a named Pipeline parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Parameter">AWS
   * API Reference</a></p>
   */
  class Parameter
  {
  public:
    AWS_SAGEMAKER_API Parameter();
    AWS_SAGEMAKER_API Parameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Parameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the parameter to assign a value to. This parameter name must
     * match a named parameter in the pipeline definition.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the parameter to assign a value to. This parameter name must
     * match a named parameter in the pipeline definition.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the parameter to assign a value to. This parameter name must
     * match a named parameter in the pipeline definition.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the parameter to assign a value to. This parameter name must
     * match a named parameter in the pipeline definition.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the parameter to assign a value to. This parameter name must
     * match a named parameter in the pipeline definition.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the parameter to assign a value to. This parameter name must
     * match a named parameter in the pipeline definition.</p>
     */
    inline Parameter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the parameter to assign a value to. This parameter name must
     * match a named parameter in the pipeline definition.</p>
     */
    inline Parameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter to assign a value to. This parameter name must
     * match a named parameter in the pipeline definition.</p>
     */
    inline Parameter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The literal value for the parameter.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The literal value for the parameter.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The literal value for the parameter.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The literal value for the parameter.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The literal value for the parameter.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The literal value for the parameter.</p>
     */
    inline Parameter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The literal value for the parameter.</p>
     */
    inline Parameter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The literal value for the parameter.</p>
     */
    inline Parameter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
