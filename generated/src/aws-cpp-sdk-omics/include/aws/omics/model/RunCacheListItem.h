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
    AWS_OMICS_API RunCacheListItem() = default;
    AWS_OMICS_API RunCacheListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API RunCacheListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique resource identifier for the run cache.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    RunCacheListItem& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Default cache behavior for the run cache.</p>
     */
    inline CacheBehavior GetCacheBehavior() const { return m_cacheBehavior; }
    inline bool CacheBehaviorHasBeenSet() const { return m_cacheBehaviorHasBeenSet; }
    inline void SetCacheBehavior(CacheBehavior value) { m_cacheBehaviorHasBeenSet = true; m_cacheBehavior = value; }
    inline RunCacheListItem& WithCacheBehavior(CacheBehavior value) { SetCacheBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 uri for the run cache data.</p>
     */
    inline const Aws::String& GetCacheS3Uri() const { return m_cacheS3Uri; }
    inline bool CacheS3UriHasBeenSet() const { return m_cacheS3UriHasBeenSet; }
    template<typename CacheS3UriT = Aws::String>
    void SetCacheS3Uri(CacheS3UriT&& value) { m_cacheS3UriHasBeenSet = true; m_cacheS3Uri = std::forward<CacheS3UriT>(value); }
    template<typename CacheS3UriT = Aws::String>
    RunCacheListItem& WithCacheS3Uri(CacheS3UriT&& value) { SetCacheS3Uri(std::forward<CacheS3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that this run cache was created (an ISO 8601 formatted string).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    RunCacheListItem& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for this run cache.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    RunCacheListItem& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the run cache.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RunCacheListItem& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run cache status.</p>
     */
    inline RunCacheStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RunCacheStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline RunCacheListItem& WithStatus(RunCacheStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    CacheBehavior m_cacheBehavior{CacheBehavior::NOT_SET};
    bool m_cacheBehaviorHasBeenSet = false;

    Aws::String m_cacheS3Uri;
    bool m_cacheS3UriHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RunCacheStatus m_status{RunCacheStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
