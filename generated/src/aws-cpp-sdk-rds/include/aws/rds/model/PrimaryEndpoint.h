/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/RDS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace RDS {
namespace Model {

/**
 * <p>Contains the information you need to connect to the DB instance that
 * currently has the primary role. The endpoint stays the same when the primary
 * role moves to another DB instance, so you don't have to connect to a different
 * DNS name after a switchover.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/PrimaryEndpoint">AWS
 * API Reference</a></p>
 */
class PrimaryEndpoint {
 public:
  AWS_RDS_API PrimaryEndpoint() = default;
  AWS_RDS_API PrimaryEndpoint(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RDS_API PrimaryEndpoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>Specifies the DNS address of the DB instance that currently has the primary
   * role. This address doesn't change when the DB instance is renamed.</p>
   */
  inline const Aws::String& GetAddress() const { return m_address; }
  inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
  template <typename AddressT = Aws::String>
  void SetAddress(AddressT&& value) {
    m_addressHasBeenSet = true;
    m_address = std::forward<AddressT>(value);
  }
  template <typename AddressT = Aws::String>
  PrimaryEndpoint& WithAddress(AddressT&& value) {
    SetAddress(std::forward<AddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
   * zone.</p>
   */
  inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
  inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
  template <typename HostedZoneIdT = Aws::String>
  void SetHostedZoneId(HostedZoneIdT&& value) {
    m_hostedZoneIdHasBeenSet = true;
    m_hostedZoneId = std::forward<HostedZoneIdT>(value);
  }
  template <typename HostedZoneIdT = Aws::String>
  PrimaryEndpoint& WithHostedZoneId(HostedZoneIdT&& value) {
    SetHostedZoneId(std::forward<HostedZoneIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_address;

  Aws::String m_hostedZoneId;
  bool m_addressHasBeenSet = false;
  bool m_hostedZoneIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
