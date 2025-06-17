/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides a standard to identify security findings using OCSF.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/OcsfFindingIdentifier">AWS
   * API Reference</a></p>
   */
  class OcsfFindingIdentifier
  {
  public:
    AWS_SECURITYHUB_API OcsfFindingIdentifier() = default;
    AWS_SECURITYHUB_API OcsfFindingIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API OcsfFindingIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Finding cloud.account.uid, which is a unique identifier in the Amazon Web
     * Services account..</p>
     */
    inline const Aws::String& GetCloudAccountUid() const { return m_cloudAccountUid; }
    inline bool CloudAccountUidHasBeenSet() const { return m_cloudAccountUidHasBeenSet; }
    template<typename CloudAccountUidT = Aws::String>
    void SetCloudAccountUid(CloudAccountUidT&& value) { m_cloudAccountUidHasBeenSet = true; m_cloudAccountUid = std::forward<CloudAccountUidT>(value); }
    template<typename CloudAccountUidT = Aws::String>
    OcsfFindingIdentifier& WithCloudAccountUid(CloudAccountUidT&& value) { SetCloudAccountUid(std::forward<CloudAccountUidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Finding finding_info.uid, which is a unique identifier for the finding from
     * the finding provider.</p>
     */
    inline const Aws::String& GetFindingInfoUid() const { return m_findingInfoUid; }
    inline bool FindingInfoUidHasBeenSet() const { return m_findingInfoUidHasBeenSet; }
    template<typename FindingInfoUidT = Aws::String>
    void SetFindingInfoUid(FindingInfoUidT&& value) { m_findingInfoUidHasBeenSet = true; m_findingInfoUid = std::forward<FindingInfoUidT>(value); }
    template<typename FindingInfoUidT = Aws::String>
    OcsfFindingIdentifier& WithFindingInfoUid(FindingInfoUidT&& value) { SetFindingInfoUid(std::forward<FindingInfoUidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Finding metadata.product.uid, which is a unique identifier for the
     * product.</p>
     */
    inline const Aws::String& GetMetadataProductUid() const { return m_metadataProductUid; }
    inline bool MetadataProductUidHasBeenSet() const { return m_metadataProductUidHasBeenSet; }
    template<typename MetadataProductUidT = Aws::String>
    void SetMetadataProductUid(MetadataProductUidT&& value) { m_metadataProductUidHasBeenSet = true; m_metadataProductUid = std::forward<MetadataProductUidT>(value); }
    template<typename MetadataProductUidT = Aws::String>
    OcsfFindingIdentifier& WithMetadataProductUid(MetadataProductUidT&& value) { SetMetadataProductUid(std::forward<MetadataProductUidT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cloudAccountUid;
    bool m_cloudAccountUidHasBeenSet = false;

    Aws::String m_findingInfoUid;
    bool m_findingInfoUidHasBeenSet = false;

    Aws::String m_metadataProductUid;
    bool m_metadataProductUidHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
