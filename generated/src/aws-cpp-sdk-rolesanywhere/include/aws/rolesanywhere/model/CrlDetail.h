/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
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
namespace RolesAnywhere
{
namespace Model
{

  /**
   * <p>The state of the certificate revocation list (CRL) after a read or write
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/CrlDetail">AWS
   * API Reference</a></p>
   */
  class CrlDetail
  {
  public:
    AWS_ROLESANYWHERE_API CrlDetail() = default;
    AWS_ROLESANYWHERE_API CrlDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API CrlDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ISO-8601 timestamp when the certificate revocation list (CRL) was
     * created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CrlDetail& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the certificate revocation list (CRL).</p>
     */
    inline const Aws::String& GetCrlArn() const { return m_crlArn; }
    inline bool CrlArnHasBeenSet() const { return m_crlArnHasBeenSet; }
    template<typename CrlArnT = Aws::String>
    void SetCrlArn(CrlArnT&& value) { m_crlArnHasBeenSet = true; m_crlArn = std::forward<CrlArnT>(value); }
    template<typename CrlArnT = Aws::String>
    CrlDetail& WithCrlArn(CrlArnT&& value) { SetCrlArn(std::forward<CrlArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the certificate revocation list (CRL) after a read or write
     * operation.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCrlData() const { return m_crlData; }
    inline bool CrlDataHasBeenSet() const { return m_crlDataHasBeenSet; }
    template<typename CrlDataT = Aws::Utils::ByteBuffer>
    void SetCrlData(CrlDataT&& value) { m_crlDataHasBeenSet = true; m_crlData = std::forward<CrlDataT>(value); }
    template<typename CrlDataT = Aws::Utils::ByteBuffer>
    CrlDetail& WithCrlData(CrlDataT&& value) { SetCrlData(std::forward<CrlDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the certificate revocation list (CRL).</p>
     */
    inline const Aws::String& GetCrlId() const { return m_crlId; }
    inline bool CrlIdHasBeenSet() const { return m_crlIdHasBeenSet; }
    template<typename CrlIdT = Aws::String>
    void SetCrlId(CrlIdT&& value) { m_crlIdHasBeenSet = true; m_crlId = std::forward<CrlIdT>(value); }
    template<typename CrlIdT = Aws::String>
    CrlDetail& WithCrlId(CrlIdT&& value) { SetCrlId(std::forward<CrlIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the certificate revocation list (CRL) is enabled.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline CrlDetail& WithEnabled(bool value) { SetEnabled(value); return *this;}
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
    CrlDetail& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the TrustAnchor the certificate revocation list (CRL) will provide
     * revocation for. </p>
     */
    inline const Aws::String& GetTrustAnchorArn() const { return m_trustAnchorArn; }
    inline bool TrustAnchorArnHasBeenSet() const { return m_trustAnchorArnHasBeenSet; }
    template<typename TrustAnchorArnT = Aws::String>
    void SetTrustAnchorArn(TrustAnchorArnT&& value) { m_trustAnchorArnHasBeenSet = true; m_trustAnchorArn = std::forward<TrustAnchorArnT>(value); }
    template<typename TrustAnchorArnT = Aws::String>
    CrlDetail& WithTrustAnchorArn(TrustAnchorArnT&& value) { SetTrustAnchorArn(std::forward<TrustAnchorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISO-8601 timestamp when the certificate revocation list (CRL) was last
     * updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    CrlDetail& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_crlArn;
    bool m_crlArnHasBeenSet = false;

    Aws::Utils::ByteBuffer m_crlData{};
    bool m_crlDataHasBeenSet = false;

    Aws::String m_crlId;
    bool m_crlIdHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_trustAnchorArn;
    bool m_trustAnchorArnHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
