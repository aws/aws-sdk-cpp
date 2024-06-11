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
    AWS_NEPTUNEDATA_API PropertygraphData();
    AWS_NEPTUNEDATA_API PropertygraphData(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API PropertygraphData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Gremlin or openCypher element.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline PropertygraphData& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline PropertygraphData& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline PropertygraphData& WithId(const char* value) { SetId(value); return *this;}
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
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline PropertygraphData& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline PropertygraphData& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline PropertygraphData& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property name. For element labels, this is <code>label</code>.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline PropertygraphData& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline PropertygraphData& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline PropertygraphData& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is a JSON object that contains a value field for the value itself, and a
     * datatype field for the JSON data type of that value:</p>
     */
    inline Aws::Utils::DocumentView GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::Utils::Document& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::Utils::Document&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline PropertygraphData& WithValue(const Aws::Utils::Document& value) { SetValue(value); return *this;}
    inline PropertygraphData& WithValue(Aws::Utils::Document&& value) { SetValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this is an edge (type = <code>e</code>), the ID of the corresponding
     * <code>from</code> vertex or source node.</p>
     */
    inline const Aws::String& GetFrom() const{ return m_from; }
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }
    inline void SetFrom(const Aws::String& value) { m_fromHasBeenSet = true; m_from = value; }
    inline void SetFrom(Aws::String&& value) { m_fromHasBeenSet = true; m_from = std::move(value); }
    inline void SetFrom(const char* value) { m_fromHasBeenSet = true; m_from.assign(value); }
    inline PropertygraphData& WithFrom(const Aws::String& value) { SetFrom(value); return *this;}
    inline PropertygraphData& WithFrom(Aws::String&& value) { SetFrom(std::move(value)); return *this;}
    inline PropertygraphData& WithFrom(const char* value) { SetFrom(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this is an edge (type = <code>e</code>), the ID of the corresponding
     * <code>to</code> vertex or target node.</p>
     */
    inline const Aws::String& GetTo() const{ return m_to; }
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }
    inline void SetTo(const Aws::String& value) { m_toHasBeenSet = true; m_to = value; }
    inline void SetTo(Aws::String&& value) { m_toHasBeenSet = true; m_to = std::move(value); }
    inline void SetTo(const char* value) { m_toHasBeenSet = true; m_to.assign(value); }
    inline PropertygraphData& WithTo(const Aws::String& value) { SetTo(value); return *this;}
    inline PropertygraphData& WithTo(Aws::String&& value) { SetTo(std::move(value)); return *this;}
    inline PropertygraphData& WithTo(const char* value) { SetTo(value); return *this;}
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
