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
    AWS_WELLARCHITECTED_API CreateLensVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLensVersion"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetLensAlias() const{ return m_lensAlias; }

    
    inline bool LensAliasHasBeenSet() const { return m_lensAliasHasBeenSet; }

    
    inline void SetLensAlias(const Aws::String& value) { m_lensAliasHasBeenSet = true; m_lensAlias = value; }

    
    inline void SetLensAlias(Aws::String&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::move(value); }

    
    inline void SetLensAlias(const char* value) { m_lensAliasHasBeenSet = true; m_lensAlias.assign(value); }

    
    inline CreateLensVersionRequest& WithLensAlias(const Aws::String& value) { SetLensAlias(value); return *this;}

    
    inline CreateLensVersionRequest& WithLensAlias(Aws::String&& value) { SetLensAlias(std::move(value)); return *this;}

    
    inline CreateLensVersionRequest& WithLensAlias(const char* value) { SetLensAlias(value); return *this;}


    /**
     * <p>The version of the lens being created.</p>
     */
    inline const Aws::String& GetLensVersion() const{ return m_lensVersion; }

    /**
     * <p>The version of the lens being created.</p>
     */
    inline bool LensVersionHasBeenSet() const { return m_lensVersionHasBeenSet; }

    /**
     * <p>The version of the lens being created.</p>
     */
    inline void SetLensVersion(const Aws::String& value) { m_lensVersionHasBeenSet = true; m_lensVersion = value; }

    /**
     * <p>The version of the lens being created.</p>
     */
    inline void SetLensVersion(Aws::String&& value) { m_lensVersionHasBeenSet = true; m_lensVersion = std::move(value); }

    /**
     * <p>The version of the lens being created.</p>
     */
    inline void SetLensVersion(const char* value) { m_lensVersionHasBeenSet = true; m_lensVersion.assign(value); }

    /**
     * <p>The version of the lens being created.</p>
     */
    inline CreateLensVersionRequest& WithLensVersion(const Aws::String& value) { SetLensVersion(value); return *this;}

    /**
     * <p>The version of the lens being created.</p>
     */
    inline CreateLensVersionRequest& WithLensVersion(Aws::String&& value) { SetLensVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the lens being created.</p>
     */
    inline CreateLensVersionRequest& WithLensVersion(const char* value) { SetLensVersion(value); return *this;}


    /**
     * <p>Set to true if this new major lens version.</p>
     */
    inline bool GetIsMajorVersion() const{ return m_isMajorVersion; }

    /**
     * <p>Set to true if this new major lens version.</p>
     */
    inline bool IsMajorVersionHasBeenSet() const { return m_isMajorVersionHasBeenSet; }

    /**
     * <p>Set to true if this new major lens version.</p>
     */
    inline void SetIsMajorVersion(bool value) { m_isMajorVersionHasBeenSet = true; m_isMajorVersion = value; }

    /**
     * <p>Set to true if this new major lens version.</p>
     */
    inline CreateLensVersionRequest& WithIsMajorVersion(bool value) { SetIsMajorVersion(value); return *this;}


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline CreateLensVersionRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline CreateLensVersionRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline CreateLensVersionRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_lensAlias;
    bool m_lensAliasHasBeenSet = false;

    Aws::String m_lensVersion;
    bool m_lensVersionHasBeenSet = false;

    bool m_isMajorVersion;
    bool m_isMajorVersionHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
