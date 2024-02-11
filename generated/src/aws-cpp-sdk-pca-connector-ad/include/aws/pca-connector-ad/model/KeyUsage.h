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
    AWS_PCACONNECTORAD_API KeyUsage();
    AWS_PCACONNECTORAD_API KeyUsage(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API KeyUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Sets the key usage extension to critical.</p>
     */
    inline bool GetCritical() const{ return m_critical; }

    /**
     * <p>Sets the key usage extension to critical.</p>
     */
    inline bool CriticalHasBeenSet() const { return m_criticalHasBeenSet; }

    /**
     * <p>Sets the key usage extension to critical.</p>
     */
    inline void SetCritical(bool value) { m_criticalHasBeenSet = true; m_critical = value; }

    /**
     * <p>Sets the key usage extension to critical.</p>
     */
    inline KeyUsage& WithCritical(bool value) { SetCritical(value); return *this;}


    /**
     * <p>The key usage flags represent the purpose (e.g., encipherment, signature) of
     * the key contained in the certificate.</p>
     */
    inline const KeyUsageFlags& GetUsageFlags() const{ return m_usageFlags; }

    /**
     * <p>The key usage flags represent the purpose (e.g., encipherment, signature) of
     * the key contained in the certificate.</p>
     */
    inline bool UsageFlagsHasBeenSet() const { return m_usageFlagsHasBeenSet; }

    /**
     * <p>The key usage flags represent the purpose (e.g., encipherment, signature) of
     * the key contained in the certificate.</p>
     */
    inline void SetUsageFlags(const KeyUsageFlags& value) { m_usageFlagsHasBeenSet = true; m_usageFlags = value; }

    /**
     * <p>The key usage flags represent the purpose (e.g., encipherment, signature) of
     * the key contained in the certificate.</p>
     */
    inline void SetUsageFlags(KeyUsageFlags&& value) { m_usageFlagsHasBeenSet = true; m_usageFlags = std::move(value); }

    /**
     * <p>The key usage flags represent the purpose (e.g., encipherment, signature) of
     * the key contained in the certificate.</p>
     */
    inline KeyUsage& WithUsageFlags(const KeyUsageFlags& value) { SetUsageFlags(value); return *this;}

    /**
     * <p>The key usage flags represent the purpose (e.g., encipherment, signature) of
     * the key contained in the certificate.</p>
     */
    inline KeyUsage& WithUsageFlags(KeyUsageFlags&& value) { SetUsageFlags(std::move(value)); return *this;}

  private:

    bool m_critical;
    bool m_criticalHasBeenSet = false;

    KeyUsageFlags m_usageFlags;
    bool m_usageFlagsHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
