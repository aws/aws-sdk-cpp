/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/model/HostnameTypeEnum.h>
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
namespace WorkspacesInstances
{
namespace Model
{

  /**
   * <p>Configures private DNS name settings for WorkSpace Instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/PrivateDnsNameOptionsRequest">AWS
   * API Reference</a></p>
   */
  class PrivateDnsNameOptionsRequest
  {
  public:
    AWS_WORKSPACESINSTANCES_API PrivateDnsNameOptionsRequest() = default;
    AWS_WORKSPACESINSTANCES_API PrivateDnsNameOptionsRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API PrivateDnsNameOptionsRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the type of hostname configuration.</p>
     */
    inline HostnameTypeEnum GetHostnameType() const { return m_hostnameType; }
    inline bool HostnameTypeHasBeenSet() const { return m_hostnameTypeHasBeenSet; }
    inline void SetHostnameType(HostnameTypeEnum value) { m_hostnameTypeHasBeenSet = true; m_hostnameType = value; }
    inline PrivateDnsNameOptionsRequest& WithHostnameType(HostnameTypeEnum value) { SetHostnameType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables DNS A record for resource name resolution.</p>
     */
    inline bool GetEnableResourceNameDnsARecord() const { return m_enableResourceNameDnsARecord; }
    inline bool EnableResourceNameDnsARecordHasBeenSet() const { return m_enableResourceNameDnsARecordHasBeenSet; }
    inline void SetEnableResourceNameDnsARecord(bool value) { m_enableResourceNameDnsARecordHasBeenSet = true; m_enableResourceNameDnsARecord = value; }
    inline PrivateDnsNameOptionsRequest& WithEnableResourceNameDnsARecord(bool value) { SetEnableResourceNameDnsARecord(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables DNS AAAA record for resource name resolution.</p>
     */
    inline bool GetEnableResourceNameDnsAAAARecord() const { return m_enableResourceNameDnsAAAARecord; }
    inline bool EnableResourceNameDnsAAAARecordHasBeenSet() const { return m_enableResourceNameDnsAAAARecordHasBeenSet; }
    inline void SetEnableResourceNameDnsAAAARecord(bool value) { m_enableResourceNameDnsAAAARecordHasBeenSet = true; m_enableResourceNameDnsAAAARecord = value; }
    inline PrivateDnsNameOptionsRequest& WithEnableResourceNameDnsAAAARecord(bool value) { SetEnableResourceNameDnsAAAARecord(value); return *this;}
    ///@}
  private:

    HostnameTypeEnum m_hostnameType{HostnameTypeEnum::NOT_SET};
    bool m_hostnameTypeHasBeenSet = false;

    bool m_enableResourceNameDnsARecord{false};
    bool m_enableResourceNameDnsARecordHasBeenSet = false;

    bool m_enableResourceNameDnsAAAARecord{false};
    bool m_enableResourceNameDnsAAAARecordHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
