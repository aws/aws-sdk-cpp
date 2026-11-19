/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace PartnerCentralMarketing {
namespace Model {

/**
 * <p>A reference material that comes with a campaign template: a file the partner
 * downloads as-is.</p> <p>Not a blueprint: it carries no fields, cannot be
 * instantiated, and is not activated.</p> <p>Not the
 * <code>ReferenceMaterial</code> resource deleted on 2026-09-22 (its six
 * operations, ARN and record are gone). That was partner-uploaded and addressable;
 * this is AWS-authored template content with no identity of its own.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/ReferenceMaterial">AWS
 * API Reference</a></p>
 */
class ReferenceMaterial {
 public:
  AWS_PARTNERCENTRALMARKETING_API ReferenceMaterial() = default;
  AWS_PARTNERCENTRALMARKETING_API ReferenceMaterial(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API ReferenceMaterial& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The display name.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ReferenceMaterial& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A stable public CDN URL for the file. AWS-authored content, so it is not
   * presigned and carries no expiry — the same treatment as
   * <code>LayoutPreview.url</code>, and withheld on the same condition: absent while
   * the template's <code>EffectiveDateBegin</code> is in the future.</p>
   */
  inline const Aws::String& GetUrl() const { return m_url; }
  inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
  template <typename UrlT = Aws::String>
  void SetUrl(UrlT&& value) {
    m_urlHasBeenSet = true;
    m_url = std::forward<UrlT>(value);
  }
  template <typename UrlT = Aws::String>
  ReferenceMaterial& WithUrl(UrlT&& value) {
    SetUrl(std::forward<UrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_url;
  bool m_nameHasBeenSet = false;
  bool m_urlHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
