/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Details of an execution parameter value that is passed to a self-service
   * action when executed on a provisioned product.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ExecutionParameter">AWS
   * API Reference</a></p>
   */
  class ExecutionParameter
  {
  public:
    AWS_SERVICECATALOG_API ExecutionParameter() = default;
    AWS_SERVICECATALOG_API ExecutionParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ExecutionParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the execution parameter.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ExecutionParameter& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution parameter type.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    ExecutionParameter& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default values for the execution parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDefaultValues() const { return m_defaultValues; }
    inline bool DefaultValuesHasBeenSet() const { return m_defaultValuesHasBeenSet; }
    template<typename DefaultValuesT = Aws::Vector<Aws::String>>
    void SetDefaultValues(DefaultValuesT&& value) { m_defaultValuesHasBeenSet = true; m_defaultValues = std::forward<DefaultValuesT>(value); }
    template<typename DefaultValuesT = Aws::Vector<Aws::String>>
    ExecutionParameter& WithDefaultValues(DefaultValuesT&& value) { SetDefaultValues(std::forward<DefaultValuesT>(value)); return *this;}
    template<typename DefaultValuesT = Aws::String>
    ExecutionParameter& AddDefaultValues(DefaultValuesT&& value) { m_defaultValuesHasBeenSet = true; m_defaultValues.emplace_back(std::forward<DefaultValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_defaultValues;
    bool m_defaultValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
