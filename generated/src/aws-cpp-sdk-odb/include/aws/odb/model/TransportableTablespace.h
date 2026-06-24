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
 * <p>The transportable tablespace configuration used when creating an Autonomous
 * Database.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/TransportableTablespace">AWS
 * API Reference</a></p>
 */
class TransportableTablespace {
 public:
  AWS_ODB_API TransportableTablespace() = default;
  AWS_ODB_API TransportableTablespace(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API TransportableTablespace& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The URL of the transportable tablespace bundle to use when creating the
   * Autonomous Database.</p>
   */
  inline const Aws::String& GetTtsBundleUrl() const { return m_ttsBundleUrl; }
  inline bool TtsBundleUrlHasBeenSet() const { return m_ttsBundleUrlHasBeenSet; }
  template <typename TtsBundleUrlT = Aws::String>
  void SetTtsBundleUrl(TtsBundleUrlT&& value) {
    m_ttsBundleUrlHasBeenSet = true;
    m_ttsBundleUrl = std::forward<TtsBundleUrlT>(value);
  }
  template <typename TtsBundleUrlT = Aws::String>
  TransportableTablespace& WithTtsBundleUrl(TtsBundleUrlT&& value) {
    SetTtsBundleUrl(std::forward<TtsBundleUrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ttsBundleUrl;
  bool m_ttsBundleUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
