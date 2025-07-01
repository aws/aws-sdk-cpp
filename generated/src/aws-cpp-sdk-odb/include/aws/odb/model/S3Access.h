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
   * <p>The configuration for Amazon S3 access from the ODB network.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/S3Access">AWS API
   * Reference</a></p>
   */
  class S3Access
  {
  public:
    AWS_ODB_API S3Access() = default;
    AWS_ODB_API S3Access(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API S3Access& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the Amazon S3 access.</p> <p>Valid Values: <code>enabled |
     * disabled</code> </p>
     */
    inline ManagedResourceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ManagedResourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline S3Access& WithStatus(ManagedResourceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 addresses for the Amazon S3 access.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpv4Addresses() const { return m_ipv4Addresses; }
    inline bool Ipv4AddressesHasBeenSet() const { return m_ipv4AddressesHasBeenSet; }
    template<typename Ipv4AddressesT = Aws::Vector<Aws::String>>
    void SetIpv4Addresses(Ipv4AddressesT&& value) { m_ipv4AddressesHasBeenSet = true; m_ipv4Addresses = std::forward<Ipv4AddressesT>(value); }
    template<typename Ipv4AddressesT = Aws::Vector<Aws::String>>
    S3Access& WithIpv4Addresses(Ipv4AddressesT&& value) { SetIpv4Addresses(std::forward<Ipv4AddressesT>(value)); return *this;}
    template<typename Ipv4AddressesT = Aws::String>
    S3Access& AddIpv4Addresses(Ipv4AddressesT&& value) { m_ipv4AddressesHasBeenSet = true; m_ipv4Addresses.emplace_back(std::forward<Ipv4AddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The domain name for the Amazon S3 access.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    S3Access& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint policy for the Amazon S3 access.</p>
     */
    inline const Aws::String& GetS3PolicyDocument() const { return m_s3PolicyDocument; }
    inline bool S3PolicyDocumentHasBeenSet() const { return m_s3PolicyDocumentHasBeenSet; }
    template<typename S3PolicyDocumentT = Aws::String>
    void SetS3PolicyDocument(S3PolicyDocumentT&& value) { m_s3PolicyDocumentHasBeenSet = true; m_s3PolicyDocument = std::forward<S3PolicyDocumentT>(value); }
    template<typename S3PolicyDocumentT = Aws::String>
    S3Access& WithS3PolicyDocument(S3PolicyDocumentT&& value) { SetS3PolicyDocument(std::forward<S3PolicyDocumentT>(value)); return *this;}
    ///@}
  private:

    ManagedResourceStatus m_status{ManagedResourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipv4Addresses;
    bool m_ipv4AddressesHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_s3PolicyDocument;
    bool m_s3PolicyDocumentHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
