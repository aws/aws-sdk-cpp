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
    AWS_S3CONTROL_API MultiRegionAccessPointReport() = default;
    AWS_S3CONTROL_API MultiRegionAccessPointReport(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API MultiRegionAccessPointReport& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The name of the Multi-Region Access Point.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MultiRegionAccessPointReport& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias for the Multi-Region Access Point. For more information about the
     * distinction between the name and the alias of an Multi-Region Access Point, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/CreatingMultiRegionAccessPoints.html#multi-region-access-point-naming">Rules
     * for naming Amazon S3 Multi-Region Access Points</a>.</p>
     */
    inline const Aws::String& GetAlias() const { return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    template<typename AliasT = Aws::String>
    void SetAlias(AliasT&& value) { m_aliasHasBeenSet = true; m_alias = std::forward<AliasT>(value); }
    template<typename AliasT = Aws::String>
    MultiRegionAccessPointReport& WithAlias(AliasT&& value) { SetAlias(std::forward<AliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the Multi-Region Access Point create request was received.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    MultiRegionAccessPointReport& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const PublicAccessBlockConfiguration& GetPublicAccessBlock() const { return m_publicAccessBlock; }
    inline bool PublicAccessBlockHasBeenSet() const { return m_publicAccessBlockHasBeenSet; }
    template<typename PublicAccessBlockT = PublicAccessBlockConfiguration>
    void SetPublicAccessBlock(PublicAccessBlockT&& value) { m_publicAccessBlockHasBeenSet = true; m_publicAccessBlock = std::forward<PublicAccessBlockT>(value); }
    template<typename PublicAccessBlockT = PublicAccessBlockConfiguration>
    MultiRegionAccessPointReport& WithPublicAccessBlock(PublicAccessBlockT&& value) { SetPublicAccessBlock(std::forward<PublicAccessBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the Multi-Region Access Point.</p> <p>
     * <code>CREATING</code> and <code>DELETING</code> are temporary states that exist
     * while the request is propagating and being completed. If a Multi-Region Access
     * Point has a status of <code>PARTIALLY_CREATED</code>, you can retry creation or
     * send a request to delete the Multi-Region Access Point. If a Multi-Region Access
     * Point has a status of <code>PARTIALLY_DELETED</code>, you can retry a delete
     * request to finish the deletion of the Multi-Region Access Point.</p>
     */
    inline MultiRegionAccessPointStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(MultiRegionAccessPointStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline MultiRegionAccessPointReport& WithStatus(MultiRegionAccessPointStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of the Regions and buckets associated with the Multi-Region
     * Access Point.</p>
     */
    inline const Aws::Vector<RegionReport>& GetRegions() const { return m_regions; }
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
    template<typename RegionsT = Aws::Vector<RegionReport>>
    void SetRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions = std::forward<RegionsT>(value); }
    template<typename RegionsT = Aws::Vector<RegionReport>>
    MultiRegionAccessPointReport& WithRegions(RegionsT&& value) { SetRegions(std::forward<RegionsT>(value)); return *this;}
    template<typename RegionsT = RegionReport>
    MultiRegionAccessPointReport& AddRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions.emplace_back(std::forward<RegionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    PublicAccessBlockConfiguration m_publicAccessBlock;
    bool m_publicAccessBlockHasBeenSet = false;

    MultiRegionAccessPointStatus m_status{MultiRegionAccessPointStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<RegionReport> m_regions;
    bool m_regionsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
