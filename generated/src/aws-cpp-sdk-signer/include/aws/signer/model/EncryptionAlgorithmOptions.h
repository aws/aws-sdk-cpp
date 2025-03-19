/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/signer/model/EncryptionAlgorithm.h>
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
   * <p>The encryption algorithm options that are available to a code-signing
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/EncryptionAlgorithmOptions">AWS
   * API Reference</a></p>
   */
  class EncryptionAlgorithmOptions
  {
  public:
    AWS_SIGNER_API EncryptionAlgorithmOptions() = default;
    AWS_SIGNER_API EncryptionAlgorithmOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API EncryptionAlgorithmOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The set of accepted encryption algorithms that are allowed in a code-signing
     * job.</p>
     */
    inline const Aws::Vector<EncryptionAlgorithm>& GetAllowedValues() const { return m_allowedValues; }
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
    template<typename AllowedValuesT = Aws::Vector<EncryptionAlgorithm>>
    void SetAllowedValues(AllowedValuesT&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::forward<AllowedValuesT>(value); }
    template<typename AllowedValuesT = Aws::Vector<EncryptionAlgorithm>>
    EncryptionAlgorithmOptions& WithAllowedValues(AllowedValuesT&& value) { SetAllowedValues(std::forward<AllowedValuesT>(value)); return *this;}
    inline EncryptionAlgorithmOptions& AddAllowedValues(EncryptionAlgorithm value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The default encryption algorithm that is used by a code-signing job.</p>
     */
    inline EncryptionAlgorithm GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    inline void SetDefaultValue(EncryptionAlgorithm value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }
    inline EncryptionAlgorithmOptions& WithDefaultValue(EncryptionAlgorithm value) { SetDefaultValue(value); return *this;}
    ///@}
  private:

    Aws::Vector<EncryptionAlgorithm> m_allowedValues;
    bool m_allowedValuesHasBeenSet = false;

    EncryptionAlgorithm m_defaultValue{EncryptionAlgorithm::NOT_SET};
    bool m_defaultValueHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
