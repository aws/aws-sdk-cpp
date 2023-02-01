/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/model/EgressAccessLogs.h>
#include <aws/mediapackage/model/HlsIngest.h>
#include <aws/mediapackage/model/IngressAccessLogs.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace MediaPackage
{
namespace Model
{

  /**
   * A Channel resource configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/Channel">AWS
   * API Reference</a></p>
   */
  class Channel
  {
  public:
    AWS_MEDIAPACKAGE_API Channel();
    AWS_MEDIAPACKAGE_API Channel(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API Channel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The Amazon Resource Name (ARN) assigned to the Channel.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The Amazon Resource Name (ARN) assigned to the Channel.
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) assigned to the Channel.
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * The Amazon Resource Name (ARN) assigned to the Channel.
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) assigned to the Channel.
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) assigned to the Channel.
     */
    inline Channel& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) assigned to the Channel.
     */
    inline Channel& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) assigned to the Channel.
     */
    inline Channel& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * A short text description of the Channel.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * A short text description of the Channel.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * A short text description of the Channel.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * A short text description of the Channel.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * A short text description of the Channel.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * A short text description of the Channel.
     */
    inline Channel& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A short text description of the Channel.
     */
    inline Channel& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A short text description of the Channel.
     */
    inline Channel& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const EgressAccessLogs& GetEgressAccessLogs() const{ return m_egressAccessLogs; }

    
    inline bool EgressAccessLogsHasBeenSet() const { return m_egressAccessLogsHasBeenSet; }

    
    inline void SetEgressAccessLogs(const EgressAccessLogs& value) { m_egressAccessLogsHasBeenSet = true; m_egressAccessLogs = value; }

    
    inline void SetEgressAccessLogs(EgressAccessLogs&& value) { m_egressAccessLogsHasBeenSet = true; m_egressAccessLogs = std::move(value); }

    
    inline Channel& WithEgressAccessLogs(const EgressAccessLogs& value) { SetEgressAccessLogs(value); return *this;}

    
    inline Channel& WithEgressAccessLogs(EgressAccessLogs&& value) { SetEgressAccessLogs(std::move(value)); return *this;}


    
    inline const HlsIngest& GetHlsIngest() const{ return m_hlsIngest; }

    
    inline bool HlsIngestHasBeenSet() const { return m_hlsIngestHasBeenSet; }

    
    inline void SetHlsIngest(const HlsIngest& value) { m_hlsIngestHasBeenSet = true; m_hlsIngest = value; }

    
    inline void SetHlsIngest(HlsIngest&& value) { m_hlsIngestHasBeenSet = true; m_hlsIngest = std::move(value); }

    
    inline Channel& WithHlsIngest(const HlsIngest& value) { SetHlsIngest(value); return *this;}

    
    inline Channel& WithHlsIngest(HlsIngest&& value) { SetHlsIngest(std::move(value)); return *this;}


    /**
     * The ID of the Channel.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of the Channel.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The ID of the Channel.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The ID of the Channel.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The ID of the Channel.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The ID of the Channel.
     */
    inline Channel& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of the Channel.
     */
    inline Channel& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of the Channel.
     */
    inline Channel& WithId(const char* value) { SetId(value); return *this;}


    
    inline const IngressAccessLogs& GetIngressAccessLogs() const{ return m_ingressAccessLogs; }

    
    inline bool IngressAccessLogsHasBeenSet() const { return m_ingressAccessLogsHasBeenSet; }

    
    inline void SetIngressAccessLogs(const IngressAccessLogs& value) { m_ingressAccessLogsHasBeenSet = true; m_ingressAccessLogs = value; }

    
    inline void SetIngressAccessLogs(IngressAccessLogs&& value) { m_ingressAccessLogsHasBeenSet = true; m_ingressAccessLogs = std::move(value); }

    
    inline Channel& WithIngressAccessLogs(const IngressAccessLogs& value) { SetIngressAccessLogs(value); return *this;}

    
    inline Channel& WithIngressAccessLogs(IngressAccessLogs&& value) { SetIngressAccessLogs(std::move(value)); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline Channel& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline Channel& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline Channel& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    
    inline Channel& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline Channel& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline Channel& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline Channel& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline Channel& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline Channel& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    EgressAccessLogs m_egressAccessLogs;
    bool m_egressAccessLogsHasBeenSet = false;

    HlsIngest m_hlsIngest;
    bool m_hlsIngestHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    IngressAccessLogs m_ingressAccessLogs;
    bool m_ingressAccessLogsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
