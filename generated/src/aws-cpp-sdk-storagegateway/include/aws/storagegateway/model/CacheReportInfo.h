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
    AWS_STORAGEGATEWAY_API CacheReportInfo();
    AWS_STORAGEGATEWAY_API CacheReportInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API CacheReportInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cache report you want to describe.</p>
     */
    inline const Aws::String& GetCacheReportARN() const{ return m_cacheReportARN; }
    inline bool CacheReportARNHasBeenSet() const { return m_cacheReportARNHasBeenSet; }
    inline void SetCacheReportARN(const Aws::String& value) { m_cacheReportARNHasBeenSet = true; m_cacheReportARN = value; }
    inline void SetCacheReportARN(Aws::String&& value) { m_cacheReportARNHasBeenSet = true; m_cacheReportARN = std::move(value); }
    inline void SetCacheReportARN(const char* value) { m_cacheReportARNHasBeenSet = true; m_cacheReportARN.assign(value); }
    inline CacheReportInfo& WithCacheReportARN(const Aws::String& value) { SetCacheReportARN(value); return *this;}
    inline CacheReportInfo& WithCacheReportARN(Aws::String&& value) { SetCacheReportARN(std::move(value)); return *this;}
    inline CacheReportInfo& WithCacheReportARN(const char* value) { SetCacheReportARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the specified cache report.</p>
     */
    inline const CacheReportStatus& GetCacheReportStatus() const{ return m_cacheReportStatus; }
    inline bool CacheReportStatusHasBeenSet() const { return m_cacheReportStatusHasBeenSet; }
    inline void SetCacheReportStatus(const CacheReportStatus& value) { m_cacheReportStatusHasBeenSet = true; m_cacheReportStatus = value; }
    inline void SetCacheReportStatus(CacheReportStatus&& value) { m_cacheReportStatusHasBeenSet = true; m_cacheReportStatus = std::move(value); }
    inline CacheReportInfo& WithCacheReportStatus(const CacheReportStatus& value) { SetCacheReportStatus(value); return *this;}
    inline CacheReportInfo& WithCacheReportStatus(CacheReportStatus&& value) { SetCacheReportStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of the report generation process that has been completed at
     * time of inquiry.</p>
     */
    inline int GetReportCompletionPercent() const{ return m_reportCompletionPercent; }
    inline bool ReportCompletionPercentHasBeenSet() const { return m_reportCompletionPercentHasBeenSet; }
    inline void SetReportCompletionPercent(int value) { m_reportCompletionPercentHasBeenSet = true; m_reportCompletionPercent = value; }
    inline CacheReportInfo& WithReportCompletionPercent(int value) { SetReportCompletionPercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the gateway stopped generating the cache report.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline CacheReportInfo& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline CacheReportInfo& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }
    inline CacheReportInfo& WithRole(const Aws::String& value) { SetRole(value); return *this;}
    inline CacheReportInfo& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}
    inline CacheReportInfo& WithRole(const char* value) { SetRole(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFileShareARN() const{ return m_fileShareARN; }
    inline bool FileShareARNHasBeenSet() const { return m_fileShareARNHasBeenSet; }
    inline void SetFileShareARN(const Aws::String& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = value; }
    inline void SetFileShareARN(Aws::String&& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = std::move(value); }
    inline void SetFileShareARN(const char* value) { m_fileShareARNHasBeenSet = true; m_fileShareARN.assign(value); }
    inline CacheReportInfo& WithFileShareARN(const Aws::String& value) { SetFileShareARN(value); return *this;}
    inline CacheReportInfo& WithFileShareARN(Aws::String&& value) { SetFileShareARN(std::move(value)); return *this;}
    inline CacheReportInfo& WithFileShareARN(const char* value) { SetFileShareARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon S3 bucket location where the cache report is saved.</p>
     */
    inline const Aws::String& GetLocationARN() const{ return m_locationARN; }
    inline bool LocationARNHasBeenSet() const { return m_locationARNHasBeenSet; }
    inline void SetLocationARN(const Aws::String& value) { m_locationARNHasBeenSet = true; m_locationARN = value; }
    inline void SetLocationARN(Aws::String&& value) { m_locationARNHasBeenSet = true; m_locationARN = std::move(value); }
    inline void SetLocationARN(const char* value) { m_locationARNHasBeenSet = true; m_locationARN.assign(value); }
    inline CacheReportInfo& WithLocationARN(const Aws::String& value) { SetLocationARN(value); return *this;}
    inline CacheReportInfo& WithLocationARN(Aws::String&& value) { SetLocationARN(std::move(value)); return *this;}
    inline CacheReportInfo& WithLocationARN(const char* value) { SetLocationARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the gateway started generating the cache report.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline CacheReportInfo& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline CacheReportInfo& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of filters and parameters that determine which files are included in
     * the report.</p>
     */
    inline const Aws::Vector<CacheReportFilter>& GetInclusionFilters() const{ return m_inclusionFilters; }
    inline bool InclusionFiltersHasBeenSet() const { return m_inclusionFiltersHasBeenSet; }
    inline void SetInclusionFilters(const Aws::Vector<CacheReportFilter>& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters = value; }
    inline void SetInclusionFilters(Aws::Vector<CacheReportFilter>&& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters = std::move(value); }
    inline CacheReportInfo& WithInclusionFilters(const Aws::Vector<CacheReportFilter>& value) { SetInclusionFilters(value); return *this;}
    inline CacheReportInfo& WithInclusionFilters(Aws::Vector<CacheReportFilter>&& value) { SetInclusionFilters(std::move(value)); return *this;}
    inline CacheReportInfo& AddInclusionFilters(const CacheReportFilter& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters.push_back(value); return *this; }
    inline CacheReportInfo& AddInclusionFilters(CacheReportFilter&& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of filters and parameters that determine which files are excluded
     * from the report.</p>
     */
    inline const Aws::Vector<CacheReportFilter>& GetExclusionFilters() const{ return m_exclusionFilters; }
    inline bool ExclusionFiltersHasBeenSet() const { return m_exclusionFiltersHasBeenSet; }
    inline void SetExclusionFilters(const Aws::Vector<CacheReportFilter>& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters = value; }
    inline void SetExclusionFilters(Aws::Vector<CacheReportFilter>&& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters = std::move(value); }
    inline CacheReportInfo& WithExclusionFilters(const Aws::Vector<CacheReportFilter>& value) { SetExclusionFilters(value); return *this;}
    inline CacheReportInfo& WithExclusionFilters(Aws::Vector<CacheReportFilter>&& value) { SetExclusionFilters(std::move(value)); return *this;}
    inline CacheReportInfo& AddExclusionFilters(const CacheReportFilter& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters.push_back(value); return *this; }
    inline CacheReportInfo& AddExclusionFilters(CacheReportFilter&& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The file name of the completed cache report object stored in Amazon S3.</p>
     */
    inline const Aws::String& GetReportName() const{ return m_reportName; }
    inline bool ReportNameHasBeenSet() const { return m_reportNameHasBeenSet; }
    inline void SetReportName(const Aws::String& value) { m_reportNameHasBeenSet = true; m_reportName = value; }
    inline void SetReportName(Aws::String&& value) { m_reportNameHasBeenSet = true; m_reportName = std::move(value); }
    inline void SetReportName(const char* value) { m_reportNameHasBeenSet = true; m_reportName.assign(value); }
    inline CacheReportInfo& WithReportName(const Aws::String& value) { SetReportName(value); return *this;}
    inline CacheReportInfo& WithReportName(Aws::String&& value) { SetReportName(std::move(value)); return *this;}
    inline CacheReportInfo& WithReportName(const char* value) { SetReportName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of key/value tags associated with the report.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CacheReportInfo& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CacheReportInfo& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CacheReportInfo& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CacheReportInfo& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_cacheReportARN;
    bool m_cacheReportARNHasBeenSet = false;

    CacheReportStatus m_cacheReportStatus;
    bool m_cacheReportStatusHasBeenSet = false;

    int m_reportCompletionPercent;
    bool m_reportCompletionPercentHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_fileShareARN;
    bool m_fileShareARNHasBeenSet = false;

    Aws::String m_locationARN;
    bool m_locationARNHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
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
