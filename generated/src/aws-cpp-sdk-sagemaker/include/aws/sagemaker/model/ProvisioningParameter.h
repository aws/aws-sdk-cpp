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
   * <p>A key value pair used when you provision a project as a service catalog
   * product. For information, see <a
   * href="https://docs.aws.amazon.com/servicecatalog/latest/adminguide/introduction.html">What
   * is Amazon Web Services Service Catalog</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProvisioningParameter">AWS
   * API Reference</a></p>
   */
  class ProvisioningParameter
  {
  public:
    AWS_SAGEMAKER_API ProvisioningParameter();
    AWS_SAGEMAKER_API ProvisioningParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProvisioningParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key that identifies a provisioning parameter.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline ProvisioningParameter& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline ProvisioningParameter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline ProvisioningParameter& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the provisioning parameter.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline ProvisioningParameter& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline ProvisioningParameter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline ProvisioningParameter& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
