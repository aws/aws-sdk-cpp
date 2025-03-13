/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/RelationshipType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>Information about how blocks are related to each other. A <code>Block</code>
   * object contains 0 or more <code>Relation</code> objects in a list,
   * <code>Relationships</code>. For more information, see <a>Block</a>.</p> <p>The
   * <code>Type</code> element provides the type of the relationship for all blocks
   * in the <code>IDs</code> array. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/Relationship">AWS
   * API Reference</a></p>
   */
  class Relationship
  {
  public:
    AWS_TEXTRACT_API Relationship() = default;
    AWS_TEXTRACT_API Relationship(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Relationship& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of relationship between the blocks in the IDs array and the current
     * block. The following list describes the relationship types that can be returned.
     * </p> <ul> <li> <p> <i>VALUE</i> - A list that contains the ID of the VALUE block
     * that's associated with the KEY of a key-value pair.</p> </li> <li> <p>
     * <i>CHILD</i> - A list of IDs that identify blocks found within the current block
     * object. For example, WORD blocks have a CHILD relationship to the LINE block
     * type.</p> </li> <li> <p> <i>MERGED_CELL</i> - A list of IDs that identify each
     * of the MERGED_CELL block types in a table.</p> </li> <li> <p> <i>ANSWER</i> - A
     * list that contains the ID of the QUERY_RESULT block that’s associated with the
     * corresponding QUERY block. </p> </li> <li> <p> <i>TABLE</i> - A list of IDs that
     * identify associated TABLE block types. </p> </li> <li> <p> <i>TABLE_TITLE</i> -
     * A list that contains the ID for the TABLE_TITLE block type in a table. </p>
     * </li> <li> <p> <i>TABLE_FOOTER</i> - A list of IDs that identify the
     * TABLE_FOOTER block types in a table. </p> </li> </ul>
     */
    inline RelationshipType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RelationshipType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Relationship& WithType(RelationshipType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of IDs for related blocks. You can get the type of the relationship
     * from the <code>Type</code> element.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIds() const { return m_ids; }
    inline bool IdsHasBeenSet() const { return m_idsHasBeenSet; }
    template<typename IdsT = Aws::Vector<Aws::String>>
    void SetIds(IdsT&& value) { m_idsHasBeenSet = true; m_ids = std::forward<IdsT>(value); }
    template<typename IdsT = Aws::Vector<Aws::String>>
    Relationship& WithIds(IdsT&& value) { SetIds(std::forward<IdsT>(value)); return *this;}
    template<typename IdsT = Aws::String>
    Relationship& AddIds(IdsT&& value) { m_idsHasBeenSet = true; m_ids.emplace_back(std::forward<IdsT>(value)); return *this; }
    ///@}
  private:

    RelationshipType m_type{RelationshipType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_ids;
    bool m_idsHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
