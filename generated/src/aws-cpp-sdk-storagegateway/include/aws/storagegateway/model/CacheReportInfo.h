/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/CacheReportStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/CacheReportFilter.h>
#include <aws/storagegateway/model/Tag.h>
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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Contains all informational fields associated with a cache report. Includes
   * name, ARN, tags, status, progress, filters, start time, and end
   * time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CacheReportInfo">AWS
   * API Reference</a></p>
   */
  class CacheReportInfo
  {
  public:
    AWS_STORAGEGATEWAY_API CacheReportInfo() = default;
    AWS_STORAGEGATEWAY_API CacheReportInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API CacheReportInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cache report you want to describe.</p>
     */
    inline const Aws::String& GetCacheReportARN() const { return m_cacheReportARN; }
    inline bool CacheReportARNHasBeenSet() const { return m_cacheReportARNHasBeenSet; }
    template<typename CacheReportARNT = Aws::String>
    void SetCacheReportARN(CacheReportARNT&& value) { m_cacheReportARNHasBeenSet = true; m_cacheReportARN = std::forward<CacheReportARNT>(value); }
    template<typename CacheReportARNT = Aws::String>
    CacheReportInfo& WithCacheReportARN(CacheReportARNT&& value) { SetCacheReportARN(std::forward<CacheReportARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the specified cache report.</p>
     */
    inline CacheReportStatus GetCacheReportStatus() const { return m_cacheReportStatus; }
    inline bool CacheReportStatusHasBeenSet() const { return m_cacheReportStatusHasBeenSet; }
    inline void SetCacheReportStatus(CacheReportStatus value) { m_cacheReportStatusHasBeenSet = true; m_cacheReportStatus = value; }
    inline CacheReportInfo& WithCacheReportStatus(CacheReportStatus value) { SetCacheReportStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of the report generation process that has been completed at
     * time of inquiry.</p>
     */
    inline int GetReportCompletionPercent() const { return m_reportCompletionPercent; }
    inline bool ReportCompletionPercentHasBeenSet() const { return m_reportCompletionPercentHasBeenSet; }
    inline void SetReportCompletionPercent(int value) { m_reportCompletionPercentHasBeenSet = true; m_reportCompletionPercent = value; }
    inline CacheReportInfo& WithReportCompletionPercent(int value) { SetReportCompletionPercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the gateway stopped generating the cache report.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    CacheReportInfo& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    CacheReportInfo& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFileShareARN() const { return m_fileShareARN; }
    inline bool FileShareARNHasBeenSet() const { return m_fileShareARNHasBeenSet; }
    template<typename FileShareARNT = Aws::String>
    void SetFileShareARN(FileShareARNT&& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = std::forward<FileShareARNT>(value); }
    template<typename FileShareARNT = Aws::String>
    CacheReportInfo& WithFileShareARN(FileShareARNT&& value) { SetFileShareARN(std::forward<FileShareARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon S3 bucket location where the cache report is saved.</p>
     */
    inline const Aws::String& GetLocationARN() const { return m_locationARN; }
    inline bool LocationARNHasBeenSet() const { return m_locationARNHasBeenSet; }
    template<typename LocationARNT = Aws::String>
    void SetLocationARN(LocationARNT&& value) { m_locationARNHasBeenSet = true; m_locationARN = std::forward<LocationARNT>(value); }
    template<typename LocationARNT = Aws::String>
    CacheReportInfo& WithLocationARN(LocationARNT&& value) { SetLocationARN(std::forward<LocationARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the gateway started generating the cache report.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    CacheReportInfo& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of filters and parameters that determine which files are included in
     * the report.</p>
     */
    inline const Aws::Vector<CacheReportFilter>& GetInclusionFilters() const { return m_inclusionFilters; }
    inline bool InclusionFiltersHasBeenSet() const { return m_inclusionFiltersHasBeenSet; }
    template<typename InclusionFiltersT = Aws::Vector<CacheReportFilter>>
    void SetInclusionFilters(InclusionFiltersT&& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters = std::forward<InclusionFiltersT>(value); }
    template<typename InclusionFiltersT = Aws::Vector<CacheReportFilter>>
    CacheReportInfo& WithInclusionFilters(InclusionFiltersT&& value) { SetInclusionFilters(std::forward<InclusionFiltersT>(value)); return *this;}
    template<typename InclusionFiltersT = CacheReportFilter>
    CacheReportInfo& AddInclusionFilters(InclusionFiltersT&& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters.emplace_back(std::forward<InclusionFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of filters and parameters that determine which files are excluded
     * from the report.</p>
     */
    inline const Aws::Vector<CacheReportFilter>& GetExclusionFilters() const { return m_exclusionFilters; }
    inline bool ExclusionFiltersHasBeenSet() const { return m_exclusionFiltersHasBeenSet; }
    template<typename ExclusionFiltersT = Aws::Vector<CacheReportFilter>>
    void SetExclusionFilters(ExclusionFiltersT&& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters = std::forward<ExclusionFiltersT>(value); }
    template<typename ExclusionFiltersT = Aws::Vector<CacheReportFilter>>
    CacheReportInfo& WithExclusionFilters(ExclusionFiltersT&& value) { SetExclusionFilters(std::forward<ExclusionFiltersT>(value)); return *this;}
    template<typename ExclusionFiltersT = CacheReportFilter>
    CacheReportInfo& AddExclusionFilters(ExclusionFiltersT&& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters.emplace_back(std::forward<ExclusionFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The file name of the completed cache report object stored in Amazon S3.</p>
     */
    inline const Aws::String& GetReportName() const { return m_reportName; }
    inline bool ReportNameHasBeenSet() const { return m_reportNameHasBeenSet; }
    template<typename ReportNameT = Aws::String>
    void SetReportName(ReportNameT&& value) { m_reportNameHasBeenSet = true; m_reportName = std::forward<ReportNameT>(value); }
    template<typename ReportNameT = Aws::String>
    CacheReportInfo& WithReportName(ReportNameT&& value) { SetReportName(std::forward<ReportNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of key/value tags associated with the report.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CacheReportInfo& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CacheReportInfo& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_cacheReportARN;
    bool m_cacheReportARNHasBeenSet = false;

    CacheReportStatus m_cacheReportStatus{CacheReportStatus::NOT_SET};
    bool m_cacheReportStatusHasBeenSet = false;

    int m_reportCompletionPercent{0};
    bool m_reportCompletionPercentHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_fileShareARN;
    bool m_fileShareARNHasBeenSet = false;

    Aws::String m_locationARN;
    bool m_locationARNHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Vector<CacheReportFilter> m_inclusionFilters;
    bool m_inclusionFiltersHasBeenSet = false;

    Aws::Vector<CacheReportFilter> m_exclusionFilters;
    bool m_exclusionFiltersHasBeenSet = false;

    Aws::String m_reportName;
    bool m_reportNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
