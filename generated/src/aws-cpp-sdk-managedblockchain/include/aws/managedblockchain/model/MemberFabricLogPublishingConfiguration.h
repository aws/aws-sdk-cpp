/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/LogConfigurations.h>
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
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p>Configuration properties for logging events associated with a member of a
   * Managed Blockchain network using the Hyperledger Fabric framework.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/MemberFabricLogPublishingConfiguration">AWS
   * API Reference</a></p>
   */
  class MemberFabricLogPublishingConfiguration
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API MemberFabricLogPublishingConfiguration() = default;
    AWS_MANAGEDBLOCKCHAIN_API MemberFabricLogPublishingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API MemberFabricLogPublishingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration properties for logging events associated with a member's
     * Certificate Authority (CA). CA logs help you determine when a member in your
     * account joins the network, or when new peers register with a member CA.</p>
     */
    inline const LogConfigurations& GetCaLogs() const { return m_caLogs; }
    inline bool CaLogsHasBeenSet() const { return m_caLogsHasBeenSet; }
    template<typename CaLogsT = LogConfigurations>
    void SetCaLogs(CaLogsT&& value) { m_caLogsHasBeenSet = true; m_caLogs = std::forward<CaLogsT>(value); }
    template<typename CaLogsT = LogConfigurations>
    MemberFabricLogPublishingConfiguration& WithCaLogs(CaLogsT&& value) { SetCaLogs(std::forward<CaLogsT>(value)); return *this;}
    ///@}
  private:

    LogConfigurations m_caLogs;
    bool m_caLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
