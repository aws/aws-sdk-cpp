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
 * <p>The configuration for creating an Autonomous Database as a cross-Region
 * Oracle Data Guard peer.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/CrossRegionDataGuardConfiguration">AWS
 * API Reference</a></p>
 */
class CrossRegionDataGuardConfiguration {
 public:
  AWS_ODB_API CrossRegionDataGuardConfiguration() = default;
  AWS_ODB_API CrossRegionDataGuardConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API CrossRegionDataGuardConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the source Autonomous Database for the
   * cross-Region Oracle Data Guard configuration.</p>
   */
  inline const Aws::String& GetSourceAutonomousDatabaseArn() const { return m_sourceAutonomousDatabaseArn; }
  inline bool SourceAutonomousDatabaseArnHasBeenSet() const { return m_sourceAutonomousDatabaseArnHasBeenSet; }
  template <typename SourceAutonomousDatabaseArnT = Aws::String>
  void SetSourceAutonomousDatabaseArn(SourceAutonomousDatabaseArnT&& value) {
    m_sourceAutonomousDatabaseArnHasBeenSet = true;
    m_sourceAutonomousDatabaseArn = std::forward<SourceAutonomousDatabaseArnT>(value);
  }
  template <typename SourceAutonomousDatabaseArnT = Aws::String>
  CrossRegionDataGuardConfiguration& WithSourceAutonomousDatabaseArn(SourceAutonomousDatabaseArnT&& value) {
    SetSourceAutonomousDatabaseArn(std::forward<SourceAutonomousDatabaseArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceAutonomousDatabaseArn;
  bool m_sourceAutonomousDatabaseArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
