/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/PortType.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>A node input port.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/NodeInputPort">AWS
   * API Reference</a></p>
   */
  class NodeInputPort
  {
  public:
    AWS_PANORAMA_API NodeInputPort();
    AWS_PANORAMA_API NodeInputPort(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API NodeInputPort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The input port's default value.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }
    inline NodeInputPort& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}
    inline NodeInputPort& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}
    inline NodeInputPort& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input port's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline NodeInputPort& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline NodeInputPort& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline NodeInputPort& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input port's max connections.</p>
     */
    inline int GetMaxConnections() const{ return m_maxConnections; }
    inline bool MaxConnectionsHasBeenSet() const { return m_maxConnectionsHasBeenSet; }
    inline void SetMaxConnections(int value) { m_maxConnectionsHasBeenSet = true; m_maxConnections = value; }
    inline NodeInputPort& WithMaxConnections(int value) { SetMaxConnections(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input port's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline NodeInputPort& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline NodeInputPort& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline NodeInputPort& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input port's type.</p>
     */
    inline const PortType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const PortType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(PortType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline NodeInputPort& WithType(const PortType& value) { SetType(value); return *this;}
    inline NodeInputPort& WithType(PortType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_maxConnections;
    bool m_maxConnectionsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PortType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
