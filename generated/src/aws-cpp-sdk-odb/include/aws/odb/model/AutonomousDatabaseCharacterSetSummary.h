/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {

/**
 * <p>A summary of an available character set for Autonomous
 * Databases.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/AutonomousDatabaseCharacterSetSummary">AWS
 * API Reference</a></p>
 */
class AutonomousDatabaseCharacterSetSummary {
 public:
  AWS_ODB_API AutonomousDatabaseCharacterSetSummary() = default;
  AWS_ODB_API AutonomousDatabaseCharacterSetSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API AutonomousDatabaseCharacterSetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the character set.</p>
   */
  inline const Aws::String& GetCharacterSet() const { return m_characterSet; }
  inline bool CharacterSetHasBeenSet() const { return m_characterSetHasBeenSet; }
  template <typename CharacterSetT = Aws::String>
  void SetCharacterSet(CharacterSetT&& value) {
    m_characterSetHasBeenSet = true;
    m_characterSet = std::forward<CharacterSetT>(value);
  }
  template <typename CharacterSetT = Aws::String>
  AutonomousDatabaseCharacterSetSummary& WithCharacterSet(CharacterSetT&& value) {
    SetCharacterSet(std::forward<CharacterSetT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_characterSet;
  bool m_characterSetHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
