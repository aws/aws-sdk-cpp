/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class ImportLensRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API ImportLensRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportLens"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetLensAlias() const{ return m_lensAlias; }

    
    inline bool LensAliasHasBeenSet() const { return m_lensAliasHasBeenSet; }

    
    inline void SetLensAlias(const Aws::String& value) { m_lensAliasHasBeenSet = true; m_lensAlias = value; }

    
    inline void SetLensAlias(Aws::String&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::move(value); }

    
    inline void SetLensAlias(const char* value) { m_lensAliasHasBeenSet = true; m_lensAlias.assign(value); }

    
    inline ImportLensRequest& WithLensAlias(const Aws::String& value) { SetLensAlias(value); return *this;}

    
    inline ImportLensRequest& WithLensAlias(Aws::String&& value) { SetLensAlias(std::move(value)); return *this;}

    
    inline ImportLensRequest& WithLensAlias(const char* value) { SetLensAlias(value); return *this;}


    /**
     * <p>The JSON representation of a lens.</p>
     */
    inline const Aws::String& GetJSONString() const{ return m_jSONString; }

    /**
     * <p>The JSON representation of a lens.</p>
     */
    inline bool JSONStringHasBeenSet() const { return m_jSONStringHasBeenSet; }

    /**
     * <p>The JSON representation of a lens.</p>
     */
    inline void SetJSONString(const Aws::String& value) { m_jSONStringHasBeenSet = true; m_jSONString = value; }

    /**
     * <p>The JSON representation of a lens.</p>
     */
    inline void SetJSONString(Aws::String&& value) { m_jSONStringHasBeenSet = true; m_jSONString = std::move(value); }

    /**
     * <p>The JSON representation of a lens.</p>
     */
    inline void SetJSONString(const char* value) { m_jSONStringHasBeenSet = true; m_jSONString.assign(value); }

    /**
     * <p>The JSON representation of a lens.</p>
     */
    inline ImportLensRequest& WithJSONString(const Aws::String& value) { SetJSONString(value); return *this;}

    /**
     * <p>The JSON representation of a lens.</p>
     */
    inline ImportLensRequest& WithJSONString(Aws::String&& value) { SetJSONString(std::move(value)); return *this;}

    /**
     * <p>The JSON representation of a lens.</p>
     */
    inline ImportLensRequest& WithJSONString(const char* value) { SetJSONString(value); return *this;}


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline ImportLensRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline ImportLensRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline ImportLensRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>Tags to associate to a lens.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to associate to a lens.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to associate to a lens.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to associate to a lens.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to associate to a lens.</p>
     */
    inline ImportLensRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to associate to a lens.</p>
     */
    inline ImportLensRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to associate to a lens.</p>
     */
    inline ImportLensRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags to associate to a lens.</p>
     */
    inline ImportLensRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags to associate to a lens.</p>
     */
    inline ImportLensRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags to associate to a lens.</p>
     */
    inline ImportLensRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags to associate to a lens.</p>
     */
    inline ImportLensRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags to associate to a lens.</p>
     */
    inline ImportLensRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags to associate to a lens.</p>
     */
    inline ImportLensRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_lensAlias;
    bool m_lensAliasHasBeenSet = false;

    Aws::String m_jSONString;
    bool m_jSONStringHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
