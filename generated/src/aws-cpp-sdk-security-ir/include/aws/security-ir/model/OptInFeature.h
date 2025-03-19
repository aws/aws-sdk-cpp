/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/security-ir/model/OptInFeatureName.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityIR
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/OptInFeature">AWS
   * API Reference</a></p>
   */
  class OptInFeature
  {
  public:
    AWS_SECURITYIR_API OptInFeature() = default;
    AWS_SECURITYIR_API OptInFeature(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API OptInFeature& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/>
     */
    inline OptInFeatureName GetFeatureName() const { return m_featureName; }
    inline bool FeatureNameHasBeenSet() const { return m_featureNameHasBeenSet; }
    inline void SetFeatureName(OptInFeatureName value) { m_featureNameHasBeenSet = true; m_featureName = value; }
    inline OptInFeature& WithFeatureName(OptInFeatureName value) { SetFeatureName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline bool GetIsEnabled() const { return m_isEnabled; }
    inline bool IsEnabledHasBeenSet() const { return m_isEnabledHasBeenSet; }
    inline void SetIsEnabled(bool value) { m_isEnabledHasBeenSet = true; m_isEnabled = value; }
    inline OptInFeature& WithIsEnabled(bool value) { SetIsEnabled(value); return *this;}
    ///@}
  private:

    OptInFeatureName m_featureName{OptInFeatureName::NOT_SET};
    bool m_featureNameHasBeenSet = false;

    bool m_isEnabled{false};
    bool m_isEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
