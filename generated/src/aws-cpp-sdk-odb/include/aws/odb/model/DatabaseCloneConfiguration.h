/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/CloneType.h>

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
 * <p>The configuration for creating an Autonomous Database as a clone of an
 * existing database.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/DatabaseCloneConfiguration">AWS
 * API Reference</a></p>
 */
class DatabaseCloneConfiguration {
 public:
  AWS_ODB_API DatabaseCloneConfiguration() = default;
  AWS_ODB_API DatabaseCloneConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API DatabaseCloneConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the source Autonomous Database to clone.</p>
   */
  inline const Aws::String& GetSourceAutonomousDatabaseId() const { return m_sourceAutonomousDatabaseId; }
  inline bool SourceAutonomousDatabaseIdHasBeenSet() const { return m_sourceAutonomousDatabaseIdHasBeenSet; }
  template <typename SourceAutonomousDatabaseIdT = Aws::String>
  void SetSourceAutonomousDatabaseId(SourceAutonomousDatabaseIdT&& value) {
    m_sourceAutonomousDatabaseIdHasBeenSet = true;
    m_sourceAutonomousDatabaseId = std::forward<SourceAutonomousDatabaseIdT>(value);
  }
  template <typename SourceAutonomousDatabaseIdT = Aws::String>
  DatabaseCloneConfiguration& WithSourceAutonomousDatabaseId(SourceAutonomousDatabaseIdT&& value) {
    SetSourceAutonomousDatabaseId(std::forward<SourceAutonomousDatabaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of clone to create, either a full clone, a metadata clone, or a
   * partial clone.</p>
   */
  inline CloneType GetCloneType() const { return m_cloneType; }
  inline bool CloneTypeHasBeenSet() const { return m_cloneTypeHasBeenSet; }
  inline void SetCloneType(CloneType value) {
    m_cloneTypeHasBeenSet = true;
    m_cloneType = value;
  }
  inline DatabaseCloneConfiguration& WithCloneType(CloneType value) {
    SetCloneType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceAutonomousDatabaseId;

  CloneType m_cloneType{CloneType::NOT_SET};
  bool m_sourceAutonomousDatabaseIdHasBeenSet = false;
  bool m_cloneTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
