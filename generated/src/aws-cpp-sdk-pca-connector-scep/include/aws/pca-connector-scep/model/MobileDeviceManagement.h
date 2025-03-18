/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-scep/PcaConnectorScep_EXPORTS.h>
#include <aws/pca-connector-scep/model/IntuneConfiguration.h>
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
namespace PcaConnectorScep
{
namespace Model
{

  /**
   * <p>If you don't supply a value, by default Connector for SCEP creates a
   * connector for general-purpose use. A general-purpose connector is designed to
   * work with clients or endpoints that support the SCEP protocol, except Connector
   * for SCEP for Microsoft Intune. For information about considerations and
   * limitations with using Connector for SCEP, see <a
   * href="https://docs.aws.amazon.com/privateca/latest/userguide/scep-connector.htmlc4scep-considerations-limitations.html">Considerations
   * and Limitations</a>.</p> <p>If you provide an <code>IntuneConfiguration</code>,
   * Connector for SCEP creates a connector for use with Microsoft Intune, and you
   * manage the challenge passwords using Microsoft Intune. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/privateca/latest/userguide/scep-connector.htmlconnector-for-scep-intune.html">Using
   * Connector for SCEP for Microsoft Intune</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-scep-2018-05-10/MobileDeviceManagement">AWS
   * API Reference</a></p>
   */
  class MobileDeviceManagement
  {
  public:
    AWS_PCACONNECTORSCEP_API MobileDeviceManagement() = default;
    AWS_PCACONNECTORSCEP_API MobileDeviceManagement(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORSCEP_API MobileDeviceManagement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORSCEP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration settings for use with Microsoft Intune. For information about
     * using Connector for SCEP for Microsoft Intune, see <a
     * href="https://docs.aws.amazon.com/privateca/latest/userguide/scep-connector.htmlconnector-for-scep-intune.html">Using
     * Connector for SCEP for Microsoft Intune</a>.</p>
     */
    inline const IntuneConfiguration& GetIntune() const { return m_intune; }
    inline bool IntuneHasBeenSet() const { return m_intuneHasBeenSet; }
    template<typename IntuneT = IntuneConfiguration>
    void SetIntune(IntuneT&& value) { m_intuneHasBeenSet = true; m_intune = std::forward<IntuneT>(value); }
    template<typename IntuneT = IntuneConfiguration>
    MobileDeviceManagement& WithIntune(IntuneT&& value) { SetIntune(std::forward<IntuneT>(value)); return *this;}
    ///@}
  private:

    IntuneConfiguration m_intune;
    bool m_intuneHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorScep
} // namespace Aws
