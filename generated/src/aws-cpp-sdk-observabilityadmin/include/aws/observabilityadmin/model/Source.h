/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p>A list of source plugin types used in the pipeline configuration (such as
 * <code>cloudwatch_logs</code> or <code>s3</code>). Currently supports a single
 * source per pipeline, but is structured as a list to accommodate multiple
 * pipelines in the configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/Source">AWS
 * API Reference</a></p>
 */
class Source {
 public:
  AWS_OBSERVABILITYADMIN_API Source() = default;
  AWS_OBSERVABILITYADMIN_API Source(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Source& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The plugin name of the source, such as <code>cloudwatch_logs</code> or
   * <code>s3</code>.</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  Source& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_type;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
