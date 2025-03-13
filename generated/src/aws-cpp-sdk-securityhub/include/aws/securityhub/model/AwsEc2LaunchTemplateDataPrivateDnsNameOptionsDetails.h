/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Describes the options for Amazon EC2 instance hostnames. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataPrivateDnsNameOptionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataPrivateDnsNameOptionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataPrivateDnsNameOptionsDetails() = default;
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataPrivateDnsNameOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataPrivateDnsNameOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indicates whether to respond to DNS queries for instance hostnames with DNS
     * AAAA records. </p>
     */
    inline bool GetEnableResourceNameDnsAAAARecord() const { return m_enableResourceNameDnsAAAARecord; }
    inline bool EnableResourceNameDnsAAAARecordHasBeenSet() const { return m_enableResourceNameDnsAAAARecordHasBeenSet; }
    inline void SetEnableResourceNameDnsAAAARecord(bool value) { m_enableResourceNameDnsAAAARecordHasBeenSet = true; m_enableResourceNameDnsAAAARecord = value; }
    inline AwsEc2LaunchTemplateDataPrivateDnsNameOptionsDetails& WithEnableResourceNameDnsAAAARecord(bool value) { SetEnableResourceNameDnsAAAARecord(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether to respond to DNS queries for instance hostnames with DNS
     * A records. </p>
     */
    inline bool GetEnableResourceNameDnsARecord() const { return m_enableResourceNameDnsARecord; }
    inline bool EnableResourceNameDnsARecordHasBeenSet() const { return m_enableResourceNameDnsARecordHasBeenSet; }
    inline void SetEnableResourceNameDnsARecord(bool value) { m_enableResourceNameDnsARecordHasBeenSet = true; m_enableResourceNameDnsARecord = value; }
    inline AwsEc2LaunchTemplateDataPrivateDnsNameOptionsDetails& WithEnableResourceNameDnsARecord(bool value) { SetEnableResourceNameDnsARecord(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of hostname for EC2 instances. </p>
     */
    inline const Aws::String& GetHostnameType() const { return m_hostnameType; }
    inline bool HostnameTypeHasBeenSet() const { return m_hostnameTypeHasBeenSet; }
    template<typename HostnameTypeT = Aws::String>
    void SetHostnameType(HostnameTypeT&& value) { m_hostnameTypeHasBeenSet = true; m_hostnameType = std::forward<HostnameTypeT>(value); }
    template<typename HostnameTypeT = Aws::String>
    AwsEc2LaunchTemplateDataPrivateDnsNameOptionsDetails& WithHostnameType(HostnameTypeT&& value) { SetHostnameType(std::forward<HostnameTypeT>(value)); return *this;}
    ///@}
  private:

    bool m_enableResourceNameDnsAAAARecord{false};
    bool m_enableResourceNameDnsAAAARecordHasBeenSet = false;

    bool m_enableResourceNameDnsARecord{false};
    bool m_enableResourceNameDnsARecordHasBeenSet = false;

    Aws::String m_hostnameType;
    bool m_hostnameTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
