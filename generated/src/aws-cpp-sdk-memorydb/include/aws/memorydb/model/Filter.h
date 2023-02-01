/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
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
namespace MemoryDB
{
namespace Model
{

  /**
   * <p>Used to streamline results of a search based on the property being
   * filtered.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/Filter">AWS API
   * Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_MEMORYDB_API Filter();
    AWS_MEMORYDB_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The property being filtered. For example, UserName.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The property being filtered. For example, UserName.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The property being filtered. For example, UserName.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The property being filtered. For example, UserName.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The property being filtered. For example, UserName.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The property being filtered. For example, UserName.</p>
     */
    inline Filter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The property being filtered. For example, UserName.</p>
     */
    inline Filter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The property being filtered. For example, UserName.</p>
     */
    inline Filter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The property values to filter on. For example, "user-123".</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The property values to filter on. For example, "user-123".</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The property values to filter on. For example, "user-123".</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The property values to filter on. For example, "user-123".</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The property values to filter on. For example, "user-123".</p>
     */
    inline Filter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The property values to filter on. For example, "user-123".</p>
     */
    inline Filter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The property values to filter on. For example, "user-123".</p>
     */
    inline Filter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The property values to filter on. For example, "user-123".</p>
     */
    inline Filter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The property values to filter on. For example, "user-123".</p>
     */
    inline Filter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
