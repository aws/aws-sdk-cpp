/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/model/SlurmRestMode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PCS {
namespace Model {

/**
 * <p>The Slurm REST API configuration includes settings for enabling and
 * configuring the Slurm REST API. It's a property of the
 * <b>ClusterSlurmConfiguration</b> object.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/SlurmRest">AWS API
 * Reference</a></p>
 */
class SlurmRest {
 public:
  AWS_PCS_API SlurmRest() = default;
  AWS_PCS_API SlurmRest(Aws::Utils::Json::JsonView jsonValue);
  AWS_PCS_API SlurmRest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The default value for <code>mode</code> is <code>STANDARD</code>. A value of
   * <code>STANDARD</code> means the Slurm REST API is enabled.</p>
   */
  inline SlurmRestMode GetMode() const { return m_mode; }
  inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
  inline void SetMode(SlurmRestMode value) {
    m_modeHasBeenSet = true;
    m_mode = value;
  }
  inline SlurmRest& WithMode(SlurmRestMode value) {
    SetMode(value);
    return *this;
  }
  ///@}
 private:
  SlurmRestMode m_mode{SlurmRestMode::NOT_SET};
  bool m_modeHasBeenSet = false;
};

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
