/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/ManagedResourceStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace odb
{
namespace Model
{

  /**
   * <p>The configuration for managed Amazon S3 backup access from the ODB
   * network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ManagedS3BackupAccess">AWS
   * API Reference</a></p>
   */
  class ManagedS3BackupAccess
  {
  public:
    AWS_ODB_API ManagedS3BackupAccess() = default;
    AWS_ODB_API ManagedS3BackupAccess(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API ManagedS3BackupAccess& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the managed Amazon S3 backup access.</p> <p>Valid Values:
     * <code>enabled | disabled</code> </p>
     */
    inline ManagedResourceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ManagedResourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ManagedS3BackupAccess& WithStatus(ManagedResourceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 addresses for the managed Amazon S3 backup access.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpv4Addresses() const { return m_ipv4Addresses; }
    inline bool Ipv4AddressesHasBeenSet() const { return m_ipv4AddressesHasBeenSet; }
    template<typename Ipv4AddressesT = Aws::Vector<Aws::String>>
    void SetIpv4Addresses(Ipv4AddressesT&& value) { m_ipv4AddressesHasBeenSet = true; m_ipv4Addresses = std::forward<Ipv4AddressesT>(value); }
    template<typename Ipv4AddressesT = Aws::Vector<Aws::String>>
    ManagedS3BackupAccess& WithIpv4Addresses(Ipv4AddressesT&& value) { SetIpv4Addresses(std::forward<Ipv4AddressesT>(value)); return *this;}
    template<typename Ipv4AddressesT = Aws::String>
    ManagedS3BackupAccess& AddIpv4Addresses(Ipv4AddressesT&& value) { m_ipv4AddressesHasBeenSet = true; m_ipv4Addresses.emplace_back(std::forward<Ipv4AddressesT>(value)); return *this; }
    ///@}
  private:

    ManagedResourceStatus m_status{ManagedResourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipv4Addresses;
    bool m_ipv4AddressesHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
