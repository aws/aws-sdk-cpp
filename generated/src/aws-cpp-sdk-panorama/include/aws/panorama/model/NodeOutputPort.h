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
   * <p>A node output port.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/NodeOutputPort">AWS
   * API Reference</a></p>
   */
  class NodeOutputPort
  {
  public:
    AWS_PANORAMA_API NodeOutputPort();
    AWS_PANORAMA_API NodeOutputPort(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API NodeOutputPort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The output port's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline NodeOutputPort& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline NodeOutputPort& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline NodeOutputPort& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output port's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline NodeOutputPort& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline NodeOutputPort& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline NodeOutputPort& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output port's type.</p>
     */
    inline const PortType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const PortType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(PortType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline NodeOutputPort& WithType(const PortType& value) { SetType(value); return *this;}
    inline NodeOutputPort& WithType(PortType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PortType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
