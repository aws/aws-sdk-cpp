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
    AWS_QUICKSIGHT_API SemanticType();
    AWS_QUICKSIGHT_API SemanticType(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SemanticType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The semantic type name.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }
    inline SemanticType& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}
    inline SemanticType& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}
    inline SemanticType& WithTypeName(const char* value) { SetTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The semantic type sub type name.</p>
     */
    inline const Aws::String& GetSubTypeName() const{ return m_subTypeName; }
    inline bool SubTypeNameHasBeenSet() const { return m_subTypeNameHasBeenSet; }
    inline void SetSubTypeName(const Aws::String& value) { m_subTypeNameHasBeenSet = true; m_subTypeName = value; }
    inline void SetSubTypeName(Aws::String&& value) { m_subTypeNameHasBeenSet = true; m_subTypeName = std::move(value); }
    inline void SetSubTypeName(const char* value) { m_subTypeNameHasBeenSet = true; m_subTypeName.assign(value); }
    inline SemanticType& WithSubTypeName(const Aws::String& value) { SetSubTypeName(value); return *this;}
    inline SemanticType& WithSubTypeName(Aws::String&& value) { SetSubTypeName(std::move(value)); return *this;}
    inline SemanticType& WithSubTypeName(const char* value) { SetSubTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The semantic type parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTypeParameters() const{ return m_typeParameters; }
    inline bool TypeParametersHasBeenSet() const { return m_typeParametersHasBeenSet; }
    inline void SetTypeParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_typeParametersHasBeenSet = true; m_typeParameters = value; }
    inline void SetTypeParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_typeParametersHasBeenSet = true; m_typeParameters = std::move(value); }
    inline SemanticType& WithTypeParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetTypeParameters(value); return *this;}
    inline SemanticType& WithTypeParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetTypeParameters(std::move(value)); return *this;}
    inline SemanticType& AddTypeParameters(const Aws::String& key, const Aws::String& value) { m_typeParametersHasBeenSet = true; m_typeParameters.emplace(key, value); return *this; }
    inline SemanticType& AddTypeParameters(Aws::String&& key, const Aws::String& value) { m_typeParametersHasBeenSet = true; m_typeParameters.emplace(std::move(key), value); return *this; }
    inline SemanticType& AddTypeParameters(const Aws::String& key, Aws::String&& value) { m_typeParametersHasBeenSet = true; m_typeParameters.emplace(key, std::move(value)); return *this; }
    inline SemanticType& AddTypeParameters(Aws::String&& key, Aws::String&& value) { m_typeParametersHasBeenSet = true; m_typeParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline SemanticType& AddTypeParameters(const char* key, Aws::String&& value) { m_typeParametersHasBeenSet = true; m_typeParameters.emplace(key, std::move(value)); return *this; }
    inline SemanticType& AddTypeParameters(Aws::String&& key, const char* value) { m_typeParametersHasBeenSet = true; m_typeParameters.emplace(std::move(key), value); return *this; }
    inline SemanticType& AddTypeParameters(const char* key, const char* value) { m_typeParametersHasBeenSet = true; m_typeParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The semantic type truthy cell value.</p>
     */
    inline const Aws::String& GetTruthyCellValue() const{ return m_truthyCellValue; }
    inline bool TruthyCellValueHasBeenSet() const { return m_truthyCellValueHasBeenSet; }
    inline void SetTruthyCellValue(const Aws::String& value) { m_truthyCellValueHasBeenSet = true; m_truthyCellValue = value; }
    inline void SetTruthyCellValue(Aws::String&& value) { m_truthyCellValueHasBeenSet = true; m_truthyCellValue = std::move(value); }
    inline void SetTruthyCellValue(const char* value) { m_truthyCellValueHasBeenSet = true; m_truthyCellValue.assign(value); }
    inline SemanticType& WithTruthyCellValue(const Aws::String& value) { SetTruthyCellValue(value); return *this;}
    inline SemanticType& WithTruthyCellValue(Aws::String&& value) { SetTruthyCellValue(std::move(value)); return *this;}
    inline SemanticType& WithTruthyCellValue(const char* value) { SetTruthyCellValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The other names or aliases for the true cell value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTruthyCellValueSynonyms() const{ return m_truthyCellValueSynonyms; }
    inline bool TruthyCellValueSynonymsHasBeenSet() const { return m_truthyCellValueSynonymsHasBeenSet; }
    inline void SetTruthyCellValueSynonyms(const Aws::Vector<Aws::String>& value) { m_truthyCellValueSynonymsHasBeenSet = true; m_truthyCellValueSynonyms = value; }
    inline void SetTruthyCellValueSynonyms(Aws::Vector<Aws::String>&& value) { m_truthyCellValueSynonymsHasBeenSet = true; m_truthyCellValueSynonyms = std::move(value); }
    inline SemanticType& WithTruthyCellValueSynonyms(const Aws::Vector<Aws::String>& value) { SetTruthyCellValueSynonyms(value); return *this;}
    inline SemanticType& WithTruthyCellValueSynonyms(Aws::Vector<Aws::String>&& value) { SetTruthyCellValueSynonyms(std::move(value)); return *this;}
    inline SemanticType& AddTruthyCellValueSynonyms(const Aws::String& value) { m_truthyCellValueSynonymsHasBeenSet = true; m_truthyCellValueSynonyms.push_back(value); return *this; }
    inline SemanticType& AddTruthyCellValueSynonyms(Aws::String&& value) { m_truthyCellValueSynonymsHasBeenSet = true; m_truthyCellValueSynonyms.push_back(std::move(value)); return *this; }
    inline SemanticType& AddTruthyCellValueSynonyms(const char* value) { m_truthyCellValueSynonymsHasBeenSet = true; m_truthyCellValueSynonyms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The semantic type falsey cell value.</p>
     */
    inline const Aws::String& GetFalseyCellValue() const{ return m_falseyCellValue; }
    inline bool FalseyCellValueHasBeenSet() const { return m_falseyCellValueHasBeenSet; }
    inline void SetFalseyCellValue(const Aws::String& value) { m_falseyCellValueHasBeenSet = true; m_falseyCellValue = value; }
    inline void SetFalseyCellValue(Aws::String&& value) { m_falseyCellValueHasBeenSet = true; m_falseyCellValue = std::move(value); }
    inline void SetFalseyCellValue(const char* value) { m_falseyCellValueHasBeenSet = true; m_falseyCellValue.assign(value); }
    inline SemanticType& WithFalseyCellValue(const Aws::String& value) { SetFalseyCellValue(value); return *this;}
    inline SemanticType& WithFalseyCellValue(Aws::String&& value) { SetFalseyCellValue(std::move(value)); return *this;}
    inline SemanticType& WithFalseyCellValue(const char* value) { SetFalseyCellValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The other names or aliases for the false cell value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFalseyCellValueSynonyms() const{ return m_falseyCellValueSynonyms; }
    inline bool FalseyCellValueSynonymsHasBeenSet() const { return m_falseyCellValueSynonymsHasBeenSet; }
    inline void SetFalseyCellValueSynonyms(const Aws::Vector<Aws::String>& value) { m_falseyCellValueSynonymsHasBeenSet = true; m_falseyCellValueSynonyms = value; }
    inline void SetFalseyCellValueSynonyms(Aws::Vector<Aws::String>&& value) { m_falseyCellValueSynonymsHasBeenSet = true; m_falseyCellValueSynonyms = std::move(value); }
    inline SemanticType& WithFalseyCellValueSynonyms(const Aws::Vector<Aws::String>& value) { SetFalseyCellValueSynonyms(value); return *this;}
    inline SemanticType& WithFalseyCellValueSynonyms(Aws::Vector<Aws::String>&& value) { SetFalseyCellValueSynonyms(std::move(value)); return *this;}
    inline SemanticType& AddFalseyCellValueSynonyms(const Aws::String& value) { m_falseyCellValueSynonymsHasBeenSet = true; m_falseyCellValueSynonyms.push_back(value); return *this; }
    inline SemanticType& AddFalseyCellValueSynonyms(Aws::String&& value) { m_falseyCellValueSynonymsHasBeenSet = true; m_falseyCellValueSynonyms.push_back(std::move(value)); return *this; }
    inline SemanticType& AddFalseyCellValueSynonyms(const char* value) { m_falseyCellValueSynonymsHasBeenSet = true; m_falseyCellValueSynonyms.push_back(value); return *this; }
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
