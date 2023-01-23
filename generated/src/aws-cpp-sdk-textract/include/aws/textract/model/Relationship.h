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
    AWS_TEXTRACT_API Relationship();
    AWS_TEXTRACT_API Relationship(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Relationship& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of relationship that the blocks in the IDs array have with the
     * current block. The relationship can be <code>VALUE</code> or <code>CHILD</code>.
     * A relationship of type VALUE is a list that contains the ID of the VALUE block
     * that's associated with the KEY of a key-value pair. A relationship of type CHILD
     * is a list of IDs that identify WORD blocks in the case of lines Cell blocks in
     * the case of Tables, and WORD blocks in the case of Selection Elements.</p>
     */
    inline const RelationshipType& GetType() const{ return m_type; }

    /**
     * <p>The type of relationship that the blocks in the IDs array have with the
     * current block. The relationship can be <code>VALUE</code> or <code>CHILD</code>.
     * A relationship of type VALUE is a list that contains the ID of the VALUE block
     * that's associated with the KEY of a key-value pair. A relationship of type CHILD
     * is a list of IDs that identify WORD blocks in the case of lines Cell blocks in
     * the case of Tables, and WORD blocks in the case of Selection Elements.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of relationship that the blocks in the IDs array have with the
     * current block. The relationship can be <code>VALUE</code> or <code>CHILD</code>.
     * A relationship of type VALUE is a list that contains the ID of the VALUE block
     * that's associated with the KEY of a key-value pair. A relationship of type CHILD
     * is a list of IDs that identify WORD blocks in the case of lines Cell blocks in
     * the case of Tables, and WORD blocks in the case of Selection Elements.</p>
     */
    inline void SetType(const RelationshipType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of relationship that the blocks in the IDs array have with the
     * current block. The relationship can be <code>VALUE</code> or <code>CHILD</code>.
     * A relationship of type VALUE is a list that contains the ID of the VALUE block
     * that's associated with the KEY of a key-value pair. A relationship of type CHILD
     * is a list of IDs that identify WORD blocks in the case of lines Cell blocks in
     * the case of Tables, and WORD blocks in the case of Selection Elements.</p>
     */
    inline void SetType(RelationshipType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of relationship that the blocks in the IDs array have with the
     * current block. The relationship can be <code>VALUE</code> or <code>CHILD</code>.
     * A relationship of type VALUE is a list that contains the ID of the VALUE block
     * that's associated with the KEY of a key-value pair. A relationship of type CHILD
     * is a list of IDs that identify WORD blocks in the case of lines Cell blocks in
     * the case of Tables, and WORD blocks in the case of Selection Elements.</p>
     */
    inline Relationship& WithType(const RelationshipType& value) { SetType(value); return *this;}

    /**
     * <p>The type of relationship that the blocks in the IDs array have with the
     * current block. The relationship can be <code>VALUE</code> or <code>CHILD</code>.
     * A relationship of type VALUE is a list that contains the ID of the VALUE block
     * that's associated with the KEY of a key-value pair. A relationship of type CHILD
     * is a list of IDs that identify WORD blocks in the case of lines Cell blocks in
     * the case of Tables, and WORD blocks in the case of Selection Elements.</p>
     */
    inline Relationship& WithType(RelationshipType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>An array of IDs for related blocks. You can get the type of the relationship
     * from the <code>Type</code> element.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIds() const{ return m_ids; }

    /**
     * <p>An array of IDs for related blocks. You can get the type of the relationship
     * from the <code>Type</code> element.</p>
     */
    inline bool IdsHasBeenSet() const { return m_idsHasBeenSet; }

    /**
     * <p>An array of IDs for related blocks. You can get the type of the relationship
     * from the <code>Type</code> element.</p>
     */
    inline void SetIds(const Aws::Vector<Aws::String>& value) { m_idsHasBeenSet = true; m_ids = value; }

    /**
     * <p>An array of IDs for related blocks. You can get the type of the relationship
     * from the <code>Type</code> element.</p>
     */
    inline void SetIds(Aws::Vector<Aws::String>&& value) { m_idsHasBeenSet = true; m_ids = std::move(value); }

    /**
     * <p>An array of IDs for related blocks. You can get the type of the relationship
     * from the <code>Type</code> element.</p>
     */
    inline Relationship& WithIds(const Aws::Vector<Aws::String>& value) { SetIds(value); return *this;}

    /**
     * <p>An array of IDs for related blocks. You can get the type of the relationship
     * from the <code>Type</code> element.</p>
     */
    inline Relationship& WithIds(Aws::Vector<Aws::String>&& value) { SetIds(std::move(value)); return *this;}

    /**
     * <p>An array of IDs for related blocks. You can get the type of the relationship
     * from the <code>Type</code> element.</p>
     */
    inline Relationship& AddIds(const Aws::String& value) { m_idsHasBeenSet = true; m_ids.push_back(value); return *this; }

    /**
     * <p>An array of IDs for related blocks. You can get the type of the relationship
     * from the <code>Type</code> element.</p>
     */
    inline Relationship& AddIds(Aws::String&& value) { m_idsHasBeenSet = true; m_ids.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of IDs for related blocks. You can get the type of the relationship
     * from the <code>Type</code> element.</p>
     */
    inline Relationship& AddIds(const char* value) { m_idsHasBeenSet = true; m_ids.push_back(value); return *this; }

  private:

    RelationshipType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_ids;
    bool m_idsHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
