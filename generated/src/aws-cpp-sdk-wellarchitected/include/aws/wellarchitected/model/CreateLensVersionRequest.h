/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

  /**
   */
  class CreateLensVersionRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API CreateLensVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLensVersion"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetLensAlias() const { return m_lensAlias; }
    inline bool LensAliasHasBeenSet() const { return m_lensAliasHasBeenSet; }
    template<typename LensAliasT = Aws::String>
    void SetLensAlias(LensAliasT&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::forward<LensAliasT>(value); }
    template<typename LensAliasT = Aws::String>
    CreateLensVersionRequest& WithLensAlias(LensAliasT&& value) { SetLensAlias(std::forward<LensAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the lens being created.</p>
     */
    inline const Aws::String& GetLensVersion() const { return m_lensVersion; }
    inline bool LensVersionHasBeenSet() const { return m_lensVersionHasBeenSet; }
    template<typename LensVersionT = Aws::String>
    void SetLensVersion(LensVersionT&& value) { m_lensVersionHasBeenSet = true; m_lensVersion = std::forward<LensVersionT>(value); }
    template<typename LensVersionT = Aws::String>
    CreateLensVersionRequest& WithLensVersion(LensVersionT&& value) { SetLensVersion(std::forward<LensVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to true if this new major lens version.</p>
     */
    inline bool GetIsMajorVersion() const { return m_isMajorVersion; }
    inline bool IsMajorVersionHasBeenSet() const { return m_isMajorVersionHasBeenSet; }
    inline void SetIsMajorVersion(bool value) { m_isMajorVersionHasBeenSet = true; m_isMajorVersion = value; }
    inline CreateLensVersionRequest& WithIsMajorVersion(bool value) { SetIsMajorVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateLensVersionRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lensAlias;
    bool m_lensAliasHasBeenSet = false;

    Aws::String m_lensVersion;
    bool m_lensVersionHasBeenSet = false;

    bool m_isMajorVersion{false};
    bool m_isMajorVersionHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
