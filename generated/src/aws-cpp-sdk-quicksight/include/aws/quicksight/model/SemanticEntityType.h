/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A structure that represents a semantic entity type.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SemanticEntityType">AWS
   * API Reference</a></p>
   */
  class SemanticEntityType
  {
  public:
    AWS_QUICKSIGHT_API SemanticEntityType();
    AWS_QUICKSIGHT_API SemanticEntityType(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SemanticEntityType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The semantic entity type name.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }
    inline SemanticEntityType& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}
    inline SemanticEntityType& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}
    inline SemanticEntityType& WithTypeName(const char* value) { SetTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The semantic entity sub type name.</p>
     */
    inline const Aws::String& GetSubTypeName() const{ return m_subTypeName; }
    inline bool SubTypeNameHasBeenSet() const { return m_subTypeNameHasBeenSet; }
    inline void SetSubTypeName(const Aws::String& value) { m_subTypeNameHasBeenSet = true; m_subTypeName = value; }
    inline void SetSubTypeName(Aws::String&& value) { m_subTypeNameHasBeenSet = true; m_subTypeName = std::move(value); }
    inline void SetSubTypeName(const char* value) { m_subTypeNameHasBeenSet = true; m_subTypeName.assign(value); }
    inline SemanticEntityType& WithSubTypeName(const Aws::String& value) { SetSubTypeName(value); return *this;}
    inline SemanticEntityType& WithSubTypeName(Aws::String&& value) { SetSubTypeName(std::move(value)); return *this;}
    inline SemanticEntityType& WithSubTypeName(const char* value) { SetSubTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The semantic entity type parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTypeParameters() const{ return m_typeParameters; }
    inline bool TypeParametersHasBeenSet() const { return m_typeParametersHasBeenSet; }
    inline void SetTypeParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_typeParametersHasBeenSet = true; m_typeParameters = value; }
    inline void SetTypeParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_typeParametersHasBeenSet = true; m_typeParameters = std::move(value); }
    inline SemanticEntityType& WithTypeParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetTypeParameters(value); return *this;}
    inline SemanticEntityType& WithTypeParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetTypeParameters(std::move(value)); return *this;}
    inline SemanticEntityType& AddTypeParameters(const Aws::String& key, const Aws::String& value) { m_typeParametersHasBeenSet = true; m_typeParameters.emplace(key, value); return *this; }
    inline SemanticEntityType& AddTypeParameters(Aws::String&& key, const Aws::String& value) { m_typeParametersHasBeenSet = true; m_typeParameters.emplace(std::move(key), value); return *this; }
    inline SemanticEntityType& AddTypeParameters(const Aws::String& key, Aws::String&& value) { m_typeParametersHasBeenSet = true; m_typeParameters.emplace(key, std::move(value)); return *this; }
    inline SemanticEntityType& AddTypeParameters(Aws::String&& key, Aws::String&& value) { m_typeParametersHasBeenSet = true; m_typeParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline SemanticEntityType& AddTypeParameters(const char* key, Aws::String&& value) { m_typeParametersHasBeenSet = true; m_typeParameters.emplace(key, std::move(value)); return *this; }
    inline SemanticEntityType& AddTypeParameters(Aws::String&& key, const char* value) { m_typeParametersHasBeenSet = true; m_typeParameters.emplace(std::move(key), value); return *this; }
    inline SemanticEntityType& AddTypeParameters(const char* key, const char* value) { m_typeParametersHasBeenSet = true; m_typeParameters.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_subTypeName;
    bool m_subTypeNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_typeParameters;
    bool m_typeParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
