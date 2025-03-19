/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/PublicAccessBlockConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/Region.h>
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
   * <p>A container for the information associated with a <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateMultiRegionAccessPoint.html">CreateMultiRegionAccessPoint</a>
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CreateMultiRegionAccessPointInput">AWS
   * API Reference</a></p>
   */
  class CreateMultiRegionAccessPointInput
  {
  public:
    AWS_S3CONTROL_API CreateMultiRegionAccessPointInput() = default;
    AWS_S3CONTROL_API CreateMultiRegionAccessPointInput(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API CreateMultiRegionAccessPointInput& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The name of the Multi-Region Access Point associated with this request.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateMultiRegionAccessPointInput& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const PublicAccessBlockConfiguration& GetPublicAccessBlock() const { return m_publicAccessBlock; }
    inline bool PublicAccessBlockHasBeenSet() const { return m_publicAccessBlockHasBeenSet; }
    template<typename PublicAccessBlockT = PublicAccessBlockConfiguration>
    void SetPublicAccessBlock(PublicAccessBlockT&& value) { m_publicAccessBlockHasBeenSet = true; m_publicAccessBlock = std::forward<PublicAccessBlockT>(value); }
    template<typename PublicAccessBlockT = PublicAccessBlockConfiguration>
    CreateMultiRegionAccessPointInput& WithPublicAccessBlock(PublicAccessBlockT&& value) { SetPublicAccessBlock(std::forward<PublicAccessBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The buckets in different Regions that are associated with the Multi-Region
     * Access Point.</p>
     */
    inline const Aws::Vector<Region>& GetRegions() const { return m_regions; }
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
    template<typename RegionsT = Aws::Vector<Region>>
    void SetRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions = std::forward<RegionsT>(value); }
    template<typename RegionsT = Aws::Vector<Region>>
    CreateMultiRegionAccessPointInput& WithRegions(RegionsT&& value) { SetRegions(std::forward<RegionsT>(value)); return *this;}
    template<typename RegionsT = Region>
    CreateMultiRegionAccessPointInput& AddRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions.emplace_back(std::forward<RegionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PublicAccessBlockConfiguration m_publicAccessBlock;
    bool m_publicAccessBlockHasBeenSet = false;

    Aws::Vector<Region> m_regions;
    bool m_regionsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
