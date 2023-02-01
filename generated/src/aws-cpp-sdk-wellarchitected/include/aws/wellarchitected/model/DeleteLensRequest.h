/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/LensStatusType.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace WellArchitected
{
namespace Model
{

  /**
   */
  class DeleteLensRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API DeleteLensRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteLens"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

    AWS_WELLARCHITECTED_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    
    inline const Aws::String& GetLensAlias() const{ return m_lensAlias; }

    
    inline bool LensAliasHasBeenSet() const { return m_lensAliasHasBeenSet; }

    
    inline void SetLensAlias(const Aws::String& value) { m_lensAliasHasBeenSet = true; m_lensAlias = value; }

    
    inline void SetLensAlias(Aws::String&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::move(value); }

    
    inline void SetLensAlias(const char* value) { m_lensAliasHasBeenSet = true; m_lensAlias.assign(value); }

    
    inline DeleteLensRequest& WithLensAlias(const Aws::String& value) { SetLensAlias(value); return *this;}

    
    inline DeleteLensRequest& WithLensAlias(Aws::String&& value) { SetLensAlias(std::move(value)); return *this;}

    
    inline DeleteLensRequest& WithLensAlias(const char* value) { SetLensAlias(value); return *this;}


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline DeleteLensRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline DeleteLensRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline DeleteLensRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The status of the lens to be deleted.</p>
     */
    inline const LensStatusType& GetLensStatus() const{ return m_lensStatus; }

    /**
     * <p>The status of the lens to be deleted.</p>
     */
    inline bool LensStatusHasBeenSet() const { return m_lensStatusHasBeenSet; }

    /**
     * <p>The status of the lens to be deleted.</p>
     */
    inline void SetLensStatus(const LensStatusType& value) { m_lensStatusHasBeenSet = true; m_lensStatus = value; }

    /**
     * <p>The status of the lens to be deleted.</p>
     */
    inline void SetLensStatus(LensStatusType&& value) { m_lensStatusHasBeenSet = true; m_lensStatus = std::move(value); }

    /**
     * <p>The status of the lens to be deleted.</p>
     */
    inline DeleteLensRequest& WithLensStatus(const LensStatusType& value) { SetLensStatus(value); return *this;}

    /**
     * <p>The status of the lens to be deleted.</p>
     */
    inline DeleteLensRequest& WithLensStatus(LensStatusType&& value) { SetLensStatus(std::move(value)); return *this;}

  private:

    Aws::String m_lensAlias;
    bool m_lensAliasHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    LensStatusType m_lensStatus;
    bool m_lensStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
