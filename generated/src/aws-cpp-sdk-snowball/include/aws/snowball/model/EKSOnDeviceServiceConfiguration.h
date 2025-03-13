/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>An object representing the metadata and configuration settings of EKS
   * Anywhere on the Snow Family device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/EKSOnDeviceServiceConfiguration">AWS
   * API Reference</a></p>
   */
  class EKSOnDeviceServiceConfiguration
  {
  public:
    AWS_SNOWBALL_API EKSOnDeviceServiceConfiguration() = default;
    AWS_SNOWBALL_API EKSOnDeviceServiceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API EKSOnDeviceServiceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Kubernetes version for EKS Anywhere on the Snow Family device.</p>
     */
    inline const Aws::String& GetKubernetesVersion() const { return m_kubernetesVersion; }
    inline bool KubernetesVersionHasBeenSet() const { return m_kubernetesVersionHasBeenSet; }
    template<typename KubernetesVersionT = Aws::String>
    void SetKubernetesVersion(KubernetesVersionT&& value) { m_kubernetesVersionHasBeenSet = true; m_kubernetesVersion = std::forward<KubernetesVersionT>(value); }
    template<typename KubernetesVersionT = Aws::String>
    EKSOnDeviceServiceConfiguration& WithKubernetesVersion(KubernetesVersionT&& value) { SetKubernetesVersion(std::forward<KubernetesVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional version of EKS Anywhere on the Snow Family device.</p>
     */
    inline const Aws::String& GetEKSAnywhereVersion() const { return m_eKSAnywhereVersion; }
    inline bool EKSAnywhereVersionHasBeenSet() const { return m_eKSAnywhereVersionHasBeenSet; }
    template<typename EKSAnywhereVersionT = Aws::String>
    void SetEKSAnywhereVersion(EKSAnywhereVersionT&& value) { m_eKSAnywhereVersionHasBeenSet = true; m_eKSAnywhereVersion = std::forward<EKSAnywhereVersionT>(value); }
    template<typename EKSAnywhereVersionT = Aws::String>
    EKSOnDeviceServiceConfiguration& WithEKSAnywhereVersion(EKSAnywhereVersionT&& value) { SetEKSAnywhereVersion(std::forward<EKSAnywhereVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_kubernetesVersion;
    bool m_kubernetesVersionHasBeenSet = false;

    Aws::String m_eKSAnywhereVersion;
    bool m_eKSAnywhereVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
