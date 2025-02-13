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
    AWS_STORAGEGATEWAY_API StartCacheReportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartCacheReport"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetFileShareARN() const{ return m_fileShareARN; }
    inline bool FileShareARNHasBeenSet() const { return m_fileShareARNHasBeenSet; }
    inline void SetFileShareARN(const Aws::String& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = value; }
    inline void SetFileShareARN(Aws::String&& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = std::move(value); }
    inline void SetFileShareARN(const char* value) { m_fileShareARNHasBeenSet = true; m_fileShareARN.assign(value); }
    inline StartCacheReportRequest& WithFileShareARN(const Aws::String& value) { SetFileShareARN(value); return *this;}
    inline StartCacheReportRequest& WithFileShareARN(Aws::String&& value) { SetFileShareARN(std::move(value)); return *this;}
    inline StartCacheReportRequest& WithFileShareARN(const char* value) { SetFileShareARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role used when saving the cache report to Amazon S3.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }
    inline StartCacheReportRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}
    inline StartCacheReportRequest& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}
    inline StartCacheReportRequest& WithRole(const char* value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon S3 bucket where the cache report will be saved.</p>
     *  <p>We do not recommend saving the cache report to the same Amazon S3
     * bucket for which you are generating the report.</p> <p>This field does not
     * accept access point ARNs.</p> 
     */
    inline const Aws::String& GetLocationARN() const{ return m_locationARN; }
    inline bool LocationARNHasBeenSet() const { return m_locationARNHasBeenSet; }
    inline void SetLocationARN(const Aws::String& value) { m_locationARNHasBeenSet = true; m_locationARN = value; }
    inline void SetLocationARN(Aws::String&& value) { m_locationARNHasBeenSet = true; m_locationARN = std::move(value); }
    inline void SetLocationARN(const char* value) { m_locationARNHasBeenSet = true; m_locationARN.assign(value); }
    inline StartCacheReportRequest& WithLocationARN(const Aws::String& value) { SetLocationARN(value); return *this;}
    inline StartCacheReportRequest& WithLocationARN(Aws::String&& value) { SetLocationARN(std::move(value)); return *this;}
    inline StartCacheReportRequest& WithLocationARN(const char* value) { SetLocationARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the Amazon S3 bucket associated with the
     * file share for which you want to generate the cache report.</p>
     */
    inline const Aws::String& GetBucketRegion() const{ return m_bucketRegion; }
    inline bool BucketRegionHasBeenSet() const { return m_bucketRegionHasBeenSet; }
    inline void SetBucketRegion(const Aws::String& value) { m_bucketRegionHasBeenSet = true; m_bucketRegion = value; }
    inline void SetBucketRegion(Aws::String&& value) { m_bucketRegionHasBeenSet = true; m_bucketRegion = std::move(value); }
    inline void SetBucketRegion(const char* value) { m_bucketRegionHasBeenSet = true; m_bucketRegion.assign(value); }
    inline StartCacheReportRequest& WithBucketRegion(const Aws::String& value) { SetBucketRegion(value); return *this;}
    inline StartCacheReportRequest& WithBucketRegion(Aws::String&& value) { SetBucketRegion(std::move(value)); return *this;}
    inline StartCacheReportRequest& WithBucketRegion(const char* value) { SetBucketRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name of the VPC endpoint associated with the Amazon S3 where you want
     * to save the cache report. Optional.</p>
     */
    inline const Aws::String& GetVPCEndpointDNSName() const{ return m_vPCEndpointDNSName; }
    inline bool VPCEndpointDNSNameHasBeenSet() const { return m_vPCEndpointDNSNameHasBeenSet; }
    inline void SetVPCEndpointDNSName(const Aws::String& value) { m_vPCEndpointDNSNameHasBeenSet = true; m_vPCEndpointDNSName = value; }
    inline void SetVPCEndpointDNSName(Aws::String&& value) { m_vPCEndpointDNSNameHasBeenSet = true; m_vPCEndpointDNSName = std::move(value); }
    inline void SetVPCEndpointDNSName(const char* value) { m_vPCEndpointDNSNameHasBeenSet = true; m_vPCEndpointDNSName.assign(value); }
    inline StartCacheReportRequest& WithVPCEndpointDNSName(const Aws::String& value) { SetVPCEndpointDNSName(value); return *this;}
    inline StartCacheReportRequest& WithVPCEndpointDNSName(Aws::String&& value) { SetVPCEndpointDNSName(std::move(value)); return *this;}
    inline StartCacheReportRequest& WithVPCEndpointDNSName(const char* value) { SetVPCEndpointDNSName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of filters and parameters that determine which files are included in
     * the report. You must specify at least one value for
     * <code>InclusionFilters</code> or <code>ExclusionFilters</code> in a
     * <code>StartCacheReport</code> request.</p>
     */
    inline const Aws::Vector<CacheReportFilter>& GetInclusionFilters() const{ return m_inclusionFilters; }
    inline bool InclusionFiltersHasBeenSet() const { return m_inclusionFiltersHasBeenSet; }
    inline void SetInclusionFilters(const Aws::Vector<CacheReportFilter>& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters = value; }
    inline void SetInclusionFilters(Aws::Vector<CacheReportFilter>&& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters = std::move(value); }
    inline StartCacheReportRequest& WithInclusionFilters(const Aws::Vector<CacheReportFilter>& value) { SetInclusionFilters(value); return *this;}
    inline StartCacheReportRequest& WithInclusionFilters(Aws::Vector<CacheReportFilter>&& value) { SetInclusionFilters(std::move(value)); return *this;}
    inline StartCacheReportRequest& AddInclusionFilters(const CacheReportFilter& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters.push_back(value); return *this; }
    inline StartCacheReportRequest& AddInclusionFilters(CacheReportFilter&& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of filters and parameters that determine which files are excluded
     * from the report. You must specify at least one value for
     * <code>InclusionFilters</code> or <code>ExclusionFilters</code> in a
     * <code>StartCacheReport</code> request.</p>
     */
    inline const Aws::Vector<CacheReportFilter>& GetExclusionFilters() const{ return m_exclusionFilters; }
    inline bool ExclusionFiltersHasBeenSet() const { return m_exclusionFiltersHasBeenSet; }
    inline void SetExclusionFilters(const Aws::Vector<CacheReportFilter>& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters = value; }
    inline void SetExclusionFilters(Aws::Vector<CacheReportFilter>&& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters = std::move(value); }
    inline StartCacheReportRequest& WithExclusionFilters(const Aws::Vector<CacheReportFilter>& value) { SetExclusionFilters(value); return *this;}
    inline StartCacheReportRequest& WithExclusionFilters(Aws::Vector<CacheReportFilter>&& value) { SetExclusionFilters(std::move(value)); return *this;}
    inline StartCacheReportRequest& AddExclusionFilters(const CacheReportFilter& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters.push_back(value); return *this; }
    inline StartCacheReportRequest& AddExclusionFilters(CacheReportFilter&& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique identifier that you use to ensure idempotent report generation if
     * you need to retry an unsuccessful <code>StartCacheReport</code> request. If you
     * retry a request, use the same <code>ClientToken</code> you specified in the
     * initial request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline StartCacheReportRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline StartCacheReportRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline StartCacheReportRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to 50 key/value tags that you can assign to the cache report.
     * Using tags can help you categorize your reports and more easily locate them in
     * search results.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline StartCacheReportRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline StartCacheReportRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline StartCacheReportRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline StartCacheReportRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
