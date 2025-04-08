/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/CacheReportFilter.h>
#include <aws/storagegateway/model/Tag.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class StartCacheReportRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API StartCacheReportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartCacheReport"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetFileShareARN() const { return m_fileShareARN; }
    inline bool FileShareARNHasBeenSet() const { return m_fileShareARNHasBeenSet; }
    template<typename FileShareARNT = Aws::String>
    void SetFileShareARN(FileShareARNT&& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = std::forward<FileShareARNT>(value); }
    template<typename FileShareARNT = Aws::String>
    StartCacheReportRequest& WithFileShareARN(FileShareARNT&& value) { SetFileShareARN(std::forward<FileShareARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role used when saving the cache report to Amazon S3.</p>
     */
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    StartCacheReportRequest& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon S3 bucket where you want to save the cache report.</p>
     *  <p>We do not recommend saving the cache report to the same Amazon S3
     * bucket for which you are generating the report.</p> <p>This field does not
     * accept access point ARNs.</p> 
     */
    inline const Aws::String& GetLocationARN() const { return m_locationARN; }
    inline bool LocationARNHasBeenSet() const { return m_locationARNHasBeenSet; }
    template<typename LocationARNT = Aws::String>
    void SetLocationARN(LocationARNT&& value) { m_locationARNHasBeenSet = true; m_locationARN = std::forward<LocationARNT>(value); }
    template<typename LocationARNT = Aws::String>
    StartCacheReportRequest& WithLocationARN(LocationARNT&& value) { SetLocationARN(std::forward<LocationARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the Amazon S3 bucket where you want to save
     * the cache report.</p>
     */
    inline const Aws::String& GetBucketRegion() const { return m_bucketRegion; }
    inline bool BucketRegionHasBeenSet() const { return m_bucketRegionHasBeenSet; }
    template<typename BucketRegionT = Aws::String>
    void SetBucketRegion(BucketRegionT&& value) { m_bucketRegionHasBeenSet = true; m_bucketRegion = std::forward<BucketRegionT>(value); }
    template<typename BucketRegionT = Aws::String>
    StartCacheReportRequest& WithBucketRegion(BucketRegionT&& value) { SetBucketRegion(std::forward<BucketRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name of the VPC endpoint associated with the Amazon S3 where you want
     * to save the cache report. Optional.</p>
     */
    inline const Aws::String& GetVPCEndpointDNSName() const { return m_vPCEndpointDNSName; }
    inline bool VPCEndpointDNSNameHasBeenSet() const { return m_vPCEndpointDNSNameHasBeenSet; }
    template<typename VPCEndpointDNSNameT = Aws::String>
    void SetVPCEndpointDNSName(VPCEndpointDNSNameT&& value) { m_vPCEndpointDNSNameHasBeenSet = true; m_vPCEndpointDNSName = std::forward<VPCEndpointDNSNameT>(value); }
    template<typename VPCEndpointDNSNameT = Aws::String>
    StartCacheReportRequest& WithVPCEndpointDNSName(VPCEndpointDNSNameT&& value) { SetVPCEndpointDNSName(std::forward<VPCEndpointDNSNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of filters and parameters that determine which files are included in
     * the report. You must specify at least one value for
     * <code>InclusionFilters</code> or <code>ExclusionFilters</code> in a
     * <code>StartCacheReport</code> request.</p>
     */
    inline const Aws::Vector<CacheReportFilter>& GetInclusionFilters() const { return m_inclusionFilters; }
    inline bool InclusionFiltersHasBeenSet() const { return m_inclusionFiltersHasBeenSet; }
    template<typename InclusionFiltersT = Aws::Vector<CacheReportFilter>>
    void SetInclusionFilters(InclusionFiltersT&& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters = std::forward<InclusionFiltersT>(value); }
    template<typename InclusionFiltersT = Aws::Vector<CacheReportFilter>>
    StartCacheReportRequest& WithInclusionFilters(InclusionFiltersT&& value) { SetInclusionFilters(std::forward<InclusionFiltersT>(value)); return *this;}
    template<typename InclusionFiltersT = CacheReportFilter>
    StartCacheReportRequest& AddInclusionFilters(InclusionFiltersT&& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters.emplace_back(std::forward<InclusionFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of filters and parameters that determine which files are excluded
     * from the report. You must specify at least one value for
     * <code>InclusionFilters</code> or <code>ExclusionFilters</code> in a
     * <code>StartCacheReport</code> request.</p>
     */
    inline const Aws::Vector<CacheReportFilter>& GetExclusionFilters() const { return m_exclusionFilters; }
    inline bool ExclusionFiltersHasBeenSet() const { return m_exclusionFiltersHasBeenSet; }
    template<typename ExclusionFiltersT = Aws::Vector<CacheReportFilter>>
    void SetExclusionFilters(ExclusionFiltersT&& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters = std::forward<ExclusionFiltersT>(value); }
    template<typename ExclusionFiltersT = Aws::Vector<CacheReportFilter>>
    StartCacheReportRequest& WithExclusionFilters(ExclusionFiltersT&& value) { SetExclusionFilters(std::forward<ExclusionFiltersT>(value)); return *this;}
    template<typename ExclusionFiltersT = CacheReportFilter>
    StartCacheReportRequest& AddExclusionFilters(ExclusionFiltersT&& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters.emplace_back(std::forward<ExclusionFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique identifier that you use to ensure idempotent report generation if
     * you need to retry an unsuccessful <code>StartCacheReport</code> request. If you
     * retry a request, use the same <code>ClientToken</code> you specified in the
     * initial request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    StartCacheReportRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to 50 key/value tags that you can assign to the cache report.
     * Using tags can help you categorize your reports and more easily locate them in
     * search results.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    StartCacheReportRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    StartCacheReportRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_fileShareARN;
    bool m_fileShareARNHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_locationARN;
    bool m_locationARNHasBeenSet = false;

    Aws::String m_bucketRegion;
    bool m_bucketRegionHasBeenSet = false;

    Aws::String m_vPCEndpointDNSName;
    bool m_vPCEndpointDNSNameHasBeenSet = false;

    Aws::Vector<CacheReportFilter> m_inclusionFilters;
    bool m_inclusionFiltersHasBeenSet = false;

    Aws::Vector<CacheReportFilter> m_exclusionFilters;
    bool m_exclusionFiltersHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
