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
    AWS_QUICKSIGHT_API SemanticEntityType() = default;
    AWS_QUICKSIGHT_API SemanticEntityType(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SemanticEntityType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The semantic entity type name.</p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    SemanticEntityType& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The semantic entity sub type name.</p>
     */
    inline const Aws::String& GetSubTypeName() const { return m_subTypeName; }
    inline bool SubTypeNameHasBeenSet() const { return m_subTypeNameHasBeenSet; }
    template<typename SubTypeNameT = Aws::String>
    void SetSubTypeName(SubTypeNameT&& value) { m_subTypeNameHasBeenSet = true; m_subTypeName = std::forward<SubTypeNameT>(value); }
    template<typename SubTypeNameT = Aws::String>
    SemanticEntityType& WithSubTypeName(SubTypeNameT&& value) { SetSubTypeName(std::forward<SubTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The semantic entity type parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTypeParameters() const { return m_typeParameters; }
    inline bool TypeParametersHasBeenSet() const { return m_typeParametersHasBeenSet; }
    template<typename TypeParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetTypeParameters(TypeParametersT&& value) { m_typeParametersHasBeenSet = true; m_typeParameters = std::forward<TypeParametersT>(value); }
    template<typename TypeParametersT = Aws::Map<Aws::String, Aws::String>>
    SemanticEntityType& WithTypeParameters(TypeParametersT&& value) { SetTypeParameters(std::forward<TypeParametersT>(value)); return *this;}
    template<typename TypeParametersKeyT = Aws::String, typename TypeParametersValueT = Aws::String>
    SemanticEntityType& AddTypeParameters(TypeParametersKeyT&& key, TypeParametersValueT&& value) {
      m_typeParametersHasBeenSet = true; m_typeParameters.emplace(std::forward<TypeParametersKeyT>(key), std::forward<TypeParametersValueT>(value)); return *this;
    }
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
