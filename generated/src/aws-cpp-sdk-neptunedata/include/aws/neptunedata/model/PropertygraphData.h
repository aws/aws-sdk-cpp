/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
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
namespace neptunedata
{
namespace Model
{

  /**
   * <p>A Gremlin or openCypher change record.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/PropertygraphData">AWS
   * API Reference</a></p>
   */
  class PropertygraphData
  {
  public:
    AWS_NEPTUNEDATA_API PropertygraphData() = default;
    AWS_NEPTUNEDATA_API PropertygraphData(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API PropertygraphData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Gremlin or openCypher element.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    PropertygraphData& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of this Gremlin or openCypher element. Must be one of:</p> <ul> <li>
     * <p> <b> <code>v1</code> </b>   -   Vertex label for Gremlin, or node label for
     * openCypher.</p> </li> <li> <p> <b> <code>vp</code> </b>   -   Vertex properties
     * for Gremlin, or node properties for openCypher.</p> </li> <li> <p> <b>
     * <code>e</code> </b>   -   Edge and edge label for Gremlin, or relationship and
     * relationship type for openCypher.</p> </li> <li> <p> <b> <code>ep</code> </b>  
     * -   Edge properties for Gremlin, or relationship properties for openCypher.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    PropertygraphData& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property name. For element labels, this is <code>label</code>.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    PropertygraphData& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is a JSON object that contains a value field for the value itself, and a
     * datatype field for the JSON data type of that value:</p>
     */
    inline Aws::Utils::DocumentView GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::Utils::Document>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::Utils::Document>
    PropertygraphData& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this is an edge (type = <code>e</code>), the ID of the corresponding
     * <code>from</code> vertex or source node.</p>
     */
    inline const Aws::String& GetFrom() const { return m_from; }
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }
    template<typename FromT = Aws::String>
    void SetFrom(FromT&& value) { m_fromHasBeenSet = true; m_from = std::forward<FromT>(value); }
    template<typename FromT = Aws::String>
    PropertygraphData& WithFrom(FromT&& value) { SetFrom(std::forward<FromT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this is an edge (type = <code>e</code>), the ID of the corresponding
     * <code>to</code> vertex or target node.</p>
     */
    inline const Aws::String& GetTo() const { return m_to; }
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }
    template<typename ToT = Aws::String>
    void SetTo(ToT&& value) { m_toHasBeenSet = true; m_to = std::forward<ToT>(value); }
    template<typename ToT = Aws::String>
    PropertygraphData& WithTo(ToT&& value) { SetTo(std::forward<ToT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Utils::Document m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_from;
    bool m_fromHasBeenSet = false;

    Aws::String m_to;
    bool m_toHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
