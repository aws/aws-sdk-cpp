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
    AWS_SNOWBALL_API EKSOnDeviceServiceConfiguration();
    AWS_SNOWBALL_API EKSOnDeviceServiceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API EKSOnDeviceServiceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Kubernetes version for EKS Anywhere on the Snow Family device.</p>
     */
    inline const Aws::String& GetKubernetesVersion() const{ return m_kubernetesVersion; }

    /**
     * <p>The Kubernetes version for EKS Anywhere on the Snow Family device.</p>
     */
    inline bool KubernetesVersionHasBeenSet() const { return m_kubernetesVersionHasBeenSet; }

    /**
     * <p>The Kubernetes version for EKS Anywhere on the Snow Family device.</p>
     */
    inline void SetKubernetesVersion(const Aws::String& value) { m_kubernetesVersionHasBeenSet = true; m_kubernetesVersion = value; }

    /**
     * <p>The Kubernetes version for EKS Anywhere on the Snow Family device.</p>
     */
    inline void SetKubernetesVersion(Aws::String&& value) { m_kubernetesVersionHasBeenSet = true; m_kubernetesVersion = std::move(value); }

    /**
     * <p>The Kubernetes version for EKS Anywhere on the Snow Family device.</p>
     */
    inline void SetKubernetesVersion(const char* value) { m_kubernetesVersionHasBeenSet = true; m_kubernetesVersion.assign(value); }

    /**
     * <p>The Kubernetes version for EKS Anywhere on the Snow Family device.</p>
     */
    inline EKSOnDeviceServiceConfiguration& WithKubernetesVersion(const Aws::String& value) { SetKubernetesVersion(value); return *this;}

    /**
     * <p>The Kubernetes version for EKS Anywhere on the Snow Family device.</p>
     */
    inline EKSOnDeviceServiceConfiguration& WithKubernetesVersion(Aws::String&& value) { SetKubernetesVersion(std::move(value)); return *this;}

    /**
     * <p>The Kubernetes version for EKS Anywhere on the Snow Family device.</p>
     */
    inline EKSOnDeviceServiceConfiguration& WithKubernetesVersion(const char* value) { SetKubernetesVersion(value); return *this;}


    /**
     * <p>The optional version of EKS Anywhere on the Snow Family device.</p>
     */
    inline const Aws::String& GetEKSAnywhereVersion() const{ return m_eKSAnywhereVersion; }

    /**
     * <p>The optional version of EKS Anywhere on the Snow Family device.</p>
     */
    inline bool EKSAnywhereVersionHasBeenSet() const { return m_eKSAnywhereVersionHasBeenSet; }

    /**
     * <p>The optional version of EKS Anywhere on the Snow Family device.</p>
     */
    inline void SetEKSAnywhereVersion(const Aws::String& value) { m_eKSAnywhereVersionHasBeenSet = true; m_eKSAnywhereVersion = value; }

    /**
     * <p>The optional version of EKS Anywhere on the Snow Family device.</p>
     */
    inline void SetEKSAnywhereVersion(Aws::String&& value) { m_eKSAnywhereVersionHasBeenSet = true; m_eKSAnywhereVersion = std::move(value); }

    /**
     * <p>The optional version of EKS Anywhere on the Snow Family device.</p>
     */
    inline void SetEKSAnywhereVersion(const char* value) { m_eKSAnywhereVersionHasBeenSet = true; m_eKSAnywhereVersion.assign(value); }

    /**
     * <p>The optional version of EKS Anywhere on the Snow Family device.</p>
     */
    inline EKSOnDeviceServiceConfiguration& WithEKSAnywhereVersion(const Aws::String& value) { SetEKSAnywhereVersion(value); return *this;}

    /**
     * <p>The optional version of EKS Anywhere on the Snow Family device.</p>
     */
    inline EKSOnDeviceServiceConfiguration& WithEKSAnywhereVersion(Aws::String&& value) { SetEKSAnywhereVersion(std::move(value)); return *this;}

    /**
     * <p>The optional version of EKS Anywhere on the Snow Family device.</p>
     */
    inline EKSOnDeviceServiceConfiguration& WithEKSAnywhereVersion(const char* value) { SetEKSAnywhereVersion(value); return *this;}

  private:

    Aws::String m_kubernetesVersion;
    bool m_kubernetesVersionHasBeenSet = false;

    Aws::String m_eKSAnywhereVersion;
    bool m_eKSAnywhereVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
