/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/omics/model/CacheBehavior.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Omics
{
namespace Model
{

  /**
   */
  class UpdateRunCacheRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API UpdateRunCacheRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRunCache"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Update the default run cache behavior.</p>
     */
    inline const CacheBehavior& GetCacheBehavior() const{ return m_cacheBehavior; }
    inline bool CacheBehaviorHasBeenSet() const { return m_cacheBehaviorHasBeenSet; }
    inline void SetCacheBehavior(const CacheBehavior& value) { m_cacheBehaviorHasBeenSet = true; m_cacheBehavior = value; }
    inline void SetCacheBehavior(CacheBehavior&& value) { m_cacheBehaviorHasBeenSet = true; m_cacheBehavior = std::move(value); }
    inline UpdateRunCacheRequest& WithCacheBehavior(const CacheBehavior& value) { SetCacheBehavior(value); return *this;}
    inline UpdateRunCacheRequest& WithCacheBehavior(CacheBehavior&& value) { SetCacheBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update the run cache description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateRunCacheRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateRunCacheRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateRunCacheRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the run cache you want to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateRunCacheRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateRunCacheRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateRunCacheRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update the name of the run cache.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateRunCacheRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateRunCacheRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateRunCacheRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    CacheBehavior m_cacheBehavior;
    bool m_cacheBehaviorHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
