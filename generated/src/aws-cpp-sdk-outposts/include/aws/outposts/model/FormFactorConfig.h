/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/FormFactor.h>
#include <aws/outposts/model/OutpostGeneration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Outposts {
namespace Model {

/**
 * <p>A supported form factor and Outpost generation configuration for an instance
 * type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/FormFactorConfig">AWS
 * API Reference</a></p>
 */
class FormFactorConfig {
 public:
  AWS_OUTPOSTS_API FormFactorConfig() = default;
  AWS_OUTPOSTS_API FormFactorConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_OUTPOSTS_API FormFactorConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The form factor. Valid values are <code>RACK</code> for rack-based Outposts
   * and <code>SERVER</code> for server-based Outposts.</p>
   */
  inline FormFactor GetFormFactor() const { return m_formFactor; }
  inline bool FormFactorHasBeenSet() const { return m_formFactorHasBeenSet; }
  inline void SetFormFactor(FormFactor value) {
    m_formFactorHasBeenSet = true;
    m_formFactor = value;
  }
  inline FormFactorConfig& WithFormFactor(FormFactor value) {
    SetFormFactor(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Outpost generation. Valid values are <code>GENERATION_1</code> for
   * first-generation rack deployments and <code>GENERATION_2</code> for
   * second-generation rack deployments. This value is not set for server form
   * factors.</p>
   */
  inline OutpostGeneration GetOutpostGeneration() const { return m_outpostGeneration; }
  inline bool OutpostGenerationHasBeenSet() const { return m_outpostGenerationHasBeenSet; }
  inline void SetOutpostGeneration(OutpostGeneration value) {
    m_outpostGenerationHasBeenSet = true;
    m_outpostGeneration = value;
  }
  inline FormFactorConfig& WithOutpostGeneration(OutpostGeneration value) {
    SetOutpostGeneration(value);
    return *this;
  }
  ///@}
 private:
  FormFactor m_formFactor{FormFactor::NOT_SET};

  OutpostGeneration m_outpostGeneration{OutpostGeneration::NOT_SET};
  bool m_formFactorHasBeenSet = false;
  bool m_outpostGenerationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
