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
 * <p>Information about a database management tool for an Autonomous
 * Database.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/DatabaseTool">AWS
 * API Reference</a></p>
 */
class DatabaseTool {
 public:
  AWS_ODB_API DatabaseTool() = default;
  AWS_ODB_API DatabaseTool(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API DatabaseTool& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Indicates whether the database management tool is enabled.</p>
   */
  inline bool GetIsEnabled() const { return m_isEnabled; }
  inline bool IsEnabledHasBeenSet() const { return m_isEnabledHasBeenSet; }
  inline void SetIsEnabled(bool value) {
    m_isEnabledHasBeenSet = true;
    m_isEnabled = value;
  }
  inline DatabaseTool& WithIsEnabled(bool value) {
    SetIsEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the database management tool.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DatabaseTool& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compute capacity allocated to the database management tool.</p>
   */
  inline double GetComputeCount() const { return m_computeCount; }
  inline bool ComputeCountHasBeenSet() const { return m_computeCountHasBeenSet; }
  inline void SetComputeCount(double value) {
    m_computeCountHasBeenSet = true;
    m_computeCount = value;
  }
  inline DatabaseTool& WithComputeCount(double value) {
    SetComputeCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum amount of time, in minutes, that the database management tool can
   * be idle before it is shut down.</p>
   */
  inline int GetMaxIdleTimeInMinutes() const { return m_maxIdleTimeInMinutes; }
  inline bool MaxIdleTimeInMinutesHasBeenSet() const { return m_maxIdleTimeInMinutesHasBeenSet; }
  inline void SetMaxIdleTimeInMinutes(int value) {
    m_maxIdleTimeInMinutesHasBeenSet = true;
    m_maxIdleTimeInMinutes = value;
  }
  inline DatabaseTool& WithMaxIdleTimeInMinutes(int value) {
    SetMaxIdleTimeInMinutes(value);
    return *this;
  }
  ///@}
 private:
  bool m_isEnabled{false};

  Aws::String m_name;

  double m_computeCount{0.0};

  int m_maxIdleTimeInMinutes{0};
  bool m_isEnabledHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_computeCountHasBeenSet = false;
  bool m_maxIdleTimeInMinutesHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
