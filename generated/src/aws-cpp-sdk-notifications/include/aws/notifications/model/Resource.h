/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Notifications
{
namespace Model
{

  /**
   * <p>A resource affected by or closely linked to an event.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/Resource">AWS
   * API Reference</a></p>
   */
  class Resource
  {
  public:
    AWS_NOTIFICATIONS_API Resource();
    AWS_NOTIFICATIONS_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the resource.</p> <p>At least one id or ARN is
     * required.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Resource& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Resource& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Resource& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource. At least one id or ARN is
     * required.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Resource& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Resource& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Resource& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the resource's detail page. If a detail page URL is unavailable,
     * it is the URL to an informational page that describes the resource's type.</p>
     */
    inline const Aws::String& GetDetailUrl() const{ return m_detailUrl; }
    inline bool DetailUrlHasBeenSet() const { return m_detailUrlHasBeenSet; }
    inline void SetDetailUrl(const Aws::String& value) { m_detailUrlHasBeenSet = true; m_detailUrl = value; }
    inline void SetDetailUrl(Aws::String&& value) { m_detailUrlHasBeenSet = true; m_detailUrl = std::move(value); }
    inline void SetDetailUrl(const char* value) { m_detailUrlHasBeenSet = true; m_detailUrl.assign(value); }
    inline Resource& WithDetailUrl(const Aws::String& value) { SetDetailUrl(value); return *this;}
    inline Resource& WithDetailUrl(Aws::String&& value) { SetDetailUrl(std::move(value)); return *this;}
    inline Resource& WithDetailUrl(const char* value) { SetDetailUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of tags assigned to a resource. A tag is a string-to-string map of
     * key-value pairs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Resource& WithTags(const Aws::Vector<Aws::String>& value) { SetTags(value); return *this;}
    inline Resource& WithTags(Aws::Vector<Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Resource& AddTags(const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline Resource& AddTags(Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    inline Resource& AddTags(const char* value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_detailUrl;
    bool m_detailUrlHasBeenSet = false;

    Aws::Vector<Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
