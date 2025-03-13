/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/RolesAnywhereRequest.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rolesanywhere/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RolesAnywhere
{
namespace Model
{

  /**
   */
  class ImportCrlRequest : public RolesAnywhereRequest
  {
  public:
    AWS_ROLESANYWHERE_API ImportCrlRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportCrl"; }

    AWS_ROLESANYWHERE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The x509 v3 specified certificate revocation list (CRL).</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCrlData() const { return m_crlData; }
    inline bool CrlDataHasBeenSet() const { return m_crlDataHasBeenSet; }
    template<typename CrlDataT = Aws::Utils::ByteBuffer>
    void SetCrlData(CrlDataT&& value) { m_crlDataHasBeenSet = true; m_crlData = std::forward<CrlDataT>(value); }
    template<typename CrlDataT = Aws::Utils::ByteBuffer>
    ImportCrlRequest& WithCrlData(CrlDataT&& value) { SetCrlData(std::forward<CrlDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the certificate revocation list (CRL) is enabled.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ImportCrlRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the certificate revocation list (CRL).</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ImportCrlRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to attach to the certificate revocation list (CRL).</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ImportCrlRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ImportCrlRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the TrustAnchor the certificate revocation list (CRL) will provide
     * revocation for.</p>
     */
    inline const Aws::String& GetTrustAnchorArn() const { return m_trustAnchorArn; }
    inline bool TrustAnchorArnHasBeenSet() const { return m_trustAnchorArnHasBeenSet; }
    template<typename TrustAnchorArnT = Aws::String>
    void SetTrustAnchorArn(TrustAnchorArnT&& value) { m_trustAnchorArnHasBeenSet = true; m_trustAnchorArn = std::forward<TrustAnchorArnT>(value); }
    template<typename TrustAnchorArnT = Aws::String>
    ImportCrlRequest& WithTrustAnchorArn(TrustAnchorArnT&& value) { SetTrustAnchorArn(std::forward<TrustAnchorArnT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_crlData{};
    bool m_crlDataHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_trustAnchorArn;
    bool m_trustAnchorArnHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
