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
    AWS_SERVICECATALOG_API ExecutionParameter();
    AWS_SERVICECATALOG_API ExecutionParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ExecutionParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the execution parameter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ExecutionParameter& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ExecutionParameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ExecutionParameter& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution parameter type.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline ExecutionParameter& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline ExecutionParameter& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline ExecutionParameter& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default values for the execution parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDefaultValues() const{ return m_defaultValues; }
    inline bool DefaultValuesHasBeenSet() const { return m_defaultValuesHasBeenSet; }
    inline void SetDefaultValues(const Aws::Vector<Aws::String>& value) { m_defaultValuesHasBeenSet = true; m_defaultValues = value; }
    inline void SetDefaultValues(Aws::Vector<Aws::String>&& value) { m_defaultValuesHasBeenSet = true; m_defaultValues = std::move(value); }
    inline ExecutionParameter& WithDefaultValues(const Aws::Vector<Aws::String>& value) { SetDefaultValues(value); return *this;}
    inline ExecutionParameter& WithDefaultValues(Aws::Vector<Aws::String>&& value) { SetDefaultValues(std::move(value)); return *this;}
    inline ExecutionParameter& AddDefaultValues(const Aws::String& value) { m_defaultValuesHasBeenSet = true; m_defaultValues.push_back(value); return *this; }
    inline ExecutionParameter& AddDefaultValues(Aws::String&& value) { m_defaultValuesHasBeenSet = true; m_defaultValues.push_back(std::move(value)); return *this; }
    inline ExecutionParameter& AddDefaultValues(const char* value) { m_defaultValuesHasBeenSet = true; m_defaultValues.push_back(value); return *this; }
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
