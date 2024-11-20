/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/CacheBehavior.h>
#include <aws/core/utils/DateTime.h>
#include <aws/omics/model/RunCacheStatus.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>List entry for one run cache.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/RunCacheListItem">AWS
   * API Reference</a></p>
   */
  class RunCacheListItem
  {
  public:
    AWS_OMICS_API RunCacheListItem();
    AWS_OMICS_API RunCacheListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API RunCacheListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique resource identifier for the run cache.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline RunCacheListItem& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline RunCacheListItem& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline RunCacheListItem& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Default cache behavior for the run cache.</p>
     */
    inline const CacheBehavior& GetCacheBehavior() const{ return m_cacheBehavior; }
    inline bool CacheBehaviorHasBeenSet() const { return m_cacheBehaviorHasBeenSet; }
    inline void SetCacheBehavior(const CacheBehavior& value) { m_cacheBehaviorHasBeenSet = true; m_cacheBehavior = value; }
    inline void SetCacheBehavior(CacheBehavior&& value) { m_cacheBehaviorHasBeenSet = true; m_cacheBehavior = std::move(value); }
    inline RunCacheListItem& WithCacheBehavior(const CacheBehavior& value) { SetCacheBehavior(value); return *this;}
    inline RunCacheListItem& WithCacheBehavior(CacheBehavior&& value) { SetCacheBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 uri for the run cache data.</p>
     */
    inline const Aws::String& GetCacheS3Uri() const{ return m_cacheS3Uri; }
    inline bool CacheS3UriHasBeenSet() const { return m_cacheS3UriHasBeenSet; }
    inline void SetCacheS3Uri(const Aws::String& value) { m_cacheS3UriHasBeenSet = true; m_cacheS3Uri = value; }
    inline void SetCacheS3Uri(Aws::String&& value) { m_cacheS3UriHasBeenSet = true; m_cacheS3Uri = std::move(value); }
    inline void SetCacheS3Uri(const char* value) { m_cacheS3UriHasBeenSet = true; m_cacheS3Uri.assign(value); }
    inline RunCacheListItem& WithCacheS3Uri(const Aws::String& value) { SetCacheS3Uri(value); return *this;}
    inline RunCacheListItem& WithCacheS3Uri(Aws::String&& value) { SetCacheS3Uri(std::move(value)); return *this;}
    inline RunCacheListItem& WithCacheS3Uri(const char* value) { SetCacheS3Uri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that this run cache was created (an ISO 8601 formatted string).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline RunCacheListItem& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline RunCacheListItem& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for this run cache.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline RunCacheListItem& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline RunCacheListItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline RunCacheListItem& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the run cache.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RunCacheListItem& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RunCacheListItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RunCacheListItem& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run cache status.</p>
     */
    inline const RunCacheStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const RunCacheStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(RunCacheStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline RunCacheListItem& WithStatus(const RunCacheStatus& value) { SetStatus(value); return *this;}
    inline RunCacheListItem& WithStatus(RunCacheStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    CacheBehavior m_cacheBehavior;
    bool m_cacheBehaviorHasBeenSet = false;

    Aws::String m_cacheS3Uri;
    bool m_cacheS3UriHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RunCacheStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
