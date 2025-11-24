/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/Connect.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace Redshift {
namespace Model {

/**
 * <p>A union structure that defines the scope of Amazon Redshift service
 * integrations. Contains configuration for different integration types such as
 * Amazon Redshift.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/RedshiftScopeUnion">AWS
 * API Reference</a></p>
 */
class RedshiftScopeUnion {
 public:
  AWS_REDSHIFT_API RedshiftScopeUnion() = default;
  AWS_REDSHIFT_API RedshiftScopeUnion(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_REDSHIFT_API RedshiftScopeUnion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The Amazon Redshift connect integration scope configuration. Defines
   * authorization settings for Amazon Redshift connect service integration.</p>
   */
  inline const Connect& GetConnect() const { return m_connect; }
  inline bool ConnectHasBeenSet() const { return m_connectHasBeenSet; }
  template <typename ConnectT = Connect>
  void SetConnect(ConnectT&& value) {
    m_connectHasBeenSet = true;
    m_connect = std::forward<ConnectT>(value);
  }
  template <typename ConnectT = Connect>
  RedshiftScopeUnion& WithConnect(ConnectT&& value) {
    SetConnect(std::forward<ConnectT>(value));
    return *this;
  }
  ///@}
 private:
  Connect m_connect;
  bool m_connectHasBeenSet = false;
};

}  // namespace Model
}  // namespace Redshift
}  // namespace Aws
