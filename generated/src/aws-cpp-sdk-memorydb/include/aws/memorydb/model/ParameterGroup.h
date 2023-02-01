/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
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
namespace MemoryDB
{
namespace Model
{

  /**
   * <p>Represents the output of a CreateParameterGroup operation. A parameter group
   * represents a combination of specific values for the parameters that are passed
   * to the engine software during startup.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ParameterGroup">AWS
   * API Reference</a></p>
   */
  class ParameterGroup
  {
  public:
    AWS_MEMORYDB_API ParameterGroup();
    AWS_MEMORYDB_API ParameterGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API ParameterGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the parameter group</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the parameter group</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the parameter group</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the parameter group</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the parameter group</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the parameter group</p>
     */
    inline ParameterGroup& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the parameter group</p>
     */
    inline ParameterGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter group</p>
     */
    inline ParameterGroup& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the parameter group family that this parameter group is
     * compatible with.</p>
     */
    inline const Aws::String& GetFamily() const{ return m_family; }

    /**
     * <p>The name of the parameter group family that this parameter group is
     * compatible with.</p>
     */
    inline bool FamilyHasBeenSet() const { return m_familyHasBeenSet; }

    /**
     * <p>The name of the parameter group family that this parameter group is
     * compatible with.</p>
     */
    inline void SetFamily(const Aws::String& value) { m_familyHasBeenSet = true; m_family = value; }

    /**
     * <p>The name of the parameter group family that this parameter group is
     * compatible with.</p>
     */
    inline void SetFamily(Aws::String&& value) { m_familyHasBeenSet = true; m_family = std::move(value); }

    /**
     * <p>The name of the parameter group family that this parameter group is
     * compatible with.</p>
     */
    inline void SetFamily(const char* value) { m_familyHasBeenSet = true; m_family.assign(value); }

    /**
     * <p>The name of the parameter group family that this parameter group is
     * compatible with.</p>
     */
    inline ParameterGroup& WithFamily(const Aws::String& value) { SetFamily(value); return *this;}

    /**
     * <p>The name of the parameter group family that this parameter group is
     * compatible with.</p>
     */
    inline ParameterGroup& WithFamily(Aws::String&& value) { SetFamily(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter group family that this parameter group is
     * compatible with.</p>
     */
    inline ParameterGroup& WithFamily(const char* value) { SetFamily(value); return *this;}


    /**
     * <p>A description of the parameter group</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the parameter group</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the parameter group</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the parameter group</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the parameter group</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the parameter group</p>
     */
    inline ParameterGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the parameter group</p>
     */
    inline ParameterGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the parameter group</p>
     */
    inline ParameterGroup& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the parameter group</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the parameter group</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the parameter group</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the parameter group</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the parameter group</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the parameter group</p>
     */
    inline ParameterGroup& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the parameter group</p>
     */
    inline ParameterGroup& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the parameter group</p>
     */
    inline ParameterGroup& WithARN(const char* value) { SetARN(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_family;
    bool m_familyHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
