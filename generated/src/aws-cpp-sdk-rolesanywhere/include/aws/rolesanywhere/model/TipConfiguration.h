/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/model/TipStatus.h>
#include <aws/rolesanywhere/model/TipSubjectSource.h>
#include <aws/rolesanywhere/model/TipSubjectType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RolesAnywhere {
namespace Model {

/**
 * <p>The trusted identity propagation (TIP) settings of a profile. When you enable
 * TIP, sessions from the profile include the identity from the certificate in
 * <code>aws:OriginIdentity</code> condition keys, which callers can't
 * set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/TipConfiguration">AWS
 * API Reference</a></p>
 */
class TipConfiguration {
 public:
  AWS_ROLESANYWHERE_API TipConfiguration() = default;
  AWS_ROLESANYWHERE_API TipConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROLESANYWHERE_API TipConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROLESANYWHERE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether you use trusted identity propagation (TIP) for the profile.
   * This field supports the following values:</p> <ul> <li> <p> <code>ENABLED</code>
   * – Sessions from the profile include the <code>aws:OriginIdentity</code>
   * condition keys.</p> </li> <li> <p> <code>DISABLED</code> – Sessions from the
   * profile don't include these keys.</p> </li> </ul>
   */
  inline TipStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(TipStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline TipConfiguration& WithStatus(TipStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the certificates for the profile identify workloads or
   * people. This field supports the following values:</p> <ul> <li> <p>
   * <code>workload</code> – The certificates identify workloads.</p> </li> <li> <p>
   * <code>user</code> – The certificates identify people.</p> </li> </ul>
   * <p>Sessions include the value in <code>aws:OriginIdentity/SubjectType</code>. If
   * you omit this field, sessions don't include that key.</p>
   */
  inline TipSubjectType GetSubjectType() const { return m_subjectType; }
  inline bool SubjectTypeHasBeenSet() const { return m_subjectTypeHasBeenSet; }
  inline void SetSubjectType(TipSubjectType value) {
    m_subjectTypeHasBeenSet = true;
    m_subjectType = value;
  }
  inline TipConfiguration& WithSubjectType(TipSubjectType value) {
    SetSubjectType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The certificate field whose value becomes the subject,
   * <code>aws:OriginIdentity/Subject</code>. This field supports the following
   * values:</p> <ul> <li> <p> <code>x509Subject/CN</code> (default) – The common
   * name (CN) in the certificate's Subject.</p> </li> <li> <p>
   * <code>x509SAN/URI</code> – The first URI in the certificate's Subject
   * Alternative Name (SAN) extension.</p> </li> </ul> <p>The profile's attribute
   * mappings must include a rule for this field, and the default attribute mappings
   * include one for each value. If the certificate has no value for the field,
   * <code>CreateSession</code> denies the request.</p>
   */
  inline TipSubjectSource GetSubjectSource() const { return m_subjectSource; }
  inline bool SubjectSourceHasBeenSet() const { return m_subjectSourceHasBeenSet; }
  inline void SetSubjectSource(TipSubjectSource value) {
    m_subjectSourceHasBeenSet = true;
    m_subjectSource = value;
  }
  inline TipConfiguration& WithSubjectSource(TipSubjectSource value) {
    SetSubjectSource(value);
    return *this;
  }
  ///@}
 private:
  TipStatus m_status{TipStatus::NOT_SET};

  TipSubjectType m_subjectType{TipSubjectType::NOT_SET};

  TipSubjectSource m_subjectSource{TipSubjectSource::NOT_SET};
  bool m_statusHasBeenSet = false;
  bool m_subjectTypeHasBeenSet = false;
  bool m_subjectSourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace RolesAnywhere
}  // namespace Aws
