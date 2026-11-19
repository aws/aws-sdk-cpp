/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sts/STS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace STS {
namespace Model {

/**
 * <p>Identifiers for the scoped session that <code>GetScopedCredentials</code>
 * returns. The underlying identity and session name do not change from the caller
 * principal.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sts-2011-06-15/ScopedSession">AWS
 * API Reference</a></p>
 */
class ScopedSession {
 public:
  AWS_STS_API ScopedSession() = default;
  AWS_STS_API ScopedSession(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_STS_API ScopedSession& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_STS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_STS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>A unique identifier for the scoped session. Because the identity is
   * preserved, this identifies the same principal as the calling session.</p>
   */
  inline const Aws::String& GetScopedSessionId() const { return m_scopedSessionId; }
  inline bool ScopedSessionIdHasBeenSet() const { return m_scopedSessionIdHasBeenSet; }
  template <typename ScopedSessionIdT = Aws::String>
  void SetScopedSessionId(ScopedSessionIdT&& value) {
    m_scopedSessionIdHasBeenSet = true;
    m_scopedSessionId = std::forward<ScopedSessionIdT>(value);
  }
  template <typename ScopedSessionIdT = Aws::String>
  ScopedSession& WithScopedSessionId(ScopedSessionIdT&& value) {
    SetScopedSessionId(std::forward<ScopedSessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the scoped session. For more information about ARNs and how to use
   * them in policies, see <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
   * Identifiers</a> in the <i>IAM User Guide</i>.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  ScopedSession& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_scopedSessionId;

  Aws::String m_arn;
  bool m_scopedSessionIdHasBeenSet = false;
  bool m_arnHasBeenSet = false;
};

}  // namespace Model
}  // namespace STS
}  // namespace Aws
