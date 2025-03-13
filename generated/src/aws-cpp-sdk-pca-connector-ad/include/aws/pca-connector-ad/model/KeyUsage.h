/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/model/KeyUsageFlags.h>
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
namespace PcaConnectorAd
{
namespace Model
{

  /**
   * <p>The key usage extension defines the purpose (e.g., encipherment, signature)
   * of the key contained in the certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/KeyUsage">AWS
   * API Reference</a></p>
   */
  class KeyUsage
  {
  public:
    AWS_PCACONNECTORAD_API KeyUsage() = default;
    AWS_PCACONNECTORAD_API KeyUsage(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API KeyUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Sets the key usage extension to critical.</p>
     */
    inline bool GetCritical() const { return m_critical; }
    inline bool CriticalHasBeenSet() const { return m_criticalHasBeenSet; }
    inline void SetCritical(bool value) { m_criticalHasBeenSet = true; m_critical = value; }
    inline KeyUsage& WithCritical(bool value) { SetCritical(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key usage flags represent the purpose (e.g., encipherment, signature) of
     * the key contained in the certificate.</p>
     */
    inline const KeyUsageFlags& GetUsageFlags() const { return m_usageFlags; }
    inline bool UsageFlagsHasBeenSet() const { return m_usageFlagsHasBeenSet; }
    template<typename UsageFlagsT = KeyUsageFlags>
    void SetUsageFlags(UsageFlagsT&& value) { m_usageFlagsHasBeenSet = true; m_usageFlags = std::forward<UsageFlagsT>(value); }
    template<typename UsageFlagsT = KeyUsageFlags>
    KeyUsage& WithUsageFlags(UsageFlagsT&& value) { SetUsageFlags(std::forward<UsageFlagsT>(value)); return *this;}
    ///@}
  private:

    bool m_critical{false};
    bool m_criticalHasBeenSet = false;

    KeyUsageFlags m_usageFlags;
    bool m_usageFlagsHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
