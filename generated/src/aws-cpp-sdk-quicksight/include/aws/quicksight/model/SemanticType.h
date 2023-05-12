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


    /**
     * <p>The semantic type name.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The semantic type name.</p>
     */
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    /**
     * <p>The semantic type name.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The semantic type name.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The semantic type name.</p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The semantic type name.</p>
     */
    inline SemanticType& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The semantic type name.</p>
     */
    inline SemanticType& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The semantic type name.</p>
     */
    inline SemanticType& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>The semantic type sub type name.</p>
     */
    inline const Aws::String& GetSubTypeName() const{ return m_subTypeName; }

    /**
     * <p>The semantic type sub type name.</p>
     */
    inline bool SubTypeNameHasBeenSet() const { return m_subTypeNameHasBeenSet; }

    /**
     * <p>The semantic type sub type name.</p>
     */
    inline void SetSubTypeName(const Aws::String& value) { m_subTypeNameHasBeenSet = true; m_subTypeName = value; }

    /**
     * <p>The semantic type sub type name.</p>
     */
    inline void SetSubTypeName(Aws::String&& value) { m_subTypeNameHasBeenSet = true; m_subTypeName = std::move(value); }

    /**
     * <p>The semantic type sub type name.</p>
     */
    inline void SetSubTypeName(const char* value) { m_subTypeNameHasBeenSet = true; m_subTypeName.assign(value); }

    /**
     * <p>The semantic type sub type name.</p>
     */
    inline SemanticType& WithSubTypeName(const Aws::String& value) { SetSubTypeName(value); return *this;}

    /**
     * <p>The semantic type sub type name.</p>
     */
    inline SemanticType& WithSubTypeName(Aws::String&& value) { SetSubTypeName(std::move(value)); return *this;}

    /**
     * <p>The semantic type sub type name.</p>
     */
    inline SemanticType& WithSubTypeName(const char* value) { SetSubTypeName(value); return *this;}


    /**
     * <p>The semantic type parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTypeParameters() const{ return m_typeParameters; }

    /**
     * <p>The semantic type parameters.</p>
     */
    inline bool TypeParametersHasBeenSet() const { return m_typeParametersHasBeenSet; }

    /**
     * <p>The semantic type parameters.</p>
     */
    inline void SetTypeParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_typeParametersHasBeenSet = true; m_typeParameters = value; }

    /**
     * <p>The semantic type parameters.</p>
     */
    inline void SetTypeParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_typeParametersHasBeenSet = true; m_typeParameters = std::move(value); }

    /**
     * <p>The semantic type parameters.</p>
     */
    inline SemanticType& WithTypeParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetTypeParameters(value); return *this;}

    /**
     * <p>The semantic type parameters.</p>
     */
    inline SemanticType& WithTypeParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetTypeParameters(std::move(value)); return *this;}

    /**
     * <p>The semantic type parameters.</p>
     */
    inline SemanticType& AddTypeParameters(const Aws::String& key, const Aws::String& value) { m_typeParametersHasBeenSet = true; m_typeParameters.emplace(key, value); return *this; }

    /**
     * <p>The semantic type parameters.</p>
     */
    inline SemanticType& AddTypeParameters(Aws::String&& key, const Aws::String& value) { m_typeParametersHasBeenSet = true; m_typeParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The semantic type parameters.</p>
     */
    inline SemanticType& AddTypeParameters(const Aws::String& key, Aws::String&& value) { m_typeParametersHasBeenSet = true; m_typeParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The semantic type parameters.</p>
     */
    inline SemanticType& AddTypeParameters(Aws::String&& key, Aws::String&& value) { m_typeParametersHasBeenSet = true; m_typeParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The semantic type parameters.</p>
     */
    inline SemanticType& AddTypeParameters(const char* key, Aws::String&& value) { m_typeParametersHasBeenSet = true; m_typeParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The semantic type parameters.</p>
     */
    inline SemanticType& AddTypeParameters(Aws::String&& key, const char* value) { m_typeParametersHasBeenSet = true; m_typeParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The semantic type parameters.</p>
     */
    inline SemanticType& AddTypeParameters(const char* key, const char* value) { m_typeParametersHasBeenSet = true; m_typeParameters.emplace(key, value); return *this; }


    /**
     * <p>The semantic type truthy cell value.</p>
     */
    inline const Aws::String& GetTruthyCellValue() const{ return m_truthyCellValue; }

    /**
     * <p>The semantic type truthy cell value.</p>
     */
    inline bool TruthyCellValueHasBeenSet() const { return m_truthyCellValueHasBeenSet; }

    /**
     * <p>The semantic type truthy cell value.</p>
     */
    inline void SetTruthyCellValue(const Aws::String& value) { m_truthyCellValueHasBeenSet = true; m_truthyCellValue = value; }

    /**
     * <p>The semantic type truthy cell value.</p>
     */
    inline void SetTruthyCellValue(Aws::String&& value) { m_truthyCellValueHasBeenSet = true; m_truthyCellValue = std::move(value); }

    /**
     * <p>The semantic type truthy cell value.</p>
     */
    inline void SetTruthyCellValue(const char* value) { m_truthyCellValueHasBeenSet = true; m_truthyCellValue.assign(value); }

    /**
     * <p>The semantic type truthy cell value.</p>
     */
    inline SemanticType& WithTruthyCellValue(const Aws::String& value) { SetTruthyCellValue(value); return *this;}

    /**
     * <p>The semantic type truthy cell value.</p>
     */
    inline SemanticType& WithTruthyCellValue(Aws::String&& value) { SetTruthyCellValue(std::move(value)); return *this;}

    /**
     * <p>The semantic type truthy cell value.</p>
     */
    inline SemanticType& WithTruthyCellValue(const char* value) { SetTruthyCellValue(value); return *this;}


    /**
     * <p>The other names or aliases for the true cell value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTruthyCellValueSynonyms() const{ return m_truthyCellValueSynonyms; }

    /**
     * <p>The other names or aliases for the true cell value.</p>
     */
    inline bool TruthyCellValueSynonymsHasBeenSet() const { return m_truthyCellValueSynonymsHasBeenSet; }

    /**
     * <p>The other names or aliases for the true cell value.</p>
     */
    inline void SetTruthyCellValueSynonyms(const Aws::Vector<Aws::String>& value) { m_truthyCellValueSynonymsHasBeenSet = true; m_truthyCellValueSynonyms = value; }

    /**
     * <p>The other names or aliases for the true cell value.</p>
     */
    inline void SetTruthyCellValueSynonyms(Aws::Vector<Aws::String>&& value) { m_truthyCellValueSynonymsHasBeenSet = true; m_truthyCellValueSynonyms = std::move(value); }

    /**
     * <p>The other names or aliases for the true cell value.</p>
     */
    inline SemanticType& WithTruthyCellValueSynonyms(const Aws::Vector<Aws::String>& value) { SetTruthyCellValueSynonyms(value); return *this;}

    /**
     * <p>The other names or aliases for the true cell value.</p>
     */
    inline SemanticType& WithTruthyCellValueSynonyms(Aws::Vector<Aws::String>&& value) { SetTruthyCellValueSynonyms(std::move(value)); return *this;}

    /**
     * <p>The other names or aliases for the true cell value.</p>
     */
    inline SemanticType& AddTruthyCellValueSynonyms(const Aws::String& value) { m_truthyCellValueSynonymsHasBeenSet = true; m_truthyCellValueSynonyms.push_back(value); return *this; }

    /**
     * <p>The other names or aliases for the true cell value.</p>
     */
    inline SemanticType& AddTruthyCellValueSynonyms(Aws::String&& value) { m_truthyCellValueSynonymsHasBeenSet = true; m_truthyCellValueSynonyms.push_back(std::move(value)); return *this; }

    /**
     * <p>The other names or aliases for the true cell value.</p>
     */
    inline SemanticType& AddTruthyCellValueSynonyms(const char* value) { m_truthyCellValueSynonymsHasBeenSet = true; m_truthyCellValueSynonyms.push_back(value); return *this; }


    /**
     * <p>The semantic type falsey cell value.</p>
     */
    inline const Aws::String& GetFalseyCellValue() const{ return m_falseyCellValue; }

    /**
     * <p>The semantic type falsey cell value.</p>
     */
    inline bool FalseyCellValueHasBeenSet() const { return m_falseyCellValueHasBeenSet; }

    /**
     * <p>The semantic type falsey cell value.</p>
     */
    inline void SetFalseyCellValue(const Aws::String& value) { m_falseyCellValueHasBeenSet = true; m_falseyCellValue = value; }

    /**
     * <p>The semantic type falsey cell value.</p>
     */
    inline void SetFalseyCellValue(Aws::String&& value) { m_falseyCellValueHasBeenSet = true; m_falseyCellValue = std::move(value); }

    /**
     * <p>The semantic type falsey cell value.</p>
     */
    inline void SetFalseyCellValue(const char* value) { m_falseyCellValueHasBeenSet = true; m_falseyCellValue.assign(value); }

    /**
     * <p>The semantic type falsey cell value.</p>
     */
    inline SemanticType& WithFalseyCellValue(const Aws::String& value) { SetFalseyCellValue(value); return *this;}

    /**
     * <p>The semantic type falsey cell value.</p>
     */
    inline SemanticType& WithFalseyCellValue(Aws::String&& value) { SetFalseyCellValue(std::move(value)); return *this;}

    /**
     * <p>The semantic type falsey cell value.</p>
     */
    inline SemanticType& WithFalseyCellValue(const char* value) { SetFalseyCellValue(value); return *this;}


    /**
     * <p>The other names or aliases for the false cell value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFalseyCellValueSynonyms() const{ return m_falseyCellValueSynonyms; }

    /**
     * <p>The other names or aliases for the false cell value.</p>
     */
    inline bool FalseyCellValueSynonymsHasBeenSet() const { return m_falseyCellValueSynonymsHasBeenSet; }

    /**
     * <p>The other names or aliases for the false cell value.</p>
     */
    inline void SetFalseyCellValueSynonyms(const Aws::Vector<Aws::String>& value) { m_falseyCellValueSynonymsHasBeenSet = true; m_falseyCellValueSynonyms = value; }

    /**
     * <p>The other names or aliases for the false cell value.</p>
     */
    inline void SetFalseyCellValueSynonyms(Aws::Vector<Aws::String>&& value) { m_falseyCellValueSynonymsHasBeenSet = true; m_falseyCellValueSynonyms = std::move(value); }

    /**
     * <p>The other names or aliases for the false cell value.</p>
     */
    inline SemanticType& WithFalseyCellValueSynonyms(const Aws::Vector<Aws::String>& value) { SetFalseyCellValueSynonyms(value); return *this;}

    /**
     * <p>The other names or aliases for the false cell value.</p>
     */
    inline SemanticType& WithFalseyCellValueSynonyms(Aws::Vector<Aws::String>&& value) { SetFalseyCellValueSynonyms(std::move(value)); return *this;}

    /**
     * <p>The other names or aliases for the false cell value.</p>
     */
    inline SemanticType& AddFalseyCellValueSynonyms(const Aws::String& value) { m_falseyCellValueSynonymsHasBeenSet = true; m_falseyCellValueSynonyms.push_back(value); return *this; }

    /**
     * <p>The other names or aliases for the false cell value.</p>
     */
    inline SemanticType& AddFalseyCellValueSynonyms(Aws::String&& value) { m_falseyCellValueSynonymsHasBeenSet = true; m_falseyCellValueSynonyms.push_back(std::move(value)); return *this; }

    /**
     * <p>The other names or aliases for the false cell value.</p>
     */
    inline SemanticType& AddFalseyCellValueSynonyms(const char* value) { m_falseyCellValueSynonymsHasBeenSet = true; m_falseyCellValueSynonyms.push_back(value); return *this; }

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
