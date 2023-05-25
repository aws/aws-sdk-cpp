/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Outposts
{
namespace Model
{

  /**
   */
  class UpdateSiteRequest : public OutpostsRequest
  {
  public:
    AWS_OUTPOSTS_API UpdateSiteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSite"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;


    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline const Aws::String& GetSiteId() const{ return m_siteId; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline bool SiteIdHasBeenSet() const { return m_siteIdHasBeenSet; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline void SetSiteId(const Aws::String& value) { m_siteIdHasBeenSet = true; m_siteId = value; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline void SetSiteId(Aws::String&& value) { m_siteIdHasBeenSet = true; m_siteId = std::move(value); }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline void SetSiteId(const char* value) { m_siteIdHasBeenSet = true; m_siteId.assign(value); }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline UpdateSiteRequest& WithSiteId(const Aws::String& value) { SetSiteId(value); return *this;}

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline UpdateSiteRequest& WithSiteId(Aws::String&& value) { SetSiteId(std::move(value)); return *this;}

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline UpdateSiteRequest& WithSiteId(const char* value) { SetSiteId(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline UpdateSiteRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline UpdateSiteRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline UpdateSiteRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline UpdateSiteRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline UpdateSiteRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline UpdateSiteRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Notes about a site.</p>
     */
    inline const Aws::String& GetNotes() const{ return m_notes; }

    /**
     * <p>Notes about a site.</p>
     */
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }

    /**
     * <p>Notes about a site.</p>
     */
    inline void SetNotes(const Aws::String& value) { m_notesHasBeenSet = true; m_notes = value; }

    /**
     * <p>Notes about a site.</p>
     */
    inline void SetNotes(Aws::String&& value) { m_notesHasBeenSet = true; m_notes = std::move(value); }

    /**
     * <p>Notes about a site.</p>
     */
    inline void SetNotes(const char* value) { m_notesHasBeenSet = true; m_notes.assign(value); }

    /**
     * <p>Notes about a site.</p>
     */
    inline UpdateSiteRequest& WithNotes(const Aws::String& value) { SetNotes(value); return *this;}

    /**
     * <p>Notes about a site.</p>
     */
    inline UpdateSiteRequest& WithNotes(Aws::String&& value) { SetNotes(std::move(value)); return *this;}

    /**
     * <p>Notes about a site.</p>
     */
    inline UpdateSiteRequest& WithNotes(const char* value) { SetNotes(value); return *this;}

  private:

    Aws::String m_siteId;
    bool m_siteIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_notes;
    bool m_notesHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
