/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wickr/Wickr_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Wickr {
namespace Model {

/**
 * <p>Defines password complexity requirements for users in a security group,
 * including minimum length and character type requirements.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/PasswordRequirements">AWS
 * API Reference</a></p>
 */
class PasswordRequirements {
 public:
  AWS_WICKR_API PasswordRequirements() = default;
  AWS_WICKR_API PasswordRequirements(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API PasswordRequirements& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The minimum number of lowercase letters required in passwords.</p>
   */
  inline int GetLowercase() const { return m_lowercase; }
  inline bool LowercaseHasBeenSet() const { return m_lowercaseHasBeenSet; }
  inline void SetLowercase(int value) {
    m_lowercaseHasBeenSet = true;
    m_lowercase = value;
  }
  inline PasswordRequirements& WithLowercase(int value) {
    SetLowercase(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum password length in characters.</p>
   */
  inline int GetMinLength() const { return m_minLength; }
  inline bool MinLengthHasBeenSet() const { return m_minLengthHasBeenSet; }
  inline void SetMinLength(int value) {
    m_minLengthHasBeenSet = true;
    m_minLength = value;
  }
  inline PasswordRequirements& WithMinLength(int value) {
    SetMinLength(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum number of numeric characters required in passwords.</p>
   */
  inline int GetNumbers() const { return m_numbers; }
  inline bool NumbersHasBeenSet() const { return m_numbersHasBeenSet; }
  inline void SetNumbers(int value) {
    m_numbersHasBeenSet = true;
    m_numbers = value;
  }
  inline PasswordRequirements& WithNumbers(int value) {
    SetNumbers(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum number of special symbol characters required in passwords.</p>
   */
  inline int GetSymbols() const { return m_symbols; }
  inline bool SymbolsHasBeenSet() const { return m_symbolsHasBeenSet; }
  inline void SetSymbols(int value) {
    m_symbolsHasBeenSet = true;
    m_symbols = value;
  }
  inline PasswordRequirements& WithSymbols(int value) {
    SetSymbols(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum number of uppercase letters required in passwords.</p>
   */
  inline int GetUppercase() const { return m_uppercase; }
  inline bool UppercaseHasBeenSet() const { return m_uppercaseHasBeenSet; }
  inline void SetUppercase(int value) {
    m_uppercaseHasBeenSet = true;
    m_uppercase = value;
  }
  inline PasswordRequirements& WithUppercase(int value) {
    SetUppercase(value);
    return *this;
  }
  ///@}
 private:
  int m_lowercase{0};

  int m_minLength{0};

  int m_numbers{0};

  int m_symbols{0};

  int m_uppercase{0};
  bool m_lowercaseHasBeenSet = false;
  bool m_minLengthHasBeenSet = false;
  bool m_numbersHasBeenSet = false;
  bool m_symbolsHasBeenSet = false;
  bool m_uppercaseHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
