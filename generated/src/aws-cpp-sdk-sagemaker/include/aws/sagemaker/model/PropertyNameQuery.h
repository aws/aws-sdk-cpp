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
   * <p>Part of the <code>SuggestionQuery</code> type. Specifies a hint for
   * retrieving property names that begin with the specified text.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PropertyNameQuery">AWS
   * API Reference</a></p>
   */
  class PropertyNameQuery
  {
  public:
    AWS_SAGEMAKER_API PropertyNameQuery() = default;
    AWS_SAGEMAKER_API PropertyNameQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API PropertyNameQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Text that begins a property's name.</p>
     */
    inline const Aws::String& GetPropertyNameHint() const { return m_propertyNameHint; }
    inline bool PropertyNameHintHasBeenSet() const { return m_propertyNameHintHasBeenSet; }
    template<typename PropertyNameHintT = Aws::String>
    void SetPropertyNameHint(PropertyNameHintT&& value) { m_propertyNameHintHasBeenSet = true; m_propertyNameHint = std::forward<PropertyNameHintT>(value); }
    template<typename PropertyNameHintT = Aws::String>
    PropertyNameQuery& WithPropertyNameHint(PropertyNameHintT&& value) { SetPropertyNameHint(std::forward<PropertyNameHintT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_propertyNameHint;
    bool m_propertyNameHintHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
