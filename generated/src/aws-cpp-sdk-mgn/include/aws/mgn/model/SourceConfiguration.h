/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/SourceEnvironment.h>
#include <aws/mgn/model/SourceS3Configuration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>Configuration for a migration source environment.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/SourceConfiguration">AWS
 * API Reference</a></p>
 */
class SourceConfiguration {
 public:
  AWS_MGN_API SourceConfiguration() = default;
  AWS_MGN_API SourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API SourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The source environment type.</p>
   */
  inline SourceEnvironment GetSourceEnvironment() const { return m_sourceEnvironment; }
  inline bool SourceEnvironmentHasBeenSet() const { return m_sourceEnvironmentHasBeenSet; }
  inline void SetSourceEnvironment(SourceEnvironment value) {
    m_sourceEnvironmentHasBeenSet = true;
    m_sourceEnvironment = value;
  }
  inline SourceConfiguration& WithSourceEnvironment(SourceEnvironment value) {
    SetSourceEnvironment(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The S3 configuration for the source data.</p>
   */
  inline const SourceS3Configuration& GetSourceS3Configuration() const { return m_sourceS3Configuration; }
  inline bool SourceS3ConfigurationHasBeenSet() const { return m_sourceS3ConfigurationHasBeenSet; }
  template <typename SourceS3ConfigurationT = SourceS3Configuration>
  void SetSourceS3Configuration(SourceS3ConfigurationT&& value) {
    m_sourceS3ConfigurationHasBeenSet = true;
    m_sourceS3Configuration = std::forward<SourceS3ConfigurationT>(value);
  }
  template <typename SourceS3ConfigurationT = SourceS3Configuration>
  SourceConfiguration& WithSourceS3Configuration(SourceS3ConfigurationT&& value) {
    SetSourceS3Configuration(std::forward<SourceS3ConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  SourceEnvironment m_sourceEnvironment{SourceEnvironment::NOT_SET};

  SourceS3Configuration m_sourceS3Configuration;
  bool m_sourceEnvironmentHasBeenSet = false;
  bool m_sourceS3ConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
