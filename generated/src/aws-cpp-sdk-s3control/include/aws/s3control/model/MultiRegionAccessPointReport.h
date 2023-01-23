/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/s3control/model/PublicAccessBlockConfiguration.h>
#include <aws/s3control/model/MultiRegionAccessPointStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/RegionReport.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>A collection of statuses for a Multi-Region Access Point in the various
   * Regions it supports.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/MultiRegionAccessPointReport">AWS
   * API Reference</a></p>
   */
  class MultiRegionAccessPointReport
  {
  public:
    AWS_S3CONTROL_API MultiRegionAccessPointReport();
    AWS_S3CONTROL_API MultiRegionAccessPointReport(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API MultiRegionAccessPointReport& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The name of the Multi-Region Access Point.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Multi-Region Access Point.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Multi-Region Access Point.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Multi-Region Access Point.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Multi-Region Access Point.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Multi-Region Access Point.</p>
     */
    inline MultiRegionAccessPointReport& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Multi-Region Access Point.</p>
     */
    inline MultiRegionAccessPointReport& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Multi-Region Access Point.</p>
     */
    inline MultiRegionAccessPointReport& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The alias for the Multi-Region Access Point. For more information about the
     * distinction between the name and the alias of an Multi-Region Access Point, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/CreatingMultiRegionAccessPoints.html#multi-region-access-point-naming">Managing
     * Multi-Region Access Points</a>.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>The alias for the Multi-Region Access Point. For more information about the
     * distinction between the name and the alias of an Multi-Region Access Point, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/CreatingMultiRegionAccessPoints.html#multi-region-access-point-naming">Managing
     * Multi-Region Access Points</a>.</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>The alias for the Multi-Region Access Point. For more information about the
     * distinction between the name and the alias of an Multi-Region Access Point, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/CreatingMultiRegionAccessPoints.html#multi-region-access-point-naming">Managing
     * Multi-Region Access Points</a>.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>The alias for the Multi-Region Access Point. For more information about the
     * distinction between the name and the alias of an Multi-Region Access Point, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/CreatingMultiRegionAccessPoints.html#multi-region-access-point-naming">Managing
     * Multi-Region Access Points</a>.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>The alias for the Multi-Region Access Point. For more information about the
     * distinction between the name and the alias of an Multi-Region Access Point, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/CreatingMultiRegionAccessPoints.html#multi-region-access-point-naming">Managing
     * Multi-Region Access Points</a>.</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>The alias for the Multi-Region Access Point. For more information about the
     * distinction between the name and the alias of an Multi-Region Access Point, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/CreatingMultiRegionAccessPoints.html#multi-region-access-point-naming">Managing
     * Multi-Region Access Points</a>.</p>
     */
    inline MultiRegionAccessPointReport& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The alias for the Multi-Region Access Point. For more information about the
     * distinction between the name and the alias of an Multi-Region Access Point, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/CreatingMultiRegionAccessPoints.html#multi-region-access-point-naming">Managing
     * Multi-Region Access Points</a>.</p>
     */
    inline MultiRegionAccessPointReport& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>The alias for the Multi-Region Access Point. For more information about the
     * distinction between the name and the alias of an Multi-Region Access Point, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/CreatingMultiRegionAccessPoints.html#multi-region-access-point-naming">Managing
     * Multi-Region Access Points</a>.</p>
     */
    inline MultiRegionAccessPointReport& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p>When the Multi-Region Access Point create request was received.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>When the Multi-Region Access Point create request was received.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>When the Multi-Region Access Point create request was received.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>When the Multi-Region Access Point create request was received.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>When the Multi-Region Access Point create request was received.</p>
     */
    inline MultiRegionAccessPointReport& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>When the Multi-Region Access Point create request was received.</p>
     */
    inline MultiRegionAccessPointReport& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    
    inline const PublicAccessBlockConfiguration& GetPublicAccessBlock() const{ return m_publicAccessBlock; }

    
    inline bool PublicAccessBlockHasBeenSet() const { return m_publicAccessBlockHasBeenSet; }

    
    inline void SetPublicAccessBlock(const PublicAccessBlockConfiguration& value) { m_publicAccessBlockHasBeenSet = true; m_publicAccessBlock = value; }

    
    inline void SetPublicAccessBlock(PublicAccessBlockConfiguration&& value) { m_publicAccessBlockHasBeenSet = true; m_publicAccessBlock = std::move(value); }

    
    inline MultiRegionAccessPointReport& WithPublicAccessBlock(const PublicAccessBlockConfiguration& value) { SetPublicAccessBlock(value); return *this;}

    
    inline MultiRegionAccessPointReport& WithPublicAccessBlock(PublicAccessBlockConfiguration&& value) { SetPublicAccessBlock(std::move(value)); return *this;}


    /**
     * <p>The current status of the Multi-Region Access Point.</p> <p>
     * <code>CREATING</code> and <code>DELETING</code> are temporary states that exist
     * while the request is propagating and being completed. If a Multi-Region Access
     * Point has a status of <code>PARTIALLY_CREATED</code>, you can retry creation or
     * send a request to delete the Multi-Region Access Point. If a Multi-Region Access
     * Point has a status of <code>PARTIALLY_DELETED</code>, you can retry a delete
     * request to finish the deletion of the Multi-Region Access Point.</p>
     */
    inline const MultiRegionAccessPointStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the Multi-Region Access Point.</p> <p>
     * <code>CREATING</code> and <code>DELETING</code> are temporary states that exist
     * while the request is propagating and being completed. If a Multi-Region Access
     * Point has a status of <code>PARTIALLY_CREATED</code>, you can retry creation or
     * send a request to delete the Multi-Region Access Point. If a Multi-Region Access
     * Point has a status of <code>PARTIALLY_DELETED</code>, you can retry a delete
     * request to finish the deletion of the Multi-Region Access Point.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the Multi-Region Access Point.</p> <p>
     * <code>CREATING</code> and <code>DELETING</code> are temporary states that exist
     * while the request is propagating and being completed. If a Multi-Region Access
     * Point has a status of <code>PARTIALLY_CREATED</code>, you can retry creation or
     * send a request to delete the Multi-Region Access Point. If a Multi-Region Access
     * Point has a status of <code>PARTIALLY_DELETED</code>, you can retry a delete
     * request to finish the deletion of the Multi-Region Access Point.</p>
     */
    inline void SetStatus(const MultiRegionAccessPointStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the Multi-Region Access Point.</p> <p>
     * <code>CREATING</code> and <code>DELETING</code> are temporary states that exist
     * while the request is propagating and being completed. If a Multi-Region Access
     * Point has a status of <code>PARTIALLY_CREATED</code>, you can retry creation or
     * send a request to delete the Multi-Region Access Point. If a Multi-Region Access
     * Point has a status of <code>PARTIALLY_DELETED</code>, you can retry a delete
     * request to finish the deletion of the Multi-Region Access Point.</p>
     */
    inline void SetStatus(MultiRegionAccessPointStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the Multi-Region Access Point.</p> <p>
     * <code>CREATING</code> and <code>DELETING</code> are temporary states that exist
     * while the request is propagating and being completed. If a Multi-Region Access
     * Point has a status of <code>PARTIALLY_CREATED</code>, you can retry creation or
     * send a request to delete the Multi-Region Access Point. If a Multi-Region Access
     * Point has a status of <code>PARTIALLY_DELETED</code>, you can retry a delete
     * request to finish the deletion of the Multi-Region Access Point.</p>
     */
    inline MultiRegionAccessPointReport& WithStatus(const MultiRegionAccessPointStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the Multi-Region Access Point.</p> <p>
     * <code>CREATING</code> and <code>DELETING</code> are temporary states that exist
     * while the request is propagating and being completed. If a Multi-Region Access
     * Point has a status of <code>PARTIALLY_CREATED</code>, you can retry creation or
     * send a request to delete the Multi-Region Access Point. If a Multi-Region Access
     * Point has a status of <code>PARTIALLY_DELETED</code>, you can retry a delete
     * request to finish the deletion of the Multi-Region Access Point.</p>
     */
    inline MultiRegionAccessPointReport& WithStatus(MultiRegionAccessPointStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A collection of the Regions and buckets associated with the Multi-Region
     * Access Point.</p>
     */
    inline const Aws::Vector<RegionReport>& GetRegions() const{ return m_regions; }

    /**
     * <p>A collection of the Regions and buckets associated with the Multi-Region
     * Access Point.</p>
     */
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }

    /**
     * <p>A collection of the Regions and buckets associated with the Multi-Region
     * Access Point.</p>
     */
    inline void SetRegions(const Aws::Vector<RegionReport>& value) { m_regionsHasBeenSet = true; m_regions = value; }

    /**
     * <p>A collection of the Regions and buckets associated with the Multi-Region
     * Access Point.</p>
     */
    inline void SetRegions(Aws::Vector<RegionReport>&& value) { m_regionsHasBeenSet = true; m_regions = std::move(value); }

    /**
     * <p>A collection of the Regions and buckets associated with the Multi-Region
     * Access Point.</p>
     */
    inline MultiRegionAccessPointReport& WithRegions(const Aws::Vector<RegionReport>& value) { SetRegions(value); return *this;}

    /**
     * <p>A collection of the Regions and buckets associated with the Multi-Region
     * Access Point.</p>
     */
    inline MultiRegionAccessPointReport& WithRegions(Aws::Vector<RegionReport>&& value) { SetRegions(std::move(value)); return *this;}

    /**
     * <p>A collection of the Regions and buckets associated with the Multi-Region
     * Access Point.</p>
     */
    inline MultiRegionAccessPointReport& AddRegions(const RegionReport& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

    /**
     * <p>A collection of the Regions and buckets associated with the Multi-Region
     * Access Point.</p>
     */
    inline MultiRegionAccessPointReport& AddRegions(RegionReport&& value) { m_regionsHasBeenSet = true; m_regions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    PublicAccessBlockConfiguration m_publicAccessBlock;
    bool m_publicAccessBlockHasBeenSet = false;

    MultiRegionAccessPointStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<RegionReport> m_regions;
    bool m_regionsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
