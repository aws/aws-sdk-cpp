/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A structure that represents a semantic type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SemanticType">AWS
   * API Reference</a></p>
   */
  class SemanticType
  {
  public:
    AWS_QUICKSIGHT_API SemanticType() = default;
    AWS_QUICKSIGHT_API SemanticType(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SemanticType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The semantic type name.</p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    SemanticType& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The semantic type sub type name.</p>
     */
    inline const Aws::String& GetSubTypeName() const { return m_subTypeName; }
    inline bool SubTypeNameHasBeenSet() const { return m_subTypeNameHasBeenSet; }
    template<typename SubTypeNameT = Aws::String>
    void SetSubTypeName(SubTypeNameT&& value) { m_subTypeNameHasBeenSet = true; m_subTypeName = std::forward<SubTypeNameT>(value); }
    template<typename SubTypeNameT = Aws::String>
    SemanticType& WithSubTypeName(SubTypeNameT&& value) { SetSubTypeName(std::forward<SubTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The semantic type parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTypeParameters() const { return m_typeParameters; }
    inline bool TypeParametersHasBeenSet() const { return m_typeParametersHasBeenSet; }
    template<typename TypeParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetTypeParameters(TypeParametersT&& value) { m_typeParametersHasBeenSet = true; m_typeParameters = std::forward<TypeParametersT>(value); }
    template<typename TypeParametersT = Aws::Map<Aws::String, Aws::String>>
    SemanticType& WithTypeParameters(TypeParametersT&& value) { SetTypeParameters(std::forward<TypeParametersT>(value)); return *this;}
    template<typename TypeParametersKeyT = Aws::String, typename TypeParametersValueT = Aws::String>
    SemanticType& AddTypeParameters(TypeParametersKeyT&& key, TypeParametersValueT&& value) {
      m_typeParametersHasBeenSet = true; m_typeParameters.emplace(std::forward<TypeParametersKeyT>(key), std::forward<TypeParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The semantic type truthy cell value.</p>
     */
    inline const Aws::String& GetTruthyCellValue() const { return m_truthyCellValue; }
    inline bool TruthyCellValueHasBeenSet() const { return m_truthyCellValueHasBeenSet; }
    template<typename TruthyCellValueT = Aws::String>
    void SetTruthyCellValue(TruthyCellValueT&& value) { m_truthyCellValueHasBeenSet = true; m_truthyCellValue = std::forward<TruthyCellValueT>(value); }
    template<typename TruthyCellValueT = Aws::String>
    SemanticType& WithTruthyCellValue(TruthyCellValueT&& value) { SetTruthyCellValue(std::forward<TruthyCellValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The other names or aliases for the true cell value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTruthyCellValueSynonyms() const { return m_truthyCellValueSynonyms; }
    inline bool TruthyCellValueSynonymsHasBeenSet() const { return m_truthyCellValueSynonymsHasBeenSet; }
    template<typename TruthyCellValueSynonymsT = Aws::Vector<Aws::String>>
    void SetTruthyCellValueSynonyms(TruthyCellValueSynonymsT&& value) { m_truthyCellValueSynonymsHasBeenSet = true; m_truthyCellValueSynonyms = std::forward<TruthyCellValueSynonymsT>(value); }
    template<typename TruthyCellValueSynonymsT = Aws::Vector<Aws::String>>
    SemanticType& WithTruthyCellValueSynonyms(TruthyCellValueSynonymsT&& value) { SetTruthyCellValueSynonyms(std::forward<TruthyCellValueSynonymsT>(value)); return *this;}
    template<typename TruthyCellValueSynonymsT = Aws::String>
    SemanticType& AddTruthyCellValueSynonyms(TruthyCellValueSynonymsT&& value) { m_truthyCellValueSynonymsHasBeenSet = true; m_truthyCellValueSynonyms.emplace_back(std::forward<TruthyCellValueSynonymsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The semantic type falsey cell value.</p>
     */
    inline const Aws::String& GetFalseyCellValue() const { return m_falseyCellValue; }
    inline bool FalseyCellValueHasBeenSet() const { return m_falseyCellValueHasBeenSet; }
    template<typename FalseyCellValueT = Aws::String>
    void SetFalseyCellValue(FalseyCellValueT&& value) { m_falseyCellValueHasBeenSet = true; m_falseyCellValue = std::forward<FalseyCellValueT>(value); }
    template<typename FalseyCellValueT = Aws::String>
    SemanticType& WithFalseyCellValue(FalseyCellValueT&& value) { SetFalseyCellValue(std::forward<FalseyCellValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The other names or aliases for the false cell value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFalseyCellValueSynonyms() const { return m_falseyCellValueSynonyms; }
    inline bool FalseyCellValueSynonymsHasBeenSet() const { return m_falseyCellValueSynonymsHasBeenSet; }
    template<typename FalseyCellValueSynonymsT = Aws::Vector<Aws::String>>
    void SetFalseyCellValueSynonyms(FalseyCellValueSynonymsT&& value) { m_falseyCellValueSynonymsHasBeenSet = true; m_falseyCellValueSynonyms = std::forward<FalseyCellValueSynonymsT>(value); }
    template<typename FalseyCellValueSynonymsT = Aws::Vector<Aws::String>>
    SemanticType& WithFalseyCellValueSynonyms(FalseyCellValueSynonymsT&& value) { SetFalseyCellValueSynonyms(std::forward<FalseyCellValueSynonymsT>(value)); return *this;}
    template<typename FalseyCellValueSynonymsT = Aws::String>
    SemanticType& AddFalseyCellValueSynonyms(FalseyCellValueSynonymsT&& value) { m_falseyCellValueSynonymsHasBeenSet = true; m_falseyCellValueSynonyms.emplace_back(std::forward<FalseyCellValueSynonymsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_subTypeName;
    bool m_subTypeNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_typeParameters;
    bool m_typeParametersHasBeenSet = false;

    Aws::String m_truthyCellValue;
    bool m_truthyCellValueHasBeenSet = false;

    Aws::Vector<Aws::String> m_truthyCellValueSynonyms;
    bool m_truthyCellValueSynonymsHasBeenSet = false;

    Aws::String m_falseyCellValue;
    bool m_falseyCellValueHasBeenSet = false;

    Aws::Vector<Aws::String> m_falseyCellValueSynonyms;
    bool m_falseyCellValueSynonymsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
