/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/signer/model/HashAlgorithm.h>
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
namespace signer
{
namespace Model
{

  /**
   * <p>The hash algorithms that are available to a code-signing job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/HashAlgorithmOptions">AWS
   * API Reference</a></p>
   */
  class HashAlgorithmOptions
  {
  public:
    AWS_SIGNER_API HashAlgorithmOptions() = default;
    AWS_SIGNER_API HashAlgorithmOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API HashAlgorithmOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The set of accepted hash algorithms allowed in a code-signing job.</p>
     */
    inline const Aws::Vector<HashAlgorithm>& GetAllowedValues() const { return m_allowedValues; }
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
    template<typename AllowedValuesT = Aws::Vector<HashAlgorithm>>
    void SetAllowedValues(AllowedValuesT&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::forward<AllowedValuesT>(value); }
    template<typename AllowedValuesT = Aws::Vector<HashAlgorithm>>
    HashAlgorithmOptions& WithAllowedValues(AllowedValuesT&& value) { SetAllowedValues(std::forward<AllowedValuesT>(value)); return *this;}
    inline HashAlgorithmOptions& AddAllowedValues(HashAlgorithm value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The default hash algorithm that is used in a code-signing job.</p>
     */
    inline HashAlgorithm GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    inline void SetDefaultValue(HashAlgorithm value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }
    inline HashAlgorithmOptions& WithDefaultValue(HashAlgorithm value) { SetDefaultValue(value); return *this;}
    ///@}
  private:

    Aws::Vector<HashAlgorithm> m_allowedValues;
    bool m_allowedValuesHasBeenSet = false;

    HashAlgorithm m_defaultValue{HashAlgorithm::NOT_SET};
    bool m_defaultValueHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
